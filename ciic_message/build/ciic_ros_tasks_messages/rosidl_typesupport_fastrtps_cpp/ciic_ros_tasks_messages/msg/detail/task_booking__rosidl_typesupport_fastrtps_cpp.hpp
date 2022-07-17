// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from ciic_ros_tasks_messages:msg/TaskBooking.idl
// generated code does not contain a copyright notice

#ifndef CIIC_ROS_TASKS_MESSAGES__MSG__DETAIL__TASK_BOOKING__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define CIIC_ROS_TASKS_MESSAGES__MSG__DETAIL__TASK_BOOKING__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ciic_ros_tasks_messages/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "ciic_ros_tasks_messages/msg/detail/task_booking__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace ciic_ros_tasks_messages
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ciic_ros_tasks_messages
cdr_serialize(
  const ciic_ros_tasks_messages::msg::TaskBooking & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ciic_ros_tasks_messages
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ciic_ros_tasks_messages::msg::TaskBooking & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ciic_ros_tasks_messages
get_serialized_size(
  const ciic_ros_tasks_messages::msg::TaskBooking & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ciic_ros_tasks_messages
max_serialized_size_TaskBooking(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ciic_ros_tasks_messages

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ciic_ros_tasks_messages
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ciic_ros_tasks_messages, msg, TaskBooking)();

#ifdef __cplusplus
}
#endif

#endif  // CIIC_ROS_TASKS_MESSAGES__MSG__DETAIL__TASK_BOOKING__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
