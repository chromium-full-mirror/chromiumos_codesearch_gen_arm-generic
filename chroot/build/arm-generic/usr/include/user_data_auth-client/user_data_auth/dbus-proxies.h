// Automatic generation of D-Bus interfaces:
//  - org.chromium.UserDataAuthInterface
//  - org.chromium.ArcQuota
//  - org.chromium.CryptohomePkcs11Interface
//  - org.chromium.InstallAttributesInterface
//  - org.chromium.CryptohomeMiscInterface
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CRYPTOHOME_CLIENT_OUT_DEFAULT_GEN_INCLUDE_USER_DATA_AUTH_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CRYPTOHOME_CLIENT_OUT_DEFAULT_GEN_INCLUDE_USER_DATA_AUTH_DBUS_PROXIES_H
#include <memory>
#include <string>
#include <vector>

#include <base/bind.h>
#include <base/callback.h>
#include <base/files/scoped_file.h>
#include <base/logging.h>
#include <base/memory/ref_counted.h>
#include <brillo/any.h>
#include <brillo/dbus/dbus_method_invoker.h>
#include <brillo/dbus/dbus_property.h>
#include <brillo/dbus/dbus_signal_handler.h>
#include <brillo/dbus/file_descriptor.h>
#include <brillo/errors/error.h>
#include <brillo/variant_dictionary.h>
#include <dbus/bus.h>
#include <dbus/message.h>
#include <dbus/object_manager.h>
#include <dbus/object_path.h>
#include <dbus/object_proxy.h>

namespace org {
namespace chromium {

// Abstract interface proxy for org::chromium::UserDataAuthInterface.
class UserDataAuthInterfaceProxyInterface {
 public:
  virtual ~UserDataAuthInterfaceProxyInterface() = default;

