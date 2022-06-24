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

#ifndef CRYPTOHOME_COMMON_PRINT_AUTH_FACTOR_PROTO_H_
#define CRYPTOHOME_COMMON_PRINT_AUTH_FACTOR_PROTO_H_

#include <string>

#include <brillo/brillo_export.h>

#include "cryptohome/proto_bindings/auth_factor.pb.h"

namespace user_data_auth {

std::string GetProtoDebugStringWithIndent(AuthFactorType value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(AuthFactorType value);
std::string GetProtoDebugStringWithIndent(const AuthFactorIdentifier& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const AuthFactorIdentifier& value);
std::string GetProtoDebugStringWithIndent(const PasswordAuthInput& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const PasswordAuthInput& value);
std::string GetProtoDebugStringWithIndent(const PinAuthInput& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const PinAuthInput& value);
std::string GetProtoDebugStringWithIndent(
    const CryptohomeRecoveryAuthInput& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const CryptohomeRecoveryAuthInput& value);
std::string GetProtoDebugStringWithIndent(const AuthInput& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const AuthInput& value);
std::string GetProtoDebugStringWithIndent(const PasswordMetadata& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const PasswordMetadata& value);
std::string GetProtoDebugStringWithIndent(const PinMetadata& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const PinMetadata& value);
std::string GetProtoDebugStringWithIndent(
    const CryptohomeRecoveryMetadata& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const CryptohomeRecoveryMetadata& value);
std::string GetProtoDebugStringWithIndent(const AuthFactor& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const AuthFactor& value);

}  // namespace user_data_auth

#endif  // CRYPTOHOME_COMMON_PRINT_AUTH_FACTOR_PROTO_H_
