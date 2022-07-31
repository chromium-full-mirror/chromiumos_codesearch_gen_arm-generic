// Automatic generation of D-Bus interfaces:
//  - org.chromium.Mtpd
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_MTPD_OUT_DEFAULT_GEN_INCLUDE_MTPD_DBUS_ADAPTORS_ORG_CHROMIUM_MTPD_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_MTPD_OUT_DEFAULT_GEN_INCLUDE_MTPD_DBUS_ADAPTORS_ORG_CHROMIUM_MTPD_H
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

// Interface definition for org::chromium::Mtpd.
class MtpdInterface {
 public:
  virtual ~MtpdInterface() = default;

  virtual std::vector<std::string> EnumerateStorages() = 0;
  virtual std::vector<uint8_t> GetStorageInfo(
      const std::string& in_storage_name) = 0;
  virtual std::vector<uint8_t> GetStorageInfoFromDevice(
      const std::string& in_storage_name) = 0;
  virtual bool OpenStorage(
      brillo::ErrorPtr* error,
      const std::string& in_storage_name,
      const std::string& in_mode,
      std::string* out_handle) = 0;
  virtual bool CloseStorage(
      brillo::ErrorPtr* error,
      const std::string& in_handle) = 0;
  virtual bool ReadDirectoryEntryIds(
      brillo::ErrorPtr* error,
      const std::string& in_handle,
      uint32_t in_file_id,
      std::vector<uint32_t>* out_results) = 0;
  virtual bool GetFileInfo(
      brillo::ErrorPtr* error,
      const std::string& in_handle,
      const std::vector<uint32_t>& in_file_ids,
      std::vector<uint8_t>* out_info) = 0;
  virtual bool ReadFileChunk(
      brillo::ErrorPtr* error,
      const std::string& in_handle,
      uint32_t in_file_id,
      uint32_t in_offset,
      uint32_t in_count,
      std::vector<uint8_t>* out_data) = 0;
  virtual bool CopyFileFromLocal(
      brillo::ErrorPtr* error,
      const std::string& in_handle,
      const base::ScopedFD& in_file_descriptor,
      uint32_t in_parent_id,
      const std::string& in_file_name) = 0;
  virtual bool DeleteObject(
      brillo::ErrorPtr* error,
      const std::string& in_handle,
      uint32_t in_object_id) = 0;
  virtual bool RenameObject(
      brillo::ErrorPtr* error,
      const std::string& in_handle,
      uint32_t in_object_id,
      const std::string& in_new_name) = 0;
  virtual bool CreateDirectory(
      brillo::ErrorPtr* error,
      const std::string& in_handle,
      uint32_t in_parent_id,
      const std::string& in_directory_name) = 0;
  // Test method to verify that the MTP service is working.
  virtual bool IsAlive() = 0;
};

// Interface adaptor for org::chromium::Mtpd.
class MtpdAdaptor {
 public:
  MtpdAdaptor(MtpdInterface* interface) : interface_(interface) {}
  MtpdAdaptor(const MtpdAdaptor&) = delete;
  MtpdAdaptor& operator=(const MtpdAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.Mtpd");

    itf->AddSimpleMethodHandler(
        "EnumerateStorages",
        base::Unretained(interface_),
        &MtpdInterface::EnumerateStorages);
    itf->AddSimpleMethodHandler(
        "GetStorageInfo",
        base::Unretained(interface_),
        &MtpdInterface::GetStorageInfo);
    itf->AddSimpleMethodHandler(
        "GetStorageInfoFromDevice",
        base::Unretained(interface_),
        &MtpdInterface::GetStorageInfoFromDevice);
    itf->AddSimpleMethodHandlerWithError(
        "OpenStorage",
        base::Unretained(interface_),
        &MtpdInterface::OpenStorage);
    itf->AddSimpleMethodHandlerWithError(
        "CloseStorage",
        base::Unretained(interface_),
        &MtpdInterface::CloseStorage);
    itf->AddSimpleMethodHandlerWithError(
        "ReadDirectoryEntryIds",
        base::Unretained(interface_),
        &MtpdInterface::ReadDirectoryEntryIds);
    itf->AddSimpleMethodHandlerWithError(
        "GetFileInfo",
        base::Unretained(interface_),
        &MtpdInterface::GetFileInfo);
    itf->AddSimpleMethodHandlerWithError(
        "ReadFileChunk",
        base::Unretained(interface_),
        &MtpdInterface::ReadFileChunk);
    itf->AddSimpleMethodHandlerWithError(
        "CopyFileFromLocal",
        base::Unretained(interface_),
        &MtpdInterface::CopyFileFromLocal);
    itf->AddSimpleMethodHandlerWithError(
        "DeleteObject",
        base::Unretained(interface_),
        &MtpdInterface::DeleteObject);
    itf->AddSimpleMethodHandlerWithError(
        "RenameObject",
        base::Unretained(interface_),
        &MtpdInterface::RenameObject);
    itf->AddSimpleMethodHandlerWithError(
        "CreateDirectory",
        base::Unretained(interface_),
        &MtpdInterface::CreateDirectory);
    itf->AddSimpleMethodHandler(
        "IsAlive",
        base::Unretained(interface_),
        &MtpdInterface::IsAlive);

    signal_MTPStorageAttached_ = itf->RegisterSignalOfType<SignalMTPStorageAttachedType>("MTPStorageAttached");
    signal_MTPStorageDetached_ = itf->RegisterSignalOfType<SignalMTPStorageDetachedType>("MTPStorageDetached");
  }

