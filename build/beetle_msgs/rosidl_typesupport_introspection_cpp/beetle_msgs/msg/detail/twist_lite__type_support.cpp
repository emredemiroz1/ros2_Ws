// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from beetle_msgs:msg/TwistLite.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "beetle_msgs/msg/detail/twist_lite__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace beetle_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TwistLite_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) beetle_msgs::msg::TwistLite(_init);
}

void TwistLite_fini_function(void * message_memory)
{
  auto typed_message = static_cast<beetle_msgs::msg::TwistLite *>(message_memory);
  typed_message->~TwistLite();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TwistLite_message_member_array[2] = {
  {
    "linear",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beetle_msgs::msg::TwistLite, linear),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beetle_msgs::msg::TwistLite, angular),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TwistLite_message_members = {
  "beetle_msgs::msg",  // message namespace
  "TwistLite",  // message name
  2,  // number of fields
  sizeof(beetle_msgs::msg::TwistLite),
  TwistLite_message_member_array,  // message members
  TwistLite_init_function,  // function to initialize message memory (memory has to be allocated)
  TwistLite_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TwistLite_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TwistLite_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace beetle_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<beetle_msgs::msg::TwistLite>()
{
  return &::beetle_msgs::msg::rosidl_typesupport_introspection_cpp::TwistLite_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, beetle_msgs, msg, TwistLite)() {
  return &::beetle_msgs::msg::rosidl_typesupport_introspection_cpp::TwistLite_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
