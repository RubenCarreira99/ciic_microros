#include <Arduino.h>
#include "WiFi.h"
#include <stdio.h>

// microros ===================================================================
#include <micro_ros_arduino.h>
#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <rcl_interfaces/msg/log.h>

#include <ciic_ros_tasks_messages/msg/task_booking.h>

#include <std_msgs/msg/string.h>
#include <std_msgs/msg/int32.h>

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){printf("Failed status on line %d: %d. Aborting.\n",__LINE__,(int)temp_rc); vTaskDelete(NULL);}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){printf("Failed status on line %d: %d. Continuing.\n",__LINE__,(int)temp_rc);}}

rclc_executor_t executor;
rcl_subscription_t subscriber;
rcl_subscription_t subscriber2;
rcl_subscription_t subscriber_ping;
rcl_publisher_t publisher;
rcl_publisher_t publisher_timer;
rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;
rcl_timer_t timer;
ciic_ros_tasks_messages__msg__TaskBooking sub_msg;
ciic_ros_tasks_messages__msg__TaskBooking publish_msg;
std_msgs__msg__Int32 timer_msg;
std_msgs__msg__String car_move;

int booking_state=0;
int unreceived_responses = 0;
boolean response_rec = false;
const int own_id = 100;
const char * nspc = "/uros_nspc";

#define IN11 0  // Control Rotation of Motor A
#define IN12 2 
#define IN21 4  // Control Rotation of Motor B
#define IN22 5

void stop_tasks(){

    digitalWrite(IN11, LOW);
    digitalWrite(IN12, LOW);  
    digitalWrite(IN21, LOW); 
    digitalWrite(IN22, LOW);  

    booking_state=0;
    unreceived_responses = 0;
}

void my_timer_callback(rcl_timer_t * timer, int64_t last_call_time)
{

    //connection keeper system

    if(booking_state == 0){
        return;
    }

    if (timer != NULL) {

        if(response_rec == false){

            unreceived_responses++;
            Serial.println(unreceived_responses);

            if (unreceived_responses == 3)
            {
                stop_tasks();
            }
        
        } else {

            unreceived_responses = 0;

        }

        response_rec = false;

        timer_msg.data=1;

        RCCHECK(rcl_publish(&publisher_timer, (const void*) &timer_msg, NULL));

    } else {

        Serial.println("Error in timer_callback: timer parameter is NULL\n");

    }
}

void ping_sub_callback(const void * msgin){  

    //connection between client and performer verification

    const std_msgs__msg__Int32 * msg = (const std_msgs__msg__Int32 *)msgin;

    if(msg->data == 0){

        response_rec = true;

    }
}

void car_sub_callback(const void * msgin){  

    //remote control task

    if(booking_state != 1){

        return;

    } else {
        const std_msgs__msg__String* msg = (const std_msgs__msg__String *)msgin;
        
        
        if (strcmp(msg->data.data, "0")==0){
            //forward

            digitalWrite(IN11, LOW); 
            digitalWrite(IN12, HIGH); 
            digitalWrite(IN21, LOW); 
            digitalWrite(IN22, HIGH);  
        } else if (strcmp(msg->data.data, "1")==0){
            //backwards

            digitalWrite(IN11, HIGH);
            digitalWrite(IN12, LOW); 
            digitalWrite(IN21, HIGH);
            digitalWrite(IN22, LOW);  
        } else if (strcmp(msg->data.data, "2")==0) {
            //turns left

            digitalWrite(IN11, LOW); 
            digitalWrite(IN12, HIGH);  
            digitalWrite(IN21, HIGH); 
            digitalWrite(IN22, LOW); 
        } else if (strcmp(msg->data.data, "3")==0){
            //turns right

            digitalWrite(IN11, HIGH); 
            digitalWrite(IN12, LOW); 
            digitalWrite(IN21, LOW); 
            digitalWrite(IN22, HIGH); 
        } else if (strcmp(msg->data.data, "4")==0){
            //stops

            digitalWrite(IN11, LOW); 
            digitalWrite(IN12, LOW); 
            digitalWrite(IN21, LOW); 
            digitalWrite(IN22, LOW); 
        }else {

            //stops and redefines booking_state = 0
            stop_tasks();
                            
        }
    }   
}

void subscription_callback(const void * msgin)
{

    const ciic_ros_tasks_messages__msg__TaskBooking * msg = (const ciic_ros_tasks_messages__msg__TaskBooking *)msgin;
    
    //booking process between task_supplier and task_performer
 
    if (strlen(msg->action.data) < 1 || strcmp(msg->action.data, "B")==0 || booking_state == 1) {
        
        return;

    } else if (strcmp(msg->action.data, "A")==0){
       
        publish_msg.sender_id = own_id;

        publish_msg.recipient_id = msg->sender_id;

        strcpy(publish_msg.performer_identifier.data, "microros");
   
        strcpy(publish_msg.task_namespace.data, nspc);

        strcpy(publish_msg.action.data, "B");

        RCCHECK(rcl_publish(&publisher, (const void*) &publish_msg, NULL));

    } else if (strcmp(msg->action.data, "S")==0 && msg->recipient_id == own_id)
    {
        booking_state = 1;

        Serial.println("calls task_performer");
    }

}
    
