// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from beetle_msgs:msg/TwistLite.idl
// generated code does not contain a copyright notice

#ifndef BEETLE_MSGS__MSG__DETAIL__TWIST_LITE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define BEETLE_MSGS__MSG__DETAIL__TWIST_LITE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "beetle_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "beetle_msgs/msg/detail/twist_lite__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace beetle_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beetle_msgs
cdr_serialize(
  const beetle_msgs::msg::TwistLite & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beetle_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  beetle_msgs::msg::TwistLite & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beetle_msgs
get_serialized_size(
  const beetle_msgs::msg::TwistLite & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beetle_msgs
max_serialized_size_TwistLite(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace beetle_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beetle_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, beetle_msgs, msg, TwistLite)();

#ifdef __cplusplus
}
#endif

#endif  // BEETLE_MSGS__MSG__DETAIL__TWIST_LITE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
