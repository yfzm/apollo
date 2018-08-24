/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#include "modules/drivers/camera/common/camera_gflags.h"

DEFINE_string(camera_adapter_config_filename,
              "modules/drivers/camera/conf/adapter.conf",
              "The adapter configuration file");

// planning config file
DEFINE_string(planning_config_file,
              "modules/drivers/conf/camera_config.pb.txt",
              "camera config file");
