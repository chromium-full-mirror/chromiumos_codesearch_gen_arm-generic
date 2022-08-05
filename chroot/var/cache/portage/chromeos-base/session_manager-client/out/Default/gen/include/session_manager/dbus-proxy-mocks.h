// Automatic generation of D-Bus interface mock proxies for:
//  - org.chromium.SessionManagerInterface
#ifndef ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_SESSION_MANAGER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_SESSION_MANAGER_DBUS_PROXY_MOCKS_H
#define ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_SESSION_MANAGER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_SESSION_MANAGER_DBUS_PROXY_MOCKS_H
#include <string>
#include <vector>

#include <base/callback_forward.h>
#include <base/logging.h>
#include <brillo/any.h>
#include <brillo/errors/error.h>
#include <brillo/variant_dictionary.h>
#include <gmock/gmock.h>

#include "session_manager/dbus-proxies.h"

namespace org {
namespace chromium {

// Mock object for SessionManagerInterfaceProxyInterface.
class SessionManagerInterfaceProxyMock : public SessionManagerInterfaceProxyInterface {
 public:
  SessionManagerInterfaceProxyMock() = default;
  SessionManagerInterfaceProxyMock(const SessionManagerInterfaceProxyMock&) = delete;
  SessionManagerInterfaceProxyMock& operator=(const SessionManagerInterfaceProxyMock&) = delete;

