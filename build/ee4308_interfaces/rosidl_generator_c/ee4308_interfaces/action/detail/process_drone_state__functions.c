// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ee4308_interfaces:action/ProcessDroneState.idl
// generated code does not contain a copyright notice
#include "ee4308_interfaces/action/detail/process_drone_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ee4308_interfaces__action__ProcessDroneState_Goal__init(ee4308_interfaces__action__ProcessDroneState_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // state
  return true;
}

void
ee4308_interfaces__action__ProcessDroneState_Goal__fini(ee4308_interfaces__action__ProcessDroneState_Goal * msg)
{
  if (!msg) {
    return;
  }
  // state
}

bool
ee4308_interfaces__action__ProcessDroneState_Goal__are_equal(const ee4308_interfaces__action__ProcessDroneState_Goal * lhs, const ee4308_interfaces__action__ProcessDroneState_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
ee4308_interfaces__action__ProcessDroneState_Goal__copy(
  const ee4308_interfaces__action__ProcessDroneState_Goal * input,
  ee4308_interfaces__action__ProcessDroneState_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  output->state = input->state;
  return true;
}

ee4308_interfaces__action__ProcessDroneState_Goal *
ee4308_interfaces__action__ProcessDroneState_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ee4308_interfaces__action__ProcessDroneState_Goal * msg = (ee4308_interfaces__action__ProcessDroneState_Goal *)allocator.allocate(sizeof(ee4308_interfaces__action__ProcessDroneState_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ee4308_interfaces__action__ProcessDroneState_Goal));
  bool success = ee4308_interfaces__action__ProcessDroneState_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ee4308_interfaces__action__ProcessDroneState_Goal__destroy(ee4308_interfaces__action__ProcessDroneState_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ee4308_interfaces__action__ProcessDroneState_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ee4308_interfaces__action__ProcessDroneState_Goal__Sequence__init(ee4308_interfaces__action__ProcessDroneState_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ee4308_interfaces__action__ProcessDroneState_Goal * data = NULL;

  if (size) {
    data = (ee4308_interfaces__action__ProcessDroneState_Goal *)allocator.zero_allocate(size, sizeof(ee4308_interfaces__action__ProcessDroneState_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ee4308_interfaces__action__ProcessDroneState_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ee4308_interfaces__action__ProcessDroneState_Goal__fini(&data[i - 1]);
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
ee4308_interfaces__action__ProcessDroneState_Goal__Sequence__fini(ee4308_interfaces__action__ProcessDroneState_Goal__Sequence * array)
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
      ee4308_interfaces__action__ProcessDroneState_Goal__fini(&array->data[i]);
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

ee4308_interfaces__action__ProcessDroneState_Goal__Sequence *
ee4308_interfaces__action__ProcessDroneState_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ee4308_interfaces__action__ProcessDroneState_Goal__Sequence * array = (ee4308_interfaces__action__ProcessDroneState_Goal__Sequence *)allocator.allocate(sizeof(ee4308_interfaces__action__ProcessDroneState_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ee4308_interfaces__action__ProcessDroneState_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ee4308_interfaces__action__ProcessDroneState_Goal__Sequence__destroy(ee4308_interfaces__action__ProcessDroneState_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ee4308_interfaces__action__ProcessDroneState_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ee4308_interfaces__action__ProcessDroneState_Goal__Sequence__are_equal(const ee4308_interfaces__action__ProcessDroneState_Goal__Sequence * lhs, const ee4308_interfaces__action__ProcessDroneState_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ee4308_interfaces__action__ProcessDroneState_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ee4308_interfaces__action__ProcessDroneState_Goal__Sequence__copy(
  const ee4308_interfaces__action__ProcessDroneState_Goal__Sequence * input,
  ee4308_interfaces__action__ProcessDroneState_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ee4308_interfaces__action__ProcessDroneState_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ee4308_interfaces__action__ProcessDroneState_Goal * data =
      (ee4308_interfaces__action__ProcessDroneState_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ee4308_interfaces__action__ProcessDroneState_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ee4308_interfaces__action__ProcessDroneState_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ee4308_interfaces__action__ProcessDroneState_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
#include "std_msgs/msg/detail/empty__functions.h"

bool
ee4308_interfaces__action__ProcessDroneState_Result__init(ee4308_interfaces__action__ProcessDroneState_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!std_msgs__msg__Empty__init(&msg->result)) {
    ee4308_interfaces__action__ProcessDroneState_Result__fini(msg);
    return false;
  }
  return true;
}

void
ee4308_interfaces__action__ProcessDroneState_Result__fini(ee4308_interfaces__action__ProcessDroneState_Result * msg)
{
  if (!msg) {
    return;
  }
  // result
  std_msgs__msg__Empty__fini(&msg->result);
}

bool
ee4308_interfaces__action__ProcessDroneState_Result__are_equal(const ee4308_interfaces__action__ProcessDroneState_Result * lhs, const ee4308_interfaces__action__ProcessDroneState_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (!std_msgs__msg__Empty__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
ee4308_interfaces__action__ProcessDroneState_Result__copy(
  const ee4308_interfaces__action__ProcessDroneState_Result * input,
  ee4308_interfaces__action__ProcessDroneState_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  if (!std_msgs__msg__Empty__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

ee4308_interfaces__action__ProcessDroneState_Result *
ee4308_interfaces__action__ProcessDroneState_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ee4308_interfaces__action__ProcessDroneState_Result * msg = (ee4308_interfaces__action__ProcessDroneState_Result *)allocator.allocate(sizeof(ee4308_interfaces__action__ProcessDroneState_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ee4308_interfaces__action__ProcessDroneState_Result));
  bool success = ee4308_interfaces__action__ProcessDroneState_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ee4308_interfaces__action__ProcessDroneState_Result__destroy(ee4308_interfaces__action__ProcessDroneState_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ee4308_interfaces__action__ProcessDroneState_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ee4308_interfaces__action__ProcessDroneState_Result__Sequence__init(ee4308_interfaces__action__ProcessDroneState_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ee4308_interfaces__action__ProcessDroneState_Result * data = NULL;

  if (size) {
    data = (ee4308_interfaces__action__ProcessDroneState_Result *)allocator.zero_allocate(size, sizeof(ee4308_interfaces__action__ProcessDroneState_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ee4308_interfaces__action__ProcessDroneState_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ee4308_interfaces__action__ProcessDroneState_Result__fini(&data[i - 1]);
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
ee4308_interfaces__action__ProcessDroneState_Result__Sequence__fini(ee4308_interfaces__action__ProcessDroneState_Result__Sequence * array)
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
      ee4308_interfaces__action__ProcessDroneState_Result__fini(&array->data[i]);
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

ee4308_interfaces__action__ProcessDroneState_Result__Sequence *
ee4308_interfaces__action__ProcessDroneState_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ee4308_interfaces__action__ProcessDroneState_Result__Sequence * array = (ee4308_interfaces__action__ProcessDroneState_Result__Sequence *)allocator.allocate(sizeof(ee4308_interfaces__action__ProcessDroneState_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ee4308_interfaces__action__ProcessDroneState_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ee4308_interfaces__action__ProcessDroneState_Result__Sequence__destroy(ee4308_interfaces__action__ProcessDroneState_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ee4308_interfaces__action__ProcessDroneState_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ee4308_interfaces__action__ProcessDroneState_Result__Sequence__are_equal(const ee4308_interfaces__action__ProcessDroneState_Result__Sequence * lhs, const ee4308_interfaces__action__ProcessDroneState_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ee4308_interfaces__action__ProcessDroneState_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ee4308_interfaces__action__ProcessDroneState_Result__Sequence__copy(
  const ee4308_interfaces__action__ProcessDroneState_Result__Sequence * input,
  ee4308_interfaces__action__ProcessDroneState_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ee4308_interfaces__action__ProcessDroneState_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ee4308_interfaces__action__ProcessDroneState_Result * data =
      (ee4308_interfaces__action__ProcessDroneState_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ee4308_interfaces__action__ProcessDroneState_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ee4308_interfaces__action__ProcessDroneState_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ee4308_interfaces__action__ProcessDroneState_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `feedback`
// already included above
// #include "std_msgs/msg/detail/empty__functions.h"

bool
ee4308_interfaces__action__ProcessDroneState_Feedback__init(ee4308_interfaces__action__ProcessDroneState_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback
  if (!std_msgs__msg__Empty__init(&msg->feedback)) {
    ee4308_interfaces__action__ProcessDroneState_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
ee4308_interfaces__action__ProcessDroneState_Feedback__fini(ee4308_interfaces__action__ProcessDroneState_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback
  std_msgs__msg__Empty__fini(&msg->feedback);
}

bool
ee4308_interfaces__action__ProcessDroneState_Feedback__are_equal(const ee4308_interfaces__action__ProcessDroneState_Feedback * lhs, const ee4308_interfaces__action__ProcessDroneState_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feedback
  if (!std_msgs__msg__Empty__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
ee4308_interfaces__action__ProcessDroneState_Feedback__copy(
  const ee4308_interfaces__action__ProcessDroneState_Feedback * input,
  ee4308_interfaces__action__ProcessDroneState_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback
  if (!std_msgs__msg__Empty__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

ee4308_interfaces__action__ProcessDroneState_Feedback *
ee4308_interfaces__action__ProcessDroneState_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ee4308_interfaces__action__ProcessDroneState_Feedback * msg = (ee4308_interfaces__action__ProcessDroneState_Feedback *)allocator.allocate(sizeof(ee4308_interfaces__action__ProcessDroneState_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ee4308_interfaces__action__ProcessDroneState_Feedback));
  bool success = ee4308_interfaces__action__ProcessDroneState_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ee4308_interfaces__action__ProcessDroneState_Feedback__destroy(ee4308_interfaces__action__ProcessDroneState_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ee4308_interfaces__action__ProcessDroneState_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence__init(ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ee4308_interfaces__action__ProcessDroneState_Feedback * data = NULL;

  if (size) {
    data = (ee4308_interfaces__action__ProcessDroneState_Feedback *)allocator.zero_allocate(size, sizeof(ee4308_interfaces__action__ProcessDroneState_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ee4308_interfaces__action__ProcessDroneState_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ee4308_interfaces__action__ProcessDroneState_Feedback__fini(&data[i - 1]);
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
ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence__fini(ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence * array)
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
      ee4308_interfaces__action__ProcessDroneState_Feedback__fini(&array->data[i]);
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

ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence *
ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence * array = (ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence *)allocator.allocate(sizeof(ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence__destroy(ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence__are_equal(const ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence * lhs, const ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ee4308_interfaces__action__ProcessDroneState_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence__copy(
  const ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence * input,
  ee4308_interfaces__action__ProcessDroneState_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ee4308_interfaces__action__ProcessDroneState_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ee4308_interfaces__action__ProcessDroneState_Feedback * data =
      (ee4308_interfaces__action__ProcessDroneState_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ee4308_interfaces__action__ProcessDroneState_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ee4308_interfaces__action__ProcessDroneState_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ee4308_interfaces__action__ProcessDroneState_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "ee4308_interfaces/action/detail/process_drone_state__functions.h"

bool
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__init(ee4308_interfaces__action__ProcessDroneState_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!ee4308_interfaces__action__ProcessDroneState_Goal__init(&msg->goal)) {
    ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__fini(ee4308_interfaces__action__ProcessDroneState_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  ee4308_interfaces__action__ProcessDroneState_Goal__fini(&msg->goal);
}

bool
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__are_equal(const ee4308_interfaces__action__ProcessDroneState_SendGoal_Request * lhs, const ee4308_interfaces__action__ProcessDroneState_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!ee4308_interfaces__action__ProcessDroneState_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__copy(
  const ee4308_interfaces__action__ProcessDroneState_SendGoal_Request * input,
  ee4308_interfaces__action__ProcessDroneState_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!ee4308_interfaces__action__ProcessDroneState_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

ee4308_interfaces__action__ProcessDroneState_SendGoal_Request *
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ee4308_interfaces__action__ProcessDroneState_SendGoal_Request * msg = (ee4308_interfaces__action__ProcessDroneState_SendGoal_Request *)allocator.allocate(sizeof(ee4308_interfaces__action__ProcessDroneState_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ee4308_interfaces__action__ProcessDroneState_SendGoal_Request));
  bool success = ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__destroy(ee4308_interfaces__action__ProcessDroneState_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence__init(ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ee4308_interfaces__action__ProcessDroneState_SendGoal_Request * data = NULL;

  if (size) {
    data = (ee4308_interfaces__action__ProcessDroneState_SendGoal_Request *)allocator.zero_allocate(size, sizeof(ee4308_interfaces__action__ProcessDroneState_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__fini(&data[i - 1]);
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
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence__fini(ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence * array)
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
      ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__fini(&array->data[i]);
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

ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence *
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence * array = (ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence *)allocator.allocate(sizeof(ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence__destroy(ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence__are_equal(const ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence * lhs, const ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence__copy(
  const ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence * input,
  ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ee4308_interfaces__action__ProcessDroneState_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ee4308_interfaces__action__ProcessDroneState_SendGoal_Request * data =
      (ee4308_interfaces__action__ProcessDroneState_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ee4308_interfaces__action__ProcessDroneState_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__init(ee4308_interfaces__action__ProcessDroneState_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__fini(ee4308_interfaces__action__ProcessDroneState_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__are_equal(const ee4308_interfaces__action__ProcessDroneState_SendGoal_Response * lhs, const ee4308_interfaces__action__ProcessDroneState_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__copy(
  const ee4308_interfaces__action__ProcessDroneState_SendGoal_Response * input,
  ee4308_interfaces__action__ProcessDroneState_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

ee4308_interfaces__action__ProcessDroneState_SendGoal_Response *
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ee4308_interfaces__action__ProcessDroneState_SendGoal_Response * msg = (ee4308_interfaces__action__ProcessDroneState_SendGoal_Response *)allocator.allocate(sizeof(ee4308_interfaces__action__ProcessDroneState_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ee4308_interfaces__action__ProcessDroneState_SendGoal_Response));
  bool success = ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__destroy(ee4308_interfaces__action__ProcessDroneState_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence__init(ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ee4308_interfaces__action__ProcessDroneState_SendGoal_Response * data = NULL;

  if (size) {
    data = (ee4308_interfaces__action__ProcessDroneState_SendGoal_Response *)allocator.zero_allocate(size, sizeof(ee4308_interfaces__action__ProcessDroneState_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__fini(&data[i - 1]);
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
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence__fini(ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence * array)
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
      ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__fini(&array->data[i]);
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

ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence *
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence * array = (ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence *)allocator.allocate(sizeof(ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence__destroy(ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence__are_equal(const ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence * lhs, const ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence__copy(
  const ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence * input,
  ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ee4308_interfaces__action__ProcessDroneState_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ee4308_interfaces__action__ProcessDroneState_SendGoal_Response * data =
      (ee4308_interfaces__action__ProcessDroneState_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ee4308_interfaces__action__ProcessDroneState_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__init(ee4308_interfaces__action__ProcessDroneState_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ee4308_interfaces__action__ProcessDroneState_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__fini(ee4308_interfaces__action__ProcessDroneState_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__are_equal(const ee4308_interfaces__action__ProcessDroneState_GetResult_Request * lhs, const ee4308_interfaces__action__ProcessDroneState_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__copy(
  const ee4308_interfaces__action__ProcessDroneState_GetResult_Request * input,
  ee4308_interfaces__action__ProcessDroneState_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

ee4308_interfaces__action__ProcessDroneState_GetResult_Request *
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ee4308_interfaces__action__ProcessDroneState_GetResult_Request * msg = (ee4308_interfaces__action__ProcessDroneState_GetResult_Request *)allocator.allocate(sizeof(ee4308_interfaces__action__ProcessDroneState_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ee4308_interfaces__action__ProcessDroneState_GetResult_Request));
  bool success = ee4308_interfaces__action__ProcessDroneState_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__destroy(ee4308_interfaces__action__ProcessDroneState_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ee4308_interfaces__action__ProcessDroneState_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence__init(ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ee4308_interfaces__action__ProcessDroneState_GetResult_Request * data = NULL;

  if (size) {
    data = (ee4308_interfaces__action__ProcessDroneState_GetResult_Request *)allocator.zero_allocate(size, sizeof(ee4308_interfaces__action__ProcessDroneState_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ee4308_interfaces__action__ProcessDroneState_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ee4308_interfaces__action__ProcessDroneState_GetResult_Request__fini(&data[i - 1]);
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
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence__fini(ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence * array)
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
      ee4308_interfaces__action__ProcessDroneState_GetResult_Request__fini(&array->data[i]);
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

ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence *
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence * array = (ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence *)allocator.allocate(sizeof(ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence__destroy(ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence__are_equal(const ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence * lhs, const ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ee4308_interfaces__action__ProcessDroneState_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence__copy(
  const ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence * input,
  ee4308_interfaces__action__ProcessDroneState_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ee4308_interfaces__action__ProcessDroneState_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ee4308_interfaces__action__ProcessDroneState_GetResult_Request * data =
      (ee4308_interfaces__action__ProcessDroneState_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ee4308_interfaces__action__ProcessDroneState_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ee4308_interfaces__action__ProcessDroneState_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ee4308_interfaces__action__ProcessDroneState_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "ee4308_interfaces/action/detail/process_drone_state__functions.h"

bool
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__init(ee4308_interfaces__action__ProcessDroneState_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!ee4308_interfaces__action__ProcessDroneState_Result__init(&msg->result)) {
    ee4308_interfaces__action__ProcessDroneState_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__fini(ee4308_interfaces__action__ProcessDroneState_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  ee4308_interfaces__action__ProcessDroneState_Result__fini(&msg->result);
}

bool
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__are_equal(const ee4308_interfaces__action__ProcessDroneState_GetResult_Response * lhs, const ee4308_interfaces__action__ProcessDroneState_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!ee4308_interfaces__action__ProcessDroneState_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__copy(
  const ee4308_interfaces__action__ProcessDroneState_GetResult_Response * input,
  ee4308_interfaces__action__ProcessDroneState_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!ee4308_interfaces__action__ProcessDroneState_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

ee4308_interfaces__action__ProcessDroneState_GetResult_Response *
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ee4308_interfaces__action__ProcessDroneState_GetResult_Response * msg = (ee4308_interfaces__action__ProcessDroneState_GetResult_Response *)allocator.allocate(sizeof(ee4308_interfaces__action__ProcessDroneState_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ee4308_interfaces__action__ProcessDroneState_GetResult_Response));
  bool success = ee4308_interfaces__action__ProcessDroneState_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__destroy(ee4308_interfaces__action__ProcessDroneState_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ee4308_interfaces__action__ProcessDroneState_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence__init(ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ee4308_interfaces__action__ProcessDroneState_GetResult_Response * data = NULL;

  if (size) {
    data = (ee4308_interfaces__action__ProcessDroneState_GetResult_Response *)allocator.zero_allocate(size, sizeof(ee4308_interfaces__action__ProcessDroneState_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ee4308_interfaces__action__ProcessDroneState_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ee4308_interfaces__action__ProcessDroneState_GetResult_Response__fini(&data[i - 1]);
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
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence__fini(ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence * array)
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
      ee4308_interfaces__action__ProcessDroneState_GetResult_Response__fini(&array->data[i]);
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

ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence *
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence * array = (ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence *)allocator.allocate(sizeof(ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence__destroy(ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence__are_equal(const ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence * lhs, const ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ee4308_interfaces__action__ProcessDroneState_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence__copy(
  const ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence * input,
  ee4308_interfaces__action__ProcessDroneState_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ee4308_interfaces__action__ProcessDroneState_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ee4308_interfaces__action__ProcessDroneState_GetResult_Response * data =
      (ee4308_interfaces__action__ProcessDroneState_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ee4308_interfaces__action__ProcessDroneState_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ee4308_interfaces__action__ProcessDroneState_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ee4308_interfaces__action__ProcessDroneState_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "ee4308_interfaces/action/detail/process_drone_state__functions.h"

bool
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__init(ee4308_interfaces__action__ProcessDroneState_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!ee4308_interfaces__action__ProcessDroneState_Feedback__init(&msg->feedback)) {
    ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__fini(ee4308_interfaces__action__ProcessDroneState_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  ee4308_interfaces__action__ProcessDroneState_Feedback__fini(&msg->feedback);
}

bool
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__are_equal(const ee4308_interfaces__action__ProcessDroneState_FeedbackMessage * lhs, const ee4308_interfaces__action__ProcessDroneState_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ee4308_interfaces__action__ProcessDroneState_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__copy(
  const ee4308_interfaces__action__ProcessDroneState_FeedbackMessage * input,
  ee4308_interfaces__action__ProcessDroneState_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ee4308_interfaces__action__ProcessDroneState_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

ee4308_interfaces__action__ProcessDroneState_FeedbackMessage *
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ee4308_interfaces__action__ProcessDroneState_FeedbackMessage * msg = (ee4308_interfaces__action__ProcessDroneState_FeedbackMessage *)allocator.allocate(sizeof(ee4308_interfaces__action__ProcessDroneState_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ee4308_interfaces__action__ProcessDroneState_FeedbackMessage));
  bool success = ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__destroy(ee4308_interfaces__action__ProcessDroneState_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence__init(ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ee4308_interfaces__action__ProcessDroneState_FeedbackMessage * data = NULL;

  if (size) {
    data = (ee4308_interfaces__action__ProcessDroneState_FeedbackMessage *)allocator.zero_allocate(size, sizeof(ee4308_interfaces__action__ProcessDroneState_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__fini(&data[i - 1]);
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
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence__fini(ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence * array)
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
      ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__fini(&array->data[i]);
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

ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence *
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence * array = (ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence *)allocator.allocate(sizeof(ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence__destroy(ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence__are_equal(const ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence * lhs, const ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence__copy(
  const ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence * input,
  ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ee4308_interfaces__action__ProcessDroneState_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ee4308_interfaces__action__ProcessDroneState_FeedbackMessage * data =
      (ee4308_interfaces__action__ProcessDroneState_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ee4308_interfaces__action__ProcessDroneState_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
