// Automatic generation of D-Bus interfaces:
//  - org.chromium.flimflam.Manager
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_DBUS_BINDINGS_ORG_CHROMIUM_FLIMFLAM_MANAGER_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_DBUS_BINDINGS_ORG_CHROMIUM_FLIMFLAM_MANAGER_H
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

// Interface definition for org::chromium::flimflam::Manager.
class ManagerInterface {
 public:
  virtual ~ManagerInterface() = default;

  virtual bool GetProperties(
      brillo::ErrorPtr* error,
      brillo::VariantDictionary* out_1) = 0;
  virtual bool SetProperty(
      brillo::ErrorPtr* error,
      const std::string& in_1,
      const brillo::Any& in_2) = 0;
  virtual bool GetState(
      brillo::ErrorPtr* error,
      std::string* out_1) = 0;
  virtual bool CreateProfile(
      brillo::ErrorPtr* error,
      const std::string& in_1,
      dbus::ObjectPath* out_2) = 0;
  virtual bool RemoveProfile(
      brillo::ErrorPtr* error,
      const std::string& in_1) = 0;
  virtual bool PushProfile(
      brillo::ErrorPtr* error,
      const std::string& in_1,
      dbus::ObjectPath* out_2) = 0;
  virtual bool InsertUserProfile(
      brillo::ErrorPtr* error,
      const std::string& in_1,
      const std::string& in_2,
      dbus::ObjectPath* out_3) = 0;
  virtual bool PopProfile(
      brillo::ErrorPtr* error,
      const std::string& in_1) = 0;
  virtual bool PopAnyProfile(
      brillo::ErrorPtr* error) = 0;
  virtual bool PopAllUserProfiles(
      brillo::ErrorPtr* error) = 0;
  virtual bool RecheckPortal(
      brillo::ErrorPtr* error) = 0;
  virtual bool RequestScan(
      brillo::ErrorPtr* error,
      const std::string& in_1) = 0;
  virtual void EnableTechnology(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<>> response,
      const std::string& in_1) = 0;
  virtual void SetNetworkThrottlingStatus(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<>> response,
      bool in_1,
      uint32_t in_2,
      uint32_t in_3) = 0;
  virtual void DisableTechnology(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<>> response,
      const std::string& in_1) = 0;
  virtual bool GetService(
      brillo::ErrorPtr* error,
      const brillo::VariantDictionary& in_1,
      dbus::ObjectPath* out_2) = 0;
  virtual bool ConfigureService(
      brillo::ErrorPtr* error,
      const brillo::VariantDictionary& in_1,
      dbus::ObjectPath* out_2) = 0;
  virtual bool ConfigureServiceForProfile(
      brillo::ErrorPtr* error,
      const dbus::ObjectPath& in_1,
      const brillo::VariantDictionary& in_2,
      dbus::ObjectPath* out_3) = 0;
  virtual bool FindMatchingService(
      brillo::ErrorPtr* error,
      const brillo::VariantDictionary& in_1,
      dbus::ObjectPath* out_2) = 0;
  virtual bool GetDebugLevel(
      brillo::ErrorPtr* error,
      int32_t* out_1) = 0;
  virtual bool SetDebugLevel(
      brillo::ErrorPtr* error,
      int32_t in_1) = 0;
  virtual bool GetServiceOrder(
      brillo::ErrorPtr* error,
      std::string* out_1) = 0;
  virtual bool SetServiceOrder(
      brillo::ErrorPtr* error,
      const std::string& in_1) = 0;
  virtual bool GetDebugTags(
      brillo::ErrorPtr* error,
      std::string* out_1) = 0;
  virtual bool SetDebugTags(
      brillo::ErrorPtr* error,
      const std::string& in_1) = 0;
  virtual bool ListDebugTags(
      brillo::ErrorPtr* error,
      std::string* out_1) = 0;
  virtual bool GetNetworksForGeolocation(
      brillo::ErrorPtr* error,
      brillo::VariantDictionary* out_1) = 0;
  virtual bool ScanAndConnectToBestServices(
      brillo::ErrorPtr* error) = 0;
  virtual bool ConnectToBestServices(
      brillo::ErrorPtr* error) = 0;
  virtual bool CreateConnectivityReport(
      brillo::ErrorPtr* error) = 0;
  virtual bool ClaimInterface(
      brillo::ErrorPtr* error,
      dbus::Message* message,
      const std::string& in_claimer_name,
      const std::string& in_interface_name) = 0;
  virtual bool ReleaseInterface(
      brillo::ErrorPtr* error,
      dbus::Message* message,
      const std::string& in_claimer_name,
      const std::string& in_interface_name) = 0;
  virtual bool SetDNSProxyAddresses(
      brillo::ErrorPtr* error,
      const std::vector<std::string>& in_1) = 0;
  virtual bool ClearDNSProxyAddresses(
      brillo::ErrorPtr* error) = 0;
  virtual bool SetDNSProxyDOHProviders(
      brillo::ErrorPtr* error,
      const brillo::VariantDictionary& in_1) = 0;
  virtual bool AddPasspointCredentials(
      brillo::ErrorPtr* error,
      const dbus::ObjectPath& in_profile,
      const brillo::VariantDictionary& in_properties) = 0;
  virtual bool RemovePasspointCredentials(
      brillo::ErrorPtr* error,
      const dbus::ObjectPath& in_profile,
      const brillo::VariantDictionary& in_properties) = 0;
  virtual bool SetTetheringEnabled(
      brillo::ErrorPtr* error,
      bool in_1) = 0;
};

