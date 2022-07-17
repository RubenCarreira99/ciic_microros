// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ciic_ros_tasks_messages:msg/TaskBooking.idl
// generated code does not contain a copyright notice

#ifndef CIIC_ROS_TASKS_MESSAGES__MSG__DETAIL__TASK_BOOKING__FUNCTIONS_H_
#define CIIC_ROS_TASKS_MESSAGES__MSG__DETAIL__TASK_BOOKING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ciic_ros_tasks_messages/msg/rosidl_generator_c__visibility_control.h"

#include "ciic_ros_tasks_messages/msg/detail/task_booking__struct.h"

/// Initialize msg/TaskBooking message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ciic_ros_tasks_messages__msg__TaskBooking
 * )) before or use
 * ciic_ros_tasks_messages__msg__TaskBooking__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ciic_ros_tasks_messages
bool
ciic_ros_tasks_messages__msg__TaskBooking__init(ciic_ros_tasks_messages__msg__TaskBooking * msg);

/// Finalize msg/TaskBooking message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ciic_ros_tasks_messages
void
ciic_ros_tasks_messages__msg__TaskBooking__fini(ciic_ros_tasks_messages__msg__TaskBooking * msg);

/// Create msg/TaskBooking message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ciic_ros_tasks_messages__msg__TaskBooking__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ciic_ros_tasks_messages
ciic_ros_tasks_messages__msg__TaskBooking *
ciic_ros_tasks_messages__msg__TaskBooking__create();

/// Destroy msg/TaskBooking message.
/**
 * It calls
 * ciic_ros_tasks_messages__msg__TaskBooking__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ciic_ros_tasks_messages
void
ciic_ros_tasks_messages__msg__TaskBooking__destroy(ciic_ros_tasks_messages__msg__TaskBooking * msg);


/// Initialize array of msg/TaskBooking messages.
/**
 * It allocates the memory for the number of elements and calls
 * ciic_ros_tasks_messages__msg__TaskBooking__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ciic_ros_tasks_messages
bool
ciic_ros_tasks_messages__msg__TaskBooking__Sequence__init(ciic_ros_tasks_messages__msg__TaskBooking__Sequence * array, size_t size);

/// Finalize array of msg/TaskBooking messages.
/**
 * It calls
 * ciic_ros_tasks_messages__msg__TaskBooking__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ciic_ros_tasks_messages
void
ciic_ros_tasks_messages__msg__TaskBooking__Sequence__fini(ciic_ros_tasks_messages__msg__TaskBooking__Sequence * array);

/// Create array of msg/TaskBooking messages.
/**
 * It allocates the memory for the array and calls
 * ciic_ros_tasks_messages__msg__TaskBooking__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ciic_ros_tasks_messages
ciic_ros_tasks_messages__msg__TaskBooking__Sequence *
ciic_ros_tasks_messages__msg__TaskBooking__Sequence__create(size_t size);

/// Destroy array of msg/TaskBooking messages.
/**
 * It calls
 * ciic_ros_tasks_messages__msg__TaskBooking__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ciic_ros_tasks_messages
void
ciic_ros_tasks_messages__msg__TaskBooking__Sequence__destroy(ciic_ros_tasks_messages__msg__TaskBooking__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CIIC_ROS_TASKS_MESSAGES__MSG__DETAIL__TASK_BOOKING__FUNCTIONS_H_
