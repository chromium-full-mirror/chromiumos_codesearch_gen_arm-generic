// Automatic generation of D-Bus interfaces:
//  - org.chromium.flimflam.Task
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_DBUS_BINDINGS_ORG_CHROMIUM_FLIMFLAM_TASK_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_DBUS_BINDINGS_ORG_CHROMIUM_FLIMFLAM_TASK_H
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

// Interface definition for org::chromium::flimflam::Task.
class TaskInterface {
 public:
  virtual ~TaskInterface() = default;

  virtual bool getsec(
      brillo::ErrorPtr* error,
      std::string* out_1,
      std::string* out_2) = 0;
  virtual bool notify(
      brillo::ErrorPtr* error,
      const std::string& in_1,
      const std::map<std::string, std::string>& in_2) = 0;
};

// Interface adaptor for org::chromium::flimflam::Task.
class TaskAdaptor {
 public:
  TaskAdaptor(TaskInterface* interface) : interface_(interface) {}
  TaskAdaptor(const TaskAdaptor&) = delete;
  TaskAdaptor& operator=(const TaskAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.flimflam.Task");

    itf->AddSimpleMethodHandlerWithError(
        "getsec",
        base::Unretained(interface_),
        &TaskInterface::getsec);
    itf->AddSimpleMethodHandlerWithError(
        "notify",
        base::Unretained(interface_),
        &TaskInterface::notify);
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.flimflam.Task\">\n"
        "    <method name=\"getsec\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"out\"/>\n"
        "      <arg name=\"\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"notify\">\n"
        "      <arg name=\"\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"\" type=\"a{ss}\" direction=\"in\"/>\n"
        "    </method>\n"
        "  </interface>\n";
  }

 private:
  TaskInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace flimflam
}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_DBUS_BINDINGS_ORG_CHROMIUM_FLIMFLAM_TASK_H
