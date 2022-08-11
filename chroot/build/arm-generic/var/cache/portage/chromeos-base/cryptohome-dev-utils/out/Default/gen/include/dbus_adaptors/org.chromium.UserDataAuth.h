// Automatic generation of D-Bus interfaces:
//  - org.chromium.UserDataAuthInterface
//  - org.chromium.ArcQuota
//  - org.chromium.CryptohomePkcs11Interface
//  - org.chromium.InstallAttributesInterface
//  - org.chromium.CryptohomeMiscInterface
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CRYPTOHOME_DEV_UTILS_OUT_DEFAULT_GEN_INCLUDE_DBUS_ADAPTORS_ORG_CHROMIUM_USERDATAAUTH_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CRYPTOHOME_DEV_UTILS_OUT_DEFAULT_GEN_INCLUDE_DBUS_ADAPTORS_ORG_CHROMIUM_USERDATAAUTH_H
#include <memory>
#include <string>
#include <tuple>
#include <vector>

#include <base/files/scoped_file.h>
#include <dbus/object_path.h>
#include <brillo/any.h>
#include <brillo/dbus/dbus_object.h>
#include <brillo/dbus/exported_object_manager.h>
#include <brillo/dbus/file_descriptor.h>
#include <brillo/variant_dictionary.h>

namespace org {
namespace chromium {

// Interface definition for org::chromium::UserDataAuthInterface.
class UserDataAuthInterfaceInterface {
 public:
  virtual ~UserDataAuthInterfaceInterface() = default;

