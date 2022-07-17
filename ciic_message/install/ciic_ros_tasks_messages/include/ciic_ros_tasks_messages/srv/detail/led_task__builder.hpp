// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ciic_ros_tasks_messages:srv/LedTask.idl
// generated code does not contain a copyright notice

#ifndef CIIC_ROS_TASKS_MESSAGES__SRV__DETAIL__LED_TASK__BUILDER_HPP_
#define CIIC_ROS_TASKS_MESSAGES__SRV__DETAIL__LED_TASK__BUILDER_HPP_

#include "ciic_ros_tasks_messages/srv/detail/led_task__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ciic_ros_tasks_messages
{

namespace srv
{

namespace builder
{

class Init_LedTask_Request_value
{
public:
  explicit Init_LedTask_Request_value(::ciic_ros_tasks_messages::srv::LedTask_Request & msg)
  : msg_(msg)
  {}
  ::ciic_ros_tasks_messages::srv::LedTask_Request value(::ciic_ros_tasks_messages::srv::LedTask_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ciic_ros_tasks_messages::srv::LedTask_Request msg_;
};

class Init_LedTask_Request_task_type
{
public:
  Init_LedTask_Request_task_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedTask_Request_value task_type(::ciic_ros_tasks_messages::srv::LedTask_Request::_task_type_type arg)
  {
    msg_.task_type = std::move(arg);
    return Init_LedTask_Request_value(msg_);
  }

private:
  ::ciic_ros_tasks_messages::srv::LedTask_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ciic_ros_tasks_messages::srv::LedTask_Request>()
{
  return ciic_ros_tasks_messages::srv::builder::Init_LedTask_Request_task_type();
}

}  // namespace ciic_ros_tasks_messages


namespace ciic_ros_tasks_messages
{

namespace srv
{

namespace builder
{

class Init_LedTask_Response_result
{
public:
  Init_LedTask_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ciic_ros_tasks_messages::srv::LedTask_Response result(::ciic_ros_tasks_messages::srv::LedTask_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ciic_ros_tasks_messages::srv::LedTask_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ciic_ros_tasks_messages::srv::LedTask_Response>()
{
  return ciic_ros_tasks_messages::srv::builder::Init_LedTask_Response_result();
}

}  // namespace ciic_ros_tasks_messages

#endif  // CIIC_ROS_TASKS_MESSAGES__SRV__DETAIL__LED_TASK__BUILDER_HPP_
