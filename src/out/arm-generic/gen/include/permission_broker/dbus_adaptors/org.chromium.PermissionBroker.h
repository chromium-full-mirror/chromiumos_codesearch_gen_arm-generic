// Automatic generation of D-Bus interfaces:
//  - org.chromium.PermissionBroker
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_PERMISSION_BROKER_OUT_DEFAULT_GEN_INCLUDE_PERMISSION_BROKER_DBUS_ADAPTORS_ORG_CHROMIUM_PERMISSIONBROKER_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_PERMISSION_BROKER_OUT_DEFAULT_GEN_INCLUDE_PERMISSION_BROKER_DBUS_ADAPTORS_ORG_CHROMIUM_PERMISSIONBROKER_H
#include <memory>
#include <string>
#include <tuple>
#include <vector>

#include <base/files/scoped_file.h>
#include <dbus/object_path.h>
#include <brillo/any.h>
#include <brillo/dbus/dbus_object.h>
#include <brillo/dbus/exported_object_manager.h>
#include <brillo/dbus/file_descriptor.h>
#include <brillo/variant_dictionary.h>

namespace org {
namespace chromium {

// Interface definition for org::chromium::PermissionBroker.
class PermissionBrokerInterface {
 public:
  virtual ~PermissionBrokerInterface() = default;

