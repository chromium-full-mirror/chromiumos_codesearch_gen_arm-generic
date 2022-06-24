// Automatic generation of D-Bus interfaces:
//  - org.chromium.MachineLearning.AdaptiveCharging
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_ML_CLIENT_OUT_DEFAULT_GEN_INCLUDE_ML_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_ML_CLIENT_OUT_DEFAULT_GEN_INCLUDE_ML_DBUS_PROXIES_H
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
namespace MachineLearning {

// Abstract interface proxy for org::chromium::MachineLearning::AdaptiveCharging.
class AdaptiveChargingProxyInterface {
 public:
  virtual ~AdaptiveChargingProxyInterface() = default;

  virtual bool RequestAdaptiveChargingDecision(
      const std::vector<uint8_t>& in_serialized_example_proto,
      bool* out_status,
      std::vector<double>* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RequestAdaptiveChargingDecisionAsync(
      const std::vector<uint8_t>& in_serialized_example_proto,
      base::OnceCallback<void(bool /*status*/, const std::vector<double>& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace MachineLearning
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {
namespace MachineLearning {

// Interface proxy for org::chromium::MachineLearning::AdaptiveCharging.
class AdaptiveChargingProxy final : public AdaptiveChargingProxyInterface {
 public:
  AdaptiveChargingProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name) :
          bus_{bus},
          service_name_{service_name},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  AdaptiveChargingProxy(const AdaptiveChargingProxy&) = delete;
  AdaptiveChargingProxy& operator=(const AdaptiveChargingProxy&) = delete;

  ~AdaptiveChargingProxy() override {
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

  bool RequestAdaptiveChargingDecision(
      const std::vector<uint8_t>& in_serialized_example_proto,
      bool* out_status,
      std::vector<double>* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.MachineLearning.AdaptiveCharging",
        "RequestAdaptiveChargingDecision",
        error,
        in_serialized_example_proto);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_status, out_result);
  }

  void RequestAdaptiveChargingDecisionAsync(
      const std::vector<uint8_t>& in_serialized_example_proto,
      base::OnceCallback<void(bool /*status*/, const std::vector<double>& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.MachineLearning.AdaptiveCharging",
        "RequestAdaptiveChargingDecision",
        std::move(success_callback),
        std::move(error_callback),
        in_serialized_example_proto);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  std::string service_name_;
  const dbus::ObjectPath object_path_{"/org/chromium/MachineLearning/AdaptiveCharging"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace MachineLearning
}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_ML_CLIENT_OUT_DEFAULT_GEN_INCLUDE_ML_DBUS_PROXIES_H