  void SendMTPStorageAttachedSignal(
      const std::string& in_storage_name) {
    auto signal = signal_MTPStorageAttached_.lock();
    if (signal)
      signal->Send(in_storage_name);
  }
  void SendMTPStorageDetachedSignal(
      const std::string& in_storage_name) {
    auto signal = signal_MTPStorageDetached_.lock();
    if (signal)
      signal->Send(in_storage_name);
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.Mtpd\">\n"
        "    <method name=\"EnumerateStorages\">\n"
        "      <arg name=\"storage_list\" type=\"as\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetStorageInfo\">\n"
        "      <arg name=\"storage_name\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"storage_info\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetStorageInfoFromDevice\">\n"
        "      <arg name=\"storage_name\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"storage_info\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"OpenStorage\">\n"
        "      <arg name=\"storage_name\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"mode\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"handle\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"CloseStorage\">\n"
        "      <arg name=\"handle\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"ReadDirectoryEntryIds\">\n"
        "      <arg name=\"handle\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"file_id\" type=\"u\" direction=\"in\"/>\n"
        "      <arg name=\"results\" type=\"au\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetFileInfo\">\n"
        "      <arg name=\"handle\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"file_ids\" type=\"au\" direction=\"in\"/>\n"
        "      <arg name=\"info\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ReadFileChunk\">\n"
        "      <arg name=\"handle\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"file_id\" type=\"u\" direction=\"in\"/>\n"
        "      <arg name=\"offset\" type=\"u\" direction=\"in\"/>\n"
        "      <arg name=\"count\" type=\"u\" direction=\"in\"/>\n"
        "      <arg name=\"data\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"CopyFileFromLocal\">\n"
        "      <arg name=\"handle\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"file_descriptor\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"parent_id\" type=\"u\" direction=\"in\"/>\n"
        "      <arg name=\"file_name\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"DeleteObject\">\n"
        "      <arg name=\"handle\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"object_id\" type=\"u\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"RenameObject\">\n"
        "      <arg name=\"handle\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"object_id\" type=\"u\" direction=\"in\"/>\n"
        "      <arg name=\"new_name\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"CreateDirectory\">\n"
        "      <arg name=\"handle\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"parent_id\" type=\"u\" direction=\"in\"/>\n"
        "      <arg name=\"directory_name\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"IsAlive\">\n"
        "      <arg name=\"result\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <signal name=\"MTPStorageAttached\">\n"
        "      <arg name=\"storage_name\" type=\"s\"/>\n"
        "    </signal>\n"
        "    <signal name=\"MTPStorageDetached\">\n"
        "      <arg name=\"storage_name\" type=\"s\"/>\n"
        "    </signal>\n"
        "  </interface>\n";
  }

 private:
  using SignalMTPStorageAttachedType = brillo::dbus_utils::DBusSignal<
      std::string /*storage_name*/>;
  std::weak_ptr<SignalMTPStorageAttachedType> signal_MTPStorageAttached_;

  using SignalMTPStorageDetachedType = brillo::dbus_utils::DBusSignal<
      std::string /*storage_name*/>;
  std::weak_ptr<SignalMTPStorageDetachedType> signal_MTPStorageDetached_;

  MtpdInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_MTPD_OUT_DEFAULT_GEN_INCLUDE_MTPD_DBUS_ADAPTORS_ORG_CHROMIUM_MTPD_H