  virtual bool IsMounted(
      const user_data_auth::IsMountedRequest& in_request,
      user_data_auth::IsMountedReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void IsMountedAsync(
      const user_data_auth::IsMountedRequest& in_request,
      base::OnceCallback<void(const user_data_auth::IsMountedReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Unmount(
      const user_data_auth::UnmountRequest& in_request,
      user_data_auth::UnmountReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void UnmountAsync(
      const user_data_auth::UnmountRequest& in_request,
      base::OnceCallback<void(const user_data_auth::UnmountReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Mount(
      const user_data_auth::MountRequest& in_request,
      user_data_auth::MountReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void MountAsync(
      const user_data_auth::MountRequest& in_request,
      base::OnceCallback<void(const user_data_auth::MountReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Remove(
      const user_data_auth::RemoveRequest& in_request,
      user_data_auth::RemoveReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RemoveAsync(
      const user_data_auth::RemoveRequest& in_request,
      base::OnceCallback<void(const user_data_auth::RemoveReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ListKeys(
      const user_data_auth::ListKeysRequest& in_request,
      user_data_auth::ListKeysReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ListKeysAsync(
      const user_data_auth::ListKeysRequest& in_request,
      base::OnceCallback<void(const user_data_auth::ListKeysReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetKeyData(
      const user_data_auth::GetKeyDataRequest& in_request,
      user_data_auth::GetKeyDataReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetKeyDataAsync(
      const user_data_auth::GetKeyDataRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetKeyDataReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool CheckKey(
      const user_data_auth::CheckKeyRequest& in_request,
      user_data_auth::CheckKeyReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void CheckKeyAsync(
      const user_data_auth::CheckKeyRequest& in_request,
      base::OnceCallback<void(const user_data_auth::CheckKeyReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool AddKey(
      const user_data_auth::AddKeyRequest& in_request,
      user_data_auth::AddKeyReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void AddKeyAsync(
      const user_data_auth::AddKeyRequest& in_request,
      base::OnceCallback<void(const user_data_auth::AddKeyReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RemoveKey(
      const user_data_auth::RemoveKeyRequest& in_request,
      user_data_auth::RemoveKeyReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RemoveKeyAsync(
      const user_data_auth::RemoveKeyRequest& in_request,
      base::OnceCallback<void(const user_data_auth::RemoveKeyReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool MassRemoveKeys(
      const user_data_auth::MassRemoveKeysRequest& in_request,
      user_data_auth::MassRemoveKeysReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void MassRemoveKeysAsync(
      const user_data_auth::MassRemoveKeysRequest& in_request,
      base::OnceCallback<void(const user_data_auth::MassRemoveKeysReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool MigrateKey(
      const user_data_auth::MigrateKeyRequest& in_request,
      user_data_auth::MigrateKeyReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void MigrateKeyAsync(
      const user_data_auth::MigrateKeyRequest& in_request,
      base::OnceCallback<void(const user_data_auth::MigrateKeyReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StartFingerprintAuthSession(
      const user_data_auth::StartFingerprintAuthSessionRequest& in_request,
      user_data_auth::StartFingerprintAuthSessionReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StartFingerprintAuthSessionAsync(
      const user_data_auth::StartFingerprintAuthSessionRequest& in_request,
      base::OnceCallback<void(const user_data_auth::StartFingerprintAuthSessionReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool EndFingerprintAuthSession(
      const user_data_auth::EndFingerprintAuthSessionRequest& in_request,
      user_data_auth::EndFingerprintAuthSessionReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void EndFingerprintAuthSessionAsync(
      const user_data_auth::EndFingerprintAuthSessionRequest& in_request,
      base::OnceCallback<void(const user_data_auth::EndFingerprintAuthSessionReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetWebAuthnSecret(
      const user_data_auth::GetWebAuthnSecretRequest& in_request,
      user_data_auth::GetWebAuthnSecretReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetWebAuthnSecretAsync(
      const user_data_auth::GetWebAuthnSecretRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetWebAuthnSecretReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetWebAuthnSecretHash(
      const user_data_auth::GetWebAuthnSecretHashRequest& in_request,
      user_data_auth::GetWebAuthnSecretHashReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetWebAuthnSecretHashAsync(
      const user_data_auth::GetWebAuthnSecretHashRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetWebAuthnSecretHashReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetHibernateSecret(
      const user_data_auth::GetHibernateSecretRequest& in_request,
      user_data_auth::GetHibernateSecretReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetHibernateSecretAsync(
      const user_data_auth::GetHibernateSecretRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetHibernateSecretReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StartMigrateToDircrypto(
      const user_data_auth::StartMigrateToDircryptoRequest& in_request,
      user_data_auth::StartMigrateToDircryptoReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StartMigrateToDircryptoAsync(
      const user_data_auth::StartMigrateToDircryptoRequest& in_request,
      base::OnceCallback<void(const user_data_auth::StartMigrateToDircryptoReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool NeedsDircryptoMigration(
      const user_data_auth::NeedsDircryptoMigrationRequest& in_request,
      user_data_auth::NeedsDircryptoMigrationReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void NeedsDircryptoMigrationAsync(
      const user_data_auth::NeedsDircryptoMigrationRequest& in_request,
      base::OnceCallback<void(const user_data_auth::NeedsDircryptoMigrationReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetSupportedKeyPolicies(
      const user_data_auth::GetSupportedKeyPoliciesRequest& in_request,
      user_data_auth::GetSupportedKeyPoliciesReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetSupportedKeyPoliciesAsync(
      const user_data_auth::GetSupportedKeyPoliciesRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetSupportedKeyPoliciesReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetAccountDiskUsage(
      const user_data_auth::GetAccountDiskUsageRequest& in_request,
      user_data_auth::GetAccountDiskUsageReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetAccountDiskUsageAsync(
      const user_data_auth::GetAccountDiskUsageRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetAccountDiskUsageReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StartAuthSession(
      const user_data_auth::StartAuthSessionRequest& in_request,
      user_data_auth::StartAuthSessionReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StartAuthSessionAsync(
      const user_data_auth::StartAuthSessionRequest& in_request,
      base::OnceCallback<void(const user_data_auth::StartAuthSessionReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool AddCredentials(
      const user_data_auth::AddCredentialsRequest& in_request,
      user_data_auth::AddCredentialsReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void AddCredentialsAsync(
      const user_data_auth::AddCredentialsRequest& in_request,
      base::OnceCallback<void(const user_data_auth::AddCredentialsReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool UpdateCredential(
      const user_data_auth::UpdateCredentialRequest& in_request,
      user_data_auth::UpdateCredentialReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void UpdateCredentialAsync(
      const user_data_auth::UpdateCredentialRequest& in_request,
      base::OnceCallback<void(const user_data_auth::UpdateCredentialReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool AuthenticateAuthSession(
      const user_data_auth::AuthenticateAuthSessionRequest& in_request,
      user_data_auth::AuthenticateAuthSessionReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void AuthenticateAuthSessionAsync(
      const user_data_auth::AuthenticateAuthSessionRequest& in_request,
      base::OnceCallback<void(const user_data_auth::AuthenticateAuthSessionReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool InvalidateAuthSession(
      const user_data_auth::InvalidateAuthSessionRequest& in_request,
      user_data_auth::InvalidateAuthSessionReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void InvalidateAuthSessionAsync(
      const user_data_auth::InvalidateAuthSessionRequest& in_request,
      base::OnceCallback<void(const user_data_auth::InvalidateAuthSessionReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ExtendAuthSession(
      const user_data_auth::ExtendAuthSessionRequest& in_request,
      user_data_auth::ExtendAuthSessionReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ExtendAuthSessionAsync(
      const user_data_auth::ExtendAuthSessionRequest& in_request,
      base::OnceCallback<void(const user_data_auth::ExtendAuthSessionReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetAuthSessionStatus(
      const user_data_auth::GetAuthSessionStatusRequest& in_request,
      user_data_auth::GetAuthSessionStatusReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetAuthSessionStatusAsync(
      const user_data_auth::GetAuthSessionStatusRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetAuthSessionStatusReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool CreatePersistentUser(
      const user_data_auth::CreatePersistentUserRequest& in_request,
      user_data_auth::CreatePersistentUserReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void CreatePersistentUserAsync(
      const user_data_auth::CreatePersistentUserRequest& in_request,
      base::OnceCallback<void(const user_data_auth::CreatePersistentUserReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool AuthenticateAuthFactor(
      const user_data_auth::AuthenticateAuthFactorRequest& in_request,
      user_data_auth::AuthenticateAuthFactorReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void AuthenticateAuthFactorAsync(
      const user_data_auth::AuthenticateAuthFactorRequest& in_request,
      base::OnceCallback<void(const user_data_auth::AuthenticateAuthFactorReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool PrepareGuestVault(
      const user_data_auth::PrepareGuestVaultRequest& in_request,
      user_data_auth::PrepareGuestVaultReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void PrepareGuestVaultAsync(
      const user_data_auth::PrepareGuestVaultRequest& in_request,
      base::OnceCallback<void(const user_data_auth::PrepareGuestVaultReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool PrepareEphemeralVault(
      const user_data_auth::PrepareEphemeralVaultRequest& in_request,
      user_data_auth::PrepareEphemeralVaultReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void PrepareEphemeralVaultAsync(
      const user_data_auth::PrepareEphemeralVaultRequest& in_request,
      base::OnceCallback<void(const user_data_auth::PrepareEphemeralVaultReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool PreparePersistentVault(
      const user_data_auth::PreparePersistentVaultRequest& in_request,
      user_data_auth::PreparePersistentVaultReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void PreparePersistentVaultAsync(
      const user_data_auth::PreparePersistentVaultRequest& in_request,
      base::OnceCallback<void(const user_data_auth::PreparePersistentVaultReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool PrepareVaultForMigration(
      const user_data_auth::PrepareVaultForMigrationRequest& in_request,
      user_data_auth::PrepareVaultForMigrationReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void PrepareVaultForMigrationAsync(
      const user_data_auth::PrepareVaultForMigrationRequest& in_request,
      base::OnceCallback<void(const user_data_auth::PrepareVaultForMigrationReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool AddAuthFactor(
      const user_data_auth::AddAuthFactorRequest& in_request,
      user_data_auth::AddAuthFactorReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void AddAuthFactorAsync(
      const user_data_auth::AddAuthFactorRequest& in_request,
      base::OnceCallback<void(const user_data_auth::AddAuthFactorReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool UpdateAuthFactor(
      const user_data_auth::UpdateAuthFactorRequest& in_request,
      user_data_auth::UpdateAuthFactorReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void UpdateAuthFactorAsync(
      const user_data_auth::UpdateAuthFactorRequest& in_request,
      base::OnceCallback<void(const user_data_auth::UpdateAuthFactorReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RemoveAuthFactor(
      const user_data_auth::RemoveAuthFactorRequest& in_request,
      user_data_auth::RemoveAuthFactorReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RemoveAuthFactorAsync(
      const user_data_auth::RemoveAuthFactorRequest& in_request,
      base::OnceCallback<void(const user_data_auth::RemoveAuthFactorReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ListAuthFactors(
      const user_data_auth::ListAuthFactorsRequest& in_request,
      user_data_auth::ListAuthFactorsReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ListAuthFactorsAsync(
      const user_data_auth::ListAuthFactorsRequest& in_request,
      base::OnceCallback<void(const user_data_auth::ListAuthFactorsReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetRecoveryRequest(
      const user_data_auth::GetRecoveryRequestRequest& in_request,
      user_data_auth::GetRecoveryRequestReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetRecoveryRequestAsync(
      const user_data_auth::GetRecoveryRequestRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetRecoveryRequestReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterDircryptoMigrationProgressSignalHandler(
      const base::RepeatingCallback<void(const user_data_auth::DircryptoMigrationProgress&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterLowDiskSpaceSignalHandler(
      const base::RepeatingCallback<void(const user_data_auth::LowDiskSpace&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::UserDataAuthInterface.
class UserDataAuthInterfaceProxy final : public UserDataAuthInterfaceProxyInterface {
 public:
  UserDataAuthInterfaceProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  UserDataAuthInterfaceProxy(const UserDataAuthInterfaceProxy&) = delete;
  UserDataAuthInterfaceProxy& operator=(const UserDataAuthInterfaceProxy&) = delete;

  ~UserDataAuthInterfaceProxy() override {
  }

  void RegisterDircryptoMigrationProgressSignalHandler(
      const base::RepeatingCallback<void(const user_data_auth::DircryptoMigrationProgress&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "DircryptoMigrationProgress",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterLowDiskSpaceSignalHandler(
      const base::RepeatingCallback<void(const user_data_auth::LowDiskSpace&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "LowDiskSpace",
        signal_callback,
        std::move(on_connected_callback));
  }

  void ReleaseObjectProxy(base::OnceClosure callback) {
    bus_->RemoveObjectProxy(service_name_, object_path_, std::move(callback));
  }

  const dbus::ObjectPath& GetObjectPath() const override {
    return object_path_;
  }

  dbus::ObjectProxy* GetObjectProxy() const override {
    return dbus_object_proxy_;
  }

  bool IsMounted(
      const user_data_auth::IsMountedRequest& in_request,
      user_data_auth::IsMountedReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "IsMounted",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void IsMountedAsync(
      const user_data_auth::IsMountedRequest& in_request,
      base::OnceCallback<void(const user_data_auth::IsMountedReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "IsMounted",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool Unmount(
      const user_data_auth::UnmountRequest& in_request,
      user_data_auth::UnmountReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "Unmount",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void UnmountAsync(
      const user_data_auth::UnmountRequest& in_request,
      base::OnceCallback<void(const user_data_auth::UnmountReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "Unmount",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool Mount(
      const user_data_auth::MountRequest& in_request,
      user_data_auth::MountReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "Mount",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void MountAsync(
      const user_data_auth::MountRequest& in_request,
      base::OnceCallback<void(const user_data_auth::MountReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "Mount",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool Remove(
      const user_data_auth::RemoveRequest& in_request,
      user_data_auth::RemoveReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "Remove",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void RemoveAsync(
      const user_data_auth::RemoveRequest& in_request,
      base::OnceCallback<void(const user_data_auth::RemoveReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "Remove",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool ListKeys(
      const user_data_auth::ListKeysRequest& in_request,
      user_data_auth::ListKeysReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "ListKeys",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void ListKeysAsync(
      const user_data_auth::ListKeysRequest& in_request,
      base::OnceCallback<void(const user_data_auth::ListKeysReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "ListKeys",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetKeyData(
      const user_data_auth::GetKeyDataRequest& in_request,
      user_data_auth::GetKeyDataReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "GetKeyData",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetKeyDataAsync(
      const user_data_auth::GetKeyDataRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetKeyDataReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "GetKeyData",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool CheckKey(
      const user_data_auth::CheckKeyRequest& in_request,
      user_data_auth::CheckKeyReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "CheckKey",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void CheckKeyAsync(
      const user_data_auth::CheckKeyRequest& in_request,
      base::OnceCallback<void(const user_data_auth::CheckKeyReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "CheckKey",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool AddKey(
      const user_data_auth::AddKeyRequest& in_request,
      user_data_auth::AddKeyReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "AddKey",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void AddKeyAsync(
      const user_data_auth::AddKeyRequest& in_request,
      base::OnceCallback<void(const user_data_auth::AddKeyReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "AddKey",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool RemoveKey(
      const user_data_auth::RemoveKeyRequest& in_request,
      user_data_auth::RemoveKeyReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "RemoveKey",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void RemoveKeyAsync(
      const user_data_auth::RemoveKeyRequest& in_request,
      base::OnceCallback<void(const user_data_auth::RemoveKeyReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "RemoveKey",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool MassRemoveKeys(
      const user_data_auth::MassRemoveKeysRequest& in_request,
      user_data_auth::MassRemoveKeysReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "MassRemoveKeys",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void MassRemoveKeysAsync(
      const user_data_auth::MassRemoveKeysRequest& in_request,
      base::OnceCallback<void(const user_data_auth::MassRemoveKeysReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "MassRemoveKeys",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool MigrateKey(
      const user_data_auth::MigrateKeyRequest& in_request,
      user_data_auth::MigrateKeyReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "MigrateKey",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void MigrateKeyAsync(
      const user_data_auth::MigrateKeyRequest& in_request,
      base::OnceCallback<void(const user_data_auth::MigrateKeyReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "MigrateKey",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool StartFingerprintAuthSession(
      const user_data_auth::StartFingerprintAuthSessionRequest& in_request,
      user_data_auth::StartFingerprintAuthSessionReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "StartFingerprintAuthSession",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void StartFingerprintAuthSessionAsync(
      const user_data_auth::StartFingerprintAuthSessionRequest& in_request,
      base::OnceCallback<void(const user_data_auth::StartFingerprintAuthSessionReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "StartFingerprintAuthSession",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool EndFingerprintAuthSession(
      const user_data_auth::EndFingerprintAuthSessionRequest& in_request,
      user_data_auth::EndFingerprintAuthSessionReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "EndFingerprintAuthSession",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void EndFingerprintAuthSessionAsync(
      const user_data_auth::EndFingerprintAuthSessionRequest& in_request,
      base::OnceCallback<void(const user_data_auth::EndFingerprintAuthSessionReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "EndFingerprintAuthSession",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetWebAuthnSecret(
      const user_data_auth::GetWebAuthnSecretRequest& in_request,
      user_data_auth::GetWebAuthnSecretReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "GetWebAuthnSecret",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetWebAuthnSecretAsync(
      const user_data_auth::GetWebAuthnSecretRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetWebAuthnSecretReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "GetWebAuthnSecret",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetWebAuthnSecretHash(
      const user_data_auth::GetWebAuthnSecretHashRequest& in_request,
      user_data_auth::GetWebAuthnSecretHashReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "GetWebAuthnSecretHash",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetWebAuthnSecretHashAsync(
      const user_data_auth::GetWebAuthnSecretHashRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetWebAuthnSecretHashReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "GetWebAuthnSecretHash",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetHibernateSecret(
      const user_data_auth::GetHibernateSecretRequest& in_request,
      user_data_auth::GetHibernateSecretReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "GetHibernateSecret",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetHibernateSecretAsync(
      const user_data_auth::GetHibernateSecretRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetHibernateSecretReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "GetHibernateSecret",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool StartMigrateToDircrypto(
      const user_data_auth::StartMigrateToDircryptoRequest& in_request,
      user_data_auth::StartMigrateToDircryptoReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "StartMigrateToDircrypto",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void StartMigrateToDircryptoAsync(
      const user_data_auth::StartMigrateToDircryptoRequest& in_request,
      base::OnceCallback<void(const user_data_auth::StartMigrateToDircryptoReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "StartMigrateToDircrypto",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool NeedsDircryptoMigration(
      const user_data_auth::NeedsDircryptoMigrationRequest& in_request,
      user_data_auth::NeedsDircryptoMigrationReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "NeedsDircryptoMigration",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void NeedsDircryptoMigrationAsync(
      const user_data_auth::NeedsDircryptoMigrationRequest& in_request,
      base::OnceCallback<void(const user_data_auth::NeedsDircryptoMigrationReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "NeedsDircryptoMigration",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetSupportedKeyPolicies(
      const user_data_auth::GetSupportedKeyPoliciesRequest& in_request,
      user_data_auth::GetSupportedKeyPoliciesReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "GetSupportedKeyPolicies",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetSupportedKeyPoliciesAsync(
      const user_data_auth::GetSupportedKeyPoliciesRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetSupportedKeyPoliciesReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "GetSupportedKeyPolicies",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetAccountDiskUsage(
      const user_data_auth::GetAccountDiskUsageRequest& in_request,
      user_data_auth::GetAccountDiskUsageReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "GetAccountDiskUsage",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetAccountDiskUsageAsync(
      const user_data_auth::GetAccountDiskUsageRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetAccountDiskUsageReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "GetAccountDiskUsage",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool StartAuthSession(
      const user_data_auth::StartAuthSessionRequest& in_request,
      user_data_auth::StartAuthSessionReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "StartAuthSession",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void StartAuthSessionAsync(
      const user_data_auth::StartAuthSessionRequest& in_request,
      base::OnceCallback<void(const user_data_auth::StartAuthSessionReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "StartAuthSession",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool AddCredentials(
      const user_data_auth::AddCredentialsRequest& in_request,
      user_data_auth::AddCredentialsReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "AddCredentials",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void AddCredentialsAsync(
      const user_data_auth::AddCredentialsRequest& in_request,
      base::OnceCallback<void(const user_data_auth::AddCredentialsReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "AddCredentials",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool UpdateCredential(
      const user_data_auth::UpdateCredentialRequest& in_request,
      user_data_auth::UpdateCredentialReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "UpdateCredential",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void UpdateCredentialAsync(
      const user_data_auth::UpdateCredentialRequest& in_request,
      base::OnceCallback<void(const user_data_auth::UpdateCredentialReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "UpdateCredential",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool AuthenticateAuthSession(
      const user_data_auth::AuthenticateAuthSessionRequest& in_request,
      user_data_auth::AuthenticateAuthSessionReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "AuthenticateAuthSession",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void AuthenticateAuthSessionAsync(
      const user_data_auth::AuthenticateAuthSessionRequest& in_request,
      base::OnceCallback<void(const user_data_auth::AuthenticateAuthSessionReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "AuthenticateAuthSession",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool InvalidateAuthSession(
      const user_data_auth::InvalidateAuthSessionRequest& in_request,
      user_data_auth::InvalidateAuthSessionReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "InvalidateAuthSession",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void InvalidateAuthSessionAsync(
      const user_data_auth::InvalidateAuthSessionRequest& in_request,
      base::OnceCallback<void(const user_data_auth::InvalidateAuthSessionReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "InvalidateAuthSession",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool ExtendAuthSession(
      const user_data_auth::ExtendAuthSessionRequest& in_request,
      user_data_auth::ExtendAuthSessionReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "ExtendAuthSession",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void ExtendAuthSessionAsync(
      const user_data_auth::ExtendAuthSessionRequest& in_request,
      base::OnceCallback<void(const user_data_auth::ExtendAuthSessionReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "ExtendAuthSession",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetAuthSessionStatus(
      const user_data_auth::GetAuthSessionStatusRequest& in_request,
      user_data_auth::GetAuthSessionStatusReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "GetAuthSessionStatus",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetAuthSessionStatusAsync(
      const user_data_auth::GetAuthSessionStatusRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetAuthSessionStatusReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "GetAuthSessionStatus",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool CreatePersistentUser(
      const user_data_auth::CreatePersistentUserRequest& in_request,
      user_data_auth::CreatePersistentUserReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "CreatePersistentUser",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void CreatePersistentUserAsync(
      const user_data_auth::CreatePersistentUserRequest& in_request,
      base::OnceCallback<void(const user_data_auth::CreatePersistentUserReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "CreatePersistentUser",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool AuthenticateAuthFactor(
      const user_data_auth::AuthenticateAuthFactorRequest& in_request,
      user_data_auth::AuthenticateAuthFactorReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "AuthenticateAuthFactor",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void AuthenticateAuthFactorAsync(
      const user_data_auth::AuthenticateAuthFactorRequest& in_request,
      base::OnceCallback<void(const user_data_auth::AuthenticateAuthFactorReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "AuthenticateAuthFactor",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool PrepareGuestVault(
      const user_data_auth::PrepareGuestVaultRequest& in_request,
      user_data_auth::PrepareGuestVaultReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "PrepareGuestVault",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void PrepareGuestVaultAsync(
      const user_data_auth::PrepareGuestVaultRequest& in_request,
      base::OnceCallback<void(const user_data_auth::PrepareGuestVaultReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "PrepareGuestVault",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool PrepareEphemeralVault(
      const user_data_auth::PrepareEphemeralVaultRequest& in_request,
      user_data_auth::PrepareEphemeralVaultReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "PrepareEphemeralVault",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void PrepareEphemeralVaultAsync(
      const user_data_auth::PrepareEphemeralVaultRequest& in_request,
      base::OnceCallback<void(const user_data_auth::PrepareEphemeralVaultReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "PrepareEphemeralVault",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool PreparePersistentVault(
      const user_data_auth::PreparePersistentVaultRequest& in_request,
      user_data_auth::PreparePersistentVaultReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "PreparePersistentVault",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void PreparePersistentVaultAsync(
      const user_data_auth::PreparePersistentVaultRequest& in_request,
      base::OnceCallback<void(const user_data_auth::PreparePersistentVaultReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "PreparePersistentVault",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool PrepareVaultForMigration(
      const user_data_auth::PrepareVaultForMigrationRequest& in_request,
      user_data_auth::PrepareVaultForMigrationReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "PrepareVaultForMigration",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void PrepareVaultForMigrationAsync(
      const user_data_auth::PrepareVaultForMigrationRequest& in_request,
      base::OnceCallback<void(const user_data_auth::PrepareVaultForMigrationReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "PrepareVaultForMigration",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool AddAuthFactor(
      const user_data_auth::AddAuthFactorRequest& in_request,
      user_data_auth::AddAuthFactorReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "AddAuthFactor",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void AddAuthFactorAsync(
      const user_data_auth::AddAuthFactorRequest& in_request,
      base::OnceCallback<void(const user_data_auth::AddAuthFactorReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "AddAuthFactor",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool UpdateAuthFactor(
      const user_data_auth::UpdateAuthFactorRequest& in_request,
      user_data_auth::UpdateAuthFactorReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "UpdateAuthFactor",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void UpdateAuthFactorAsync(
      const user_data_auth::UpdateAuthFactorRequest& in_request,
      base::OnceCallback<void(const user_data_auth::UpdateAuthFactorReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "UpdateAuthFactor",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool RemoveAuthFactor(
      const user_data_auth::RemoveAuthFactorRequest& in_request,
      user_data_auth::RemoveAuthFactorReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "RemoveAuthFactor",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void RemoveAuthFactorAsync(
      const user_data_auth::RemoveAuthFactorRequest& in_request,
      base::OnceCallback<void(const user_data_auth::RemoveAuthFactorReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "RemoveAuthFactor",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool ListAuthFactors(
      const user_data_auth::ListAuthFactorsRequest& in_request,
      user_data_auth::ListAuthFactorsReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "ListAuthFactors",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void ListAuthFactorsAsync(
      const user_data_auth::ListAuthFactorsRequest& in_request,
      base::OnceCallback<void(const user_data_auth::ListAuthFactorsReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "ListAuthFactors",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetRecoveryRequest(
      const user_data_auth::GetRecoveryRequestRequest& in_request,
      user_data_auth::GetRecoveryRequestReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "GetRecoveryRequest",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetRecoveryRequestAsync(
      const user_data_auth::GetRecoveryRequestRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetRecoveryRequestReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UserDataAuthInterface",
        "GetRecoveryRequest",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.UserDataAuth"};
  const dbus::ObjectPath object_path_{"/org/chromium/UserDataAuth"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Abstract interface proxy for org::chromium::ArcQuota.
class ArcQuotaProxyInterface {
 public:
  virtual ~ArcQuotaProxyInterface() = default;

  virtual bool GetArcDiskFeatures(
      const user_data_auth::GetArcDiskFeaturesRequest& in_request,
      user_data_auth::GetArcDiskFeaturesReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetArcDiskFeaturesAsync(
      const user_data_auth::GetArcDiskFeaturesRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetArcDiskFeaturesReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetCurrentSpaceForArcUid(
      const user_data_auth::GetCurrentSpaceForArcUidRequest& in_request,
      user_data_auth::GetCurrentSpaceForArcUidReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetCurrentSpaceForArcUidAsync(
      const user_data_auth::GetCurrentSpaceForArcUidRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetCurrentSpaceForArcUidReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetCurrentSpaceForArcGid(
      const user_data_auth::GetCurrentSpaceForArcGidRequest& in_request,
      user_data_auth::GetCurrentSpaceForArcGidReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetCurrentSpaceForArcGidAsync(
      const user_data_auth::GetCurrentSpaceForArcGidRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetCurrentSpaceForArcGidReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetCurrentSpaceForArcProjectId(
      const user_data_auth::GetCurrentSpaceForArcProjectIdRequest& in_request,
      user_data_auth::GetCurrentSpaceForArcProjectIdReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetCurrentSpaceForArcProjectIdAsync(
      const user_data_auth::GetCurrentSpaceForArcProjectIdRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetCurrentSpaceForArcProjectIdReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetMediaRWDataFileProjectId(
      const brillo::dbus_utils::FileDescriptor& in_fd,
      const user_data_auth::SetMediaRWDataFileProjectIdRequest& in_request,
      user_data_auth::SetMediaRWDataFileProjectIdReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetMediaRWDataFileProjectIdAsync(
      const brillo::dbus_utils::FileDescriptor& in_fd,
      const user_data_auth::SetMediaRWDataFileProjectIdRequest& in_request,
      base::OnceCallback<void(const user_data_auth::SetMediaRWDataFileProjectIdReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetMediaRWDataFileProjectInheritanceFlag(
      const brillo::dbus_utils::FileDescriptor& in_fd,
      const user_data_auth::SetMediaRWDataFileProjectInheritanceFlagRequest& in_request,
      user_data_auth::SetMediaRWDataFileProjectInheritanceFlagReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetMediaRWDataFileProjectInheritanceFlagAsync(
      const brillo::dbus_utils::FileDescriptor& in_fd,
      const user_data_auth::SetMediaRWDataFileProjectInheritanceFlagRequest& in_request,
      base::OnceCallback<void(const user_data_auth::SetMediaRWDataFileProjectInheritanceFlagReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::ArcQuota.
class ArcQuotaProxy final : public ArcQuotaProxyInterface {
 public:
  ArcQuotaProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  ArcQuotaProxy(const ArcQuotaProxy&) = delete;
  ArcQuotaProxy& operator=(const ArcQuotaProxy&) = delete;

  ~ArcQuotaProxy() override {
  }

  void ReleaseObjectProxy(base::OnceClosure callback) {
    bus_->RemoveObjectProxy(service_name_, object_path_, std::move(callback));
  }

  const dbus::ObjectPath& GetObjectPath() const override {
    return object_path_;
  }

  dbus::ObjectProxy* GetObjectProxy() const override {
    return dbus_object_proxy_;
  }

  bool GetArcDiskFeatures(
      const user_data_auth::GetArcDiskFeaturesRequest& in_request,
      user_data_auth::GetArcDiskFeaturesReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ArcQuota",
        "GetArcDiskFeatures",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetArcDiskFeaturesAsync(
      const user_data_auth::GetArcDiskFeaturesRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetArcDiskFeaturesReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ArcQuota",
        "GetArcDiskFeatures",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetCurrentSpaceForArcUid(
      const user_data_auth::GetCurrentSpaceForArcUidRequest& in_request,
      user_data_auth::GetCurrentSpaceForArcUidReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ArcQuota",
        "GetCurrentSpaceForArcUid",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetCurrentSpaceForArcUidAsync(
      const user_data_auth::GetCurrentSpaceForArcUidRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetCurrentSpaceForArcUidReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ArcQuota",
        "GetCurrentSpaceForArcUid",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetCurrentSpaceForArcGid(
      const user_data_auth::GetCurrentSpaceForArcGidRequest& in_request,
      user_data_auth::GetCurrentSpaceForArcGidReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ArcQuota",
        "GetCurrentSpaceForArcGid",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetCurrentSpaceForArcGidAsync(
      const user_data_auth::GetCurrentSpaceForArcGidRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetCurrentSpaceForArcGidReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ArcQuota",
        "GetCurrentSpaceForArcGid",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetCurrentSpaceForArcProjectId(
      const user_data_auth::GetCurrentSpaceForArcProjectIdRequest& in_request,
      user_data_auth::GetCurrentSpaceForArcProjectIdReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ArcQuota",
        "GetCurrentSpaceForArcProjectId",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetCurrentSpaceForArcProjectIdAsync(
      const user_data_auth::GetCurrentSpaceForArcProjectIdRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetCurrentSpaceForArcProjectIdReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ArcQuota",
        "GetCurrentSpaceForArcProjectId",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool SetMediaRWDataFileProjectId(
      const brillo::dbus_utils::FileDescriptor& in_fd,
      const user_data_auth::SetMediaRWDataFileProjectIdRequest& in_request,
      user_data_auth::SetMediaRWDataFileProjectIdReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ArcQuota",
        "SetMediaRWDataFileProjectId",
        error,
        in_fd,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void SetMediaRWDataFileProjectIdAsync(
      const brillo::dbus_utils::FileDescriptor& in_fd,
      const user_data_auth::SetMediaRWDataFileProjectIdRequest& in_request,
      base::OnceCallback<void(const user_data_auth::SetMediaRWDataFileProjectIdReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ArcQuota",
        "SetMediaRWDataFileProjectId",
        std::move(success_callback),
        std::move(error_callback),
        in_fd,
        in_request);
  }

  bool SetMediaRWDataFileProjectInheritanceFlag(
      const brillo::dbus_utils::FileDescriptor& in_fd,
      const user_data_auth::SetMediaRWDataFileProjectInheritanceFlagRequest& in_request,
      user_data_auth::SetMediaRWDataFileProjectInheritanceFlagReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ArcQuota",
        "SetMediaRWDataFileProjectInheritanceFlag",
        error,
        in_fd,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void SetMediaRWDataFileProjectInheritanceFlagAsync(
      const brillo::dbus_utils::FileDescriptor& in_fd,
      const user_data_auth::SetMediaRWDataFileProjectInheritanceFlagRequest& in_request,
      base::OnceCallback<void(const user_data_auth::SetMediaRWDataFileProjectInheritanceFlagReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ArcQuota",
        "SetMediaRWDataFileProjectInheritanceFlag",
        std::move(success_callback),
        std::move(error_callback),
        in_fd,
        in_request);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.UserDataAuth"};
  const dbus::ObjectPath object_path_{"/org/chromium/UserDataAuth"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Abstract interface proxy for org::chromium::CryptohomePkcs11Interface.
class CryptohomePkcs11InterfaceProxyInterface {
 public:
  virtual ~CryptohomePkcs11InterfaceProxyInterface() = default;

  virtual bool Pkcs11IsTpmTokenReady(
      const user_data_auth::Pkcs11IsTpmTokenReadyRequest& in_request,
      user_data_auth::Pkcs11IsTpmTokenReadyReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void Pkcs11IsTpmTokenReadyAsync(
      const user_data_auth::Pkcs11IsTpmTokenReadyRequest& in_request,
      base::OnceCallback<void(const user_data_auth::Pkcs11IsTpmTokenReadyReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Pkcs11GetTpmTokenInfo(
      const user_data_auth::Pkcs11GetTpmTokenInfoRequest& in_request,
      user_data_auth::Pkcs11GetTpmTokenInfoReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void Pkcs11GetTpmTokenInfoAsync(
      const user_data_auth::Pkcs11GetTpmTokenInfoRequest& in_request,
      base::OnceCallback<void(const user_data_auth::Pkcs11GetTpmTokenInfoReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Pkcs11Terminate(
      const user_data_auth::Pkcs11TerminateRequest& in_request,
      user_data_auth::Pkcs11TerminateReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void Pkcs11TerminateAsync(
      const user_data_auth::Pkcs11TerminateRequest& in_request,
      base::OnceCallback<void(const user_data_auth::Pkcs11TerminateReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Pkcs11RestoreTpmTokens(
      const user_data_auth::Pkcs11RestoreTpmTokensRequest& in_request,
      user_data_auth::Pkcs11RestoreTpmTokensReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void Pkcs11RestoreTpmTokensAsync(
      const user_data_auth::Pkcs11RestoreTpmTokensRequest& in_request,
      base::OnceCallback<void(const user_data_auth::Pkcs11RestoreTpmTokensReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::CryptohomePkcs11Interface.
class CryptohomePkcs11InterfaceProxy final : public CryptohomePkcs11InterfaceProxyInterface {
 public:
  CryptohomePkcs11InterfaceProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  CryptohomePkcs11InterfaceProxy(const CryptohomePkcs11InterfaceProxy&) = delete;
  CryptohomePkcs11InterfaceProxy& operator=(const CryptohomePkcs11InterfaceProxy&) = delete;

  ~CryptohomePkcs11InterfaceProxy() override {
  }

  void ReleaseObjectProxy(base::OnceClosure callback) {
    bus_->RemoveObjectProxy(service_name_, object_path_, std::move(callback));
  }

  const dbus::ObjectPath& GetObjectPath() const override {
    return object_path_;
  }

  dbus::ObjectProxy* GetObjectProxy() const override {
    return dbus_object_proxy_;
  }

  bool Pkcs11IsTpmTokenReady(
      const user_data_auth::Pkcs11IsTpmTokenReadyRequest& in_request,
      user_data_auth::Pkcs11IsTpmTokenReadyReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomePkcs11Interface",
        "Pkcs11IsTpmTokenReady",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void Pkcs11IsTpmTokenReadyAsync(
      const user_data_auth::Pkcs11IsTpmTokenReadyRequest& in_request,
      base::OnceCallback<void(const user_data_auth::Pkcs11IsTpmTokenReadyReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomePkcs11Interface",
        "Pkcs11IsTpmTokenReady",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool Pkcs11GetTpmTokenInfo(
      const user_data_auth::Pkcs11GetTpmTokenInfoRequest& in_request,
      user_data_auth::Pkcs11GetTpmTokenInfoReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomePkcs11Interface",
        "Pkcs11GetTpmTokenInfo",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void Pkcs11GetTpmTokenInfoAsync(
      const user_data_auth::Pkcs11GetTpmTokenInfoRequest& in_request,
      base::OnceCallback<void(const user_data_auth::Pkcs11GetTpmTokenInfoReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomePkcs11Interface",
        "Pkcs11GetTpmTokenInfo",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool Pkcs11Terminate(
      const user_data_auth::Pkcs11TerminateRequest& in_request,
      user_data_auth::Pkcs11TerminateReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomePkcs11Interface",
        "Pkcs11Terminate",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void Pkcs11TerminateAsync(
      const user_data_auth::Pkcs11TerminateRequest& in_request,
      base::OnceCallback<void(const user_data_auth::Pkcs11TerminateReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomePkcs11Interface",
        "Pkcs11Terminate",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool Pkcs11RestoreTpmTokens(
      const user_data_auth::Pkcs11RestoreTpmTokensRequest& in_request,
      user_data_auth::Pkcs11RestoreTpmTokensReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomePkcs11Interface",
        "Pkcs11RestoreTpmTokens",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void Pkcs11RestoreTpmTokensAsync(
      const user_data_auth::Pkcs11RestoreTpmTokensRequest& in_request,
      base::OnceCallback<void(const user_data_auth::Pkcs11RestoreTpmTokensReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomePkcs11Interface",
        "Pkcs11RestoreTpmTokens",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.UserDataAuth"};
  const dbus::ObjectPath object_path_{"/org/chromium/UserDataAuth"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Abstract interface proxy for org::chromium::InstallAttributesInterface.
class InstallAttributesInterfaceProxyInterface {
 public:
  virtual ~InstallAttributesInterfaceProxyInterface() = default;

  virtual bool InstallAttributesGet(
      const user_data_auth::InstallAttributesGetRequest& in_request,
      user_data_auth::InstallAttributesGetReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void InstallAttributesGetAsync(
      const user_data_auth::InstallAttributesGetRequest& in_request,
      base::OnceCallback<void(const user_data_auth::InstallAttributesGetReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool InstallAttributesSet(
      const user_data_auth::InstallAttributesSetRequest& in_request,
      user_data_auth::InstallAttributesSetReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void InstallAttributesSetAsync(
      const user_data_auth::InstallAttributesSetRequest& in_request,
      base::OnceCallback<void(const user_data_auth::InstallAttributesSetReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool InstallAttributesFinalize(
      const user_data_auth::InstallAttributesFinalizeRequest& in_request,
      user_data_auth::InstallAttributesFinalizeReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void InstallAttributesFinalizeAsync(
      const user_data_auth::InstallAttributesFinalizeRequest& in_request,
      base::OnceCallback<void(const user_data_auth::InstallAttributesFinalizeReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool InstallAttributesGetStatus(
      const user_data_auth::InstallAttributesGetStatusRequest& in_request,
      user_data_auth::InstallAttributesGetStatusReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void InstallAttributesGetStatusAsync(
      const user_data_auth::InstallAttributesGetStatusRequest& in_request,
      base::OnceCallback<void(const user_data_auth::InstallAttributesGetStatusReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetFirmwareManagementParameters(
      const user_data_auth::GetFirmwareManagementParametersRequest& in_request,
      user_data_auth::GetFirmwareManagementParametersReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetFirmwareManagementParametersAsync(
      const user_data_auth::GetFirmwareManagementParametersRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetFirmwareManagementParametersReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RemoveFirmwareManagementParameters(
      const user_data_auth::RemoveFirmwareManagementParametersRequest& in_request,
      user_data_auth::RemoveFirmwareManagementParametersReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RemoveFirmwareManagementParametersAsync(
      const user_data_auth::RemoveFirmwareManagementParametersRequest& in_request,
      base::OnceCallback<void(const user_data_auth::RemoveFirmwareManagementParametersReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetFirmwareManagementParameters(
      const user_data_auth::SetFirmwareManagementParametersRequest& in_request,
      user_data_auth::SetFirmwareManagementParametersReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetFirmwareManagementParametersAsync(
      const user_data_auth::SetFirmwareManagementParametersRequest& in_request,
      base::OnceCallback<void(const user_data_auth::SetFirmwareManagementParametersReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::InstallAttributesInterface.
class InstallAttributesInterfaceProxy final : public InstallAttributesInterfaceProxyInterface {
 public:
  InstallAttributesInterfaceProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  InstallAttributesInterfaceProxy(const InstallAttributesInterfaceProxy&) = delete;
  InstallAttributesInterfaceProxy& operator=(const InstallAttributesInterfaceProxy&) = delete;

  ~InstallAttributesInterfaceProxy() override {
  }

  void ReleaseObjectProxy(base::OnceClosure callback) {
    bus_->RemoveObjectProxy(service_name_, object_path_, std::move(callback));
  }

  const dbus::ObjectPath& GetObjectPath() const override {
    return object_path_;
  }

  dbus::ObjectProxy* GetObjectProxy() const override {
    return dbus_object_proxy_;
  }

  bool InstallAttributesGet(
      const user_data_auth::InstallAttributesGetRequest& in_request,
      user_data_auth::InstallAttributesGetReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.InstallAttributesInterface",
        "InstallAttributesGet",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void InstallAttributesGetAsync(
      const user_data_auth::InstallAttributesGetRequest& in_request,
      base::OnceCallback<void(const user_data_auth::InstallAttributesGetReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.InstallAttributesInterface",
        "InstallAttributesGet",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool InstallAttributesSet(
      const user_data_auth::InstallAttributesSetRequest& in_request,
      user_data_auth::InstallAttributesSetReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.InstallAttributesInterface",
        "InstallAttributesSet",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void InstallAttributesSetAsync(
      const user_data_auth::InstallAttributesSetRequest& in_request,
      base::OnceCallback<void(const user_data_auth::InstallAttributesSetReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.InstallAttributesInterface",
        "InstallAttributesSet",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool InstallAttributesFinalize(
      const user_data_auth::InstallAttributesFinalizeRequest& in_request,
      user_data_auth::InstallAttributesFinalizeReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.InstallAttributesInterface",
        "InstallAttributesFinalize",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void InstallAttributesFinalizeAsync(
      const user_data_auth::InstallAttributesFinalizeRequest& in_request,
      base::OnceCallback<void(const user_data_auth::InstallAttributesFinalizeReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.InstallAttributesInterface",
        "InstallAttributesFinalize",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool InstallAttributesGetStatus(
      const user_data_auth::InstallAttributesGetStatusRequest& in_request,
      user_data_auth::InstallAttributesGetStatusReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.InstallAttributesInterface",
        "InstallAttributesGetStatus",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void InstallAttributesGetStatusAsync(
      const user_data_auth::InstallAttributesGetStatusRequest& in_request,
      base::OnceCallback<void(const user_data_auth::InstallAttributesGetStatusReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.InstallAttributesInterface",
        "InstallAttributesGetStatus",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetFirmwareManagementParameters(
      const user_data_auth::GetFirmwareManagementParametersRequest& in_request,
      user_data_auth::GetFirmwareManagementParametersReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.InstallAttributesInterface",
        "GetFirmwareManagementParameters",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetFirmwareManagementParametersAsync(
      const user_data_auth::GetFirmwareManagementParametersRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetFirmwareManagementParametersReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.InstallAttributesInterface",
        "GetFirmwareManagementParameters",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool RemoveFirmwareManagementParameters(
      const user_data_auth::RemoveFirmwareManagementParametersRequest& in_request,
      user_data_auth::RemoveFirmwareManagementParametersReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.InstallAttributesInterface",
        "RemoveFirmwareManagementParameters",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void RemoveFirmwareManagementParametersAsync(
      const user_data_auth::RemoveFirmwareManagementParametersRequest& in_request,
      base::OnceCallback<void(const user_data_auth::RemoveFirmwareManagementParametersReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.InstallAttributesInterface",
        "RemoveFirmwareManagementParameters",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool SetFirmwareManagementParameters(
      const user_data_auth::SetFirmwareManagementParametersRequest& in_request,
      user_data_auth::SetFirmwareManagementParametersReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.InstallAttributesInterface",
        "SetFirmwareManagementParameters",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void SetFirmwareManagementParametersAsync(
      const user_data_auth::SetFirmwareManagementParametersRequest& in_request,
      base::OnceCallback<void(const user_data_auth::SetFirmwareManagementParametersReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.InstallAttributesInterface",
        "SetFirmwareManagementParameters",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.UserDataAuth"};
  const dbus::ObjectPath object_path_{"/org/chromium/UserDataAuth"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Abstract interface proxy for org::chromium::CryptohomeMiscInterface.
class CryptohomeMiscInterfaceProxyInterface {
 public:
  virtual ~CryptohomeMiscInterfaceProxyInterface() = default;

  virtual bool GetSystemSalt(
      const user_data_auth::GetSystemSaltRequest& in_request,
      user_data_auth::GetSystemSaltReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetSystemSaltAsync(
      const user_data_auth::GetSystemSaltRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetSystemSaltReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool UpdateCurrentUserActivityTimestamp(
      const user_data_auth::UpdateCurrentUserActivityTimestampRequest& in_request,
      user_data_auth::UpdateCurrentUserActivityTimestampReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void UpdateCurrentUserActivityTimestampAsync(
      const user_data_auth::UpdateCurrentUserActivityTimestampRequest& in_request,
      base::OnceCallback<void(const user_data_auth::UpdateCurrentUserActivityTimestampReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetSanitizedUsername(
      const user_data_auth::GetSanitizedUsernameRequest& in_request,
      user_data_auth::GetSanitizedUsernameReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetSanitizedUsernameAsync(
      const user_data_auth::GetSanitizedUsernameRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetSanitizedUsernameReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetLoginStatus(
      const user_data_auth::GetLoginStatusRequest& in_request,
      user_data_auth::GetLoginStatusReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetLoginStatusAsync(
      const user_data_auth::GetLoginStatusRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetLoginStatusReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetStatusString(
      const user_data_auth::GetStatusStringRequest& in_request,
      user_data_auth::GetStatusStringReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetStatusStringAsync(
      const user_data_auth::GetStatusStringRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetStatusStringReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool LockToSingleUserMountUntilReboot(
      const user_data_auth::LockToSingleUserMountUntilRebootRequest& in_request,
      user_data_auth::LockToSingleUserMountUntilRebootReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void LockToSingleUserMountUntilRebootAsync(
      const user_data_auth::LockToSingleUserMountUntilRebootRequest& in_request,
      base::OnceCallback<void(const user_data_auth::LockToSingleUserMountUntilRebootReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetRsuDeviceId(
      const user_data_auth::GetRsuDeviceIdRequest& in_request,
      user_data_auth::GetRsuDeviceIdReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetRsuDeviceIdAsync(
      const user_data_auth::GetRsuDeviceIdRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetRsuDeviceIdReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool CheckHealth(
      const user_data_auth::CheckHealthRequest& in_request,
      user_data_auth::CheckHealthReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void CheckHealthAsync(
      const user_data_auth::CheckHealthRequest& in_request,
      base::OnceCallback<void(const user_data_auth::CheckHealthReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::CryptohomeMiscInterface.
class CryptohomeMiscInterfaceProxy final : public CryptohomeMiscInterfaceProxyInterface {
 public:
  CryptohomeMiscInterfaceProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  CryptohomeMiscInterfaceProxy(const CryptohomeMiscInterfaceProxy&) = delete;
  CryptohomeMiscInterfaceProxy& operator=(const CryptohomeMiscInterfaceProxy&) = delete;

  ~CryptohomeMiscInterfaceProxy() override {
  }

  void ReleaseObjectProxy(base::OnceClosure callback) {
    bus_->RemoveObjectProxy(service_name_, object_path_, std::move(callback));
  }

  const dbus::ObjectPath& GetObjectPath() const override {
    return object_path_;
  }

  dbus::ObjectProxy* GetObjectProxy() const override {
    return dbus_object_proxy_;
  }

  bool GetSystemSalt(
      const user_data_auth::GetSystemSaltRequest& in_request,
      user_data_auth::GetSystemSaltReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomeMiscInterface",
        "GetSystemSalt",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetSystemSaltAsync(
      const user_data_auth::GetSystemSaltRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetSystemSaltReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomeMiscInterface",
        "GetSystemSalt",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool UpdateCurrentUserActivityTimestamp(
      const user_data_auth::UpdateCurrentUserActivityTimestampRequest& in_request,
      user_data_auth::UpdateCurrentUserActivityTimestampReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomeMiscInterface",
        "UpdateCurrentUserActivityTimestamp",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void UpdateCurrentUserActivityTimestampAsync(
      const user_data_auth::UpdateCurrentUserActivityTimestampRequest& in_request,
      base::OnceCallback<void(const user_data_auth::UpdateCurrentUserActivityTimestampReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomeMiscInterface",
        "UpdateCurrentUserActivityTimestamp",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetSanitizedUsername(
      const user_data_auth::GetSanitizedUsernameRequest& in_request,
      user_data_auth::GetSanitizedUsernameReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomeMiscInterface",
        "GetSanitizedUsername",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetSanitizedUsernameAsync(
      const user_data_auth::GetSanitizedUsernameRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetSanitizedUsernameReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomeMiscInterface",
        "GetSanitizedUsername",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetLoginStatus(
      const user_data_auth::GetLoginStatusRequest& in_request,
      user_data_auth::GetLoginStatusReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomeMiscInterface",
        "GetLoginStatus",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetLoginStatusAsync(
      const user_data_auth::GetLoginStatusRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetLoginStatusReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomeMiscInterface",
        "GetLoginStatus",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetStatusString(
      const user_data_auth::GetStatusStringRequest& in_request,
      user_data_auth::GetStatusStringReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomeMiscInterface",
        "GetStatusString",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetStatusStringAsync(
      const user_data_auth::GetStatusStringRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetStatusStringReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomeMiscInterface",
        "GetStatusString",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool LockToSingleUserMountUntilReboot(
      const user_data_auth::LockToSingleUserMountUntilRebootRequest& in_request,
      user_data_auth::LockToSingleUserMountUntilRebootReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomeMiscInterface",
        "LockToSingleUserMountUntilReboot",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void LockToSingleUserMountUntilRebootAsync(
      const user_data_auth::LockToSingleUserMountUntilRebootRequest& in_request,
      base::OnceCallback<void(const user_data_auth::LockToSingleUserMountUntilRebootReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomeMiscInterface",
        "LockToSingleUserMountUntilReboot",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetRsuDeviceId(
      const user_data_auth::GetRsuDeviceIdRequest& in_request,
      user_data_auth::GetRsuDeviceIdReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomeMiscInterface",
        "GetRsuDeviceId",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetRsuDeviceIdAsync(
      const user_data_auth::GetRsuDeviceIdRequest& in_request,
      base::OnceCallback<void(const user_data_auth::GetRsuDeviceIdReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomeMiscInterface",
        "GetRsuDeviceId",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool CheckHealth(
      const user_data_auth::CheckHealthRequest& in_request,
      user_data_auth::CheckHealthReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomeMiscInterface",
        "CheckHealth",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void CheckHealthAsync(
      const user_data_auth::CheckHealthRequest& in_request,
      base::OnceCallback<void(const user_data_auth::CheckHealthReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomeMiscInterface",
        "CheckHealth",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.UserDataAuth"};
  const dbus::ObjectPath object_path_{"/org/chromium/UserDataAuth"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CRYPTOHOME_CLIENT_OUT_DEFAULT_GEN_INCLUDE_USER_DATA_AUTH_DBUS_PROXIES_H
