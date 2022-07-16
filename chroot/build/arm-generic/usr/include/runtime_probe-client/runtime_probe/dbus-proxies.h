// Automatic generation of D-Bus interfaces:
//  - org.chromium.RuntimeProbe
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_RUNTIME_PROBE_CLIENT_OUT_DEFAULT_GEN_INCLUDE_RUNTIME_PROBE_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_RUNTIME_PROBE_CLIENT_OUT_DEFAULT_GEN_INCLUDE_RUNTIME_PROBE_DBUS_PROXIES_H
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

// Abstract interface proxy for org::chromium::RuntimeProbe.
class RuntimeProbeProxyInterface {
 public:
  virtual ~RuntimeProbeProxyInterface() = default;

  // Probe hardware components on the device.
  virtual bool ProbeCategories(
      const runtime_probe::ProbeRequest& in_request,
      runtime_probe::ProbeResult* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Probe hardware components on the device.
  virtual void ProbeCategoriesAsync(
      const runtime_probe::ProbeRequest& in_request,
      base::OnceCallback<void(const runtime_probe::ProbeResult& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Get known hardware components in the probe config file.
  virtual bool GetKnownComponents(
      const runtime_probe::GetKnownComponentsRequest& in_request,
      runtime_probe::GetKnownComponentsResult* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Get known hardware components in the probe config file.
  virtual void GetKnownComponentsAsync(
      const runtime_probe::GetKnownComponentsRequest& in_request,
      base::OnceCallback<void(const runtime_probe::GetKnownComponentsResult& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::RuntimeProbe.
class RuntimeProbeProxy final : public RuntimeProbeProxyInterface {
 public:
  RuntimeProbeProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  RuntimeProbeProxy(const RuntimeProbeProxy&) = delete;
  RuntimeProbeProxy& operator=(const RuntimeProbeProxy&) = delete;

  ~RuntimeProbeProxy() override {
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

  // Probe hardware components on the device.
  bool ProbeCategories(
      const runtime_probe::ProbeRequest& in_request,
      runtime_probe::ProbeResult* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.RuntimeProbe",
        "ProbeCategories",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  // Probe hardware components on the device.
  void ProbeCategoriesAsync(
      const runtime_probe::ProbeRequest& in_request,
      base::OnceCallback<void(const runtime_probe::ProbeResult& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.RuntimeProbe",
        "ProbeCategories",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  // Get known hardware components in the probe config file.
  bool GetKnownComponents(
      const runtime_probe::GetKnownComponentsRequest& in_request,
      runtime_probe::GetKnownComponentsResult* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.RuntimeProbe",
        "GetKnownComponents",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  // Get known hardware components in the probe config file.
  void GetKnownComponentsAsync(
      const runtime_probe::GetKnownComponentsRequest& in_request,
      base::OnceCallback<void(const runtime_probe::GetKnownComponentsResult& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.RuntimeProbe",
        "GetKnownComponents",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.RuntimeProbe"};
  const dbus::ObjectPath object_path_{"/org/chromium/RuntimeProbe"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_RUNTIME_PROBE_CLIENT_OUT_DEFAULT_GEN_INCLUDE_RUNTIME_PROBE_DBUS_PROXIES_H
