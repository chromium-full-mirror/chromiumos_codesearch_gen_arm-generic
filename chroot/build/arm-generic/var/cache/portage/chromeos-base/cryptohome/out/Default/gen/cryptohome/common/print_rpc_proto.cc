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

#include "cryptohome/common/print_rpc_proto.h"

#include <inttypes.h>

#include <string>

#include <base/strings/string_number_conversions.h>
#include <base/strings/stringprintf.h>

#include "cryptohome/common/print_key_proto.h"

namespace cryptohome {

std::string GetProtoDebugString(CryptohomeErrorCode value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(CryptohomeErrorCode value,
                                          int indent_size) {
  if (value == CRYPTOHOME_ERROR_NOT_SET) {
    return "CRYPTOHOME_ERROR_NOT_SET";
  }
  if (value == CRYPTOHOME_ERROR_ACCOUNT_NOT_FOUND) {
    return "CRYPTOHOME_ERROR_ACCOUNT_NOT_FOUND";
  }
  if (value == CRYPTOHOME_ERROR_AUTHORIZATION_KEY_NOT_FOUND) {
    return "CRYPTOHOME_ERROR_AUTHORIZATION_KEY_NOT_FOUND";
  }
  if (value == CRYPTOHOME_ERROR_AUTHORIZATION_KEY_FAILED) {
    return "CRYPTOHOME_ERROR_AUTHORIZATION_KEY_FAILED";
  }
  if (value == CRYPTOHOME_ERROR_NOT_IMPLEMENTED) {
    return "CRYPTOHOME_ERROR_NOT_IMPLEMENTED";
  }
  if (value == CRYPTOHOME_ERROR_MOUNT_FATAL) {
    return "CRYPTOHOME_ERROR_MOUNT_FATAL";
  }
  if (value == CRYPTOHOME_ERROR_MOUNT_MOUNT_POINT_BUSY) {
    return "CRYPTOHOME_ERROR_MOUNT_MOUNT_POINT_BUSY";
  }
  if (value == CRYPTOHOME_ERROR_TPM_COMM_ERROR) {
    return "CRYPTOHOME_ERROR_TPM_COMM_ERROR";
  }
  if (value == CRYPTOHOME_ERROR_TPM_DEFEND_LOCK) {
    return "CRYPTOHOME_ERROR_TPM_DEFEND_LOCK";
  }
  if (value == CRYPTOHOME_ERROR_TPM_NEEDS_REBOOT) {
    return "CRYPTOHOME_ERROR_TPM_NEEDS_REBOOT";
  }
  if (value == CRYPTOHOME_ERROR_AUTHORIZATION_KEY_DENIED) {
    return "CRYPTOHOME_ERROR_AUTHORIZATION_KEY_DENIED";
  }
  if (value == CRYPTOHOME_ERROR_KEY_QUOTA_EXCEEDED) {
    return "CRYPTOHOME_ERROR_KEY_QUOTA_EXCEEDED";
  }
  if (value == CRYPTOHOME_ERROR_KEY_LABEL_EXISTS) {
    return "CRYPTOHOME_ERROR_KEY_LABEL_EXISTS";
  }
  if (value == CRYPTOHOME_ERROR_BACKING_STORE_FAILURE) {
    return "CRYPTOHOME_ERROR_BACKING_STORE_FAILURE";
  }
  if (value == CRYPTOHOME_ERROR_UPDATE_SIGNATURE_INVALID) {
    return "CRYPTOHOME_ERROR_UPDATE_SIGNATURE_INVALID";
  }
  if (value == CRYPTOHOME_ERROR_KEY_NOT_FOUND) {
    return "CRYPTOHOME_ERROR_KEY_NOT_FOUND";
  }
  if (value == CRYPTOHOME_ERROR_LOCKBOX_SIGNATURE_INVALID) {
    return "CRYPTOHOME_ERROR_LOCKBOX_SIGNATURE_INVALID";
  }
  if (value == CRYPTOHOME_ERROR_LOCKBOX_CANNOT_SIGN) {
    return "CRYPTOHOME_ERROR_LOCKBOX_CANNOT_SIGN";
  }
  if (value == CRYPTOHOME_ERROR_BOOT_ATTRIBUTE_NOT_FOUND) {
    return "CRYPTOHOME_ERROR_BOOT_ATTRIBUTE_NOT_FOUND";
  }
  if (value == CRYPTOHOME_ERROR_BOOT_ATTRIBUTES_CANNOT_SIGN) {
    return "CRYPTOHOME_ERROR_BOOT_ATTRIBUTES_CANNOT_SIGN";
  }
  if (value == CRYPTOHOME_ERROR_TPM_EK_NOT_AVAILABLE) {
    return "CRYPTOHOME_ERROR_TPM_EK_NOT_AVAILABLE";
  }
  if (value == CRYPTOHOME_ERROR_ATTESTATION_NOT_READY) {
    return "CRYPTOHOME_ERROR_ATTESTATION_NOT_READY";
  }
  if (value == CRYPTOHOME_ERROR_CANNOT_CONNECT_TO_CA) {
    return "CRYPTOHOME_ERROR_CANNOT_CONNECT_TO_CA";
  }
  if (value == CRYPTOHOME_ERROR_CA_REFUSED_ENROLLMENT) {
    return "CRYPTOHOME_ERROR_CA_REFUSED_ENROLLMENT";
  }
  if (value == CRYPTOHOME_ERROR_CA_REFUSED_CERTIFICATE) {
    return "CRYPTOHOME_ERROR_CA_REFUSED_CERTIFICATE";
  }
  if (value == CRYPTOHOME_ERROR_INTERNAL_ATTESTATION_ERROR) {
    return "CRYPTOHOME_ERROR_INTERNAL_ATTESTATION_ERROR";
  }
  if (value == CRYPTOHOME_ERROR_FIRMWARE_MANAGEMENT_PARAMETERS_INVALID) {
    return "CRYPTOHOME_ERROR_FIRMWARE_MANAGEMENT_PARAMETERS_INVALID";
  }
  if (value == CRYPTOHOME_ERROR_FIRMWARE_MANAGEMENT_PARAMETERS_CANNOT_STORE) {
    return "CRYPTOHOME_ERROR_FIRMWARE_MANAGEMENT_PARAMETERS_CANNOT_STORE";
  }
  if (value == CRYPTOHOME_ERROR_FIRMWARE_MANAGEMENT_PARAMETERS_CANNOT_REMOVE) {
    return "CRYPTOHOME_ERROR_FIRMWARE_MANAGEMENT_PARAMETERS_CANNOT_REMOVE";
  }
  if (value == CRYPTOHOME_ERROR_MOUNT_OLD_ENCRYPTION) {
    return "CRYPTOHOME_ERROR_MOUNT_OLD_ENCRYPTION";
  }
  if (value == CRYPTOHOME_ERROR_MOUNT_PREVIOUS_MIGRATION_INCOMPLETE) {
    return "CRYPTOHOME_ERROR_MOUNT_PREVIOUS_MIGRATION_INCOMPLETE";
  }
  if (value == CRYPTOHOME_ERROR_MIGRATE_KEY_FAILED) {
    return "CRYPTOHOME_ERROR_MIGRATE_KEY_FAILED";
  }
  if (value == CRYPTOHOME_ERROR_REMOVE_FAILED) {
    return "CRYPTOHOME_ERROR_REMOVE_FAILED";
  }
  if (value == CRYPTOHOME_ERROR_INVALID_ARGUMENT) {
    return "CRYPTOHOME_ERROR_INVALID_ARGUMENT";
  }
  if (value == CRYPTOHOME_ERROR_INSTALL_ATTRIBUTES_GET_FAILED) {
    return "CRYPTOHOME_ERROR_INSTALL_ATTRIBUTES_GET_FAILED";
  }
  if (value == CRYPTOHOME_ERROR_INSTALL_ATTRIBUTES_SET_FAILED) {
    return "CRYPTOHOME_ERROR_INSTALL_ATTRIBUTES_SET_FAILED";
  }
  if (value == CRYPTOHOME_ERROR_INSTALL_ATTRIBUTES_FINALIZE_FAILED) {
    return "CRYPTOHOME_ERROR_INSTALL_ATTRIBUTES_FINALIZE_FAILED";
  }
  if (value == CRYPTOHOME_ERROR_UPDATE_USER_ACTIVITY_TIMESTAMP_FAILED) {
    return "CRYPTOHOME_ERROR_UPDATE_USER_ACTIVITY_TIMESTAMP_FAILED";
  }
  if (value == CRYPTOHOME_ERROR_FAILED_TO_READ_PCR) {
    return "CRYPTOHOME_ERROR_FAILED_TO_READ_PCR";
  }
  if (value == CRYPTOHOME_ERROR_PCR_ALREADY_EXTENDED) {
    return "CRYPTOHOME_ERROR_PCR_ALREADY_EXTENDED";
  }
  if (value == CRYPTOHOME_ERROR_FAILED_TO_EXTEND_PCR) {
    return "CRYPTOHOME_ERROR_FAILED_TO_EXTEND_PCR";
  }
  if (value == CRYPTOHOME_ERROR_TPM_UPDATE_REQUIRED) {
    return "CRYPTOHOME_ERROR_TPM_UPDATE_REQUIRED";
  }
  if (value == CRYPTOHOME_ERROR_FINGERPRINT_ERROR_INTERNAL) {
    return "CRYPTOHOME_ERROR_FINGERPRINT_ERROR_INTERNAL";
  }
  if (value == CRYPTOHOME_ERROR_FINGERPRINT_RETRY_REQUIRED) {
    return "CRYPTOHOME_ERROR_FINGERPRINT_RETRY_REQUIRED";
  }
  if (value == CRYPTOHOME_ERROR_FINGERPRINT_DENIED) {
    return "CRYPTOHOME_ERROR_FINGERPRINT_DENIED";
  }
  if (value == CRYPTOHOME_ERROR_VAULT_UNRECOVERABLE) {
    return "CRYPTOHOME_ERROR_VAULT_UNRECOVERABLE";
  }
  if (value == CRYPTOHOME_ERROR_FIDO_MAKE_CREDENTIAL_FAILED) {
    return "CRYPTOHOME_ERROR_FIDO_MAKE_CREDENTIAL_FAILED";
  }
  if (value == CRYPTOHOME_ERROR_FIDO_GET_ASSERTION_FAILED) {
    return "CRYPTOHOME_ERROR_FIDO_GET_ASSERTION_FAILED";
  }
  if (value == CRYPTOHOME_TOKEN_SERIALIZATION_FAILED) {
    return "CRYPTOHOME_TOKEN_SERIALIZATION_FAILED";
  }
  if (value == CRYPTOHOME_INVALID_AUTH_SESSION_TOKEN) {
    return "CRYPTOHOME_INVALID_AUTH_SESSION_TOKEN";
  }
  if (value == CRYPTOHOME_ADD_CREDENTIALS_FAILED) {
    return "CRYPTOHOME_ADD_CREDENTIALS_FAILED";
  }
  if (value == CRYPTOHOME_ERROR_UNAUTHENTICATED_AUTH_SESSION) {
    return "CRYPTOHOME_ERROR_UNAUTHENTICATED_AUTH_SESSION";
  }
  if (value == CRYPTOHOME_ERROR_UNKNOWN_LEGACY) {
    return "CRYPTOHOME_ERROR_UNKNOWN_LEGACY";
  }
  if (value == CRYPTOHOME_ERROR_UNUSABLE_VAULT) {
    return "CRYPTOHOME_ERROR_UNUSABLE_VAULT";
  }
  return "<unknown>";
}

std::string GetProtoDebugString(FirmwareManagementParametersFlags value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    FirmwareManagementParametersFlags value,
    int indent_size) {
  if (value == NONE) {
    return "NONE";
  }
  if (value == DEVELOPER_DISABLE_BOOT) {
    return "DEVELOPER_DISABLE_BOOT";
  }
  if (value == DEVELOPER_DISABLE_RECOVERY_INSTALL) {
    return "DEVELOPER_DISABLE_RECOVERY_INSTALL";
  }
  if (value == DEVELOPER_DISABLE_RECOVERY_ROOTFS) {
    return "DEVELOPER_DISABLE_RECOVERY_ROOTFS";
  }
  if (value == DEVELOPER_ENABLE_USB) {
    return "DEVELOPER_ENABLE_USB";
  }
  if (value == DEVELOPER_ENABLE_LEGACY) {
    return "DEVELOPER_ENABLE_LEGACY";
  }
  if (value == DEVELOPER_USE_KEY_HASH) {
    return "DEVELOPER_USE_KEY_HASH";
  }
  if (value == DEVELOPER_DISABLE_CASE_CLOSED_DEBUGGING_UNLOCK) {
    return "DEVELOPER_DISABLE_CASE_CLOSED_DEBUGGING_UNLOCK";
  }
  return "<unknown>";
}

std::string GetProtoDebugString(KeyChallengeRequest_ChallengeType value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    KeyChallengeRequest_ChallengeType value,
    int indent_size) {
  if (value == KeyChallengeRequest_ChallengeType_CHALLENGE_TYPE_SIGNATURE) {
    return "KeyChallengeRequest_ChallengeType_CHALLENGE_TYPE_SIGNATURE";
  }
  return "<unknown>";
}

std::string GetProtoDebugString(const AccountIdentifier& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const AccountIdentifier& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_email()) {
    output += indent + "  email: ";
    base::StringAppendF(&output, "%s", value.email().c_str());
    output += "\n";
  }
  if (value.has_account_id()) {
    output += indent + "  account_id: ";
    base::StringAppendF(&output, "%s", value.account_id().c_str());
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const KeyDelegate& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const KeyDelegate& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_dbus_service_name()) {
    output += indent + "  dbus_service_name: ";
    base::StringAppendF(&output, "%s", value.dbus_service_name().c_str());
    output += "\n";
  }
  if (value.has_dbus_object_path()) {
    output += indent + "  dbus_object_path: ";
    base::StringAppendF(&output, "%s", value.dbus_object_path().c_str());
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const AuthorizationRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const AuthorizationRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_key()) {
    output += indent + "  key: ";
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.key(), indent_size + 2).c_str());
    output += "\n";
  }
  if (value.has_key_delegate()) {
    output += indent + "  key_delegate: ";
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.key_delegate(), indent_size + 2)
            .c_str());
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const KeyChallengeRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const KeyChallengeRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_challenge_type()) {
    output += indent + "  challenge_type: ";
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.challenge_type(), indent_size + 2)
            .c_str());
    output += "\n";
  }
  if (value.has_signature_request_data()) {
    output += indent + "  signature_request_data: ";
    base::StringAppendF(&output, "%s",
                        GetProtoDebugStringWithIndent(
                            value.signature_request_data(), indent_size + 2)
                            .c_str());
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const SignatureKeyChallengeRequestData& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const SignatureKeyChallengeRequestData& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_data_to_sign()) {
    output += indent + "  data_to_sign: ";
    base::StringAppendF(&output, "%s",
                        base::HexEncode(value.data_to_sign().data(),
                                        value.data_to_sign().size())
                            .c_str());
    output += "\n";
  }
  if (value.has_public_key_spki_der()) {
    output += indent + "  public_key_spki_der: ";
    base::StringAppendF(&output, "%s",
                        base::HexEncode(value.public_key_spki_der().data(),
                                        value.public_key_spki_der().size())
                            .c_str());
    output += "\n";
  }
  if (value.has_signature_algorithm()) {
    output += indent + "  signature_algorithm: ";
    base::StringAppendF(&output, "%s",
                        GetProtoDebugStringWithIndent(
                            value.signature_algorithm(), indent_size + 2)
                            .c_str());
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const KeyChallengeResponse& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const KeyChallengeResponse& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_signature_response_data()) {
    output += indent + "  signature_response_data: ";
    base::StringAppendF(&output, "%s",
                        GetProtoDebugStringWithIndent(
                            value.signature_response_data(), indent_size + 2)
                            .c_str());
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(
    const SignatureKeyChallengeResponseData& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const SignatureKeyChallengeResponseData& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

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

}  // namespace cryptohome
