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

#include "cryptohome/common/print_UserDataAuth_proto.h"

#include <inttypes.h>

#include <string>

#include <base/strings/string_number_conversions.h>
#include <base/strings/stringprintf.h>

#include "cryptohome/common/print_auth_factor_proto.h"
#include "cryptohome/common/print_fido_proto.h"
#include "cryptohome/common/print_key_proto.h"
#include "cryptohome/common/print_rpc_proto.h"

namespace user_data_auth {

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

std::string GetProtoDebugString(PrimaryAction value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(PrimaryAction value,
                                          int indent_size) {
  if (value == PRIMARY_NO_ERROR) {
    return "PRIMARY_NO_ERROR";
  }
  if (value == PRIMARY_NONE) {
    return "PRIMARY_NONE";
  }
  if (value == PRIMARY_CREATE_REQUIRED) {
    return "PRIMARY_CREATE_REQUIRED";
  }
  if (value == PRIMARY_NOTIFY_OLD_ENCRYPTION_POLICY) {
    return "PRIMARY_NOTIFY_OLD_ENCRYPTION_POLICY";
  }
  if (value == PRIMARY_RESUME_PREVIOUS_MIGRATION) {
    return "PRIMARY_RESUME_PREVIOUS_MIGRATION";
  }
  if (value == PRIMARY_TPM_UDPATE_REQUIRED) {
    return "PRIMARY_TPM_UDPATE_REQUIRED";
  }
  if (value == PRIMARY_TPM_NEEDS_REBOOT) {
    return "PRIMARY_TPM_NEEDS_REBOOT";
  }
  if (value == PRIMARY_TPM_LOCKOUT) {
    return "PRIMARY_TPM_LOCKOUT";
  }
  if (value == PRIMARY_INCORRECT_AUTH) {
    return "PRIMARY_INCORRECT_AUTH";
  }
  return "<unknown>";
}

std::string GetProtoDebugString(PossibleAction value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(PossibleAction value,
                                          int indent_size) {
  if (value == POSSIBLY_NONE) {
    return "POSSIBLY_NONE";
  }
  if (value == POSSIBLY_RETRY) {
    return "POSSIBLY_RETRY";
  }
  if (value == POSSIBLY_REBOOT) {
    return "POSSIBLY_REBOOT";
  }
  if (value == POSSIBLY_AUTH) {
    return "POSSIBLY_AUTH";
  }
  if (value == POSSIBLY_INCORRECT_AUTH) {
    return "POSSIBLY_INCORRECT_AUTH";
  }
  if (value == POSSIBLY_DELETE_VAULT) {
    return "POSSIBLY_DELETE_VAULT";
  }
  if (value == POSSIBLY_POWERWASH) {
    return "POSSIBLY_POWERWASH";
  }
  if (value == POSSIBLY_DEV_CHECK_UNEXPECTED_STATE) {
    return "POSSIBLY_DEV_CHECK_UNEXPECTED_STATE";
  }
  if (value == POSSIBLY_FATAL) {
    return "POSSIBLY_FATAL";
  }
  return "<unknown>";
}

std::string GetProtoDebugString(DircryptoMigrationStatus value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(DircryptoMigrationStatus value,
                                          int indent_size) {
  if (value == DIRCRYPTO_MIGRATION_SUCCESS) {
    return "DIRCRYPTO_MIGRATION_SUCCESS";
  }
  if (value == DIRCRYPTO_MIGRATION_FAILED) {
    return "DIRCRYPTO_MIGRATION_FAILED";
  }
  if (value == DIRCRYPTO_MIGRATION_INITIALIZING) {
    return "DIRCRYPTO_MIGRATION_INITIALIZING";
  }
  if (value == DIRCRYPTO_MIGRATION_IN_PROGRESS) {
    return "DIRCRYPTO_MIGRATION_IN_PROGRESS";
  }
  return "<unknown>";
}

std::string GetProtoDebugString(AuthSessionFlags value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(AuthSessionFlags value,
                                          int indent_size) {
  if (value == AUTH_SESSION_FLAGS_NONE) {
    return "AUTH_SESSION_FLAGS_NONE";
  }
  if (value == AUTH_SESSION_FLAGS_EPHEMERAL_USER) {
    return "AUTH_SESSION_FLAGS_EPHEMERAL_USER";
  }
  return "<unknown>";
}

std::string GetProtoDebugString(AuthSessionStatus value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(AuthSessionStatus value,
                                          int indent_size) {
  if (value == AUTH_SESSION_STATUS_NOT_SET) {
    return "AUTH_SESSION_STATUS_NOT_SET";
  }
  if (value == AUTH_SESSION_STATUS_FURTHER_FACTOR_REQUIRED) {
    return "AUTH_SESSION_STATUS_FURTHER_FACTOR_REQUIRED";
  }
  if (value == AUTH_SESSION_STATUS_AUTHENTICATED) {
    return "AUTH_SESSION_STATUS_AUTHENTICATED";
  }
  if (value == AUTH_SESSION_STATUS_INVALID_AUTH_SESSION) {
    return "AUTH_SESSION_STATUS_INVALID_AUTH_SESSION";
  }
  return "<unknown>";
}

std::string GetProtoDebugString(VaultEncryptionType value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(VaultEncryptionType value,
                                          int indent_size) {
  if (value == CRYPTOHOME_VAULT_ENCRYPTION_ANY) {
    return "CRYPTOHOME_VAULT_ENCRYPTION_ANY";
  }
  if (value == CRYPTOHOME_VAULT_ENCRYPTION_ECRYPTFS) {
    return "CRYPTOHOME_VAULT_ENCRYPTION_ECRYPTFS";
  }
  if (value == CRYPTOHOME_VAULT_ENCRYPTION_FSCRYPT) {
    return "CRYPTOHOME_VAULT_ENCRYPTION_FSCRYPT";
  }
  if (value == CRYPTOHOME_VAULT_ENCRYPTION_DMCRYPT) {
    return "CRYPTOHOME_VAULT_ENCRYPTION_DMCRYPT";
  }
  return "<unknown>";
}

std::string GetProtoDebugString(InstallAttributesState value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(InstallAttributesState value,
                                          int indent_size) {
  if (value == UNKNOWN) {
    return "UNKNOWN";
  }
  if (value == TPM_NOT_OWNED) {
    return "TPM_NOT_OWNED";
  }
  if (value == FIRST_INSTALL) {
    return "FIRST_INSTALL";
  }
  if (value == VALID) {
    return "VALID";
  }
  if (value == INVALID) {
    return "INVALID";
  }
  return "<unknown>";
}

std::string GetProtoDebugString(GetRecoveryRequestRequest_UserType value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    GetRecoveryRequestRequest_UserType value,
    int indent_size) {
  if (value == GetRecoveryRequestRequest_UserType_UNKNOWN) {
    return "GetRecoveryRequestRequest_UserType_UNKNOWN";
  }
  if (value == GetRecoveryRequestRequest_UserType_GAIA_ID) {
    return "GetRecoveryRequestRequest_UserType_GAIA_ID";
  }
  return "<unknown>";
}

std::string GetProtoDebugString(const CreateRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const CreateRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  keys: {";
  for (int i = 0; i < value.keys_size(); ++i) {
    if (i > 0) {
      base::StringAppendF(&output, ", ");
    }
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.keys(i), indent_size + 2).c_str());
  }
  output += "}\n";
  output += indent + "  copy_authorization_key: ";
  base::StringAppendF(&output, "%s",
                      value.copy_authorization_key() ? "true" : "false");
  output += "\n";

  output += indent + "  force_ecryptfs: ";
  base::StringAppendF(&output, "%s", value.force_ecryptfs() ? "true" : "false");
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const CryptohomeErrorInfo& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const CryptohomeErrorInfo& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error_id: ";
  base::StringAppendF(&output, "%s", value.error_id().c_str());
  output += "\n";

  output += indent + "  readable_error_id: ";
  base::StringAppendF(&output, "%s", value.readable_error_id().c_str());
  output += "\n";

  output += indent + "  primary_action: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.primary_action(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "  possible_actions: {";
  for (int i = 0; i < value.possible_actions_size(); ++i) {
    if (i > 0) {
      base::StringAppendF(&output, ", ");
    }
    base::StringAppendF(&output, "%s",
                        GetProtoDebugStringWithIndent(value.possible_actions(i),
                                                      indent_size + 2)
                            .c_str());
  }
  output += "}\n";
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const IsMountedRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const IsMountedRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  username: ";
  base::StringAppendF(&output, "%s", value.username().c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const IsMountedReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const IsMountedReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  is_mounted: ";
  base::StringAppendF(&output, "%s", value.is_mounted() ? "true" : "false");
  output += "\n";

  output += indent + "  is_ephemeral_mount: ";
  base::StringAppendF(&output, "%s",
                      value.is_ephemeral_mount() ? "true" : "false");
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const UnmountRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const UnmountRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const UnmountReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const UnmountReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  error_info: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error_info(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const MountRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const MountRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  account: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.account(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  authorization: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.authorization(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "  require_ephemeral: ";
  base::StringAppendF(&output, "%s",
                      value.require_ephemeral() ? "true" : "false");
  output += "\n";

  output += indent + "  create: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.create(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  force_dircrypto_if_available: ";
  base::StringAppendF(&output, "%s",
                      value.force_dircrypto_if_available() ? "true" : "false");
  output += "\n";

  output += indent + "  to_migrate_from_ecryptfs: ";
  base::StringAppendF(&output, "%s",
                      value.to_migrate_from_ecryptfs() ? "true" : "false");
  output += "\n";

  output += indent + "  public_mount: ";
  base::StringAppendF(&output, "%s", value.public_mount() ? "true" : "false");
  output += "\n";

  output += indent + "  guest_mount: ";
  base::StringAppendF(&output, "%s", value.guest_mount() ? "true" : "false");
  output += "\n";

  output += indent + "  auth_session_id: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.auth_session_id().data(),
                                      value.auth_session_id().size())
                          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const MountReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const MountReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  recreated: ";
  base::StringAppendF(&output, "%s", value.recreated() ? "true" : "false");
  output += "\n";

  output += indent + "  sanitized_username: ";
  base::StringAppendF(&output, "%s", value.sanitized_username().c_str());
  output += "\n";

  output += indent + "  error_info: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error_info(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const RemoveRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const RemoveRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  identifier: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.identifier(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "  auth_session_id: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.auth_session_id().data(),
                                      value.auth_session_id().size())
                          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const RemoveReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const RemoveReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  error_info: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error_info(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const ListKeysRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const ListKeysRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  account_id: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.account_id(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "  authorization_request: ";
  base::StringAppendF(&output, "%s",
                      GetProtoDebugStringWithIndent(
                          value.authorization_request(), indent_size + 2)
                          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const ListKeysReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const ListKeysReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  labels: {";
  for (int i = 0; i < value.labels_size(); ++i) {
    if (i > 0) {
      base::StringAppendF(&output, ", ");
    }
    base::StringAppendF(&output, "%s", value.labels(i).c_str());
  }
  output += "}\n";
  output += indent + "  error_info: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error_info(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetKeyDataRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const GetKeyDataRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  account_id: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.account_id(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "  authorization_request: ";
  base::StringAppendF(&output, "%s",
                      GetProtoDebugStringWithIndent(
                          value.authorization_request(), indent_size + 2)
                          .c_str());
  output += "\n";

  output += indent + "  key: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.key(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetKeyDataReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const GetKeyDataReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  key_data: {";
  for (int i = 0; i < value.key_data_size(); ++i) {
    if (i > 0) {
      base::StringAppendF(&output, ", ");
    }
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.key_data(i), indent_size + 2)
            .c_str());
  }
  output += "}\n";
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const CheckKeyRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const CheckKeyRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  account_id: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.account_id(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "  authorization_request: ";
  base::StringAppendF(&output, "%s",
                      GetProtoDebugStringWithIndent(
                          value.authorization_request(), indent_size + 2)
                          .c_str());
  output += "\n";

  output += indent + "  unlock_webauthn_secret: ";
  base::StringAppendF(&output, "%s",
                      value.unlock_webauthn_secret() ? "true" : "false");
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const CheckKeyReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const CheckKeyReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const AddKeyRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const AddKeyRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  account_id: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.account_id(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "  authorization_request: ";
  base::StringAppendF(&output, "%s",
                      GetProtoDebugStringWithIndent(
                          value.authorization_request(), indent_size + 2)
                          .c_str());
  output += "\n";

  output += indent + "  key: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.key(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  clobber_if_exists: ";
  base::StringAppendF(&output, "%s",
                      value.clobber_if_exists() ? "true" : "false");
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const AddKeyReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const AddKeyReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const RemoveKeyRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const RemoveKeyRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  account_id: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.account_id(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "  authorization_request: ";
  base::StringAppendF(&output, "%s",
                      GetProtoDebugStringWithIndent(
                          value.authorization_request(), indent_size + 2)
                          .c_str());
  output += "\n";

  output += indent + "  key: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.key(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const RemoveKeyReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const RemoveKeyReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const MassRemoveKeysRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const MassRemoveKeysRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  account_id: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.account_id(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "  authorization_request: ";
  base::StringAppendF(&output, "%s",
                      GetProtoDebugStringWithIndent(
                          value.authorization_request(), indent_size + 2)
                          .c_str());
  output += "\n";

  output += indent + "  exempt_key_data: {";
  for (int i = 0; i < value.exempt_key_data_size(); ++i) {
    if (i > 0) {
      base::StringAppendF(&output, ", ");
    }
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.exempt_key_data(i), indent_size + 2)
            .c_str());
  }
  output += "}\n";
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const MassRemoveKeysReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const MassRemoveKeysReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const MigrateKeyRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const MigrateKeyRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  account_id: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.account_id(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "  authorization_request: ";
  base::StringAppendF(&output, "%s",
                      GetProtoDebugStringWithIndent(
                          value.authorization_request(), indent_size + 2)
                          .c_str());
  output += "\n";

  output += indent + "  secret: ";
  base::StringAppendF(
      &output, "%s",
      base::HexEncode(value.secret().data(), value.secret().size()).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const MigrateKeyReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const MigrateKeyReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(
    const StartFingerprintAuthSessionRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const StartFingerprintAuthSessionRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  account_id: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.account_id(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const StartFingerprintAuthSessionReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const StartFingerprintAuthSessionReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const EndFingerprintAuthSessionRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const EndFingerprintAuthSessionRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const EndFingerprintAuthSessionReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const EndFingerprintAuthSessionReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetWebAuthnSecretRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const GetWebAuthnSecretRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  account_id: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.account_id(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetWebAuthnSecretReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const GetWebAuthnSecretReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  webauthn_secret: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.webauthn_secret().data(),
                                      value.webauthn_secret().size())
                          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetWebAuthnSecretHashRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const GetWebAuthnSecretHashRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  account_id: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.account_id(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetWebAuthnSecretHashReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const GetWebAuthnSecretHashReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  webauthn_secret_hash: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.webauthn_secret_hash().data(),
                                      value.webauthn_secret_hash().size())
                          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetHibernateSecretRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const GetHibernateSecretRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  account_id: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.account_id(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "  auth_session_id: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.auth_session_id().data(),
                                      value.auth_session_id().size())
                          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetHibernateSecretReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const GetHibernateSecretReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  hibernate_secret: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.hibernate_secret().data(),
                                      value.hibernate_secret().size())
                          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const StartMigrateToDircryptoRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const StartMigrateToDircryptoRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  account_id: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.account_id(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "  minimal_migration: ";
  base::StringAppendF(&output, "%s",
                      value.minimal_migration() ? "true" : "false");
  output += "\n";

  output += indent + "  auth_session_id: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.auth_session_id().data(),
                                      value.auth_session_id().size())
                          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const StartMigrateToDircryptoReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const StartMigrateToDircryptoReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const DircryptoMigrationProgress& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const DircryptoMigrationProgress& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  status: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.status(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  current_bytes: ";
  base::StringAppendF(&output, "%" PRIu64 " (0x%016" PRIX64 ")",
                      value.current_bytes(), value.current_bytes());
  output += "\n";

  output += indent + "  total_bytes: ";
  base::StringAppendF(&output, "%" PRIu64 " (0x%016" PRIX64 ")",
                      value.total_bytes(), value.total_bytes());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const NeedsDircryptoMigrationRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const NeedsDircryptoMigrationRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  account_id: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.account_id(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const NeedsDircryptoMigrationReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const NeedsDircryptoMigrationReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  needs_dircrypto_migration: ";
  base::StringAppendF(&output, "%s",
                      value.needs_dircrypto_migration() ? "true" : "false");
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetSupportedKeyPoliciesRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const GetSupportedKeyPoliciesRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetSupportedKeyPoliciesReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const GetSupportedKeyPoliciesReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  low_entropy_credentials_supported: ";
  base::StringAppendF(
      &output, "%s",
      value.low_entropy_credentials_supported() ? "true" : "false");
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetAccountDiskUsageRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const GetAccountDiskUsageRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  identifier: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.identifier(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetAccountDiskUsageReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const GetAccountDiskUsageReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  size: ";
  base::StringAppendF(&output, "%" PRId64, value.size());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const LowDiskSpace& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const LowDiskSpace& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  disk_free_bytes: ";
  base::StringAppendF(&output, "%" PRIu64 " (0x%016" PRIX64 ")",
                      value.disk_free_bytes(), value.disk_free_bytes());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const StartAuthSessionRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const StartAuthSessionRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  account_id: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.account_id(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "  flags: ";
  base::StringAppendF(&output, "%" PRIu32 " (0x%08" PRIX32 ")", value.flags(),
                      value.flags());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const StartAuthSessionReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const StartAuthSessionReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  auth_session_id: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.auth_session_id().data(),
                                      value.auth_session_id().size())
                          .c_str());
  output += "\n";

  output += indent + "  user_exists: ";
  base::StringAppendF(&output, "%s", value.user_exists() ? "true" : "false");
  output += "\n";

  output += indent + "  auth_factors: {";
  for (int i = 0; i < value.auth_factors_size(); ++i) {
    if (i > 0) {
      base::StringAppendF(&output, ", ");
    }
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.auth_factors(i), indent_size + 2)
            .c_str());
  }
  output += "}\n";
  output += indent + "  error_info: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error_info(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "  supported_auth_factors: {";
  for (int i = 0; i < value.supported_auth_factors_size(); ++i) {
    if (i > 0) {
      base::StringAppendF(&output, ", ");
    }
    base::StringAppendF(&output, "%s",
                        GetProtoDebugStringWithIndent(
                            value.supported_auth_factors(i), indent_size + 2)
                            .c_str());
  }
  output += "}\n";
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const AddCredentialsRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const AddCredentialsRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  auth_session_id: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.auth_session_id().data(),
                                      value.auth_session_id().size())
                          .c_str());
  output += "\n";

  output += indent + "  authorization: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.authorization(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "  add_more_credentials: ";
  base::StringAppendF(&output, "%s",
                      value.add_more_credentials() ? "true" : "false");
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const AddCredentialsReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const AddCredentialsReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  error_info: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error_info(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const AuthenticateAuthSessionRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const AuthenticateAuthSessionRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  auth_session_id: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.auth_session_id().data(),
                                      value.auth_session_id().size())
                          .c_str());
  output += "\n";

  output += indent + "  authorization: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.authorization(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const AuthenticateAuthSessionReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const AuthenticateAuthSessionReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  authenticated: ";
  base::StringAppendF(&output, "%s", value.authenticated() ? "true" : "false");
  output += "\n";

  output += indent + "  error_info: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error_info(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const InvalidateAuthSessionRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const InvalidateAuthSessionRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  auth_session_id: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.auth_session_id().data(),
                                      value.auth_session_id().size())
                          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const InvalidateAuthSessionReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const InvalidateAuthSessionReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  error_info: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error_info(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const ExtendAuthSessionRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const ExtendAuthSessionRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  auth_session_id: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.auth_session_id().data(),
                                      value.auth_session_id().size())
                          .c_str());
  output += "\n";

  output += indent + "  extension_duration: ";
  base::StringAppendF(&output, "%" PRIu32 " (0x%08" PRIX32 ")",
                      value.extension_duration(), value.extension_duration());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const ExtendAuthSessionReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const ExtendAuthSessionReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  error_info: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error_info(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const UpdateCredentialRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const UpdateCredentialRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  auth_session_id: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.auth_session_id().data(),
                                      value.auth_session_id().size())
                          .c_str());
  output += "\n";

  output += indent + "  old_credential_label: ";
  base::StringAppendF(&output, "%s", value.old_credential_label().c_str());
  output += "\n";

  output += indent + "  authorization: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.authorization(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const UpdateCredentialReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const UpdateCredentialReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  error_info: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error_info(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const CreatePersistentUserRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const CreatePersistentUserRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  auth_session_id: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.auth_session_id().data(),
                                      value.auth_session_id().size())
                          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const CreatePersistentUserReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const CreatePersistentUserReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  sanitized_username: ";
  base::StringAppendF(&output, "%s", value.sanitized_username().c_str());
  output += "\n";

  output += indent + "  error_info: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error_info(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const PrepareGuestVaultRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const PrepareGuestVaultRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const PrepareGuestVaultReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const PrepareGuestVaultReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  sanitized_username: ";
  base::StringAppendF(&output, "%s", value.sanitized_username().c_str());
  output += "\n";

  output += indent + "  error_info: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error_info(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const PrepareEphemeralVaultRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const PrepareEphemeralVaultRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  auth_session_id: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.auth_session_id().data(),
                                      value.auth_session_id().size())
                          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const PrepareEphemeralVaultReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const PrepareEphemeralVaultReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  sanitized_username: ";
  base::StringAppendF(&output, "%s", value.sanitized_username().c_str());
  output += "\n";

  output += indent + "  error_info: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error_info(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetAuthSessionStatusRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const GetAuthSessionStatusRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  auth_session_id: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.auth_session_id().data(),
                                      value.auth_session_id().size())
                          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetAuthSessionStatusReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const GetAuthSessionStatusReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  status: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.status(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  time_left: ";
  base::StringAppendF(&output, "%" PRIu32 " (0x%08" PRIX32 ")",
                      value.time_left(), value.time_left());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const PreparePersistentVaultRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const PreparePersistentVaultRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  auth_session_id: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.auth_session_id().data(),
                                      value.auth_session_id().size())
                          .c_str());
  output += "\n";

  output += indent + "  block_ecryptfs: ";
  base::StringAppendF(&output, "%s", value.block_ecryptfs() ? "true" : "false");
  output += "\n";

  output += indent + "  encryption_type: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.encryption_type(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const PreparePersistentVaultReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const PreparePersistentVaultReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  sanitized_username: ";
  base::StringAppendF(&output, "%s", value.sanitized_username().c_str());
  output += "\n";

  output += indent + "  error_info: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error_info(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const PrepareVaultForMigrationRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const PrepareVaultForMigrationRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  auth_session_id: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.auth_session_id().data(),
                                      value.auth_session_id().size())
                          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const PrepareVaultForMigrationReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const PrepareVaultForMigrationReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  sanitized_username: ";
  base::StringAppendF(&output, "%s", value.sanitized_username().c_str());
  output += "\n";

  output += indent + "  error_info: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error_info(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetArcDiskFeaturesRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const GetArcDiskFeaturesRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetArcDiskFeaturesReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const GetArcDiskFeaturesReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  quota_supported: ";
  base::StringAppendF(&output, "%s",
                      value.quota_supported() ? "true" : "false");
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetCurrentSpaceForArcUidRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const GetCurrentSpaceForArcUidRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  uid: ";
  base::StringAppendF(&output, "%" PRIu32 " (0x%08" PRIX32 ")", value.uid(),
                      value.uid());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetCurrentSpaceForArcUidReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const GetCurrentSpaceForArcUidReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  cur_space: ";
  base::StringAppendF(&output, "%" PRId64, value.cur_space());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetCurrentSpaceForArcGidRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const GetCurrentSpaceForArcGidRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  gid: ";
  base::StringAppendF(&output, "%" PRIu32 " (0x%08" PRIX32 ")", value.gid(),
                      value.gid());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetCurrentSpaceForArcGidReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const GetCurrentSpaceForArcGidReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  cur_space: ";
  base::StringAppendF(&output, "%" PRId64, value.cur_space());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(
    const GetCurrentSpaceForArcProjectIdRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const GetCurrentSpaceForArcProjectIdRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  project_id: ";
  base::StringAppendF(&output, "%" PRIu32 " (0x%08" PRIX32 ")",
                      value.project_id(), value.project_id());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(
    const GetCurrentSpaceForArcProjectIdReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const GetCurrentSpaceForArcProjectIdReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  cur_space: ";
  base::StringAppendF(&output, "%" PRId64, value.cur_space());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(
    const SetMediaRWDataFileProjectIdRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const SetMediaRWDataFileProjectIdRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  project_id: ";
  base::StringAppendF(&output, "%" PRIu32 " (0x%08" PRIX32 ")",
                      value.project_id(), value.project_id());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const SetMediaRWDataFileProjectIdReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const SetMediaRWDataFileProjectIdReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  success: ";
  base::StringAppendF(&output, "%s", value.success() ? "true" : "false");
  output += "\n";

  output += indent + "  error: ";
  base::StringAppendF(&output, "%" PRId32, value.error());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(
    const SetMediaRWDataFileProjectInheritanceFlagRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const SetMediaRWDataFileProjectInheritanceFlagRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  enable: ";
  base::StringAppendF(&output, "%s", value.enable() ? "true" : "false");
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(
    const SetMediaRWDataFileProjectInheritanceFlagReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const SetMediaRWDataFileProjectInheritanceFlagReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  success: ";
  base::StringAppendF(&output, "%s", value.success() ? "true" : "false");
  output += "\n";

  output += indent + "  error: ";
  base::StringAppendF(&output, "%" PRId32, value.error());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const TpmTokenInfo& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const TpmTokenInfo& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  label: ";
  base::StringAppendF(&output, "%s", value.label().c_str());
  output += "\n";

  output += indent + "  user_pin: ";
  base::StringAppendF(&output, "%s", value.user_pin().c_str());
  output += "\n";

  output += indent + "  slot: ";
  base::StringAppendF(&output, "%" PRId32, value.slot());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const Pkcs11IsTpmTokenReadyRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const Pkcs11IsTpmTokenReadyRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const Pkcs11IsTpmTokenReadyReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const Pkcs11IsTpmTokenReadyReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  ready: ";
  base::StringAppendF(&output, "%s", value.ready() ? "true" : "false");
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const Pkcs11GetTpmTokenInfoRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const Pkcs11GetTpmTokenInfoRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  username: ";
  base::StringAppendF(&output, "%s", value.username().c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const Pkcs11GetTpmTokenInfoReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const Pkcs11GetTpmTokenInfoReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  token_info: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.token_info(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const Pkcs11TerminateRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const Pkcs11TerminateRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  username: ";
  base::StringAppendF(&output, "%s", value.username().c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const Pkcs11TerminateReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const Pkcs11TerminateReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const Pkcs11RestoreTpmTokensRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const Pkcs11RestoreTpmTokensRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const Pkcs11RestoreTpmTokensReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const Pkcs11RestoreTpmTokensReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const InstallAttributesGetRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const InstallAttributesGetRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  name: ";
  base::StringAppendF(&output, "%s", value.name().c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const InstallAttributesGetReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const InstallAttributesGetReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  value: ";
  base::StringAppendF(
      &output, "%s",
      base::HexEncode(value.value().data(), value.value().size()).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const InstallAttributesSetRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const InstallAttributesSetRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  name: ";
  base::StringAppendF(&output, "%s", value.name().c_str());
  output += "\n";

  output += indent + "  value: ";
  base::StringAppendF(
      &output, "%s",
      base::HexEncode(value.value().data(), value.value().size()).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const InstallAttributesSetReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const InstallAttributesSetReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const InstallAttributesFinalizeRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const InstallAttributesFinalizeRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const InstallAttributesFinalizeReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const InstallAttributesFinalizeReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(
    const InstallAttributesGetStatusRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const InstallAttributesGetStatusRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const InstallAttributesGetStatusReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const InstallAttributesGetStatusReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  count: ";
  base::StringAppendF(&output, "%" PRId32, value.count());
  output += "\n";

  output += indent + "  is_secure: ";
  base::StringAppendF(&output, "%s", value.is_secure() ? "true" : "false");
  output += "\n";

  output += indent + "  state: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.state(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const FirmwareManagementParameters& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const FirmwareManagementParameters& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  flags: ";
  base::StringAppendF(&output, "%" PRIu32 " (0x%08" PRIX32 ")", value.flags(),
                      value.flags());
  output += "\n";

  output += indent + "  developer_key_hash: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.developer_key_hash().data(),
                                      value.developer_key_hash().size())
                          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(
    const GetFirmwareManagementParametersRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const GetFirmwareManagementParametersRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(
    const GetFirmwareManagementParametersReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const GetFirmwareManagementParametersReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  fwmp: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.fwmp(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(
    const RemoveFirmwareManagementParametersRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const RemoveFirmwareManagementParametersRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(
    const RemoveFirmwareManagementParametersReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const RemoveFirmwareManagementParametersReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(
    const SetFirmwareManagementParametersRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const SetFirmwareManagementParametersRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  fwmp: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.fwmp(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(
    const SetFirmwareManagementParametersReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const SetFirmwareManagementParametersReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetSystemSaltRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const GetSystemSaltRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetSystemSaltReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const GetSystemSaltReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  salt: ";
  base::StringAppendF(
      &output, "%s",
      base::HexEncode(value.salt().data(), value.salt().size()).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(
    const UpdateCurrentUserActivityTimestampRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const UpdateCurrentUserActivityTimestampRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  time_shift_sec: ";
  base::StringAppendF(&output, "%" PRId32, value.time_shift_sec());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(
    const UpdateCurrentUserActivityTimestampReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const UpdateCurrentUserActivityTimestampReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetSanitizedUsernameRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const GetSanitizedUsernameRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  username: ";
  base::StringAppendF(&output, "%s", value.username().c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetSanitizedUsernameReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const GetSanitizedUsernameReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  sanitized_username: ";
  base::StringAppendF(&output, "%s", value.sanitized_username().c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetLoginStatusRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const GetLoginStatusRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetLoginStatusReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const GetLoginStatusReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  owner_user_exists: ";
  base::StringAppendF(&output, "%s",
                      value.owner_user_exists() ? "true" : "false");
  output += "\n";

  output += indent + "  is_locked_to_single_user: ";
  base::StringAppendF(&output, "%s",
                      value.is_locked_to_single_user() ? "true" : "false");
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetStatusStringRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const GetStatusStringRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetStatusStringReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const GetStatusStringReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  status: ";
  base::StringAppendF(&output, "%s", value.status().c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(
    const LockToSingleUserMountUntilRebootRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const LockToSingleUserMountUntilRebootRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  account_id: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.account_id(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(
    const LockToSingleUserMountUntilRebootReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const LockToSingleUserMountUntilRebootReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetRsuDeviceIdReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const GetRsuDeviceIdReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  rsu_device_id: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.rsu_device_id().data(),
                                      value.rsu_device_id().size())
                          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetRsuDeviceIdRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const GetRsuDeviceIdRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const CheckHealthRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const CheckHealthRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const CheckHealthReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const CheckHealthReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  requires_powerwash: ";
  base::StringAppendF(&output, "%s",
                      value.requires_powerwash() ? "true" : "false");
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const FidoMakeCredentialRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const FidoMakeCredentialRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  account_id: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.account_id(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "  make_credential_options: ";
  base::StringAppendF(&output, "%s",
                      GetProtoDebugStringWithIndent(
                          value.make_credential_options(), indent_size + 2)
                          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const FidoMakeCredentialReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const FidoMakeCredentialReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  make_credential_response: ";
  base::StringAppendF(&output, "%s",
                      GetProtoDebugStringWithIndent(
                          value.make_credential_response(), indent_size + 2)
                          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const FidoGetAssertionRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const FidoGetAssertionRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  get_assertion_options: ";
  base::StringAppendF(&output, "%s",
                      GetProtoDebugStringWithIndent(
                          value.get_assertion_options(), indent_size + 2)
                          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const FidoGetAssertionReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const FidoGetAssertionReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  get_assertion_response: ";
  base::StringAppendF(&output, "%s",
                      GetProtoDebugStringWithIndent(
                          value.get_assertion_response(), indent_size + 2)
                          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const AddAuthFactorRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const AddAuthFactorRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  auth_session_id: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.auth_session_id().data(),
                                      value.auth_session_id().size())
                          .c_str());
  output += "\n";

  output += indent + "  auth_factor: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.auth_factor(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "  auth_input: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.auth_input(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const AddAuthFactorReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const AddAuthFactorReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  error_info: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error_info(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const AuthenticateAuthFactorRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const AuthenticateAuthFactorRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  auth_session_id: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.auth_session_id().data(),
                                      value.auth_session_id().size())
                          .c_str());
  output += "\n";

  output += indent + "  auth_factor_label: ";
  base::StringAppendF(&output, "%s", value.auth_factor_label().c_str());
  output += "\n";

  output += indent + "  auth_input: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.auth_input(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const AuthenticateAuthFactorReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const AuthenticateAuthFactorReply& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  error_info: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error_info(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "  authenticated: ";
  base::StringAppendF(&output, "%s", value.authenticated() ? "true" : "false");
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const UpdateAuthFactorRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const UpdateAuthFactorRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  auth_session_id: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.auth_session_id().data(),
                                      value.auth_session_id().size())
                          .c_str());
  output += "\n";

  output += indent + "  old_auth_factor_label: ";
  base::StringAppendF(&output, "%s", value.old_auth_factor_label().c_str());
  output += "\n";

  output += indent + "  auth_factor: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.auth_factor(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "  auth_input: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.auth_input(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const UpdateAuthFactorReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const UpdateAuthFactorReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const RemoveAuthFactorRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const RemoveAuthFactorRequest& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  auth_session_id: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.auth_session_id().data(),
                                      value.auth_session_id().size())
                          .c_str());
  output += "\n";

  output += indent + "  auth_factor_label: ";
  base::StringAppendF(&output, "%s", value.auth_factor_label().c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const RemoveAuthFactorReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const RemoveAuthFactorReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetRecoveryRequestRequest& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(
    const GetRecoveryRequestRequest& value,
    int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  auth_session_id: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.auth_session_id().data(),
                                      value.auth_session_id().size())
                          .c_str());
  output += "\n";

  output += indent + "  auth_factor_label: ";
  base::StringAppendF(&output, "%s", value.auth_factor_label().c_str());
  output += "\n";

  output += indent + "  requestor_user_id_type: ";
  base::StringAppendF(&output, "%s",
                      GetProtoDebugStringWithIndent(
                          value.requestor_user_id_type(), indent_size + 2)
                          .c_str());
  output += "\n";

  output += indent + "  requestor_user_id: ";
  base::StringAppendF(&output, "%s", value.requestor_user_id().c_str());
  output += "\n";

  output += indent + "  gaia_access_token: ";
  base::StringAppendF(&output, "%s", value.gaia_access_token().c_str());
  output += "\n";

  output += indent + "  gaia_reauth_proof_token: ";
  base::StringAppendF(&output, "%s", value.gaia_reauth_proof_token().c_str());
  output += "\n";

  output += indent + "  epoch_response: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.epoch_response().data(),
                                      value.epoch_response().size())
                          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const GetRecoveryRequestReply& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const GetRecoveryRequestReply& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  error: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error(), indent_size + 2).c_str());
  output += "\n";

  output += indent + "  error_info: ";
  base::StringAppendF(
      &output, "%s",
      GetProtoDebugStringWithIndent(value.error_info(), indent_size + 2)
          .c_str());
  output += "\n";

  output += indent + "  recovery_request: ";
  base::StringAppendF(&output, "%s",
                      base::HexEncode(value.recovery_request().data(),
                                      value.recovery_request().size())
                          .c_str());
  output += "\n";

  output += indent + "}\n";
  return output;
}

}  // namespace user_data_auth
