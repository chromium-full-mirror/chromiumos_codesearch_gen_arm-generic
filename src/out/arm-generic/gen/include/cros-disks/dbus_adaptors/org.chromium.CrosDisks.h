// Automatic generation of D-Bus interfaces:
//  - org.chromium.CrosDisks
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CROS_DISKS_OUT_DEFAULT_GEN_INCLUDE_CROS_DISKS_DBUS_ADAPTORS_ORG_CHROMIUM_CROSDISKS_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CROS_DISKS_OUT_DEFAULT_GEN_INCLUDE_CROS_DISKS_DBUS_ADAPTORS_ORG_CHROMIUM_CROSDISKS_H
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

// Interface definition for org::chromium::CrosDisks.
class CrosDisksInterface {
 public:
  virtual ~CrosDisksInterface() = default;

  virtual void Mount(
      const std::string& in_path,
      const std::string& in_filesystem_type,
      const std::vector<std::string>& in_options) = 0;
  virtual uint32_t Unmount(
      const std::string& in_path,
      const std::vector<std::string>& in_options) = 0;
  virtual void UnmountAll() = 0;
  virtual std::vector<std::string> EnumerateDevices() = 0;
  virtual std::vector<std::tuple<uint32_t, std::string, uint32_t, std::string>> EnumerateMountEntries() = 0;
  virtual bool GetDeviceProperties(
      brillo::ErrorPtr* error,
      const std::string& in_device_path,
      brillo::VariantDictionary* out_properties) = 0;
  virtual void Format(
      const std::string& in_path,
      const std::string& in_filesystem_type,
      const std::vector<std::string>& in_options) = 0;
  virtual void SinglePartitionFormat(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<uint32_t>> response,
      const std::string& in_path) = 0;
  virtual void Rename(
      const std::string& in_path,
      const std::string& in_volume_name) = 0;
  virtual void AddDeviceToAllowlist(
      const std::string& in_device_path) = 0;
  virtual void RemoveDeviceFromAllowlist(
      const std::string& in_device_path) = 0;
};

// Interface adaptor for org::chromium::CrosDisks.
class CrosDisksAdaptor {
 public:
  CrosDisksAdaptor(CrosDisksInterface* interface) : interface_(interface) {}
  CrosDisksAdaptor(const CrosDisksAdaptor&) = delete;
  CrosDisksAdaptor& operator=(const CrosDisksAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.CrosDisks");

    itf->AddSimpleMethodHandler(
        "Mount",
        base::Unretained(interface_),
        &CrosDisksInterface::Mount);
    itf->AddSimpleMethodHandler(
        "Unmount",
        base::Unretained(interface_),
        &CrosDisksInterface::Unmount);
    itf->AddSimpleMethodHandler(
        "UnmountAll",
        base::Unretained(interface_),
        &CrosDisksInterface::UnmountAll);
    itf->AddSimpleMethodHandler(
        "EnumerateDevices",
        base::Unretained(interface_),
        &CrosDisksInterface::EnumerateDevices);
    itf->AddSimpleMethodHandler(
        "EnumerateMountEntries",
        base::Unretained(interface_),
        &CrosDisksInterface::EnumerateMountEntries);
    itf->AddSimpleMethodHandlerWithError(
        "GetDeviceProperties",
        base::Unretained(interface_),
        &CrosDisksInterface::GetDeviceProperties);
    itf->AddSimpleMethodHandler(
        "Format",
        base::Unretained(interface_),
        &CrosDisksInterface::Format);
    itf->AddMethodHandler(
        "SinglePartitionFormat",
        base::Unretained(interface_),
        &CrosDisksInterface::SinglePartitionFormat);
    itf->AddSimpleMethodHandler(
        "Rename",
        base::Unretained(interface_),
        &CrosDisksInterface::Rename);
    itf->AddSimpleMethodHandler(
        "AddDeviceToAllowlist",
        base::Unretained(interface_),
        &CrosDisksInterface::AddDeviceToAllowlist);
    itf->AddSimpleMethodHandler(
        "RemoveDeviceFromAllowlist",
        base::Unretained(interface_),
        &CrosDisksInterface::RemoveDeviceFromAllowlist);

    signal_DeviceAdded_ = itf->RegisterSignalOfType<SignalDeviceAddedType>("DeviceAdded");
    signal_DeviceRemoved_ = itf->RegisterSignalOfType<SignalDeviceRemovedType>("DeviceRemoved");
    signal_DeviceScanned_ = itf->RegisterSignalOfType<SignalDeviceScannedType>("DeviceScanned");
    signal_DiskAdded_ = itf->RegisterSignalOfType<SignalDiskAddedType>("DiskAdded");
    signal_DiskRemoved_ = itf->RegisterSignalOfType<SignalDiskRemovedType>("DiskRemoved");
    signal_DiskChanged_ = itf->RegisterSignalOfType<SignalDiskChangedType>("DiskChanged");
    signal_MountProgress_ = itf->RegisterSignalOfType<SignalMountProgressType>("MountProgress");
    signal_MountCompleted_ = itf->RegisterSignalOfType<SignalMountCompletedType>("MountCompleted");
    signal_Unmounted_ = itf->RegisterSignalOfType<SignalUnmountedType>("Unmounted");
    signal_FormatCompleted_ = itf->RegisterSignalOfType<SignalFormatCompletedType>("FormatCompleted");
    signal_RenameCompleted_ = itf->RegisterSignalOfType<SignalRenameCompletedType>("RenameCompleted");
  }

