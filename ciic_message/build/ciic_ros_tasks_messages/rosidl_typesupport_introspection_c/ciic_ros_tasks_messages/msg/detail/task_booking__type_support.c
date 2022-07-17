// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ciic_ros_tasks_messages:msg/TaskBooking.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ciic_ros_tasks_messages/msg/detail/task_booking__rosidl_typesupport_introspection_c.h"
#include "ciic_ros_tasks_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ciic_ros_tasks_messages/msg/detail/task_booking__functions.h"
#include "ciic_ros_tasks_messages/msg/detail/task_booking__struct.h"


// Include directives for member types
// Member `task_namespace`
// Member `action`
// Member `performer_identifier`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TaskBooking__rosidl_typesupport_introspection_c__TaskBooking_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ciic_ros_tasks_messages__msg__TaskBooking__init(message_memory);
}

void TaskBooking__rosidl_typesupport_introspection_c__TaskBooking_fini_function(void * message_memory)
{
  ciic_ros_tasks_messages__msg__TaskBooking__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TaskBooking__rosidl_typesupport_introspection_c__TaskBooking_message_member_array[5] = {
  {
    "task_namespace",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ciic_ros_tasks_messages__msg__TaskBooking, task_namespace),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ciic_ros_tasks_messages__msg__TaskBooking, action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "performer_identifier",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ciic_ros_tasks_messages__msg__TaskBooking, performer_identifier),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sender_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ciic_ros_tasks_messages__msg__TaskBooking, sender_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "recipient_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ciic_ros_tasks_messages__msg__TaskBooking, recipient_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TaskBooking__rosidl_typesupport_introspection_c__TaskBooking_message_members = {
  "ciic_ros_tasks_messages__msg",  // message namespace
  "TaskBooking",  // message name
  5,  // number of fields
  sizeof(ciic_ros_tasks_messages__msg__TaskBooking),
  TaskBooking__rosidl_typesupport_introspection_c__TaskBooking_message_member_array,  // message members
  TaskBooking__rosidl_typesupport_introspection_c__TaskBooking_init_function,  // function to initialize message memory (memory has to be allocated)
  TaskBooking__rosidl_typesupport_introspection_c__TaskBooking_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TaskBooking__rosidl_typesupport_introspection_c__TaskBooking_message_type_support_handle = {
  0,
  &TaskBooking__rosidl_typesupport_introspection_c__TaskBooking_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ciic_ros_tasks_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ciic_ros_tasks_messages, msg, TaskBooking)() {
  if (!TaskBooking__rosidl_typesupport_introspection_c__TaskBooking_message_type_support_handle.typesupport_identifier) {
    TaskBooking__rosidl_typesupport_introspection_c__TaskBooking_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TaskBooking__rosidl_typesupport_introspection_c__TaskBooking_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
