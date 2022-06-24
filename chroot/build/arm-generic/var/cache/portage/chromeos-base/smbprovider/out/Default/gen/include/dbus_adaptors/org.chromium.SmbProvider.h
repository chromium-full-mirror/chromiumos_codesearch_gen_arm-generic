// Automatic generation of D-Bus interfaces:
//  - org.chromium.SmbProvider
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SMBPROVIDER_OUT_DEFAULT_GEN_INCLUDE_DBUS_ADAPTORS_ORG_CHROMIUM_SMBPROVIDER_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SMBPROVIDER_OUT_DEFAULT_GEN_INCLUDE_DBUS_ADAPTORS_ORG_CHROMIUM_SMBPROVIDER_H
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

// Interface definition for org::chromium::SmbProvider.
class SmbProviderInterface {
 public:
  virtual ~SmbProviderInterface() = default;

  // Gets a list of SMB shares from a host.
  virtual void GetShares(
      const std::vector<uint8_t>& in_options_blob,
      int32_t* out_error_code,
      std::vector<uint8_t>* out_shares) = 0;
  // Sets up Kerberos for a user.
  virtual void SetupKerberos(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<bool>> response,
      const std::string& in_account_id) = 0;
  // Parses a NetBios Name Request Response packet.
  virtual std::vector<uint8_t> ParseNetBiosPacket(
      const std::vector<uint8_t>& in_packet,
      uint16_t in_transaction_id) = 0;
};

// Interface adaptor for org::chromium::SmbProvider.
class SmbProviderAdaptor {
 public:
  SmbProviderAdaptor(SmbProviderInterface* interface) : interface_(interface) {}
  SmbProviderAdaptor(const SmbProviderAdaptor&) = delete;
  SmbProviderAdaptor& operator=(const SmbProviderAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.SmbProvider");

    itf->AddSimpleMethodHandler(
        "GetShares",
        base::Unretained(interface_),
        &SmbProviderInterface::GetShares);
    itf->AddMethodHandler(
        "SetupKerberos",
        base::Unretained(interface_),
        &SmbProviderInterface::SetupKerberos);
    itf->AddSimpleMethodHandler(
        "ParseNetBiosPacket",
        base::Unretained(interface_),
        &SmbProviderInterface::ParseNetBiosPacket);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/SmbProvider"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.SmbProvider\">\n"
        "    <method name=\"GetShares\">\n"
        "      <arg name=\"options_blob\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"error_code\" type=\"i\" direction=\"out\"/>\n"
        "      <arg name=\"shares\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SetupKerberos\">\n"
        "      <arg name=\"account_id\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"success\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ParseNetBiosPacket\">\n"
        "      <arg name=\"packet\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"transaction_id\" type=\"q\" direction=\"in\"/>\n"
        "      <arg name=\"hostnames\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "  </interface>\n";
  }

 private:
  SmbProviderInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SMBPROVIDER_OUT_DEFAULT_GEN_INCLUDE_DBUS_ADAPTORS_ORG_CHROMIUM_SMBPROVIDER_H
