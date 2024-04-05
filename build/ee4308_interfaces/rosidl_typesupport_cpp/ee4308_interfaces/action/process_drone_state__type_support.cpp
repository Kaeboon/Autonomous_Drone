// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ee4308_interfaces:action/ProcessDroneState.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ee4308_interfaces/action/detail/process_drone_state__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ee4308_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ProcessDroneState_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ProcessDroneState_Goal_type_support_ids_t;

static const _ProcessDroneState_Goal_type_support_ids_t _ProcessDroneState_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ProcessDroneState_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ProcessDroneState_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ProcessDroneState_Goal_type_support_symbol_names_t _ProcessDroneState_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ee4308_interfaces, action, ProcessDroneState_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ee4308_interfaces, action, ProcessDroneState_Goal)),
  }
};

typedef struct _ProcessDroneState_Goal_type_support_data_t
{
  void * data[2];
} _ProcessDroneState_Goal_type_support_data_t;

static _ProcessDroneState_Goal_type_support_data_t _ProcessDroneState_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ProcessDroneState_Goal_message_typesupport_map = {
  2,
  "ee4308_interfaces",
  &_ProcessDroneState_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_ProcessDroneState_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_ProcessDroneState_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ProcessDroneState_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ProcessDroneState_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ee4308_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ee4308_interfaces::action::ProcessDroneState_Goal>()
{
  return &::ee4308_interfaces::action::rosidl_typesupport_cpp::ProcessDroneState_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ee4308_interfaces, action, ProcessDroneState_Goal)() {
  return get_message_type_support_handle<ee4308_interfaces::action::ProcessDroneState_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ee4308_interfaces/action/detail/process_drone_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ee4308_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ProcessDroneState_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ProcessDroneState_Result_type_support_ids_t;

static const _ProcessDroneState_Result_type_support_ids_t _ProcessDroneState_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ProcessDroneState_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ProcessDroneState_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ProcessDroneState_Result_type_support_symbol_names_t _ProcessDroneState_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ee4308_interfaces, action, ProcessDroneState_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ee4308_interfaces, action, ProcessDroneState_Result)),
  }
};

typedef struct _ProcessDroneState_Result_type_support_data_t
{
  void * data[2];
} _ProcessDroneState_Result_type_support_data_t;

static _ProcessDroneState_Result_type_support_data_t _ProcessDroneState_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ProcessDroneState_Result_message_typesupport_map = {
  2,
  "ee4308_interfaces",
  &_ProcessDroneState_Result_message_typesupport_ids.typesupport_identifier[0],
  &_ProcessDroneState_Result_message_typesupport_symbol_names.symbol_name[0],
  &_ProcessDroneState_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ProcessDroneState_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ProcessDroneState_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ee4308_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ee4308_interfaces::action::ProcessDroneState_Result>()
{
  return &::ee4308_interfaces::action::rosidl_typesupport_cpp::ProcessDroneState_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ee4308_interfaces, action, ProcessDroneState_Result)() {
  return get_message_type_support_handle<ee4308_interfaces::action::ProcessDroneState_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ee4308_interfaces/action/detail/process_drone_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ee4308_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ProcessDroneState_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ProcessDroneState_Feedback_type_support_ids_t;

static const _ProcessDroneState_Feedback_type_support_ids_t _ProcessDroneState_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ProcessDroneState_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ProcessDroneState_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ProcessDroneState_Feedback_type_support_symbol_names_t _ProcessDroneState_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ee4308_interfaces, action, ProcessDroneState_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ee4308_interfaces, action, ProcessDroneState_Feedback)),
  }
};

typedef struct _ProcessDroneState_Feedback_type_support_data_t
{
  void * data[2];
} _ProcessDroneState_Feedback_type_support_data_t;

static _ProcessDroneState_Feedback_type_support_data_t _ProcessDroneState_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ProcessDroneState_Feedback_message_typesupport_map = {
  2,
  "ee4308_interfaces",
  &_ProcessDroneState_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_ProcessDroneState_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_ProcessDroneState_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ProcessDroneState_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ProcessDroneState_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ee4308_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ee4308_interfaces::action::ProcessDroneState_Feedback>()
{
  return &::ee4308_interfaces::action::rosidl_typesupport_cpp::ProcessDroneState_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ee4308_interfaces, action, ProcessDroneState_Feedback)() {
  return get_message_type_support_handle<ee4308_interfaces::action::ProcessDroneState_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ee4308_interfaces/action/detail/process_drone_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ee4308_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ProcessDroneState_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ProcessDroneState_SendGoal_Request_type_support_ids_t;

static const _ProcessDroneState_SendGoal_Request_type_support_ids_t _ProcessDroneState_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ProcessDroneState_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ProcessDroneState_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ProcessDroneState_SendGoal_Request_type_support_symbol_names_t _ProcessDroneState_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ee4308_interfaces, action, ProcessDroneState_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ee4308_interfaces, action, ProcessDroneState_SendGoal_Request)),
  }
};

