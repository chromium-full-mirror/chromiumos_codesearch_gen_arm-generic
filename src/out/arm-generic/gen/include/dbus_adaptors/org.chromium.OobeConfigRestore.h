// Automatic generation of D-Bus interfaces:
//  - org.chromium.OobeConfigRestore
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_OOBE_CONFIG_OUT_DEFAULT_GEN_INCLUDE_DBUS_ADAPTORS_ORG_CHROMIUM_OOBECONFIGRESTORE_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_OOBE_CONFIG_OUT_DEFAULT_GEN_INCLUDE_DBUS_ADAPTORS_ORG_CHROMIUM_OOBECONFIGRESTORE_H
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

// Interface definition for org::chromium::OobeConfigRestore.
class OobeConfigRestoreInterface {
 public:
  virtual ~OobeConfigRestoreInterface() = default;

  // Looks for OOBE autoconfig data from either a USB drive or a
  // rollback operation and returns it as a serialized proto.
  virtual void ProcessAndGetOobeAutoConfig(
      int32_t* out_error_code,
      oobe_config::OobeRestoreData* out_oobe_config) = 0;
};

// Interface adaptor for org::chromium::OobeConfigRestore.
class OobeConfigRestoreAdaptor {
 public:
  OobeConfigRestoreAdaptor(OobeConfigRestoreInterface* interface) : interface_(interface) {}
  OobeConfigRestoreAdaptor(const OobeConfigRestoreAdaptor&) = delete;
  OobeConfigRestoreAdaptor& operator=(const OobeConfigRestoreAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.OobeConfigRestore");

    itf->AddSimpleMethodHandler(
        "ProcessAndGetOobeAutoConfig",
        base::Unretained(interface_),
        &OobeConfigRestoreInterface::ProcessAndGetOobeAutoConfig);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/OobeConfigRestore"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.OobeConfigRestore\">\n"
        "    <method name=\"ProcessAndGetOobeAutoConfig\">\n"
        "      <arg name=\"error_code\" type=\"i\" direction=\"out\"/>\n"
        "      <arg name=\"oobe_config\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "  </interface>\n";
  }

 private:
  OobeConfigRestoreInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_OOBE_CONFIG_OUT_DEFAULT_GEN_INCLUDE_DBUS_ADAPTORS_ORG_CHROMIUM_OOBECONFIGRESTORE_H
