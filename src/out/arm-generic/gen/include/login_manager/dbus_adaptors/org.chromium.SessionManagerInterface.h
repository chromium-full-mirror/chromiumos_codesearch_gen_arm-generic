// Automatic generation of D-Bus interfaces:
//  - org.chromium.SessionManagerInterface
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CHROMEOS_LOGIN_OUT_DEFAULT_GEN_INCLUDE_LOGIN_MANAGER_DBUS_ADAPTORS_ORG_CHROMIUM_SESSIONMANAGERINTERFACE_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CHROMEOS_LOGIN_OUT_DEFAULT_GEN_INCLUDE_LOGIN_MANAGER_DBUS_ADAPTORS_ORG_CHROMIUM_SESSIONMANAGERINTERFACE_H
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

// Interface definition for org::chromium::SessionManagerInterface.
class SessionManagerInterfaceInterface {
 public:
  virtual ~SessionManagerInterfaceInterface() = default;

  virtual void EmitLoginPromptVisible() = 0;
  virtual void EmitAshInitialized() = 0;
  virtual bool EnableChromeTesting(
      brillo::ErrorPtr* error,
      bool in_force_relaunch,
      const std::vector<std::string>& in_extra_arguments,
      const std::vector<std::string>& in_extra_environment_variables,
      std::string* out_filepath) = 0;
  virtual bool SaveLoginPassword(
      brillo::ErrorPtr* error,
      const base::ScopedFD& in_password_fd) = 0;
  virtual bool LoginScreenStorageStore(
      brillo::ErrorPtr* error,
      const std::string& in_key,
      const std::vector<uint8_t>& in_metadata,
      uint64_t in_value_size,
      const base::ScopedFD& in_value_fd) = 0;
  virtual bool LoginScreenStorageRetrieve(
      brillo::ErrorPtr* error,
      const std::string& in_key,
      uint64_t* out_value_size,
      brillo::dbus_utils::FileDescriptor* out_value_fd) = 0;
  virtual bool LoginScreenStorageListKeys(
      brillo::ErrorPtr* error,
      std::vector<std::string>* out_keys) = 0;
  virtual void LoginScreenStorageDelete(
      const std::string& in_key) = 0;
  virtual bool StartSession(
      brillo::ErrorPtr* error,
      const std::string& in_account_id,
      const std::string& in_unique_identifier) = 0;
  virtual void StopSession(
      const std::string& in_unique_identifier) = 0;
  virtual void StopSessionWithReason(
      uint32_t in_reason) = 0;
  virtual bool LoadShillProfile(
      brillo::ErrorPtr* error,
      const std::string& in_account_id) = 0;
  virtual void StorePolicyEx(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<>> response,
      const std::vector<uint8_t>& in_descriptor_blob,
      const std::vector<uint8_t>& in_policy_blob) = 0;
  virtual void StoreUnsignedPolicyEx(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<>> response,
      const std::vector<uint8_t>& in_descriptor_blob,
      const std::vector<uint8_t>& in_policy_blob) = 0;
  virtual bool ListStoredComponentPolicies(
      brillo::ErrorPtr* error,
      const std::vector<uint8_t>& in_descriptor_blob,
      std::vector<std::string>* out_component_ids) = 0;
  virtual bool RetrievePolicyEx(
      brillo::ErrorPtr* error,
      const std::vector<uint8_t>& in_descriptor_blob,
      std::vector<uint8_t>* out_policy_blob) = 0;
  virtual std::string RetrieveSessionState() = 0;
  virtual std::map<std::string, std::string> RetrieveActiveSessions() = 0;
  virtual void RetrievePrimarySession(
      std::string* out_username,
      std::string* out_sanitized_username) = 0;
  virtual bool IsGuestSessionActive() = 0;
  virtual void HandleSupervisedUserCreationStarting() = 0;
  virtual void HandleSupervisedUserCreationFinished() = 0;
  virtual bool LockScreen(
      brillo::ErrorPtr* error) = 0;
  virtual void HandleLockScreenShown() = 0;
  virtual void HandleLockScreenDismissed() = 0;
  virtual bool IsScreenLocked() = 0;
  virtual bool RestartJob(
      brillo::ErrorPtr* error,
      const base::ScopedFD& in_cred_fd,
      const std::vector<std::string>& in_argv,
      uint32_t in_mode) = 0;
  virtual bool StartDeviceWipe(
      brillo::ErrorPtr* error) = 0;
  virtual bool StartRemoteDeviceWipe(
      brillo::ErrorPtr* error,
      const std::vector<uint8_t>& in_signed_command) = 0;
  virtual void ClearForcedReEnrollmentVpd(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<>> response) = 0;
  virtual bool StartTPMFirmwareUpdate(
      brillo::ErrorPtr* error,
      const std::string& in_update_mode) = 0;
  virtual void SetFlagsForUser(
      const std::string& in_account_id,
      const std::vector<std::string>& in_flags) = 0;
  virtual void SetFeatureFlagsForUser(
      const std::string& in_account_id,
      const std::vector<std::string>& in_feature_flags,
      const std::map<std::string, std::string>& in_origin_list_flags) = 0;
  virtual void GetServerBackedStateKeys(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<std::vector<std::vector<uint8_t>>>> response) = 0;
  virtual void GetPsmDeviceActiveSecret(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<std::string>> response) = 0;
  virtual bool InitMachineInfo(
      brillo::ErrorPtr* error,
      const std::string& in_data) = 0;
  virtual bool StartArcMiniContainer(
      brillo::ErrorPtr* error,
      const std::vector<uint8_t>& in_request) = 0;
  virtual bool UpgradeArcContainer(
      brillo::ErrorPtr* error,
      const std::vector<uint8_t>& in_request) = 0;
  virtual bool StopArcInstance(
      brillo::ErrorPtr* error,
      const std::string& in_account_id,
      bool in_should_backup_log) = 0;
  virtual bool SetArcCpuRestriction(
      brillo::ErrorPtr* error,
      uint32_t in_restriction_state) = 0;
  virtual bool EmitArcBooted(
      brillo::ErrorPtr* error,
      const std::string& in_account_id) = 0;
  virtual bool GetArcStartTimeTicks(
      brillo::ErrorPtr* error,
      int64_t* out_start_time) = 0;
  virtual void EnableAdbSideload(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<bool>> response) = 0;
  virtual void QueryAdbSideload(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<bool>> response) = 0;
  virtual void StartBrowserDataMigration(
      dbus::MethodCall* method_call,
      brillo::dbus_utils::ResponseSender sender) = 0;
  virtual void UnblockDevModeForInitialStateDetermination(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<>> response) = 0;
  virtual void UnblockDevModeForEnrollment(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<>> response) = 0;
  virtual void UnblockDevModeForCarrierLock(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<>> response) = 0;
  virtual void IsDevModeBlockedForCarrierLock(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<bool>> response) = 0;
};

