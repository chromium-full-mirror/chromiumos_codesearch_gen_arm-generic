// Automatic generation of D-Bus interfaces:
//  - org.chromium.PermissionBroker
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_PERMISSION_BROKER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_PERMISSION_BROKER_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_PERMISSION_BROKER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_PERMISSION_BROKER_DBUS_PROXIES_H
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

// Abstract interface proxy for org::chromium::PermissionBroker.
class PermissionBrokerProxyInterface {
 public:
  virtual ~PermissionBrokerProxyInterface() = default;

  virtual bool CheckPathAccess(
      const std::string& in_path,
      bool* out_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void CheckPathAccessAsync(
      const std::string& in_path,
      base::OnceCallback<void(bool /*allowed*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool OpenPath(
      const std::string& in_path,
      base::ScopedFD* out_fd,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void OpenPathAsync(
      const std::string& in_path,
      base::OnceCallback<void(const base::ScopedFD& /*fd*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |drop_privileges_mask| is a bit mask indicating which interface
  // numbers of a USB device are allowed. The interface number 0 corresponds
  // to the LSB of the mask. A device which has an ADB interface and other
  // interfaces for Camera or Storage may be opened purely as an ADB device
  // using a mask that zeros out the Camera and Storage interface number
  // bit positions. The |lifeline_fd| is an file descriptor by which clients
  // manage the lifetime of their device claim. Kernel drivers that were
  // detached from the device's interfaces on claim are reattached when
  // |lifeline_fd| is closed.
  virtual bool ClaimDevicePath(
      const std::string& in_path,
      uint32_t in_drop_privileges_mask,
      const brillo::dbus_utils::FileDescriptor& in_lifeline_fd,
      base::ScopedFD* out_fd,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // The |drop_privileges_mask| is a bit mask indicating which interface
  // numbers of a USB device are allowed. The interface number 0 corresponds
  // to the LSB of the mask. A device which has an ADB interface and other
  // interfaces for Camera or Storage may be opened purely as an ADB device
  // using a mask that zeros out the Camera and Storage interface number
  // bit positions. The |lifeline_fd| is an file descriptor by which clients
  // manage the lifetime of their device claim. Kernel drivers that were
  // detached from the device's interfaces on claim are reattached when
  // |lifeline_fd| is closed.
  virtual void ClaimDevicePathAsync(
      const std::string& in_path,
      uint32_t in_drop_privileges_mask,
      const brillo::dbus_utils::FileDescriptor& in_lifeline_fd,
      base::OnceCallback<void(const base::ScopedFD& /*fd*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // This API uses USB VBUS to power-cycle one or more USB devices.
  // The |vid| is the Vendor ID of the target device/devices.
  // The |pid| is the Product ID of the target device/devices.
  // The |delay|, expressed in base::TimeDelta::ToInternalValue() hence
  // microseconds, is a sleep-time between the power-off action and the
  // power-on action. This is useful when, for various reasons, a USB device
  // requires a certain amount of time to properly shut down.
  virtual bool PowerCycleUsbPorts(
      uint16_t in_vid,
      uint16_t in_pid,
      int64_t in_delay,
      bool* out_success,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // This API uses USB VBUS to power-cycle one or more USB devices.
  // The |vid| is the Vendor ID of the target device/devices.
  // The |pid| is the Product ID of the target device/devices.
  // The |delay|, expressed in base::TimeDelta::ToInternalValue() hence
  // microseconds, is a sleep-time between the power-off action and the
  // power-on action. This is useful when, for various reasons, a USB device
  // requires a certain amount of time to properly shut down.
  virtual void PowerCycleUsbPortsAsync(
      uint16_t in_vid,
      uint16_t in_pid,
      int64_t in_delay,
      base::OnceCallback<void(bool /*success*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RequestTcpPortAccess(
      uint16_t in_port,
      const std::string& in_interface,
      const brillo::dbus_utils::FileDescriptor& in_lifeline_fd,
      bool* out_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RequestTcpPortAccessAsync(
      uint16_t in_port,
      const std::string& in_interface,
      const brillo::dbus_utils::FileDescriptor& in_lifeline_fd,
      base::OnceCallback<void(bool /*allowed*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RequestUdpPortAccess(
      uint16_t in_port,
      const std::string& in_interface,
      const brillo::dbus_utils::FileDescriptor& in_lifeline_fd,
      bool* out_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RequestUdpPortAccessAsync(
      uint16_t in_port,
      const std::string& in_interface,
      const brillo::dbus_utils::FileDescriptor& in_lifeline_fd,
      base::OnceCallback<void(bool /*allowed*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RequestLoopbackTcpPortLockdown(
      uint16_t in_port,
      const brillo::dbus_utils::FileDescriptor& in_lifeline_fd,
      bool* out_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RequestLoopbackTcpPortLockdownAsync(
      uint16_t in_port,
      const brillo::dbus_utils::FileDescriptor& in_lifeline_fd,
      base::OnceCallback<void(bool /*allowed*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ReleaseTcpPort(
      uint16_t in_port,
      const std::string& in_interface,
      bool* out_success,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ReleaseTcpPortAsync(
      uint16_t in_port,
      const std::string& in_interface,
      base::OnceCallback<void(bool /*success*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ReleaseUdpPort(
      uint16_t in_port,
      const std::string& in_interface,
      bool* out_success,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ReleaseUdpPortAsync(
      uint16_t in_port,
      const std::string& in_interface,
      base::OnceCallback<void(bool /*success*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ReleaseLoopbackTcpPort(
      uint16_t in_port,
      bool* out_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ReleaseLoopbackTcpPortAsync(
      uint16_t in_port,
      base::OnceCallback<void(bool /*allowed*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RequestTcpPortForward(
      uint16_t in_port,
      const std::string& in_interface,
      const std::string& in_dst_ip,
      uint16_t in_dst_port,
      const brillo::dbus_utils::FileDescriptor& in_lifeline_fd,
      bool* out_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RequestTcpPortForwardAsync(
      uint16_t in_port,
      const std::string& in_interface,
      const std::string& in_dst_ip,
      uint16_t in_dst_port,
      const brillo::dbus_utils::FileDescriptor& in_lifeline_fd,
      base::OnceCallback<void(bool /*allowed*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RequestUdpPortForward(
      uint16_t in_port,
      const std::string& in_interface,
      const std::string& in_dst_ip,
      uint16_t in_dst_port,
      const brillo::dbus_utils::FileDescriptor& in_lifeline_fd,
      bool* out_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RequestUdpPortForwardAsync(
      uint16_t in_port,
      const std::string& in_interface,
      const std::string& in_dst_ip,
      uint16_t in_dst_port,
      const brillo::dbus_utils::FileDescriptor& in_lifeline_fd,
      base::OnceCallback<void(bool /*allowed*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ReleaseTcpPortForward(
      uint16_t in_port,
      const std::string& in_interface,
      bool* out_success,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ReleaseTcpPortForwardAsync(
      uint16_t in_port,
      const std::string& in_interface,
      base::OnceCallback<void(bool /*success*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ReleaseUdpPortForward(
      uint16_t in_port,
      const std::string& in_interface,
      bool* out_success,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ReleaseUdpPortForwardAsync(
      uint16_t in_port,
      const std::string& in_interface,
      base::OnceCallback<void(bool /*success*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::PermissionBroker.
class PermissionBrokerProxy final : public PermissionBrokerProxyInterface {
 public:
  PermissionBrokerProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  PermissionBrokerProxy(const PermissionBrokerProxy&) = delete;
  PermissionBrokerProxy& operator=(const PermissionBrokerProxy&) = delete;

  ~PermissionBrokerProxy() override {
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

  bool CheckPathAccess(
      const std::string& in_path,
      bool* out_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "CheckPathAccess",
        error,
        in_path);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_allowed);
  }

  void CheckPathAccessAsync(
      const std::string& in_path,
      base::OnceCallback<void(bool /*allowed*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "CheckPathAccess",
        std::move(success_callback),
        std::move(error_callback),
        in_path);
  }

  bool OpenPath(
      const std::string& in_path,
      base::ScopedFD* out_fd,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "OpenPath",
        error,
        in_path);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_fd);
  }

  void OpenPathAsync(
      const std::string& in_path,
      base::OnceCallback<void(const base::ScopedFD& /*fd*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "OpenPath",
        std::move(success_callback),
        std::move(error_callback),
        in_path);
  }

  // The |drop_privileges_mask| is a bit mask indicating which interface
  // numbers of a USB device are allowed. The interface number 0 corresponds
  // to the LSB of the mask. A device which has an ADB interface and other
  // interfaces for Camera or Storage may be opened purely as an ADB device
  // using a mask that zeros out the Camera and Storage interface number
  // bit positions. The |lifeline_fd| is an file descriptor by which clients
  // manage the lifetime of their device claim. Kernel drivers that were
  // detached from the device's interfaces on claim are reattached when
  // |lifeline_fd| is closed.
  bool ClaimDevicePath(
      const std::string& in_path,
      uint32_t in_drop_privileges_mask,
      const brillo::dbus_utils::FileDescriptor& in_lifeline_fd,
      base::ScopedFD* out_fd,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "ClaimDevicePath",
        error,
        in_path,
        in_drop_privileges_mask,
        in_lifeline_fd);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_fd);
  }

  // The |drop_privileges_mask| is a bit mask indicating which interface
  // numbers of a USB device are allowed. The interface number 0 corresponds
  // to the LSB of the mask. A device which has an ADB interface and other
  // interfaces for Camera or Storage may be opened purely as an ADB device
  // using a mask that zeros out the Camera and Storage interface number
  // bit positions. The |lifeline_fd| is an file descriptor by which clients
  // manage the lifetime of their device claim. Kernel drivers that were
  // detached from the device's interfaces on claim are reattached when
  // |lifeline_fd| is closed.
  void ClaimDevicePathAsync(
      const std::string& in_path,
      uint32_t in_drop_privileges_mask,
      const brillo::dbus_utils::FileDescriptor& in_lifeline_fd,
      base::OnceCallback<void(const base::ScopedFD& /*fd*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "ClaimDevicePath",
        std::move(success_callback),
        std::move(error_callback),
        in_path,
        in_drop_privileges_mask,
        in_lifeline_fd);
  }

  // This API uses USB VBUS to power-cycle one or more USB devices.
  // The |vid| is the Vendor ID of the target device/devices.
  // The |pid| is the Product ID of the target device/devices.
  // The |delay|, expressed in base::TimeDelta::ToInternalValue() hence
  // microseconds, is a sleep-time between the power-off action and the
  // power-on action. This is useful when, for various reasons, a USB device
  // requires a certain amount of time to properly shut down.
  bool PowerCycleUsbPorts(
      uint16_t in_vid,
      uint16_t in_pid,
      int64_t in_delay,
      bool* out_success,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "PowerCycleUsbPorts",
        error,
        in_vid,
        in_pid,
        in_delay);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_success);
  }

  // This API uses USB VBUS to power-cycle one or more USB devices.
  // The |vid| is the Vendor ID of the target device/devices.
  // The |pid| is the Product ID of the target device/devices.
  // The |delay|, expressed in base::TimeDelta::ToInternalValue() hence
  // microseconds, is a sleep-time between the power-off action and the
  // power-on action. This is useful when, for various reasons, a USB device
  // requires a certain amount of time to properly shut down.
  void PowerCycleUsbPortsAsync(
      uint16_t in_vid,
      uint16_t in_pid,
      int64_t in_delay,
      base::OnceCallback<void(bool /*success*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "PowerCycleUsbPorts",
        std::move(success_callback),
        std::move(error_callback),
        in_vid,
        in_pid,
        in_delay);
  }

  bool RequestTcpPortAccess(
      uint16_t in_port,
      const std::string& in_interface,
      const brillo::dbus_utils::FileDescriptor& in_lifeline_fd,
      bool* out_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "RequestTcpPortAccess",
        error,
        in_port,
        in_interface,
        in_lifeline_fd);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_allowed);
  }

  void RequestTcpPortAccessAsync(
      uint16_t in_port,
      const std::string& in_interface,
      const brillo::dbus_utils::FileDescriptor& in_lifeline_fd,
      base::OnceCallback<void(bool /*allowed*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "RequestTcpPortAccess",
        std::move(success_callback),
        std::move(error_callback),
        in_port,
        in_interface,
        in_lifeline_fd);
  }

  bool RequestUdpPortAccess(
      uint16_t in_port,
      const std::string& in_interface,
      const brillo::dbus_utils::FileDescriptor& in_lifeline_fd,
      bool* out_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "RequestUdpPortAccess",
        error,
        in_port,
        in_interface,
        in_lifeline_fd);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_allowed);
  }

  void RequestUdpPortAccessAsync(
      uint16_t in_port,
      const std::string& in_interface,
      const brillo::dbus_utils::FileDescriptor& in_lifeline_fd,
      base::OnceCallback<void(bool /*allowed*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "RequestUdpPortAccess",
        std::move(success_callback),
        std::move(error_callback),
        in_port,
        in_interface,
        in_lifeline_fd);
  }

  bool RequestLoopbackTcpPortLockdown(
      uint16_t in_port,
      const brillo::dbus_utils::FileDescriptor& in_lifeline_fd,
      bool* out_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "RequestLoopbackTcpPortLockdown",
        error,
        in_port,
        in_lifeline_fd);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_allowed);
  }

  void RequestLoopbackTcpPortLockdownAsync(
      uint16_t in_port,
      const brillo::dbus_utils::FileDescriptor& in_lifeline_fd,
      base::OnceCallback<void(bool /*allowed*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "RequestLoopbackTcpPortLockdown",
        std::move(success_callback),
        std::move(error_callback),
        in_port,
        in_lifeline_fd);
  }

  bool ReleaseTcpPort(
      uint16_t in_port,
      const std::string& in_interface,
      bool* out_success,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "ReleaseTcpPort",
        error,
        in_port,
        in_interface);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_success);
  }

  void ReleaseTcpPortAsync(
      uint16_t in_port,
      const std::string& in_interface,
      base::OnceCallback<void(bool /*success*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "ReleaseTcpPort",
        std::move(success_callback),
        std::move(error_callback),
        in_port,
        in_interface);
  }

  bool ReleaseUdpPort(
      uint16_t in_port,
      const std::string& in_interface,
      bool* out_success,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "ReleaseUdpPort",
        error,
        in_port,
        in_interface);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_success);
  }

  void ReleaseUdpPortAsync(
      uint16_t in_port,
      const std::string& in_interface,
      base::OnceCallback<void(bool /*success*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "ReleaseUdpPort",
        std::move(success_callback),
        std::move(error_callback),
        in_port,
        in_interface);
  }

  bool ReleaseLoopbackTcpPort(
      uint16_t in_port,
      bool* out_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "ReleaseLoopbackTcpPort",
        error,
        in_port);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_allowed);
  }

  void ReleaseLoopbackTcpPortAsync(
      uint16_t in_port,
      base::OnceCallback<void(bool /*allowed*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "ReleaseLoopbackTcpPort",
        std::move(success_callback),
        std::move(error_callback),
        in_port);
  }

  bool RequestTcpPortForward(
      uint16_t in_port,
      const std::string& in_interface,
      const std::string& in_dst_ip,
      uint16_t in_dst_port,
      const brillo::dbus_utils::FileDescriptor& in_lifeline_fd,
      bool* out_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "RequestTcpPortForward",
        error,
        in_port,
        in_interface,
        in_dst_ip,
        in_dst_port,
        in_lifeline_fd);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_allowed);
  }

  void RequestTcpPortForwardAsync(
      uint16_t in_port,
      const std::string& in_interface,
      const std::string& in_dst_ip,
      uint16_t in_dst_port,
      const brillo::dbus_utils::FileDescriptor& in_lifeline_fd,
      base::OnceCallback<void(bool /*allowed*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "RequestTcpPortForward",
        std::move(success_callback),
        std::move(error_callback),
        in_port,
        in_interface,
        in_dst_ip,
        in_dst_port,
        in_lifeline_fd);
  }

  bool RequestUdpPortForward(
      uint16_t in_port,
      const std::string& in_interface,
      const std::string& in_dst_ip,
      uint16_t in_dst_port,
      const brillo::dbus_utils::FileDescriptor& in_lifeline_fd,
      bool* out_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "RequestUdpPortForward",
        error,
        in_port,
        in_interface,
        in_dst_ip,
        in_dst_port,
        in_lifeline_fd);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_allowed);
  }

  void RequestUdpPortForwardAsync(
      uint16_t in_port,
      const std::string& in_interface,
      const std::string& in_dst_ip,
      uint16_t in_dst_port,
      const brillo::dbus_utils::FileDescriptor& in_lifeline_fd,
      base::OnceCallback<void(bool /*allowed*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "RequestUdpPortForward",
        std::move(success_callback),
        std::move(error_callback),
        in_port,
        in_interface,
        in_dst_ip,
        in_dst_port,
        in_lifeline_fd);
  }

  bool ReleaseTcpPortForward(
      uint16_t in_port,
      const std::string& in_interface,
      bool* out_success,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "ReleaseTcpPortForward",
        error,
        in_port,
        in_interface);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_success);
  }

  void ReleaseTcpPortForwardAsync(
      uint16_t in_port,
      const std::string& in_interface,
      base::OnceCallback<void(bool /*success*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "ReleaseTcpPortForward",
        std::move(success_callback),
        std::move(error_callback),
        in_port,
        in_interface);
  }

  bool ReleaseUdpPortForward(
      uint16_t in_port,
      const std::string& in_interface,
      bool* out_success,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "ReleaseUdpPortForward",
        error,
        in_port,
        in_interface);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_success);
  }

  void ReleaseUdpPortForwardAsync(
      uint16_t in_port,
      const std::string& in_interface,
      base::OnceCallback<void(bool /*success*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.PermissionBroker",
        "ReleaseUdpPortForward",
        std::move(success_callback),
        std::move(error_callback),
        in_port,
        in_interface);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.PermissionBroker"};
  const dbus::ObjectPath object_path_{"/org/chromium/PermissionBroker"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_PERMISSION_BROKER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_PERMISSION_BROKER_DBUS_PROXIES_H
