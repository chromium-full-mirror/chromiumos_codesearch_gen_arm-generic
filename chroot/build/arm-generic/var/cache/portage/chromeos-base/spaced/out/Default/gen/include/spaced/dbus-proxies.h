// Automatic generation of D-Bus interfaces:
//  - org.chromium.Spaced
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SPACED_OUT_DEFAULT_GEN_INCLUDE_SPACED_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SPACED_OUT_DEFAULT_GEN_INCLUDE_SPACED_DBUS_PROXIES_H
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

// Abstract interface proxy for org::chromium::Spaced.
class SpacedProxyInterface {
 public:
  virtual ~SpacedProxyInterface() = default;

  // Get free disk space available for the given file path.
  virtual bool GetFreeDiskSpace(
      const std::string& in_path,
      int64_t* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Get free disk space available for the given file path.
  virtual void GetFreeDiskSpaceAsync(
      const std::string& in_path,
      base::OnceCallback<void(int64_t /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Get total disk space available.
  virtual bool GetTotalDiskSpace(
      const std::string& in_path,
      int64_t* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Get total disk space available.
  virtual void GetTotalDiskSpaceAsync(
      const std::string& in_path,
      base::OnceCallback<void(int64_t /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Get the size of the root storage device.
  virtual bool GetRootDeviceSize(
      int64_t* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Get the size of the root storage device.
  virtual void GetRootDeviceSizeAsync(
      base::OnceCallback<void(int64_t /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::Spaced.
class SpacedProxy final : public SpacedProxyInterface {
 public:
  SpacedProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  SpacedProxy(const SpacedProxy&) = delete;
  SpacedProxy& operator=(const SpacedProxy&) = delete;

  ~SpacedProxy() override {
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

  // Get free disk space available for the given file path.
  bool GetFreeDiskSpace(
      const std::string& in_path,
      int64_t* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Spaced",
        "GetFreeDiskSpace",
        error,
        in_path);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  // Get free disk space available for the given file path.
  void GetFreeDiskSpaceAsync(
      const std::string& in_path,
      base::OnceCallback<void(int64_t /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Spaced",
        "GetFreeDiskSpace",
        std::move(success_callback),
        std::move(error_callback),
        in_path);
  }

  // Get total disk space available.
  bool GetTotalDiskSpace(
      const std::string& in_path,
      int64_t* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Spaced",
        "GetTotalDiskSpace",
        error,
        in_path);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  // Get total disk space available.
  void GetTotalDiskSpaceAsync(
      const std::string& in_path,
      base::OnceCallback<void(int64_t /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Spaced",
        "GetTotalDiskSpace",
        std::move(success_callback),
        std::move(error_callback),
        in_path);
  }

  // Get the size of the root storage device.
  bool GetRootDeviceSize(
      int64_t* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Spaced",
        "GetRootDeviceSize",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  // Get the size of the root storage device.
  void GetRootDeviceSizeAsync(
      base::OnceCallback<void(int64_t /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Spaced",
        "GetRootDeviceSize",
        std::move(success_callback),
        std::move(error_callback));
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.Spaced"};
  const dbus::ObjectPath object_path_{"/org/chromium/Spaced"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SPACED_OUT_DEFAULT_GEN_INCLUDE_SPACED_DBUS_PROXIES_H
