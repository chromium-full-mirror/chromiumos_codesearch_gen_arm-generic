// Automatic generation of D-Bus interfaces:
//  - org.chromium.featured
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_FEATURED_OUT_DEFAULT_GEN_INCLUDE_FEATURED_DBUS_ADAPTORS_ORG_CHROMIUM_FEATURED_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_FEATURED_OUT_DEFAULT_GEN_INCLUDE_FEATURED_DBUS_ADAPTORS_ORG_CHROMIUM_FEATURED_H
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

// Interface definition for org::chromium::featured.
class featuredInterface {
 public:
  virtual ~featuredInterface() = default;

  // Determine whether a feature is enabled.
  virtual bool IsPlatformFeatureEnabled(
      brillo::ErrorPtr* error,
      const std::string& in_name,
      bool* out_result) = 0;
};

// Interface adaptor for org::chromium::featured.
class featuredAdaptor {
 public:
  featuredAdaptor(featuredInterface* interface) : interface_(interface) {}
  featuredAdaptor(const featuredAdaptor&) = delete;
  featuredAdaptor& operator=(const featuredAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.featured");

    itf->AddSimpleMethodHandlerWithError(
        "IsPlatformFeatureEnabled",
        base::Unretained(interface_),
        &featuredInterface::IsPlatformFeatureEnabled);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/featured"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.featured\">\n"
        "    <method name=\"IsPlatformFeatureEnabled\">\n"
        "      <arg name=\"name\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"result\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "  </interface>\n";
  }

 private:
  featuredInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_FEATURED_OUT_DEFAULT_GEN_INCLUDE_FEATURED_DBUS_ADAPTORS_ORG_CHROMIUM_FEATURED_H
