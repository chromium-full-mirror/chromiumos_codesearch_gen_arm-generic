// Automatic generation of D-Bus interfaces:
//  - org.chromium.flimflam.Device
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_DBUS_BINDINGS_ORG_CHROMIUM_FLIMFLAM_DEVICE_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_DBUS_BINDINGS_ORG_CHROMIUM_FLIMFLAM_DEVICE_H
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
namespace flimflam {

// Interface definition for org::chromium::flimflam::Device.
class DeviceInterface {
 public:
  virtual ~DeviceInterface() = default;

  virtual bool GetProperties(
      brillo::ErrorPtr* error,
      brillo::VariantDictionary* out_1) = 0;
  virtual bool SetProperty(
      brillo::ErrorPtr* error,
      const std::string& in_1,
      const brillo::Any& in_2) = 0;
  virtual bool ClearProperty(
      brillo::ErrorPtr* error,
      const std::string& in_1) = 0;
  virtual void Enable(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<>> response) = 0;
  virtual void Disable(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<>> response) = 0;
  virtual void Register(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<>> response,
      const std::string& in_1) = 0;
  virtual void RequirePin(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<>> response,
      const std::string& in_1,
      bool in_2) = 0;
  virtual void EnterPin(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<>> response,
      const std::string& in_1) = 0;
  virtual void UnblockPin(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<>> response,
      const std::string& in_1,
      const std::string& in_2) = 0;
  virtual void ChangePin(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<>> response,
      const std::string& in_1,
      const std::string& in_2) = 0;
  virtual bool RenewDHCPLease(
      brillo::ErrorPtr* error) = 0;
  virtual void Reset(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<>> response) = 0;
  virtual bool RequestRoam(
      brillo::ErrorPtr* error,
      const std::string& in_1) = 0;
  virtual void SetUsbEthernetMacAddressSource(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<>> response,
      const std::string& in_1) = 0;
};

// Interface adaptor for org::chromium::flimflam::Device.
class DeviceAdaptor {
 public:
  DeviceAdaptor(DeviceInterface* interface) : interface_(interface) {}
  DeviceAdaptor(const DeviceAdaptor&) = delete;
  DeviceAdaptor& operator=(const DeviceAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.flimflam.Device");

    itf->AddSimpleMethodHandlerWithError(
        "GetProperties",
        base::Unretained(interface_),
        &DeviceInterface::GetProperties);
    itf->AddSimpleMethodHandlerWithError(
        "SetProperty",
        base::Unretained(interface_),
        &DeviceInterface::SetProperty);
    itf->AddSimpleMethodHandlerWithError(
        "ClearProperty",
        base::Unretained(interface_),
        &DeviceInterface::ClearProperty);
    itf->AddMethodHandler(
        "Enable",
        base::Unretained(interface_),
        &DeviceInterface::Enable);
    itf->AddMethodHandler(
        "Disable",
        base::Unretained(interface_),
        &DeviceInterface::Disable);
    itf->AddMethodHandler(
        "Register",
        base::Unretained(interface_),
        &DeviceInterface::Register);
    itf->AddMethodHandler(
        "RequirePin",
        base::Unretained(interface_),
        &DeviceInterface::RequirePin);
    itf->AddMethodHandler(
        "EnterPin",
        base::Unretained(interface_),
        &DeviceInterface::EnterPin);
    itf->AddMethodHandler(
        "UnblockPin",
        base::Unretained(interface_),
        &DeviceInterface::UnblockPin);
    itf->AddMethodHandler(
        "ChangePin",
        base::Unretained(interface_),
        &DeviceInterface::ChangePin);
    itf->AddSimpleMethodHandlerWithError(
        "RenewDHCPLease",
        base::Unretained(interface_),
        &DeviceInterface::RenewDHCPLease);
    itf->AddMethodHandler(
        "Reset",
        base::Unretained(interface_),
        &DeviceInterface::Reset);
    itf->AddSimpleMethodHandlerWithError(
        "RequestRoam",
        base::Unretained(interface_),
        &DeviceInterface::RequestRoam);
    itf->AddMethodHandler(
        "SetUsbEthernetMacAddressSource",
        base::Unretained(interface_),
        &DeviceInterface::SetUsbEthernetMacAddressSource);

    signal_PropertyChanged_ = itf->RegisterSignalOfType<SignalPropertyChangedType>("PropertyChanged");
  }

  void SendPropertyChangedSignal(
      const std::string& in_1,
      const brillo::Any& in_2) {
    auto signal = signal_PropertyChanged_.lock();
    if (signal)
      signal->Send(in_1, in_2);
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.flimflam.Device\">\n"
        "    <method name=\"GetProperties\">\n"
        "      <arg name=\"\" type=\"a{sv}\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SetProperty\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"\" type=\"v\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"ClearProperty\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"Enable\">\n"
        "    </method>\n"
        "    <method name=\"Disable\">\n"
        "    </method>\n"
        "    <method name=\"Register\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"RequirePin\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"\" type=\"b\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"EnterPin\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"UnblockPin\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"ChangePin\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"RenewDHCPLease\">\n"
        "    </method>\n"
        "    <method name=\"Reset\">\n"
        "    </method>\n"
        "    <method name=\"RequestRoam\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"SetUsbEthernetMacAddressSource\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <signal name=\"PropertyChanged\">\n"
        "      <arg name=\"\" type=\"s\"/>\n"
        "      <arg name=\"\" type=\"v\"/>\n"
        "    </signal>\n"
        "  </interface>\n";
  }

 private:
  using SignalPropertyChangedType = brillo::dbus_utils::DBusSignal<
      std::string,
      brillo::Any>;
  std::weak_ptr<SignalPropertyChangedType> signal_PropertyChanged_;

  DeviceInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace flimflam
}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_DBUS_BINDINGS_ORG_CHROMIUM_FLIMFLAM_DEVICE_H
