// Automatic generation of D-Bus interfaces:
//  - org.chromium.Spaced
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SPACED_OUT_DEFAULT_GEN_INCLUDE_SPACED_DBUS_ADAPTORS_ORG_CHROMIUM_SPACED_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SPACED_OUT_DEFAULT_GEN_INCLUDE_SPACED_DBUS_ADAPTORS_ORG_CHROMIUM_SPACED_H
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

// Interface definition for org::chromium::Spaced.
class SpacedInterface {
 public:
  virtual ~SpacedInterface() = default;

  // Get free disk space available for the given file path.
  virtual int64_t GetFreeDiskSpace(
      const std::string& in_path) = 0;
  // Get total disk space available.
  virtual int64_t GetTotalDiskSpace(
      const std::string& in_path) = 0;
  // Get the size of the root storage device.
  virtual int64_t GetRootDeviceSize() = 0;
};

// Interface adaptor for org::chromium::Spaced.
class SpacedAdaptor {
 public:
  SpacedAdaptor(SpacedInterface* interface) : interface_(interface) {}
  SpacedAdaptor(const SpacedAdaptor&) = delete;
  SpacedAdaptor& operator=(const SpacedAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.Spaced");

    itf->AddSimpleMethodHandler(
        "GetFreeDiskSpace",
        base::Unretained(interface_),
        &SpacedInterface::GetFreeDiskSpace);
    itf->AddSimpleMethodHandler(
        "GetTotalDiskSpace",
        base::Unretained(interface_),
        &SpacedInterface::GetTotalDiskSpace);
    itf->AddSimpleMethodHandler(
        "GetRootDeviceSize",
        base::Unretained(interface_),
        &SpacedInterface::GetRootDeviceSize);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/Spaced"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.Spaced\">\n"
        "    <method name=\"GetFreeDiskSpace\">\n"
        "      <arg name=\"path\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"x\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetTotalDiskSpace\">\n"
        "      <arg name=\"path\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"x\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetRootDeviceSize\">\n"
        "      <arg name=\"reply\" type=\"x\" direction=\"out\"/>\n"
        "    </method>\n"
        "  </interface>\n";
  }

 private:
  SpacedInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SPACED_OUT_DEFAULT_GEN_INCLUDE_SPACED_DBUS_ADAPTORS_ORG_CHROMIUM_SPACED_H
