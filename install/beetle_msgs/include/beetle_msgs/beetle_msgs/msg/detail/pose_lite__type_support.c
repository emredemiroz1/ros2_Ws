// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from beetle_msgs:msg/PoseLite.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "beetle_msgs/msg/detail/pose_lite__rosidl_typesupport_introspection_c.h"
#include "beetle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "beetle_msgs/msg/detail/pose_lite__functions.h"
#include "beetle_msgs/msg/detail/pose_lite__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void beetle_msgs__msg__PoseLite__rosidl_typesupport_introspection_c__PoseLite_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  beetle_msgs__msg__PoseLite__init(message_memory);
}

void beetle_msgs__msg__PoseLite__rosidl_typesupport_introspection_c__PoseLite_fini_function(void * message_memory)
{
  beetle_msgs__msg__PoseLite__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember beetle_msgs__msg__PoseLite__rosidl_typesupport_introspection_c__PoseLite_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beetle_msgs__msg__PoseLite, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beetle_msgs__msg__PoseLite, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beetle_msgs__msg__PoseLite, theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers beetle_msgs__msg__PoseLite__rosidl_typesupport_introspection_c__PoseLite_message_members = {
  "beetle_msgs__msg",  // message namespace
  "PoseLite",  // message name
  3,  // number of fields
  sizeof(beetle_msgs__msg__PoseLite),
  beetle_msgs__msg__PoseLite__rosidl_typesupport_introspection_c__PoseLite_message_member_array,  // message members
  beetle_msgs__msg__PoseLite__rosidl_typesupport_introspection_c__PoseLite_init_function,  // function to initialize message memory (memory has to be allocated)
  beetle_msgs__msg__PoseLite__rosidl_typesupport_introspection_c__PoseLite_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t beetle_msgs__msg__PoseLite__rosidl_typesupport_introspection_c__PoseLite_message_type_support_handle = {
  0,
  &beetle_msgs__msg__PoseLite__rosidl_typesupport_introspection_c__PoseLite_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_beetle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beetle_msgs, msg, PoseLite)() {
  if (!beetle_msgs__msg__PoseLite__rosidl_typesupport_introspection_c__PoseLite_message_type_support_handle.typesupport_identifier) {
    beetle_msgs__msg__PoseLite__rosidl_typesupport_introspection_c__PoseLite_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &beetle_msgs__msg__PoseLite__rosidl_typesupport_introspection_c__PoseLite_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
