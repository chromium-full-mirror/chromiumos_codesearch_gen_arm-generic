// Automatic generation of D-Bus interfaces:
//  - org.chromium.flimflam.Profile
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_DBUS_BINDINGS_ORG_CHROMIUM_FLIMFLAM_PROFILE_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_DBUS_BINDINGS_ORG_CHROMIUM_FLIMFLAM_PROFILE_H
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

// Interface definition for org::chromium::flimflam::Profile.
class ProfileInterface {
 public:
  virtual ~ProfileInterface() = default;

  virtual bool GetProperties(
      brillo::ErrorPtr* error,
      brillo::VariantDictionary* out_1) = 0;
  virtual bool SetProperty(
      brillo::ErrorPtr* error,
      const std::string& in_1,
      const brillo::Any& in_2) = 0;
  virtual bool GetEntry(
      brillo::ErrorPtr* error,
      const std::string& in_1,
      brillo::VariantDictionary* out_2) = 0;
  virtual bool DeleteEntry(
      brillo::ErrorPtr* error,
      const std::string& in_1) = 0;
};

// Interface adaptor for org::chromium::flimflam::Profile.
class ProfileAdaptor {
 public:
  ProfileAdaptor(ProfileInterface* interface) : interface_(interface) {}
  ProfileAdaptor(const ProfileAdaptor&) = delete;
  ProfileAdaptor& operator=(const ProfileAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.flimflam.Profile");

    itf->AddSimpleMethodHandlerWithError(
        "GetProperties",
        base::Unretained(interface_),
        &ProfileInterface::GetProperties);
    itf->AddSimpleMethodHandlerWithError(
        "SetProperty",
        base::Unretained(interface_),
        &ProfileInterface::SetProperty);
    itf->AddSimpleMethodHandlerWithError(
        "GetEntry",
        base::Unretained(interface_),
        &ProfileInterface::GetEntry);
    itf->AddSimpleMethodHandlerWithError(
        "DeleteEntry",
        base::Unretained(interface_),
        &ProfileInterface::DeleteEntry);

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
        "  <interface name=\"org.chromium.flimflam.Profile\">\n"
        "    <method name=\"GetProperties\">\n"
        "      <arg name=\"\" type=\"a{sv}\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SetProperty\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"\" type=\"v\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"GetEntry\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"\" type=\"a{sv}\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"DeleteEntry\">\n"
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

  ProfileInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace flimflam
}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_DBUS_BINDINGS_ORG_CHROMIUM_FLIMFLAM_PROFILE_H
