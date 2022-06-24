// Automatic generation of D-Bus interfaces:
//  - org.chromium.RuntimeProbe
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_RUNTIME_PROBE_OUT_DEFAULT_GEN_INCLUDE_RUNTIME_PROBE_DBUS_ADAPTORS_ORG_CHROMIUM_RUNTIMEPROBE_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_RUNTIME_PROBE_OUT_DEFAULT_GEN_INCLUDE_RUNTIME_PROBE_DBUS_ADAPTORS_ORG_CHROMIUM_RUNTIMEPROBE_H
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

// Interface definition for org::chromium::RuntimeProbe.
class RuntimeProbeInterface {
 public:
  virtual ~RuntimeProbeInterface() = default;

  // Probe hardware components on the device.
  virtual void ProbeCategories(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<runtime_probe::ProbeResult>> response,
      const runtime_probe::ProbeRequest& in_request) = 0;
  // Get known hardware components in the probe config file.
  virtual void GetKnownComponents(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<runtime_probe::GetKnownComponentsResult>> response,
      const runtime_probe::GetKnownComponentsRequest& in_request) = 0;
};

// Interface adaptor for org::chromium::RuntimeProbe.
class RuntimeProbeAdaptor {
 public:
  RuntimeProbeAdaptor(RuntimeProbeInterface* interface) : interface_(interface) {}
  RuntimeProbeAdaptor(const RuntimeProbeAdaptor&) = delete;
  RuntimeProbeAdaptor& operator=(const RuntimeProbeAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.RuntimeProbe");

    itf->AddMethodHandler(
        "ProbeCategories",
        base::Unretained(interface_),
        &RuntimeProbeInterface::ProbeCategories);
    itf->AddMethodHandler(
        "GetKnownComponents",
        base::Unretained(interface_),
        &RuntimeProbeInterface::GetKnownComponents);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/RuntimeProbe"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.RuntimeProbe\">\n"
        "    <method name=\"ProbeCategories\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetKnownComponents\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "  </interface>\n";
  }

 private:
  RuntimeProbeInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_RUNTIME_PROBE_OUT_DEFAULT_GEN_INCLUDE_RUNTIME_PROBE_DBUS_ADAPTORS_ORG_CHROMIUM_RUNTIMEPROBE_H
