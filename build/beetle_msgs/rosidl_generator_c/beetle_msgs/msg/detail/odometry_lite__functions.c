// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from beetle_msgs:msg/OdometryLite.idl
// generated code does not contain a copyright notice
#include "beetle_msgs/msg/detail/odometry_lite__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "beetle_msgs/msg/detail/pose_lite__functions.h"
// Member `twist`
#include "beetle_msgs/msg/detail/twist_lite__functions.h"

bool
beetle_msgs__msg__OdometryLite__init(beetle_msgs__msg__OdometryLite * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!beetle_msgs__msg__PoseLite__init(&msg->pose)) {
    beetle_msgs__msg__OdometryLite__fini(msg);
    return false;
  }
  // twist
  if (!beetle_msgs__msg__TwistLite__init(&msg->twist)) {
    beetle_msgs__msg__OdometryLite__fini(msg);
    return false;
  }
  return true;
}

void
beetle_msgs__msg__OdometryLite__fini(beetle_msgs__msg__OdometryLite * msg)
{
  if (!msg) {
    return;
  }
  // pose
  beetle_msgs__msg__PoseLite__fini(&msg->pose);
  // twist
  beetle_msgs__msg__TwistLite__fini(&msg->twist);
}

bool
beetle_msgs__msg__OdometryLite__are_equal(const beetle_msgs__msg__OdometryLite * lhs, const beetle_msgs__msg__OdometryLite * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!beetle_msgs__msg__PoseLite__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // twist
  if (!beetle_msgs__msg__TwistLite__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  return true;
}

bool
beetle_msgs__msg__OdometryLite__copy(
  const beetle_msgs__msg__OdometryLite * input,
  beetle_msgs__msg__OdometryLite * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!beetle_msgs__msg__PoseLite__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // twist
  if (!beetle_msgs__msg__TwistLite__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  return true;
}

beetle_msgs__msg__OdometryLite *
beetle_msgs__msg__OdometryLite__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beetle_msgs__msg__OdometryLite * msg = (beetle_msgs__msg__OdometryLite *)allocator.allocate(sizeof(beetle_msgs__msg__OdometryLite), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beetle_msgs__msg__OdometryLite));
  bool success = beetle_msgs__msg__OdometryLite__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
beetle_msgs__msg__OdometryLite__destroy(beetle_msgs__msg__OdometryLite * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    beetle_msgs__msg__OdometryLite__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
beetle_msgs__msg__OdometryLite__Sequence__init(beetle_msgs__msg__OdometryLite__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beetle_msgs__msg__OdometryLite * data = NULL;

  if (size) {
    data = (beetle_msgs__msg__OdometryLite *)allocator.zero_allocate(size, sizeof(beetle_msgs__msg__OdometryLite), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beetle_msgs__msg__OdometryLite__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beetle_msgs__msg__OdometryLite__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
beetle_msgs__msg__OdometryLite__Sequence__fini(beetle_msgs__msg__OdometryLite__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      beetle_msgs__msg__OdometryLite__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

beetle_msgs__msg__OdometryLite__Sequence *
beetle_msgs__msg__OdometryLite__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beetle_msgs__msg__OdometryLite__Sequence * array = (beetle_msgs__msg__OdometryLite__Sequence *)allocator.allocate(sizeof(beetle_msgs__msg__OdometryLite__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = beetle_msgs__msg__OdometryLite__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
beetle_msgs__msg__OdometryLite__Sequence__destroy(beetle_msgs__msg__OdometryLite__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    beetle_msgs__msg__OdometryLite__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
beetle_msgs__msg__OdometryLite__Sequence__are_equal(const beetle_msgs__msg__OdometryLite__Sequence * lhs, const beetle_msgs__msg__OdometryLite__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beetle_msgs__msg__OdometryLite__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beetle_msgs__msg__OdometryLite__Sequence__copy(
  const beetle_msgs__msg__OdometryLite__Sequence * input,
  beetle_msgs__msg__OdometryLite__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beetle_msgs__msg__OdometryLite);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    beetle_msgs__msg__OdometryLite * data =
      (beetle_msgs__msg__OdometryLite *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beetle_msgs__msg__OdometryLite__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          beetle_msgs__msg__OdometryLite__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!beetle_msgs__msg__OdometryLite__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
