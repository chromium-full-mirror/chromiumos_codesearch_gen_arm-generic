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

#ifndef CRYPTOHOME_COMMON_PRINT_FIDO_PROTO_H_
#define CRYPTOHOME_COMMON_PRINT_FIDO_PROTO_H_

#include <string>

#include <brillo/brillo_export.h>

#include "cryptohome/proto_bindings/fido.pb.h"

namespace cryptohome::fido {

std::string GetProtoDebugStringWithIndent(AuthenticatorStatus value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(AuthenticatorStatus value);
std::string GetProtoDebugStringWithIndent(AuthenticatorTransport value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(AuthenticatorTransport value);
std::string GetProtoDebugStringWithIndent(UserVerificationRequirement value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    UserVerificationRequirement value);
std::string GetProtoDebugStringWithIndent(AttestationConveyancePreference value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    AttestationConveyancePreference value);
std::string GetProtoDebugStringWithIndent(AuthenticatorAttachment value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(AuthenticatorAttachment value);
std::string GetProtoDebugStringWithIndent(ProtectionPolicy value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(ProtectionPolicy value);
std::string GetProtoDebugStringWithIndent(PublicKeyCredentialType value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(PublicKeyCredentialType value);
std::string GetProtoDebugStringWithIndent(const Url& value, int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const Url& value);
std::string GetProtoDebugStringWithIndent(const CommonCredentialInfo& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const CommonCredentialInfo& value);
std::string GetProtoDebugStringWithIndent(
    const MakeCredentialAuthenticatorResponse& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const MakeCredentialAuthenticatorResponse& value);
std::string GetProtoDebugStringWithIndent(
    const GetAssertionAuthenticatorResponse& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetAssertionAuthenticatorResponse& value);
std::string GetProtoDebugStringWithIndent(
    const PublicKeyCredentialRpEntity& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const PublicKeyCredentialRpEntity& value);
std::string GetProtoDebugStringWithIndent(
    const PublicKeyCredentialUserEntity& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const PublicKeyCredentialUserEntity& value);
std::string GetProtoDebugStringWithIndent(
    const PublicKeyCredentialParameters& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const PublicKeyCredentialParameters& value);
std::string GetProtoDebugStringWithIndent(const CableAuthentication& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const CableAuthentication& value);
std::string GetProtoDebugStringWithIndent(const CableRegistration& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const CableRegistration& value);
std::string GetProtoDebugStringWithIndent(
    const PublicKeyCredentialRequestOptions& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const PublicKeyCredentialRequestOptions& value);
std::string GetProtoDebugStringWithIndent(
    const AuthenticatorSelectionCriteria& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const AuthenticatorSelectionCriteria& value);
std::string GetProtoDebugStringWithIndent(
    const PublicKeyCredentialCreationOptions& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const PublicKeyCredentialCreationOptions& value);
std::string GetProtoDebugStringWithIndent(
    const PublicKeyCredentialDescriptor& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const PublicKeyCredentialDescriptor& value);

}  // namespace cryptohome::fido

#endif  // CRYPTOHOME_COMMON_PRINT_FIDO_PROTO_H_
