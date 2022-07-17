// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ciic_ros_tasks_messages:msg/TaskBooking.idl
// generated code does not contain a copyright notice

#ifndef CIIC_ROS_TASKS_MESSAGES__MSG__DETAIL__TASK_BOOKING__TRAITS_HPP_
#define CIIC_ROS_TASKS_MESSAGES__MSG__DETAIL__TASK_BOOKING__TRAITS_HPP_

#include "ciic_ros_tasks_messages/msg/detail/task_booking__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ciic_ros_tasks_messages::msg::TaskBooking>()
{
  return "ciic_ros_tasks_messages::msg::TaskBooking";
}

template<>
inline const char * name<ciic_ros_tasks_messages::msg::TaskBooking>()
{
  return "ciic_ros_tasks_messages/msg/TaskBooking";
}

template<>
struct has_fixed_size<ciic_ros_tasks_messages::msg::TaskBooking>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ciic_ros_tasks_messages::msg::TaskBooking>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ciic_ros_tasks_messages::msg::TaskBooking>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CIIC_ROS_TASKS_MESSAGES__MSG__DETAIL__TASK_BOOKING__TRAITS_HPP_