// Interface adaptor for org::chromium::flimflam::Manager.
class ManagerAdaptor {
 public:
  ManagerAdaptor(ManagerInterface* interface) : interface_(interface) {}
  ManagerAdaptor(const ManagerAdaptor&) = delete;
  ManagerAdaptor& operator=(const ManagerAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.flimflam.Manager");

    itf->AddSimpleMethodHandlerWithError(
        "GetProperties",
        base::Unretained(interface_),
        &ManagerInterface::GetProperties);
    itf->AddSimpleMethodHandlerWithError(
        "SetProperty",
        base::Unretained(interface_),
        &ManagerInterface::SetProperty);
    itf->AddSimpleMethodHandlerWithError(
        "GetState",
        base::Unretained(interface_),
        &ManagerInterface::GetState);
    itf->AddSimpleMethodHandlerWithError(
        "CreateProfile",
        base::Unretained(interface_),
        &ManagerInterface::CreateProfile);
    itf->AddSimpleMethodHandlerWithError(
        "RemoveProfile",
        base::Unretained(interface_),
        &ManagerInterface::RemoveProfile);
    itf->AddSimpleMethodHandlerWithError(
        "PushProfile",
        base::Unretained(interface_),
        &ManagerInterface::PushProfile);
    itf->AddSimpleMethodHandlerWithError(
        "InsertUserProfile",
        base::Unretained(interface_),
        &ManagerInterface::InsertUserProfile);
    itf->AddSimpleMethodHandlerWithError(
        "PopProfile",
        base::Unretained(interface_),
        &ManagerInterface::PopProfile);
    itf->AddSimpleMethodHandlerWithError(
        "PopAnyProfile",
        base::Unretained(interface_),
        &ManagerInterface::PopAnyProfile);
    itf->AddSimpleMethodHandlerWithError(
        "PopAllUserProfiles",
        base::Unretained(interface_),
        &ManagerInterface::PopAllUserProfiles);
    itf->AddSimpleMethodHandlerWithError(
        "RecheckPortal",
        base::Unretained(interface_),
        &ManagerInterface::RecheckPortal);
    itf->AddSimpleMethodHandlerWithError(
        "RequestScan",
        base::Unretained(interface_),
        &ManagerInterface::RequestScan);
    itf->AddMethodHandler(
        "EnableTechnology",
        base::Unretained(interface_),
        &ManagerInterface::EnableTechnology);
    itf->AddMethodHandler(
        "SetNetworkThrottlingStatus",
        base::Unretained(interface_),
        &ManagerInterface::SetNetworkThrottlingStatus);
    itf->AddMethodHandler(
        "DisableTechnology",
        base::Unretained(interface_),
        &ManagerInterface::DisableTechnology);
    itf->AddSimpleMethodHandlerWithError(
        "GetService",
        base::Unretained(interface_),
        &ManagerInterface::GetService);
    itf->AddSimpleMethodHandlerWithError(
        "ConfigureService",
        base::Unretained(interface_),
        &ManagerInterface::ConfigureService);
    itf->AddSimpleMethodHandlerWithError(
        "ConfigureServiceForProfile",
        base::Unretained(interface_),
        &ManagerInterface::ConfigureServiceForProfile);
    itf->AddSimpleMethodHandlerWithError(
        "FindMatchingService",
        base::Unretained(interface_),
        &ManagerInterface::FindMatchingService);
    itf->AddSimpleMethodHandlerWithError(
        "GetDebugLevel",
        base::Unretained(interface_),
        &ManagerInterface::GetDebugLevel);
    itf->AddSimpleMethodHandlerWithError(
        "SetDebugLevel",
        base::Unretained(interface_),
        &ManagerInterface::SetDebugLevel);
    itf->AddSimpleMethodHandlerWithError(
        "GetServiceOrder",
        base::Unretained(interface_),
        &ManagerInterface::GetServiceOrder);
    itf->AddSimpleMethodHandlerWithError(
        "SetServiceOrder",
        base::Unretained(interface_),
        &ManagerInterface::SetServiceOrder);
    itf->AddSimpleMethodHandlerWithError(
        "GetDebugTags",
        base::Unretained(interface_),
        &ManagerInterface::GetDebugTags);
    itf->AddSimpleMethodHandlerWithError(
        "SetDebugTags",
        base::Unretained(interface_),
        &ManagerInterface::SetDebugTags);
    itf->AddSimpleMethodHandlerWithError(
        "ListDebugTags",
        base::Unretained(interface_),
        &ManagerInterface::ListDebugTags);
    itf->AddSimpleMethodHandlerWithError(
        "GetNetworksForGeolocation",
        base::Unretained(interface_),
        &ManagerInterface::GetNetworksForGeolocation);
    itf->AddSimpleMethodHandlerWithError(
        "ScanAndConnectToBestServices",
        base::Unretained(interface_),
        &ManagerInterface::ScanAndConnectToBestServices);
    itf->AddSimpleMethodHandlerWithError(
        "ConnectToBestServices",
        base::Unretained(interface_),
        &ManagerInterface::ConnectToBestServices);
    itf->AddSimpleMethodHandlerWithError(
        "CreateConnectivityReport",
        base::Unretained(interface_),
        &ManagerInterface::CreateConnectivityReport);
    itf->AddSimpleMethodHandlerWithErrorAndMessage(
        "ClaimInterface",
        base::Unretained(interface_),
        &ManagerInterface::ClaimInterface);
    itf->AddSimpleMethodHandlerWithErrorAndMessage(
        "ReleaseInterface",
        base::Unretained(interface_),
        &ManagerInterface::ReleaseInterface);
    itf->AddSimpleMethodHandlerWithError(
        "SetDNSProxyAddresses",
        base::Unretained(interface_),
        &ManagerInterface::SetDNSProxyAddresses);
    itf->AddSimpleMethodHandlerWithError(
        "ClearDNSProxyAddresses",
        base::Unretained(interface_),
        &ManagerInterface::ClearDNSProxyAddresses);
    itf->AddSimpleMethodHandlerWithError(
        "SetDNSProxyDOHProviders",
        base::Unretained(interface_),
        &ManagerInterface::SetDNSProxyDOHProviders);
    itf->AddSimpleMethodHandlerWithError(
        "AddPasspointCredentials",
        base::Unretained(interface_),
        &ManagerInterface::AddPasspointCredentials);
    itf->AddSimpleMethodHandlerWithError(
        "RemovePasspointCredentials",
        base::Unretained(interface_),
        &ManagerInterface::RemovePasspointCredentials);
    itf->AddSimpleMethodHandlerWithError(
        "SetTetheringEnabled",
        base::Unretained(interface_),
        &ManagerInterface::SetTetheringEnabled);

    signal_PropertyChanged_ = itf->RegisterSignalOfType<SignalPropertyChangedType>("PropertyChanged");
    signal_StateChanged_ = itf->RegisterSignalOfType<SignalStateChangedType>("StateChanged");
  }

