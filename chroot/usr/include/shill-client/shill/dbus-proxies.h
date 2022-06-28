// Automatic generation of D-Bus interfaces:
//  - org.chromium.flimflam.Device
//  - org.chromium.flimflam.IPConfig
//  - org.chromium.flimflam.Manager
//  - org.chromium.flimflam.Profile
//  - org.chromium.flimflam.Service
//  - org.chromium.flimflam.Task
//  - org.chromium.flimflam.ThirdPartyVpn
#ifndef ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_CLIENT_OUT_DEFAULT_GEN_INCLUDE_SHILL_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_CLIENT_OUT_DEFAULT_GEN_INCLUDE_SHILL_DBUS_PROXIES_H
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
namespace flimflam {

// Abstract interface proxy for org::chromium::flimflam::Device.
class DeviceProxyInterface {
 public:
  virtual ~DeviceProxyInterface() = default;

  virtual bool GetProperties(
      brillo::VariantDictionary* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetPropertiesAsync(
      base::OnceCallback<void(const brillo::VariantDictionary&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetProperty(
      const std::string& in_1,
      const brillo::Any& in_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetPropertyAsync(
      const std::string& in_1,
      const brillo::Any& in_2,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ClearProperty(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ClearPropertyAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Enable(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void EnableAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Disable(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DisableAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Register(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RequirePin(
      const std::string& in_1,
      bool in_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RequirePinAsync(
      const std::string& in_1,
      bool in_2,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool EnterPin(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void EnterPinAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool UnblockPin(
      const std::string& in_1,
      const std::string& in_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void UnblockPinAsync(
      const std::string& in_1,
      const std::string& in_2,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ChangePin(
      const std::string& in_1,
      const std::string& in_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ChangePinAsync(
      const std::string& in_1,
      const std::string& in_2,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RenewDHCPLease(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RenewDHCPLeaseAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Reset(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ResetAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RequestRoam(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RequestRoamAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetUsbEthernetMacAddressSource(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetUsbEthernetMacAddressSourceAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterPropertyChangedSignalHandler(
      const base::RepeatingCallback<void(const std::string&,
                                         const brillo::Any&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace flimflam
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {
namespace flimflam {

// Interface proxy for org::chromium::flimflam::Device.
class DeviceProxy final : public DeviceProxyInterface {
 public:
  DeviceProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const dbus::ObjectPath& object_path) :
          bus_{bus},
          object_path_{object_path},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  DeviceProxy(const DeviceProxy&) = delete;
  DeviceProxy& operator=(const DeviceProxy&) = delete;

  ~DeviceProxy() override {
  }

  void RegisterPropertyChangedSignalHandler(
      const base::RepeatingCallback<void(const std::string&,
                                         const brillo::Any&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "PropertyChanged",
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

  bool GetProperties(
      brillo::VariantDictionary* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "GetProperties",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_1);
  }

  void GetPropertiesAsync(
      base::OnceCallback<void(const brillo::VariantDictionary&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "GetProperties",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool SetProperty(
      const std::string& in_1,
      const brillo::Any& in_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "SetProperty",
        error,
        in_1,
        in_2);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetPropertyAsync(
      const std::string& in_1,
      const brillo::Any& in_2,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "SetProperty",
        std::move(success_callback),
        std::move(error_callback),
        in_1,
        in_2);
  }

  bool ClearProperty(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "ClearProperty",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ClearPropertyAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "ClearProperty",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

  bool Enable(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "Enable",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void EnableAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "Enable",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool Disable(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "Disable",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void DisableAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "Disable",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool Register(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "Register",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RegisterAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "Register",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

  bool RequirePin(
      const std::string& in_1,
      bool in_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "RequirePin",
        error,
        in_1,
        in_2);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RequirePinAsync(
      const std::string& in_1,
      bool in_2,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "RequirePin",
        std::move(success_callback),
        std::move(error_callback),
        in_1,
        in_2);
  }

  bool EnterPin(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "EnterPin",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void EnterPinAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "EnterPin",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

  bool UnblockPin(
      const std::string& in_1,
      const std::string& in_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "UnblockPin",
        error,
        in_1,
        in_2);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void UnblockPinAsync(
      const std::string& in_1,
      const std::string& in_2,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "UnblockPin",
        std::move(success_callback),
        std::move(error_callback),
        in_1,
        in_2);
  }

  bool ChangePin(
      const std::string& in_1,
      const std::string& in_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "ChangePin",
        error,
        in_1,
        in_2);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ChangePinAsync(
      const std::string& in_1,
      const std::string& in_2,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "ChangePin",
        std::move(success_callback),
        std::move(error_callback),
        in_1,
        in_2);
  }

  bool RenewDHCPLease(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "RenewDHCPLease",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RenewDHCPLeaseAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "RenewDHCPLease",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool Reset(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "Reset",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ResetAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "Reset",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool RequestRoam(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "RequestRoam",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RequestRoamAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "RequestRoam",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

  bool SetUsbEthernetMacAddressSource(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "SetUsbEthernetMacAddressSource",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetUsbEthernetMacAddressSourceAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Device",
        "SetUsbEthernetMacAddressSource",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.flimflam"};
  dbus::ObjectPath object_path_;
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace flimflam
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {
namespace flimflam {

// Abstract interface proxy for org::chromium::flimflam::IPConfig.
class IPConfigProxyInterface {
 public:
  virtual ~IPConfigProxyInterface() = default;

  virtual bool GetProperties(
      brillo::VariantDictionary* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetPropertiesAsync(
      base::OnceCallback<void(const brillo::VariantDictionary&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetProperty(
      const std::string& in_1,
      const brillo::Any& in_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetPropertyAsync(
      const std::string& in_1,
      const brillo::Any& in_2,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ClearProperty(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ClearPropertyAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Remove(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RemoveAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterPropertyChangedSignalHandler(
      const base::RepeatingCallback<void(const std::string&,
                                         const brillo::Any&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace flimflam
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {
namespace flimflam {

// Interface proxy for org::chromium::flimflam::IPConfig.
class IPConfigProxy final : public IPConfigProxyInterface {
 public:
  IPConfigProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const dbus::ObjectPath& object_path) :
          bus_{bus},
          object_path_{object_path},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  IPConfigProxy(const IPConfigProxy&) = delete;
  IPConfigProxy& operator=(const IPConfigProxy&) = delete;

  ~IPConfigProxy() override {
  }

  void RegisterPropertyChangedSignalHandler(
      const base::RepeatingCallback<void(const std::string&,
                                         const brillo::Any&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.flimflam.IPConfig",
        "PropertyChanged",
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

  bool GetProperties(
      brillo::VariantDictionary* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.IPConfig",
        "GetProperties",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_1);
  }

  void GetPropertiesAsync(
      base::OnceCallback<void(const brillo::VariantDictionary&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.IPConfig",
        "GetProperties",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool SetProperty(
      const std::string& in_1,
      const brillo::Any& in_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.IPConfig",
        "SetProperty",
        error,
        in_1,
        in_2);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetPropertyAsync(
      const std::string& in_1,
      const brillo::Any& in_2,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.IPConfig",
        "SetProperty",
        std::move(success_callback),
        std::move(error_callback),
        in_1,
        in_2);
  }

  bool ClearProperty(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.IPConfig",
        "ClearProperty",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ClearPropertyAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.IPConfig",
        "ClearProperty",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

  bool Remove(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.IPConfig",
        "Remove",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RemoveAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.IPConfig",
        "Remove",
        std::move(success_callback),
        std::move(error_callback));
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.flimflam"};
  dbus::ObjectPath object_path_;
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace flimflam
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {
namespace flimflam {

// Abstract interface proxy for org::chromium::flimflam::Manager.
class ManagerProxyInterface {
 public:
  virtual ~ManagerProxyInterface() = default;

  virtual bool GetProperties(
      brillo::VariantDictionary* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetPropertiesAsync(
      base::OnceCallback<void(const brillo::VariantDictionary&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetProperty(
      const std::string& in_1,
      const brillo::Any& in_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetPropertyAsync(
      const std::string& in_1,
      const brillo::Any& in_2,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetState(
      std::string* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetStateAsync(
      base::OnceCallback<void(const std::string&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool CreateProfile(
      const std::string& in_1,
      dbus::ObjectPath* out_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void CreateProfileAsync(
      const std::string& in_1,
      base::OnceCallback<void(const dbus::ObjectPath&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RemoveProfile(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RemoveProfileAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool PushProfile(
      const std::string& in_1,
      dbus::ObjectPath* out_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void PushProfileAsync(
      const std::string& in_1,
      base::OnceCallback<void(const dbus::ObjectPath&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool InsertUserProfile(
      const std::string& in_1,
      const std::string& in_2,
      dbus::ObjectPath* out_3,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void InsertUserProfileAsync(
      const std::string& in_1,
      const std::string& in_2,
      base::OnceCallback<void(const dbus::ObjectPath&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool PopProfile(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void PopProfileAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool PopAnyProfile(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void PopAnyProfileAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool PopAllUserProfiles(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void PopAllUserProfilesAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RecheckPortal(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RecheckPortalAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RequestScan(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RequestScanAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool EnableTechnology(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void EnableTechnologyAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetNetworkThrottlingStatus(
      bool in_1,
      uint32_t in_2,
      uint32_t in_3,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetNetworkThrottlingStatusAsync(
      bool in_1,
      uint32_t in_2,
      uint32_t in_3,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool DisableTechnology(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DisableTechnologyAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetService(
      const brillo::VariantDictionary& in_1,
      dbus::ObjectPath* out_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetServiceAsync(
      const brillo::VariantDictionary& in_1,
      base::OnceCallback<void(const dbus::ObjectPath&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ConfigureService(
      const brillo::VariantDictionary& in_1,
      dbus::ObjectPath* out_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ConfigureServiceAsync(
      const brillo::VariantDictionary& in_1,
      base::OnceCallback<void(const dbus::ObjectPath&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ConfigureServiceForProfile(
      const dbus::ObjectPath& in_1,
      const brillo::VariantDictionary& in_2,
      dbus::ObjectPath* out_3,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ConfigureServiceForProfileAsync(
      const dbus::ObjectPath& in_1,
      const brillo::VariantDictionary& in_2,
      base::OnceCallback<void(const dbus::ObjectPath&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool FindMatchingService(
      const brillo::VariantDictionary& in_1,
      dbus::ObjectPath* out_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void FindMatchingServiceAsync(
      const brillo::VariantDictionary& in_1,
      base::OnceCallback<void(const dbus::ObjectPath&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetDebugLevel(
      int32_t* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetDebugLevelAsync(
      base::OnceCallback<void(int32_t)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetDebugLevel(
      int32_t in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetDebugLevelAsync(
      int32_t in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetServiceOrder(
      std::string* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetServiceOrderAsync(
      base::OnceCallback<void(const std::string&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetServiceOrder(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetServiceOrderAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetDebugTags(
      std::string* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetDebugTagsAsync(
      base::OnceCallback<void(const std::string&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetDebugTags(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetDebugTagsAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ListDebugTags(
      std::string* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ListDebugTagsAsync(
      base::OnceCallback<void(const std::string&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetNetworksForGeolocation(
      brillo::VariantDictionary* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetNetworksForGeolocationAsync(
      base::OnceCallback<void(const brillo::VariantDictionary&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ScanAndConnectToBestServices(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ScanAndConnectToBestServicesAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ConnectToBestServices(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ConnectToBestServicesAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool CreateConnectivityReport(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void CreateConnectivityReportAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ClaimInterface(
      const std::string& in_claimer_name,
      const std::string& in_interface_name,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ClaimInterfaceAsync(
      const std::string& in_claimer_name,
      const std::string& in_interface_name,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ReleaseInterface(
      const std::string& in_claimer_name,
      const std::string& in_interface_name,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ReleaseInterfaceAsync(
      const std::string& in_claimer_name,
      const std::string& in_interface_name,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetDNSProxyAddresses(
      const std::vector<std::string>& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetDNSProxyAddressesAsync(
      const std::vector<std::string>& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ClearDNSProxyAddresses(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ClearDNSProxyAddressesAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetDNSProxyDOHProviders(
      const brillo::VariantDictionary& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetDNSProxyDOHProvidersAsync(
      const brillo::VariantDictionary& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool AddPasspointCredentials(
      const dbus::ObjectPath& in_profile,
      const brillo::VariantDictionary& in_properties,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void AddPasspointCredentialsAsync(
      const dbus::ObjectPath& in_profile,
      const brillo::VariantDictionary& in_properties,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RemovePasspointCredentials(
      const dbus::ObjectPath& in_profile,
      const brillo::VariantDictionary& in_properties,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RemovePasspointCredentialsAsync(
      const dbus::ObjectPath& in_profile,
      const brillo::VariantDictionary& in_properties,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetTetheringEnabled(
      bool in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetTetheringEnabledAsync(
      bool in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterPropertyChangedSignalHandler(
      const base::RepeatingCallback<void(const std::string&,
                                         const brillo::Any&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterStateChangedSignalHandler(
      const base::RepeatingCallback<void(const std::string&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace flimflam
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {
namespace flimflam {

// Interface proxy for org::chromium::flimflam::Manager.
class ManagerProxy final : public ManagerProxyInterface {
 public:
  ManagerProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  ManagerProxy(const ManagerProxy&) = delete;
  ManagerProxy& operator=(const ManagerProxy&) = delete;

  ~ManagerProxy() override {
  }

  void RegisterPropertyChangedSignalHandler(
      const base::RepeatingCallback<void(const std::string&,
                                         const brillo::Any&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "PropertyChanged",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterStateChangedSignalHandler(
      const base::RepeatingCallback<void(const std::string&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "StateChanged",
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

  bool GetProperties(
      brillo::VariantDictionary* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "GetProperties",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_1);
  }

  void GetPropertiesAsync(
      base::OnceCallback<void(const brillo::VariantDictionary&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "GetProperties",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool SetProperty(
      const std::string& in_1,
      const brillo::Any& in_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "SetProperty",
        error,
        in_1,
        in_2);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetPropertyAsync(
      const std::string& in_1,
      const brillo::Any& in_2,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "SetProperty",
        std::move(success_callback),
        std::move(error_callback),
        in_1,
        in_2);
  }

  bool GetState(
      std::string* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "GetState",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_1);
  }

  void GetStateAsync(
      base::OnceCallback<void(const std::string&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "GetState",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool CreateProfile(
      const std::string& in_1,
      dbus::ObjectPath* out_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "CreateProfile",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_2);
  }

  void CreateProfileAsync(
      const std::string& in_1,
      base::OnceCallback<void(const dbus::ObjectPath&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "CreateProfile",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

  bool RemoveProfile(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "RemoveProfile",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RemoveProfileAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "RemoveProfile",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

  bool PushProfile(
      const std::string& in_1,
      dbus::ObjectPath* out_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "PushProfile",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_2);
  }

  void PushProfileAsync(
      const std::string& in_1,
      base::OnceCallback<void(const dbus::ObjectPath&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "PushProfile",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

  bool InsertUserProfile(
      const std::string& in_1,
      const std::string& in_2,
      dbus::ObjectPath* out_3,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "InsertUserProfile",
        error,
        in_1,
        in_2);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_3);
  }

  void InsertUserProfileAsync(
      const std::string& in_1,
      const std::string& in_2,
      base::OnceCallback<void(const dbus::ObjectPath&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "InsertUserProfile",
        std::move(success_callback),
        std::move(error_callback),
        in_1,
        in_2);
  }

  bool PopProfile(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "PopProfile",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void PopProfileAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "PopProfile",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

  bool PopAnyProfile(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "PopAnyProfile",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void PopAnyProfileAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "PopAnyProfile",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool PopAllUserProfiles(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "PopAllUserProfiles",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void PopAllUserProfilesAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "PopAllUserProfiles",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool RecheckPortal(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "RecheckPortal",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RecheckPortalAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "RecheckPortal",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool RequestScan(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "RequestScan",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RequestScanAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "RequestScan",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

  bool EnableTechnology(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "EnableTechnology",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void EnableTechnologyAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "EnableTechnology",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

  bool SetNetworkThrottlingStatus(
      bool in_1,
      uint32_t in_2,
      uint32_t in_3,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "SetNetworkThrottlingStatus",
        error,
        in_1,
        in_2,
        in_3);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetNetworkThrottlingStatusAsync(
      bool in_1,
      uint32_t in_2,
      uint32_t in_3,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "SetNetworkThrottlingStatus",
        std::move(success_callback),
        std::move(error_callback),
        in_1,
        in_2,
        in_3);
  }

  bool DisableTechnology(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "DisableTechnology",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void DisableTechnologyAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "DisableTechnology",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

  bool GetService(
      const brillo::VariantDictionary& in_1,
      dbus::ObjectPath* out_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "GetService",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_2);
  }

  void GetServiceAsync(
      const brillo::VariantDictionary& in_1,
      base::OnceCallback<void(const dbus::ObjectPath&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "GetService",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

  bool ConfigureService(
      const brillo::VariantDictionary& in_1,
      dbus::ObjectPath* out_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "ConfigureService",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_2);
  }

  void ConfigureServiceAsync(
      const brillo::VariantDictionary& in_1,
      base::OnceCallback<void(const dbus::ObjectPath&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "ConfigureService",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

  bool ConfigureServiceForProfile(
      const dbus::ObjectPath& in_1,
      const brillo::VariantDictionary& in_2,
      dbus::ObjectPath* out_3,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "ConfigureServiceForProfile",
        error,
        in_1,
        in_2);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_3);
  }

  void ConfigureServiceForProfileAsync(
      const dbus::ObjectPath& in_1,
      const brillo::VariantDictionary& in_2,
      base::OnceCallback<void(const dbus::ObjectPath&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "ConfigureServiceForProfile",
        std::move(success_callback),
        std::move(error_callback),
        in_1,
        in_2);
  }

  bool FindMatchingService(
      const brillo::VariantDictionary& in_1,
      dbus::ObjectPath* out_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "FindMatchingService",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_2);
  }

  void FindMatchingServiceAsync(
      const brillo::VariantDictionary& in_1,
      base::OnceCallback<void(const dbus::ObjectPath&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "FindMatchingService",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

  bool GetDebugLevel(
      int32_t* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "GetDebugLevel",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_1);
  }

  void GetDebugLevelAsync(
      base::OnceCallback<void(int32_t)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "GetDebugLevel",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool SetDebugLevel(
      int32_t in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "SetDebugLevel",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetDebugLevelAsync(
      int32_t in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "SetDebugLevel",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

  bool GetServiceOrder(
      std::string* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "GetServiceOrder",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_1);
  }

  void GetServiceOrderAsync(
      base::OnceCallback<void(const std::string&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "GetServiceOrder",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool SetServiceOrder(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "SetServiceOrder",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetServiceOrderAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "SetServiceOrder",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

  bool GetDebugTags(
      std::string* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "GetDebugTags",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_1);
  }

  void GetDebugTagsAsync(
      base::OnceCallback<void(const std::string&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "GetDebugTags",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool SetDebugTags(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "SetDebugTags",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetDebugTagsAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "SetDebugTags",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

  bool ListDebugTags(
      std::string* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "ListDebugTags",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_1);
  }

  void ListDebugTagsAsync(
      base::OnceCallback<void(const std::string&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "ListDebugTags",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool GetNetworksForGeolocation(
      brillo::VariantDictionary* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "GetNetworksForGeolocation",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_1);
  }

  void GetNetworksForGeolocationAsync(
      base::OnceCallback<void(const brillo::VariantDictionary&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "GetNetworksForGeolocation",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool ScanAndConnectToBestServices(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "ScanAndConnectToBestServices",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ScanAndConnectToBestServicesAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "ScanAndConnectToBestServices",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool ConnectToBestServices(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "ConnectToBestServices",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ConnectToBestServicesAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "ConnectToBestServices",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool CreateConnectivityReport(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "CreateConnectivityReport",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void CreateConnectivityReportAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "CreateConnectivityReport",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool ClaimInterface(
      const std::string& in_claimer_name,
      const std::string& in_interface_name,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "ClaimInterface",
        error,
        in_claimer_name,
        in_interface_name);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ClaimInterfaceAsync(
      const std::string& in_claimer_name,
      const std::string& in_interface_name,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "ClaimInterface",
        std::move(success_callback),
        std::move(error_callback),
        in_claimer_name,
        in_interface_name);
  }

  bool ReleaseInterface(
      const std::string& in_claimer_name,
      const std::string& in_interface_name,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "ReleaseInterface",
        error,
        in_claimer_name,
        in_interface_name);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ReleaseInterfaceAsync(
      const std::string& in_claimer_name,
      const std::string& in_interface_name,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "ReleaseInterface",
        std::move(success_callback),
        std::move(error_callback),
        in_claimer_name,
        in_interface_name);
  }

  bool SetDNSProxyAddresses(
      const std::vector<std::string>& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "SetDNSProxyAddresses",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetDNSProxyAddressesAsync(
      const std::vector<std::string>& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "SetDNSProxyAddresses",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

  bool ClearDNSProxyAddresses(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "ClearDNSProxyAddresses",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ClearDNSProxyAddressesAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "ClearDNSProxyAddresses",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool SetDNSProxyDOHProviders(
      const brillo::VariantDictionary& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "SetDNSProxyDOHProviders",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetDNSProxyDOHProvidersAsync(
      const brillo::VariantDictionary& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "SetDNSProxyDOHProviders",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

  bool AddPasspointCredentials(
      const dbus::ObjectPath& in_profile,
      const brillo::VariantDictionary& in_properties,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "AddPasspointCredentials",
        error,
        in_profile,
        in_properties);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void AddPasspointCredentialsAsync(
      const dbus::ObjectPath& in_profile,
      const brillo::VariantDictionary& in_properties,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "AddPasspointCredentials",
        std::move(success_callback),
        std::move(error_callback),
        in_profile,
        in_properties);
  }

  bool RemovePasspointCredentials(
      const dbus::ObjectPath& in_profile,
      const brillo::VariantDictionary& in_properties,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "RemovePasspointCredentials",
        error,
        in_profile,
        in_properties);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RemovePasspointCredentialsAsync(
      const dbus::ObjectPath& in_profile,
      const brillo::VariantDictionary& in_properties,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "RemovePasspointCredentials",
        std::move(success_callback),
        std::move(error_callback),
        in_profile,
        in_properties);
  }

  bool SetTetheringEnabled(
      bool in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "SetTetheringEnabled",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetTetheringEnabledAsync(
      bool in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Manager",
        "SetTetheringEnabled",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.flimflam"};
  const dbus::ObjectPath object_path_{"/"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace flimflam
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {
namespace flimflam {

// Abstract interface proxy for org::chromium::flimflam::Profile.
class ProfileProxyInterface {
 public:
  virtual ~ProfileProxyInterface() = default;

  virtual bool GetProperties(
      brillo::VariantDictionary* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetPropertiesAsync(
      base::OnceCallback<void(const brillo::VariantDictionary&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetProperty(
      const std::string& in_1,
      const brillo::Any& in_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetPropertyAsync(
      const std::string& in_1,
      const brillo::Any& in_2,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetEntry(
      const std::string& in_1,
      brillo::VariantDictionary* out_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetEntryAsync(
      const std::string& in_1,
      base::OnceCallback<void(const brillo::VariantDictionary&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool DeleteEntry(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DeleteEntryAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterPropertyChangedSignalHandler(
      const base::RepeatingCallback<void(const std::string&,
                                         const brillo::Any&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace flimflam
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {
namespace flimflam {

// Interface proxy for org::chromium::flimflam::Profile.
class ProfileProxy final : public ProfileProxyInterface {
 public:
  ProfileProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const dbus::ObjectPath& object_path) :
          bus_{bus},
          object_path_{object_path},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  ProfileProxy(const ProfileProxy&) = delete;
  ProfileProxy& operator=(const ProfileProxy&) = delete;

  ~ProfileProxy() override {
  }

  void RegisterPropertyChangedSignalHandler(
      const base::RepeatingCallback<void(const std::string&,
                                         const brillo::Any&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.flimflam.Profile",
        "PropertyChanged",
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

  bool GetProperties(
      brillo::VariantDictionary* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Profile",
        "GetProperties",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_1);
  }

  void GetPropertiesAsync(
      base::OnceCallback<void(const brillo::VariantDictionary&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Profile",
        "GetProperties",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool SetProperty(
      const std::string& in_1,
      const brillo::Any& in_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Profile",
        "SetProperty",
        error,
        in_1,
        in_2);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetPropertyAsync(
      const std::string& in_1,
      const brillo::Any& in_2,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Profile",
        "SetProperty",
        std::move(success_callback),
        std::move(error_callback),
        in_1,
        in_2);
  }

  bool GetEntry(
      const std::string& in_1,
      brillo::VariantDictionary* out_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Profile",
        "GetEntry",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_2);
  }

  void GetEntryAsync(
      const std::string& in_1,
      base::OnceCallback<void(const brillo::VariantDictionary&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Profile",
        "GetEntry",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

  bool DeleteEntry(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Profile",
        "DeleteEntry",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void DeleteEntryAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Profile",
        "DeleteEntry",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.flimflam"};
  dbus::ObjectPath object_path_;
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace flimflam
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {
namespace flimflam {

// Abstract interface proxy for org::chromium::flimflam::Service.
class ServiceProxyInterface {
 public:
  virtual ~ServiceProxyInterface() = default;

  virtual bool GetProperties(
      brillo::VariantDictionary* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetPropertiesAsync(
      base::OnceCallback<void(const brillo::VariantDictionary&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetProperty(
      const std::string& in_1,
      const brillo::Any& in_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetPropertyAsync(
      const std::string& in_1,
      const brillo::Any& in_2,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetProperties(
      const brillo::VariantDictionary& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetPropertiesAsync(
      const brillo::VariantDictionary& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ClearProperty(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ClearPropertyAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ClearProperties(
      const std::vector<std::string>& in_1,
      std::vector<bool>* out_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ClearPropertiesAsync(
      const std::vector<std::string>& in_1,
      base::OnceCallback<void(const std::vector<bool>&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Connect(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ConnectAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Disconnect(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DisconnectAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Remove(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RemoveAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool CompleteCellularActivation(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void CompleteCellularActivationAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetLoadableProfileEntries(
      std::map<dbus::ObjectPath, std::string>* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetLoadableProfileEntriesAsync(
      base::OnceCallback<void(const std::map<dbus::ObjectPath, std::string>&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetWiFiPassphrase(
      std::string* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetWiFiPassphraseAsync(
      base::OnceCallback<void(const std::string&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetEapPassphrase(
      std::string* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetEapPassphraseAsync(
      base::OnceCallback<void(const std::string&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RequestTrafficCounters(
      std::vector<brillo::VariantDictionary>* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RequestTrafficCountersAsync(
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ResetTrafficCounters(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ResetTrafficCountersAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterPropertyChangedSignalHandler(
      const base::RepeatingCallback<void(const std::string&,
                                         const brillo::Any&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace flimflam
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {
namespace flimflam {

// Interface proxy for org::chromium::flimflam::Service.
class ServiceProxy final : public ServiceProxyInterface {
 public:
  ServiceProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const dbus::ObjectPath& object_path) :
          bus_{bus},
          object_path_{object_path},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  ServiceProxy(const ServiceProxy&) = delete;
  ServiceProxy& operator=(const ServiceProxy&) = delete;

  ~ServiceProxy() override {
  }

  void RegisterPropertyChangedSignalHandler(
      const base::RepeatingCallback<void(const std::string&,
                                         const brillo::Any&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "PropertyChanged",
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

  bool GetProperties(
      brillo::VariantDictionary* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "GetProperties",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_1);
  }

  void GetPropertiesAsync(
      base::OnceCallback<void(const brillo::VariantDictionary&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "GetProperties",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool SetProperty(
      const std::string& in_1,
      const brillo::Any& in_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "SetProperty",
        error,
        in_1,
        in_2);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetPropertyAsync(
      const std::string& in_1,
      const brillo::Any& in_2,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "SetProperty",
        std::move(success_callback),
        std::move(error_callback),
        in_1,
        in_2);
  }

  bool SetProperties(
      const brillo::VariantDictionary& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "SetProperties",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetPropertiesAsync(
      const brillo::VariantDictionary& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "SetProperties",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

  bool ClearProperty(
      const std::string& in_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "ClearProperty",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ClearPropertyAsync(
      const std::string& in_1,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "ClearProperty",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

  bool ClearProperties(
      const std::vector<std::string>& in_1,
      std::vector<bool>* out_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "ClearProperties",
        error,
        in_1);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_2);
  }

  void ClearPropertiesAsync(
      const std::vector<std::string>& in_1,
      base::OnceCallback<void(const std::vector<bool>&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "ClearProperties",
        std::move(success_callback),
        std::move(error_callback),
        in_1);
  }

  bool Connect(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "Connect",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ConnectAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "Connect",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool Disconnect(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "Disconnect",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void DisconnectAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "Disconnect",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool Remove(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "Remove",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RemoveAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "Remove",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool CompleteCellularActivation(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "CompleteCellularActivation",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void CompleteCellularActivationAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "CompleteCellularActivation",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool GetLoadableProfileEntries(
      std::map<dbus::ObjectPath, std::string>* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "GetLoadableProfileEntries",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_1);
  }

  void GetLoadableProfileEntriesAsync(
      base::OnceCallback<void(const std::map<dbus::ObjectPath, std::string>&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "GetLoadableProfileEntries",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool GetWiFiPassphrase(
      std::string* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "GetWiFiPassphrase",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_1);
  }

  void GetWiFiPassphraseAsync(
      base::OnceCallback<void(const std::string&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "GetWiFiPassphrase",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool GetEapPassphrase(
      std::string* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "GetEapPassphrase",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_1);
  }

  void GetEapPassphraseAsync(
      base::OnceCallback<void(const std::string&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "GetEapPassphrase",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool RequestTrafficCounters(
      std::vector<brillo::VariantDictionary>* out_1,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "RequestTrafficCounters",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_1);
  }

  void RequestTrafficCountersAsync(
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "RequestTrafficCounters",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool ResetTrafficCounters(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "ResetTrafficCounters",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ResetTrafficCountersAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Service",
        "ResetTrafficCounters",
        std::move(success_callback),
        std::move(error_callback));
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.flimflam"};
  dbus::ObjectPath object_path_;
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace flimflam
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {
namespace flimflam {

// Abstract interface proxy for org::chromium::flimflam::Task.
class TaskProxyInterface {
 public:
  virtual ~TaskProxyInterface() = default;

  virtual bool getsec(
      std::string* out_1,
      std::string* out_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void getsecAsync(
      base::OnceCallback<void(const std::string&, const std::string&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool notify(
      const std::string& in_1,
      const std::map<std::string, std::string>& in_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void notifyAsync(
      const std::string& in_1,
      const std::map<std::string, std::string>& in_2,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace flimflam
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {
namespace flimflam {

// Interface proxy for org::chromium::flimflam::Task.
class TaskProxy final : public TaskProxyInterface {
 public:
  TaskProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const dbus::ObjectPath& object_path) :
          bus_{bus},
          object_path_{object_path},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  TaskProxy(const TaskProxy&) = delete;
  TaskProxy& operator=(const TaskProxy&) = delete;

  ~TaskProxy() override {
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

  bool getsec(
      std::string* out_1,
      std::string* out_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Task",
        "getsec",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_1, out_2);
  }

  void getsecAsync(
      base::OnceCallback<void(const std::string&, const std::string&)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Task",
        "getsec",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool notify(
      const std::string& in_1,
      const std::map<std::string, std::string>& in_2,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Task",
        "notify",
        error,
        in_1,
        in_2);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void notifyAsync(
      const std::string& in_1,
      const std::map<std::string, std::string>& in_2,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.Task",
        "notify",
        std::move(success_callback),
        std::move(error_callback),
        in_1,
        in_2);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.flimflam"};
  dbus::ObjectPath object_path_;
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace flimflam
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {
namespace flimflam {

// Abstract interface proxy for org::chromium::flimflam::ThirdPartyVpn.
class ThirdPartyVpnProxyInterface {
 public:
  virtual ~ThirdPartyVpnProxyInterface() = default;

  virtual bool SetParameters(
      const std::map<std::string, std::string>& in_parameters,
      std::string* out_warning,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetParametersAsync(
      const std::map<std::string, std::string>& in_parameters,
      base::OnceCallback<void(const std::string& /*warning*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool UpdateConnectionState(
      uint32_t in_connection_state,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void UpdateConnectionStateAsync(
      uint32_t in_connection_state,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SendPacket(
      const std::vector<uint8_t>& in_ip_packet,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SendPacketAsync(
      const std::vector<uint8_t>& in_ip_packet,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterOnPacketReceivedSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterOnPlatformMessageSignalHandler(
      const base::RepeatingCallback<void(uint32_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace flimflam
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {
namespace flimflam {

// Interface proxy for org::chromium::flimflam::ThirdPartyVpn.
class ThirdPartyVpnProxy final : public ThirdPartyVpnProxyInterface {
 public:
  ThirdPartyVpnProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const dbus::ObjectPath& object_path) :
          bus_{bus},
          object_path_{object_path},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  ThirdPartyVpnProxy(const ThirdPartyVpnProxy&) = delete;
  ThirdPartyVpnProxy& operator=(const ThirdPartyVpnProxy&) = delete;

  ~ThirdPartyVpnProxy() override {
  }

  void RegisterOnPacketReceivedSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.flimflam.ThirdPartyVpn",
        "OnPacketReceived",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterOnPlatformMessageSignalHandler(
      const base::RepeatingCallback<void(uint32_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.flimflam.ThirdPartyVpn",
        "OnPlatformMessage",
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

  bool SetParameters(
      const std::map<std::string, std::string>& in_parameters,
      std::string* out_warning,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.ThirdPartyVpn",
        "SetParameters",
        error,
        in_parameters);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_warning);
  }

  void SetParametersAsync(
      const std::map<std::string, std::string>& in_parameters,
      base::OnceCallback<void(const std::string& /*warning*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.ThirdPartyVpn",
        "SetParameters",
        std::move(success_callback),
        std::move(error_callback),
        in_parameters);
  }

  bool UpdateConnectionState(
      uint32_t in_connection_state,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.ThirdPartyVpn",
        "UpdateConnectionState",
        error,
        in_connection_state);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void UpdateConnectionStateAsync(
      uint32_t in_connection_state,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.ThirdPartyVpn",
        "UpdateConnectionState",
        std::move(success_callback),
        std::move(error_callback),
        in_connection_state);
  }

  bool SendPacket(
      const std::vector<uint8_t>& in_ip_packet,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.ThirdPartyVpn",
        "SendPacket",
        error,
        in_ip_packet);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SendPacketAsync(
      const std::vector<uint8_t>& in_ip_packet,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.flimflam.ThirdPartyVpn",
        "SendPacket",
        std::move(success_callback),
        std::move(error_callback),
        in_ip_packet);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.flimflam"};
  dbus::ObjectPath object_path_;
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace flimflam
}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_CLIENT_OUT_DEFAULT_GEN_INCLUDE_SHILL_DBUS_PROXIES_H