  virtual void IsMounted(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::IsMountedReply>> response,
      const user_data_auth::IsMountedRequest& in_request) = 0;
  virtual void Unmount(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::UnmountReply>> response,
      const user_data_auth::UnmountRequest& in_request) = 0;
  virtual void Mount(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::MountReply>> response,
      const user_data_auth::MountRequest& in_request) = 0;
  virtual void Remove(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::RemoveReply>> response,
      const user_data_auth::RemoveRequest& in_request) = 0;
  virtual void ListKeys(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::ListKeysReply>> response,
      const user_data_auth::ListKeysRequest& in_request) = 0;
  virtual void GetKeyData(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::GetKeyDataReply>> response,
      const user_data_auth::GetKeyDataRequest& in_request) = 0;
  virtual void CheckKey(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::CheckKeyReply>> response,
      const user_data_auth::CheckKeyRequest& in_request) = 0;
  virtual void AddKey(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::AddKeyReply>> response,
      const user_data_auth::AddKeyRequest& in_request) = 0;
  virtual void RemoveKey(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::RemoveKeyReply>> response,
      const user_data_auth::RemoveKeyRequest& in_request) = 0;
  virtual void MassRemoveKeys(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::MassRemoveKeysReply>> response,
      const user_data_auth::MassRemoveKeysRequest& in_request) = 0;
  virtual void MigrateKey(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::MigrateKeyReply>> response,
      const user_data_auth::MigrateKeyRequest& in_request) = 0;
  virtual void StartFingerprintAuthSession(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::StartFingerprintAuthSessionReply>> response,
      const user_data_auth::StartFingerprintAuthSessionRequest& in_request) = 0;
  virtual void EndFingerprintAuthSession(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::EndFingerprintAuthSessionReply>> response,
      const user_data_auth::EndFingerprintAuthSessionRequest& in_request) = 0;
  virtual void GetWebAuthnSecret(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::GetWebAuthnSecretReply>> response,
      const user_data_auth::GetWebAuthnSecretRequest& in_request) = 0;
  virtual void GetWebAuthnSecretHash(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::GetWebAuthnSecretHashReply>> response,
      const user_data_auth::GetWebAuthnSecretHashRequest& in_request) = 0;
  virtual void GetHibernateSecret(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::GetHibernateSecretReply>> response,
      const user_data_auth::GetHibernateSecretRequest& in_request) = 0;
  virtual void StartMigrateToDircrypto(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::StartMigrateToDircryptoReply>> response,
      const user_data_auth::StartMigrateToDircryptoRequest& in_request) = 0;
  virtual void NeedsDircryptoMigration(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::NeedsDircryptoMigrationReply>> response,
      const user_data_auth::NeedsDircryptoMigrationRequest& in_request) = 0;
  virtual void GetSupportedKeyPolicies(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::GetSupportedKeyPoliciesReply>> response,
      const user_data_auth::GetSupportedKeyPoliciesRequest& in_request) = 0;
  virtual void GetAccountDiskUsage(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::GetAccountDiskUsageReply>> response,
      const user_data_auth::GetAccountDiskUsageRequest& in_request) = 0;
  virtual void StartAuthSession(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::StartAuthSessionReply>> response,
      const user_data_auth::StartAuthSessionRequest& in_request) = 0;
  virtual void AddCredentials(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::AddCredentialsReply>> response,
      const user_data_auth::AddCredentialsRequest& in_request) = 0;
  virtual void UpdateCredential(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::UpdateCredentialReply>> response,
      const user_data_auth::UpdateCredentialRequest& in_request) = 0;
  virtual void AuthenticateAuthSession(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::AuthenticateAuthSessionReply>> response,
      const user_data_auth::AuthenticateAuthSessionRequest& in_request) = 0;
  virtual void InvalidateAuthSession(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::InvalidateAuthSessionReply>> response,
      const user_data_auth::InvalidateAuthSessionRequest& in_request) = 0;
  virtual void ExtendAuthSession(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::ExtendAuthSessionReply>> response,
      const user_data_auth::ExtendAuthSessionRequest& in_request) = 0;
  virtual void GetAuthSessionStatus(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::GetAuthSessionStatusReply>> response,
      const user_data_auth::GetAuthSessionStatusRequest& in_request) = 0;
  virtual void CreatePersistentUser(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::CreatePersistentUserReply>> response,
      const user_data_auth::CreatePersistentUserRequest& in_request) = 0;
  virtual void AuthenticateAuthFactor(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::AuthenticateAuthFactorReply>> response,
      const user_data_auth::AuthenticateAuthFactorRequest& in_request) = 0;
  virtual void PrepareGuestVault(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::PrepareGuestVaultReply>> response,
      const user_data_auth::PrepareGuestVaultRequest& in_request) = 0;
  virtual void PrepareEphemeralVault(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::PrepareEphemeralVaultReply>> response,
      const user_data_auth::PrepareEphemeralVaultRequest& in_request) = 0;
  virtual void PreparePersistentVault(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::PreparePersistentVaultReply>> response,
      const user_data_auth::PreparePersistentVaultRequest& in_request) = 0;
  virtual void PrepareVaultForMigration(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::PrepareVaultForMigrationReply>> response,
      const user_data_auth::PrepareVaultForMigrationRequest& in_request) = 0;
  virtual void AddAuthFactor(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::AddAuthFactorReply>> response,
      const user_data_auth::AddAuthFactorRequest& in_request) = 0;
  virtual void UpdateAuthFactor(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::UpdateAuthFactorReply>> response,
      const user_data_auth::UpdateAuthFactorRequest& in_request) = 0;
  virtual void RemoveAuthFactor(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::RemoveAuthFactorReply>> response,
      const user_data_auth::RemoveAuthFactorRequest& in_request) = 0;
  virtual void ListAuthFactors(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::ListAuthFactorsReply>> response,
      const user_data_auth::ListAuthFactorsRequest& in_request) = 0;
  virtual void GetRecoveryRequest(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::GetRecoveryRequestReply>> response,
      const user_data_auth::GetRecoveryRequestRequest& in_request) = 0;
};

// Interface adaptor for org::chromium::UserDataAuthInterface.
class UserDataAuthInterfaceAdaptor {
 public:
  UserDataAuthInterfaceAdaptor(UserDataAuthInterfaceInterface* interface) : interface_(interface) {}
  UserDataAuthInterfaceAdaptor(const UserDataAuthInterfaceAdaptor&) = delete;
  UserDataAuthInterfaceAdaptor& operator=(const UserDataAuthInterfaceAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.UserDataAuthInterface");

    itf->AddMethodHandler(
        "IsMounted",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::IsMounted);
    itf->AddMethodHandler(
        "Unmount",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::Unmount);
    itf->AddMethodHandler(
        "Mount",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::Mount);
    itf->AddMethodHandler(
        "Remove",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::Remove);
    itf->AddMethodHandler(
        "ListKeys",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::ListKeys);
    itf->AddMethodHandler(
        "GetKeyData",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::GetKeyData);
    itf->AddMethodHandler(
        "CheckKey",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::CheckKey);
    itf->AddMethodHandler(
        "AddKey",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::AddKey);
    itf->AddMethodHandler(
        "RemoveKey",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::RemoveKey);
    itf->AddMethodHandler(
        "MassRemoveKeys",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::MassRemoveKeys);
    itf->AddMethodHandler(
        "MigrateKey",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::MigrateKey);
    itf->AddMethodHandler(
        "StartFingerprintAuthSession",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::StartFingerprintAuthSession);
    itf->AddMethodHandler(
        "EndFingerprintAuthSession",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::EndFingerprintAuthSession);
    itf->AddMethodHandler(
        "GetWebAuthnSecret",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::GetWebAuthnSecret);
    itf->AddMethodHandler(
        "GetWebAuthnSecretHash",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::GetWebAuthnSecretHash);
    itf->AddMethodHandler(
        "GetHibernateSecret",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::GetHibernateSecret);
    itf->AddMethodHandler(
        "StartMigrateToDircrypto",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::StartMigrateToDircrypto);
    itf->AddMethodHandler(
        "NeedsDircryptoMigration",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::NeedsDircryptoMigration);
    itf->AddMethodHandler(
        "GetSupportedKeyPolicies",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::GetSupportedKeyPolicies);
    itf->AddMethodHandler(
        "GetAccountDiskUsage",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::GetAccountDiskUsage);
    itf->AddMethodHandler(
        "StartAuthSession",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::StartAuthSession);
    itf->AddMethodHandler(
        "AddCredentials",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::AddCredentials);
    itf->AddMethodHandler(
        "UpdateCredential",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::UpdateCredential);
    itf->AddMethodHandler(
        "AuthenticateAuthSession",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::AuthenticateAuthSession);
    itf->AddMethodHandler(
        "InvalidateAuthSession",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::InvalidateAuthSession);
    itf->AddMethodHandler(
        "ExtendAuthSession",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::ExtendAuthSession);
    itf->AddMethodHandler(
        "GetAuthSessionStatus",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::GetAuthSessionStatus);
    itf->AddMethodHandler(
        "CreatePersistentUser",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::CreatePersistentUser);
    itf->AddMethodHandler(
        "AuthenticateAuthFactor",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::AuthenticateAuthFactor);
    itf->AddMethodHandler(
        "PrepareGuestVault",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::PrepareGuestVault);
    itf->AddMethodHandler(
        "PrepareEphemeralVault",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::PrepareEphemeralVault);
    itf->AddMethodHandler(
        "PreparePersistentVault",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::PreparePersistentVault);
    itf->AddMethodHandler(
        "PrepareVaultForMigration",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::PrepareVaultForMigration);
    itf->AddMethodHandler(
        "AddAuthFactor",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::AddAuthFactor);
    itf->AddMethodHandler(
        "UpdateAuthFactor",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::UpdateAuthFactor);
    itf->AddMethodHandler(
        "RemoveAuthFactor",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::RemoveAuthFactor);
    itf->AddMethodHandler(
        "ListAuthFactors",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::ListAuthFactors);
    itf->AddMethodHandler(
        "GetRecoveryRequest",
        base::Unretained(interface_),
        &UserDataAuthInterfaceInterface::GetRecoveryRequest);

    signal_DircryptoMigrationProgress_ = itf->RegisterSignalOfType<SignalDircryptoMigrationProgressType>("DircryptoMigrationProgress");
    signal_LowDiskSpace_ = itf->RegisterSignalOfType<SignalLowDiskSpaceType>("LowDiskSpace");
  }

