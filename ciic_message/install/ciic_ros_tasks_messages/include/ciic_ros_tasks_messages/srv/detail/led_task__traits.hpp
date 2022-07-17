// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ciic_ros_tasks_messages:srv/LedTask.idl
// generated code does not contain a copyright notice

#ifndef CIIC_ROS_TASKS_MESSAGES__SRV__DETAIL__LED_TASK__TRAITS_HPP_
#define CIIC_ROS_TASKS_MESSAGES__SRV__DETAIL__LED_TASK__TRAITS_HPP_

#include "ciic_ros_tasks_messages/srv/detail/led_task__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ciic_ros_tasks_messages::srv::LedTask_Request>()
{
  return "ciic_ros_tasks_messages::srv::LedTask_Request";
}

template<>
inline const char * name<ciic_ros_tasks_messages::srv::LedTask_Request>()
{
  return "ciic_ros_tasks_messages/srv/LedTask_Request";
}

template<>
struct has_fixed_size<ciic_ros_tasks_messages::srv::LedTask_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ciic_ros_tasks_messages::srv::LedTask_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ciic_ros_tasks_messages::srv::LedTask_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ciic_ros_tasks_messages::srv::LedTask_Response>()
{
  return "ciic_ros_tasks_messages::srv::LedTask_Response";
}

template<>
inline const char * name<ciic_ros_tasks_messages::srv::LedTask_Response>()
{
  return "ciic_ros_tasks_messages/srv/LedTask_Response";
}

template<>
struct has_fixed_size<ciic_ros_tasks_messages::srv::LedTask_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ciic_ros_tasks_messages::srv::LedTask_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ciic_ros_tasks_messages::srv::LedTask_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ciic_ros_tasks_messages::srv::LedTask>()
{
  return "ciic_ros_tasks_messages::srv::LedTask";
}

template<>
inline const char * name<ciic_ros_tasks_messages::srv::LedTask>()
{
  return "ciic_ros_tasks_messages/srv/LedTask";
}

template<>
struct has_fixed_size<ciic_ros_tasks_messages::srv::LedTask>
  : std::integral_constant<
    bool,
    has_fixed_size<ciic_ros_tasks_messages::srv::LedTask_Request>::value &&
    has_fixed_size<ciic_ros_tasks_messages::srv::LedTask_Response>::value
  >
{
};

template<>
struct has_bounded_size<ciic_ros_tasks_messages::srv::LedTask>
  : std::integral_constant<
    bool,
    has_bounded_size<ciic_ros_tasks_messages::srv::LedTask_Request>::value &&
    has_bounded_size<ciic_ros_tasks_messages::srv::LedTask_Response>::value
  >
{
};

template<>
struct is_service<ciic_ros_tasks_messages::srv::LedTask>
  : std::true_type
{
};

template<>
struct is_service_request<ciic_ros_tasks_messages::srv::LedTask_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ciic_ros_tasks_messages::srv::LedTask_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CIIC_ROS_TASKS_MESSAGES__SRV__DETAIL__LED_TASK__TRAITS_HPP_