  void SendDeviceAddedSignal(
      const std::string& in_device) {
    auto signal = signal_DeviceAdded_.lock();
    if (signal)
      signal->Send(in_device);
  }
  void SendDeviceRemovedSignal(
      const std::string& in_device) {
    auto signal = signal_DeviceRemoved_.lock();
    if (signal)
      signal->Send(in_device);
  }
  void SendDeviceScannedSignal(
      const std::string& in_device) {
    auto signal = signal_DeviceScanned_.lock();
    if (signal)
      signal->Send(in_device);
  }
  void SendDiskAddedSignal(
      const std::string& in_disk) {
    auto signal = signal_DiskAdded_.lock();
    if (signal)
      signal->Send(in_disk);
  }
  void SendDiskRemovedSignal(
      const std::string& in_disk) {
    auto signal = signal_DiskRemoved_.lock();
    if (signal)
      signal->Send(in_disk);
  }
  void SendDiskChangedSignal(
      const std::string& in_disk) {
    auto signal = signal_DiskChanged_.lock();
    if (signal)
      signal->Send(in_disk);
  }
  void SendMountProgressSignal(
      uint32_t in_percent,
      const std::string& in_source_path,
      uint32_t in_source_type,
      const std::string& in_mount_path) {
    auto signal = signal_MountProgress_.lock();
    if (signal)
      signal->Send(in_percent, in_source_path, in_source_type, in_mount_path);
  }
  void SendMountCompletedSignal(
      uint32_t in_status,
      const std::string& in_source_path,
      uint32_t in_source_type,
      const std::string& in_mount_path) {
    auto signal = signal_MountCompleted_.lock();
    if (signal)
      signal->Send(in_status, in_source_path, in_source_type, in_mount_path);
  }
  void SendUnmountedSignal(
      const std::string& in_source_path,
      uint32_t in_source_type,
      const std::string& in_mount_path) {
    auto signal = signal_Unmounted_.lock();
    if (signal)
      signal->Send(in_source_path, in_source_type, in_mount_path);
  }
  void SendFormatCompletedSignal(
      uint32_t in_status,
      const std::string& in_device) {
    auto signal = signal_FormatCompleted_.lock();
    if (signal)
      signal->Send(in_status, in_device);
  }
  void SendRenameCompletedSignal(
      uint32_t in_status,
      const std::string& in_device) {
    auto signal = signal_RenameCompleted_.lock();
    if (signal)
      signal->Send(in_status, in_device);
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.CrosDisks\">\n"
        "    <method name=\"Mount\">\n"
        "      <arg name=\"path\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"filesystem_type\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"options\" type=\"as\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"Unmount\">\n"
        "      <arg name=\"path\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"options\" type=\"as\" direction=\"in\"/>\n"
        "      <arg name=\"status\" type=\"u\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"UnmountAll\">\n"
        "    </method>\n"
        "    <method name=\"EnumerateDevices\">\n"
        "      <arg name=\"devices\" type=\"as\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"EnumerateMountEntries\">\n"
        "      <arg name=\"mount_entries\" type=\"a(usus)\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetDeviceProperties\">\n"
        "      <arg name=\"device_path\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"properties\" type=\"a{sv}\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"Format\">\n"
        "      <arg name=\"path\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"filesystem_type\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"options\" type=\"as\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"SinglePartitionFormat\">\n"
        "      <arg name=\"path\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"status\" type=\"u\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"Rename\">\n"
        "      <arg name=\"path\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"volume_name\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"AddDeviceToAllowlist\">\n"
        "      <arg name=\"device_path\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"RemoveDeviceFromAllowlist\">\n"
        "      <arg name=\"device_path\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <signal name=\"DeviceAdded\">\n"
        "      <arg name=\"device\" type=\"s\"/>\n"
        "    </signal>\n"
        "    <signal name=\"DeviceRemoved\">\n"
        "      <arg name=\"device\" type=\"s\"/>\n"
        "    </signal>\n"
        "    <signal name=\"DeviceScanned\">\n"
        "      <arg name=\"device\" type=\"s\"/>\n"
        "    </signal>\n"
        "    <signal name=\"DiskAdded\">\n"
        "      <arg name=\"disk\" type=\"s\"/>\n"
        "    </signal>\n"
        "    <signal name=\"DiskRemoved\">\n"
        "      <arg name=\"disk\" type=\"s\"/>\n"
        "    </signal>\n"
        "    <signal name=\"DiskChanged\">\n"
        "      <arg name=\"disk\" type=\"s\"/>\n"
        "    </signal>\n"
        "    <signal name=\"MountProgress\">\n"
        "      <arg name=\"percent\" type=\"u\"/>\n"
        "      <arg name=\"source_path\" type=\"s\"/>\n"
        "      <arg name=\"source_type\" type=\"u\"/>\n"
        "      <arg name=\"mount_path\" type=\"s\"/>\n"
        "    </signal>\n"
        "    <signal name=\"MountCompleted\">\n"
        "      <arg name=\"status\" type=\"u\"/>\n"
        "      <arg name=\"source_path\" type=\"s\"/>\n"
        "      <arg name=\"source_type\" type=\"u\"/>\n"
        "      <arg name=\"mount_path\" type=\"s\"/>\n"
        "    </signal>\n"
        "    <signal name=\"Unmounted\">\n"
        "      <arg name=\"source_path\" type=\"s\"/>\n"
        "      <arg name=\"source_type\" type=\"u\"/>\n"
        "      <arg name=\"mount_path\" type=\"s\"/>\n"
        "    </signal>\n"
        "    <signal name=\"FormatCompleted\">\n"
        "      <arg name=\"status\" type=\"u\"/>\n"
        "      <arg name=\"device\" type=\"s\"/>\n"
        "    </signal>\n"
        "    <signal name=\"RenameCompleted\">\n"
        "      <arg name=\"status\" type=\"u\"/>\n"
        "      <arg name=\"device\" type=\"s\"/>\n"
        "    </signal>\n"
        "  </interface>\n";
  }