void createEntities(){

    const int agent_port = 8888; //port
 
    //set_microros_wifi_transports("MEO-CFEC70", "09f8a4e7d1", "192.168.1.189", agent_port);
    //set_microros_wifi_transports("APBCR", "brunocr27", "192.168.95.36", agent_port);

    set_microros_wifi_transports("MEO-8E26B0", "GLORYHOLE69", "192.168.1.189", agent_port);
    //set_microros_wifi_transports("MEO-8E26B1-5G", "GLORYHOLE69", "192.168.1.185", agent_port);
    //set_microros_transports();

    delay(200);

    allocator = rcl_get_default_allocator();
  
    //memory allocation for all the string attributes of the msg pckg

    static char mem[10];
    static char mem1[20];
    static char mem2[20];
    static char mem_car[10];

    sub_msg.action.capacity=10;
    sub_msg.action.data = mem;
    sub_msg.action.size = 8;

    publish_msg.action.size = 8;
    publish_msg.action.capacity = 10;
    publish_msg.action.data= mem;

    publish_msg.performer_identifier.size = 20;
    publish_msg.performer_identifier.capacity = 20;
    publish_msg.performer_identifier.data= mem1;

    publish_msg.task_namespace.size = 20;
    publish_msg.task_namespace.capacity = 20;
    publish_msg.task_namespace.data= mem2;

    car_move.data.capacity = 10;
    car_move.data.size = 8;
    car_move.data.data = mem_car;

    //end of memory allocations

    // Initialize and modify options
    rcl_init_options_t init_options = rcl_get_zero_initialized_init_options();
    
    RCCHECK(rcl_init_options_init(&init_options, allocator));
   // RCCHECK(rcl_init_options_set_domain_id(&init_options, 30));

    // create support_options
    RCCHECK(rclc_support_init_with_options(&support, 0, NULL, &init_options, &allocator));
    
    //create node
    rclc_node_init_default(&node, "micro_ros_node", nspc, &support);

    //publishers initialization
    RCCHECK(rclc_publisher_init_default(
        &publisher,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(ciic_ros_tasks_messages, msg, TaskBooking),
        "/tasks_booking"));

    RCCHECK(rclc_publisher_init_default(
        &publisher_timer,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
        "ping"));

    //subscribers initialization
    RCCHECK(rclc_subscription_init_default(
        &subscriber,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(ciic_ros_tasks_messages, msg, TaskBooking),
        "/tasks_booking"));

    RCCHECK(rclc_subscription_init_default(
        &subscriber2,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, String),
        "cmd_car"));
    
    //subscriber_ping
    RCCHECK(rclc_subscription_init_default(
        &subscriber_ping,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
        "ping"));
       
    //create executor and add timer and subscribers to it
    // rclc_executor_t executor = rclc_executor_get_zero_initialized_executor();

    rclc_timer_init_default(&timer, &support, RCL_MS_TO_NS(5000), my_timer_callback);
    RCCHECK(rclc_executor_init(&executor, &support.context, 4, &allocator));
    RCCHECK(rclc_executor_add_timer(&executor, &timer));
    RCCHECK(rclc_executor_add_subscription(&executor, &subscriber, &sub_msg, &subscription_callback, ON_NEW_DATA));
    RCCHECK(rclc_executor_add_subscription(&executor, &subscriber2, &car_move, &car_sub_callback, ON_NEW_DATA));
    RCCHECK(rclc_executor_add_subscription(&executor, &subscriber_ping, &timer_msg, &ping_sub_callback, ON_NEW_DATA));
}

void setup()
{
    Serial.begin(115200);

    pinMode(IN11, OUTPUT);
    pinMode(IN12, OUTPUT);
    pinMode(IN21, OUTPUT);
    pinMode(IN22, OUTPUT);

    //the car is stopped at the beggining

    digitalWrite(IN11, LOW); // Input1 LOW = move forward
    digitalWrite(IN12, LOW);  // Input2 HIGH = move forward
    digitalWrite(IN21, LOW); // Input1 LOW = move forward
    digitalWrite(IN22, LOW);  // Input2 HIGH = move forward

    createEntities();

}

void loop()
{

    RCCHECK(rclc_executor_spin(&executor));


    //source this project's local_setup.bash for the booker to work ----  source ...../micro_ros_arduino/install/local_setup.bash


    //command to publish to control the car- source ros2 installation - ros2 topic pub --once /car_movement std_msgs/msg/String'{data: "W"}'
    //command to publish to the booking topic - ros2 topic pub --once /tasks_topic ciic_ros_tasks_messages/msg/TaskBooking '{action: "S"}'


    //command to run the agent in a container - sudo docker run -it --rm -v /dev:/dev --privileged --net=host microros/micro-ros-agent:foxy serial --dev /dev/ttyUSB0 --baud 115200
    // command to run installed agent - cd microros_ws - source instalation - ros2 run micro_ros_agent micro_ros_agent udp4 -p 8888

}