// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ciic_ros_tasks_messages:msg/TaskBooking.idl
// generated code does not contain a copyright notice

#ifndef CIIC_ROS_TASKS_MESSAGES__MSG__DETAIL__TASK_BOOKING__BUILDER_HPP_
#define CIIC_ROS_TASKS_MESSAGES__MSG__DETAIL__TASK_BOOKING__BUILDER_HPP_

#include "ciic_ros_tasks_messages/msg/detail/task_booking__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ciic_ros_tasks_messages
{

namespace msg
{

namespace builder
{

class Init_TaskBooking_recipient_id
{
public:
  explicit Init_TaskBooking_recipient_id(::ciic_ros_tasks_messages::msg::TaskBooking & msg)
  : msg_(msg)
  {}
  ::ciic_ros_tasks_messages::msg::TaskBooking recipient_id(::ciic_ros_tasks_messages::msg::TaskBooking::_recipient_id_type arg)
  {
    msg_.recipient_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ciic_ros_tasks_messages::msg::TaskBooking msg_;
};

class Init_TaskBooking_sender_id
{
public:
  explicit Init_TaskBooking_sender_id(::ciic_ros_tasks_messages::msg::TaskBooking & msg)
  : msg_(msg)
  {}
  Init_TaskBooking_recipient_id sender_id(::ciic_ros_tasks_messages::msg::TaskBooking::_sender_id_type arg)
  {
    msg_.sender_id = std::move(arg);
    return Init_TaskBooking_recipient_id(msg_);
  }

private:
  ::ciic_ros_tasks_messages::msg::TaskBooking msg_;
};

class Init_TaskBooking_performer_identifier
{
public:
  explicit Init_TaskBooking_performer_identifier(::ciic_ros_tasks_messages::msg::TaskBooking & msg)
  : msg_(msg)
  {}
  Init_TaskBooking_sender_id performer_identifier(::ciic_ros_tasks_messages::msg::TaskBooking::_performer_identifier_type arg)
  {
    msg_.performer_identifier = std::move(arg);
    return Init_TaskBooking_sender_id(msg_);
  }

private:
  ::ciic_ros_tasks_messages::msg::TaskBooking msg_;
};

class Init_TaskBooking_action
{
public:
  explicit Init_TaskBooking_action(::ciic_ros_tasks_messages::msg::TaskBooking & msg)
  : msg_(msg)
  {}
  Init_TaskBooking_performer_identifier action(::ciic_ros_tasks_messages::msg::TaskBooking::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_TaskBooking_performer_identifier(msg_);
  }

private:
  ::ciic_ros_tasks_messages::msg::TaskBooking msg_;
};

class Init_TaskBooking_task_namespace
{
public:
  Init_TaskBooking_task_namespace()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskBooking_action task_namespace(::ciic_ros_tasks_messages::msg::TaskBooking::_task_namespace_type arg)
  {
    msg_.task_namespace = std::move(arg);
    return Init_TaskBooking_action(msg_);
  }

private:
  ::ciic_ros_tasks_messages::msg::TaskBooking msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ciic_ros_tasks_messages::msg::TaskBooking>()
{
  return ciic_ros_tasks_messages::msg::builder::Init_TaskBooking_task_namespace();
}

}  // namespace ciic_ros_tasks_messages

#endif  // CIIC_ROS_TASKS_MESSAGES__MSG__DETAIL__TASK_BOOKING__BUILDER_HPP_
