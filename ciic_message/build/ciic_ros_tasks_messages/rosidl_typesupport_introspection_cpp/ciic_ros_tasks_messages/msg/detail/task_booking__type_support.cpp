// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ciic_ros_tasks_messages:msg/TaskBooking.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ciic_ros_tasks_messages/msg/detail/task_booking__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ciic_ros_tasks_messages
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TaskBooking_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ciic_ros_tasks_messages::msg::TaskBooking(_init);
}

void TaskBooking_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ciic_ros_tasks_messages::msg::TaskBooking *>(message_memory);
  typed_message->~TaskBooking();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TaskBooking_message_member_array[5] = {
  {
    "task_namespace",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ciic_ros_tasks_messages::msg::TaskBooking, task_namespace),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "action",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ciic_ros_tasks_messages::msg::TaskBooking, action),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "performer_identifier",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ciic_ros_tasks_messages::msg::TaskBooking, performer_identifier),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sender_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ciic_ros_tasks_messages::msg::TaskBooking, sender_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "recipient_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ciic_ros_tasks_messages::msg::TaskBooking, recipient_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TaskBooking_message_members = {
  "ciic_ros_tasks_messages::msg",  // message namespace
  "TaskBooking",  // message name
  5,  // number of fields
  sizeof(ciic_ros_tasks_messages::msg::TaskBooking),
  TaskBooking_message_member_array,  // message members
  TaskBooking_init_function,  // function to initialize message memory (memory has to be allocated)
  TaskBooking_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TaskBooking_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TaskBooking_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ciic_ros_tasks_messages


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ciic_ros_tasks_messages::msg::TaskBooking>()
{
  return &::ciic_ros_tasks_messages::msg::rosidl_typesupport_introspection_cpp::TaskBooking_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ciic_ros_tasks_messages, msg, TaskBooking)() {
  return &::ciic_ros_tasks_messages::msg::rosidl_typesupport_introspection_cpp::TaskBooking_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
