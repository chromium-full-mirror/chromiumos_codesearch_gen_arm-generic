// Automatic generation of D-Bus interfaces:
//  - org.chromium.flimflam.Service
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_DBUS_BINDINGS_ORG_CHROMIUM_FLIMFLAM_SERVICE_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_DBUS_BINDINGS_ORG_CHROMIUM_FLIMFLAM_SERVICE_H
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

// Interface definition for org::chromium::flimflam::Service.
class ServiceInterface {
 public:
  virtual ~ServiceInterface() = default;

  virtual bool GetProperties(
      brillo::ErrorPtr* error,
      brillo::VariantDictionary* out_1) = 0;
  virtual bool SetProperty(
      brillo::ErrorPtr* error,
      const std::string& in_1,
      const brillo::Any& in_2) = 0;
  virtual bool SetProperties(
      brillo::ErrorPtr* error,
      const brillo::VariantDictionary& in_1) = 0;
  virtual bool ClearProperty(
      brillo::ErrorPtr* error,
      const std::string& in_1) = 0;
  virtual bool ClearProperties(
      brillo::ErrorPtr* error,
      const std::vector<std::string>& in_1,
      std::vector<bool>* out_2) = 0;
  virtual bool Connect(
      brillo::ErrorPtr* error) = 0;
  virtual bool Disconnect(
      brillo::ErrorPtr* error) = 0;
  virtual bool Remove(
      brillo::ErrorPtr* error) = 0;
  virtual bool CompleteCellularActivation(
      brillo::ErrorPtr* error) = 0;
  virtual bool GetLoadableProfileEntries(
      brillo::ErrorPtr* error,
      std::map<dbus::ObjectPath, std::string>* out_1) = 0;
  virtual bool GetWiFiPassphrase(
      brillo::ErrorPtr* error,
      std::string* out_1) = 0;
  virtual bool GetEapPassphrase(
      brillo::ErrorPtr* error,
      std::string* out_1) = 0;
  virtual void RequestTrafficCounters(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<std::vector<brillo::VariantDictionary>>> response) = 0;
  virtual bool ResetTrafficCounters(
      brillo::ErrorPtr* error) = 0;
};

// Interface adaptor for org::chromium::flimflam::Service.
class ServiceAdaptor {
 public:
  ServiceAdaptor(ServiceInterface* interface) : interface_(interface) {}
  ServiceAdaptor(const ServiceAdaptor&) = delete;
  ServiceAdaptor& operator=(const ServiceAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.flimflam.Service");

    itf->AddSimpleMethodHandlerWithError(
        "GetProperties",
        base::Unretained(interface_),
        &ServiceInterface::GetProperties);
    itf->AddSimpleMethodHandlerWithError(
        "SetProperty",
        base::Unretained(interface_),
        &ServiceInterface::SetProperty);
    itf->AddSimpleMethodHandlerWithError(
        "SetProperties",
        base::Unretained(interface_),
        &ServiceInterface::SetProperties);
    itf->AddSimpleMethodHandlerWithError(
        "ClearProperty",
        base::Unretained(interface_),
        &ServiceInterface::ClearProperty);
    itf->AddSimpleMethodHandlerWithError(
        "ClearProperties",
        base::Unretained(interface_),
        &ServiceInterface::ClearProperties);
    itf->AddSimpleMethodHandlerWithError(
        "Connect",
        base::Unretained(interface_),
        &ServiceInterface::Connect);
    itf->AddSimpleMethodHandlerWithError(
        "Disconnect",
        base::Unretained(interface_),
        &ServiceInterface::Disconnect);
    itf->AddSimpleMethodHandlerWithError(
        "Remove",
        base::Unretained(interface_),
        &ServiceInterface::Remove);
    itf->AddSimpleMethodHandlerWithError(
        "CompleteCellularActivation",
        base::Unretained(interface_),
        &ServiceInterface::CompleteCellularActivation);
    itf->AddSimpleMethodHandlerWithError(
        "GetLoadableProfileEntries",
        base::Unretained(interface_),
        &ServiceInterface::GetLoadableProfileEntries);
    itf->AddSimpleMethodHandlerWithError(
        "GetWiFiPassphrase",
        base::Unretained(interface_),
        &ServiceInterface::GetWiFiPassphrase);
    itf->AddSimpleMethodHandlerWithError(
        "GetEapPassphrase",
        base::Unretained(interface_),
        &ServiceInterface::GetEapPassphrase);
    itf->AddMethodHandler(
        "RequestTrafficCounters",
        base::Unretained(interface_),
        &ServiceInterface::RequestTrafficCounters);
    itf->AddSimpleMethodHandlerWithError(
        "ResetTrafficCounters",
        base::Unretained(interface_),
        &ServiceInterface::ResetTrafficCounters);

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
        "  <interface name=\"org.chromium.flimflam.Service\">\n"
        "    <method name=\"GetProperties\">\n"
        "      <arg name=\"\" type=\"a{sv}\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SetProperty\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"\" type=\"v\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"SetProperties\">\n"
        "      <arg name=\"\" type=\"a{sv}\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"ClearProperty\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"ClearProperties\">\n"
        "      <arg name=\"\" type=\"as\" direction=\"in\"/>\n"
        "      <arg name=\"\" type=\"ab\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"Connect\">\n"
        "    </method>\n"
        "    <method name=\"Disconnect\">\n"
        "    </method>\n"
        "    <method name=\"Remove\">\n"
        "    </method>\n"
        "    <method name=\"CompleteCellularActivation\">\n"
        "    </method>\n"
        "    <method name=\"GetLoadableProfileEntries\">\n"
        "      <arg name=\"\" type=\"a{os}\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetWiFiPassphrase\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetEapPassphrase\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"RequestTrafficCounters\">\n"
        "      <arg name=\"\" type=\"aa{sv}\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ResetTrafficCounters\">\n"
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

  ServiceInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace flimflam
}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_DBUS_BINDINGS_ORG_CHROMIUM_FLIMFLAM_SERVICE_H