  MOCK_METHOD2(EmitLoginPromptVisible,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(EmitLoginPromptVisibleAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(EmitAshInitialized,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(EmitAshInitializedAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(EnableChromeTesting,
               bool(bool /*in_force_relaunch*/,
                    const std::vector<std::string>& /*in_extra_arguments*/,
                    const std::vector<std::string>& /*in_extra_environment_variables*/,
                    std::string* /*out_filepath*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(EnableChromeTestingAsync,
               void(bool /*in_force_relaunch*/,
                    const std::vector<std::string>& /*in_extra_arguments*/,
                    const std::vector<std::string>& /*in_extra_environment_variables*/,
                    base::OnceCallback<void(const std::string& /*filepath*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SaveLoginPassword,
               bool(const brillo::dbus_utils::FileDescriptor& /*in_password_fd*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SaveLoginPasswordAsync,
               void(const brillo::dbus_utils::FileDescriptor& /*in_password_fd*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(LoginScreenStorageStore,
               bool(const std::string& /*in_key*/,
                    const std::vector<uint8_t>& /*in_metadata*/,
                    uint64_t /*in_value_size*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_value_fd*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD7(LoginScreenStorageStoreAsync,
               void(const std::string& /*in_key*/,
                    const std::vector<uint8_t>& /*in_metadata*/,
                    uint64_t /*in_value_size*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_value_fd*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(LoginScreenStorageRetrieve,
               bool(const std::string& /*in_key*/,
                    uint64_t* /*out_value_size*/,
                    base::ScopedFD* /*out_value_fd*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(LoginScreenStorageRetrieveAsync,
               void(const std::string& /*in_key*/,
                    base::OnceCallback<void(uint64_t /*value_size*/, const base::ScopedFD& /*value_fd*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(LoginScreenStorageListKeys,
               bool(std::vector<std::string>* /*out_keys*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(LoginScreenStorageListKeysAsync,
               void(base::OnceCallback<void(const std::vector<std::string>& /*keys*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(LoginScreenStorageDelete,
               bool(const std::string& /*in_key*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(LoginScreenStorageDeleteAsync,
               void(const std::string& /*in_key*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(StartSession,
               bool(const std::string& /*in_account_id*/,
                    const std::string& /*in_unique_identifier*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(StartSessionAsync,
               void(const std::string& /*in_account_id*/,
                    const std::string& /*in_unique_identifier*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(StopSession,
               bool(const std::string& /*in_unique_identifier*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(StopSessionAsync,
               void(const std::string& /*in_unique_identifier*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(StopSessionWithReason,
               bool(uint32_t /*in_reason*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(StopSessionWithReasonAsync,
               void(uint32_t /*in_reason*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(LoadShillProfile,
               bool(const std::string& /*in_account_id*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(LoadShillProfileAsync,
               void(const std::string& /*in_account_id*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(StorePolicyEx,
               bool(const std::vector<uint8_t>& /*in_descriptor_blob*/,
                    const std::vector<uint8_t>& /*in_policy_blob*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(StorePolicyExAsync,
               void(const std::vector<uint8_t>& /*in_descriptor_blob*/,
                    const std::vector<uint8_t>& /*in_policy_blob*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(StoreUnsignedPolicyEx,
               bool(const std::vector<uint8_t>& /*in_descriptor_blob*/,
                    const std::vector<uint8_t>& /*in_policy_blob*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(StoreUnsignedPolicyExAsync,
               void(const std::vector<uint8_t>& /*in_descriptor_blob*/,
                    const std::vector<uint8_t>& /*in_policy_blob*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ListStoredComponentPolicies,
               bool(const std::vector<uint8_t>& /*in_descriptor_blob*/,
                    std::vector<std::string>* /*out_component_ids*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ListStoredComponentPoliciesAsync,
               void(const std::vector<uint8_t>& /*in_descriptor_blob*/,
                    base::OnceCallback<void(const std::vector<std::string>& /*component_ids*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RetrievePolicyEx,
               bool(const std::vector<uint8_t>& /*in_descriptor_blob*/,
                    std::vector<uint8_t>* /*out_policy_blob*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RetrievePolicyExAsync,
               void(const std::vector<uint8_t>& /*in_descriptor_blob*/,
                    base::OnceCallback<void(const std::vector<uint8_t>& /*policy_blob*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(RetrieveSessionState,
               bool(std::string* /*out_state*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(RetrieveSessionStateAsync,
               void(base::OnceCallback<void(const std::string& /*state*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(RetrieveActiveSessions,
               bool(std::map<std::string, std::string>* /*out_sessions*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(RetrieveActiveSessionsAsync,
               void(base::OnceCallback<void(const std::map<std::string, std::string>& /*sessions*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RetrievePrimarySession,
               bool(std::string* /*out_username*/,
                    std::string* /*out_sanitized_username*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(RetrievePrimarySessionAsync,
               void(base::OnceCallback<void(const std::string& /*username*/, const std::string& /*sanitized_username*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(IsGuestSessionActive,
               bool(bool* /*out_is_guest*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(IsGuestSessionActiveAsync,
               void(base::OnceCallback<void(bool /*is_guest*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(HandleSupervisedUserCreationStarting,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(HandleSupervisedUserCreationStartingAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(HandleSupervisedUserCreationFinished,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(HandleSupervisedUserCreationFinishedAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(LockScreen,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(LockScreenAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(HandleLockScreenShown,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(HandleLockScreenShownAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(HandleLockScreenDismissed,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(HandleLockScreenDismissedAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(IsScreenLocked,
               bool(bool* /*out_screen_locked*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(IsScreenLockedAsync,
               void(base::OnceCallback<void(bool /*screen_locked*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(RestartJob,
               bool(const brillo::dbus_utils::FileDescriptor& /*in_cred_fd*/,
                    const std::vector<std::string>& /*in_argv*/,
                    uint32_t /*in_mode*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(RestartJobAsync,
               void(const brillo::dbus_utils::FileDescriptor& /*in_cred_fd*/,
                    const std::vector<std::string>& /*in_argv*/,
                    uint32_t /*in_mode*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(StartDeviceWipe,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(StartDeviceWipeAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(StartRemoteDeviceWipe,
               bool(const std::vector<uint8_t>& /*in_signed_command*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(StartRemoteDeviceWipeAsync,
               void(const std::vector<uint8_t>& /*in_signed_command*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(ClearForcedReEnrollmentVpd,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(ClearForcedReEnrollmentVpdAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(StartTPMFirmwareUpdate,
               bool(const std::string& /*in_update_mode*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(StartTPMFirmwareUpdateAsync,
               void(const std::string& /*in_update_mode*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetFlagsForUser,
               bool(const std::string& /*in_account_id*/,
                    const std::vector<std::string>& /*in_flags*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SetFlagsForUserAsync,
               void(const std::string& /*in_account_id*/,
                    const std::vector<std::string>& /*in_flags*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SetFeatureFlagsForUser,
               bool(const std::string& /*in_account_id*/,
                    const std::vector<std::string>& /*in_feature_flags*/,
                    const std::map<std::string, std::string>& /*in_origin_list_flags*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(SetFeatureFlagsForUserAsync,
               void(const std::string& /*in_account_id*/,
                    const std::vector<std::string>& /*in_feature_flags*/,
                    const std::map<std::string, std::string>& /*in_origin_list_flags*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetServerBackedStateKeys,
               bool(std::vector<std::vector<uint8_t>>* /*out_state_keys*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetServerBackedStateKeysAsync,
               void(base::OnceCallback<void(const std::vector<std::vector<uint8_t>>& /*state_keys*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetPsmDeviceActiveSecret,
               bool(std::string* /*out_derived_secret*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetPsmDeviceActiveSecretAsync,
               void(base::OnceCallback<void(const std::string& /*derived_secret*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(InitMachineInfo,
               bool(const std::string& /*in_data*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(InitMachineInfoAsync,
               void(const std::string& /*in_data*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(StartArcMiniContainer,
               bool(const std::vector<uint8_t>& /*in_request*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(StartArcMiniContainerAsync,
               void(const std::vector<uint8_t>& /*in_request*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(UpgradeArcContainer,
               bool(const std::vector<uint8_t>& /*in_request*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(UpgradeArcContainerAsync,
               void(const std::vector<uint8_t>& /*in_request*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(StopArcInstance,
               bool(const std::string& /*in_account_id*/,
                    bool /*in_should_backup_log*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(StopArcInstanceAsync,
               void(const std::string& /*in_account_id*/,
                    bool /*in_should_backup_log*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetArcCpuRestriction,
               bool(uint32_t /*in_restriction_state*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetArcCpuRestrictionAsync,
               void(uint32_t /*in_restriction_state*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(EmitArcBooted,
               bool(const std::string& /*in_account_id*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(EmitArcBootedAsync,
               void(const std::string& /*in_account_id*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetArcStartTimeTicks,
               bool(int64_t* /*out_start_time*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetArcStartTimeTicksAsync,
               void(base::OnceCallback<void(int64_t /*start_time*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(EnableAdbSideload,
               bool(bool* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(EnableAdbSideloadAsync,
               void(base::OnceCallback<void(bool /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(QueryAdbSideload,
               bool(bool* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(QueryAdbSideloadAsync,
               void(base::OnceCallback<void(bool /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(StartBrowserDataMigration,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(StartBrowserDataMigrationAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(UnblockDevModeForInitialStateDetermination,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(UnblockDevModeForInitialStateDeterminationAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(UnblockDevModeForEnrollment,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(UnblockDevModeForEnrollmentAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(UnblockDevModeForCarrierLock,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(UnblockDevModeForCarrierLockAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(IsDevModeBlockedForCarrierLock,
               bool(bool* /*out_is_blocked*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(IsDevModeBlockedForCarrierLockAsync,
               void(base::OnceCallback<void(bool /*is_blocked*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  void RegisterLoginPromptVisibleSignalHandler(
    base::RepeatingClosure signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterLoginPromptVisibleSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterLoginPromptVisibleSignalHandler,
               void(base::RepeatingClosure /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterSessionStateChangedSignalHandler(
    const base::RepeatingCallback<void(const std::string&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterSessionStateChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterSessionStateChangedSignalHandler,
               void(const base::RepeatingCallback<void(const std::string&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterSetOwnerKeyCompleteSignalHandler(
    const base::RepeatingCallback<void(const std::string&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterSetOwnerKeyCompleteSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterSetOwnerKeyCompleteSignalHandler,
               void(const base::RepeatingCallback<void(const std::string&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterPropertyChangeCompleteSignalHandler(
    const base::RepeatingCallback<void(const std::string&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterPropertyChangeCompleteSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterPropertyChangeCompleteSignalHandler,
               void(const base::RepeatingCallback<void(const std::string&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterScreenIsLockedSignalHandler(
    base::RepeatingClosure signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterScreenIsLockedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterScreenIsLockedSignalHandler,
               void(base::RepeatingClosure /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterScreenIsUnlockedSignalHandler(
    base::RepeatingClosure signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterScreenIsUnlockedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterScreenIsUnlockedSignalHandler,
               void(base::RepeatingClosure /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterArcInstanceStoppedSignalHandler(
    const base::RepeatingCallback<void(uint32_t)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterArcInstanceStoppedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterArcInstanceStoppedSignalHandler,
               void(const base::RepeatingCallback<void(uint32_t)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_SESSION_MANAGER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_SESSION_MANAGER_DBUS_PROXY_MOCKS_H
