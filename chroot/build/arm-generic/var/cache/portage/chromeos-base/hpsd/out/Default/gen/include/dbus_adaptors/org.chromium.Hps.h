// Automatic generation of D-Bus interfaces:
//  - org.chromium.Hps
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_HPSD_OUT_DEFAULT_GEN_INCLUDE_DBUS_ADAPTORS_ORG_CHROMIUM_HPS_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_HPSD_OUT_DEFAULT_GEN_INCLUDE_DBUS_ADAPTORS_ORG_CHROMIUM_HPS_H
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

// Interface definition for org::chromium::Hps.
class HpsInterface {
 public:
  virtual ~HpsInterface() = default;

  virtual bool EnableHpsSense(
      brillo::ErrorPtr* error,
      const hps::FeatureConfig& in_serialized_proto) = 0;
  virtual bool DisableHpsSense(
      brillo::ErrorPtr* error) = 0;
  virtual bool GetResultHpsSense(
      brillo::ErrorPtr* error,
      hps::HpsResultProto* out_result) = 0;
  virtual bool EnableHpsNotify(
      brillo::ErrorPtr* error,
      const hps::FeatureConfig& in_serialized_proto) = 0;
  virtual bool DisableHpsNotify(
      brillo::ErrorPtr* error) = 0;
  virtual bool GetResultHpsNotify(
      brillo::ErrorPtr* error,
      hps::HpsResultProto* out_result) = 0;
};

// Interface adaptor for org::chromium::Hps.
class HpsAdaptor {
 public:
  HpsAdaptor(HpsInterface* interface) : interface_(interface) {}
  HpsAdaptor(const HpsAdaptor&) = delete;
  HpsAdaptor& operator=(const HpsAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.Hps");

    itf->AddSimpleMethodHandlerWithError(
        "EnableHpsSense",
        base::Unretained(interface_),
        &HpsInterface::EnableHpsSense);
    itf->AddSimpleMethodHandlerWithError(
        "DisableHpsSense",
        base::Unretained(interface_),
        &HpsInterface::DisableHpsSense);
    itf->AddSimpleMethodHandlerWithError(
        "GetResultHpsSense",
        base::Unretained(interface_),
        &HpsInterface::GetResultHpsSense);
    itf->AddSimpleMethodHandlerWithError(
        "EnableHpsNotify",
        base::Unretained(interface_),
        &HpsInterface::EnableHpsNotify);
    itf->AddSimpleMethodHandlerWithError(
        "DisableHpsNotify",
        base::Unretained(interface_),
        &HpsInterface::DisableHpsNotify);
    itf->AddSimpleMethodHandlerWithError(
        "GetResultHpsNotify",
        base::Unretained(interface_),
        &HpsInterface::GetResultHpsNotify);

    signal_HpsSenseChanged_ = itf->RegisterSignalOfType<SignalHpsSenseChangedType>("HpsSenseChanged");
    signal_HpsNotifyChanged_ = itf->RegisterSignalOfType<SignalHpsNotifyChangedType>("HpsNotifyChanged");
  }

  void SendHpsSenseChangedSignal(
      const std::vector<uint8_t>& in_result) {
    auto signal = signal_HpsSenseChanged_.lock();
    if (signal)
      signal->Send(in_result);
  }
  void SendHpsNotifyChangedSignal(
      const std::vector<uint8_t>& in_result) {
    auto signal = signal_HpsNotifyChanged_.lock();
    if (signal)
      signal->Send(in_result);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/Hps"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.Hps\">\n"
        "    <method name=\"EnableHpsSense\">\n"
        "      <arg name=\"serialized_proto\" type=\"ay\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"DisableHpsSense\">\n"
        "    </method>\n"
        "    <method name=\"GetResultHpsSense\">\n"
        "      <arg name=\"result\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"EnableHpsNotify\">\n"
        "      <arg name=\"serialized_proto\" type=\"ay\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"DisableHpsNotify\">\n"
        "    </method>\n"
        "    <method name=\"GetResultHpsNotify\">\n"
        "      <arg name=\"result\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <signal name=\"HpsSenseChanged\">\n"
        "      <arg name=\"result\" type=\"ay\"/>\n"
        "    </signal>\n"
        "    <signal name=\"HpsNotifyChanged\">\n"
        "      <arg name=\"result\" type=\"ay\"/>\n"
        "    </signal>\n"
        "  </interface>\n";
  }

 private:
  using SignalHpsSenseChangedType = brillo::dbus_utils::DBusSignal<
      std::vector<uint8_t> /*result*/>;
  std::weak_ptr<SignalHpsSenseChangedType> signal_HpsSenseChanged_;

  using SignalHpsNotifyChangedType = brillo::dbus_utils::DBusSignal<
      std::vector<uint8_t> /*result*/>;
  std::weak_ptr<SignalHpsNotifyChangedType> signal_HpsNotifyChanged_;

  HpsInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_HPSD_OUT_DEFAULT_GEN_INCLUDE_DBUS_ADAPTORS_ORG_CHROMIUM_HPS_H
