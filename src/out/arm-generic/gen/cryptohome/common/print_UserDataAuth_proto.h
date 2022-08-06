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

#ifndef CRYPTOHOME_COMMON_PRINT_USERDATAAUTH_PROTO_H_
#define CRYPTOHOME_COMMON_PRINT_USERDATAAUTH_PROTO_H_

#include <string>

#include <brillo/brillo_export.h>

#include "cryptohome/proto_bindings/UserDataAuth.pb.h"

namespace user_data_auth {

std::string GetProtoDebugStringWithIndent(CryptohomeErrorCode value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(CryptohomeErrorCode value);
std::string GetProtoDebugStringWithIndent(PrimaryAction value, int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(PrimaryAction value);
std::string GetProtoDebugStringWithIndent(PossibleAction value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(PossibleAction value);
std::string GetProtoDebugStringWithIndent(DircryptoMigrationStatus value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(DircryptoMigrationStatus value);
std::string GetProtoDebugStringWithIndent(AuthSessionFlags value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(AuthSessionFlags value);
std::string GetProtoDebugStringWithIndent(AuthSessionStatus value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(AuthSessionStatus value);
std::string GetProtoDebugStringWithIndent(VaultEncryptionType value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(VaultEncryptionType value);
std::string GetProtoDebugStringWithIndent(InstallAttributesState value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(InstallAttributesState value);
std::string GetProtoDebugStringWithIndent(
    GetRecoveryRequestRequest_UserType value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    GetRecoveryRequestRequest_UserType value);
std::string GetProtoDebugStringWithIndent(const CreateRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const CreateRequest& value);
std::string GetProtoDebugStringWithIndent(const CryptohomeErrorInfo& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const CryptohomeErrorInfo& value);
std::string GetProtoDebugStringWithIndent(const IsMountedRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const IsMountedRequest& value);
std::string GetProtoDebugStringWithIndent(const IsMountedReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const IsMountedReply& value);
std::string GetProtoDebugStringWithIndent(const UnmountRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const UnmountRequest& value);
std::string GetProtoDebugStringWithIndent(const UnmountReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const UnmountReply& value);
std::string GetProtoDebugStringWithIndent(const MountRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const MountRequest& value);
std::string GetProtoDebugStringWithIndent(const MountReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const MountReply& value);
std::string GetProtoDebugStringWithIndent(const RemoveRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const RemoveRequest& value);
std::string GetProtoDebugStringWithIndent(const RemoveReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const RemoveReply& value);
std::string GetProtoDebugStringWithIndent(const ListKeysRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const ListKeysRequest& value);
std::string GetProtoDebugStringWithIndent(const ListKeysReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const ListKeysReply& value);
std::string GetProtoDebugStringWithIndent(const GetKeyDataRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const GetKeyDataRequest& value);
std::string GetProtoDebugStringWithIndent(const GetKeyDataReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const GetKeyDataReply& value);
std::string GetProtoDebugStringWithIndent(const CheckKeyRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const CheckKeyRequest& value);
std::string GetProtoDebugStringWithIndent(const CheckKeyReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const CheckKeyReply& value);
std::string GetProtoDebugStringWithIndent(const AddKeyRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const AddKeyRequest& value);
std::string GetProtoDebugStringWithIndent(const AddKeyReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const AddKeyReply& value);
std::string GetProtoDebugStringWithIndent(const RemoveKeyRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const RemoveKeyRequest& value);
std::string GetProtoDebugStringWithIndent(const RemoveKeyReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const RemoveKeyReply& value);
std::string GetProtoDebugStringWithIndent(const MassRemoveKeysRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const MassRemoveKeysRequest& value);
std::string GetProtoDebugStringWithIndent(const MassRemoveKeysReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const MassRemoveKeysReply& value);
std::string GetProtoDebugStringWithIndent(const MigrateKeyRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const MigrateKeyRequest& value);
std::string GetProtoDebugStringWithIndent(const MigrateKeyReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const MigrateKeyReply& value);
std::string GetProtoDebugStringWithIndent(
    const StartFingerprintAuthSessionRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const StartFingerprintAuthSessionRequest& value);
std::string GetProtoDebugStringWithIndent(
    const StartFingerprintAuthSessionReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const StartFingerprintAuthSessionReply& value);
std::string GetProtoDebugStringWithIndent(
    const EndFingerprintAuthSessionRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const EndFingerprintAuthSessionRequest& value);
std::string GetProtoDebugStringWithIndent(
    const EndFingerprintAuthSessionReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const EndFingerprintAuthSessionReply& value);
std::string GetProtoDebugStringWithIndent(const GetWebAuthnSecretRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetWebAuthnSecretRequest& value);
std::string GetProtoDebugStringWithIndent(const GetWebAuthnSecretReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetWebAuthnSecretReply& value);
std::string GetProtoDebugStringWithIndent(
    const GetWebAuthnSecretHashRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetWebAuthnSecretHashRequest& value);
std::string GetProtoDebugStringWithIndent(
    const GetWebAuthnSecretHashReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetWebAuthnSecretHashReply& value);
std::string GetProtoDebugStringWithIndent(
    const GetHibernateSecretRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetHibernateSecretRequest& value);
std::string GetProtoDebugStringWithIndent(const GetHibernateSecretReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetHibernateSecretReply& value);
std::string GetProtoDebugStringWithIndent(
    const StartMigrateToDircryptoRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const StartMigrateToDircryptoRequest& value);
std::string GetProtoDebugStringWithIndent(
    const StartMigrateToDircryptoReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const StartMigrateToDircryptoReply& value);
std::string GetProtoDebugStringWithIndent(
    const DircryptoMigrationProgress& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const DircryptoMigrationProgress& value);
std::string GetProtoDebugStringWithIndent(
    const NeedsDircryptoMigrationRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const NeedsDircryptoMigrationRequest& value);
std::string GetProtoDebugStringWithIndent(
    const NeedsDircryptoMigrationReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const NeedsDircryptoMigrationReply& value);
std::string GetProtoDebugStringWithIndent(
    const GetSupportedKeyPoliciesRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetSupportedKeyPoliciesRequest& value);
std::string GetProtoDebugStringWithIndent(
    const GetSupportedKeyPoliciesReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetSupportedKeyPoliciesReply& value);
std::string GetProtoDebugStringWithIndent(
    const GetAccountDiskUsageRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetAccountDiskUsageRequest& value);
std::string GetProtoDebugStringWithIndent(const GetAccountDiskUsageReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetAccountDiskUsageReply& value);
std::string GetProtoDebugStringWithIndent(const LowDiskSpace& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const LowDiskSpace& value);
std::string GetProtoDebugStringWithIndent(const StartAuthSessionRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const StartAuthSessionRequest& value);
std::string GetProtoDebugStringWithIndent(const StartAuthSessionReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const StartAuthSessionReply& value);
std::string GetProtoDebugStringWithIndent(const AddCredentialsRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const AddCredentialsRequest& value);
std::string GetProtoDebugStringWithIndent(const AddCredentialsReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const AddCredentialsReply& value);
std::string GetProtoDebugStringWithIndent(
    const AuthenticateAuthSessionRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const AuthenticateAuthSessionRequest& value);
std::string GetProtoDebugStringWithIndent(
    const AuthenticateAuthSessionReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const AuthenticateAuthSessionReply& value);
std::string GetProtoDebugStringWithIndent(
    const InvalidateAuthSessionRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const InvalidateAuthSessionRequest& value);
std::string GetProtoDebugStringWithIndent(
    const InvalidateAuthSessionReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const InvalidateAuthSessionReply& value);
std::string GetProtoDebugStringWithIndent(const ExtendAuthSessionRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const ExtendAuthSessionRequest& value);
std::string GetProtoDebugStringWithIndent(const ExtendAuthSessionReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const ExtendAuthSessionReply& value);
std::string GetProtoDebugStringWithIndent(const UpdateCredentialRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const UpdateCredentialRequest& value);
std::string GetProtoDebugStringWithIndent(const UpdateCredentialReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const UpdateCredentialReply& value);
std::string GetProtoDebugStringWithIndent(
    const CreatePersistentUserRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const CreatePersistentUserRequest& value);
std::string GetProtoDebugStringWithIndent(
    const CreatePersistentUserReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const CreatePersistentUserReply& value);
std::string GetProtoDebugStringWithIndent(const PrepareGuestVaultRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const PrepareGuestVaultRequest& value);
std::string GetProtoDebugStringWithIndent(const PrepareGuestVaultReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const PrepareGuestVaultReply& value);
std::string GetProtoDebugStringWithIndent(
    const PrepareEphemeralVaultRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const PrepareEphemeralVaultRequest& value);
std::string GetProtoDebugStringWithIndent(
    const PrepareEphemeralVaultReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const PrepareEphemeralVaultReply& value);
std::string GetProtoDebugStringWithIndent(
    const GetAuthSessionStatusRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetAuthSessionStatusRequest& value);
std::string GetProtoDebugStringWithIndent(
    const GetAuthSessionStatusReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetAuthSessionStatusReply& value);
std::string GetProtoDebugStringWithIndent(
    const PreparePersistentVaultRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const PreparePersistentVaultRequest& value);
std::string GetProtoDebugStringWithIndent(
    const PreparePersistentVaultReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const PreparePersistentVaultReply& value);
std::string GetProtoDebugStringWithIndent(
    const PrepareVaultForMigrationRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const PrepareVaultForMigrationRequest& value);
std::string GetProtoDebugStringWithIndent(
    const PrepareVaultForMigrationReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const PrepareVaultForMigrationReply& value);
std::string GetProtoDebugStringWithIndent(
    const GetArcDiskFeaturesRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetArcDiskFeaturesRequest& value);
std::string GetProtoDebugStringWithIndent(const GetArcDiskFeaturesReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetArcDiskFeaturesReply& value);
std::string GetProtoDebugStringWithIndent(
    const GetCurrentSpaceForArcUidRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetCurrentSpaceForArcUidRequest& value);
std::string GetProtoDebugStringWithIndent(
    const GetCurrentSpaceForArcUidReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetCurrentSpaceForArcUidReply& value);
std::string GetProtoDebugStringWithIndent(
    const GetCurrentSpaceForArcGidRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetCurrentSpaceForArcGidRequest& value);
std::string GetProtoDebugStringWithIndent(
    const GetCurrentSpaceForArcGidReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetCurrentSpaceForArcGidReply& value);
std::string GetProtoDebugStringWithIndent(
    const GetCurrentSpaceForArcProjectIdRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetCurrentSpaceForArcProjectIdRequest& value);
std::string GetProtoDebugStringWithIndent(
    const GetCurrentSpaceForArcProjectIdReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetCurrentSpaceForArcProjectIdReply& value);
std::string GetProtoDebugStringWithIndent(
    const SetMediaRWDataFileProjectIdRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const SetMediaRWDataFileProjectIdRequest& value);
std::string GetProtoDebugStringWithIndent(
    const SetMediaRWDataFileProjectIdReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const SetMediaRWDataFileProjectIdReply& value);
std::string GetProtoDebugStringWithIndent(
    const SetMediaRWDataFileProjectInheritanceFlagRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const SetMediaRWDataFileProjectInheritanceFlagRequest& value);
std::string GetProtoDebugStringWithIndent(
    const SetMediaRWDataFileProjectInheritanceFlagReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const SetMediaRWDataFileProjectInheritanceFlagReply& value);
std::string GetProtoDebugStringWithIndent(const TpmTokenInfo& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const TpmTokenInfo& value);
std::string GetProtoDebugStringWithIndent(
    const Pkcs11IsTpmTokenReadyRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const Pkcs11IsTpmTokenReadyRequest& value);
std::string GetProtoDebugStringWithIndent(
    const Pkcs11IsTpmTokenReadyReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const Pkcs11IsTpmTokenReadyReply& value);
std::string GetProtoDebugStringWithIndent(
    const Pkcs11GetTpmTokenInfoRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const Pkcs11GetTpmTokenInfoRequest& value);
std::string GetProtoDebugStringWithIndent(
    const Pkcs11GetTpmTokenInfoReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const Pkcs11GetTpmTokenInfoReply& value);
std::string GetProtoDebugStringWithIndent(const Pkcs11TerminateRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const Pkcs11TerminateRequest& value);
std::string GetProtoDebugStringWithIndent(const Pkcs11TerminateReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const Pkcs11TerminateReply& value);
std::string GetProtoDebugStringWithIndent(
    const Pkcs11RestoreTpmTokensRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const Pkcs11RestoreTpmTokensRequest& value);
std::string GetProtoDebugStringWithIndent(
    const Pkcs11RestoreTpmTokensReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const Pkcs11RestoreTpmTokensReply& value);
std::string GetProtoDebugStringWithIndent(
    const InstallAttributesGetRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const InstallAttributesGetRequest& value);
std::string GetProtoDebugStringWithIndent(
    const InstallAttributesGetReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const InstallAttributesGetReply& value);
std::string GetProtoDebugStringWithIndent(
    const InstallAttributesSetRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const InstallAttributesSetRequest& value);
std::string GetProtoDebugStringWithIndent(
    const InstallAttributesSetReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const InstallAttributesSetReply& value);
std::string GetProtoDebugStringWithIndent(
    const InstallAttributesFinalizeRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const InstallAttributesFinalizeRequest& value);
std::string GetProtoDebugStringWithIndent(
    const InstallAttributesFinalizeReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const InstallAttributesFinalizeReply& value);
std::string GetProtoDebugStringWithIndent(
    const InstallAttributesGetStatusRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const InstallAttributesGetStatusRequest& value);
std::string GetProtoDebugStringWithIndent(
    const InstallAttributesGetStatusReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const InstallAttributesGetStatusReply& value);
std::string GetProtoDebugStringWithIndent(
    const FirmwareManagementParameters& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const FirmwareManagementParameters& value);
std::string GetProtoDebugStringWithIndent(
    const GetFirmwareManagementParametersRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetFirmwareManagementParametersRequest& value);
std::string GetProtoDebugStringWithIndent(
    const GetFirmwareManagementParametersReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetFirmwareManagementParametersReply& value);
std::string GetProtoDebugStringWithIndent(
    const RemoveFirmwareManagementParametersRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const RemoveFirmwareManagementParametersRequest& value);
std::string GetProtoDebugStringWithIndent(
    const RemoveFirmwareManagementParametersReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const RemoveFirmwareManagementParametersReply& value);
std::string GetProtoDebugStringWithIndent(
    const SetFirmwareManagementParametersRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const SetFirmwareManagementParametersRequest& value);
std::string GetProtoDebugStringWithIndent(
    const SetFirmwareManagementParametersReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const SetFirmwareManagementParametersReply& value);
std::string GetProtoDebugStringWithIndent(const GetSystemSaltRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetSystemSaltRequest& value);
std::string GetProtoDebugStringWithIndent(const GetSystemSaltReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const GetSystemSaltReply& value);
std::string GetProtoDebugStringWithIndent(
    const UpdateCurrentUserActivityTimestampRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const UpdateCurrentUserActivityTimestampRequest& value);
std::string GetProtoDebugStringWithIndent(
    const UpdateCurrentUserActivityTimestampReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const UpdateCurrentUserActivityTimestampReply& value);
std::string GetProtoDebugStringWithIndent(
    const GetSanitizedUsernameRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetSanitizedUsernameRequest& value);
std::string GetProtoDebugStringWithIndent(
    const GetSanitizedUsernameReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetSanitizedUsernameReply& value);
std::string GetProtoDebugStringWithIndent(const GetLoginStatusRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetLoginStatusRequest& value);
std::string GetProtoDebugStringWithIndent(const GetLoginStatusReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const GetLoginStatusReply& value);
std::string GetProtoDebugStringWithIndent(const GetStatusStringRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetStatusStringRequest& value);
std::string GetProtoDebugStringWithIndent(const GetStatusStringReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetStatusStringReply& value);
std::string GetProtoDebugStringWithIndent(
    const LockToSingleUserMountUntilRebootRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const LockToSingleUserMountUntilRebootRequest& value);
std::string GetProtoDebugStringWithIndent(
    const LockToSingleUserMountUntilRebootReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const LockToSingleUserMountUntilRebootReply& value);
std::string GetProtoDebugStringWithIndent(const GetRsuDeviceIdReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const GetRsuDeviceIdReply& value);
std::string GetProtoDebugStringWithIndent(const GetRsuDeviceIdRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetRsuDeviceIdRequest& value);
std::string GetProtoDebugStringWithIndent(const CheckHealthRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const CheckHealthRequest& value);
std::string GetProtoDebugStringWithIndent(const CheckHealthReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const CheckHealthReply& value);
std::string GetProtoDebugStringWithIndent(
    const FidoMakeCredentialRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const FidoMakeCredentialRequest& value);
std::string GetProtoDebugStringWithIndent(const FidoMakeCredentialReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const FidoMakeCredentialReply& value);
std::string GetProtoDebugStringWithIndent(const FidoGetAssertionRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const FidoGetAssertionRequest& value);
std::string GetProtoDebugStringWithIndent(const FidoGetAssertionReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const FidoGetAssertionReply& value);
std::string GetProtoDebugStringWithIndent(const AddAuthFactorRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const AddAuthFactorRequest& value);
std::string GetProtoDebugStringWithIndent(const AddAuthFactorReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(const AddAuthFactorReply& value);
std::string GetProtoDebugStringWithIndent(
    const AuthenticateAuthFactorRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const AuthenticateAuthFactorRequest& value);
std::string GetProtoDebugStringWithIndent(
    const AuthenticateAuthFactorReply& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const AuthenticateAuthFactorReply& value);
std::string GetProtoDebugStringWithIndent(const UpdateAuthFactorRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const UpdateAuthFactorRequest& value);
std::string GetProtoDebugStringWithIndent(const UpdateAuthFactorReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const UpdateAuthFactorReply& value);
std::string GetProtoDebugStringWithIndent(const RemoveAuthFactorRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const RemoveAuthFactorRequest& value);
std::string GetProtoDebugStringWithIndent(const RemoveAuthFactorReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const RemoveAuthFactorReply& value);
std::string GetProtoDebugStringWithIndent(const ListAuthFactorsRequest& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const ListAuthFactorsRequest& value);
std::string GetProtoDebugStringWithIndent(const ListAuthFactorsReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const ListAuthFactorsReply& value);
std::string GetProtoDebugStringWithIndent(
    const GetRecoveryRequestRequest& value,
    int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetRecoveryRequestRequest& value);
std::string GetProtoDebugStringWithIndent(const GetRecoveryRequestReply& value,
                                          int indent_size);
BRILLO_EXPORT std::string GetProtoDebugString(
    const GetRecoveryRequestReply& value);

}  // namespace user_data_auth

#endif  // CRYPTOHOME_COMMON_PRINT_USERDATAAUTH_PROTO_H_