typedef struct _ProcessDroneState_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _ProcessDroneState_SendGoal_Request_type_support_data_t;

static _ProcessDroneState_SendGoal_Request_type_support_data_t _ProcessDroneState_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ProcessDroneState_SendGoal_Request_message_typesupport_map = {
  2,
  "ee4308_interfaces",
  &_ProcessDroneState_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ProcessDroneState_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ProcessDroneState_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ProcessDroneState_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ProcessDroneState_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ee4308_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ee4308_interfaces::action::ProcessDroneState_SendGoal_Request>()
{
  return &::ee4308_interfaces::action::rosidl_typesupport_cpp::ProcessDroneState_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ee4308_interfaces, action, ProcessDroneState_SendGoal_Request)() {
  return get_message_type_support_handle<ee4308_interfaces::action::ProcessDroneState_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ee4308_interfaces/action/detail/process_drone_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ee4308_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ProcessDroneState_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ProcessDroneState_SendGoal_Response_type_support_ids_t;

static const _ProcessDroneState_SendGoal_Response_type_support_ids_t _ProcessDroneState_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ProcessDroneState_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ProcessDroneState_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ProcessDroneState_SendGoal_Response_type_support_symbol_names_t _ProcessDroneState_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ee4308_interfaces, action, ProcessDroneState_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ee4308_interfaces, action, ProcessDroneState_SendGoal_Response)),
  }
};

typedef struct _ProcessDroneState_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _ProcessDroneState_SendGoal_Response_type_support_data_t;

static _ProcessDroneState_SendGoal_Response_type_support_data_t _ProcessDroneState_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ProcessDroneState_SendGoal_Response_message_typesupport_map = {
  2,
  "ee4308_interfaces",
  &_ProcessDroneState_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ProcessDroneState_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ProcessDroneState_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ProcessDroneState_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ProcessDroneState_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ee4308_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ee4308_interfaces::action::ProcessDroneState_SendGoal_Response>()
{
  return &::ee4308_interfaces::action::rosidl_typesupport_cpp::ProcessDroneState_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ee4308_interfaces, action, ProcessDroneState_SendGoal_Response)() {
  return get_message_type_support_handle<ee4308_interfaces::action::ProcessDroneState_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ee4308_interfaces/action/detail/process_drone_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ee4308_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ProcessDroneState_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ProcessDroneState_SendGoal_type_support_ids_t;

static const _ProcessDroneState_SendGoal_type_support_ids_t _ProcessDroneState_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ProcessDroneState_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ProcessDroneState_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ProcessDroneState_SendGoal_type_support_symbol_names_t _ProcessDroneState_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ee4308_interfaces, action, ProcessDroneState_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ee4308_interfaces, action, ProcessDroneState_SendGoal)),
  }
};

typedef struct _ProcessDroneState_SendGoal_type_support_data_t
{
  void * data[2];
} _ProcessDroneState_SendGoal_type_support_data_t;

static _ProcessDroneState_SendGoal_type_support_data_t _ProcessDroneState_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ProcessDroneState_SendGoal_service_typesupport_map = {
  2,
  "ee4308_interfaces",
  &_ProcessDroneState_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_ProcessDroneState_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_ProcessDroneState_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ProcessDroneState_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ProcessDroneState_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ee4308_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ee4308_interfaces::action::ProcessDroneState_SendGoal>()
{
  return &::ee4308_interfaces::action::rosidl_typesupport_cpp::ProcessDroneState_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ee4308_interfaces/action/detail/process_drone_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ee4308_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ProcessDroneState_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ProcessDroneState_GetResult_Request_type_support_ids_t;

static const _ProcessDroneState_GetResult_Request_type_support_ids_t _ProcessDroneState_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ProcessDroneState_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ProcessDroneState_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ProcessDroneState_GetResult_Request_type_support_symbol_names_t _ProcessDroneState_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ee4308_interfaces, action, ProcessDroneState_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ee4308_interfaces, action, ProcessDroneState_GetResult_Request)),
  }
};

typedef struct _ProcessDroneState_GetResult_Request_type_support_data_t
{
  void * data[2];
} _ProcessDroneState_GetResult_Request_type_support_data_t;

static _ProcessDroneState_GetResult_Request_type_support_data_t _ProcessDroneState_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ProcessDroneState_GetResult_Request_message_typesupport_map = {
  2,
  "ee4308_interfaces",
  &_ProcessDroneState_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ProcessDroneState_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ProcessDroneState_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ProcessDroneState_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ProcessDroneState_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ee4308_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ee4308_interfaces::action::ProcessDroneState_GetResult_Request>()
{
  return &::ee4308_interfaces::action::rosidl_typesupport_cpp::ProcessDroneState_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ee4308_interfaces, action, ProcessDroneState_GetResult_Request)() {
  return get_message_type_support_handle<ee4308_interfaces::action::ProcessDroneState_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ee4308_interfaces/action/detail/process_drone_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ee4308_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ProcessDroneState_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ProcessDroneState_GetResult_Response_type_support_ids_t;

static const _ProcessDroneState_GetResult_Response_type_support_ids_t _ProcessDroneState_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ProcessDroneState_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ProcessDroneState_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ProcessDroneState_GetResult_Response_type_support_symbol_names_t _ProcessDroneState_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ee4308_interfaces, action, ProcessDroneState_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ee4308_interfaces, action, ProcessDroneState_GetResult_Response)),
  }
};

