// Automatic generation of D-Bus interfaces:
//  - org.chromium.SessionManagerInterface
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SESSION_MANAGER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_SESSION_MANAGER_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SESSION_MANAGER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_SESSION_MANAGER_DBUS_PROXIES_H
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

// Abstract interface proxy for org::chromium::SessionManagerInterface.
class SessionManagerInterfaceProxyInterface {
 public:
  virtual ~SessionManagerInterfaceProxyInterface() = default;

  virtual bool EmitLoginPromptVisible(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void EmitLoginPromptVisibleAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool EmitAshInitialized(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void EmitAshInitializedAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool EnableChromeTesting(
      bool in_force_relaunch,
      const std::vector<std::string>& in_extra_arguments,
      const std::vector<std::string>& in_extra_environment_variables,
      std::string* out_filepath,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void EnableChromeTestingAsync(
      bool in_force_relaunch,
      const std::vector<std::string>& in_extra_arguments,
      const std::vector<std::string>& in_extra_environment_variables,
      base::OnceCallback<void(const std::string& /*filepath*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SaveLoginPassword(
      const brillo::dbus_utils::FileDescriptor& in_password_fd,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SaveLoginPasswordAsync(
      const brillo::dbus_utils::FileDescriptor& in_password_fd,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool LoginScreenStorageStore(
      const std::string& in_key,
      const std::vector<uint8_t>& in_metadata,
      uint64_t in_value_size,
      const brillo::dbus_utils::FileDescriptor& in_value_fd,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void LoginScreenStorageStoreAsync(
      const std::string& in_key,
      const std::vector<uint8_t>& in_metadata,
      uint64_t in_value_size,
      const brillo::dbus_utils::FileDescriptor& in_value_fd,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool LoginScreenStorageRetrieve(
      const std::string& in_key,
      uint64_t* out_value_size,
      base::ScopedFD* out_value_fd,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void LoginScreenStorageRetrieveAsync(
      const std::string& in_key,
      base::OnceCallback<void(uint64_t /*value_size*/, const base::ScopedFD& /*value_fd*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool LoginScreenStorageListKeys(
      std::vector<std::string>* out_keys,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void LoginScreenStorageListKeysAsync(
      base::OnceCallback<void(const std::vector<std::string>& /*keys*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool LoginScreenStorageDelete(
      const std::string& in_key,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void LoginScreenStorageDeleteAsync(
      const std::string& in_key,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StartSession(
      const std::string& in_account_id,
      const std::string& in_unique_identifier,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StartSessionAsync(
      const std::string& in_account_id,
      const std::string& in_unique_identifier,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StopSession(
      const std::string& in_unique_identifier,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StopSessionAsync(
      const std::string& in_unique_identifier,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StopSessionWithReason(
      uint32_t in_reason,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StopSessionWithReasonAsync(
      uint32_t in_reason,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool LoadShillProfile(
      const std::string& in_account_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void LoadShillProfileAsync(
      const std::string& in_account_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StorePolicyEx(
      const std::vector<uint8_t>& in_descriptor_blob,
      const std::vector<uint8_t>& in_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StorePolicyExAsync(
      const std::vector<uint8_t>& in_descriptor_blob,
      const std::vector<uint8_t>& in_policy_blob,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StoreUnsignedPolicyEx(
      const std::vector<uint8_t>& in_descriptor_blob,
      const std::vector<uint8_t>& in_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StoreUnsignedPolicyExAsync(
      const std::vector<uint8_t>& in_descriptor_blob,
      const std::vector<uint8_t>& in_policy_blob,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ListStoredComponentPolicies(
      const std::vector<uint8_t>& in_descriptor_blob,
      std::vector<std::string>* out_component_ids,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ListStoredComponentPoliciesAsync(
      const std::vector<uint8_t>& in_descriptor_blob,
      base::OnceCallback<void(const std::vector<std::string>& /*component_ids*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RetrievePolicyEx(
      const std::vector<uint8_t>& in_descriptor_blob,
      std::vector<uint8_t>* out_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RetrievePolicyExAsync(
      const std::vector<uint8_t>& in_descriptor_blob,
      base::OnceCallback<void(const std::vector<uint8_t>& /*policy_blob*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RetrieveSessionState(
      std::string* out_state,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RetrieveSessionStateAsync(
      base::OnceCallback<void(const std::string& /*state*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RetrieveActiveSessions(
      std::map<std::string, std::string>* out_sessions,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RetrieveActiveSessionsAsync(
      base::OnceCallback<void(const std::map<std::string, std::string>& /*sessions*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RetrievePrimarySession(
      std::string* out_username,
      std::string* out_sanitized_username,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RetrievePrimarySessionAsync(
      base::OnceCallback<void(const std::string& /*username*/, const std::string& /*sanitized_username*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool IsGuestSessionActive(
      bool* out_is_guest,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void IsGuestSessionActiveAsync(
      base::OnceCallback<void(bool /*is_guest*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool HandleSupervisedUserCreationStarting(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void HandleSupervisedUserCreationStartingAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool HandleSupervisedUserCreationFinished(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void HandleSupervisedUserCreationFinishedAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool LockScreen(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void LockScreenAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool HandleLockScreenShown(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void HandleLockScreenShownAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool HandleLockScreenDismissed(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void HandleLockScreenDismissedAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool IsScreenLocked(
      bool* out_screen_locked,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void IsScreenLockedAsync(
      base::OnceCallback<void(bool /*screen_locked*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RestartJob(
      const brillo::dbus_utils::FileDescriptor& in_cred_fd,
      const std::vector<std::string>& in_argv,
      uint32_t in_mode,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RestartJobAsync(
      const brillo::dbus_utils::FileDescriptor& in_cred_fd,
      const std::vector<std::string>& in_argv,
      uint32_t in_mode,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StartDeviceWipe(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StartDeviceWipeAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StartRemoteDeviceWipe(
      const std::vector<uint8_t>& in_signed_command,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StartRemoteDeviceWipeAsync(
      const std::vector<uint8_t>& in_signed_command,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ClearForcedReEnrollmentVpd(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ClearForcedReEnrollmentVpdAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StartTPMFirmwareUpdate(
      const std::string& in_update_mode,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StartTPMFirmwareUpdateAsync(
      const std::string& in_update_mode,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetFlagsForUser(
      const std::string& in_account_id,
      const std::vector<std::string>& in_flags,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetFlagsForUserAsync(
      const std::string& in_account_id,
      const std::vector<std::string>& in_flags,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetFeatureFlagsForUser(
      const std::string& in_account_id,
      const std::vector<std::string>& in_feature_flags,
      const std::map<std::string, std::string>& in_origin_list_flags,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetFeatureFlagsForUserAsync(
      const std::string& in_account_id,
      const std::vector<std::string>& in_feature_flags,
      const std::map<std::string, std::string>& in_origin_list_flags,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetServerBackedStateKeys(
      std::vector<std::vector<uint8_t>>* out_state_keys,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetServerBackedStateKeysAsync(
      base::OnceCallback<void(const std::vector<std::vector<uint8_t>>& /*state_keys*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetPsmDeviceActiveSecret(
      std::string* out_derived_secret,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetPsmDeviceActiveSecretAsync(
      base::OnceCallback<void(const std::string& /*derived_secret*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool InitMachineInfo(
      const std::string& in_data,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void InitMachineInfoAsync(
      const std::string& in_data,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StartArcMiniContainer(
      const std::vector<uint8_t>& in_request,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StartArcMiniContainerAsync(
      const std::vector<uint8_t>& in_request,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool UpgradeArcContainer(
      const std::vector<uint8_t>& in_request,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void UpgradeArcContainerAsync(
      const std::vector<uint8_t>& in_request,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StopArcInstance(
      const std::string& in_account_id,
      bool in_should_backup_log,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StopArcInstanceAsync(
      const std::string& in_account_id,
      bool in_should_backup_log,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetArcCpuRestriction(
      uint32_t in_restriction_state,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetArcCpuRestrictionAsync(
      uint32_t in_restriction_state,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool EmitArcBooted(
      const std::string& in_account_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void EmitArcBootedAsync(
      const std::string& in_account_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetArcStartTimeTicks(
      int64_t* out_start_time,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetArcStartTimeTicksAsync(
      base::OnceCallback<void(int64_t /*start_time*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool EnableAdbSideload(
      bool* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void EnableAdbSideloadAsync(
      base::OnceCallback<void(bool /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool QueryAdbSideload(
      bool* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void QueryAdbSideloadAsync(
      base::OnceCallback<void(bool /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StartBrowserDataMigration(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StartBrowserDataMigrationAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterLoginPromptVisibleSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterSessionStateChangedSignalHandler(
      const base::RepeatingCallback<void(const std::string&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterSetOwnerKeyCompleteSignalHandler(
      const base::RepeatingCallback<void(const std::string&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterPropertyChangeCompleteSignalHandler(
      const base::RepeatingCallback<void(const std::string&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterScreenIsLockedSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterScreenIsUnlockedSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterArcInstanceStoppedSignalHandler(
      const base::RepeatingCallback<void(uint32_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::SessionManagerInterface.
class SessionManagerInterfaceProxy final : public SessionManagerInterfaceProxyInterface {
 public:
  SessionManagerInterfaceProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  SessionManagerInterfaceProxy(const SessionManagerInterfaceProxy&) = delete;
  SessionManagerInterfaceProxy& operator=(const SessionManagerInterfaceProxy&) = delete;

  ~SessionManagerInterfaceProxy() override {
  }

  void RegisterLoginPromptVisibleSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "LoginPromptVisible",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterSessionStateChangedSignalHandler(
      const base::RepeatingCallback<void(const std::string&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "SessionStateChanged",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterSetOwnerKeyCompleteSignalHandler(
      const base::RepeatingCallback<void(const std::string&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "SetOwnerKeyComplete",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterPropertyChangeCompleteSignalHandler(
      const base::RepeatingCallback<void(const std::string&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "PropertyChangeComplete",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterScreenIsLockedSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "ScreenIsLocked",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterScreenIsUnlockedSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "ScreenIsUnlocked",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterArcInstanceStoppedSignalHandler(
      const base::RepeatingCallback<void(uint32_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "ArcInstanceStopped",
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

  bool EmitLoginPromptVisible(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "EmitLoginPromptVisible",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void EmitLoginPromptVisibleAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "EmitLoginPromptVisible",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool EmitAshInitialized(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "EmitAshInitialized",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void EmitAshInitializedAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "EmitAshInitialized",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool EnableChromeTesting(
      bool in_force_relaunch,
      const std::vector<std::string>& in_extra_arguments,
      const std::vector<std::string>& in_extra_environment_variables,
      std::string* out_filepath,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "EnableChromeTesting",
        error,
        in_force_relaunch,
        in_extra_arguments,
        in_extra_environment_variables);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_filepath);
  }

  void EnableChromeTestingAsync(
      bool in_force_relaunch,
      const std::vector<std::string>& in_extra_arguments,
      const std::vector<std::string>& in_extra_environment_variables,
      base::OnceCallback<void(const std::string& /*filepath*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "EnableChromeTesting",
        std::move(success_callback),
        std::move(error_callback),
        in_force_relaunch,
        in_extra_arguments,
        in_extra_environment_variables);
  }

  bool SaveLoginPassword(
      const brillo::dbus_utils::FileDescriptor& in_password_fd,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "SaveLoginPassword",
        error,
        in_password_fd);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SaveLoginPasswordAsync(
      const brillo::dbus_utils::FileDescriptor& in_password_fd,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "SaveLoginPassword",
        std::move(success_callback),
        std::move(error_callback),
        in_password_fd);
  }

  bool LoginScreenStorageStore(
      const std::string& in_key,
      const std::vector<uint8_t>& in_metadata,
      uint64_t in_value_size,
      const brillo::dbus_utils::FileDescriptor& in_value_fd,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "LoginScreenStorageStore",
        error,
        in_key,
        in_metadata,
        in_value_size,
        in_value_fd);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void LoginScreenStorageStoreAsync(
      const std::string& in_key,
      const std::vector<uint8_t>& in_metadata,
      uint64_t in_value_size,
      const brillo::dbus_utils::FileDescriptor& in_value_fd,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "LoginScreenStorageStore",
        std::move(success_callback),
        std::move(error_callback),
        in_key,
        in_metadata,
        in_value_size,
        in_value_fd);
  }

  bool LoginScreenStorageRetrieve(
      const std::string& in_key,
      uint64_t* out_value_size,
      base::ScopedFD* out_value_fd,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "LoginScreenStorageRetrieve",
        error,
        in_key);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_value_size, out_value_fd);
  }

  void LoginScreenStorageRetrieveAsync(
      const std::string& in_key,
      base::OnceCallback<void(uint64_t /*value_size*/, const base::ScopedFD& /*value_fd*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "LoginScreenStorageRetrieve",
        std::move(success_callback),
        std::move(error_callback),
        in_key);
  }

  bool LoginScreenStorageListKeys(
      std::vector<std::string>* out_keys,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "LoginScreenStorageListKeys",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_keys);
  }

  void LoginScreenStorageListKeysAsync(
      base::OnceCallback<void(const std::vector<std::string>& /*keys*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "LoginScreenStorageListKeys",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool LoginScreenStorageDelete(
      const std::string& in_key,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "LoginScreenStorageDelete",
        error,
        in_key);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void LoginScreenStorageDeleteAsync(
      const std::string& in_key,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "LoginScreenStorageDelete",
        std::move(success_callback),
        std::move(error_callback),
        in_key);
  }

  bool StartSession(
      const std::string& in_account_id,
      const std::string& in_unique_identifier,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StartSession",
        error,
        in_account_id,
        in_unique_identifier);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void StartSessionAsync(
      const std::string& in_account_id,
      const std::string& in_unique_identifier,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StartSession",
        std::move(success_callback),
        std::move(error_callback),
        in_account_id,
        in_unique_identifier);
  }

  bool StopSession(
      const std::string& in_unique_identifier,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StopSession",
        error,
        in_unique_identifier);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void StopSessionAsync(
      const std::string& in_unique_identifier,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StopSession",
        std::move(success_callback),
        std::move(error_callback),
        in_unique_identifier);
  }

  bool StopSessionWithReason(
      uint32_t in_reason,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StopSessionWithReason",
        error,
        in_reason);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void StopSessionWithReasonAsync(
      uint32_t in_reason,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StopSessionWithReason",
        std::move(success_callback),
        std::move(error_callback),
        in_reason);
  }

  bool LoadShillProfile(
      const std::string& in_account_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "LoadShillProfile",
        error,
        in_account_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void LoadShillProfileAsync(
      const std::string& in_account_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "LoadShillProfile",
        std::move(success_callback),
        std::move(error_callback),
        in_account_id);
  }

  bool StorePolicyEx(
      const std::vector<uint8_t>& in_descriptor_blob,
      const std::vector<uint8_t>& in_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StorePolicyEx",
        error,
        in_descriptor_blob,
        in_policy_blob);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void StorePolicyExAsync(
      const std::vector<uint8_t>& in_descriptor_blob,
      const std::vector<uint8_t>& in_policy_blob,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StorePolicyEx",
        std::move(success_callback),
        std::move(error_callback),
        in_descriptor_blob,
        in_policy_blob);
  }

  bool StoreUnsignedPolicyEx(
      const std::vector<uint8_t>& in_descriptor_blob,
      const std::vector<uint8_t>& in_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StoreUnsignedPolicyEx",
        error,
        in_descriptor_blob,
        in_policy_blob);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void StoreUnsignedPolicyExAsync(
      const std::vector<uint8_t>& in_descriptor_blob,
      const std::vector<uint8_t>& in_policy_blob,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StoreUnsignedPolicyEx",
        std::move(success_callback),
        std::move(error_callback),
        in_descriptor_blob,
        in_policy_blob);
  }

  bool ListStoredComponentPolicies(
      const std::vector<uint8_t>& in_descriptor_blob,
      std::vector<std::string>* out_component_ids,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "ListStoredComponentPolicies",
        error,
        in_descriptor_blob);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_component_ids);
  }

  void ListStoredComponentPoliciesAsync(
      const std::vector<uint8_t>& in_descriptor_blob,
      base::OnceCallback<void(const std::vector<std::string>& /*component_ids*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "ListStoredComponentPolicies",
        std::move(success_callback),
        std::move(error_callback),
        in_descriptor_blob);
  }

  bool RetrievePolicyEx(
      const std::vector<uint8_t>& in_descriptor_blob,
      std::vector<uint8_t>* out_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RetrievePolicyEx",
        error,
        in_descriptor_blob);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_policy_blob);
  }

  void RetrievePolicyExAsync(
      const std::vector<uint8_t>& in_descriptor_blob,
      base::OnceCallback<void(const std::vector<uint8_t>& /*policy_blob*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RetrievePolicyEx",
        std::move(success_callback),
        std::move(error_callback),
        in_descriptor_blob);
  }

  bool RetrieveSessionState(
      std::string* out_state,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RetrieveSessionState",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_state);
  }

  void RetrieveSessionStateAsync(
      base::OnceCallback<void(const std::string& /*state*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RetrieveSessionState",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool RetrieveActiveSessions(
      std::map<std::string, std::string>* out_sessions,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RetrieveActiveSessions",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_sessions);
  }

  void RetrieveActiveSessionsAsync(
      base::OnceCallback<void(const std::map<std::string, std::string>& /*sessions*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RetrieveActiveSessions",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool RetrievePrimarySession(
      std::string* out_username,
      std::string* out_sanitized_username,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RetrievePrimarySession",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_username, out_sanitized_username);
  }

  void RetrievePrimarySessionAsync(
      base::OnceCallback<void(const std::string& /*username*/, const std::string& /*sanitized_username*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RetrievePrimarySession",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool IsGuestSessionActive(
      bool* out_is_guest,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "IsGuestSessionActive",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_is_guest);
  }

  void IsGuestSessionActiveAsync(
      base::OnceCallback<void(bool /*is_guest*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "IsGuestSessionActive",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool HandleSupervisedUserCreationStarting(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "HandleSupervisedUserCreationStarting",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void HandleSupervisedUserCreationStartingAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "HandleSupervisedUserCreationStarting",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool HandleSupervisedUserCreationFinished(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "HandleSupervisedUserCreationFinished",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void HandleSupervisedUserCreationFinishedAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "HandleSupervisedUserCreationFinished",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool LockScreen(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "LockScreen",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void LockScreenAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "LockScreen",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool HandleLockScreenShown(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "HandleLockScreenShown",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void HandleLockScreenShownAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "HandleLockScreenShown",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool HandleLockScreenDismissed(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "HandleLockScreenDismissed",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void HandleLockScreenDismissedAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "HandleLockScreenDismissed",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool IsScreenLocked(
      bool* out_screen_locked,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "IsScreenLocked",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_screen_locked);
  }

  void IsScreenLockedAsync(
      base::OnceCallback<void(bool /*screen_locked*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "IsScreenLocked",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool RestartJob(
      const brillo::dbus_utils::FileDescriptor& in_cred_fd,
      const std::vector<std::string>& in_argv,
      uint32_t in_mode,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RestartJob",
        error,
        in_cred_fd,
        in_argv,
        in_mode);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RestartJobAsync(
      const brillo::dbus_utils::FileDescriptor& in_cred_fd,
      const std::vector<std::string>& in_argv,
      uint32_t in_mode,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RestartJob",
        std::move(success_callback),
        std::move(error_callback),
        in_cred_fd,
        in_argv,
        in_mode);
  }

  bool StartDeviceWipe(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StartDeviceWipe",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void StartDeviceWipeAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StartDeviceWipe",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool StartRemoteDeviceWipe(
      const std::vector<uint8_t>& in_signed_command,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StartRemoteDeviceWipe",
        error,
        in_signed_command);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void StartRemoteDeviceWipeAsync(
      const std::vector<uint8_t>& in_signed_command,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StartRemoteDeviceWipe",
        std::move(success_callback),
        std::move(error_callback),
        in_signed_command);
  }

  bool ClearForcedReEnrollmentVpd(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "ClearForcedReEnrollmentVpd",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ClearForcedReEnrollmentVpdAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "ClearForcedReEnrollmentVpd",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool StartTPMFirmwareUpdate(
      const std::string& in_update_mode,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StartTPMFirmwareUpdate",
        error,
        in_update_mode);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void StartTPMFirmwareUpdateAsync(
      const std::string& in_update_mode,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StartTPMFirmwareUpdate",
        std::move(success_callback),
        std::move(error_callback),
        in_update_mode);
  }

  bool SetFlagsForUser(
      const std::string& in_account_id,
      const std::vector<std::string>& in_flags,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "SetFlagsForUser",
        error,
        in_account_id,
        in_flags);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetFlagsForUserAsync(
      const std::string& in_account_id,
      const std::vector<std::string>& in_flags,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "SetFlagsForUser",
        std::move(success_callback),
        std::move(error_callback),
        in_account_id,
        in_flags);
  }

  bool SetFeatureFlagsForUser(
      const std::string& in_account_id,
      const std::vector<std::string>& in_feature_flags,
      const std::map<std::string, std::string>& in_origin_list_flags,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "SetFeatureFlagsForUser",
        error,
        in_account_id,
        in_feature_flags,
        in_origin_list_flags);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetFeatureFlagsForUserAsync(
      const std::string& in_account_id,
      const std::vector<std::string>& in_feature_flags,
      const std::map<std::string, std::string>& in_origin_list_flags,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "SetFeatureFlagsForUser",
        std::move(success_callback),
        std::move(error_callback),
        in_account_id,
        in_feature_flags,
        in_origin_list_flags);
  }

  bool GetServerBackedStateKeys(
      std::vector<std::vector<uint8_t>>* out_state_keys,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "GetServerBackedStateKeys",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_state_keys);
  }

  void GetServerBackedStateKeysAsync(
      base::OnceCallback<void(const std::vector<std::vector<uint8_t>>& /*state_keys*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "GetServerBackedStateKeys",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool GetPsmDeviceActiveSecret(
      std::string* out_derived_secret,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "GetPsmDeviceActiveSecret",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_derived_secret);
  }

  void GetPsmDeviceActiveSecretAsync(
      base::OnceCallback<void(const std::string& /*derived_secret*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "GetPsmDeviceActiveSecret",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool InitMachineInfo(
      const std::string& in_data,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "InitMachineInfo",
        error,
        in_data);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void InitMachineInfoAsync(
      const std::string& in_data,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "InitMachineInfo",
        std::move(success_callback),
        std::move(error_callback),
        in_data);
  }

  bool StartArcMiniContainer(
      const std::vector<uint8_t>& in_request,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StartArcMiniContainer",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void StartArcMiniContainerAsync(
      const std::vector<uint8_t>& in_request,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StartArcMiniContainer",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool UpgradeArcContainer(
      const std::vector<uint8_t>& in_request,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "UpgradeArcContainer",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void UpgradeArcContainerAsync(
      const std::vector<uint8_t>& in_request,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "UpgradeArcContainer",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool StopArcInstance(
      const std::string& in_account_id,
      bool in_should_backup_log,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StopArcInstance",
        error,
        in_account_id,
        in_should_backup_log);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void StopArcInstanceAsync(
      const std::string& in_account_id,
      bool in_should_backup_log,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StopArcInstance",
        std::move(success_callback),
        std::move(error_callback),
        in_account_id,
        in_should_backup_log);
  }

  bool SetArcCpuRestriction(
      uint32_t in_restriction_state,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "SetArcCpuRestriction",
        error,
        in_restriction_state);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetArcCpuRestrictionAsync(
      uint32_t in_restriction_state,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "SetArcCpuRestriction",
        std::move(success_callback),
        std::move(error_callback),
        in_restriction_state);
  }

  bool EmitArcBooted(
      const std::string& in_account_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "EmitArcBooted",
        error,
        in_account_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void EmitArcBootedAsync(
      const std::string& in_account_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "EmitArcBooted",
        std::move(success_callback),
        std::move(error_callback),
        in_account_id);
  }

  bool GetArcStartTimeTicks(
      int64_t* out_start_time,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "GetArcStartTimeTicks",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_start_time);
  }

  void GetArcStartTimeTicksAsync(
      base::OnceCallback<void(int64_t /*start_time*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "GetArcStartTimeTicks",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool EnableAdbSideload(
      bool* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "EnableAdbSideload",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void EnableAdbSideloadAsync(
      base::OnceCallback<void(bool /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "EnableAdbSideload",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool QueryAdbSideload(
      bool* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "QueryAdbSideload",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void QueryAdbSideloadAsync(
      base::OnceCallback<void(bool /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "QueryAdbSideload",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool StartBrowserDataMigration(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StartBrowserDataMigration",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void StartBrowserDataMigrationAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StartBrowserDataMigration",
        std::move(success_callback),
        std::move(error_callback));
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.SessionManager"};
  const dbus::ObjectPath object_path_{"/org/chromium/SessionManager"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SESSION_MANAGER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_SESSION_MANAGER_DBUS_PROXIES_H
