// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from beetle_msgs:msg/OdometryLite.idl
// generated code does not contain a copyright notice

#ifndef BEETLE_MSGS__MSG__DETAIL__ODOMETRY_LITE__BUILDER_HPP_
#define BEETLE_MSGS__MSG__DETAIL__ODOMETRY_LITE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "beetle_msgs/msg/detail/odometry_lite__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace beetle_msgs
{

namespace msg
{

namespace builder
{

class Init_OdometryLite_twist
{
public:
  explicit Init_OdometryLite_twist(::beetle_msgs::msg::OdometryLite & msg)
  : msg_(msg)
  {}
  ::beetle_msgs::msg::OdometryLite twist(::beetle_msgs::msg::OdometryLite::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beetle_msgs::msg::OdometryLite msg_;
};

class Init_OdometryLite_pose
{
public:
  Init_OdometryLite_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OdometryLite_twist pose(::beetle_msgs::msg::OdometryLite::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_OdometryLite_twist(msg_);
  }

private:
  ::beetle_msgs::msg::OdometryLite msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::beetle_msgs::msg::OdometryLite>()
{
  return beetle_msgs::msg::builder::Init_OdometryLite_pose();
}

}  // namespace beetle_msgs

#endif  // BEETLE_MSGS__MSG__DETAIL__ODOMETRY_LITE__BUILDER_HPP_
