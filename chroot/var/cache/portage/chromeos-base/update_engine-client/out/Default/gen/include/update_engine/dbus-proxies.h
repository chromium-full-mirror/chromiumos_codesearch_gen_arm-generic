// Automatic generation of D-Bus interfaces:
//  - org.chromium.UpdateEngineInterface
#ifndef ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_UPDATE_ENGINE_CLIENT_OUT_DEFAULT_GEN_INCLUDE_UPDATE_ENGINE_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_UPDATE_ENGINE_CLIENT_OUT_DEFAULT_GEN_INCLUDE_UPDATE_ENGINE_DBUS_PROXIES_H
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

// Abstract interface proxy for org::chromium::UpdateEngineInterface.
class UpdateEngineInterfaceProxyInterface {
 public:
  virtual ~UpdateEngineInterfaceProxyInterface() = default;

  virtual bool Update(
      const update_engine::UpdateParams& in_update_params,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void UpdateAsync(
      const update_engine::UpdateParams& in_update_params,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ApplyDeferredUpdate(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ApplyDeferredUpdateAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool AttemptInstall(
      const std::string& in_omaha_url,
      const std::vector<std::string>& in_dlc_ids,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void AttemptInstallAsync(
      const std::string& in_omaha_url,
      const std::vector<std::string>& in_dlc_ids,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool AttemptRollback(
      bool in_powerwash,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void AttemptRollbackAsync(
      bool in_powerwash,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool CanRollback(
      bool* out_can_rollback,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void CanRollbackAsync(
      base::OnceCallback<void(bool /*can_rollback*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ResetStatus(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ResetStatusAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetDlcActiveValue(
      bool in_is_active,
      const std::string& in_dlc_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetDlcActiveValueAsync(
      bool in_is_active,
      const std::string& in_dlc_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetStatusAdvanced(
      update_engine::StatusResult* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetStatusAdvancedAsync(
      base::OnceCallback<void(const update_engine::StatusResult& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetStatus(
      int32_t in_update_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetStatusAsync(
      int32_t in_update_status,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RebootIfNeeded(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RebootIfNeededAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetChannel(
      const std::string& in_target_channel,
      bool in_is_powerwash_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetChannelAsync(
      const std::string& in_target_channel,
      bool in_is_powerwash_allowed,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetChannel(
      bool in_get_current_channel,
      std::string* out_channel,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetChannelAsync(
      bool in_get_current_channel,
      base::OnceCallback<void(const std::string& /*channel*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetCohortHint(
      const std::string& in_cohort_hint,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetCohortHintAsync(
      const std::string& in_cohort_hint,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetCohortHint(
      std::string* out_cohort_hint,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetCohortHintAsync(
      base::OnceCallback<void(const std::string& /*cohort_hint*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetP2PUpdatePermission(
      bool in_enabled,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetP2PUpdatePermissionAsync(
      bool in_enabled,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetP2PUpdatePermission(
      bool* out_enabled,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetP2PUpdatePermissionAsync(
      base::OnceCallback<void(bool /*enabled*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetUpdateOverCellularPermission(
      bool in_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetUpdateOverCellularPermissionAsync(
      bool in_allowed,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetUpdateOverCellularTarget(
      const std::string& in_target_version,
      int64_t in_target_size,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetUpdateOverCellularTargetAsync(
      const std::string& in_target_version,
      int64_t in_target_size,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetUpdateOverCellularPermission(
      bool* out_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetUpdateOverCellularPermissionAsync(
      base::OnceCallback<void(bool /*allowed*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ToggleFeature(
      const std::string& in_feature,
      bool in_enable,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ToggleFeatureAsync(
      const std::string& in_feature,
      bool in_enable,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool IsFeatureEnabled(
      const std::string& in_feature,
      bool* out_enabled,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void IsFeatureEnabledAsync(
      const std::string& in_feature,
      base::OnceCallback<void(bool /*enabled*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetDurationSinceUpdate(
      int64_t* out_usec_wallclock,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetDurationSinceUpdateAsync(
      base::OnceCallback<void(int64_t /*usec_wallclock*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetPrevVersion(
      std::string* out_prev_version,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetPrevVersionAsync(
      base::OnceCallback<void(const std::string& /*prev_version*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetRollbackPartition(
      std::string* out_rollback_partition_name,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetRollbackPartitionAsync(
      base::OnceCallback<void(const std::string& /*rollback_partition_name*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetLastAttemptError(
      int32_t* out_last_attempt_error,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetLastAttemptErrorAsync(
      base::OnceCallback<void(int32_t /*last_attempt_error*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterStatusUpdateAdvancedSignalHandler(
      const base::RepeatingCallback<void(const update_engine::StatusResult&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::UpdateEngineInterface.
class UpdateEngineInterfaceProxy final : public UpdateEngineInterfaceProxyInterface {
 public:
  UpdateEngineInterfaceProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  UpdateEngineInterfaceProxy(const UpdateEngineInterfaceProxy&) = delete;
  UpdateEngineInterfaceProxy& operator=(const UpdateEngineInterfaceProxy&) = delete;

  ~UpdateEngineInterfaceProxy() override {
  }

  void RegisterStatusUpdateAdvancedSignalHandler(
      const base::RepeatingCallback<void(const update_engine::StatusResult&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "StatusUpdateAdvanced",
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

  bool Update(
      const update_engine::UpdateParams& in_update_params,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "Update",
        error,
        in_update_params);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void UpdateAsync(
      const update_engine::UpdateParams& in_update_params,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "Update",
        std::move(success_callback),
        std::move(error_callback),
        in_update_params);
  }

  bool ApplyDeferredUpdate(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "ApplyDeferredUpdate",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ApplyDeferredUpdateAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "ApplyDeferredUpdate",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool AttemptInstall(
      const std::string& in_omaha_url,
      const std::vector<std::string>& in_dlc_ids,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "AttemptInstall",
        error,
        in_omaha_url,
        in_dlc_ids);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void AttemptInstallAsync(
      const std::string& in_omaha_url,
      const std::vector<std::string>& in_dlc_ids,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "AttemptInstall",
        std::move(success_callback),
        std::move(error_callback),
        in_omaha_url,
        in_dlc_ids);
  }

  bool AttemptRollback(
      bool in_powerwash,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "AttemptRollback",
        error,
        in_powerwash);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void AttemptRollbackAsync(
      bool in_powerwash,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "AttemptRollback",
        std::move(success_callback),
        std::move(error_callback),
        in_powerwash);
  }

  bool CanRollback(
      bool* out_can_rollback,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "CanRollback",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_can_rollback);
  }

  void CanRollbackAsync(
      base::OnceCallback<void(bool /*can_rollback*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "CanRollback",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool ResetStatus(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "ResetStatus",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ResetStatusAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "ResetStatus",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool SetDlcActiveValue(
      bool in_is_active,
      const std::string& in_dlc_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "SetDlcActiveValue",
        error,
        in_is_active,
        in_dlc_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetDlcActiveValueAsync(
      bool in_is_active,
      const std::string& in_dlc_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "SetDlcActiveValue",
        std::move(success_callback),
        std::move(error_callback),
        in_is_active,
        in_dlc_id);
  }

  bool GetStatusAdvanced(
      update_engine::StatusResult* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetStatusAdvanced",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_status);
  }

  void GetStatusAdvancedAsync(
      base::OnceCallback<void(const update_engine::StatusResult& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetStatusAdvanced",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool SetStatus(
      int32_t in_update_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "SetStatus",
        error,
        in_update_status);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetStatusAsync(
      int32_t in_update_status,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "SetStatus",
        std::move(success_callback),
        std::move(error_callback),
        in_update_status);
  }

  bool RebootIfNeeded(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "RebootIfNeeded",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RebootIfNeededAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "RebootIfNeeded",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool SetChannel(
      const std::string& in_target_channel,
      bool in_is_powerwash_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "SetChannel",
        error,
        in_target_channel,
        in_is_powerwash_allowed);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetChannelAsync(
      const std::string& in_target_channel,
      bool in_is_powerwash_allowed,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "SetChannel",
        std::move(success_callback),
        std::move(error_callback),
        in_target_channel,
        in_is_powerwash_allowed);
  }

  bool GetChannel(
      bool in_get_current_channel,
      std::string* out_channel,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetChannel",
        error,
        in_get_current_channel);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_channel);
  }

  void GetChannelAsync(
      bool in_get_current_channel,
      base::OnceCallback<void(const std::string& /*channel*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetChannel",
        std::move(success_callback),
        std::move(error_callback),
        in_get_current_channel);
  }

  bool SetCohortHint(
      const std::string& in_cohort_hint,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "SetCohortHint",
        error,
        in_cohort_hint);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetCohortHintAsync(
      const std::string& in_cohort_hint,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "SetCohortHint",
        std::move(success_callback),
        std::move(error_callback),
        in_cohort_hint);
  }

  bool GetCohortHint(
      std::string* out_cohort_hint,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetCohortHint",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_cohort_hint);
  }

  void GetCohortHintAsync(
      base::OnceCallback<void(const std::string& /*cohort_hint*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetCohortHint",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool SetP2PUpdatePermission(
      bool in_enabled,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "SetP2PUpdatePermission",
        error,
        in_enabled);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetP2PUpdatePermissionAsync(
      bool in_enabled,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "SetP2PUpdatePermission",
        std::move(success_callback),
        std::move(error_callback),
        in_enabled);
  }

  bool GetP2PUpdatePermission(
      bool* out_enabled,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetP2PUpdatePermission",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_enabled);
  }

  void GetP2PUpdatePermissionAsync(
      base::OnceCallback<void(bool /*enabled*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetP2PUpdatePermission",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool SetUpdateOverCellularPermission(
      bool in_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "SetUpdateOverCellularPermission",
        error,
        in_allowed);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetUpdateOverCellularPermissionAsync(
      bool in_allowed,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "SetUpdateOverCellularPermission",
        std::move(success_callback),
        std::move(error_callback),
        in_allowed);
  }

  bool SetUpdateOverCellularTarget(
      const std::string& in_target_version,
      int64_t in_target_size,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "SetUpdateOverCellularTarget",
        error,
        in_target_version,
        in_target_size);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetUpdateOverCellularTargetAsync(
      const std::string& in_target_version,
      int64_t in_target_size,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "SetUpdateOverCellularTarget",
        std::move(success_callback),
        std::move(error_callback),
        in_target_version,
        in_target_size);
  }

  bool GetUpdateOverCellularPermission(
      bool* out_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetUpdateOverCellularPermission",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_allowed);
  }

  void GetUpdateOverCellularPermissionAsync(
      base::OnceCallback<void(bool /*allowed*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetUpdateOverCellularPermission",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool ToggleFeature(
      const std::string& in_feature,
      bool in_enable,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "ToggleFeature",
        error,
        in_feature,
        in_enable);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ToggleFeatureAsync(
      const std::string& in_feature,
      bool in_enable,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "ToggleFeature",
        std::move(success_callback),
        std::move(error_callback),
        in_feature,
        in_enable);
  }

  bool IsFeatureEnabled(
      const std::string& in_feature,
      bool* out_enabled,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "IsFeatureEnabled",
        error,
        in_feature);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_enabled);
  }

  void IsFeatureEnabledAsync(
      const std::string& in_feature,
      base::OnceCallback<void(bool /*enabled*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "IsFeatureEnabled",
        std::move(success_callback),
        std::move(error_callback),
        in_feature);
  }

  bool GetDurationSinceUpdate(
      int64_t* out_usec_wallclock,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetDurationSinceUpdate",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_usec_wallclock);
  }

  void GetDurationSinceUpdateAsync(
      base::OnceCallback<void(int64_t /*usec_wallclock*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetDurationSinceUpdate",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool GetPrevVersion(
      std::string* out_prev_version,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetPrevVersion",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_prev_version);
  }

  void GetPrevVersionAsync(
      base::OnceCallback<void(const std::string& /*prev_version*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetPrevVersion",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool GetRollbackPartition(
      std::string* out_rollback_partition_name,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetRollbackPartition",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_rollback_partition_name);
  }

  void GetRollbackPartitionAsync(
      base::OnceCallback<void(const std::string& /*rollback_partition_name*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetRollbackPartition",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool GetLastAttemptError(
      int32_t* out_last_attempt_error,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetLastAttemptError",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_last_attempt_error);
  }

  void GetLastAttemptErrorAsync(
      base::OnceCallback<void(int32_t /*last_attempt_error*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetLastAttemptError",
        std::move(success_callback),
        std::move(error_callback));
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.UpdateEngine"};
  const dbus::ObjectPath object_path_{"/org/chromium/UpdateEngine"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_UPDATE_ENGINE_CLIENT_OUT_DEFAULT_GEN_INCLUDE_UPDATE_ENGINE_DBUS_PROXIES_H
