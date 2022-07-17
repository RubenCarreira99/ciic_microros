// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ciic_ros_tasks_messages:srv/LedTask.idl
// generated code does not contain a copyright notice

#ifndef CIIC_ROS_TASKS_MESSAGES__SRV__DETAIL__LED_TASK__STRUCT_H_
#define CIIC_ROS_TASKS_MESSAGES__SRV__DETAIL__LED_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'task_type'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/LedTask in the package ciic_ros_tasks_messages.
typedef struct ciic_ros_tasks_messages__srv__LedTask_Request
{
  rosidl_runtime_c__String task_type;
  int64_t value;
} ciic_ros_tasks_messages__srv__LedTask_Request;

// Struct for a sequence of ciic_ros_tasks_messages__srv__LedTask_Request.
typedef struct ciic_ros_tasks_messages__srv__LedTask_Request__Sequence
{
  ciic_ros_tasks_messages__srv__LedTask_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ciic_ros_tasks_messages__srv__LedTask_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/LedTask in the package ciic_ros_tasks_messages.
typedef struct ciic_ros_tasks_messages__srv__LedTask_Response
{
  rosidl_runtime_c__String result;
} ciic_ros_tasks_messages__srv__LedTask_Response;

// Struct for a sequence of ciic_ros_tasks_messages__srv__LedTask_Response.
typedef struct ciic_ros_tasks_messages__srv__LedTask_Response__Sequence
{
  ciic_ros_tasks_messages__srv__LedTask_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ciic_ros_tasks_messages__srv__LedTask_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CIIC_ROS_TASKS_MESSAGES__SRV__DETAIL__LED_TASK__STRUCT_H_