 private:
  using SignalDeviceAddedType = brillo::dbus_utils::DBusSignal<
      std::string /*device*/>;
  std::weak_ptr<SignalDeviceAddedType> signal_DeviceAdded_;

  using SignalDeviceRemovedType = brillo::dbus_utils::DBusSignal<
      std::string /*device*/>;
  std::weak_ptr<SignalDeviceRemovedType> signal_DeviceRemoved_;

  using SignalDeviceScannedType = brillo::dbus_utils::DBusSignal<
      std::string /*device*/>;
  std::weak_ptr<SignalDeviceScannedType> signal_DeviceScanned_;

  using SignalDiskAddedType = brillo::dbus_utils::DBusSignal<
      std::string /*disk*/>;
  std::weak_ptr<SignalDiskAddedType> signal_DiskAdded_;

  using SignalDiskRemovedType = brillo::dbus_utils::DBusSignal<
      std::string /*disk*/>;
  std::weak_ptr<SignalDiskRemovedType> signal_DiskRemoved_;

  using SignalDiskChangedType = brillo::dbus_utils::DBusSignal<
      std::string /*disk*/>;
  std::weak_ptr<SignalDiskChangedType> signal_DiskChanged_;

  using SignalMountProgressType = brillo::dbus_utils::DBusSignal<
      uint32_t /*percent*/,
      std::string /*source_path*/,
      uint32_t /*source_type*/,
      std::string /*mount_path*/>;
  std::weak_ptr<SignalMountProgressType> signal_MountProgress_;

  using SignalMountCompletedType = brillo::dbus_utils::DBusSignal<
      uint32_t /*status*/,
      std::string /*source_path*/,
      uint32_t /*source_type*/,
      std::string /*mount_path*/>;
  std::weak_ptr<SignalMountCompletedType> signal_MountCompleted_;

  using SignalUnmountedType = brillo::dbus_utils::DBusSignal<
      std::string /*source_path*/,
      uint32_t /*source_type*/,
      std::string /*mount_path*/>;
  std::weak_ptr<SignalUnmountedType> signal_Unmounted_;

  using SignalFormatCompletedType = brillo::dbus_utils::DBusSignal<
      uint32_t /*status*/,
      std::string /*device*/>;
  std::weak_ptr<SignalFormatCompletedType> signal_FormatCompleted_;

  using SignalRenameCompletedType = brillo::dbus_utils::DBusSignal<
      uint32_t /*status*/,
      std::string /*device*/>;
  std::weak_ptr<SignalRenameCompletedType> signal_RenameCompleted_;

  CrosDisksInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CROS_DISKS_OUT_DEFAULT_GEN_INCLUDE_CROS_DISKS_DBUS_ADAPTORS_ORG_CHROMIUM_CROSDISKS_H