// Interface adaptor for org::chromium::SessionManagerInterface.
class SessionManagerInterfaceAdaptor {
 public:
  SessionManagerInterfaceAdaptor(SessionManagerInterfaceInterface* interface) : interface_(interface) {}
  SessionManagerInterfaceAdaptor(const SessionManagerInterfaceAdaptor&) = delete;
  SessionManagerInterfaceAdaptor& operator=(const SessionManagerInterfaceAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.SessionManagerInterface");

    itf->AddSimpleMethodHandler(
        "EmitLoginPromptVisible",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::EmitLoginPromptVisible);
    itf->AddSimpleMethodHandler(
        "EmitAshInitialized",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::EmitAshInitialized);
    itf->AddSimpleMethodHandlerWithError(
        "EnableChromeTesting",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::EnableChromeTesting);
    itf->AddSimpleMethodHandlerWithError(
        "SaveLoginPassword",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::SaveLoginPassword);
    itf->AddSimpleMethodHandlerWithError(
        "LoginScreenStorageStore",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::LoginScreenStorageStore);
    itf->AddSimpleMethodHandlerWithError(
        "LoginScreenStorageRetrieve",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::LoginScreenStorageRetrieve);
    itf->AddSimpleMethodHandlerWithError(
        "LoginScreenStorageListKeys",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::LoginScreenStorageListKeys);
    itf->AddSimpleMethodHandler(
        "LoginScreenStorageDelete",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::LoginScreenStorageDelete);
    itf->AddSimpleMethodHandlerWithError(
        "StartSession",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::StartSession);
    itf->AddSimpleMethodHandler(
        "StopSession",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::StopSession);
    itf->AddSimpleMethodHandler(
        "StopSessionWithReason",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::StopSessionWithReason);
    itf->AddSimpleMethodHandlerWithError(
        "LoadShillProfile",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::LoadShillProfile);
    itf->AddMethodHandler(
        "StorePolicyEx",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::StorePolicyEx);
    itf->AddMethodHandler(
        "StoreUnsignedPolicyEx",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::StoreUnsignedPolicyEx);
    itf->AddSimpleMethodHandlerWithError(
        "ListStoredComponentPolicies",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::ListStoredComponentPolicies);
    itf->AddSimpleMethodHandlerWithError(
        "RetrievePolicyEx",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::RetrievePolicyEx);
    itf->AddSimpleMethodHandler(
        "RetrieveSessionState",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::RetrieveSessionState);
    itf->AddSimpleMethodHandler(
        "RetrieveActiveSessions",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::RetrieveActiveSessions);
    itf->AddSimpleMethodHandler(
        "RetrievePrimarySession",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::RetrievePrimarySession);
    itf->AddSimpleMethodHandler(
        "IsGuestSessionActive",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::IsGuestSessionActive);
    itf->AddSimpleMethodHandler(
        "HandleSupervisedUserCreationStarting",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::HandleSupervisedUserCreationStarting);
    itf->AddSimpleMethodHandler(
        "HandleSupervisedUserCreationFinished",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::HandleSupervisedUserCreationFinished);
    itf->AddSimpleMethodHandlerWithError(
        "LockScreen",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::LockScreen);
    itf->AddSimpleMethodHandler(
        "HandleLockScreenShown",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::HandleLockScreenShown);
    itf->AddSimpleMethodHandler(
        "HandleLockScreenDismissed",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::HandleLockScreenDismissed);
    itf->AddSimpleMethodHandler(
        "IsScreenLocked",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::IsScreenLocked);
    itf->AddSimpleMethodHandlerWithError(
        "RestartJob",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::RestartJob);
    itf->AddSimpleMethodHandlerWithError(
        "StartDeviceWipe",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::StartDeviceWipe);
    itf->AddSimpleMethodHandlerWithError(
        "StartRemoteDeviceWipe",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::StartRemoteDeviceWipe);
    itf->AddMethodHandler(
        "ClearForcedReEnrollmentVpd",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::ClearForcedReEnrollmentVpd);
    itf->AddSimpleMethodHandlerWithError(
        "StartTPMFirmwareUpdate",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::StartTPMFirmwareUpdate);
    itf->AddSimpleMethodHandler(
        "SetFlagsForUser",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::SetFlagsForUser);
    itf->AddSimpleMethodHandler(
        "SetFeatureFlagsForUser",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::SetFeatureFlagsForUser);
    itf->AddMethodHandler(
        "GetServerBackedStateKeys",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::GetServerBackedStateKeys);
    itf->AddMethodHandler(
        "GetPsmDeviceActiveSecret",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::GetPsmDeviceActiveSecret);
    itf->AddSimpleMethodHandlerWithError(
        "InitMachineInfo",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::InitMachineInfo);
    itf->AddSimpleMethodHandlerWithError(
        "StartArcMiniContainer",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::StartArcMiniContainer);
    itf->AddSimpleMethodHandlerWithError(
        "UpgradeArcContainer",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::UpgradeArcContainer);
    itf->AddSimpleMethodHandlerWithError(
        "StopArcInstance",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::StopArcInstance);
    itf->AddSimpleMethodHandlerWithError(
        "SetArcCpuRestriction",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::SetArcCpuRestriction);
    itf->AddSimpleMethodHandlerWithError(
        "EmitArcBooted",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::EmitArcBooted);
    itf->AddSimpleMethodHandlerWithError(
        "GetArcStartTimeTicks",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::GetArcStartTimeTicks);
    itf->AddMethodHandler(
        "EnableAdbSideload",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::EnableAdbSideload);
    itf->AddMethodHandler(
        "QueryAdbSideload",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::QueryAdbSideload);
    itf->AddRawMethodHandler(
        "StartBrowserDataMigration",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::StartBrowserDataMigration);
    itf->AddMethodHandler(
        "UnblockDevModeForInitialStateDetermination",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::UnblockDevModeForInitialStateDetermination);
    itf->AddMethodHandler(
        "UnblockDevModeForEnrollment",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::UnblockDevModeForEnrollment);
    itf->AddMethodHandler(
        "UnblockDevModeForCarrierLock",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::UnblockDevModeForCarrierLock);
    itf->AddMethodHandler(
        "IsDevModeBlockedForCarrierLock",
        base::Unretained(interface_),
        &SessionManagerInterfaceInterface::IsDevModeBlockedForCarrierLock);

    signal_LoginPromptVisible_ = itf->RegisterSignalOfType<SignalLoginPromptVisibleType>("LoginPromptVisible");
    signal_SessionStateChanged_ = itf->RegisterSignalOfType<SignalSessionStateChangedType>("SessionStateChanged");
    signal_SetOwnerKeyComplete_ = itf->RegisterSignalOfType<SignalSetOwnerKeyCompleteType>("SetOwnerKeyComplete");
    signal_PropertyChangeComplete_ = itf->RegisterSignalOfType<SignalPropertyChangeCompleteType>("PropertyChangeComplete");
    signal_ScreenIsLocked_ = itf->RegisterSignalOfType<SignalScreenIsLockedType>("ScreenIsLocked");
    signal_ScreenIsUnlocked_ = itf->RegisterSignalOfType<SignalScreenIsUnlockedType>("ScreenIsUnlocked");
    signal_ArcInstanceStopped_ = itf->RegisterSignalOfType<SignalArcInstanceStoppedType>("ArcInstanceStopped");
  }

