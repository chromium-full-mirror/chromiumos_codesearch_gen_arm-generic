// Automatic generation of D-Bus interface mock proxies for:
//  - org.chromium.UserDataAuthInterface
//  - org.chromium.ArcQuota
//  - org.chromium.CryptohomePkcs11Interface
//  - org.chromium.InstallAttributesInterface
//  - org.chromium.CryptohomeMiscInterface
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CRYPTOHOME_CLIENT_OUT_DEFAULT_GEN_INCLUDE_USER_DATA_AUTH_DBUS_PROXY_MOCKS_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CRYPTOHOME_CLIENT_OUT_DEFAULT_GEN_INCLUDE_USER_DATA_AUTH_DBUS_PROXY_MOCKS_H
#include <string>
#include <vector>

#include <base/callback_forward.h>
#include <base/logging.h>
#include <brillo/any.h>
#include <brillo/errors/error.h>
#include <brillo/variant_dictionary.h>
#include <gmock/gmock.h>

#include "user_data_auth/dbus-proxies.h"

namespace org {
namespace chromium {

// Mock object for UserDataAuthInterfaceProxyInterface.
class UserDataAuthInterfaceProxyMock : public UserDataAuthInterfaceProxyInterface {
 public:
  UserDataAuthInterfaceProxyMock() = default;
  UserDataAuthInterfaceProxyMock(const UserDataAuthInterfaceProxyMock&) = delete;
  UserDataAuthInterfaceProxyMock& operator=(const UserDataAuthInterfaceProxyMock&) = delete;