  void SendDircryptoMigrationProgressSignal(
      const user_data_auth::DircryptoMigrationProgress& in_status) {
    auto signal = signal_DircryptoMigrationProgress_.lock();
    if (signal)
      signal->Send(in_status);
  }
  void SendLowDiskSpaceSignal(
      const user_data_auth::LowDiskSpace& in_status) {
    auto signal = signal_LowDiskSpace_.lock();
    if (signal)
      signal->Send(in_status);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/UserDataAuth"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.UserDataAuthInterface\">\n"
        "    <method name=\"IsMounted\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"Unmount\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"Mount\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"Remove\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ListKeys\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetKeyData\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"CheckKey\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"AddKey\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"RemoveKey\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"MassRemoveKeys\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"MigrateKey\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"StartFingerprintAuthSession\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"EndFingerprintAuthSession\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetWebAuthnSecret\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetWebAuthnSecretHash\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetHibernateSecret\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"StartMigrateToDircrypto\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"NeedsDircryptoMigration\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetSupportedKeyPolicies\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetAccountDiskUsage\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"StartAuthSession\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"AddCredentials\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"UpdateCredential\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"AuthenticateAuthSession\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"InvalidateAuthSession\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ExtendAuthSession\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetAuthSessionStatus\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"CreatePersistentUser\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"AuthenticateAuthFactor\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"PrepareGuestVault\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"PrepareEphemeralVault\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"PreparePersistentVault\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"PrepareVaultForMigration\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"AddAuthFactor\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"UpdateAuthFactor\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"RemoveAuthFactor\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ListAuthFactors\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetRecoveryRequest\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <signal name=\"DircryptoMigrationProgress\">\n"
        "      <arg name=\"status\" type=\"ay\"/>\n"
        "    </signal>\n"
        "    <signal name=\"LowDiskSpace\">\n"
        "      <arg name=\"status\" type=\"ay\"/>\n"
        "    </signal>\n"
        "  </interface>\n";
  }

