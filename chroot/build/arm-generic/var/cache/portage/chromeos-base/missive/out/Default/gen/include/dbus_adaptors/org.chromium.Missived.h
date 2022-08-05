// Automatic generation of D-Bus interfaces:
//  - org.chromium.Missived
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_MISSIVE_OUT_DEFAULT_GEN_INCLUDE_DBUS_ADAPTORS_ORG_CHROMIUM_MISSIVED_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_MISSIVE_OUT_DEFAULT_GEN_INCLUDE_DBUS_ADAPTORS_ORG_CHROMIUM_MISSIVED_H
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

// Interface definition for org::chromium::Missived.
class MissivedInterface {
 public:
  virtual ~MissivedInterface() = default;

  // Enqueues records for encryption, storage, and upload.
  virtual void EnqueueRecord(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<::reporting::EnqueueRecordResponse>> response,
      const ::reporting::EnqueueRecordRequest& in_request) = 0;
  // Requests that the indicated priority queue is flushed.
  virtual void FlushPriority(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<::reporting::FlushPriorityResponse>> response,
      const ::reporting::FlushPriorityRequest& in_request) = 0;
  // Sent by Chrome to indicate the record was succesfully uploaded.
  // Record indicated by the provided SequenceInformation.
  virtual void ConfirmRecordUpload(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<::reporting::ConfirmRecordUploadResponse>> response,
      const ::reporting::ConfirmRecordUploadRequest& in_request) = 0;
  // Sent by Chrome to update the Missive Daemon Encryption Key.
  virtual void UpdateEncryptionKey(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<::reporting::UpdateEncryptionKeyResponse>> response,
      const ::reporting::UpdateEncryptionKeyRequest& in_request) = 0;
};

// Interface adaptor for org::chromium::Missived.
class MissivedAdaptor {
 public:
  MissivedAdaptor(MissivedInterface* interface) : interface_(interface) {}
  MissivedAdaptor(const MissivedAdaptor&) = delete;
  MissivedAdaptor& operator=(const MissivedAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.Missived");

    itf->AddMethodHandler(
        "EnqueueRecord",
        base::Unretained(interface_),
        &MissivedInterface::EnqueueRecord);
    itf->AddMethodHandler(
        "FlushPriority",
        base::Unretained(interface_),
        &MissivedInterface::FlushPriority);
    itf->AddMethodHandler(
        "ConfirmRecordUpload",
        base::Unretained(interface_),
        &MissivedInterface::ConfirmRecordUpload);
    itf->AddMethodHandler(
        "UpdateEncryptionKey",
        base::Unretained(interface_),
        &MissivedInterface::UpdateEncryptionKey);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/Missived"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.Missived\">\n"
        "    <method name=\"EnqueueRecord\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"FlushPriority\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ConfirmRecordUpload\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"UpdateEncryptionKey\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "  </interface>\n";
  }

 private:
  MissivedInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_MISSIVE_OUT_DEFAULT_GEN_INCLUDE_DBUS_ADAPTORS_ORG_CHROMIUM_MISSIVED_H