  MOCK_METHOD4(IsMounted,
               bool(const user_data_auth::IsMountedRequest& /*in_request*/,
                    user_data_auth::IsMountedReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(IsMountedAsync,
               void(const user_data_auth::IsMountedRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::IsMountedReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(Unmount,
               bool(const user_data_auth::UnmountRequest& /*in_request*/,
                    user_data_auth::UnmountReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(UnmountAsync,
               void(const user_data_auth::UnmountRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::UnmountReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(Mount,
               bool(const user_data_auth::MountRequest& /*in_request*/,
                    user_data_auth::MountReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(MountAsync,
               void(const user_data_auth::MountRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::MountReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(Remove,
               bool(const user_data_auth::RemoveRequest& /*in_request*/,
                    user_data_auth::RemoveReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RemoveAsync,
               void(const user_data_auth::RemoveRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::RemoveReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ListKeys,
               bool(const user_data_auth::ListKeysRequest& /*in_request*/,
                    user_data_auth::ListKeysReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ListKeysAsync,
               void(const user_data_auth::ListKeysRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::ListKeysReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetKeyData,
               bool(const user_data_auth::GetKeyDataRequest& /*in_request*/,
                    user_data_auth::GetKeyDataReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetKeyDataAsync,
               void(const user_data_auth::GetKeyDataRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::GetKeyDataReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(CheckKey,
               bool(const user_data_auth::CheckKeyRequest& /*in_request*/,
                    user_data_auth::CheckKeyReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(CheckKeyAsync,
               void(const user_data_auth::CheckKeyRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::CheckKeyReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(AddKey,
               bool(const user_data_auth::AddKeyRequest& /*in_request*/,
                    user_data_auth::AddKeyReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(AddKeyAsync,
               void(const user_data_auth::AddKeyRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::AddKeyReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RemoveKey,
               bool(const user_data_auth::RemoveKeyRequest& /*in_request*/,
                    user_data_auth::RemoveKeyReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RemoveKeyAsync,
               void(const user_data_auth::RemoveKeyRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::RemoveKeyReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(MassRemoveKeys,
               bool(const user_data_auth::MassRemoveKeysRequest& /*in_request*/,
                    user_data_auth::MassRemoveKeysReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(MassRemoveKeysAsync,
               void(const user_data_auth::MassRemoveKeysRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::MassRemoveKeysReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(MigrateKey,
               bool(const user_data_auth::MigrateKeyRequest& /*in_request*/,
                    user_data_auth::MigrateKeyReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(MigrateKeyAsync,
               void(const user_data_auth::MigrateKeyRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::MigrateKeyReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(StartFingerprintAuthSession,
               bool(const user_data_auth::StartFingerprintAuthSessionRequest& /*in_request*/,
                    user_data_auth::StartFingerprintAuthSessionReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(StartFingerprintAuthSessionAsync,
               void(const user_data_auth::StartFingerprintAuthSessionRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::StartFingerprintAuthSessionReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(EndFingerprintAuthSession,
               bool(const user_data_auth::EndFingerprintAuthSessionRequest& /*in_request*/,
                    user_data_auth::EndFingerprintAuthSessionReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(EndFingerprintAuthSessionAsync,
               void(const user_data_auth::EndFingerprintAuthSessionRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::EndFingerprintAuthSessionReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetWebAuthnSecret,
               bool(const user_data_auth::GetWebAuthnSecretRequest& /*in_request*/,
                    user_data_auth::GetWebAuthnSecretReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetWebAuthnSecretAsync,
               void(const user_data_auth::GetWebAuthnSecretRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::GetWebAuthnSecretReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetWebAuthnSecretHash,
               bool(const user_data_auth::GetWebAuthnSecretHashRequest& /*in_request*/,
                    user_data_auth::GetWebAuthnSecretHashReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetWebAuthnSecretHashAsync,
               void(const user_data_auth::GetWebAuthnSecretHashRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::GetWebAuthnSecretHashReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetHibernateSecret,
               bool(const user_data_auth::GetHibernateSecretRequest& /*in_request*/,
                    user_data_auth::GetHibernateSecretReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetHibernateSecretAsync,
               void(const user_data_auth::GetHibernateSecretRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::GetHibernateSecretReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(StartMigrateToDircrypto,
               bool(const user_data_auth::StartMigrateToDircryptoRequest& /*in_request*/,
                    user_data_auth::StartMigrateToDircryptoReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(StartMigrateToDircryptoAsync,
               void(const user_data_auth::StartMigrateToDircryptoRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::StartMigrateToDircryptoReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(NeedsDircryptoMigration,
               bool(const user_data_auth::NeedsDircryptoMigrationRequest& /*in_request*/,
                    user_data_auth::NeedsDircryptoMigrationReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(NeedsDircryptoMigrationAsync,
               void(const user_data_auth::NeedsDircryptoMigrationRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::NeedsDircryptoMigrationReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetSupportedKeyPolicies,
               bool(const user_data_auth::GetSupportedKeyPoliciesRequest& /*in_request*/,
                    user_data_auth::GetSupportedKeyPoliciesReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetSupportedKeyPoliciesAsync,
               void(const user_data_auth::GetSupportedKeyPoliciesRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::GetSupportedKeyPoliciesReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetAccountDiskUsage,
               bool(const user_data_auth::GetAccountDiskUsageRequest& /*in_request*/,
                    user_data_auth::GetAccountDiskUsageReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetAccountDiskUsageAsync,
               void(const user_data_auth::GetAccountDiskUsageRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::GetAccountDiskUsageReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(StartAuthSession,
               bool(const user_data_auth::StartAuthSessionRequest& /*in_request*/,
                    user_data_auth::StartAuthSessionReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(StartAuthSessionAsync,
               void(const user_data_auth::StartAuthSessionRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::StartAuthSessionReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(AddCredentials,
               bool(const user_data_auth::AddCredentialsRequest& /*in_request*/,
                    user_data_auth::AddCredentialsReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(AddCredentialsAsync,
               void(const user_data_auth::AddCredentialsRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::AddCredentialsReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(UpdateCredential,
               bool(const user_data_auth::UpdateCredentialRequest& /*in_request*/,
                    user_data_auth::UpdateCredentialReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(UpdateCredentialAsync,
               void(const user_data_auth::UpdateCredentialRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::UpdateCredentialReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(AuthenticateAuthSession,
               bool(const user_data_auth::AuthenticateAuthSessionRequest& /*in_request*/,
                    user_data_auth::AuthenticateAuthSessionReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(AuthenticateAuthSessionAsync,
               void(const user_data_auth::AuthenticateAuthSessionRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::AuthenticateAuthSessionReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(InvalidateAuthSession,
               bool(const user_data_auth::InvalidateAuthSessionRequest& /*in_request*/,
                    user_data_auth::InvalidateAuthSessionReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(InvalidateAuthSessionAsync,
               void(const user_data_auth::InvalidateAuthSessionRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::InvalidateAuthSessionReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ExtendAuthSession,
               bool(const user_data_auth::ExtendAuthSessionRequest& /*in_request*/,
                    user_data_auth::ExtendAuthSessionReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ExtendAuthSessionAsync,
               void(const user_data_auth::ExtendAuthSessionRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::ExtendAuthSessionReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetAuthSessionStatus,
               bool(const user_data_auth::GetAuthSessionStatusRequest& /*in_request*/,
                    user_data_auth::GetAuthSessionStatusReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetAuthSessionStatusAsync,
               void(const user_data_auth::GetAuthSessionStatusRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::GetAuthSessionStatusReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(CreatePersistentUser,
               bool(const user_data_auth::CreatePersistentUserRequest& /*in_request*/,
                    user_data_auth::CreatePersistentUserReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(CreatePersistentUserAsync,
               void(const user_data_auth::CreatePersistentUserRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::CreatePersistentUserReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(AuthenticateAuthFactor,
               bool(const user_data_auth::AuthenticateAuthFactorRequest& /*in_request*/,
                    user_data_auth::AuthenticateAuthFactorReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(AuthenticateAuthFactorAsync,
               void(const user_data_auth::AuthenticateAuthFactorRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::AuthenticateAuthFactorReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(PrepareGuestVault,
               bool(const user_data_auth::PrepareGuestVaultRequest& /*in_request*/,
                    user_data_auth::PrepareGuestVaultReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(PrepareGuestVaultAsync,
               void(const user_data_auth::PrepareGuestVaultRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::PrepareGuestVaultReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(PrepareEphemeralVault,
               bool(const user_data_auth::PrepareEphemeralVaultRequest& /*in_request*/,
                    user_data_auth::PrepareEphemeralVaultReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(PrepareEphemeralVaultAsync,
               void(const user_data_auth::PrepareEphemeralVaultRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::PrepareEphemeralVaultReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(PreparePersistentVault,
               bool(const user_data_auth::PreparePersistentVaultRequest& /*in_request*/,
                    user_data_auth::PreparePersistentVaultReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(PreparePersistentVaultAsync,
               void(const user_data_auth::PreparePersistentVaultRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::PreparePersistentVaultReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(PrepareVaultForMigration,
               bool(const user_data_auth::PrepareVaultForMigrationRequest& /*in_request*/,
                    user_data_auth::PrepareVaultForMigrationReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(PrepareVaultForMigrationAsync,
               void(const user_data_auth::PrepareVaultForMigrationRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::PrepareVaultForMigrationReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(AddAuthFactor,
               bool(const user_data_auth::AddAuthFactorRequest& /*in_request*/,
                    user_data_auth::AddAuthFactorReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(AddAuthFactorAsync,
               void(const user_data_auth::AddAuthFactorRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::AddAuthFactorReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(UpdateAuthFactor,
               bool(const user_data_auth::UpdateAuthFactorRequest& /*in_request*/,
                    user_data_auth::UpdateAuthFactorReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(UpdateAuthFactorAsync,
               void(const user_data_auth::UpdateAuthFactorRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::UpdateAuthFactorReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RemoveAuthFactor,
               bool(const user_data_auth::RemoveAuthFactorRequest& /*in_request*/,
                    user_data_auth::RemoveAuthFactorReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RemoveAuthFactorAsync,
               void(const user_data_auth::RemoveAuthFactorRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::RemoveAuthFactorReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetRecoveryRequest,
               bool(const user_data_auth::GetRecoveryRequestRequest& /*in_request*/,
                    user_data_auth::GetRecoveryRequestReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetRecoveryRequestAsync,
               void(const user_data_auth::GetRecoveryRequestRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::GetRecoveryRequestReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  void RegisterDircryptoMigrationProgressSignalHandler(
    const base::RepeatingCallback<void(const user_data_auth::DircryptoMigrationProgress&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterDircryptoMigrationProgressSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterDircryptoMigrationProgressSignalHandler,
               void(const base::RepeatingCallback<void(const user_data_auth::DircryptoMigrationProgress&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterLowDiskSpaceSignalHandler(
    const base::RepeatingCallback<void(const user_data_auth::LowDiskSpace&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterLowDiskSpaceSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterLowDiskSpaceSignalHandler,
               void(const base::RepeatingCallback<void(const user_data_auth::LowDiskSpace&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Mock object for ArcQuotaProxyInterface.
class ArcQuotaProxyMock : public ArcQuotaProxyInterface {
 public:
  ArcQuotaProxyMock() = default;
  ArcQuotaProxyMock(const ArcQuotaProxyMock&) = delete;
  ArcQuotaProxyMock& operator=(const ArcQuotaProxyMock&) = delete;

  MOCK_METHOD4(GetArcDiskFeatures,
               bool(const user_data_auth::GetArcDiskFeaturesRequest& /*in_request*/,
                    user_data_auth::GetArcDiskFeaturesReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetArcDiskFeaturesAsync,
               void(const user_data_auth::GetArcDiskFeaturesRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::GetArcDiskFeaturesReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetCurrentSpaceForArcUid,
               bool(const user_data_auth::GetCurrentSpaceForArcUidRequest& /*in_request*/,
                    user_data_auth::GetCurrentSpaceForArcUidReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetCurrentSpaceForArcUidAsync,
               void(const user_data_auth::GetCurrentSpaceForArcUidRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::GetCurrentSpaceForArcUidReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetCurrentSpaceForArcGid,
               bool(const user_data_auth::GetCurrentSpaceForArcGidRequest& /*in_request*/,
                    user_data_auth::GetCurrentSpaceForArcGidReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetCurrentSpaceForArcGidAsync,
               void(const user_data_auth::GetCurrentSpaceForArcGidRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::GetCurrentSpaceForArcGidReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetCurrentSpaceForArcProjectId,
               bool(const user_data_auth::GetCurrentSpaceForArcProjectIdRequest& /*in_request*/,
                    user_data_auth::GetCurrentSpaceForArcProjectIdReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetCurrentSpaceForArcProjectIdAsync,
               void(const user_data_auth::GetCurrentSpaceForArcProjectIdRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::GetCurrentSpaceForArcProjectIdReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SetMediaRWDataFileProjectId,
               bool(const brillo::dbus_utils::FileDescriptor& /*in_fd*/,
                    const user_data_auth::SetMediaRWDataFileProjectIdRequest& /*in_request*/,
                    user_data_auth::SetMediaRWDataFileProjectIdReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SetMediaRWDataFileProjectIdAsync,
               void(const brillo::dbus_utils::FileDescriptor& /*in_fd*/,
                    const user_data_auth::SetMediaRWDataFileProjectIdRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::SetMediaRWDataFileProjectIdReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SetMediaRWDataFileProjectInheritanceFlag,
               bool(const brillo::dbus_utils::FileDescriptor& /*in_fd*/,
                    const user_data_auth::SetMediaRWDataFileProjectInheritanceFlagRequest& /*in_request*/,
                    user_data_auth::SetMediaRWDataFileProjectInheritanceFlagReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SetMediaRWDataFileProjectInheritanceFlagAsync,
               void(const brillo::dbus_utils::FileDescriptor& /*in_fd*/,
                    const user_data_auth::SetMediaRWDataFileProjectInheritanceFlagRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::SetMediaRWDataFileProjectInheritanceFlagReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Mock object for CryptohomePkcs11InterfaceProxyInterface.
class CryptohomePkcs11InterfaceProxyMock : public CryptohomePkcs11InterfaceProxyInterface {
 public:
  CryptohomePkcs11InterfaceProxyMock() = default;
  CryptohomePkcs11InterfaceProxyMock(const CryptohomePkcs11InterfaceProxyMock&) = delete;
  CryptohomePkcs11InterfaceProxyMock& operator=(const CryptohomePkcs11InterfaceProxyMock&) = delete;

  MOCK_METHOD4(Pkcs11IsTpmTokenReady,
               bool(const user_data_auth::Pkcs11IsTpmTokenReadyRequest& /*in_request*/,
                    user_data_auth::Pkcs11IsTpmTokenReadyReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(Pkcs11IsTpmTokenReadyAsync,
               void(const user_data_auth::Pkcs11IsTpmTokenReadyRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::Pkcs11IsTpmTokenReadyReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(Pkcs11GetTpmTokenInfo,
               bool(const user_data_auth::Pkcs11GetTpmTokenInfoRequest& /*in_request*/,
                    user_data_auth::Pkcs11GetTpmTokenInfoReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(Pkcs11GetTpmTokenInfoAsync,
               void(const user_data_auth::Pkcs11GetTpmTokenInfoRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::Pkcs11GetTpmTokenInfoReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(Pkcs11Terminate,
               bool(const user_data_auth::Pkcs11TerminateRequest& /*in_request*/,
                    user_data_auth::Pkcs11TerminateReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(Pkcs11TerminateAsync,
               void(const user_data_auth::Pkcs11TerminateRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::Pkcs11TerminateReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(Pkcs11RestoreTpmTokens,
               bool(const user_data_auth::Pkcs11RestoreTpmTokensRequest& /*in_request*/,
                    user_data_auth::Pkcs11RestoreTpmTokensReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(Pkcs11RestoreTpmTokensAsync,
               void(const user_data_auth::Pkcs11RestoreTpmTokensRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::Pkcs11RestoreTpmTokensReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Mock object for InstallAttributesInterfaceProxyInterface.
class InstallAttributesInterfaceProxyMock : public InstallAttributesInterfaceProxyInterface {
 public:
  InstallAttributesInterfaceProxyMock() = default;
  InstallAttributesInterfaceProxyMock(const InstallAttributesInterfaceProxyMock&) = delete;
  InstallAttributesInterfaceProxyMock& operator=(const InstallAttributesInterfaceProxyMock&) = delete;

  MOCK_METHOD4(InstallAttributesGet,
               bool(const user_data_auth::InstallAttributesGetRequest& /*in_request*/,
                    user_data_auth::InstallAttributesGetReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(InstallAttributesGetAsync,
               void(const user_data_auth::InstallAttributesGetRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::InstallAttributesGetReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(InstallAttributesSet,
               bool(const user_data_auth::InstallAttributesSetRequest& /*in_request*/,
                    user_data_auth::InstallAttributesSetReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(InstallAttributesSetAsync,
               void(const user_data_auth::InstallAttributesSetRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::InstallAttributesSetReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(InstallAttributesFinalize,
               bool(const user_data_auth::InstallAttributesFinalizeRequest& /*in_request*/,
                    user_data_auth::InstallAttributesFinalizeReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(InstallAttributesFinalizeAsync,
               void(const user_data_auth::InstallAttributesFinalizeRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::InstallAttributesFinalizeReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(InstallAttributesGetStatus,
               bool(const user_data_auth::InstallAttributesGetStatusRequest& /*in_request*/,
                    user_data_auth::InstallAttributesGetStatusReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(InstallAttributesGetStatusAsync,
               void(const user_data_auth::InstallAttributesGetStatusRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::InstallAttributesGetStatusReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetFirmwareManagementParameters,
               bool(const user_data_auth::GetFirmwareManagementParametersRequest& /*in_request*/,
                    user_data_auth::GetFirmwareManagementParametersReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetFirmwareManagementParametersAsync,
               void(const user_data_auth::GetFirmwareManagementParametersRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::GetFirmwareManagementParametersReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RemoveFirmwareManagementParameters,
               bool(const user_data_auth::RemoveFirmwareManagementParametersRequest& /*in_request*/,
                    user_data_auth::RemoveFirmwareManagementParametersReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RemoveFirmwareManagementParametersAsync,
               void(const user_data_auth::RemoveFirmwareManagementParametersRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::RemoveFirmwareManagementParametersReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetFirmwareManagementParameters,
               bool(const user_data_auth::SetFirmwareManagementParametersRequest& /*in_request*/,
                    user_data_auth::SetFirmwareManagementParametersReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetFirmwareManagementParametersAsync,
               void(const user_data_auth::SetFirmwareManagementParametersRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::SetFirmwareManagementParametersReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Mock object for CryptohomeMiscInterfaceProxyInterface.
class CryptohomeMiscInterfaceProxyMock : public CryptohomeMiscInterfaceProxyInterface {
 public:
  CryptohomeMiscInterfaceProxyMock() = default;
  CryptohomeMiscInterfaceProxyMock(const CryptohomeMiscInterfaceProxyMock&) = delete;
  CryptohomeMiscInterfaceProxyMock& operator=(const CryptohomeMiscInterfaceProxyMock&) = delete;

  MOCK_METHOD4(GetSystemSalt,
               bool(const user_data_auth::GetSystemSaltRequest& /*in_request*/,
                    user_data_auth::GetSystemSaltReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetSystemSaltAsync,
               void(const user_data_auth::GetSystemSaltRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::GetSystemSaltReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(UpdateCurrentUserActivityTimestamp,
               bool(const user_data_auth::UpdateCurrentUserActivityTimestampRequest& /*in_request*/,
                    user_data_auth::UpdateCurrentUserActivityTimestampReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(UpdateCurrentUserActivityTimestampAsync,
               void(const user_data_auth::UpdateCurrentUserActivityTimestampRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::UpdateCurrentUserActivityTimestampReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetSanitizedUsername,
               bool(const user_data_auth::GetSanitizedUsernameRequest& /*in_request*/,
                    user_data_auth::GetSanitizedUsernameReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetSanitizedUsernameAsync,
               void(const user_data_auth::GetSanitizedUsernameRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::GetSanitizedUsernameReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetLoginStatus,
               bool(const user_data_auth::GetLoginStatusRequest& /*in_request*/,
                    user_data_auth::GetLoginStatusReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetLoginStatusAsync,
               void(const user_data_auth::GetLoginStatusRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::GetLoginStatusReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetStatusString,
               bool(const user_data_auth::GetStatusStringRequest& /*in_request*/,
                    user_data_auth::GetStatusStringReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetStatusStringAsync,
               void(const user_data_auth::GetStatusStringRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::GetStatusStringReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(LockToSingleUserMountUntilReboot,
               bool(const user_data_auth::LockToSingleUserMountUntilRebootRequest& /*in_request*/,
                    user_data_auth::LockToSingleUserMountUntilRebootReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(LockToSingleUserMountUntilRebootAsync,
               void(const user_data_auth::LockToSingleUserMountUntilRebootRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::LockToSingleUserMountUntilRebootReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetRsuDeviceId,
               bool(const user_data_auth::GetRsuDeviceIdRequest& /*in_request*/,
                    user_data_auth::GetRsuDeviceIdReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetRsuDeviceIdAsync,
               void(const user_data_auth::GetRsuDeviceIdRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::GetRsuDeviceIdReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(CheckHealth,
               bool(const user_data_auth::CheckHealthRequest& /*in_request*/,
                    user_data_auth::CheckHealthReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(CheckHealthAsync,
               void(const user_data_auth::CheckHealthRequest& /*in_request*/,
                    base::OnceCallback<void(const user_data_auth::CheckHealthReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CRYPTOHOME_CLIENT_OUT_DEFAULT_GEN_INCLUDE_USER_DATA_AUTH_DBUS_PROXY_MOCKS_H
