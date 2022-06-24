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

#ifndef ATTESTATION_COMMON_PRINT_ATTESTATION_CA_PROTO_H_
#define ATTESTATION_COMMON_PRINT_ATTESTATION_CA_PROTO_H_

#include <string>

#include <brillo/brillo_export.h>

#include "attestation/proto_bindings/attestation_ca.pb.h"

namespace attestation {

std::string GetProtoDebugStringWithIndent(CertificateProfile value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(CertificateProfile value);
std::string GetProtoDebugStringWithIndent(TpmVersion value, int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(TpmVersion value);
std::string GetProtoDebugStringWithIndent(NVRAMQuoteType value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(NVRAMQuoteType value);
std::string GetProtoDebugStringWithIndent(ResponseStatus value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(ResponseStatus value);
std::string GetProtoDebugStringWithIndent(KeyProfile value, int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(KeyProfile value);
std::string GetProtoDebugStringWithIndent(const Quote& value, int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const Quote& value);
std::string GetProtoDebugStringWithIndent(const EncryptedData& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const EncryptedData& value);
std::string GetProtoDebugStringWithIndent(const SignedData& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const SignedData& value);
std::string GetProtoDebugStringWithIndent(
    const EncryptedIdentityCredential& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const EncryptedIdentityCredential& value);
std::string GetProtoDebugStringWithIndent(
    const AttestationEnrollmentRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const AttestationEnrollmentRequest& value);
std::string GetProtoDebugStringWithIndent(
    const AttestationEnrollmentResponse& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const AttestationEnrollmentResponse& value);
std::string GetProtoDebugStringWithIndent(
    const AttestationCertificateRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const AttestationCertificateRequest& value);
std::string GetProtoDebugStringWithIndent(
    const AttestationCertificateResponse& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const AttestationCertificateResponse& value);
std::string GetProtoDebugStringWithIndent(const AttestationResetRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const AttestationResetRequest& value);
std::string GetProtoDebugStringWithIndent(const AttestationResetResponse& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const AttestationResetResponse& value);
std::string GetProtoDebugStringWithIndent(const Challenge& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const Challenge& value);
std::string GetProtoDebugStringWithIndent(const ChallengeResponse& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const ChallengeResponse& value);
std::string GetProtoDebugStringWithIndent(const KeyInfo& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const KeyInfo& value);
std::string GetProtoDebugStringWithIndent(const DeviceTrustSignals& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const DeviceTrustSignals& value);

}  // namespace attestation

#endif  // ATTESTATION_COMMON_PRINT_ATTESTATION_CA_PROTO_H_
