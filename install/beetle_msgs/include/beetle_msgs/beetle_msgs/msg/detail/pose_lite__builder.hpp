// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from beetle_msgs:msg/PoseLite.idl
// generated code does not contain a copyright notice

#ifndef BEETLE_MSGS__MSG__DETAIL__POSE_LITE__BUILDER_HPP_
#define BEETLE_MSGS__MSG__DETAIL__POSE_LITE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "beetle_msgs/msg/detail/pose_lite__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace beetle_msgs
{

namespace msg
{

namespace builder
{

class Init_PoseLite_theta
{
public:
  explicit Init_PoseLite_theta(::beetle_msgs::msg::PoseLite & msg)
  : msg_(msg)
  {}
  ::beetle_msgs::msg::PoseLite theta(::beetle_msgs::msg::PoseLite::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beetle_msgs::msg::PoseLite msg_;
};

class Init_PoseLite_y
{
public:
  explicit Init_PoseLite_y(::beetle_msgs::msg::PoseLite & msg)
  : msg_(msg)
  {}
  Init_PoseLite_theta y(::beetle_msgs::msg::PoseLite::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PoseLite_theta(msg_);
  }

private:
  ::beetle_msgs::msg::PoseLite msg_;
};

class Init_PoseLite_x
{
public:
  Init_PoseLite_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseLite_y x(::beetle_msgs::msg::PoseLite::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PoseLite_y(msg_);
  }

private:
  ::beetle_msgs::msg::PoseLite msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::beetle_msgs::msg::PoseLite>()
{
  return beetle_msgs::msg::builder::Init_PoseLite_x();
}

}  // namespace beetle_msgs

#endif  // BEETLE_MSGS__MSG__DETAIL__POSE_LITE__BUILDER_HPP_
