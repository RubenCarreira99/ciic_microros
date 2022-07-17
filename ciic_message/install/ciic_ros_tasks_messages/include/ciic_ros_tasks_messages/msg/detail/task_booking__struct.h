// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ciic_ros_tasks_messages:msg/TaskBooking.idl
// generated code does not contain a copyright notice

#ifndef CIIC_ROS_TASKS_MESSAGES__MSG__DETAIL__TASK_BOOKING__STRUCT_H_
#define CIIC_ROS_TASKS_MESSAGES__MSG__DETAIL__TASK_BOOKING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'task_namespace'
// Member 'action'
// Member 'performer_identifier'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/TaskBooking in the package ciic_ros_tasks_messages.
typedef struct ciic_ros_tasks_messages__msg__TaskBooking
{
  rosidl_runtime_c__String task_namespace;
  rosidl_runtime_c__String action;
  rosidl_runtime_c__String performer_identifier;
  int64_t sender_id;
  int64_t recipient_id;
} ciic_ros_tasks_messages__msg__TaskBooking;

// Struct for a sequence of ciic_ros_tasks_messages__msg__TaskBooking.
typedef struct ciic_ros_tasks_messages__msg__TaskBooking__Sequence
{
  ciic_ros_tasks_messages__msg__TaskBooking * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ciic_ros_tasks_messages__msg__TaskBooking__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CIIC_ROS_TASKS_MESSAGES__MSG__DETAIL__TASK_BOOKING__STRUCT_H_
