// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// THIS CODE IS GENERATED.
// Generated with command:
// ../../../../../../../tmp/portage/chromeos-base/cryptohome-9999/work/cryptohome-9999/platform2/libhwsec-foundation/utility/proto_print.py
// --package-dir cryptohome --subdir common --proto-include
// cryptohome/proto_bindings --output-dir
// /build/arm-generic/var/cache/portage/chromeos-base/cryptohome/out/Default/gen/cryptohome/common
// /build/arm-generic/usr/include/chromeos/dbus/cryptohome/auth_factor.proto
// /build/arm-generic/usr/include/chromeos/dbus/cryptohome/fido.proto
// /build/arm-generic/usr/include/chromeos/dbus/cryptohome/key.proto
// /build/arm-generic/usr/include/chromeos/dbus/cryptohome/rpc.proto
// /build/arm-generic/usr/include/chromeos/dbus/cryptohome/UserDataAuth.proto

#ifndef CRYPTOHOME_COMMON_PRINT_KEY_PROTO_H_
#define CRYPTOHOME_COMMON_PRINT_KEY_PROTO_H_

#include <string>

#include <brillo/brillo_export.h>

#include "cryptohome/proto_bindings/key.pb.h"

namespace cryptohome {

std::string GetProtoDebugStringWithIndent(ChallengeSignatureAlgorithm value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    ChallengeSignatureAlgorithm value);
std::string GetProtoDebugStringWithIndent(KeyData_KeyType value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(KeyData_KeyType value);
std::string GetProtoDebugStringWithIndent(const KeyPrivileges& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const KeyPrivileges& value);
std::string GetProtoDebugStringWithIndent(const KeyProviderData::Entry& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const KeyProviderData::Entry& value);
std::string GetProtoDebugStringWithIndent(const KeyProviderData& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const KeyProviderData& value);
std::string GetProtoDebugStringWithIndent(const ChallengePublicKeyInfo& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const ChallengePublicKeyInfo& value);
std::string GetProtoDebugStringWithIndent(const KeyPolicy& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const KeyPolicy& value);
std::string GetProtoDebugStringWithIndent(const KeyData& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const KeyData& value);
std::string GetProtoDebugStringWithIndent(const Key& value, int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const Key& value);

}  // namespace cryptohome

#endif  // CRYPTOHOME_COMMON_PRINT_KEY_PROTO_H_