  void SendLoginPromptVisibleSignal() {
    auto signal = signal_LoginPromptVisible_.lock();
    if (signal)
      signal->Send();
  }
  void SendSessionStateChangedSignal(
      const std::string& in_state) {
    auto signal = signal_SessionStateChanged_.lock();
    if (signal)
      signal->Send(in_state);
  }
  void SendSetOwnerKeyCompleteSignal(
      const std::string& in_success) {
    auto signal = signal_SetOwnerKeyComplete_.lock();
    if (signal)
      signal->Send(in_success);
  }
  void SendPropertyChangeCompleteSignal(
      const std::string& in_success) {
    auto signal = signal_PropertyChangeComplete_.lock();
    if (signal)
      signal->Send(in_success);
  }
  void SendScreenIsLockedSignal() {
    auto signal = signal_ScreenIsLocked_.lock();
    if (signal)
      signal->Send();
  }
  void SendScreenIsUnlockedSignal() {
    auto signal = signal_ScreenIsUnlocked_.lock();
    if (signal)
      signal->Send();
  }
  void SendArcInstanceStoppedSignal(
      uint32_t in_reason) {
    auto signal = signal_ArcInstanceStopped_.lock();
    if (signal)
      signal->Send(in_reason);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/SessionManager"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.SessionManagerInterface\">\n"
        "    <method name=\"EmitLoginPromptVisible\">\n"
        "    </method>\n"
        "    <method name=\"EmitAshInitialized\">\n"
        "    </method>\n"
        "    <method name=\"EnableChromeTesting\">\n"
        "      <arg name=\"force_relaunch\" type=\"b\" direction=\"in\"/>\n"
        "      <arg name=\"extra_arguments\" type=\"as\" direction=\"in\"/>\n"
        "      <arg name=\"extra_environment_variables\" type=\"as\" direction=\"in\"/>\n"
        "      <arg name=\"filepath\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SaveLoginPassword\">\n"
        "      <arg name=\"password_fd\" type=\"h\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"LoginScreenStorageStore\">\n"
        "      <arg name=\"key\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"metadata\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"value_size\" type=\"t\" direction=\"in\"/>\n"
        "      <arg name=\"value_fd\" type=\"h\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"LoginScreenStorageRetrieve\">\n"
        "      <arg name=\"key\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"value_size\" type=\"t\" direction=\"out\"/>\n"
        "      <arg name=\"value_fd\" type=\"h\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"LoginScreenStorageListKeys\">\n"
        "      <arg name=\"keys\" type=\"as\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"LoginScreenStorageDelete\">\n"
        "      <arg name=\"key\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"StartSession\">\n"
        "      <arg name=\"account_id\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"unique_identifier\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"StopSession\">\n"
        "      <arg name=\"unique_identifier\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"StopSessionWithReason\">\n"
        "      <arg name=\"reason\" type=\"u\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"LoadShillProfile\">\n"
        "      <arg name=\"account_id\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"StorePolicyEx\">\n"
        "      <arg name=\"descriptor_blob\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"policy_blob\" type=\"ay\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"StoreUnsignedPolicyEx\">\n"
        "      <arg name=\"descriptor_blob\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"policy_blob\" type=\"ay\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"ListStoredComponentPolicies\">\n"
        "      <arg name=\"descriptor_blob\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"component_ids\" type=\"as\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"RetrievePolicyEx\">\n"
        "      <arg name=\"descriptor_blob\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"policy_blob\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"RetrieveSessionState\">\n"
        "      <arg name=\"state\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"RetrieveActiveSessions\">\n"
        "      <arg name=\"sessions\" type=\"a{ss}\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"RetrievePrimarySession\">\n"
        "      <arg name=\"username\" type=\"s\" direction=\"out\"/>\n"
        "      <arg name=\"sanitized_username\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"IsGuestSessionActive\">\n"
        "      <arg name=\"is_guest\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"HandleSupervisedUserCreationStarting\">\n"
        "    </method>\n"
        "    <method name=\"HandleSupervisedUserCreationFinished\">\n"
        "    </method>\n"
        "    <method name=\"LockScreen\">\n"
        "    </method>\n"
        "    <method name=\"HandleLockScreenShown\">\n"
        "    </method>\n"
        "    <method name=\"HandleLockScreenDismissed\">\n"
        "    </method>\n"
        "    <method name=\"IsScreenLocked\">\n"
        "      <arg name=\"screen_locked\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"RestartJob\">\n"
        "      <arg name=\"cred_fd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"argv\" type=\"as\" direction=\"in\"/>\n"
        "      <arg name=\"mode\" type=\"u\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"StartDeviceWipe\">\n"
        "    </method>\n"
        "    <method name=\"StartRemoteDeviceWipe\">\n"
        "      <arg name=\"signed_command\" type=\"ay\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"ClearForcedReEnrollmentVpd\">\n"
        "    </method>\n"
        "    <method name=\"StartTPMFirmwareUpdate\">\n"
        "      <arg name=\"update_mode\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"SetFlagsForUser\">\n"
        "      <arg name=\"account_id\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"flags\" type=\"as\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"SetFeatureFlagsForUser\">\n"
        "      <arg name=\"account_id\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"feature_flags\" type=\"as\" direction=\"in\"/>\n"
        "      <arg name=\"origin_list_flags\" type=\"a{ss}\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"GetServerBackedStateKeys\">\n"
        "      <arg name=\"state_keys\" type=\"aay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetPsmDeviceActiveSecret\">\n"
        "      <arg name=\"derived_secret\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"InitMachineInfo\">\n"
        "      <arg name=\"data\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"StartArcMiniContainer\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"UpgradeArcContainer\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"StopArcInstance\">\n"
        "      <arg name=\"account_id\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"should_backup_log\" type=\"b\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"SetArcCpuRestriction\">\n"
        "      <arg name=\"restriction_state\" type=\"u\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"EmitArcBooted\">\n"
        "      <arg name=\"account_id\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"GetArcStartTimeTicks\">\n"
        "      <arg name=\"start_time\" type=\"x\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"EnableAdbSideload\">\n"
        "      <arg name=\"reply\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"QueryAdbSideload\">\n"
        "      <arg name=\"reply\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"StartBrowserDataMigration\">\n"
        "    </method>\n"
        "    <method name=\"UnblockDevModeForInitialStateDetermination\">\n"
        "    </method>\n"
        "    <method name=\"UnblockDevModeForEnrollment\">\n"
        "    </method>\n"
        "    <method name=\"UnblockDevModeForCarrierLock\">\n"
        "    </method>\n"
        "    <method name=\"IsDevModeBlockedForCarrierLock\">\n"
        "      <arg name=\"is_blocked\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <signal name=\"LoginPromptVisible\">\n"
        "    </signal>\n"
        "    <signal name=\"SessionStateChanged\">\n"
        "      <arg name=\"state\" type=\"s\"/>\n"
        "    </signal>\n"
        "    <signal name=\"SetOwnerKeyComplete\">\n"
        "      <arg name=\"success\" type=\"s\"/>\n"
        "    </signal>\n"
        "    <signal name=\"PropertyChangeComplete\">\n"
        "      <arg name=\"success\" type=\"s\"/>\n"
        "    </signal>\n"
        "    <signal name=\"ScreenIsLocked\">\n"
        "    </signal>\n"
        "    <signal name=\"ScreenIsUnlocked\">\n"
        "    </signal>\n"
        "    <signal name=\"ArcInstanceStopped\">\n"
        "      <arg name=\"reason\" type=\"u\"/>\n"
        "    </signal>\n"
        "  </interface>\n";
  }

