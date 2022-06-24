// Automatic generation of D-Bus interfaces:
//  - org.chromium.SmbFs
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SMBFS_OUT_DEFAULT_GEN_INCLUDE_SMBFS_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SMBFS_OUT_DEFAULT_GEN_INCLUDE_SMBFS_DBUS_PROXIES_H
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

// Abstract interface proxy for org::chromium::SmbFs.
class SmbFsProxyInterface {
 public:
  virtual ~SmbFsProxyInterface() = default;

  virtual bool OpenIpcChannel(
      const std::string& in_identity,
      const brillo::dbus_utils::FileDescriptor& in_socket,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void OpenIpcChannelAsync(
      const std::string& in_identity,
      const brillo::dbus_utils::FileDescriptor& in_socket,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::SmbFs.
class SmbFsProxy final : public SmbFsProxyInterface {
 public:
  SmbFsProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name) :
          bus_{bus},
          service_name_{service_name},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  SmbFsProxy(const SmbFsProxy&) = delete;
  SmbFsProxy& operator=(const SmbFsProxy&) = delete;

  ~SmbFsProxy() override {
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

  bool OpenIpcChannel(
      const std::string& in_identity,
      const brillo::dbus_utils::FileDescriptor& in_socket,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SmbFs",
        "OpenIpcChannel",
        error,
        in_identity,
        in_socket);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void OpenIpcChannelAsync(
      const std::string& in_identity,
      const brillo::dbus_utils::FileDescriptor& in_socket,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SmbFs",
        "OpenIpcChannel",
        std::move(success_callback),
        std::move(error_callback),
        in_identity,
        in_socket);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  std::string service_name_;
  const dbus::ObjectPath object_path_{"/org/chromium/SmbFs"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SMBFS_OUT_DEFAULT_GEN_INCLUDE_SMBFS_DBUS_PROXIES_H
