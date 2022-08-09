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

#include "attestation/common/print_attestation_ca_proto.h"

#include <inttypes.h>

#include <string>

#include <base/strings/string_number_conversions.h>
#include <base/strings/stringprintf.h>

namespace attestation {

std::string GetProtoDebugString(CertificateProfile value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(CertificateProfile value,
                                          int indent_size) {
  if (value == ENTERPRISE_MACHINE_CERTIFICATE) {
    return "ENTERPRISE_MACHINE_CERTIFICATE";
  }
  if (value == ENTERPRISE_USER_CERTIFICATE) {
    return "ENTERPRISE_USER_CERTIFICATE";
  }
  if (value == CONTENT_PROTECTION_CERTIFICATE) {
    return "CONTENT_PROTECTION_CERTIFICATE";
  }
  if (value == CONTENT_PROTECTION_CERTIFICATE_WITH_STABLE_ID) {
    return "CONTENT_PROTECTION_CERTIFICATE_WITH_STABLE_ID";
  }
  if (value == CAST_CERTIFICATE) {
    return "CAST_CERTIFICATE";
  }
  if (value == GFSC_CERTIFICATE) {
    return "GFSC_CERTIFICATE";
  }
  if (value == JETSTREAM_CERTIFICATE) {
    return "JETSTREAM_CERTIFICATE";
  }
  if (value == ENTERPRISE_ENROLLMENT_CERTIFICATE) {
    return "ENTERPRISE_ENROLLMENT_CERTIFICATE";
  }
  if (value == XTS_CERTIFICATE) {
    return "XTS_CERTIFICATE";
  }
  if (value == ENTERPRISE_VTPM_EK_CERTIFICATE) {
    return "ENTERPRISE_VTPM_EK_CERTIFICATE";
  }
  if (value == SOFT_BIND_CERTIFICATE) {
    return "SOFT_BIND_CERTIFICATE";
  }
  if (value == DEVICE_SETUP_CERTIFICATE) {
    return "DEVICE_SETUP_CERTIFICATE";
  }
  return "<unknown>";
}

std::string GetProtoDebugString(TpmVersion value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(TpmVersion value, int indent_size) {
  if (value == TPM_1_2) {
    return "TPM_1_2";
  }
  if (value == TPM_2_0) {
    return "TPM_2_0";
  }
  return "<unknown>";
}

std::string GetProtoDebugString(NVRAMQuoteType value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(NVRAMQuoteType value,
                                          int indent_size) {
  if (value == BOARD_ID) {
    return "BOARD_ID";
  }
  if (value == SN_BITS) {
    return "SN_BITS";
  }
  if (value == RSA_PUB_EK_CERT) {
    return "RSA_PUB_EK_CERT";
  }
  if (value == RSU_DEVICE_ID) {
    return "RSU_DEVICE_ID";
  }
  if (value == RMA_BYTES) {
    return "RMA_BYTES";
  }
  return "<unknown>";
}

std::string GetProtoDebugString(ResponseStatus value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(ResponseStatus value,
                                          int indent_size) {
  if (value == OK) {
    return "OK";
  }
  if (value == SERVER_ERROR) {
    return "SERVER_ERROR";
  }
  if (value == BAD_REQUEST) {
    return "BAD_REQUEST";
  }
  if (value == REJECT) {
    return "REJECT";
  }
  if (value == QUOTA_LIMIT_EXCEEDED) {
    return "QUOTA_LIMIT_EXCEEDED";
  }
  return "<unknown>";
}

std::string GetProtoDebugString(KeyProfile value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(KeyProfile value, int indent_size) {
  if (value == EMK) {
    return "EMK";
  }
  if (value == EUK) {
    return "EUK";
  }
  if (value == CBCM) {
    return "CBCM";
  }
  return "<unknown>";
}

std::string GetProtoDebugString(const Quote& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const Quote& value, int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_quote()) {
    output += indent + "  quote: ";
    base::StringAppendF(
        &output, "%s",
        base::HexEncode(value.quote().data(), value.quote().size()).c_str());
    output += "\n";
  }
  if (value.has_quoted_data()) {
    output += indent + "  quoted_data: ";
    base::StringAppendF(
        &output, "%s",
        base::HexEncode(value.quoted_data().data(), value.quoted_data().size())
            .c_str());
    output += "\n";
  }
  if (value.has_quoted_pcr_value()) {
    output += indent + "  quoted_pcr_value: ";
    base::StringAppendF(&output, "%s",
                        base::HexEncode(value.quoted_pcr_value().data(),
                                        value.quoted_pcr_value().size())
                            .c_str());
    output += "\n";
  }
  if (value.has_pcr_source_hint()) {
    output += indent + "  pcr_source_hint: ";
    base::StringAppendF(&output, "%s",
                        base::HexEncode(value.pcr_source_hint().data(),
                                        value.pcr_source_hint().size())
                            .c_str());
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const EncryptedData& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const EncryptedData& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_wrapped_key()) {
    output += indent + "  wrapped_key: ";
    base::StringAppendF(
        &output, "%s",
        base::HexEncode(value.wrapped_key().data(), value.wrapped_key().size())
            .c_str());
    output += "\n";
  }
  if (value.has_iv()) {
    output += indent + "  iv: ";
    base::StringAppendF(
        &output, "%s",
        base::HexEncode(value.iv().data(), value.iv().size()).c_str());
    output += "\n";
  }
  if (value.has_mac()) {
    output += indent + "  mac: ";
    base::StringAppendF(
        &output, "%s",
        base::HexEncode(value.mac().data(), value.mac().size()).c_str());
    output += "\n";
  }
  if (value.has_encrypted_data()) {
    output += indent + "  encrypted_data: ";
    base::StringAppendF(&output, "%s",
                        base::HexEncode(value.encrypted_data().data(),
                                        value.encrypted_data().size())
                            .c_str());
    output += "\n";
  }
  if (value.has_wrapping_key_id()) {
    output += indent + "  wrapping_key_id: ";
    base::StringAppendF(&output, "%s",
                        base::HexEncode(value.wrapping_key_id().data(),
                                        value.wrapping_key_id().size())
                            .c_str());
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const SignedData& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const SignedData& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_data()) {
    output += indent + "  data: ";
    base::StringAppendF(
        &output, "%s",
        base::HexEncode(value.data().data(), value.data().size()).c_str());
    output += "\n";
  }
  if (value.has_signature()) {
    output += indent + "  signature: ";
    base::StringAppendF(
        &output, "%s",
        base::HexEncode(value.signature().data(), value.signature().size())
            .c_str());
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const EncryptedIdentityCredential& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const EncryptedIdentityCredential& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_asym_ca_contents()) {
    output += indent + "  asym_ca_contents: ";
    base::StringAppendF(&output, "%s",
                        base::HexEncode(value.asym_ca_contents().data(),
                                        value.asym_ca_contents().size())
                            .c_str());
    output += "\n";
  }
  if (value.has_sym_ca_attestation()) {
    output += indent + "  sym_ca_attestation: ";
    base::StringAppendF(&output, "%s",
                        base::HexEncode(value.sym_ca_attestation().data(),
                                        value.sym_ca_attestation().size())
                            .c_str());
    output += "\n";
  }
  if (value.has_tpm_version()) {
    output += indent + "  tpm_version: ";
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.tpm_version(), indent_size + 2)
            .c_str());
    output += "\n";
  }
  if (value.has_encrypted_seed()) {
    output += indent + "  encrypted_seed: ";
    base::StringAppendF(&output, "%s",
                        base::HexEncode(value.encrypted_seed().data(),
                                        value.encrypted_seed().size())
                            .c_str());
    output += "\n";
  }
  if (value.has_credential_mac()) {
    output += indent + "  credential_mac: ";
    base::StringAppendF(&output, "%s",
                        base::HexEncode(value.credential_mac().data(),
                                        value.credential_mac().size())
                            .c_str());
    output += "\n";
  }
  if (value.has_wrapped_certificate()) {
    output += indent + "  wrapped_certificate: ";
    base::StringAppendF(&output, "%s",
                        GetProtoDebugStringWithIndent(
                            value.wrapped_certificate(), indent_size + 2)
                            .c_str());
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const AttestationEnrollmentRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const AttestationEnrollmentRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_encrypted_endorsement_credential()) {
    output += indent + "  encrypted_endorsement_credential: ";
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.encrypted_endorsement_credential(),
                                      indent_size + 2)
            .c_str());
    output += "\n";
  }
  if (value.has_identity_public_key()) {
    output += indent + "  identity_public_key: ";
    base::StringAppendF(&output, "%s",
                        base::HexEncode(value.identity_public_key().data(),
                                        value.identity_public_key().size())
                            .c_str());
    output += "\n";
  }
  if (value.has_pcr0_quote()) {
    output += indent + "  pcr0_quote: ";
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.pcr0_quote(), indent_size + 2)
            .c_str());
    output += "\n";
  }
  if (value.has_pcr1_quote()) {
    output += indent + "  pcr1_quote: ";
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.pcr1_quote(), indent_size + 2)
            .c_str());
    output += "\n";
  }
  if (value.has_enterprise_enrollment_nonce()) {
    output += indent + "  enterprise_enrollment_nonce: ";
    base::StringAppendF(
        &output, "%s",
        base::HexEncode(value.enterprise_enrollment_nonce().data(),
                        value.enterprise_enrollment_nonce().size())
            .c_str());
    output += "\n";
  }
  if (value.has_tpm_version()) {
    output += indent + "  tpm_version: ";
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.tpm_version(), indent_size + 2)
            .c_str());
    output += "\n";
  }
  if (value.has_encrypted_rsa_endorsement_quote()) {
    output += indent + "  encrypted_rsa_endorsement_quote: ";
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.encrypted_rsa_endorsement_quote(),
                                      indent_size + 2)
            .c_str());
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const AttestationEnrollmentResponse& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const AttestationEnrollmentResponse& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_status()) {
    output += indent + "  status: ";
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.status(), indent_size + 2).c_str());
    output += "\n";
  }
  if (value.has_detail()) {
    output += indent + "  detail: ";
    base::StringAppendF(&output, "%s", value.detail().c_str());
    output += "\n";
  }
  if (value.has_encrypted_identity_credential()) {
    output += indent + "  encrypted_identity_credential: ";
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.encrypted_identity_credential(),
                                      indent_size + 2)
            .c_str());
    output += "\n";
  }
  if (value.has_extra_details()) {
    output += indent + "  extra_details: ";
    base::StringAppendF(&output, "%s", value.extra_details().c_str());
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const DeviceSetupCertificateMetadata& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const DeviceSetupCertificateMetadata& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_id()) {
    output += indent + "  id: ";
    base::StringAppendF(&output, "%s", value.id().c_str());
    output += "\n";
  }
  if (value.has_timestamp()) {
    output += indent + "  timestamp: ";
    base::StringAppendF(&output, "%" PRIu64 " (0x%016" PRIX64 ")",
                        value.timestamp(), value.timestamp());
    output += "\n";
  }
  if (value.has_content_binding()) {
    output += indent + "  content_binding: ";
    base::StringAppendF(&output, "%s", value.content_binding().c_str());
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const AttestationCertificateRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const AttestationCertificateRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_identity_credential()) {
    output += indent + "  identity_credential: ";
    base::StringAppendF(&output, "%s",
                        base::HexEncode(value.identity_credential().data(),
                                        value.identity_credential().size())
                            .c_str());
    output += "\n";
  }
  if (value.has_certified_public_key()) {
    output += indent + "  certified_public_key: ";
    base::StringAppendF(&output, "%s",
                        base::HexEncode(value.certified_public_key().data(),
                                        value.certified_public_key().size())
                            .c_str());
    output += "\n";
  }
  if (value.has_certified_key_info()) {
    output += indent + "  certified_key_info: ";
    base::StringAppendF(&output, "%s",
                        base::HexEncode(value.certified_key_info().data(),
                                        value.certified_key_info().size())
                            .c_str());
    output += "\n";
  }
  if (value.has_certified_key_proof()) {
    output += indent + "  certified_key_proof: ";
    base::StringAppendF(&output, "%s",
                        base::HexEncode(value.certified_key_proof().data(),
                                        value.certified_key_proof().size())
                            .c_str());
    output += "\n";
  }
  if (value.has_message_id()) {
    output += indent + "  message_id: ";
    base::StringAppendF(
        &output, "%s",
        base::HexEncode(value.message_id().data(), value.message_id().size())
            .c_str());
    output += "\n";
  }
  if (value.has_profile()) {
    output += indent + "  profile: ";
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.profile(), indent_size + 2)
            .c_str());
    output += "\n";
  }
  if (value.has_origin()) {
    output += indent + "  origin: ";
    base::StringAppendF(&output, "%s", value.origin().c_str());
    output += "\n";
  }
  if (value.has_temporal_index()) {
    output += indent + "  temporal_index: ";
    base::StringAppendF(&output, "%" PRId32, value.temporal_index());
    output += "\n";
  }
  if (value.has_tpm_version()) {
    output += indent + "  tpm_version: ";
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.tpm_version(), indent_size + 2)
            .c_str());
    output += "\n";
  }
  output += indent + "  device_setup_certificate_metadata: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.device_setup_certificate_metadata(),
                                    indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const AttestationCertificateResponse& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const AttestationCertificateResponse& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_status()) {
    output += indent + "  status: ";
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.status(), indent_size + 2).c_str());
    output += "\n";
  }
  if (value.has_detail()) {
    output += indent + "  detail: ";
    base::StringAppendF(&output, "%s", value.detail().c_str());
    output += "\n";
  }
  if (value.has_certified_key_credential()) {
    output += indent + "  certified_key_credential: ";
    base::StringAppendF(&output, "%s",
                        base::HexEncode(value.certified_key_credential().data(),
                                        value.certified_key_credential().size())
                            .c_str());
    output += "\n";
  }
  if (value.has_intermediate_ca_cert()) {
    output += indent + "  intermediate_ca_cert: ";
    base::StringAppendF(&output, "%s",
                        base::HexEncode(value.intermediate_ca_cert().data(),
                                        value.intermediate_ca_cert().size())
                            .c_str());
    output += "\n";
  }
  if (value.has_message_id()) {
    output += indent + "  message_id: ";
    base::StringAppendF(
        &output, "%s",
        base::HexEncode(value.message_id().data(), value.message_id().size())
            .c_str());
    output += "\n";
  }
  output += indent + "  additional_intermediate_ca_cert: {";
  for (int i = 0; i < value.additional_intermediate_ca_cert_size(); ++i) {
    if (i > 0) {
      base::StringAppendF(&output, ", ");
    }
    base::StringAppendF(
        &output, "%s",
        base::HexEncode(value.additional_intermediate_ca_cert(i).data(),
                        value.additional_intermediate_ca_cert(i).size())
            .c_str());
  }
  output += "}\n";
  if (value.has_extra_details()) {
    output += indent + "  extra_details: ";
    base::StringAppendF(&output, "%s", value.extra_details().c_str());
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const AttestationResetRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const AttestationResetRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_encrypted_identity_credential()) {
    output += indent + "  encrypted_identity_credential: ";
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.encrypted_identity_credential(),
                                      indent_size + 2)
            .c_str());
    output += "\n";
  }
  if (value.has_token()) {
    output += indent + "  token: ";
    base::StringAppendF(
        &output, "%s",
        base::HexEncode(value.token().data(), value.token().size()).c_str());
    output += "\n";
  }
  if (value.has_encrypted_endorsement_credential()) {
    output += indent + "  encrypted_endorsement_credential: ";
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.encrypted_endorsement_credential(),
                                      indent_size + 2)
            .c_str());
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const AttestationResetResponse& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const AttestationResetResponse& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_status()) {
    output += indent + "  status: ";
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.status(), indent_size + 2).c_str());
    output += "\n";
  }
  if (value.has_detail()) {
    output += indent + "  detail: ";
    base::StringAppendF(&output, "%s", value.detail().c_str());
    output += "\n";
  }
  if (value.has_extra_details()) {
    output += indent + "  extra_details: ";
    base::StringAppendF(&output, "%s", value.extra_details().c_str());
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const Challenge& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const Challenge& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_prefix()) {
    output += indent + "  prefix: ";
    base::StringAppendF(&output, "%s", value.prefix().c_str());
    output += "\n";
  }
  if (value.has_nonce()) {
    output += indent + "  nonce: ";
    base::StringAppendF(
        &output, "%s",
        base::HexEncode(value.nonce().data(), value.nonce().size()).c_str());
    output += "\n";
  }
  if (value.has_timestamp()) {
    output += indent + "  timestamp: ";
    base::StringAppendF(&output, "%" PRId64, value.timestamp());
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const ChallengeResponse& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const ChallengeResponse& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_challenge()) {
    output += indent + "  challenge: ";
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.challenge(), indent_size + 2)
            .c_str());
    output += "\n";
  }
  if (value.has_nonce()) {
    output += indent + "  nonce: ";
    base::StringAppendF(
        &output, "%s",
        base::HexEncode(value.nonce().data(), value.nonce().size()).c_str());
    output += "\n";
  }
  if (value.has_encrypted_key_info()) {
    output += indent + "  encrypted_key_info: ";
    base::StringAppendF(&output, "%s",
                        GetProtoDebugStringWithIndent(
                            value.encrypted_key_info(), indent_size + 2)
                            .c_str());
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const KeyInfo& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const KeyInfo& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_key_type()) {
    output += indent + "  key_type: ";
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.key_type(), indent_size + 2)
            .c_str());
    output += "\n";
  }
  if (value.has_domain()) {
    output += indent + "  domain: ";
    base::StringAppendF(&output, "%s", value.domain().c_str());
    output += "\n";
  }
  if (value.has_device_id()) {
    output += indent + "  device_id: ";
    base::StringAppendF(
        &output, "%s",
        base::HexEncode(value.device_id().data(), value.device_id().size())
            .c_str());
    output += "\n";
  }
  if (value.has_certificate()) {
    output += indent + "  certificate: ";
    base::StringAppendF(
        &output, "%s",
        base::HexEncode(value.certificate().data(), value.certificate().size())
            .c_str());
    output += "\n";
  }
  if (value.has_signed_public_key_and_challenge()) {
    output += indent + "  signed_public_key_and_challenge: ";
    base::StringAppendF(
        &output, "%s",
        base::HexEncode(value.signed_public_key_and_challenge().data(),
                        value.signed_public_key_and_challenge().size())
            .c_str());
    output += "\n";
  }
  if (value.has_customer_id()) {
    output += indent + "  customer_id: ";
    base::StringAppendF(&output, "%s", value.customer_id().c_str());
    output += "\n";
  }
  if (value.has_browser_instance_public_key()) {
    output += indent + "  browser_instance_public_key: ";
    base::StringAppendF(
        &output, "%s",
        base::HexEncode(value.browser_instance_public_key().data(),
                        value.browser_instance_public_key().size())
            .c_str());
    output += "\n";
  }
  if (value.has_signing_scheme()) {
    output += indent + "  signing_scheme: ";
    base::StringAppendF(&output, "%s", value.signing_scheme().c_str());
    output += "\n";
  }
  if (value.has_device_trust_signals()) {
    output += indent + "  device_trust_signals: ";
    base::StringAppendF(&output, "%s",
                        GetProtoDebugStringWithIndent(
                            value.device_trust_signals(), indent_size + 2)
                            .c_str());
    output += "\n";
  }
  if (value.has_device_trust_signals_json()) {
    output += indent + "  device_trust_signals_json: ";
    base::StringAppendF(&output, "%s",
                        value.device_trust_signals_json().c_str());
    output += "\n";
  }
  if (value.has_dm_token()) {
    output += indent + "  dm_token: ";
    base::StringAppendF(&output, "%s", value.dm_token().c_str());
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const DeviceTrustSignals& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const DeviceTrustSignals& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_device_id()) {
    output += indent + "  device_id: ";
    base::StringAppendF(&output, "%s", value.device_id().c_str());
    output += "\n";
  }
  if (value.has_obfuscated_customer_id()) {
    output += indent + "  obfuscated_customer_id: ";
    base::StringAppendF(&output, "%s", value.obfuscated_customer_id().c_str());
    output += "\n";
  }
  if (value.has_serial_number()) {
    output += indent + "  serial_number: ";
    base::StringAppendF(&output, "%s", value.serial_number().c_str());
    output += "\n";
  }
  if (value.has_display_name()) {
    output += indent + "  display_name: ";
    base::StringAppendF(&output, "%s", value.display_name().c_str());
    output += "\n";
  }
  if (value.has_os()) {
    output += indent + "  os: ";
    base::StringAppendF(&output, "%s", value.os().c_str());
    output += "\n";
  }
  if (value.has_device_manufacturer()) {
    output += indent + "  device_manufacturer: ";
    base::StringAppendF(&output, "%s", value.device_manufacturer().c_str());
    output += "\n";
  }
  if (value.has_device_model()) {
    output += indent + "  device_model: ";
    base::StringAppendF(&output, "%s", value.device_model().c_str());
    output += "\n";
  }
  if (value.has_os_version()) {
    output += indent + "  os_version: ";
    base::StringAppendF(&output, "%s", value.os_version().c_str());
    output += "\n";
  }
  output += indent + "  imei: {";
  for (int i = 0; i < value.imei_size(); ++i) {
    if (i > 0) {
      base::StringAppendF(&output, ", ");
    }
    base::StringAppendF(&output, "%s", value.imei(i).c_str());
  }
  output += "}\n";
  output += indent + "  meid: {";
  for (int i = 0; i < value.meid_size(); ++i) {
    if (i > 0) {
      base::StringAppendF(&output, ", ");
    }
    base::StringAppendF(&output, "%s", value.meid(i).c_str());
  }
  output += "}\n";
  if (value.has_tpm_hash()) {
    output += indent + "  tpm_hash: ";
    base::StringAppendF(&output, "%s", value.tpm_hash().c_str());
    output += "\n";
  }
  if (value.has_is_disk_encrypted()) {
    output += indent + "  is_disk_encrypted: ";
    base::StringAppendF(&output, "%s",
                        value.is_disk_encrypted() ? "true" : "false");
    output += "\n";
  }
  if (value.has_allow_screen_lock()) {
    output += indent + "  allow_screen_lock: ";
    base::StringAppendF(&output, "%s",
                        value.allow_screen_lock() ? "true" : "false");
    output += "\n";
  }
  if (value.has_is_protected_by_password()) {
    output += indent + "  is_protected_by_password: ";
    base::StringAppendF(&output, "%s",
                        value.is_protected_by_password() ? "true" : "false");
    output += "\n";
  }
  if (value.has_is_jailbroken()) {
    output += indent + "  is_jailbroken: ";
    base::StringAppendF(&output, "%s",
                        value.is_jailbroken() ? "true" : "false");
    output += "\n";
  }
  if (value.has_enrollment_domain()) {
    output += indent + "  enrollment_domain: ";
    base::StringAppendF(&output, "%s", value.enrollment_domain().c_str());
    output += "\n";
  }
  if (value.has_browser_version()) {
    output += indent + "  browser_version: ";
    base::StringAppendF(&output, "%s", value.browser_version().c_str());
    output += "\n";
  }
  if (value.has_safe_browsing_protection_level()) {
    output += indent + "  safe_browsing_protection_level: ";
    base::StringAppendF(&output, "%" PRId32,
                        value.safe_browsing_protection_level());
    output += "\n";
  }
  if (value.has_site_isolation_enabled()) {
    output += indent + "  site_isolation_enabled: ";
    base::StringAppendF(&output, "%s",
                        value.site_isolation_enabled() ? "true" : "false");
    output += "\n";
  }
  if (value.has_third_party_blocking_enabled()) {
    output += indent + "  third_party_blocking_enabled: ";
    base::StringAppendF(
        &output, "%s", value.third_party_blocking_enabled() ? "true" : "false");
    output += "\n";
  }
  if (value.has_remote_desktop_available()) {
    output += indent + "  remote_desktop_available: ";
    base::StringAppendF(&output, "%s",
                        value.remote_desktop_available() ? "true" : "false");
    output += "\n";
  }
  if (value.has_signed_in_profile_name()) {
    output += indent + "  signed_in_profile_name: ";
    base::StringAppendF(&output, "%s", value.signed_in_profile_name().c_str());
    output += "\n";
  }
  if (value.has_chrome_cleanup_enabled()) {
    output += indent + "  chrome_cleanup_enabled: ";
    base::StringAppendF(&output, "%s",
                        value.chrome_cleanup_enabled() ? "true" : "false");
    output += "\n";
  }
  if (value.has_password_protection_warning_trigger()) {
    output += indent + "  password_protection_warning_trigger: ";
    base::StringAppendF(&output, "%" PRId32,
                        value.password_protection_warning_trigger());
    output += "\n";
  }
  if (value.has_dns_address()) {
    output += indent + "  dns_address: ";
    base::StringAppendF(&output, "%s", value.dns_address().c_str());
    output += "\n";
  }
  if (value.has_built_in_dns_client_enabled()) {
    output += indent + "  built_in_dns_client_enabled: ";
    base::StringAppendF(&output, "%s",
                        value.built_in_dns_client_enabled() ? "true" : "false");
    output += "\n";
  }
  if (value.has_firewall_on()) {
    output += indent + "  firewall_on: ";
    base::StringAppendF(&output, "%s", value.firewall_on() ? "true" : "false");
    output += "\n";
  }
  if (value.has_windows_domain()) {
    output += indent + "  windows_domain: ";
    base::StringAppendF(&output, "%s", value.windows_domain().c_str());
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

}  // namespace attestation
