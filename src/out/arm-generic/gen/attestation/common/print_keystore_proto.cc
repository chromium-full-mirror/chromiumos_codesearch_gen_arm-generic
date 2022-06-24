// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// THIS CODE IS GENERATED.
// Generated with command:
// ../../../../../../../../../mnt/host/source/src/platform2/libhwsec-foundation/utility/proto_print.py
// --subdir common --proto-include attestation/proto_bindings --output-dir
// /build/arm-generic/var/cache/portage/chromeos-base/attestation/out/Default/gen/attestation/common
// /build/arm-generic/usr/include/chromeos/dbus/attestation/attestation_ca.proto
// /build/arm-generic/usr/include/chromeos/dbus/attestation/interface.proto
// /build/arm-generic/usr/include/chromeos/dbus/attestation/keystore.proto

#include "attestation/common/print_keystore_proto.h"

#include <inttypes.h>

#include <string>

#include <base/strings/string_number_conversions.h>
#include <base/strings/stringprintf.h>

namespace attestation {

std::string GetProtoDebugString(KeyType value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(KeyType value, int indent_size) {
  if (value == KEY_TYPE_RSA) {
    return "KEY_TYPE_RSA";
  }
  if (value == KEY_TYPE_ECC) {
    return "KEY_TYPE_ECC";
  }
  return "<unknown>";
}

std::string GetProtoDebugString(KeyUsage value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(KeyUsage value, int indent_size) {
  if (value == KEY_USAGE_SIGN) {
    return "KEY_USAGE_SIGN";
  }
  if (value == KEY_USAGE_DECRYPT) {
    return "KEY_USAGE_DECRYPT";
  }
  return "<unknown>";
}

}  // namespace attestation
