// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ciic_ros_tasks_messages:srv/LedTask.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ciic_ros_tasks_messages/srv/detail/led_task__rosidl_typesupport_introspection_c.h"
#include "ciic_ros_tasks_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ciic_ros_tasks_messages/srv/detail/led_task__functions.h"
#include "ciic_ros_tasks_messages/srv/detail/led_task__struct.h"


// Include directives for member types
// Member `task_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LedTask_Request__rosidl_typesupport_introspection_c__LedTask_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ciic_ros_tasks_messages__srv__LedTask_Request__init(message_memory);
}

void LedTask_Request__rosidl_typesupport_introspection_c__LedTask_Request_fini_function(void * message_memory)
{
  ciic_ros_tasks_messages__srv__LedTask_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LedTask_Request__rosidl_typesupport_introspection_c__LedTask_Request_message_member_array[2] = {
  {
    "task_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ciic_ros_tasks_messages__srv__LedTask_Request, task_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ciic_ros_tasks_messages__srv__LedTask_Request, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LedTask_Request__rosidl_typesupport_introspection_c__LedTask_Request_message_members = {
  "ciic_ros_tasks_messages__srv",  // message namespace
  "LedTask_Request",  // message name
  2,  // number of fields
  sizeof(ciic_ros_tasks_messages__srv__LedTask_Request),
  LedTask_Request__rosidl_typesupport_introspection_c__LedTask_Request_message_member_array,  // message members
  LedTask_Request__rosidl_typesupport_introspection_c__LedTask_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  LedTask_Request__rosidl_typesupport_introspection_c__LedTask_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LedTask_Request__rosidl_typesupport_introspection_c__LedTask_Request_message_type_support_handle = {
  0,
  &LedTask_Request__rosidl_typesupport_introspection_c__LedTask_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ciic_ros_tasks_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ciic_ros_tasks_messages, srv, LedTask_Request)() {
  if (!LedTask_Request__rosidl_typesupport_introspection_c__LedTask_Request_message_type_support_handle.typesupport_identifier) {
    LedTask_Request__rosidl_typesupport_introspection_c__LedTask_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LedTask_Request__rosidl_typesupport_introspection_c__LedTask_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ciic_ros_tasks_messages/srv/detail/led_task__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ciic_ros_tasks_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ciic_ros_tasks_messages/srv/detail/led_task__functions.h"
// already included above
// #include "ciic_ros_tasks_messages/srv/detail/led_task__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LedTask_Response__rosidl_typesupport_introspection_c__LedTask_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ciic_ros_tasks_messages__srv__LedTask_Response__init(message_memory);
}

void LedTask_Response__rosidl_typesupport_introspection_c__LedTask_Response_fini_function(void * message_memory)
{
  ciic_ros_tasks_messages__srv__LedTask_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LedTask_Response__rosidl_typesupport_introspection_c__LedTask_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ciic_ros_tasks_messages__srv__LedTask_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LedTask_Response__rosidl_typesupport_introspection_c__LedTask_Response_message_members = {
  "ciic_ros_tasks_messages__srv",  // message namespace
  "LedTask_Response",  // message name
  1,  // number of fields
  sizeof(ciic_ros_tasks_messages__srv__LedTask_Response),
  LedTask_Response__rosidl_typesupport_introspection_c__LedTask_Response_message_member_array,  // message members
  LedTask_Response__rosidl_typesupport_introspection_c__LedTask_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  LedTask_Response__rosidl_typesupport_introspection_c__LedTask_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LedTask_Response__rosidl_typesupport_introspection_c__LedTask_Response_message_type_support_handle = {
  0,
  &LedTask_Response__rosidl_typesupport_introspection_c__LedTask_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ciic_ros_tasks_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ciic_ros_tasks_messages, srv, LedTask_Response)() {
  if (!LedTask_Response__rosidl_typesupport_introspection_c__LedTask_Response_message_type_support_handle.typesupport_identifier) {
    LedTask_Response__rosidl_typesupport_introspection_c__LedTask_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LedTask_Response__rosidl_typesupport_introspection_c__LedTask_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ciic_ros_tasks_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ciic_ros_tasks_messages/srv/detail/led_task__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ciic_ros_tasks_messages__srv__detail__led_task__rosidl_typesupport_introspection_c__LedTask_service_members = {
  "ciic_ros_tasks_messages__srv",  // service namespace
  "LedTask",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ciic_ros_tasks_messages__srv__detail__led_task__rosidl_typesupport_introspection_c__LedTask_Request_message_type_support_handle,
  NULL  // response message
  // ciic_ros_tasks_messages__srv__detail__led_task__rosidl_typesupport_introspection_c__LedTask_Response_message_type_support_handle
};

static rosidl_service_type_support_t ciic_ros_tasks_messages__srv__detail__led_task__rosidl_typesupport_introspection_c__LedTask_service_type_support_handle = {
  0,
  &ciic_ros_tasks_messages__srv__detail__led_task__rosidl_typesupport_introspection_c__LedTask_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ciic_ros_tasks_messages, srv, LedTask_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ciic_ros_tasks_messages, srv, LedTask_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ciic_ros_tasks_messages
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ciic_ros_tasks_messages, srv, LedTask)() {
  if (!ciic_ros_tasks_messages__srv__detail__led_task__rosidl_typesupport_introspection_c__LedTask_service_type_support_handle.typesupport_identifier) {
    ciic_ros_tasks_messages__srv__detail__led_task__rosidl_typesupport_introspection_c__LedTask_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ciic_ros_tasks_messages__srv__detail__led_task__rosidl_typesupport_introspection_c__LedTask_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ciic_ros_tasks_messages, srv, LedTask_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ciic_ros_tasks_messages, srv, LedTask_Response)()->data;
  }

  return &ciic_ros_tasks_messages__srv__detail__led_task__rosidl_typesupport_introspection_c__LedTask_service_type_support_handle;
}
