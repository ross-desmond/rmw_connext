// Copyright 2014-2015 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef ROSIDL_TYPESUPPORT_CONNEXT_CPP_ROSIDL_TYPESUPPORT_CONNEXT_CPP_MESSAGE_TYPE_SUPPORT_H_
#define ROSIDL_TYPESUPPORT_CONNEXT_CPP_ROSIDL_TYPESUPPORT_CONNEXT_CPP_MESSAGE_TYPE_SUPPORT_H_

#include "rosidl_generator_c/message_type_support.h"

typedef struct message_type_support_callbacks_t
{
  const char * package_name;
  const char * message_name;
  // Function to register type with given dds_participant
  void (*register_type)(void * dds_participant, const char * type_name);
  // Function to publish a ROS message with a given DDS data_writer
  void (*publish)(void * dds_data_writer, const void * ros_message);
  // Function to take a ROS message from a dds data reader
  bool (*take)(void * dds_data_reader, void * ros_message);
} message_type_support_callbacks_t;

#endif  /* ROSIDL_TYPESUPPORT_CONNEXT_CPP_ROSIDL_TYPESUPPORT_CONNEXT_CPP_MESSAGE_TYPE_SUPPORT_H_ */