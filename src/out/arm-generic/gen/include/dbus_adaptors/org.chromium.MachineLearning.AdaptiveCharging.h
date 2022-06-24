// Automatic generation of D-Bus interfaces:
//  - org.chromium.MachineLearning.AdaptiveCharging
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_TMP_PORTAGE_CHROMEOS_BASE_ML_9999_WORK_BUILD_OUT_DEFAULT_GEN_INCLUDE_DBUS_ADAPTORS_ORG_CHROMIUM_MACHINELEARNING_ADAPTIVECHARGING_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_TMP_PORTAGE_CHROMEOS_BASE_ML_9999_WORK_BUILD_OUT_DEFAULT_GEN_INCLUDE_DBUS_ADAPTORS_ORG_CHROMIUM_MACHINELEARNING_ADAPTIVECHARGING_H
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
namespace MachineLearning {

// Interface definition for org::chromium::MachineLearning::AdaptiveCharging.
class AdaptiveChargingInterface {
 public:
  virtual ~AdaptiveChargingInterface() = default;

  virtual void RequestAdaptiveChargingDecision(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<bool, std::vector<double>>> response,
      const std::vector<uint8_t>& in_serialized_example_proto) = 0;
};

// Interface adaptor for org::chromium::MachineLearning::AdaptiveCharging.
class AdaptiveChargingAdaptor {
 public:
  AdaptiveChargingAdaptor(AdaptiveChargingInterface* interface) : interface_(interface) {}
  AdaptiveChargingAdaptor(const AdaptiveChargingAdaptor&) = delete;
  AdaptiveChargingAdaptor& operator=(const AdaptiveChargingAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.MachineLearning.AdaptiveCharging");

    itf->AddMethodHandler(
        "RequestAdaptiveChargingDecision",
        base::Unretained(interface_),
        &AdaptiveChargingInterface::RequestAdaptiveChargingDecision);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/MachineLearning/AdaptiveCharging"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.MachineLearning.AdaptiveCharging\">\n"
        "    <method name=\"RequestAdaptiveChargingDecision\">\n"
        "      <arg name=\"serialized_example_proto\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"status\" type=\"b\" direction=\"out\"/>\n"
        "      <arg name=\"result\" type=\"ad\" direction=\"out\"/>\n"
        "    </method>\n"
        "  </interface>\n";
  }

 private:
  AdaptiveChargingInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace MachineLearning
}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_TMP_PORTAGE_CHROMEOS_BASE_ML_9999_WORK_BUILD_OUT_DEFAULT_GEN_INCLUDE_DBUS_ADAPTORS_ORG_CHROMIUM_MACHINELEARNING_ADAPTIVECHARGING_H