 private:
  using SignalDircryptoMigrationProgressType = brillo::dbus_utils::DBusSignal<
      user_data_auth::DircryptoMigrationProgress /*status*/>;
  std::weak_ptr<SignalDircryptoMigrationProgressType> signal_DircryptoMigrationProgress_;

  using SignalLowDiskSpaceType = brillo::dbus_utils::DBusSignal<
      user_data_auth::LowDiskSpace /*status*/>;
  std::weak_ptr<SignalLowDiskSpaceType> signal_LowDiskSpace_;

  UserDataAuthInterfaceInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface definition for org::chromium::ArcQuota.
class ArcQuotaInterface {
 public:
  virtual ~ArcQuotaInterface() = default;

  virtual void GetArcDiskFeatures(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::GetArcDiskFeaturesReply>> response,
      const user_data_auth::GetArcDiskFeaturesRequest& in_request) = 0;
  virtual void GetCurrentSpaceForArcUid(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::GetCurrentSpaceForArcUidReply>> response,
      const user_data_auth::GetCurrentSpaceForArcUidRequest& in_request) = 0;
  virtual void GetCurrentSpaceForArcGid(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::GetCurrentSpaceForArcGidReply>> response,
      const user_data_auth::GetCurrentSpaceForArcGidRequest& in_request) = 0;
  virtual void GetCurrentSpaceForArcProjectId(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::GetCurrentSpaceForArcProjectIdReply>> response,
      const user_data_auth::GetCurrentSpaceForArcProjectIdRequest& in_request) = 0;
  virtual void SetMediaRWDataFileProjectId(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::SetMediaRWDataFileProjectIdReply>> response,
      const base::ScopedFD& in_fd,
      const user_data_auth::SetMediaRWDataFileProjectIdRequest& in_request) = 0;
  virtual void SetMediaRWDataFileProjectInheritanceFlag(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::SetMediaRWDataFileProjectInheritanceFlagReply>> response,
      const base::ScopedFD& in_fd,
      const user_data_auth::SetMediaRWDataFileProjectInheritanceFlagRequest& in_request) = 0;
};

// Interface adaptor for org::chromium::ArcQuota.
class ArcQuotaAdaptor {
 public:
  ArcQuotaAdaptor(ArcQuotaInterface* interface) : interface_(interface) {}
  ArcQuotaAdaptor(const ArcQuotaAdaptor&) = delete;
  ArcQuotaAdaptor& operator=(const ArcQuotaAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.ArcQuota");

    itf->AddMethodHandler(
        "GetArcDiskFeatures",
        base::Unretained(interface_),
        &ArcQuotaInterface::GetArcDiskFeatures);
    itf->AddMethodHandler(
        "GetCurrentSpaceForArcUid",
        base::Unretained(interface_),
        &ArcQuotaInterface::GetCurrentSpaceForArcUid);
    itf->AddMethodHandler(
        "GetCurrentSpaceForArcGid",
        base::Unretained(interface_),
        &ArcQuotaInterface::GetCurrentSpaceForArcGid);
    itf->AddMethodHandler(
        "GetCurrentSpaceForArcProjectId",
        base::Unretained(interface_),
        &ArcQuotaInterface::GetCurrentSpaceForArcProjectId);
    itf->AddMethodHandler(
        "SetMediaRWDataFileProjectId",
        base::Unretained(interface_),
        &ArcQuotaInterface::SetMediaRWDataFileProjectId);
    itf->AddMethodHandler(
        "SetMediaRWDataFileProjectInheritanceFlag",
        base::Unretained(interface_),
        &ArcQuotaInterface::SetMediaRWDataFileProjectInheritanceFlag);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/UserDataAuth"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.ArcQuota\">\n"
        "    <method name=\"GetArcDiskFeatures\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetCurrentSpaceForArcUid\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetCurrentSpaceForArcGid\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetCurrentSpaceForArcProjectId\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SetMediaRWDataFileProjectId\">\n"
        "      <arg name=\"fd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SetMediaRWDataFileProjectInheritanceFlag\">\n"
        "      <arg name=\"fd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "  </interface>\n";
  }

