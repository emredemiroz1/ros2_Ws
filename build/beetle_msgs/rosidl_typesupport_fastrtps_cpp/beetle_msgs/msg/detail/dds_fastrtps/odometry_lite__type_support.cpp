// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from beetle_msgs:msg/OdometryLite.idl
// generated code does not contain a copyright notice
#include "beetle_msgs/msg/detail/odometry_lite__rosidl_typesupport_fastrtps_cpp.hpp"
#include "beetle_msgs/msg/detail/odometry_lite__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace beetle_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const beetle_msgs::msg::PoseLite &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  beetle_msgs::msg::PoseLite &);
size_t get_serialized_size(
  const beetle_msgs::msg::PoseLite &,
  size_t current_alignment);
size_t
max_serialized_size_PoseLite(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace beetle_msgs

namespace beetle_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const beetle_msgs::msg::TwistLite &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  beetle_msgs::msg::TwistLite &);
size_t get_serialized_size(
  const beetle_msgs::msg::TwistLite &,
  size_t current_alignment);
size_t
max_serialized_size_TwistLite(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace beetle_msgs


namespace beetle_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beetle_msgs
cdr_serialize(
  const beetle_msgs::msg::OdometryLite & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pose
  beetle_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.pose,
    cdr);
  // Member: twist
  beetle_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.twist,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beetle_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  beetle_msgs::msg::OdometryLite & ros_message)
{
  // Member: pose
  beetle_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.pose);

  // Member: twist
  beetle_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.twist);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beetle_msgs
get_serialized_size(
  const beetle_msgs::msg::OdometryLite & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pose

  current_alignment +=
    beetle_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.pose, current_alignment);
  // Member: twist

  current_alignment +=
    beetle_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.twist, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beetle_msgs
max_serialized_size_OdometryLite(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: pose
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        beetle_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PoseLite(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: twist
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        beetle_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TwistLite(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = beetle_msgs::msg::OdometryLite;
    is_plain =
      (
      offsetof(DataType, twist) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _OdometryLite__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const beetle_msgs::msg::OdometryLite *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OdometryLite__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<beetle_msgs::msg::OdometryLite *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OdometryLite__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const beetle_msgs::msg::OdometryLite *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OdometryLite__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_OdometryLite(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _OdometryLite__callbacks = {
  "beetle_msgs::msg",
  "OdometryLite",
  _OdometryLite__cdr_serialize,
  _OdometryLite__cdr_deserialize,
  _OdometryLite__get_serialized_size,
  _OdometryLite__max_serialized_size
};

static rosidl_message_type_support_t _OdometryLite__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OdometryLite__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace beetle_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_beetle_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<beetle_msgs::msg::OdometryLite>()
{
  return &beetle_msgs::msg::typesupport_fastrtps_cpp::_OdometryLite__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, beetle_msgs, msg, OdometryLite)() {
  return &beetle_msgs::msg::typesupport_fastrtps_cpp::_OdometryLite__handle;
}

#ifdef __cplusplus
}
#endif
