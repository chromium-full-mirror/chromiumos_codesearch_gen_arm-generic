// Automatic generation of D-Bus interface mock proxies for:
//  - org.chromium.UpdateEngineInterface
#ifndef ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_UPDATE_ENGINE_CLIENT_OUT_DEFAULT_GEN_INCLUDE_UPDATE_ENGINE_DBUS_PROXY_MOCKS_H
#define ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_UPDATE_ENGINE_CLIENT_OUT_DEFAULT_GEN_INCLUDE_UPDATE_ENGINE_DBUS_PROXY_MOCKS_H
#include <string>
#include <vector>

#include <base/callback_forward.h>
#include <base/logging.h>
#include <brillo/any.h>
#include <brillo/errors/error.h>
#include <brillo/variant_dictionary.h>
#include <gmock/gmock.h>

#include "update_engine/dbus-proxies.h"

namespace org {
namespace chromium {

// Mock object for UpdateEngineInterfaceProxyInterface.
class UpdateEngineInterfaceProxyMock : public UpdateEngineInterfaceProxyInterface {
 public:
  UpdateEngineInterfaceProxyMock() = default;
  UpdateEngineInterfaceProxyMock(const UpdateEngineInterfaceProxyMock&) = delete;
  UpdateEngineInterfaceProxyMock& operator=(const UpdateEngineInterfaceProxyMock&) = delete;

  MOCK_METHOD3(Update,
               bool(const update_engine::UpdateParams& /*in_update_params*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(UpdateAsync,
               void(const update_engine::UpdateParams& /*in_update_params*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(ApplyDeferredUpdate,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(ApplyDeferredUpdateAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(AttemptInstall,
               bool(const std::string& /*in_omaha_url*/,
                    const std::vector<std::string>& /*in_dlc_ids*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(AttemptInstallAsync,
               void(const std::string& /*in_omaha_url*/,
                    const std::vector<std::string>& /*in_dlc_ids*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(AttemptRollback,
               bool(bool /*in_powerwash*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(AttemptRollbackAsync,
               void(bool /*in_powerwash*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(CanRollback,
               bool(bool* /*out_can_rollback*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(CanRollbackAsync,
               void(base::OnceCallback<void(bool /*can_rollback*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(ResetStatus,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(ResetStatusAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetDlcActiveValue,
               bool(bool /*in_is_active*/,
                    const std::string& /*in_dlc_id*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SetDlcActiveValueAsync,
               void(bool /*in_is_active*/,
                    const std::string& /*in_dlc_id*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetStatusAdvanced,
               bool(update_engine::StatusResult* /*out_status*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetStatusAdvancedAsync,
               void(base::OnceCallback<void(const update_engine::StatusResult& /*status*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetStatus,
               bool(int32_t /*in_update_status*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetStatusAsync,
               void(int32_t /*in_update_status*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(RebootIfNeeded,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(RebootIfNeededAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetChannel,
               bool(const std::string& /*in_target_channel*/,
                    bool /*in_is_powerwash_allowed*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SetChannelAsync,
               void(const std::string& /*in_target_channel*/,
                    bool /*in_is_powerwash_allowed*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetChannel,
               bool(bool /*in_get_current_channel*/,
                    std::string* /*out_channel*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetChannelAsync,
               void(bool /*in_get_current_channel*/,
                    base::OnceCallback<void(const std::string& /*channel*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetCohortHint,
               bool(const std::string& /*in_cohort_hint*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetCohortHintAsync,
               void(const std::string& /*in_cohort_hint*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetCohortHint,
               bool(std::string* /*out_cohort_hint*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetCohortHintAsync,
               void(base::OnceCallback<void(const std::string& /*cohort_hint*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetP2PUpdatePermission,
               bool(bool /*in_enabled*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetP2PUpdatePermissionAsync,
               void(bool /*in_enabled*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetP2PUpdatePermission,
               bool(bool* /*out_enabled*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetP2PUpdatePermissionAsync,
               void(base::OnceCallback<void(bool /*enabled*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetUpdateOverCellularPermission,
               bool(bool /*in_allowed*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetUpdateOverCellularPermissionAsync,
               void(bool /*in_allowed*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetUpdateOverCellularTarget,
               bool(const std::string& /*in_target_version*/,
                    int64_t /*in_target_size*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SetUpdateOverCellularTargetAsync,
               void(const std::string& /*in_target_version*/,
                    int64_t /*in_target_size*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetUpdateOverCellularPermission,
               bool(bool* /*out_allowed*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetUpdateOverCellularPermissionAsync,
               void(base::OnceCallback<void(bool /*allowed*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ToggleFeature,
               bool(const std::string& /*in_feature*/,
                    bool /*in_enable*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(ToggleFeatureAsync,
               void(const std::string& /*in_feature*/,
                    bool /*in_enable*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(IsFeatureEnabled,
               bool(const std::string& /*in_feature*/,
                    bool* /*out_enabled*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(IsFeatureEnabledAsync,
               void(const std::string& /*in_feature*/,
                    base::OnceCallback<void(bool /*enabled*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetDurationSinceUpdate,
               bool(int64_t* /*out_usec_wallclock*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetDurationSinceUpdateAsync,
               void(base::OnceCallback<void(int64_t /*usec_wallclock*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetPrevVersion,
               bool(std::string* /*out_prev_version*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetPrevVersionAsync,
               void(base::OnceCallback<void(const std::string& /*prev_version*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetRollbackPartition,
               bool(std::string* /*out_rollback_partition_name*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetRollbackPartitionAsync,
               void(base::OnceCallback<void(const std::string& /*rollback_partition_name*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetLastAttemptError,
               bool(int32_t* /*out_last_attempt_error*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetLastAttemptErrorAsync,
               void(base::OnceCallback<void(int32_t /*last_attempt_error*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  void RegisterStatusUpdateAdvancedSignalHandler(
    const base::RepeatingCallback<void(const update_engine::StatusResult&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterStatusUpdateAdvancedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterStatusUpdateAdvancedSignalHandler,
               void(const base::RepeatingCallback<void(const update_engine::StatusResult&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_UPDATE_ENGINE_CLIENT_OUT_DEFAULT_GEN_INCLUDE_UPDATE_ENGINE_DBUS_PROXY_MOCKS_H
