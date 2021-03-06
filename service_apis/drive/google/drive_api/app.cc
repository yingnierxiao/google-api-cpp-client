// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.4.1
//   Build date: 2013-08-07 19:00:49 UTC
//   on: 2013-08-12, 19:01:32 UTC
//   C++ generator version:

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Drive API (drive/v2)
// Description:
//   The API to interact with Drive.
// Classes:
//   App
// Documentation:
//   https://developers.google.com/drive/

#include "google/drive_api/app.h"
#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_drive_api {
using namespace googleapis;



// Object factory method (static).
google_drive_api::App::AppIcons* google_drive_api::App::AppIcons::New() {
  return new client::JsonCppCapsule<AppIcons>;
}

// Standard immutable constructor.
google_drive_api::App::AppIcons::AppIcons(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
google_drive_api::App::AppIcons::AppIcons(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
google_drive_api::App::AppIcons::~AppIcons() {
}
// Object factory method (static).
google_drive_api::App* google_drive_api::App::New() {
  return new client::JsonCppCapsule<App>;
}

// Standard immutable constructor.
google_drive_api::App::App(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
google_drive_api::App::App(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
google_drive_api::App::~App() {
}
}  // namespace google_drive_api