  void SendPropertyChangedSignal(
      const std::string& in_1,
      const brillo::Any& in_2) {
    auto signal = signal_PropertyChanged_.lock();
    if (signal)
      signal->Send(in_1, in_2);
  }
  void SendStateChangedSignal(
      const std::string& in_1) {
    auto signal = signal_StateChanged_.lock();
    if (signal)
      signal->Send(in_1);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.flimflam.Manager\">\n"
        "    <method name=\"GetProperties\">\n"
        "      <arg name=\"\" type=\"a{sv}\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SetProperty\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"\" type=\"v\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"GetState\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"CreateProfile\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"\" type=\"o\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"RemoveProfile\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"PushProfile\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"\" type=\"o\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"InsertUserProfile\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"\" type=\"o\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"PopProfile\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"PopAnyProfile\">\n"
        "    </method>\n"
        "    <method name=\"PopAllUserProfiles\">\n"
        "    </method>\n"
        "    <method name=\"RecheckPortal\">\n"
        "    </method>\n"
        "    <method name=\"RequestScan\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"EnableTechnology\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"SetNetworkThrottlingStatus\">\n"
        "      <arg name=\"\" type=\"b\" direction=\"in\"/>\n"
        "      <arg name=\"\" type=\"u\" direction=\"in\"/>\n"
        "      <arg name=\"\" type=\"u\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"DisableTechnology\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"GetService\">\n"
        "      <arg name=\"\" type=\"a{sv}\" direction=\"in\"/>\n"
        "      <arg name=\"\" type=\"o\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ConfigureService\">\n"
        "      <arg name=\"\" type=\"a{sv}\" direction=\"in\"/>\n"
        "      <arg name=\"\" type=\"o\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ConfigureServiceForProfile\">\n"
        "      <arg name=\"\" type=\"o\" direction=\"in\"/>\n"
        "      <arg name=\"\" type=\"a{sv}\" direction=\"in\"/>\n"
        "      <arg name=\"\" type=\"o\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"FindMatchingService\">\n"
        "      <arg name=\"\" type=\"a{sv}\" direction=\"in\"/>\n"
        "      <arg name=\"\" type=\"o\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetDebugLevel\">\n"
        "      <arg name=\"\" type=\"i\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SetDebugLevel\">\n"
        "      <arg name=\"\" type=\"i\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"GetServiceOrder\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SetServiceOrder\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"GetDebugTags\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SetDebugTags\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"ListDebugTags\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetNetworksForGeolocation\">\n"
        "      <arg name=\"\" type=\"a{sv}\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ScanAndConnectToBestServices\">\n"
        "    </method>\n"
        "    <method name=\"ConnectToBestServices\">\n"
        "    </method>\n"
        "    <method name=\"CreateConnectivityReport\">\n"
        "    </method>\n"
        "    <method name=\"ClaimInterface\">\n"
        "      <arg name=\"claimer_name\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"interface_name\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"ReleaseInterface\">\n"
        "      <arg name=\"claimer_name\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"interface_name\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"SetDNSProxyAddresses\">\n"
        "      <arg name=\"\" type=\"as\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"ClearDNSProxyAddresses\">\n"
        "    </method>\n"
        "    <method name=\"SetDNSProxyDOHProviders\">\n"
        "      <arg name=\"\" type=\"a{sv}\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"AddPasspointCredentials\">\n"
        "      <arg name=\"profile\" type=\"o\" direction=\"in\"/>\n"
        "      <arg name=\"properties\" type=\"a{sv}\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"RemovePasspointCredentials\">\n"
        "      <arg name=\"profile\" type=\"o\" direction=\"in\"/>\n"
        "      <arg name=\"properties\" type=\"a{sv}\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"SetTetheringEnabled\">\n"
        "      <arg name=\"\" type=\"b\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <signal name=\"PropertyChanged\">\n"
        "      <arg name=\"\" type=\"s\"/>\n"
        "      <arg name=\"\" type=\"v\"/>\n"
        "    </signal>\n"
        "    <signal name=\"StateChanged\">\n"
        "      <arg name=\"\" type=\"s\"/>\n"
        "    </signal>\n"
        "  </interface>\n";
  }

 private:
  using SignalPropertyChangedType = brillo::dbus_utils::DBusSignal<
      std::string,
      brillo::Any>;
  std::weak_ptr<SignalPropertyChangedType> signal_PropertyChanged_;

  using SignalStateChangedType = brillo::dbus_utils::DBusSignal<
      std::string>;
  std::weak_ptr<SignalStateChangedType> signal_StateChanged_;

  ManagerInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace flimflam
}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_DBUS_BINDINGS_ORG_CHROMIUM_FLIMFLAM_MANAGER_H
