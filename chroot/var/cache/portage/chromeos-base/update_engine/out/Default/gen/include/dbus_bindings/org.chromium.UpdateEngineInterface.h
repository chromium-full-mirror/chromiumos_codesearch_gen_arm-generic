// Automatic generation of D-Bus interfaces:
//  - org.chromium.UpdateEngineInterface
#ifndef ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_UPDATE_ENGINE_OUT_DEFAULT_GEN_INCLUDE_DBUS_BINDINGS_ORG_CHROMIUM_UPDATEENGINEINTERFACE_H
#define ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_UPDATE_ENGINE_OUT_DEFAULT_GEN_INCLUDE_DBUS_BINDINGS_ORG_CHROMIUM_UPDATEENGINEINTERFACE_H
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

// Interface definition for org::chromium::UpdateEngineInterface.
class UpdateEngineInterfaceInterface {
 public:
  virtual ~UpdateEngineInterfaceInterface() = default;

  virtual bool Update(
      brillo::ErrorPtr* error,
      const update_engine::UpdateParams& in_update_params) = 0;
  virtual bool ApplyDeferredUpdate(
      brillo::ErrorPtr* error) = 0;
  virtual bool AttemptInstall(
      brillo::ErrorPtr* error,
      const std::string& in_omaha_url,
      const std::vector<std::string>& in_dlc_ids) = 0;
  virtual bool AttemptRollback(
      brillo::ErrorPtr* error,
      bool in_powerwash) = 0;
  virtual bool CanRollback(
      brillo::ErrorPtr* error,
      bool* out_can_rollback) = 0;
  virtual bool ResetStatus(
      brillo::ErrorPtr* error) = 0;
  virtual bool SetDlcActiveValue(
      brillo::ErrorPtr* error,
      bool in_is_active,
      const std::string& in_dlc_id) = 0;
  virtual bool GetStatusAdvanced(
      brillo::ErrorPtr* error,
      update_engine::StatusResult* out_status) = 0;
  virtual bool SetStatus(
      brillo::ErrorPtr* error,
      int32_t in_update_status) = 0;
  virtual bool RebootIfNeeded(
      brillo::ErrorPtr* error) = 0;
  virtual bool SetChannel(
      brillo::ErrorPtr* error,
      const std::string& in_target_channel,
      bool in_is_powerwash_allowed) = 0;
  virtual bool GetChannel(
      brillo::ErrorPtr* error,
      bool in_get_current_channel,
      std::string* out_channel) = 0;
  virtual bool SetCohortHint(
      brillo::ErrorPtr* error,
      const std::string& in_cohort_hint) = 0;
  virtual bool GetCohortHint(
      brillo::ErrorPtr* error,
      std::string* out_cohort_hint) = 0;
  virtual bool SetP2PUpdatePermission(
      brillo::ErrorPtr* error,
      bool in_enabled) = 0;
  virtual bool GetP2PUpdatePermission(
      brillo::ErrorPtr* error,
      bool* out_enabled) = 0;
  virtual bool SetUpdateOverCellularPermission(
      brillo::ErrorPtr* error,
      bool in_allowed) = 0;
  virtual bool SetUpdateOverCellularTarget(
      brillo::ErrorPtr* error,
      const std::string& in_target_version,
      int64_t in_target_size) = 0;
  virtual bool GetUpdateOverCellularPermission(
      brillo::ErrorPtr* error,
      bool* out_allowed) = 0;
  virtual bool ToggleFeature(
      brillo::ErrorPtr* error,
      const std::string& in_feature,
      bool in_enable) = 0;
  virtual bool IsFeatureEnabled(
      brillo::ErrorPtr* error,
      const std::string& in_feature,
      bool* out_enabled) = 0;
  virtual bool GetDurationSinceUpdate(
      brillo::ErrorPtr* error,
      int64_t* out_usec_wallclock) = 0;
  virtual bool GetPrevVersion(
      brillo::ErrorPtr* error,
      std::string* out_prev_version) = 0;
  virtual bool GetRollbackPartition(
      brillo::ErrorPtr* error,
      std::string* out_rollback_partition_name) = 0;
  virtual bool GetLastAttemptError(
      brillo::ErrorPtr* error,
      int32_t* out_last_attempt_error) = 0;
};