  virtual bool CheckPathAccess(
      const std::string& in_path) = 0;
  virtual bool OpenPath(
      brillo::ErrorPtr* error,
      const std::string& in_path,
      brillo::dbus_utils::FileDescriptor* out_fd) = 0;
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
      brillo::ErrorPtr* error,
      const std::string& in_path,
      uint32_t in_drop_privileges_mask,
      const base::ScopedFD& in_lifeline_fd,
      brillo::dbus_utils::FileDescriptor* out_fd) = 0;
  // This API is for a client to register with the Permission Broker to
  // make requests to detach/reattach USB device interfaces in the future.
  // The |drop_privileges_mask| is a bit mask indicating which interface
  // numbers of a USB device are allowed. The interface number 0 corresponds
  // to the LSB of the mask. A device which has an ADB interface and other
  // interfaces for Camera or Storage may be opened purely as an ADB device
  // using a mask that zeros out the Camera and Storage interface number
  // bit positions.
  // The |path| is the USB device path the client wants to access.
  // The |lifeline_fd| is a file descriptor for monitoring the client's
  // lifetime and reattaching detached interfaces when the client terminates.
  // The method returns |fd| which is a file descriptor opened at |path|,
  // and |client_id| which is an unique id for a registered client.
  virtual bool OpenPathAndRegisterClient(
      brillo::ErrorPtr* error,
      const std::string& in_path,
      uint32_t in_drop_privileges_mask,
      const base::ScopedFD& in_lifeline_fd,
      brillo::dbus_utils::FileDescriptor* out_fd,
      std::string* out_client_id) = 0;
  // This API is for the client with |client_id| to detach the interface
  // |iface_num| at the USB device associated with it.
  virtual bool DetachInterface(
      const std::string& in_client_id,
      uint8_t in_iface_num) = 0;
  // This API is for the client with |client_id| to reattach the interface
  // |iface_num| at the USB device associated with it.
  virtual bool ReattachInterface(
      const std::string& in_client_id,
      uint8_t in_iface_num) = 0;
  // This API uses USB VBUS to power-cycle one or more USB devices.
  // The |vid| is the Vendor ID of the target device/devices.
  // The |pid| is the Product ID of the target device/devices.
  // The |delay|, expressed in base::TimeDelta::ToInternalValue() hence
  // microseconds, is a sleep-time between the power-off action and the
  // power-on action. This is useful when, for various reasons, a USB device
  // requires a certain amount of time to properly shut down.
  virtual void PowerCycleUsbPorts(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<bool>> response,
      uint16_t in_vid,
      uint16_t in_pid,
      int64_t in_delay) = 0;
  virtual bool RequestTcpPortAccess(
      uint16_t in_port,
      const std::string& in_interface,
      const base::ScopedFD& in_lifeline_fd) = 0;
  virtual bool RequestUdpPortAccess(
      uint16_t in_port,
      const std::string& in_interface,
      const base::ScopedFD& in_lifeline_fd) = 0;
  virtual bool RequestLoopbackTcpPortLockdown(
      uint16_t in_port,
      const base::ScopedFD& in_lifeline_fd) = 0;
  virtual bool ReleaseTcpPort(
      uint16_t in_port,
      const std::string& in_interface) = 0;
  virtual bool ReleaseUdpPort(
      uint16_t in_port,
      const std::string& in_interface) = 0;
  virtual bool ReleaseLoopbackTcpPort(
      uint16_t in_port) = 0;
  virtual bool RequestTcpPortForward(
      uint16_t in_port,
      const std::string& in_interface,
      const std::string& in_dst_ip,
      uint16_t in_dst_port,
      const base::ScopedFD& in_lifeline_fd) = 0;
  virtual bool RequestUdpPortForward(
      uint16_t in_port,
      const std::string& in_interface,
      const std::string& in_dst_ip,
      uint16_t in_dst_port,
      const base::ScopedFD& in_lifeline_fd) = 0;
  virtual bool ReleaseTcpPortForward(
      uint16_t in_port,
      const std::string& in_interface) = 0;
  virtual bool ReleaseUdpPortForward(
      uint16_t in_port,
      const std::string& in_interface) = 0;
};

// Interface adaptor for org::chromium::PermissionBroker.
class PermissionBrokerAdaptor {
 public:
  PermissionBrokerAdaptor(PermissionBrokerInterface* interface) : interface_(interface) {}
  PermissionBrokerAdaptor(const PermissionBrokerAdaptor&) = delete;
  PermissionBrokerAdaptor& operator=(const PermissionBrokerAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.PermissionBroker");

    itf->AddSimpleMethodHandler(
        "CheckPathAccess",
        base::Unretained(interface_),
        &PermissionBrokerInterface::CheckPathAccess);
    itf->AddSimpleMethodHandlerWithError(
        "OpenPath",
        base::Unretained(interface_),
        &PermissionBrokerInterface::OpenPath);
    itf->AddSimpleMethodHandlerWithError(
        "ClaimDevicePath",
        base::Unretained(interface_),
        &PermissionBrokerInterface::ClaimDevicePath);
    itf->AddSimpleMethodHandlerWithError(
        "OpenPathAndRegisterClient",
        base::Unretained(interface_),
        &PermissionBrokerInterface::OpenPathAndRegisterClient);
    itf->AddSimpleMethodHandler(
        "DetachInterface",
        base::Unretained(interface_),
        &PermissionBrokerInterface::DetachInterface);
    itf->AddSimpleMethodHandler(
        "ReattachInterface",
        base::Unretained(interface_),
        &PermissionBrokerInterface::ReattachInterface);
    itf->AddMethodHandler(
        "PowerCycleUsbPorts",
        base::Unretained(interface_),
        &PermissionBrokerInterface::PowerCycleUsbPorts);
    itf->AddSimpleMethodHandler(
        "RequestTcpPortAccess",
        base::Unretained(interface_),
        &PermissionBrokerInterface::RequestTcpPortAccess);
    itf->AddSimpleMethodHandler(
        "RequestUdpPortAccess",
        base::Unretained(interface_),
        &PermissionBrokerInterface::RequestUdpPortAccess);
    itf->AddSimpleMethodHandler(
        "RequestLoopbackTcpPortLockdown",
        base::Unretained(interface_),
        &PermissionBrokerInterface::RequestLoopbackTcpPortLockdown);
    itf->AddSimpleMethodHandler(
        "ReleaseTcpPort",
        base::Unretained(interface_),
        &PermissionBrokerInterface::ReleaseTcpPort);
    itf->AddSimpleMethodHandler(
        "ReleaseUdpPort",
        base::Unretained(interface_),
        &PermissionBrokerInterface::ReleaseUdpPort);
    itf->AddSimpleMethodHandler(
        "ReleaseLoopbackTcpPort",
        base::Unretained(interface_),
        &PermissionBrokerInterface::ReleaseLoopbackTcpPort);
    itf->AddSimpleMethodHandler(
        "RequestTcpPortForward",
        base::Unretained(interface_),
        &PermissionBrokerInterface::RequestTcpPortForward);
    itf->AddSimpleMethodHandler(
        "RequestUdpPortForward",
        base::Unretained(interface_),
        &PermissionBrokerInterface::RequestUdpPortForward);
    itf->AddSimpleMethodHandler(
        "ReleaseTcpPortForward",
        base::Unretained(interface_),
        &PermissionBrokerInterface::ReleaseTcpPortForward);
    itf->AddSimpleMethodHandler(
        "ReleaseUdpPortForward",
        base::Unretained(interface_),
        &PermissionBrokerInterface::ReleaseUdpPortForward);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/PermissionBroker"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.PermissionBroker\">\n"
        "    <method name=\"CheckPathAccess\">\n"
        "      <arg name=\"path\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"allowed\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"OpenPath\">\n"
        "      <arg name=\"path\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"fd\" type=\"h\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ClaimDevicePath\">\n"
        "      <arg name=\"path\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"drop_privileges_mask\" type=\"u\" direction=\"in\"/>\n"
        "      <arg name=\"lifeline_fd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"fd\" type=\"h\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"OpenPathAndRegisterClient\">\n"
        "      <arg name=\"path\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"drop_privileges_mask\" type=\"u\" direction=\"in\"/>\n"
        "      <arg name=\"lifeline_fd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"fd\" type=\"h\" direction=\"out\"/>\n"
        "      <arg name=\"client_id\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"DetachInterface\">\n"
        "      <arg name=\"client_id\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"iface_num\" type=\"y\" direction=\"in\"/>\n"
        "      <arg name=\"success\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ReattachInterface\">\n"
        "      <arg name=\"client_id\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"iface_num\" type=\"y\" direction=\"in\"/>\n"
        "      <arg name=\"success\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"PowerCycleUsbPorts\">\n"
        "      <arg name=\"vid\" type=\"q\" direction=\"in\"/>\n"
        "      <arg name=\"pid\" type=\"q\" direction=\"in\"/>\n"
        "      <arg name=\"delay\" type=\"x\" direction=\"in\"/>\n"
        "      <arg name=\"success\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"RequestTcpPortAccess\">\n"
        "      <arg name=\"port\" type=\"q\" direction=\"in\"/>\n"
        "      <arg name=\"interface\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"lifeline_fd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"allowed\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"RequestUdpPortAccess\">\n"
        "      <arg name=\"port\" type=\"q\" direction=\"in\"/>\n"
        "      <arg name=\"interface\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"lifeline_fd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"allowed\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"RequestLoopbackTcpPortLockdown\">\n"
        "      <arg name=\"port\" type=\"q\" direction=\"in\"/>\n"
        "      <arg name=\"lifeline_fd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"allowed\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ReleaseTcpPort\">\n"
        "      <arg name=\"port\" type=\"q\" direction=\"in\"/>\n"
        "      <arg name=\"interface\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"success\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ReleaseUdpPort\">\n"
        "      <arg name=\"port\" type=\"q\" direction=\"in\"/>\n"
        "      <arg name=\"interface\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"success\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ReleaseLoopbackTcpPort\">\n"
        "      <arg name=\"port\" type=\"q\" direction=\"in\"/>\n"
        "      <arg name=\"allowed\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"RequestTcpPortForward\">\n"
        "      <arg name=\"port\" type=\"q\" direction=\"in\"/>\n"
        "      <arg name=\"interface\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"dst_ip\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"dst_port\" type=\"q\" direction=\"in\"/>\n"
        "      <arg name=\"lifeline_fd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"allowed\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"RequestUdpPortForward\">\n"
        "      <arg name=\"port\" type=\"q\" direction=\"in\"/>\n"
        "      <arg name=\"interface\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"dst_ip\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"dst_port\" type=\"q\" direction=\"in\"/>\n"
        "      <arg name=\"lifeline_fd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"allowed\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ReleaseTcpPortForward\">\n"
        "      <arg name=\"port\" type=\"q\" direction=\"in\"/>\n"
        "      <arg name=\"interface\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"success\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ReleaseUdpPortForward\">\n"
        "      <arg name=\"port\" type=\"q\" direction=\"in\"/>\n"
        "      <arg name=\"interface\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"success\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "  </interface>\n";
  }

 private:
  PermissionBrokerInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_PERMISSION_BROKER_OUT_DEFAULT_GEN_INCLUDE_PERMISSION_BROKER_DBUS_ADAPTORS_ORG_CHROMIUM_PERMISSIONBROKER_H