 private:
  ArcQuotaInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface definition for org::chromium::CryptohomePkcs11Interface.
class CryptohomePkcs11InterfaceInterface {
 public:
  virtual ~CryptohomePkcs11InterfaceInterface() = default;

  virtual void Pkcs11IsTpmTokenReady(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::Pkcs11IsTpmTokenReadyReply>> response,
      const user_data_auth::Pkcs11IsTpmTokenReadyRequest& in_request) = 0;
  virtual void Pkcs11GetTpmTokenInfo(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::Pkcs11GetTpmTokenInfoReply>> response,
      const user_data_auth::Pkcs11GetTpmTokenInfoRequest& in_request) = 0;
  virtual void Pkcs11Terminate(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::Pkcs11TerminateReply>> response,
      const user_data_auth::Pkcs11TerminateRequest& in_request) = 0;
  virtual void Pkcs11RestoreTpmTokens(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::Pkcs11RestoreTpmTokensReply>> response,
      const user_data_auth::Pkcs11RestoreTpmTokensRequest& in_request) = 0;
};

// Interface adaptor for org::chromium::CryptohomePkcs11Interface.
class CryptohomePkcs11InterfaceAdaptor {
 public:
  CryptohomePkcs11InterfaceAdaptor(CryptohomePkcs11InterfaceInterface* interface) : interface_(interface) {}
  CryptohomePkcs11InterfaceAdaptor(const CryptohomePkcs11InterfaceAdaptor&) = delete;
  CryptohomePkcs11InterfaceAdaptor& operator=(const CryptohomePkcs11InterfaceAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.CryptohomePkcs11Interface");

    itf->AddMethodHandler(
        "Pkcs11IsTpmTokenReady",
        base::Unretained(interface_),
        &CryptohomePkcs11InterfaceInterface::Pkcs11IsTpmTokenReady);
    itf->AddMethodHandler(
        "Pkcs11GetTpmTokenInfo",
        base::Unretained(interface_),
        &CryptohomePkcs11InterfaceInterface::Pkcs11GetTpmTokenInfo);
    itf->AddMethodHandler(
        "Pkcs11Terminate",
        base::Unretained(interface_),
        &CryptohomePkcs11InterfaceInterface::Pkcs11Terminate);
    itf->AddMethodHandler(
        "Pkcs11RestoreTpmTokens",
        base::Unretained(interface_),
        &CryptohomePkcs11InterfaceInterface::Pkcs11RestoreTpmTokens);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/UserDataAuth"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.CryptohomePkcs11Interface\">\n"
        "    <method name=\"Pkcs11IsTpmTokenReady\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"Pkcs11GetTpmTokenInfo\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"Pkcs11Terminate\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"Pkcs11RestoreTpmTokens\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "  </interface>\n";
  }

