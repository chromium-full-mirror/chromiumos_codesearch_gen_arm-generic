// Automatic generation of D-Bus interfaces:
//  - org.chromium.DlpFilesPolicyService
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DLP_OUT_DEFAULT_GEN_INCLUDE_DLP_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DLP_OUT_DEFAULT_GEN_INCLUDE_DLP_DBUS_PROXIES_H
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

// Abstract interface proxy for org::chromium::DlpFilesPolicyService.
class DlpFilesPolicyServiceProxyInterface {
 public:
  virtual ~DlpFilesPolicyServiceProxyInterface() = default;

  // Returns whether a file from the given source could be restricted by any of files
  // restrictions in Data Leak Prevention policy.
  virtual bool IsDlpPolicyMatched(
      const std::vector<uint8_t>& in_request,
      std::vector<uint8_t>* out_response,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns whether a file from the given source could be restricted by any of files
  // restrictions in Data Leak Prevention policy.
  virtual void IsDlpPolicyMatchedAsync(
      const std::vector<uint8_t>& in_request,
      base::OnceCallback<void(const std::vector<uint8_t>& /*response*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns the source of files which are restricted to be transferred to the given destination according
  // to restrictions in Data Leak Prevention policy.
  virtual bool IsFilesTransferRestricted(
      const std::vector<uint8_t>& in_request,
      std::vector<uint8_t>* out_response,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns the source of files which are restricted to be transferred to the given destination according
  // to restrictions in Data Leak Prevention policy.
  virtual void IsFilesTransferRestrictedAsync(
      const std::vector<uint8_t>& in_request,
      base::OnceCallback<void(const std::vector<uint8_t>& /*response*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::DlpFilesPolicyService.
class DlpFilesPolicyServiceProxy final : public DlpFilesPolicyServiceProxyInterface {
 public:
  DlpFilesPolicyServiceProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name) :
          bus_{bus},
          service_name_{service_name},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  DlpFilesPolicyServiceProxy(const DlpFilesPolicyServiceProxy&) = delete;
  DlpFilesPolicyServiceProxy& operator=(const DlpFilesPolicyServiceProxy&) = delete;

  ~DlpFilesPolicyServiceProxy() override {
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

  // Returns whether a file from the given source could be restricted by any of files
  // restrictions in Data Leak Prevention policy.
  bool IsDlpPolicyMatched(
      const std::vector<uint8_t>& in_request,
      std::vector<uint8_t>* out_response,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlpFilesPolicyService",
        "IsDlpPolicyMatched",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_response);
  }

  // Returns whether a file from the given source could be restricted by any of files
  // restrictions in Data Leak Prevention policy.
  void IsDlpPolicyMatchedAsync(
      const std::vector<uint8_t>& in_request,
      base::OnceCallback<void(const std::vector<uint8_t>& /*response*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlpFilesPolicyService",
        "IsDlpPolicyMatched",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  // Returns the source of files which are restricted to be transferred to the given destination according
  // to restrictions in Data Leak Prevention policy.
  bool IsFilesTransferRestricted(
      const std::vector<uint8_t>& in_request,
      std::vector<uint8_t>* out_response,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlpFilesPolicyService",
        "IsFilesTransferRestricted",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_response);
  }

  // Returns the source of files which are restricted to be transferred to the given destination according
  // to restrictions in Data Leak Prevention policy.
  void IsFilesTransferRestrictedAsync(
      const std::vector<uint8_t>& in_request,
      base::OnceCallback<void(const std::vector<uint8_t>& /*response*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlpFilesPolicyService",
        "IsFilesTransferRestricted",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  std::string service_name_;
  const dbus::ObjectPath object_path_{"/org/chromium/DlpFilesPolicyService"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DLP_OUT_DEFAULT_GEN_INCLUDE_DLP_DBUS_PROXIES_H