 private:
  using SignalLoginPromptVisibleType = brillo::dbus_utils::DBusSignal<>;
  std::weak_ptr<SignalLoginPromptVisibleType> signal_LoginPromptVisible_;

  using SignalSessionStateChangedType = brillo::dbus_utils::DBusSignal<
      std::string /*state*/>;
  std::weak_ptr<SignalSessionStateChangedType> signal_SessionStateChanged_;

  using SignalSetOwnerKeyCompleteType = brillo::dbus_utils::DBusSignal<
      std::string /*success*/>;
  std::weak_ptr<SignalSetOwnerKeyCompleteType> signal_SetOwnerKeyComplete_;

  using SignalPropertyChangeCompleteType = brillo::dbus_utils::DBusSignal<
      std::string /*success*/>;
  std::weak_ptr<SignalPropertyChangeCompleteType> signal_PropertyChangeComplete_;

  using SignalScreenIsLockedType = brillo::dbus_utils::DBusSignal<>;
  std::weak_ptr<SignalScreenIsLockedType> signal_ScreenIsLocked_;

  using SignalScreenIsUnlockedType = brillo::dbus_utils::DBusSignal<>;
  std::weak_ptr<SignalScreenIsUnlockedType> signal_ScreenIsUnlocked_;

  using SignalArcInstanceStoppedType = brillo::dbus_utils::DBusSignal<
      uint32_t /*reason*/>;
  std::weak_ptr<SignalArcInstanceStoppedType> signal_ArcInstanceStopped_;

  SessionManagerInterfaceInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CHROMEOS_LOGIN_OUT_DEFAULT_GEN_INCLUDE_LOGIN_MANAGER_DBUS_ADAPTORS_ORG_CHROMIUM_SESSIONMANAGERINTERFACE_H