typedef struct _ProcessDroneState_GetResult_Response_type_support_data_t
{
  void * data[2];
} _ProcessDroneState_GetResult_Response_type_support_data_t;

static _ProcessDroneState_GetResult_Response_type_support_data_t _ProcessDroneState_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ProcessDroneState_GetResult_Response_message_typesupport_map = {
  2,
  "ee4308_interfaces",
  &_ProcessDroneState_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ProcessDroneState_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ProcessDroneState_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ProcessDroneState_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ProcessDroneState_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ee4308_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ee4308_interfaces::action::ProcessDroneState_GetResult_Response>()
{
  return &::ee4308_interfaces::action::rosidl_typesupport_cpp::ProcessDroneState_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ee4308_interfaces, action, ProcessDroneState_GetResult_Response)() {
  return get_message_type_support_handle<ee4308_interfaces::action::ProcessDroneState_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ee4308_interfaces/action/detail/process_drone_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ee4308_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ProcessDroneState_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ProcessDroneState_GetResult_type_support_ids_t;

static const _ProcessDroneState_GetResult_type_support_ids_t _ProcessDroneState_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ProcessDroneState_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ProcessDroneState_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ProcessDroneState_GetResult_type_support_symbol_names_t _ProcessDroneState_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ee4308_interfaces, action, ProcessDroneState_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ee4308_interfaces, action, ProcessDroneState_GetResult)),
  }
};

typedef struct _ProcessDroneState_GetResult_type_support_data_t
{
  void * data[2];
} _ProcessDroneState_GetResult_type_support_data_t;

static _ProcessDroneState_GetResult_type_support_data_t _ProcessDroneState_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ProcessDroneState_GetResult_service_typesupport_map = {
  2,
  "ee4308_interfaces",
  &_ProcessDroneState_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_ProcessDroneState_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_ProcessDroneState_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ProcessDroneState_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ProcessDroneState_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ee4308_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ee4308_interfaces::action::ProcessDroneState_GetResult>()
{
  return &::ee4308_interfaces::action::rosidl_typesupport_cpp::ProcessDroneState_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ee4308_interfaces/action/detail/process_drone_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ee4308_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ProcessDroneState_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ProcessDroneState_FeedbackMessage_type_support_ids_t;

static const _ProcessDroneState_FeedbackMessage_type_support_ids_t _ProcessDroneState_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ProcessDroneState_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ProcessDroneState_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ProcessDroneState_FeedbackMessage_type_support_symbol_names_t _ProcessDroneState_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ee4308_interfaces, action, ProcessDroneState_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ee4308_interfaces, action, ProcessDroneState_FeedbackMessage)),
  }
};

typedef struct _ProcessDroneState_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _ProcessDroneState_FeedbackMessage_type_support_data_t;

static _ProcessDroneState_FeedbackMessage_type_support_data_t _ProcessDroneState_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ProcessDroneState_FeedbackMessage_message_typesupport_map = {
  2,
  "ee4308_interfaces",
  &_ProcessDroneState_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_ProcessDroneState_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_ProcessDroneState_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ProcessDroneState_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ProcessDroneState_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ee4308_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ee4308_interfaces::action::ProcessDroneState_FeedbackMessage>()
{
  return &::ee4308_interfaces::action::rosidl_typesupport_cpp::ProcessDroneState_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ee4308_interfaces, action, ProcessDroneState_FeedbackMessage)() {
  return get_message_type_support_handle<ee4308_interfaces::action::ProcessDroneState_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "ee4308_interfaces/action/detail/process_drone_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace ee4308_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t ProcessDroneState_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ee4308_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<ee4308_interfaces::action::ProcessDroneState>()
{
  using ::ee4308_interfaces::action::rosidl_typesupport_cpp::ProcessDroneState_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  ProcessDroneState_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::ee4308_interfaces::action::ProcessDroneState::Impl::SendGoalService>();
  ProcessDroneState_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::ee4308_interfaces::action::ProcessDroneState::Impl::GetResultService>();
  ProcessDroneState_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::ee4308_interfaces::action::ProcessDroneState::Impl::CancelGoalService>();
  ProcessDroneState_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::ee4308_interfaces::action::ProcessDroneState::Impl::FeedbackMessage>();
  ProcessDroneState_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::ee4308_interfaces::action::ProcessDroneState::Impl::GoalStatusMessage>();
  return &ProcessDroneState_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
