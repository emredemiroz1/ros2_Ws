// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from beetle_msgs:msg/TwistLite.idl
// generated code does not contain a copyright notice
#include "beetle_msgs/msg/detail/twist_lite__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
beetle_msgs__msg__TwistLite__init(beetle_msgs__msg__TwistLite * msg)
{
  if (!msg) {
    return false;
  }
  // linear
  // angular
  return true;
}

void
beetle_msgs__msg__TwistLite__fini(beetle_msgs__msg__TwistLite * msg)
{
  if (!msg) {
    return;
  }
  // linear
  // angular
}

bool
beetle_msgs__msg__TwistLite__are_equal(const beetle_msgs__msg__TwistLite * lhs, const beetle_msgs__msg__TwistLite * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // linear
  if (lhs->linear != rhs->linear) {
    return false;
  }
  // angular
  if (lhs->angular != rhs->angular) {
    return false;
  }
  return true;
}

bool
beetle_msgs__msg__TwistLite__copy(
  const beetle_msgs__msg__TwistLite * input,
  beetle_msgs__msg__TwistLite * output)
{
  if (!input || !output) {
    return false;
  }
  // linear
  output->linear = input->linear;
  // angular
  output->angular = input->angular;
  return true;
}

beetle_msgs__msg__TwistLite *
beetle_msgs__msg__TwistLite__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beetle_msgs__msg__TwistLite * msg = (beetle_msgs__msg__TwistLite *)allocator.allocate(sizeof(beetle_msgs__msg__TwistLite), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beetle_msgs__msg__TwistLite));
  bool success = beetle_msgs__msg__TwistLite__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
beetle_msgs__msg__TwistLite__destroy(beetle_msgs__msg__TwistLite * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    beetle_msgs__msg__TwistLite__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
beetle_msgs__msg__TwistLite__Sequence__init(beetle_msgs__msg__TwistLite__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beetle_msgs__msg__TwistLite * data = NULL;

  if (size) {
    data = (beetle_msgs__msg__TwistLite *)allocator.zero_allocate(size, sizeof(beetle_msgs__msg__TwistLite), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beetle_msgs__msg__TwistLite__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beetle_msgs__msg__TwistLite__fini(&data[i - 1]);
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
beetle_msgs__msg__TwistLite__Sequence__fini(beetle_msgs__msg__TwistLite__Sequence * array)
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
      beetle_msgs__msg__TwistLite__fini(&array->data[i]);
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

beetle_msgs__msg__TwistLite__Sequence *
beetle_msgs__msg__TwistLite__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beetle_msgs__msg__TwistLite__Sequence * array = (beetle_msgs__msg__TwistLite__Sequence *)allocator.allocate(sizeof(beetle_msgs__msg__TwistLite__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = beetle_msgs__msg__TwistLite__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
beetle_msgs__msg__TwistLite__Sequence__destroy(beetle_msgs__msg__TwistLite__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    beetle_msgs__msg__TwistLite__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
beetle_msgs__msg__TwistLite__Sequence__are_equal(const beetle_msgs__msg__TwistLite__Sequence * lhs, const beetle_msgs__msg__TwistLite__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beetle_msgs__msg__TwistLite__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beetle_msgs__msg__TwistLite__Sequence__copy(
  const beetle_msgs__msg__TwistLite__Sequence * input,
  beetle_msgs__msg__TwistLite__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beetle_msgs__msg__TwistLite);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    beetle_msgs__msg__TwistLite * data =
      (beetle_msgs__msg__TwistLite *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beetle_msgs__msg__TwistLite__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          beetle_msgs__msg__TwistLite__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!beetle_msgs__msg__TwistLite__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
