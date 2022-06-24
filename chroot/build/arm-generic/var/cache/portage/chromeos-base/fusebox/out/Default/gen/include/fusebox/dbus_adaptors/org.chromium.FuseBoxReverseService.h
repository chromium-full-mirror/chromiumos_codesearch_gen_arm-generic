// Automatic generation of D-Bus interfaces:
//  - org.chromium.FuseBoxReverseService
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_FUSEBOX_OUT_DEFAULT_GEN_INCLUDE_FUSEBOX_DBUS_ADAPTORS_ORG_CHROMIUM_FUSEBOXREVERSESERVICE_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_FUSEBOX_OUT_DEFAULT_GEN_INCLUDE_FUSEBOX_DBUS_ADAPTORS_ORG_CHROMIUM_FUSEBOXREVERSESERVICE_H
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

// Interface definition for org::chromium::FuseBoxReverseService.
class FuseBoxReverseServiceInterface {
 public:
  virtual ~FuseBoxReverseServiceInterface() = default;

  virtual void ReplyToReadDir(
      uint64_t in_handle,
      int32_t in_error,
      const std::vector<uint8_t>& in_list,
      bool in_has_more) = 0;
  virtual int32_t AttachStorage(
      const std::string& in_name) = 0;
  virtual int32_t DetachStorage(
      const std::string& in_name) = 0;
  // Test daemon is alive: D-BUS setup and FUSE frontend is serving.
  virtual bool TestIsAlive() = 0;
};

// Interface adaptor for org::chromium::FuseBoxReverseService.
class FuseBoxReverseServiceAdaptor {
 public:
  FuseBoxReverseServiceAdaptor(FuseBoxReverseServiceInterface* interface) : interface_(interface) {}
  FuseBoxReverseServiceAdaptor(const FuseBoxReverseServiceAdaptor&) = delete;
  FuseBoxReverseServiceAdaptor& operator=(const FuseBoxReverseServiceAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.FuseBoxReverseService");

    itf->AddSimpleMethodHandler(
        "ReplyToReadDir",
        base::Unretained(interface_),
        &FuseBoxReverseServiceInterface::ReplyToReadDir);
    itf->AddSimpleMethodHandler(
        "AttachStorage",
        base::Unretained(interface_),
        &FuseBoxReverseServiceInterface::AttachStorage);
    itf->AddSimpleMethodHandler(
        "DetachStorage",
        base::Unretained(interface_),
        &FuseBoxReverseServiceInterface::DetachStorage);
    itf->AddSimpleMethodHandler(
        "TestIsAlive",
        base::Unretained(interface_),
        &FuseBoxReverseServiceInterface::TestIsAlive);
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.FuseBoxReverseService\">\n"
        "    <method name=\"ReplyToReadDir\">\n"
        "      <arg name=\"handle\" type=\"t\" direction=\"in\"/>\n"
        "      <arg name=\"error\" type=\"i\" direction=\"in\"/>\n"
        "      <arg name=\"list\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"has_more\" type=\"b\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"AttachStorage\">\n"
        "      <arg name=\"name\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"error\" type=\"i\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"DetachStorage\">\n"
        "      <arg name=\"name\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"error\" type=\"i\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"TestIsAlive\">\n"
        "      <arg name=\"alive\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "  </interface>\n";
  }

 private:
  FuseBoxReverseServiceInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_FUSEBOX_OUT_DEFAULT_GEN_INCLUDE_FUSEBOX_DBUS_ADAPTORS_ORG_CHROMIUM_FUSEBOXREVERSESERVICE_H
