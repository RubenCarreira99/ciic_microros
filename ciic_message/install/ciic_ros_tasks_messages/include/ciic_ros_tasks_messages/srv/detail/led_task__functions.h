// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ciic_ros_tasks_messages:srv/LedTask.idl
// generated code does not contain a copyright notice

#ifndef CIIC_ROS_TASKS_MESSAGES__SRV__DETAIL__LED_TASK__FUNCTIONS_H_
#define CIIC_ROS_TASKS_MESSAGES__SRV__DETAIL__LED_TASK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ciic_ros_tasks_messages/msg/rosidl_generator_c__visibility_control.h"

#include "ciic_ros_tasks_messages/srv/detail/led_task__struct.h"

/// Initialize srv/LedTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ciic_ros_tasks_messages__srv__LedTask_Request
 * )) before or use
 * ciic_ros_tasks_messages__srv__LedTask_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ciic_ros_tasks_messages
bool
ciic_ros_tasks_messages__srv__LedTask_Request__init(ciic_ros_tasks_messages__srv__LedTask_Request * msg);

/// Finalize srv/LedTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ciic_ros_tasks_messages
void
ciic_ros_tasks_messages__srv__LedTask_Request__fini(ciic_ros_tasks_messages__srv__LedTask_Request * msg);

/// Create srv/LedTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ciic_ros_tasks_messages__srv__LedTask_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ciic_ros_tasks_messages
ciic_ros_tasks_messages__srv__LedTask_Request *
ciic_ros_tasks_messages__srv__LedTask_Request__create();

/// Destroy srv/LedTask message.
/**
 * It calls
 * ciic_ros_tasks_messages__srv__LedTask_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ciic_ros_tasks_messages
void
ciic_ros_tasks_messages__srv__LedTask_Request__destroy(ciic_ros_tasks_messages__srv__LedTask_Request * msg);


/// Initialize array of srv/LedTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * ciic_ros_tasks_messages__srv__LedTask_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ciic_ros_tasks_messages
bool
ciic_ros_tasks_messages__srv__LedTask_Request__Sequence__init(ciic_ros_tasks_messages__srv__LedTask_Request__Sequence * array, size_t size);

/// Finalize array of srv/LedTask messages.
/**
 * It calls
 * ciic_ros_tasks_messages__srv__LedTask_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ciic_ros_tasks_messages
void
ciic_ros_tasks_messages__srv__LedTask_Request__Sequence__fini(ciic_ros_tasks_messages__srv__LedTask_Request__Sequence * array);

/// Create array of srv/LedTask messages.
/**
 * It allocates the memory for the array and calls
 * ciic_ros_tasks_messages__srv__LedTask_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ciic_ros_tasks_messages
ciic_ros_tasks_messages__srv__LedTask_Request__Sequence *
ciic_ros_tasks_messages__srv__LedTask_Request__Sequence__create(size_t size);

/// Destroy array of srv/LedTask messages.
/**
 * It calls
 * ciic_ros_tasks_messages__srv__LedTask_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ciic_ros_tasks_messages
void
ciic_ros_tasks_messages__srv__LedTask_Request__Sequence__destroy(ciic_ros_tasks_messages__srv__LedTask_Request__Sequence * array);

/// Initialize srv/LedTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ciic_ros_tasks_messages__srv__LedTask_Response
 * )) before or use
 * ciic_ros_tasks_messages__srv__LedTask_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ciic_ros_tasks_messages
bool
ciic_ros_tasks_messages__srv__LedTask_Response__init(ciic_ros_tasks_messages__srv__LedTask_Response * msg);

/// Finalize srv/LedTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ciic_ros_tasks_messages
void
ciic_ros_tasks_messages__srv__LedTask_Response__fini(ciic_ros_tasks_messages__srv__LedTask_Response * msg);

/// Create srv/LedTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ciic_ros_tasks_messages__srv__LedTask_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ciic_ros_tasks_messages
ciic_ros_tasks_messages__srv__LedTask_Response *
ciic_ros_tasks_messages__srv__LedTask_Response__create();

/// Destroy srv/LedTask message.
/**
 * It calls
 * ciic_ros_tasks_messages__srv__LedTask_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ciic_ros_tasks_messages
void
ciic_ros_tasks_messages__srv__LedTask_Response__destroy(ciic_ros_tasks_messages__srv__LedTask_Response * msg);


/// Initialize array of srv/LedTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * ciic_ros_tasks_messages__srv__LedTask_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ciic_ros_tasks_messages
bool
ciic_ros_tasks_messages__srv__LedTask_Response__Sequence__init(ciic_ros_tasks_messages__srv__LedTask_Response__Sequence * array, size_t size);

/// Finalize array of srv/LedTask messages.
/**
 * It calls
 * ciic_ros_tasks_messages__srv__LedTask_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ciic_ros_tasks_messages
void
ciic_ros_tasks_messages__srv__LedTask_Response__Sequence__fini(ciic_ros_tasks_messages__srv__LedTask_Response__Sequence * array);

/// Create array of srv/LedTask messages.
/**
 * It allocates the memory for the array and calls
 * ciic_ros_tasks_messages__srv__LedTask_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ciic_ros_tasks_messages
ciic_ros_tasks_messages__srv__LedTask_Response__Sequence *
ciic_ros_tasks_messages__srv__LedTask_Response__Sequence__create(size_t size);

/// Destroy array of srv/LedTask messages.
/**
 * It calls
 * ciic_ros_tasks_messages__srv__LedTask_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ciic_ros_tasks_messages
void
ciic_ros_tasks_messages__srv__LedTask_Response__Sequence__destroy(ciic_ros_tasks_messages__srv__LedTask_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CIIC_ROS_TASKS_MESSAGES__SRV__DETAIL__LED_TASK__FUNCTIONS_H_
