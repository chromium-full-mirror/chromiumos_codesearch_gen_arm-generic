// Automatic generation of D-Bus interfaces:
//  - org.chromium.BootLockboxInterface
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_BOOTLOCKBOX_CLIENT_OUT_DEFAULT_GEN_INCLUDE_BOOTLOCKBOX_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_BOOTLOCKBOX_CLIENT_OUT_DEFAULT_GEN_INCLUDE_BOOTLOCKBOX_DBUS_PROXIES_H
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

// Abstract interface proxy for org::chromium::BootLockboxInterface.
class BootLockboxInterfaceProxyInterface {
 public:
  virtual ~BootLockboxInterfaceProxyInterface() = default;

  virtual bool StoreBootLockbox(
      const cryptohome::StoreBootLockboxRequest& in_request,
      cryptohome::StoreBootLockboxReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StoreBootLockboxAsync(
      const cryptohome::StoreBootLockboxRequest& in_request,
      base::OnceCallback<void(const cryptohome::StoreBootLockboxReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ReadBootLockbox(
      const cryptohome::ReadBootLockboxRequest& in_request,
      cryptohome::ReadBootLockboxReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ReadBootLockboxAsync(
      const cryptohome::ReadBootLockboxRequest& in_request,
      base::OnceCallback<void(const cryptohome::ReadBootLockboxReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool FinalizeBootLockbox(
      const cryptohome::FinalizeNVRamBootLockboxRequest& in_request,
      cryptohome::FinalizeBootLockboxReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void FinalizeBootLockboxAsync(
      const cryptohome::FinalizeNVRamBootLockboxRequest& in_request,
      base::OnceCallback<void(const cryptohome::FinalizeBootLockboxReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::BootLockboxInterface.
class BootLockboxInterfaceProxy final : public BootLockboxInterfaceProxyInterface {
 public:
  BootLockboxInterfaceProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  BootLockboxInterfaceProxy(const BootLockboxInterfaceProxy&) = delete;
  BootLockboxInterfaceProxy& operator=(const BootLockboxInterfaceProxy&) = delete;

  ~BootLockboxInterfaceProxy() override {
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

  bool StoreBootLockbox(
      const cryptohome::StoreBootLockboxRequest& in_request,
      cryptohome::StoreBootLockboxReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.BootLockboxInterface",
        "StoreBootLockbox",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void StoreBootLockboxAsync(
      const cryptohome::StoreBootLockboxRequest& in_request,
      base::OnceCallback<void(const cryptohome::StoreBootLockboxReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.BootLockboxInterface",
        "StoreBootLockbox",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool ReadBootLockbox(
      const cryptohome::ReadBootLockboxRequest& in_request,
      cryptohome::ReadBootLockboxReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.BootLockboxInterface",
        "ReadBootLockbox",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void ReadBootLockboxAsync(
      const cryptohome::ReadBootLockboxRequest& in_request,
      base::OnceCallback<void(const cryptohome::ReadBootLockboxReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.BootLockboxInterface",
        "ReadBootLockbox",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool FinalizeBootLockbox(
      const cryptohome::FinalizeNVRamBootLockboxRequest& in_request,
      cryptohome::FinalizeBootLockboxReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.BootLockboxInterface",
        "FinalizeBootLockbox",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void FinalizeBootLockboxAsync(
      const cryptohome::FinalizeNVRamBootLockboxRequest& in_request,
      base::OnceCallback<void(const cryptohome::FinalizeBootLockboxReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.BootLockboxInterface",
        "FinalizeBootLockbox",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.BootLockbox"};
  const dbus::ObjectPath object_path_{"/org/chromium/BootLockbox"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_BOOTLOCKBOX_CLIENT_OUT_DEFAULT_GEN_INCLUDE_BOOTLOCKBOX_DBUS_PROXIES_H
