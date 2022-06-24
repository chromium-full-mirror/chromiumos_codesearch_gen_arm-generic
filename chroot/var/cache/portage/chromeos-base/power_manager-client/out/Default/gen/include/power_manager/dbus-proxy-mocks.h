// Automatic generation of D-Bus interface mock proxies for:
//  - org.chromium.PowerManager
#ifndef ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_POWER_MANAGER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_POWER_MANAGER_DBUS_PROXY_MOCKS_H
#define ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_POWER_MANAGER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_POWER_MANAGER_DBUS_PROXY_MOCKS_H
#include <string>
#include <vector>

#include <base/callback_forward.h>
#include <base/logging.h>
#include <brillo/any.h>
#include <brillo/errors/error.h>
#include <brillo/variant_dictionary.h>
#include <gmock/gmock.h>

#include "power_manager/dbus-proxies.h"

namespace org {
namespace chromium {

// Mock object for PowerManagerProxyInterface.
class PowerManagerProxyMock : public PowerManagerProxyInterface {
 public:
  PowerManagerProxyMock() = default;
  PowerManagerProxyMock(const PowerManagerProxyMock&) = delete;
  PowerManagerProxyMock& operator=(const PowerManagerProxyMock&) = delete;

  MOCK_METHOD4(RequestShutdown,
               bool(int32_t /*in_reason*/,
                    const std::string& /*in_description*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(RequestShutdownAsync,
               void(int32_t /*in_reason*/,
                    const std::string& /*in_description*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RequestRestart,
               bool(int32_t /*in_reason*/,
                    const std::string& /*in_description*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(RequestRestartAsync,
               void(int32_t /*in_reason*/,
                    const std::string& /*in_description*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(ChangeWifiRegDomain,
               bool(int32_t /*in_domain*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ChangeWifiRegDomainAsync,
               void(int32_t /*in_domain*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(RequestSuspend,
               bool(uint64_t /*in_external_wakeup_count*/,
                    int32_t /*in_wakeup_timeout*/,
                    uint32_t /*in_suspend_flavor*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(RequestSuspendAsync,
               void(uint64_t /*in_external_wakeup_count*/,
                    int32_t /*in_wakeup_timeout*/,
                    uint32_t /*in_suspend_flavor*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetScreenBrightness,
               bool(const std::vector<uint8_t>& /*in_serialized_proto*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetScreenBrightnessAsync,
               void(const std::vector<uint8_t>& /*in_serialized_proto*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(DecreaseScreenBrightness,
               bool(bool /*in_allow_off*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(DecreaseScreenBrightnessAsync,
               void(bool /*in_allow_off*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(IncreaseScreenBrightness,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(IncreaseScreenBrightnessAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetScreenBrightnessPercent,
               bool(double* /*out_percent*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetScreenBrightnessPercentAsync,
               void(base::OnceCallback<void(double /*percent*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(DecreaseKeyboardBrightness,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(DecreaseKeyboardBrightnessAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(IncreaseKeyboardBrightness,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(IncreaseKeyboardBrightnessAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetPowerSupplyProperties,
               bool(std::vector<uint8_t>* /*out_serialized_proto*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetPowerSupplyPropertiesAsync,
               void(base::OnceCallback<void(const std::vector<uint8_t>& /*serialized_proto*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(GetBatteryState,
               bool(uint32_t* /*out_external_power_type*/,
                    uint32_t* /*out_battery_state*/,
                    double* /*out_display_battery_percentage*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetBatteryStateAsync,
               void(base::OnceCallback<void(uint32_t /*external_power_type*/, uint32_t /*battery_state*/, double /*display_battery_percentage*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(HandleVideoActivity,
               bool(bool /*in_fullscreen*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(HandleVideoActivityAsync,
               void(bool /*in_fullscreen*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(HandleUserActivity,
               bool(int32_t /*in_type*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(HandleUserActivityAsync,
               void(int32_t /*in_type*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetIsProjecting,
               bool(bool /*in_is_projecting*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetIsProjectingAsync,
               void(bool /*in_is_projecting*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetPolicy,
               bool(const std::vector<uint8_t>& /*in_serialized_proto*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetPolicyAsync,
               void(const std::vector<uint8_t>& /*in_serialized_proto*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetPowerSource,
               bool(const std::string& /*in_id*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetPowerSourceAsync,
               void(const std::string& /*in_id*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(HandlePowerButtonAcknowledgment,
               bool(int64_t /*in_timestamp_internal*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(HandlePowerButtonAcknowledgmentAsync,
               void(int64_t /*in_timestamp_internal*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(IgnoreNextPowerButtonPress,
               bool(int64_t /*in_timeout_internal*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(IgnoreNextPowerButtonPressAsync,
               void(int64_t /*in_timeout_internal*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RegisterSuspendDelay,
               bool(const std::vector<uint8_t>& /*in_serialized_request_proto*/,
                    std::vector<uint8_t>* /*out_serialized_reply_proto*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RegisterSuspendDelayAsync,
               void(const std::vector<uint8_t>& /*in_serialized_request_proto*/,
                    base::OnceCallback<void(const std::vector<uint8_t>& /*serialized_reply_proto*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(UnregisterSuspendDelay,
               bool(const std::vector<uint8_t>& /*in_serialized_proto*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(UnregisterSuspendDelayAsync,
               void(const std::vector<uint8_t>& /*in_serialized_proto*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(HandleSuspendReadiness,
               bool(const std::vector<uint8_t>& /*in_serialized_proto*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(HandleSuspendReadinessAsync,
               void(const std::vector<uint8_t>& /*in_serialized_proto*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RegisterDarkSuspendDelay,
               bool(const std::vector<uint8_t>& /*in_serialized_request_proto*/,
                    std::vector<uint8_t>* /*out_serialized_reply_proto*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RegisterDarkSuspendDelayAsync,
               void(const std::vector<uint8_t>& /*in_serialized_request_proto*/,
                    base::OnceCallback<void(const std::vector<uint8_t>& /*serialized_reply_proto*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(UnregisterDarkSuspendDelay,
               bool(const std::vector<uint8_t>& /*in_serialized_proto*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(UnregisterDarkSuspendDelayAsync,
               void(const std::vector<uint8_t>& /*in_serialized_proto*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(HandleDarkSuspendReadiness,
               bool(const std::vector<uint8_t>& /*in_serialized_proto*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(HandleDarkSuspendReadinessAsync,
               void(const std::vector<uint8_t>& /*in_serialized_proto*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(RecordDarkResumeWakeReason,
               bool(const std::vector<uint8_t>& /*in_serialized_proto*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RecordDarkResumeWakeReasonAsync,
               void(const std::vector<uint8_t>& /*in_serialized_proto*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetInactivityDelays,
               bool(std::vector<uint8_t>* /*out_serialized_reply_proto*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetInactivityDelaysAsync,
               void(base::OnceCallback<void(const std::vector<uint8_t>& /*serialized_reply_proto*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(HasAmbientColorDevice,
               bool(bool* /*out_has_device*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(HasAmbientColorDeviceAsync,
               void(base::OnceCallback<void(bool /*has_device*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetThermalState,
               bool(std::vector<uint8_t>* /*out_serialized_proto*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetThermalStateAsync,
               void(base::OnceCallback<void(const std::vector<uint8_t>& /*serialized_proto*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetExternalDisplayALSBrightness,
               bool(bool /*in_enabled*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetExternalDisplayALSBrightnessAsync,
               void(bool /*in_enabled*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetExternalDisplayALSBrightness,
               bool(bool* /*out_enabled*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetExternalDisplayALSBrightnessAsync,
               void(base::OnceCallback<void(bool /*enabled*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(ChargeNowForAdaptiveCharging,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(ChargeNowForAdaptiveChargingAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(BatteryStatePoll,
               bool(uint32_t* /*out_external_power_type*/,
                    uint32_t* /*out_battery_state*/,
                    double* /*out_display_battery_percentage*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(BatteryStatePollAsync,
               void(base::OnceCallback<void(uint32_t /*external_power_type*/, uint32_t /*battery_state*/, double /*display_battery_percentage*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  void RegisterScreenBrightnessChangedSignalHandler(
    const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterScreenBrightnessChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterScreenBrightnessChangedSignalHandler,
               void(const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterKeyboardBrightnessChangedSignalHandler(
    const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterKeyboardBrightnessChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterKeyboardBrightnessChangedSignalHandler,
               void(const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterPeripheralBatteryStatusSignalHandler(
    const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterPeripheralBatteryStatusSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterPeripheralBatteryStatusSignalHandler,
               void(const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterPowerSupplyPollSignalHandler(
    const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterPowerSupplyPollSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterPowerSupplyPollSignalHandler,
               void(const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterLidOpenedSignalHandler(
    base::RepeatingClosure signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterLidOpenedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterLidOpenedSignalHandler,
               void(base::RepeatingClosure /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterLidClosedSignalHandler(
    base::RepeatingClosure signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterLidClosedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterLidClosedSignalHandler,
               void(base::RepeatingClosure /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterSuspendImminentSignalHandler(
    const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterSuspendImminentSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterSuspendImminentSignalHandler,
               void(const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterSuspendDoneSignalHandler(
    const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterSuspendDoneSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterSuspendDoneSignalHandler,
               void(const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterDarkSuspendImminentSignalHandler(
    const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterDarkSuspendImminentSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterDarkSuspendImminentSignalHandler,
               void(const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterHibernateResumeReadySignalHandler(
    const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterHibernateResumeReadySignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterHibernateResumeReadySignalHandler,
               void(const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterInputEventSignalHandler(
    const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterInputEventSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterInputEventSignalHandler,
               void(const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterIdleActionImminentSignalHandler(
    const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterIdleActionImminentSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterIdleActionImminentSignalHandler,
               void(const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterIdleActionDeferredSignalHandler(
    base::RepeatingClosure signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterIdleActionDeferredSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterIdleActionDeferredSignalHandler,
               void(base::RepeatingClosure /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterScreenIdleStateChangedSignalHandler(
    const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterScreenIdleStateChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterScreenIdleStateChangedSignalHandler,
               void(const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterInactivityDelaysChangedSignalHandler(
    const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterInactivityDelaysChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterInactivityDelaysChangedSignalHandler,
               void(const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterAmbientColorTemperatureChangedSignalHandler(
    const base::RepeatingCallback<void(uint32_t)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterAmbientColorTemperatureChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterAmbientColorTemperatureChangedSignalHandler,
               void(const base::RepeatingCallback<void(uint32_t)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterThermalEventSignalHandler(
    const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterThermalEventSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterThermalEventSignalHandler,
               void(const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_POWER_MANAGER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_POWER_MANAGER_DBUS_PROXY_MOCKS_H
