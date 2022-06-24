// Automatic generation of D-Bus interfaces:
//  - org.freedesktop.fwupd
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DIAGNOSTICS_OUT_DEFAULT_GEN_INCLUDE_FWUPD_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DIAGNOSTICS_OUT_DEFAULT_GEN_INCLUDE_FWUPD_DBUS_PROXIES_H
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
namespace freedesktop {

// Abstract interface proxy for org::freedesktop::fwupd.
class fwupdProxyInterface {
 public:
  virtual ~fwupdProxyInterface() = default;

  virtual bool GetDevices(
      std::vector<brillo::VariantDictionary>* out_devices,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetDevicesAsync(
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*devices*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetPlugins(
      std::vector<brillo::VariantDictionary>* out_plugins,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetPluginsAsync(
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*plugins*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetReleases(
      const std::string& in_device_id,
      std::vector<brillo::VariantDictionary>* out_releases,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetReleasesAsync(
      const std::string& in_device_id,
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*releases*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetDowngrades(
      const std::string& in_device_id,
      std::vector<brillo::VariantDictionary>* out_releases,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetDowngradesAsync(
      const std::string& in_device_id,
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*releases*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetUpgrades(
      const std::string& in_device_id,
      std::vector<brillo::VariantDictionary>* out_releases,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetUpgradesAsync(
      const std::string& in_device_id,
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*releases*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetDetails(
      const brillo::dbus_utils::FileDescriptor& in_handle,
      std::vector<brillo::VariantDictionary>* out_results,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetDetailsAsync(
      const brillo::dbus_utils::FileDescriptor& in_handle,
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*results*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetHistory(
      std::vector<brillo::VariantDictionary>* out_devices,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetHistoryAsync(
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*devices*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetHostSecurityAttrs(
      std::vector<brillo::VariantDictionary>* out_attrs,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetHostSecurityAttrsAsync(
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*attrs*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetHostSecurityEvents(
      uint32_t in_limit,
      std::vector<brillo::VariantDictionary>* out_attrs,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetHostSecurityEventsAsync(
      uint32_t in_limit,
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*attrs*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetReportMetadata(
      std::map<std::string, std::string>* out_attrs,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetReportMetadataAsync(
      base::OnceCallback<void(const std::map<std::string, std::string>& /*attrs*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetHints(
      const std::map<std::string, std::string>& in_hints,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetHintsAsync(
      const std::map<std::string, std::string>& in_hints,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Install(
      const std::string& in_id,
      const brillo::dbus_utils::FileDescriptor& in_handle,
      const brillo::VariantDictionary& in_options,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void InstallAsync(
      const std::string& in_id,
      const brillo::dbus_utils::FileDescriptor& in_handle,
      const brillo::VariantDictionary& in_options,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Verify(
      const std::string& in_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void VerifyAsync(
      const std::string& in_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool VerifyUpdate(
      const std::string& in_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void VerifyUpdateAsync(
      const std::string& in_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Unlock(
      const std::string& in_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void UnlockAsync(
      const std::string& in_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Activate(
      const std::string& in_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ActivateAsync(
      const std::string& in_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetResults(
      const std::string& in_id,
      brillo::VariantDictionary* out_results,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetResultsAsync(
      const std::string& in_id,
      base::OnceCallback<void(const brillo::VariantDictionary& /*results*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetRemotes(
      std::vector<brillo::VariantDictionary>* out_results,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetRemotesAsync(
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*results*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetApprovedFirmware(
      std::vector<std::string>* out_checksums,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetApprovedFirmwareAsync(
      base::OnceCallback<void(const std::vector<std::string>& /*checksums*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetApprovedFirmware(
      const std::vector<std::string>& in_checksums,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetApprovedFirmwareAsync(
      const std::vector<std::string>& in_checksums,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetBlockedFirmware(
      std::vector<std::string>* out_checksums,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetBlockedFirmwareAsync(
      base::OnceCallback<void(const std::vector<std::string>& /*checksums*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetBlockedFirmware(
      const std::vector<std::string>& in_checksums,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetBlockedFirmwareAsync(
      const std::vector<std::string>& in_checksums,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetFeatureFlags(
      uint64_t in_feature_flags,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetFeatureFlagsAsync(
      uint64_t in_feature_flags,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ClearResults(
      const std::string& in_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ClearResultsAsync(
      const std::string& in_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ModifyDevice(
      const std::string& in_device_id,
      const std::string& in_key,
      const std::string& in_value,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ModifyDeviceAsync(
      const std::string& in_device_id,
      const std::string& in_key,
      const std::string& in_value,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ModifyConfig(
      const std::string& in_key,
      const std::string& in_value,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ModifyConfigAsync(
      const std::string& in_key,
      const std::string& in_value,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool UpdateMetadata(
      const std::string& in_remote_id,
      const brillo::dbus_utils::FileDescriptor& in_data,
      const brillo::dbus_utils::FileDescriptor& in_signature,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void UpdateMetadataAsync(
      const std::string& in_remote_id,
      const brillo::dbus_utils::FileDescriptor& in_data,
      const brillo::dbus_utils::FileDescriptor& in_signature,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ModifyRemote(
      const std::string& in_remote_id,
      const std::string& in_key,
      const std::string& in_value,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ModifyRemoteAsync(
      const std::string& in_remote_id,
      const std::string& in_key,
      const std::string& in_value,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SelfSign(
      const std::string& in_data,
      const brillo::VariantDictionary& in_options,
      std::string* out_sig,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SelfSignAsync(
      const std::string& in_data,
      const brillo::VariantDictionary& in_options,
      base::OnceCallback<void(const std::string& /*sig*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Quit(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void QuitAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterChangedSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterDeviceAddedSignalHandler(
      const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterDeviceRemovedSignalHandler(
      const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterDeviceChangedSignalHandler(
      const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterDeviceRequestSignalHandler(
      const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  static const char* DaemonVersionName() { return "DaemonVersion"; }
  virtual const std::string& daemon_version() const = 0;
  static const char* HostBkcName() { return "HostBkc"; }
  virtual const std::string& host_bkc() const = 0;
  static const char* HostProductName() { return "HostProduct"; }
  virtual const std::string& host_product() const = 0;
  static const char* HostMachineIdName() { return "HostMachineId"; }
  virtual const std::string& host_machine_id() const = 0;
  static const char* HostSecurityIdName() { return "HostSecurityId"; }
  virtual const std::string& host_security_id() const = 0;
  static const char* TaintedName() { return "Tainted"; }
  virtual bool tainted() const = 0;
  static const char* InteractiveName() { return "Interactive"; }
  virtual bool interactive() const = 0;
  static const char* StatusName() { return "Status"; }
  virtual uint32_t status() const = 0;
  static const char* PercentageName() { return "Percentage"; }
  virtual uint32_t percentage() const = 0;
  static const char* BatteryLevelName() { return "BatteryLevel"; }
  virtual uint32_t battery_level() const = 0;
  static const char* BatteryThresholdName() { return "BatteryThreshold"; }
  virtual uint32_t battery_threshold() const = 0;
  static const char* OnlyTrustedName() { return "OnlyTrusted"; }
  virtual bool only_trusted() const = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;

  virtual void InitializeProperties(
      const base::RepeatingCallback<void(fwupdProxyInterface*, const std::string&)>& callback) = 0;
};

}  // namespace freedesktop
}  // namespace org

namespace org {
namespace freedesktop {

// Interface proxy for org::freedesktop::fwupd.
class fwupdProxy final : public fwupdProxyInterface {
 public:
  class PropertySet : public dbus::PropertySet {
   public:
    PropertySet(dbus::ObjectProxy* object_proxy,
                const PropertyChangedCallback& callback)
        : dbus::PropertySet{object_proxy,
                            "org.freedesktop.fwupd",
                            callback} {
      RegisterProperty(DaemonVersionName(), &daemon_version);
      RegisterProperty(HostBkcName(), &host_bkc);
      RegisterProperty(HostProductName(), &host_product);
      RegisterProperty(HostMachineIdName(), &host_machine_id);
      RegisterProperty(HostSecurityIdName(), &host_security_id);
      RegisterProperty(TaintedName(), &tainted);
      RegisterProperty(InteractiveName(), &interactive);
      RegisterProperty(StatusName(), &status);
      RegisterProperty(PercentageName(), &percentage);
      RegisterProperty(BatteryLevelName(), &battery_level);
      RegisterProperty(BatteryThresholdName(), &battery_threshold);
      RegisterProperty(OnlyTrustedName(), &only_trusted);
    }
    PropertySet(const PropertySet&) = delete;
    PropertySet& operator=(const PropertySet&) = delete;

    brillo::dbus_utils::Property<std::string> daemon_version;
    brillo::dbus_utils::Property<std::string> host_bkc;
    brillo::dbus_utils::Property<std::string> host_product;
    brillo::dbus_utils::Property<std::string> host_machine_id;
    brillo::dbus_utils::Property<std::string> host_security_id;
    brillo::dbus_utils::Property<bool> tainted;
    brillo::dbus_utils::Property<bool> interactive;
    brillo::dbus_utils::Property<uint32_t> status;
    brillo::dbus_utils::Property<uint32_t> percentage;
    brillo::dbus_utils::Property<uint32_t> battery_level;
    brillo::dbus_utils::Property<uint32_t> battery_threshold;
    brillo::dbus_utils::Property<bool> only_trusted;

  };

  fwupdProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name) :
          bus_{bus},
          service_name_{service_name},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  fwupdProxy(const fwupdProxy&) = delete;
  fwupdProxy& operator=(const fwupdProxy&) = delete;

  ~fwupdProxy() override {
  }

  void RegisterChangedSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "Changed",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterDeviceAddedSignalHandler(
      const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "DeviceAdded",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterDeviceRemovedSignalHandler(
      const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "DeviceRemoved",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterDeviceChangedSignalHandler(
      const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "DeviceChanged",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterDeviceRequestSignalHandler(
      const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "DeviceRequest",
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

  void InitializeProperties(
      const base::RepeatingCallback<void(fwupdProxyInterface*, const std::string&)>& callback) override {
    property_set_.reset(
        new PropertySet(dbus_object_proxy_, base::BindRepeating(callback, this)));
    property_set_->ConnectSignals();
    property_set_->GetAll();
  }

  const PropertySet* GetProperties() const { return &(*property_set_); }
  PropertySet* GetProperties() { return &(*property_set_); }

  bool GetDevices(
      std::vector<brillo::VariantDictionary>* out_devices,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetDevices",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_devices);
  }

  void GetDevicesAsync(
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*devices*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetDevices",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool GetPlugins(
      std::vector<brillo::VariantDictionary>* out_plugins,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetPlugins",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_plugins);
  }

  void GetPluginsAsync(
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*plugins*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetPlugins",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool GetReleases(
      const std::string& in_device_id,
      std::vector<brillo::VariantDictionary>* out_releases,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetReleases",
        error,
        in_device_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_releases);
  }

  void GetReleasesAsync(
      const std::string& in_device_id,
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*releases*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetReleases",
        std::move(success_callback),
        std::move(error_callback),
        in_device_id);
  }

  bool GetDowngrades(
      const std::string& in_device_id,
      std::vector<brillo::VariantDictionary>* out_releases,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetDowngrades",
        error,
        in_device_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_releases);
  }

  void GetDowngradesAsync(
      const std::string& in_device_id,
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*releases*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetDowngrades",
        std::move(success_callback),
        std::move(error_callback),
        in_device_id);
  }

  bool GetUpgrades(
      const std::string& in_device_id,
      std::vector<brillo::VariantDictionary>* out_releases,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetUpgrades",
        error,
        in_device_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_releases);
  }

  void GetUpgradesAsync(
      const std::string& in_device_id,
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*releases*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetUpgrades",
        std::move(success_callback),
        std::move(error_callback),
        in_device_id);
  }

  bool GetDetails(
      const brillo::dbus_utils::FileDescriptor& in_handle,
      std::vector<brillo::VariantDictionary>* out_results,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetDetails",
        error,
        in_handle);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_results);
  }

  void GetDetailsAsync(
      const brillo::dbus_utils::FileDescriptor& in_handle,
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*results*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetDetails",
        std::move(success_callback),
        std::move(error_callback),
        in_handle);
  }

  bool GetHistory(
      std::vector<brillo::VariantDictionary>* out_devices,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetHistory",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_devices);
  }

  void GetHistoryAsync(
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*devices*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetHistory",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool GetHostSecurityAttrs(
      std::vector<brillo::VariantDictionary>* out_attrs,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetHostSecurityAttrs",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_attrs);
  }

  void GetHostSecurityAttrsAsync(
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*attrs*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetHostSecurityAttrs",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool GetHostSecurityEvents(
      uint32_t in_limit,
      std::vector<brillo::VariantDictionary>* out_attrs,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetHostSecurityEvents",
        error,
        in_limit);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_attrs);
  }

  void GetHostSecurityEventsAsync(
      uint32_t in_limit,
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*attrs*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetHostSecurityEvents",
        std::move(success_callback),
        std::move(error_callback),
        in_limit);
  }

  bool GetReportMetadata(
      std::map<std::string, std::string>* out_attrs,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetReportMetadata",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_attrs);
  }

  void GetReportMetadataAsync(
      base::OnceCallback<void(const std::map<std::string, std::string>& /*attrs*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetReportMetadata",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool SetHints(
      const std::map<std::string, std::string>& in_hints,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "SetHints",
        error,
        in_hints);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetHintsAsync(
      const std::map<std::string, std::string>& in_hints,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "SetHints",
        std::move(success_callback),
        std::move(error_callback),
        in_hints);
  }

  bool Install(
      const std::string& in_id,
      const brillo::dbus_utils::FileDescriptor& in_handle,
      const brillo::VariantDictionary& in_options,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "Install",
        error,
        in_id,
        in_handle,
        in_options);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void InstallAsync(
      const std::string& in_id,
      const brillo::dbus_utils::FileDescriptor& in_handle,
      const brillo::VariantDictionary& in_options,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "Install",
        std::move(success_callback),
        std::move(error_callback),
        in_id,
        in_handle,
        in_options);
  }

  bool Verify(
      const std::string& in_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "Verify",
        error,
        in_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void VerifyAsync(
      const std::string& in_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "Verify",
        std::move(success_callback),
        std::move(error_callback),
        in_id);
  }

  bool VerifyUpdate(
      const std::string& in_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "VerifyUpdate",
        error,
        in_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void VerifyUpdateAsync(
      const std::string& in_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "VerifyUpdate",
        std::move(success_callback),
        std::move(error_callback),
        in_id);
  }

  bool Unlock(
      const std::string& in_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "Unlock",
        error,
        in_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void UnlockAsync(
      const std::string& in_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "Unlock",
        std::move(success_callback),
        std::move(error_callback),
        in_id);
  }

  bool Activate(
      const std::string& in_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "Activate",
        error,
        in_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ActivateAsync(
      const std::string& in_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "Activate",
        std::move(success_callback),
        std::move(error_callback),
        in_id);
  }

  bool GetResults(
      const std::string& in_id,
      brillo::VariantDictionary* out_results,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetResults",
        error,
        in_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_results);
  }

  void GetResultsAsync(
      const std::string& in_id,
      base::OnceCallback<void(const brillo::VariantDictionary& /*results*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetResults",
        std::move(success_callback),
        std::move(error_callback),
        in_id);
  }

  bool GetRemotes(
      std::vector<brillo::VariantDictionary>* out_results,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetRemotes",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_results);
  }

  void GetRemotesAsync(
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*results*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetRemotes",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool GetApprovedFirmware(
      std::vector<std::string>* out_checksums,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetApprovedFirmware",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_checksums);
  }

  void GetApprovedFirmwareAsync(
      base::OnceCallback<void(const std::vector<std::string>& /*checksums*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetApprovedFirmware",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool SetApprovedFirmware(
      const std::vector<std::string>& in_checksums,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "SetApprovedFirmware",
        error,
        in_checksums);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetApprovedFirmwareAsync(
      const std::vector<std::string>& in_checksums,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "SetApprovedFirmware",
        std::move(success_callback),
        std::move(error_callback),
        in_checksums);
  }

  bool GetBlockedFirmware(
      std::vector<std::string>* out_checksums,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetBlockedFirmware",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_checksums);
  }

  void GetBlockedFirmwareAsync(
      base::OnceCallback<void(const std::vector<std::string>& /*checksums*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "GetBlockedFirmware",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool SetBlockedFirmware(
      const std::vector<std::string>& in_checksums,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "SetBlockedFirmware",
        error,
        in_checksums);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetBlockedFirmwareAsync(
      const std::vector<std::string>& in_checksums,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "SetBlockedFirmware",
        std::move(success_callback),
        std::move(error_callback),
        in_checksums);
  }

  bool SetFeatureFlags(
      uint64_t in_feature_flags,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "SetFeatureFlags",
        error,
        in_feature_flags);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetFeatureFlagsAsync(
      uint64_t in_feature_flags,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "SetFeatureFlags",
        std::move(success_callback),
        std::move(error_callback),
        in_feature_flags);
  }

  bool ClearResults(
      const std::string& in_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "ClearResults",
        error,
        in_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ClearResultsAsync(
      const std::string& in_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "ClearResults",
        std::move(success_callback),
        std::move(error_callback),
        in_id);
  }

  bool ModifyDevice(
      const std::string& in_device_id,
      const std::string& in_key,
      const std::string& in_value,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "ModifyDevice",
        error,
        in_device_id,
        in_key,
        in_value);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ModifyDeviceAsync(
      const std::string& in_device_id,
      const std::string& in_key,
      const std::string& in_value,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "ModifyDevice",
        std::move(success_callback),
        std::move(error_callback),
        in_device_id,
        in_key,
        in_value);
  }

  bool ModifyConfig(
      const std::string& in_key,
      const std::string& in_value,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "ModifyConfig",
        error,
        in_key,
        in_value);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ModifyConfigAsync(
      const std::string& in_key,
      const std::string& in_value,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "ModifyConfig",
        std::move(success_callback),
        std::move(error_callback),
        in_key,
        in_value);
  }

  bool UpdateMetadata(
      const std::string& in_remote_id,
      const brillo::dbus_utils::FileDescriptor& in_data,
      const brillo::dbus_utils::FileDescriptor& in_signature,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "UpdateMetadata",
        error,
        in_remote_id,
        in_data,
        in_signature);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void UpdateMetadataAsync(
      const std::string& in_remote_id,
      const brillo::dbus_utils::FileDescriptor& in_data,
      const brillo::dbus_utils::FileDescriptor& in_signature,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "UpdateMetadata",
        std::move(success_callback),
        std::move(error_callback),
        in_remote_id,
        in_data,
        in_signature);
  }

  bool ModifyRemote(
      const std::string& in_remote_id,
      const std::string& in_key,
      const std::string& in_value,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "ModifyRemote",
        error,
        in_remote_id,
        in_key,
        in_value);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ModifyRemoteAsync(
      const std::string& in_remote_id,
      const std::string& in_key,
      const std::string& in_value,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "ModifyRemote",
        std::move(success_callback),
        std::move(error_callback),
        in_remote_id,
        in_key,
        in_value);
  }

  bool SelfSign(
      const std::string& in_data,
      const brillo::VariantDictionary& in_options,
      std::string* out_sig,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "SelfSign",
        error,
        in_data,
        in_options);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_sig);
  }

  void SelfSignAsync(
      const std::string& in_data,
      const brillo::VariantDictionary& in_options,
      base::OnceCallback<void(const std::string& /*sig*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "SelfSign",
        std::move(success_callback),
        std::move(error_callback),
        in_data,
        in_options);
  }

  bool Quit(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "Quit",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void QuitAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.fwupd",
        "Quit",
        std::move(success_callback),
        std::move(error_callback));
  }

  const std::string& daemon_version() const override {
    return property_set_->daemon_version.value();
  }

  const std::string& host_bkc() const override {
    return property_set_->host_bkc.value();
  }

  const std::string& host_product() const override {
    return property_set_->host_product.value();
  }

  const std::string& host_machine_id() const override {
    return property_set_->host_machine_id.value();
  }

  const std::string& host_security_id() const override {
    return property_set_->host_security_id.value();
  }

  bool tainted() const override {
    return property_set_->tainted.value();
  }

  bool interactive() const override {
    return property_set_->interactive.value();
  }

  uint32_t status() const override {
    return property_set_->status.value();
  }

  uint32_t percentage() const override {
    return property_set_->percentage.value();
  }

  uint32_t battery_level() const override {
    return property_set_->battery_level.value();
  }

  uint32_t battery_threshold() const override {
    return property_set_->battery_threshold.value();
  }

  bool only_trusted() const override {
    return property_set_->only_trusted.value();
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  std::string service_name_;
  const dbus::ObjectPath object_path_{"/"};
  dbus::ObjectProxy* dbus_object_proxy_;
  std::unique_ptr<PropertySet> property_set_;

};

}  // namespace freedesktop
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DIAGNOSTICS_OUT_DEFAULT_GEN_INCLUDE_FWUPD_DBUS_PROXIES_H
