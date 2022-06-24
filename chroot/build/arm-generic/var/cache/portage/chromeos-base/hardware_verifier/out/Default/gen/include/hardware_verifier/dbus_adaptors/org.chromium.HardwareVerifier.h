// Automatic generation of D-Bus interfaces:
//  - org.chromium.HardwareVerifier
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_HARDWARE_VERIFIER_OUT_DEFAULT_GEN_INCLUDE_HARDWARE_VERIFIER_DBUS_ADAPTORS_ORG_CHROMIUM_HARDWAREVERIFIER_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_HARDWARE_VERIFIER_OUT_DEFAULT_GEN_INCLUDE_HARDWARE_VERIFIER_DBUS_ADAPTORS_ORG_CHROMIUM_HARDWAREVERIFIER_H
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

// Interface definition for org::chromium::HardwareVerifier.
class HardwareVerifierInterface {
 public:
  virtual ~HardwareVerifierInterface() = default;

  virtual void VerifyComponents(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<hardware_verifier::VerifyComponentsReply>> response) = 0;
};

// Interface adaptor for org::chromium::HardwareVerifier.
class HardwareVerifierAdaptor {
 public:
  HardwareVerifierAdaptor(HardwareVerifierInterface* interface) : interface_(interface) {}
  HardwareVerifierAdaptor(const HardwareVerifierAdaptor&) = delete;
  HardwareVerifierAdaptor& operator=(const HardwareVerifierAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.HardwareVerifier");

    itf->AddMethodHandler(
        "VerifyComponents",
        base::Unretained(interface_),
        &HardwareVerifierInterface::VerifyComponents);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/HardwareVerifier"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.HardwareVerifier\">\n"
        "    <method name=\"VerifyComponents\">\n"
        "      <arg name=\"verify_components_reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "  </interface>\n";
  }

 private:
  HardwareVerifierInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_HARDWARE_VERIFIER_OUT_DEFAULT_GEN_INCLUDE_HARDWARE_VERIFIER_DBUS_ADAPTORS_ORG_CHROMIUM_HARDWAREVERIFIER_H
