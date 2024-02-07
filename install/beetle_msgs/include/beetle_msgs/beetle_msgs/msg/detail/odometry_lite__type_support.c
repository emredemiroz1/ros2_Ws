// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from beetle_msgs:msg/OdometryLite.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "beetle_msgs/msg/detail/odometry_lite__rosidl_typesupport_introspection_c.h"
#include "beetle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "beetle_msgs/msg/detail/odometry_lite__functions.h"
#include "beetle_msgs/msg/detail/odometry_lite__struct.h"


// Include directives for member types
// Member `pose`
#include "beetle_msgs/msg/pose_lite.h"
// Member `pose`
#include "beetle_msgs/msg/detail/pose_lite__rosidl_typesupport_introspection_c.h"
// Member `twist`
#include "beetle_msgs/msg/twist_lite.h"
// Member `twist`
#include "beetle_msgs/msg/detail/twist_lite__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void beetle_msgs__msg__OdometryLite__rosidl_typesupport_introspection_c__OdometryLite_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  beetle_msgs__msg__OdometryLite__init(message_memory);
}

void beetle_msgs__msg__OdometryLite__rosidl_typesupport_introspection_c__OdometryLite_fini_function(void * message_memory)
{
  beetle_msgs__msg__OdometryLite__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember beetle_msgs__msg__OdometryLite__rosidl_typesupport_introspection_c__OdometryLite_message_member_array[2] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beetle_msgs__msg__OdometryLite, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "twist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beetle_msgs__msg__OdometryLite, twist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers beetle_msgs__msg__OdometryLite__rosidl_typesupport_introspection_c__OdometryLite_message_members = {
  "beetle_msgs__msg",  // message namespace
  "OdometryLite",  // message name
  2,  // number of fields
  sizeof(beetle_msgs__msg__OdometryLite),
  beetle_msgs__msg__OdometryLite__rosidl_typesupport_introspection_c__OdometryLite_message_member_array,  // message members
  beetle_msgs__msg__OdometryLite__rosidl_typesupport_introspection_c__OdometryLite_init_function,  // function to initialize message memory (memory has to be allocated)
  beetle_msgs__msg__OdometryLite__rosidl_typesupport_introspection_c__OdometryLite_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t beetle_msgs__msg__OdometryLite__rosidl_typesupport_introspection_c__OdometryLite_message_type_support_handle = {
  0,
  &beetle_msgs__msg__OdometryLite__rosidl_typesupport_introspection_c__OdometryLite_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_beetle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beetle_msgs, msg, OdometryLite)() {
  beetle_msgs__msg__OdometryLite__rosidl_typesupport_introspection_c__OdometryLite_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beetle_msgs, msg, PoseLite)();
  beetle_msgs__msg__OdometryLite__rosidl_typesupport_introspection_c__OdometryLite_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beetle_msgs, msg, TwistLite)();
  if (!beetle_msgs__msg__OdometryLite__rosidl_typesupport_introspection_c__OdometryLite_message_type_support_handle.typesupport_identifier) {
    beetle_msgs__msg__OdometryLite__rosidl_typesupport_introspection_c__OdometryLite_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &beetle_msgs__msg__OdometryLite__rosidl_typesupport_introspection_c__OdometryLite_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
