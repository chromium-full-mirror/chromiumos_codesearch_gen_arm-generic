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

#ifndef CRYPTOHOME_COMMON_PRINT_RPC_PROTO_H_
#define CRYPTOHOME_COMMON_PRINT_RPC_PROTO_H_

#include <string>

#include <brillo/brillo_export.h>

#include "cryptohome/proto_bindings/rpc.pb.h"

namespace cryptohome {

std::string GetProtoDebugStringWithIndent(CryptohomeErrorCode value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(CryptohomeErrorCode value);
std::string GetProtoDebugStringWithIndent(
    FirmwareManagementParametersFlags value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    FirmwareManagementParametersFlags value);
std::string GetProtoDebugStringWithIndent(
    KeyChallengeRequest_ChallengeType value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    KeyChallengeRequest_ChallengeType value);
std::string GetProtoDebugStringWithIndent(const AccountIdentifier& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const AccountIdentifier& value);
std::string GetProtoDebugStringWithIndent(const KeyDelegate& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const KeyDelegate& value);
std::string GetProtoDebugStringWithIndent(const AuthorizationRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const AuthorizationRequest& value);
std::string GetProtoDebugStringWithIndent(const KeyChallengeRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const KeyChallengeRequest& value);
std::string GetProtoDebugStringWithIndent(
    const SignatureKeyChallengeRequestData& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const SignatureKeyChallengeRequestData& value);
std::string GetProtoDebugStringWithIndent(const KeyChallengeResponse& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const KeyChallengeResponse& value);
std::string GetProtoDebugStringWithIndent(
    const SignatureKeyChallengeResponseData& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const SignatureKeyChallengeResponseData& value);

}  // namespace cryptohome

#endif  // CRYPTOHOME_COMMON_PRINT_RPC_PROTO_H_
