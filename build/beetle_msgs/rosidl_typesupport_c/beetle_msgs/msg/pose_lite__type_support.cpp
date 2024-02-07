// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from beetle_msgs:msg/PoseLite.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "beetle_msgs/msg/detail/pose_lite__struct.h"
#include "beetle_msgs/msg/detail/pose_lite__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace beetle_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _PoseLite_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseLite_type_support_ids_t;

static const _PoseLite_type_support_ids_t _PoseLite_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PoseLite_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseLite_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseLite_type_support_symbol_names_t _PoseLite_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, beetle_msgs, msg, PoseLite)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beetle_msgs, msg, PoseLite)),
  }
};

typedef struct _PoseLite_type_support_data_t
{
  void * data[2];
} _PoseLite_type_support_data_t;

static _PoseLite_type_support_data_t _PoseLite_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseLite_message_typesupport_map = {
  2,
  "beetle_msgs",
  &_PoseLite_message_typesupport_ids.typesupport_identifier[0],
  &_PoseLite_message_typesupport_symbol_names.symbol_name[0],
  &_PoseLite_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PoseLite_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseLite_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace beetle_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, beetle_msgs, msg, PoseLite)() {
  return &::beetle_msgs::msg::rosidl_typesupport_c::PoseLite_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
