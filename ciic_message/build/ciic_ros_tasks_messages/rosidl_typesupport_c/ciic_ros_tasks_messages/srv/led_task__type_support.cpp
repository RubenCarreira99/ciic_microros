// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ciic_ros_tasks_messages:srv/LedTask.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ciic_ros_tasks_messages/msg/rosidl_typesupport_c__visibility_control.h"
#include "ciic_ros_tasks_messages/srv/detail/led_task__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ciic_ros_tasks_messages
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _LedTask_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LedTask_Request_type_support_ids_t;

static const _LedTask_Request_type_support_ids_t _LedTask_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _LedTask_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LedTask_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LedTask_Request_type_support_symbol_names_t _LedTask_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ciic_ros_tasks_messages, srv, LedTask_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ciic_ros_tasks_messages, srv, LedTask_Request)),
  }
};

typedef struct _LedTask_Request_type_support_data_t
{
  void * data[2];
} _LedTask_Request_type_support_data_t;

static _LedTask_Request_type_support_data_t _LedTask_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LedTask_Request_message_typesupport_map = {
  2,
  "ciic_ros_tasks_messages",
  &_LedTask_Request_message_typesupport_ids.typesupport_identifier[0],
  &_LedTask_Request_message_typesupport_symbol_names.symbol_name[0],
  &_LedTask_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LedTask_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LedTask_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ciic_ros_tasks_messages

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_ciic_ros_tasks_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ciic_ros_tasks_messages, srv, LedTask_Request)() {
  return &::ciic_ros_tasks_messages::srv::rosidl_typesupport_c::LedTask_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ciic_ros_tasks_messages/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "ciic_ros_tasks_messages/srv/detail/led_task__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ciic_ros_tasks_messages
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _LedTask_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LedTask_Response_type_support_ids_t;

static const _LedTask_Response_type_support_ids_t _LedTask_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _LedTask_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LedTask_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LedTask_Response_type_support_symbol_names_t _LedTask_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ciic_ros_tasks_messages, srv, LedTask_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ciic_ros_tasks_messages, srv, LedTask_Response)),
  }
};

typedef struct _LedTask_Response_type_support_data_t
{
  void * data[2];
} _LedTask_Response_type_support_data_t;

static _LedTask_Response_type_support_data_t _LedTask_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LedTask_Response_message_typesupport_map = {
  2,
  "ciic_ros_tasks_messages",
  &_LedTask_Response_message_typesupport_ids.typesupport_identifier[0],
  &_LedTask_Response_message_typesupport_symbol_names.symbol_name[0],
  &_LedTask_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LedTask_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LedTask_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ciic_ros_tasks_messages

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_ciic_ros_tasks_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ciic_ros_tasks_messages, srv, LedTask_Response)() {
  return &::ciic_ros_tasks_messages::srv::rosidl_typesupport_c::LedTask_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ciic_ros_tasks_messages/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ciic_ros_tasks_messages
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _LedTask_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LedTask_type_support_ids_t;

static const _LedTask_type_support_ids_t _LedTask_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _LedTask_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LedTask_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LedTask_type_support_symbol_names_t _LedTask_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ciic_ros_tasks_messages, srv, LedTask)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ciic_ros_tasks_messages, srv, LedTask)),
  }
};

typedef struct _LedTask_type_support_data_t
{
  void * data[2];
} _LedTask_type_support_data_t;

static _LedTask_type_support_data_t _LedTask_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LedTask_service_typesupport_map = {
  2,
  "ciic_ros_tasks_messages",
  &_LedTask_service_typesupport_ids.typesupport_identifier[0],
  &_LedTask_service_typesupport_symbol_names.symbol_name[0],
  &_LedTask_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t LedTask_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LedTask_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ciic_ros_tasks_messages

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_ciic_ros_tasks_messages
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ciic_ros_tasks_messages, srv, LedTask)() {
  return &::ciic_ros_tasks_messages::srv::rosidl_typesupport_c::LedTask_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