 private:
  CryptohomePkcs11InterfaceInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface definition for org::chromium::InstallAttributesInterface.
class InstallAttributesInterfaceInterface {
 public:
  virtual ~InstallAttributesInterfaceInterface() = default;

  virtual void InstallAttributesGet(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::InstallAttributesGetReply>> response,
      const user_data_auth::InstallAttributesGetRequest& in_request) = 0;
  virtual void InstallAttributesSet(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::InstallAttributesSetReply>> response,
      const user_data_auth::InstallAttributesSetRequest& in_request) = 0;
  virtual void InstallAttributesFinalize(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::InstallAttributesFinalizeReply>> response,
      const user_data_auth::InstallAttributesFinalizeRequest& in_request) = 0;
  virtual void InstallAttributesGetStatus(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::InstallAttributesGetStatusReply>> response,
      const user_data_auth::InstallAttributesGetStatusRequest& in_request) = 0;
  virtual void GetFirmwareManagementParameters(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::GetFirmwareManagementParametersReply>> response,
      const user_data_auth::GetFirmwareManagementParametersRequest& in_request) = 0;
  virtual void RemoveFirmwareManagementParameters(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::RemoveFirmwareManagementParametersReply>> response,
      const user_data_auth::RemoveFirmwareManagementParametersRequest& in_request) = 0;
  virtual void SetFirmwareManagementParameters(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::SetFirmwareManagementParametersReply>> response,
      const user_data_auth::SetFirmwareManagementParametersRequest& in_request) = 0;
};

// Interface adaptor for org::chromium::InstallAttributesInterface.
class InstallAttributesInterfaceAdaptor {
 public:
  InstallAttributesInterfaceAdaptor(InstallAttributesInterfaceInterface* interface) : interface_(interface) {}
  InstallAttributesInterfaceAdaptor(const InstallAttributesInterfaceAdaptor&) = delete;
  InstallAttributesInterfaceAdaptor& operator=(const InstallAttributesInterfaceAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.InstallAttributesInterface");

    itf->AddMethodHandler(
        "InstallAttributesGet",
        base::Unretained(interface_),
        &InstallAttributesInterfaceInterface::InstallAttributesGet);
    itf->AddMethodHandler(
        "InstallAttributesSet",
        base::Unretained(interface_),
        &InstallAttributesInterfaceInterface::InstallAttributesSet);
    itf->AddMethodHandler(
        "InstallAttributesFinalize",
        base::Unretained(interface_),
        &InstallAttributesInterfaceInterface::InstallAttributesFinalize);
    itf->AddMethodHandler(
        "InstallAttributesGetStatus",
        base::Unretained(interface_),
        &InstallAttributesInterfaceInterface::InstallAttributesGetStatus);
    itf->AddMethodHandler(
        "GetFirmwareManagementParameters",
        base::Unretained(interface_),
        &InstallAttributesInterfaceInterface::GetFirmwareManagementParameters);
    itf->AddMethodHandler(
        "RemoveFirmwareManagementParameters",
        base::Unretained(interface_),
        &InstallAttributesInterfaceInterface::RemoveFirmwareManagementParameters);
    itf->AddMethodHandler(
        "SetFirmwareManagementParameters",
        base::Unretained(interface_),
        &InstallAttributesInterfaceInterface::SetFirmwareManagementParameters);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/UserDataAuth"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.InstallAttributesInterface\">\n"
        "    <method name=\"InstallAttributesGet\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"InstallAttributesSet\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"InstallAttributesFinalize\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"InstallAttributesGetStatus\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetFirmwareManagementParameters\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"RemoveFirmwareManagementParameters\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SetFirmwareManagementParameters\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "  </interface>\n";
  }

 private:
  InstallAttributesInterfaceInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface definition for org::chromium::CryptohomeMiscInterface.
class CryptohomeMiscInterfaceInterface {
 public:
  virtual ~CryptohomeMiscInterfaceInterface() = default;

