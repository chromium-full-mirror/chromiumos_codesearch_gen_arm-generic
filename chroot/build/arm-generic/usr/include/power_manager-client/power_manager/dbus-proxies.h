// Automatic generation of D-Bus interfaces:
//  - org.chromium.PowerManager
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_POWER_MANAGER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_POWER_MANAGER_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_POWER_MANAGER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_POWER_MANAGER_DBUS_PROXIES_H
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

// Abstract interface proxy for org::chromium::PowerManager.
class PowerManagerProxyInterface {
 public:
  virtual ~PowerManagerProxyInterface() = default;

  // The |reason| arg is a power_manager::RequestShutdownReason value.
  // The |description| arg is a human-readable string describing the reason
  // for the request; it is logged by powerd.
  virtual bool RequestShutdown(
      int32_t in_reason,
      const std::string& in_description,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |reason| arg is a power_manager::RequestShutdownReason value.
  // The |description| arg is a human-readable string describing the reason
  // for the request; it is logged by powerd.
  virtual void RequestShutdownAsync(
      int32_t in_reason,
      const std::string& in_description,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |reason| arg is a power_manager::RequestRestartReason value.
  // The |description| arg is a human-readable string describing the reason
  // for the request; it is logged by powerd.
  virtual bool RequestRestart(
      int32_t in_reason,
      const std::string& in_description,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |reason| arg is a power_manager::RequestRestartReason value.
  // The |description| arg is a human-readable string describing the reason
  // for the request; it is logged by powerd.
  virtual void RequestRestartAsync(
      int32_t in_reason,
      const std::string& in_description,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |domain| arg is a power_manager::WifiRegDomainDbus value.
  // Change the WiFi regdomain.
  virtual bool ChangeWifiRegDomain(
      int32_t in_domain,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |domain| arg is a power_manager::WifiRegDomainDbus value.
  // Change the WiFi regdomain.
  virtual void ChangeWifiRegDomainAsync(
      int32_t in_domain,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |external_wakeup_count| arg is optional, and it will call two
  // different methods in the backend. This can't be expressed in the DBus
  // Introspection XML file.
  //
  // The |wakeup_timeout| arg is optional. It specifies a timeout after
  // which the system should resume. Supply 0 for no timeout.
  //
  // The |suspend_flavor| arg is optional. It specifies the type of
  // suspend to perform. See enum RequestSuspendFlavor for values.
  // Not specifying a value is equivalent to 0, REQUEST_SUSPEND_DEFAULT.
  virtual bool RequestSuspend(
      uint64_t in_external_wakeup_count,
      int32_t in_wakeup_timeout,
      uint32_t in_suspend_flavor,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |external_wakeup_count| arg is optional, and it will call two
  // different methods in the backend. This can't be expressed in the DBus
  // Introspection XML file.
  //
  // The |wakeup_timeout| arg is optional. It specifies a timeout after
  // which the system should resume. Supply 0 for no timeout.
  //
  // The |suspend_flavor| arg is optional. It specifies the type of
  // suspend to perform. See enum RequestSuspendFlavor for values.
  // Not specifying a value is equivalent to 0, REQUEST_SUSPEND_DEFAULT.
  virtual void RequestSuspendAsync(
      uint64_t in_external_wakeup_count,
      int32_t in_wakeup_timeout,
      uint32_t in_suspend_flavor,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |serialized_proto| arg is a serialized
  // power_manager::SetBacklightBrightnessRequest protobuf.
  virtual bool SetScreenBrightness(
      const std::vector<uint8_t>& in_serialized_proto,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |serialized_proto| arg is a serialized
  // power_manager::SetBacklightBrightnessRequest protobuf.
  virtual void SetScreenBrightnessAsync(
      const std::vector<uint8_t>& in_serialized_proto,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool DecreaseScreenBrightness(
      bool in_allow_off,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DecreaseScreenBrightnessAsync(
      bool in_allow_off,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool IncreaseScreenBrightness(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void IncreaseScreenBrightnessAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetScreenBrightnessPercent(
      double* out_percent,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetScreenBrightnessPercentAsync(
      base::OnceCallback<void(double /*percent*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool DecreaseKeyboardBrightness(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DecreaseKeyboardBrightnessAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool IncreaseKeyboardBrightness(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void IncreaseKeyboardBrightnessAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |serialized_proto| arg is a serialized
  // power_manager::PowerSupplyProperties protobuf.
  virtual bool GetPowerSupplyProperties(
      std::vector<uint8_t>* out_serialized_proto,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |serialized_proto| arg is a serialized
  // power_manager::PowerSupplyProperties protobuf.
  virtual void GetPowerSupplyPropertiesAsync(
      base::OnceCallback<void(const std::vector<uint8_t>& /*serialized_proto*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |external_power_type| arg is a native enum:
  // power_manager::system::ExternalPowerType.
  // The |battery_state| arg is an enum created to be compatible
  // with the upower battery state enum:
  // power_manager::system::UpowerBatteryState.
  virtual bool GetBatteryState(
      uint32_t* out_external_power_type,
      uint32_t* out_battery_state,
      double* out_display_battery_percentage,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |external_power_type| arg is a native enum:
  // power_manager::system::ExternalPowerType.
  // The |battery_state| arg is an enum created to be compatible
  // with the upower battery state enum:
  // power_manager::system::UpowerBatteryState.
  virtual void GetBatteryStateAsync(
      base::OnceCallback<void(uint32_t /*external_power_type*/, uint32_t /*battery_state*/, double /*display_battery_percentage*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool HandleVideoActivity(
      bool in_fullscreen,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void HandleVideoActivityAsync(
      bool in_fullscreen,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |type| arg is a power_manager::UserActivityType.
  virtual bool HandleUserActivity(
      int32_t in_type,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |type| arg is a power_manager::UserActivityType.
  virtual void HandleUserActivityAsync(
      int32_t in_type,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetIsProjecting(
      bool in_is_projecting,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetIsProjectingAsync(
      bool in_is_projecting,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |serialized_proto| arg is a serialized
  // power_manager::PowerManagementPolicy protobuf.
  virtual bool SetPolicy(
      const std::vector<uint8_t>& in_serialized_proto,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |serialized_proto| arg is a serialized
  // power_manager::PowerManagementPolicy protobuf.
  virtual void SetPolicyAsync(
      const std::vector<uint8_t>& in_serialized_proto,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetPowerSource(
      const std::string& in_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetPowerSourceAsync(
      const std::string& in_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |timestamp_internal| arg is represented as the return value of
  // base::TimeTicks::ToInternalValue().
  virtual bool HandlePowerButtonAcknowledgment(
      int64_t in_timestamp_internal,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |timestamp_internal| arg is represented as the return value of
  // base::TimeTicks::ToInternalValue().
  virtual void HandlePowerButtonAcknowledgmentAsync(
      int64_t in_timestamp_internal,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |timeout_internal| arg is represented as the return value of
  // base::TimeDelta::ToInternalValue(). Setting it to 0 cancels a
  // previously set period.
  virtual bool IgnoreNextPowerButtonPress(
      int64_t in_timeout_internal,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |timeout_internal| arg is represented as the return value of
  // base::TimeDelta::ToInternalValue(). Setting it to 0 cancels a
  // previously set period.
  virtual void IgnoreNextPowerButtonPressAsync(
      int64_t in_timeout_internal,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |serialized_request_proto| arg is a serialized
  // power_manager::RegisterSuspendDelayRequest protobuf.
  // The |serialized_reply_proto| arg is a serialized
  // RegisterSuspendDelayReply protobuf.
  virtual bool RegisterSuspendDelay(
      const std::vector<uint8_t>& in_serialized_request_proto,
      std::vector<uint8_t>* out_serialized_reply_proto,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |serialized_request_proto| arg is a serialized
  // power_manager::RegisterSuspendDelayRequest protobuf.
  // The |serialized_reply_proto| arg is a serialized
  // RegisterSuspendDelayReply protobuf.
  virtual void RegisterSuspendDelayAsync(
      const std::vector<uint8_t>& in_serialized_request_proto,
      base::OnceCallback<void(const std::vector<uint8_t>& /*serialized_reply_proto*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |serialized_proto| arg is a serialized
  // power_manager::UnregisterSuspendDelayRequest protobuf.
  virtual bool UnregisterSuspendDelay(
      const std::vector<uint8_t>& in_serialized_proto,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |serialized_proto| arg is a serialized
  // power_manager::UnregisterSuspendDelayRequest protobuf.
  virtual void UnregisterSuspendDelayAsync(
      const std::vector<uint8_t>& in_serialized_proto,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |serialized_proto| arg is a serialized
  // power_manager::SuspendReadinessInfo protobuf.
  virtual bool HandleSuspendReadiness(
      const std::vector<uint8_t>& in_serialized_proto,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |serialized_proto| arg is a serialized
  // power_manager::SuspendReadinessInfo protobuf.
  virtual void HandleSuspendReadinessAsync(
      const std::vector<uint8_t>& in_serialized_proto,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |serialized_request_proto| arg is a serialized
  // power_manager::RegisterSuspendDelayRequest protobuf.
  // The |serialized_reply_proto| arg is a serialized
  // RegisterSuspendDelayReply protobuf.
  virtual bool RegisterDarkSuspendDelay(
      const std::vector<uint8_t>& in_serialized_request_proto,
      std::vector<uint8_t>* out_serialized_reply_proto,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |serialized_request_proto| arg is a serialized
  // power_manager::RegisterSuspendDelayRequest protobuf.
  // The |serialized_reply_proto| arg is a serialized
  // RegisterSuspendDelayReply protobuf.
  virtual void RegisterDarkSuspendDelayAsync(
      const std::vector<uint8_t>& in_serialized_request_proto,
      base::OnceCallback<void(const std::vector<uint8_t>& /*serialized_reply_proto*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |serialized_proto| arg is a serialized
  // power_manager::UnregisterSuspendDelayRequest protobuf.
  virtual bool UnregisterDarkSuspendDelay(
      const std::vector<uint8_t>& in_serialized_proto,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |serialized_proto| arg is a serialized
  // power_manager::UnregisterSuspendDelayRequest protobuf.
  virtual void UnregisterDarkSuspendDelayAsync(
      const std::vector<uint8_t>& in_serialized_proto,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |serialized_proto| arg is a serialized
  // power_manager::SuspendReadinessInfo protobuf.
  virtual bool HandleDarkSuspendReadiness(
      const std::vector<uint8_t>& in_serialized_proto,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |serialized_proto| arg is a serialized
  // power_manager::SuspendReadinessInfo protobuf.
  virtual void HandleDarkSuspendReadinessAsync(
      const std::vector<uint8_t>& in_serialized_proto,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |serialized_proto| arg is a serialized
  // power_manager::DarkResumeWakeReason protobuf.
  virtual bool RecordDarkResumeWakeReason(
      const std::vector<uint8_t>& in_serialized_proto,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |serialized_proto| arg is a serialized
  // power_manager::DarkResumeWakeReason protobuf.
  virtual void RecordDarkResumeWakeReasonAsync(
      const std::vector<uint8_t>& in_serialized_proto,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // |serialized_reply_proto| is a serialized
  // power_manager::PowerManagementPolicy::Delays protobuf describing the
  // current inactivity delays.
  virtual bool GetInactivityDelays(
      std::vector<uint8_t>* out_serialized_reply_proto,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // |serialized_reply_proto| is a serialized
  // power_manager::PowerManagementPolicy::Delays protobuf describing the
  // current inactivity delays.
  virtual void GetInactivityDelaysAsync(
      base::OnceCallback<void(const std::vector<uint8_t>& /*serialized_reply_proto*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool HasAmbientColorDevice(
      bool* out_has_device,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void HasAmbientColorDeviceAsync(
      base::OnceCallback<void(bool /*has_device*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |serialized_proto| arg is a serialized
  // power_manager::ThermalEvent protobuf.
  virtual bool GetThermalState(
      std::vector<uint8_t>* out_serialized_proto,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |serialized_proto| arg is a serialized
  // power_manager::ThermalEvent protobuf.
  virtual void GetThermalStateAsync(
      base::OnceCallback<void(const std::vector<uint8_t>& /*serialized_proto*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetExternalDisplayALSBrightness(
      bool in_enabled,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetExternalDisplayALSBrightnessAsync(
      bool in_enabled,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetExternalDisplayALSBrightness(
      bool* out_enabled,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetExternalDisplayALSBrightnessAsync(
      base::OnceCallback<void(bool /*enabled*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Stop delaying charging for Adaptive Charging for this charge session.
  virtual bool ChargeNowForAdaptiveCharging(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Stop delaying charging for Adaptive Charging for this charge session.
  virtual void ChargeNowForAdaptiveChargingAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |external_power_type| arg is a native enum:
  // power_manager::system::ExternalPowerType.
  // The |battery_state| arg is an enum created to be compatible
  // with the upower battery state enum:
  // power_manager::system::UpowerBatteryState.
  virtual bool BatteryStatePoll(
      uint32_t* out_external_power_type,
      uint32_t* out_battery_state,
      double* out_display_battery_percentage,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |external_power_type| arg is a native enum:
  // power_manager::system::ExternalPowerType.
  // The |battery_state| arg is an enum created to be compatible
  // with the upower battery state enum:
  // power_manager::system::UpowerBatteryState.
  virtual void BatteryStatePollAsync(
      base::OnceCallback<void(uint32_t /*external_power_type*/, uint32_t /*battery_state*/, double /*display_battery_percentage*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterScreenBrightnessChangedSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterKeyboardBrightnessChangedSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterPeripheralBatteryStatusSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterPowerSupplyPollSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterLidOpenedSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterLidClosedSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterSuspendImminentSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterSuspendDoneSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterDarkSuspendImminentSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterHibernateResumeReadySignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterInputEventSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterIdleActionImminentSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterIdleActionDeferredSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterScreenIdleStateChangedSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterInactivityDelaysChangedSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterAmbientColorTemperatureChangedSignalHandler(
      const base::RepeatingCallback<void(uint32_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterThermalEventSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::PowerManager.
class PowerManagerProxy final : public PowerManagerProxyInterface {
 public:
  PowerManagerProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  PowerManagerProxy(const PowerManagerProxy&) = delete;
  PowerManagerProxy& operator=(const PowerManagerProxy&) = delete;

  ~PowerManagerProxy() override {
  }

  void RegisterScreenBrightnessChangedSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "ScreenBrightnessChanged",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterKeyboardBrightnessChangedSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "KeyboardBrightnessChanged",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterPeripheralBatteryStatusSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "PeripheralBatteryStatus",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterPowerSupplyPollSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "PowerSupplyPoll",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterLidOpenedSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "LidOpened",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterLidClosedSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "LidClosed",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterSuspendImminentSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "SuspendImminent",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterSuspendDoneSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "SuspendDone",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterDarkSuspendImminentSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "DarkSuspendImminent",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterHibernateResumeReadySignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "HibernateResumeReady",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterInputEventSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "InputEvent",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterIdleActionImminentSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "IdleActionImminent",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterIdleActionDeferredSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "IdleActionDeferred",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterScreenIdleStateChangedSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "ScreenIdleStateChanged",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterInactivityDelaysChangedSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "InactivityDelaysChanged",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterAmbientColorTemperatureChangedSignalHandler(
      const base::RepeatingCallback<void(uint32_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "AmbientColorTemperatureChanged",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterThermalEventSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "ThermalEvent",
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

  // The |reason| arg is a power_manager::RequestShutdownReason value.
  // The |description| arg is a human-readable string describing the reason
  // for the request; it is logged by powerd.
  bool RequestShutdown(
      int32_t in_reason,
      const std::string& in_description,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "RequestShutdown",
        error,
        in_reason,
        in_description);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // The |reason| arg is a power_manager::RequestShutdownReason value.
  // The |description| arg is a human-readable string describing the reason
  // for the request; it is logged by powerd.
  void RequestShutdownAsync(
      int32_t in_reason,
      const std::string& in_description,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "RequestShutdown",
        std::move(success_callback),
        std::move(error_callback),
        in_reason,
        in_description);
  }

  // The |reason| arg is a power_manager::RequestRestartReason value.
  // The |description| arg is a human-readable string describing the reason
  // for the request; it is logged by powerd.
  bool RequestRestart(
      int32_t in_reason,
      const std::string& in_description,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "RequestRestart",
        error,
        in_reason,
        in_description);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // The |reason| arg is a power_manager::RequestRestartReason value.
  // The |description| arg is a human-readable string describing the reason
  // for the request; it is logged by powerd.
  void RequestRestartAsync(
      int32_t in_reason,
      const std::string& in_description,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "RequestRestart",
        std::move(success_callback),
        std::move(error_callback),
        in_reason,
        in_description);
  }

  // The |domain| arg is a power_manager::WifiRegDomainDbus value.
  // Change the WiFi regdomain.
  bool ChangeWifiRegDomain(
      int32_t in_domain,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "ChangeWifiRegDomain",
        error,
        in_domain);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // The |domain| arg is a power_manager::WifiRegDomainDbus value.
  // Change the WiFi regdomain.
  void ChangeWifiRegDomainAsync(
      int32_t in_domain,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "ChangeWifiRegDomain",
        std::move(success_callback),
        std::move(error_callback),
        in_domain);
  }

  // The |external_wakeup_count| arg is optional, and it will call two
  // different methods in the backend. This can't be expressed in the DBus
  // Introspection XML file.
  //
  // The |wakeup_timeout| arg is optional. It specifies a timeout after
  // which the system should resume. Supply 0 for no timeout.
  //
  // The |suspend_flavor| arg is optional. It specifies the type of
  // suspend to perform. See enum RequestSuspendFlavor for values.
  // Not specifying a value is equivalent to 0, REQUEST_SUSPEND_DEFAULT.
  bool RequestSuspend(
      uint64_t in_external_wakeup_count,
      int32_t in_wakeup_timeout,
      uint32_t in_suspend_flavor,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "RequestSuspend",
        error,
        in_external_wakeup_count,
        in_wakeup_timeout,
        in_suspend_flavor);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // The |external_wakeup_count| arg is optional, and it will call two
  // different methods in the backend. This can't be expressed in the DBus
  // Introspection XML file.
  //
  // The |wakeup_timeout| arg is optional. It specifies a timeout after
  // which the system should resume. Supply 0 for no timeout.
  //
  // The |suspend_flavor| arg is optional. It specifies the type of
  // suspend to perform. See enum RequestSuspendFlavor for values.
  // Not specifying a value is equivalent to 0, REQUEST_SUSPEND_DEFAULT.
  void RequestSuspendAsync(
      uint64_t in_external_wakeup_count,
      int32_t in_wakeup_timeout,
      uint32_t in_suspend_flavor,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "RequestSuspend",
        std::move(success_callback),
        std::move(error_callback),
        in_external_wakeup_count,
        in_wakeup_timeout,
        in_suspend_flavor);
  }

  // The |serialized_proto| arg is a serialized
  // power_manager::SetBacklightBrightnessRequest protobuf.
  bool SetScreenBrightness(
      const std::vector<uint8_t>& in_serialized_proto,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "SetScreenBrightness",
        error,
        in_serialized_proto);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // The |serialized_proto| arg is a serialized
  // power_manager::SetBacklightBrightnessRequest protobuf.
  void SetScreenBrightnessAsync(
      const std::vector<uint8_t>& in_serialized_proto,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "SetScreenBrightness",
        std::move(success_callback),
        std::move(error_callback),
        in_serialized_proto);
  }

  bool DecreaseScreenBrightness(
      bool in_allow_off,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "DecreaseScreenBrightness",
        error,
        in_allow_off);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void DecreaseScreenBrightnessAsync(
      bool in_allow_off,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "DecreaseScreenBrightness",
        std::move(success_callback),
        std::move(error_callback),
        in_allow_off);
  }

  bool IncreaseScreenBrightness(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "IncreaseScreenBrightness",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void IncreaseScreenBrightnessAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "IncreaseScreenBrightness",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool GetScreenBrightnessPercent(
      double* out_percent,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "GetScreenBrightnessPercent",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_percent);
  }

  void GetScreenBrightnessPercentAsync(
      base::OnceCallback<void(double /*percent*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "GetScreenBrightnessPercent",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool DecreaseKeyboardBrightness(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "DecreaseKeyboardBrightness",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void DecreaseKeyboardBrightnessAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "DecreaseKeyboardBrightness",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool IncreaseKeyboardBrightness(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "IncreaseKeyboardBrightness",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void IncreaseKeyboardBrightnessAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "IncreaseKeyboardBrightness",
        std::move(success_callback),
        std::move(error_callback));
  }

  // The |serialized_proto| arg is a serialized
  // power_manager::PowerSupplyProperties protobuf.
  bool GetPowerSupplyProperties(
      std::vector<uint8_t>* out_serialized_proto,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "GetPowerSupplyProperties",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_serialized_proto);
  }

  // The |serialized_proto| arg is a serialized
  // power_manager::PowerSupplyProperties protobuf.
  void GetPowerSupplyPropertiesAsync(
      base::OnceCallback<void(const std::vector<uint8_t>& /*serialized_proto*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "GetPowerSupplyProperties",
        std::move(success_callback),
        std::move(error_callback));
  }

  // The |external_power_type| arg is a native enum:
  // power_manager::system::ExternalPowerType.
  // The |battery_state| arg is an enum created to be compatible
  // with the upower battery state enum:
  // power_manager::system::UpowerBatteryState.
  bool GetBatteryState(
      uint32_t* out_external_power_type,
      uint32_t* out_battery_state,
      double* out_display_battery_percentage,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "GetBatteryState",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_external_power_type, out_battery_state, out_display_battery_percentage);
  }

  // The |external_power_type| arg is a native enum:
  // power_manager::system::ExternalPowerType.
  // The |battery_state| arg is an enum created to be compatible
  // with the upower battery state enum:
  // power_manager::system::UpowerBatteryState.
  void GetBatteryStateAsync(
      base::OnceCallback<void(uint32_t /*external_power_type*/, uint32_t /*battery_state*/, double /*display_battery_percentage*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "GetBatteryState",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool HandleVideoActivity(
      bool in_fullscreen,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "HandleVideoActivity",
        error,
        in_fullscreen);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void HandleVideoActivityAsync(
      bool in_fullscreen,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "HandleVideoActivity",
        std::move(success_callback),
        std::move(error_callback),
        in_fullscreen);
  }

  // The |type| arg is a power_manager::UserActivityType.
  bool HandleUserActivity(
      int32_t in_type,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "HandleUserActivity",
        error,
        in_type);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // The |type| arg is a power_manager::UserActivityType.
  void HandleUserActivityAsync(
      int32_t in_type,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "HandleUserActivity",
        std::move(success_callback),
        std::move(error_callback),
        in_type);
  }

  bool SetIsProjecting(
      bool in_is_projecting,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "SetIsProjecting",
        error,
        in_is_projecting);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetIsProjectingAsync(
      bool in_is_projecting,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "SetIsProjecting",
        std::move(success_callback),
        std::move(error_callback),
        in_is_projecting);
  }

  // The |serialized_proto| arg is a serialized
  // power_manager::PowerManagementPolicy protobuf.
  bool SetPolicy(
      const std::vector<uint8_t>& in_serialized_proto,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "SetPolicy",
        error,
        in_serialized_proto);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // The |serialized_proto| arg is a serialized
  // power_manager::PowerManagementPolicy protobuf.
  void SetPolicyAsync(
      const std::vector<uint8_t>& in_serialized_proto,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "SetPolicy",
        std::move(success_callback),
        std::move(error_callback),
        in_serialized_proto);
  }

  bool SetPowerSource(
      const std::string& in_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "SetPowerSource",
        error,
        in_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetPowerSourceAsync(
      const std::string& in_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "SetPowerSource",
        std::move(success_callback),
        std::move(error_callback),
        in_id);
  }

  // The |timestamp_internal| arg is represented as the return value of
  // base::TimeTicks::ToInternalValue().
  bool HandlePowerButtonAcknowledgment(
      int64_t in_timestamp_internal,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "HandlePowerButtonAcknowledgment",
        error,
        in_timestamp_internal);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // The |timestamp_internal| arg is represented as the return value of
  // base::TimeTicks::ToInternalValue().
  void HandlePowerButtonAcknowledgmentAsync(
      int64_t in_timestamp_internal,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "HandlePowerButtonAcknowledgment",
        std::move(success_callback),
        std::move(error_callback),
        in_timestamp_internal);
  }

  // The |timeout_internal| arg is represented as the return value of
  // base::TimeDelta::ToInternalValue(). Setting it to 0 cancels a
  // previously set period.
  bool IgnoreNextPowerButtonPress(
      int64_t in_timeout_internal,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "IgnoreNextPowerButtonPress",
        error,
        in_timeout_internal);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // The |timeout_internal| arg is represented as the return value of
  // base::TimeDelta::ToInternalValue(). Setting it to 0 cancels a
  // previously set period.
  void IgnoreNextPowerButtonPressAsync(
      int64_t in_timeout_internal,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "IgnoreNextPowerButtonPress",
        std::move(success_callback),
        std::move(error_callback),
        in_timeout_internal);
  }

  // The |serialized_request_proto| arg is a serialized
  // power_manager::RegisterSuspendDelayRequest protobuf.
  // The |serialized_reply_proto| arg is a serialized
  // RegisterSuspendDelayReply protobuf.
  bool RegisterSuspendDelay(
      const std::vector<uint8_t>& in_serialized_request_proto,
      std::vector<uint8_t>* out_serialized_reply_proto,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "RegisterSuspendDelay",
        error,
        in_serialized_request_proto);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_serialized_reply_proto);
  }

  // The |serialized_request_proto| arg is a serialized
  // power_manager::RegisterSuspendDelayRequest protobuf.
  // The |serialized_reply_proto| arg is a serialized
  // RegisterSuspendDelayReply protobuf.
  void RegisterSuspendDelayAsync(
      const std::vector<uint8_t>& in_serialized_request_proto,
      base::OnceCallback<void(const std::vector<uint8_t>& /*serialized_reply_proto*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "RegisterSuspendDelay",
        std::move(success_callback),
        std::move(error_callback),
        in_serialized_request_proto);
  }

  // The |serialized_proto| arg is a serialized
  // power_manager::UnregisterSuspendDelayRequest protobuf.
  bool UnregisterSuspendDelay(
      const std::vector<uint8_t>& in_serialized_proto,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "UnregisterSuspendDelay",
        error,
        in_serialized_proto);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // The |serialized_proto| arg is a serialized
  // power_manager::UnregisterSuspendDelayRequest protobuf.
  void UnregisterSuspendDelayAsync(
      const std::vector<uint8_t>& in_serialized_proto,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "UnregisterSuspendDelay",
        std::move(success_callback),
        std::move(error_callback),
        in_serialized_proto);
  }

  // The |serialized_proto| arg is a serialized
  // power_manager::SuspendReadinessInfo protobuf.
  bool HandleSuspendReadiness(
      const std::vector<uint8_t>& in_serialized_proto,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "HandleSuspendReadiness",
        error,
        in_serialized_proto);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // The |serialized_proto| arg is a serialized
  // power_manager::SuspendReadinessInfo protobuf.
  void HandleSuspendReadinessAsync(
      const std::vector<uint8_t>& in_serialized_proto,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "HandleSuspendReadiness",
        std::move(success_callback),
        std::move(error_callback),
        in_serialized_proto);
  }

  // The |serialized_request_proto| arg is a serialized
  // power_manager::RegisterSuspendDelayRequest protobuf.
  // The |serialized_reply_proto| arg is a serialized
  // RegisterSuspendDelayReply protobuf.
  bool RegisterDarkSuspendDelay(
      const std::vector<uint8_t>& in_serialized_request_proto,
      std::vector<uint8_t>* out_serialized_reply_proto,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "RegisterDarkSuspendDelay",
        error,
        in_serialized_request_proto);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_serialized_reply_proto);
  }

  // The |serialized_request_proto| arg is a serialized
  // power_manager::RegisterSuspendDelayRequest protobuf.
  // The |serialized_reply_proto| arg is a serialized
  // RegisterSuspendDelayReply protobuf.
  void RegisterDarkSuspendDelayAsync(
      const std::vector<uint8_t>& in_serialized_request_proto,
      base::OnceCallback<void(const std::vector<uint8_t>& /*serialized_reply_proto*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "RegisterDarkSuspendDelay",
        std::move(success_callback),
        std::move(error_callback),
        in_serialized_request_proto);
  }

  // The |serialized_proto| arg is a serialized
  // power_manager::UnregisterSuspendDelayRequest protobuf.
  bool UnregisterDarkSuspendDelay(
      const std::vector<uint8_t>& in_serialized_proto,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "UnregisterDarkSuspendDelay",
        error,
        in_serialized_proto);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // The |serialized_proto| arg is a serialized
  // power_manager::UnregisterSuspendDelayRequest protobuf.
  void UnregisterDarkSuspendDelayAsync(
      const std::vector<uint8_t>& in_serialized_proto,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "UnregisterDarkSuspendDelay",
        std::move(success_callback),
        std::move(error_callback),
        in_serialized_proto);
  }

  // The |serialized_proto| arg is a serialized
  // power_manager::SuspendReadinessInfo protobuf.
  bool HandleDarkSuspendReadiness(
      const std::vector<uint8_t>& in_serialized_proto,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "HandleDarkSuspendReadiness",
        error,
        in_serialized_proto);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // The |serialized_proto| arg is a serialized
  // power_manager::SuspendReadinessInfo protobuf.
  void HandleDarkSuspendReadinessAsync(
      const std::vector<uint8_t>& in_serialized_proto,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "HandleDarkSuspendReadiness",
        std::move(success_callback),
        std::move(error_callback),
        in_serialized_proto);
  }

  // The |serialized_proto| arg is a serialized
  // power_manager::DarkResumeWakeReason protobuf.
  bool RecordDarkResumeWakeReason(
      const std::vector<uint8_t>& in_serialized_proto,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "RecordDarkResumeWakeReason",
        error,
        in_serialized_proto);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // The |serialized_proto| arg is a serialized
  // power_manager::DarkResumeWakeReason protobuf.
  void RecordDarkResumeWakeReasonAsync(
      const std::vector<uint8_t>& in_serialized_proto,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "RecordDarkResumeWakeReason",
        std::move(success_callback),
        std::move(error_callback),
        in_serialized_proto);
  }

  // |serialized_reply_proto| is a serialized
  // power_manager::PowerManagementPolicy::Delays protobuf describing the
  // current inactivity delays.
  bool GetInactivityDelays(
      std::vector<uint8_t>* out_serialized_reply_proto,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "GetInactivityDelays",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_serialized_reply_proto);
  }

  // |serialized_reply_proto| is a serialized
  // power_manager::PowerManagementPolicy::Delays protobuf describing the
  // current inactivity delays.
  void GetInactivityDelaysAsync(
      base::OnceCallback<void(const std::vector<uint8_t>& /*serialized_reply_proto*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "GetInactivityDelays",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool HasAmbientColorDevice(
      bool* out_has_device,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "HasAmbientColorDevice",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_has_device);
  }

  void HasAmbientColorDeviceAsync(
      base::OnceCallback<void(bool /*has_device*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "HasAmbientColorDevice",
        std::move(success_callback),
        std::move(error_callback));
  }

  // The |serialized_proto| arg is a serialized
  // power_manager::ThermalEvent protobuf.
  bool GetThermalState(
      std::vector<uint8_t>* out_serialized_proto,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "GetThermalState",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_serialized_proto);
  }

  // The |serialized_proto| arg is a serialized
  // power_manager::ThermalEvent protobuf.
  void GetThermalStateAsync(
      base::OnceCallback<void(const std::vector<uint8_t>& /*serialized_proto*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "GetThermalState",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool SetExternalDisplayALSBrightness(
      bool in_enabled,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "SetExternalDisplayALSBrightness",
        error,
        in_enabled);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetExternalDisplayALSBrightnessAsync(
      bool in_enabled,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "SetExternalDisplayALSBrightness",
        std::move(success_callback),
        std::move(error_callback),
        in_enabled);
  }

  bool GetExternalDisplayALSBrightness(
      bool* out_enabled,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "GetExternalDisplayALSBrightness",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_enabled);
  }

  void GetExternalDisplayALSBrightnessAsync(
      base::OnceCallback<void(bool /*enabled*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "GetExternalDisplayALSBrightness",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Stop delaying charging for Adaptive Charging for this charge session.
  bool ChargeNowForAdaptiveCharging(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "ChargeNowForAdaptiveCharging",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Stop delaying charging for Adaptive Charging for this charge session.
  void ChargeNowForAdaptiveChargingAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "ChargeNowForAdaptiveCharging",
        std::move(success_callback),
        std::move(error_callback));
  }

  // The |external_power_type| arg is a native enum:
  // power_manager::system::ExternalPowerType.
  // The |battery_state| arg is an enum created to be compatible
  // with the upower battery state enum:
  // power_manager::system::UpowerBatteryState.
  bool BatteryStatePoll(
      uint32_t* out_external_power_type,
      uint32_t* out_battery_state,
      double* out_display_battery_percentage,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "BatteryStatePoll",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_external_power_type, out_battery_state, out_display_battery_percentage);
  }

  // The |external_power_type| arg is a native enum:
  // power_manager::system::ExternalPowerType.
  // The |battery_state| arg is an enum created to be compatible
  // with the upower battery state enum:
  // power_manager::system::UpowerBatteryState.
  void BatteryStatePollAsync(
      base::OnceCallback<void(uint32_t /*external_power_type*/, uint32_t /*battery_state*/, double /*display_battery_percentage*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PowerManager",
        "BatteryStatePoll",
        std::move(success_callback),
        std::move(error_callback));
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.PowerManager"};
  const dbus::ObjectPath object_path_{"/org/chromium/PowerManager"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_POWER_MANAGER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_POWER_MANAGER_DBUS_PROXIES_H
