// Automatic generation of D-Bus interfaces:
//  - org.chromium.BootLockboxInterface
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CRYPTOHOME_OUT_DEFAULT_GEN_INCLUDE_DBUS_ADAPTORS_ORG_CHROMIUM_BOOTLOCKBOXINTERFACE_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CRYPTOHOME_OUT_DEFAULT_GEN_INCLUDE_DBUS_ADAPTORS_ORG_CHROMIUM_BOOTLOCKBOXINTERFACE_H
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

// Interface definition for org::chromium::BootLockboxInterface.
class BootLockboxInterfaceInterface {
 public:
  virtual ~BootLockboxInterfaceInterface() = default;

  virtual void StoreBootLockbox(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<cryptohome::StoreBootLockboxReply>> response,
      const cryptohome::StoreBootLockboxRequest& in_request) = 0;
  virtual void ReadBootLockbox(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<cryptohome::ReadBootLockboxReply>> response,
      const cryptohome::ReadBootLockboxRequest& in_request) = 0;
  virtual void FinalizeBootLockbox(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<cryptohome::FinalizeBootLockboxReply>> response,
      const cryptohome::FinalizeNVRamBootLockboxRequest& in_request) = 0;
};

// Interface adaptor for org::chromium::BootLockboxInterface.
class BootLockboxInterfaceAdaptor {
 public:
  BootLockboxInterfaceAdaptor(BootLockboxInterfaceInterface* interface) : interface_(interface) {}
  BootLockboxInterfaceAdaptor(const BootLockboxInterfaceAdaptor&) = delete;
  BootLockboxInterfaceAdaptor& operator=(const BootLockboxInterfaceAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.BootLockboxInterface");

    itf->AddMethodHandler(
        "StoreBootLockbox",
        base::Unretained(interface_),
        &BootLockboxInterfaceInterface::StoreBootLockbox);
    itf->AddMethodHandler(
        "ReadBootLockbox",
        base::Unretained(interface_),
        &BootLockboxInterfaceInterface::ReadBootLockbox);
    itf->AddMethodHandler(
        "FinalizeBootLockbox",
        base::Unretained(interface_),
        &BootLockboxInterfaceInterface::FinalizeBootLockbox);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/BootLockbox"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.BootLockboxInterface\">\n"
        "    <method name=\"StoreBootLockbox\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ReadBootLockbox\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"FinalizeBootLockbox\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "  </interface>\n";
  }

 private:
  BootLockboxInterfaceInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CRYPTOHOME_OUT_DEFAULT_GEN_INCLUDE_DBUS_ADAPTORS_ORG_CHROMIUM_BOOTLOCKBOXINTERFACE_H