// Interface adaptor for org::chromium::UpdateEngineInterface.
class UpdateEngineInterfaceAdaptor {
 public:
  UpdateEngineInterfaceAdaptor(UpdateEngineInterfaceInterface* interface) : interface_(interface) {}
  UpdateEngineInterfaceAdaptor(const UpdateEngineInterfaceAdaptor&) = delete;
  UpdateEngineInterfaceAdaptor& operator=(const UpdateEngineInterfaceAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.UpdateEngineInterface");

    itf->AddSimpleMethodHandlerWithError(
        "Update",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::Update);
    itf->AddSimpleMethodHandlerWithError(
        "ApplyDeferredUpdate",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::ApplyDeferredUpdate);
    itf->AddSimpleMethodHandlerWithError(
        "AttemptInstall",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::AttemptInstall);
    itf->AddSimpleMethodHandlerWithError(
        "AttemptRollback",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::AttemptRollback);
    itf->AddSimpleMethodHandlerWithError(
        "CanRollback",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::CanRollback);
    itf->AddSimpleMethodHandlerWithError(
        "ResetStatus",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::ResetStatus);
    itf->AddSimpleMethodHandlerWithError(
        "SetDlcActiveValue",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::SetDlcActiveValue);
    itf->AddSimpleMethodHandlerWithError(
        "GetStatusAdvanced",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::GetStatusAdvanced);
    itf->AddSimpleMethodHandlerWithError(
        "SetStatus",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::SetStatus);
    itf->AddSimpleMethodHandlerWithError(
        "RebootIfNeeded",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::RebootIfNeeded);
    itf->AddSimpleMethodHandlerWithError(
        "SetChannel",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::SetChannel);
    itf->AddSimpleMethodHandlerWithError(
        "GetChannel",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::GetChannel);
    itf->AddSimpleMethodHandlerWithError(
        "SetCohortHint",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::SetCohortHint);
    itf->AddSimpleMethodHandlerWithError(
        "GetCohortHint",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::GetCohortHint);
    itf->AddSimpleMethodHandlerWithError(
        "SetP2PUpdatePermission",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::SetP2PUpdatePermission);
    itf->AddSimpleMethodHandlerWithError(
        "GetP2PUpdatePermission",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::GetP2PUpdatePermission);
    itf->AddSimpleMethodHandlerWithError(
        "SetUpdateOverCellularPermission",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::SetUpdateOverCellularPermission);
    itf->AddSimpleMethodHandlerWithError(
        "SetUpdateOverCellularTarget",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::SetUpdateOverCellularTarget);
    itf->AddSimpleMethodHandlerWithError(
        "GetUpdateOverCellularPermission",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::GetUpdateOverCellularPermission);
    itf->AddSimpleMethodHandlerWithError(
        "ToggleFeature",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::ToggleFeature);
    itf->AddSimpleMethodHandlerWithError(
        "IsFeatureEnabled",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::IsFeatureEnabled);
    itf->AddSimpleMethodHandlerWithError(
        "GetDurationSinceUpdate",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::GetDurationSinceUpdate);
    itf->AddSimpleMethodHandlerWithError(
        "GetPrevVersion",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::GetPrevVersion);
    itf->AddSimpleMethodHandlerWithError(
        "GetRollbackPartition",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::GetRollbackPartition);
    itf->AddSimpleMethodHandlerWithError(
        "GetLastAttemptError",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::GetLastAttemptError);

    signal_StatusUpdateAdvanced_ = itf->RegisterSignalOfType<SignalStatusUpdateAdvancedType>("StatusUpdateAdvanced");
  }

  void SendStatusUpdateAdvancedSignal(
      const update_engine::StatusResult& in_status) {
    auto signal = signal_StatusUpdateAdvanced_.lock();
    if (signal)
      signal->Send(in_status);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/UpdateEngine"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.UpdateEngineInterface\">\n"
        "    <method name=\"Update\">\n"
        "      <arg name=\"update_params\" type=\"ay\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"ApplyDeferredUpdate\">\n"
        "    </method>\n"
        "    <method name=\"AttemptInstall\">\n"
        "      <arg name=\"omaha_url\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"dlc_ids\" type=\"as\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"AttemptRollback\">\n"
        "      <arg name=\"powerwash\" type=\"b\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"CanRollback\">\n"
        "      <arg name=\"can_rollback\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ResetStatus\">\n"
        "    </method>\n"
        "    <method name=\"SetDlcActiveValue\">\n"
        "      <arg name=\"is_active\" type=\"b\" direction=\"in\"/>\n"
        "      <arg name=\"dlc_id\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"GetStatusAdvanced\">\n"
        "      <arg name=\"status\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SetStatus\">\n"
        "      <arg name=\"update_status\" type=\"i\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"RebootIfNeeded\">\n"
        "    </method>\n"
        "    <method name=\"SetChannel\">\n"
        "      <arg name=\"target_channel\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"is_powerwash_allowed\" type=\"b\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"GetChannel\">\n"
        "      <arg name=\"get_current_channel\" type=\"b\" direction=\"in\"/>\n"
        "      <arg name=\"channel\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SetCohortHint\">\n"
        "      <arg name=\"cohort_hint\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"GetCohortHint\">\n"
        "      <arg name=\"cohort_hint\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SetP2PUpdatePermission\">\n"
        "      <arg name=\"enabled\" type=\"b\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"GetP2PUpdatePermission\">\n"
        "      <arg name=\"enabled\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SetUpdateOverCellularPermission\">\n"
        "      <arg name=\"allowed\" type=\"b\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"SetUpdateOverCellularTarget\">\n"
        "      <arg name=\"target_version\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"target_size\" type=\"x\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"GetUpdateOverCellularPermission\">\n"
        "      <arg name=\"allowed\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ToggleFeature\">\n"
        "      <arg name=\"feature\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"enable\" type=\"b\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"IsFeatureEnabled\">\n"
        "      <arg name=\"feature\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"enabled\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetDurationSinceUpdate\">\n"
        "      <arg name=\"usec_wallclock\" type=\"x\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetPrevVersion\">\n"
        "      <arg name=\"prev_version\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetRollbackPartition\">\n"
        "      <arg name=\"rollback_partition_name\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetLastAttemptError\">\n"
        "      <arg name=\"last_attempt_error\" type=\"i\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <signal name=\"StatusUpdateAdvanced\">\n"
        "      <arg name=\"status\" type=\"ay\"/>\n"
        "    </signal>\n"
        "  </interface>\n";
  }

 private:
  using SignalStatusUpdateAdvancedType = brillo::dbus_utils::DBusSignal<
      update_engine::StatusResult /*status*/>;
  std::weak_ptr<SignalStatusUpdateAdvancedType> signal_StatusUpdateAdvanced_;

  UpdateEngineInterfaceInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_UPDATE_ENGINE_OUT_DEFAULT_GEN_INCLUDE_DBUS_BINDINGS_ORG_CHROMIUM_UPDATEENGINEINTERFACE_H
