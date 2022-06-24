// Automatic generation of D-Bus interfaces:
//  - org.chromium.Dlp
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DLP_OUT_DEFAULT_GEN_INCLUDE_DLP_ORG_CHROMIUM_DLP_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DLP_OUT_DEFAULT_GEN_INCLUDE_DLP_ORG_CHROMIUM_DLP_H
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

// Interface definition for org::chromium::Dlp.
class DlpInterface {
 public:
  virtual ~DlpInterface() = default;

  // Sets the Data Leak Prevention files policy.
  virtual std::vector<uint8_t> SetDlpFilesPolicy(
      const std::vector<uint8_t>& in_request) = 0;
  // Adds file together with it's source to the database.
  virtual std::vector<uint8_t> AddFile(
      const std::vector<uint8_t>& in_request) = 0;
  // Requests access to the file to be copied/uploaded to the given destination.
  virtual void RequestFileAccess(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<std::vector<uint8_t>, brillo::dbus_utils::FileDescriptor>> response,
      const std::vector<uint8_t>& in_request) = 0;
  // Returns sources for the requested files.
  virtual std::vector<uint8_t> GetFilesSources(
      const std::vector<uint8_t>& in_request) = 0;
  // Returns files disallowed to be transferred.
  virtual void CheckFilesTransfer(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<std::vector<uint8_t>>> response,
      const std::vector<uint8_t>& in_request) = 0;
};

// Interface adaptor for org::chromium::Dlp.
class DlpAdaptor {
 public:
  DlpAdaptor(DlpInterface* interface) : interface_(interface) {}
  DlpAdaptor(const DlpAdaptor&) = delete;
  DlpAdaptor& operator=(const DlpAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.Dlp");

    itf->AddSimpleMethodHandler(
        "SetDlpFilesPolicy",
        base::Unretained(interface_),
        &DlpInterface::SetDlpFilesPolicy);
    itf->AddSimpleMethodHandler(
        "AddFile",
        base::Unretained(interface_),
        &DlpInterface::AddFile);
    itf->AddMethodHandler(
        "RequestFileAccess",
        base::Unretained(interface_),
        &DlpInterface::RequestFileAccess);
    itf->AddSimpleMethodHandler(
        "GetFilesSources",
        base::Unretained(interface_),
        &DlpInterface::GetFilesSources);
    itf->AddMethodHandler(
        "CheckFilesTransfer",
        base::Unretained(interface_),
        &DlpInterface::CheckFilesTransfer);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/Dlp"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.Dlp\">\n"
        "    <method name=\"SetDlpFilesPolicy\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"AddFile\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"RequestFileAccess\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "      <arg name=\"lifeline_fd\" type=\"h\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetFilesSources\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"CheckFilesTransfer\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "  </interface>\n";
  }

 private:
  DlpInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DLP_OUT_DEFAULT_GEN_INCLUDE_DLP_ORG_CHROMIUM_DLP_H