  virtual void GetSystemSalt(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::GetSystemSaltReply>> response,
      const user_data_auth::GetSystemSaltRequest& in_request) = 0;
  virtual void UpdateCurrentUserActivityTimestamp(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::UpdateCurrentUserActivityTimestampReply>> response,
      const user_data_auth::UpdateCurrentUserActivityTimestampRequest& in_request) = 0;
  virtual void GetSanitizedUsername(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::GetSanitizedUsernameReply>> response,
      const user_data_auth::GetSanitizedUsernameRequest& in_request) = 0;
  virtual void GetLoginStatus(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::GetLoginStatusReply>> response,
      const user_data_auth::GetLoginStatusRequest& in_request) = 0;
  virtual void GetStatusString(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::GetStatusStringReply>> response,
      const user_data_auth::GetStatusStringRequest& in_request) = 0;
  virtual void LockToSingleUserMountUntilReboot(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::LockToSingleUserMountUntilRebootReply>> response,
      const user_data_auth::LockToSingleUserMountUntilRebootRequest& in_request) = 0;
  virtual void GetRsuDeviceId(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::GetRsuDeviceIdReply>> response,
      const user_data_auth::GetRsuDeviceIdRequest& in_request) = 0;
  virtual void CheckHealth(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<user_data_auth::CheckHealthReply>> response,
      const user_data_auth::CheckHealthRequest& in_request) = 0;
};

// Interface adaptor for org::chromium::CryptohomeMiscInterface.
class CryptohomeMiscInterfaceAdaptor {
 public:
  CryptohomeMiscInterfaceAdaptor(CryptohomeMiscInterfaceInterface* interface) : interface_(interface) {}
  CryptohomeMiscInterfaceAdaptor(const CryptohomeMiscInterfaceAdaptor&) = delete;
  CryptohomeMiscInterfaceAdaptor& operator=(const CryptohomeMiscInterfaceAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.CryptohomeMiscInterface");

    itf->AddMethodHandler(
        "GetSystemSalt",
        base::Unretained(interface_),
        &CryptohomeMiscInterfaceInterface::GetSystemSalt);
    itf->AddMethodHandler(
        "UpdateCurrentUserActivityTimestamp",
        base::Unretained(interface_),
        &CryptohomeMiscInterfaceInterface::UpdateCurrentUserActivityTimestamp);
    itf->AddMethodHandler(
        "GetSanitizedUsername",
        base::Unretained(interface_),
        &CryptohomeMiscInterfaceInterface::GetSanitizedUsername);
    itf->AddMethodHandler(
        "GetLoginStatus",
        base::Unretained(interface_),
        &CryptohomeMiscInterfaceInterface::GetLoginStatus);
    itf->AddMethodHandler(
        "GetStatusString",
        base::Unretained(interface_),
        &CryptohomeMiscInterfaceInterface::GetStatusString);
    itf->AddMethodHandler(
        "LockToSingleUserMountUntilReboot",
        base::Unretained(interface_),
        &CryptohomeMiscInterfaceInterface::LockToSingleUserMountUntilReboot);
    itf->AddMethodHandler(
        "GetRsuDeviceId",
        base::Unretained(interface_),
        &CryptohomeMiscInterfaceInterface::GetRsuDeviceId);
    itf->AddMethodHandler(
        "CheckHealth",
        base::Unretained(interface_),
        &CryptohomeMiscInterfaceInterface::CheckHealth);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/UserDataAuth"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.CryptohomeMiscInterface\">\n"
        "    <method name=\"GetSystemSalt\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"UpdateCurrentUserActivityTimestamp\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetSanitizedUsername\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetLoginStatus\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetStatusString\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"LockToSingleUserMountUntilReboot\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetRsuDeviceId\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"CheckHealth\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "  </interface>\n";
  }

 private:
  CryptohomeMiscInterfaceInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CRYPTOHOME_DEV_UTILS_OUT_DEFAULT_GEN_INCLUDE_DBUS_ADAPTORS_ORG_CHROMIUM_USERDATAAUTH_H
