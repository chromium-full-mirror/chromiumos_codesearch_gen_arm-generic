// Automatic generation of D-Bus interfaces:
//  - org.chromium.Kerberos
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_KERBEROS_OUT_DEFAULT_GEN_INCLUDE_KERBEROS_ORG_CHROMIUM_KERBEROS_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_KERBEROS_OUT_DEFAULT_GEN_INCLUDE_KERBEROS_ORG_CHROMIUM_KERBEROS_H
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

// Interface definition for org::chromium::Kerberos.
class KerberosInterface {
 public:
  virtual ~KerberosInterface() = default;

  // Adds a Kerberos account to the list of accounts.
  virtual std::vector<uint8_t> AddAccount(
      const std::vector<uint8_t>& in_request) = 0;
  // Removes a Kerberos account from the list of accounts.
  virtual std::vector<uint8_t> RemoveAccount(
      const std::vector<uint8_t>& in_request) = 0;
  // Removes all Kerberos accounts.
  virtual std::vector<uint8_t> ClearAccounts(
      const std::vector<uint8_t>& in_request) = 0;
  // Gets a list of all existing accounts, including current status like
  // remaining Kerberos ticket lifetime.
  virtual std::vector<uint8_t> ListAccounts(
      const std::vector<uint8_t>& in_request) = 0;
  // Validates and sets the Kerberos configuration for the given account.
  virtual std::vector<uint8_t> SetConfig(
      const std::vector<uint8_t>& in_request) = 0;
  // Validates Kerberos configuration data.
  virtual std::vector<uint8_t> ValidateConfig(
      const std::vector<uint8_t>& in_request) = 0;
  // Acquires a Kerberos ticket-granting-ticket from the Key Distribution
  // Center (KDC).
  virtual std::vector<uint8_t> AcquireKerberosTgt(
      const std::vector<uint8_t>& in_request,
      const base::ScopedFD& in_password_fd) = 0;
  // Gets the Kerberos credential cache (krb5cc) and configuration
  // (krb5.conf) files for a given account. Returns ERROR_NONE and a blob
  // with empty files if the account does not exist or has no credential
  // cache. Returns ERROR_LOCAL_IO if the krb5cc file exists, but any file
  // could not be read.
  virtual std::vector<uint8_t> GetKerberosFiles(
      const std::vector<uint8_t>& in_request) = 0;
};

// Interface adaptor for org::chromium::Kerberos.
class KerberosAdaptor {
 public:
  KerberosAdaptor(KerberosInterface* interface) : interface_(interface) {}
  KerberosAdaptor(const KerberosAdaptor&) = delete;
  KerberosAdaptor& operator=(const KerberosAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.Kerberos");

    itf->AddSimpleMethodHandler(
        "AddAccount",
        base::Unretained(interface_),
        &KerberosInterface::AddAccount);
    itf->AddSimpleMethodHandler(
        "RemoveAccount",
        base::Unretained(interface_),
        &KerberosInterface::RemoveAccount);
    itf->AddSimpleMethodHandler(
        "ClearAccounts",
        base::Unretained(interface_),
        &KerberosInterface::ClearAccounts);
    itf->AddSimpleMethodHandler(
        "ListAccounts",
        base::Unretained(interface_),
        &KerberosInterface::ListAccounts);
    itf->AddSimpleMethodHandler(
        "SetConfig",
        base::Unretained(interface_),
        &KerberosInterface::SetConfig);
    itf->AddSimpleMethodHandler(
        "ValidateConfig",
        base::Unretained(interface_),
        &KerberosInterface::ValidateConfig);
    itf->AddSimpleMethodHandler(
        "AcquireKerberosTgt",
        base::Unretained(interface_),
        &KerberosInterface::AcquireKerberosTgt);
    itf->AddSimpleMethodHandler(
        "GetKerberosFiles",
        base::Unretained(interface_),
        &KerberosInterface::GetKerberosFiles);

    signal_KerberosFilesChanged_ = itf->RegisterSignalOfType<SignalKerberosFilesChangedType>("KerberosFilesChanged");
    signal_KerberosTicketExpiring_ = itf->RegisterSignalOfType<SignalKerberosTicketExpiringType>("KerberosTicketExpiring");
  }

  // Signal emitted when either the Kerberos credential cache (krb5cc) or
  // configuration (krb5.conf) files change for the account that corresponds
  // to |principal_name|.
  void SendKerberosFilesChangedSignal(
      const std::string& in_principal_name) {
    auto signal = signal_KerberosFilesChanged_.lock();
    if (signal)
      signal->Send(in_principal_name);
  }
  // Signal emitted when a Kerberos TGT is about to expire within the next
  // couple of minutes for the account that corresponds to |principal_name|.
  // Also emitted if the ticket already expired, e.g. after a system restart.
  // The signal is only emitted once per ticket unless the ticket is
  // refreshed.
  void SendKerberosTicketExpiringSignal(
      const std::string& in_principal_name) {
    auto signal = signal_KerberosTicketExpiring_.lock();
    if (signal)
      signal->Send(in_principal_name);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/Kerberos"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.Kerberos\">\n"
        "    <method name=\"AddAccount\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"RemoveAccount\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ClearAccounts\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ListAccounts\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SetConfig\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ValidateConfig\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"AcquireKerberosTgt\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"password_fd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetKerberosFiles\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <signal name=\"KerberosFilesChanged\">\n"
        "      <arg name=\"principal_name\" type=\"s\"/>\n"
        "    </signal>\n"
        "    <signal name=\"KerberosTicketExpiring\">\n"
        "      <arg name=\"principal_name\" type=\"s\"/>\n"
        "    </signal>\n"
        "  </interface>\n";
  }

 private:
  using SignalKerberosFilesChangedType = brillo::dbus_utils::DBusSignal<
      std::string /*principal_name*/>;
  std::weak_ptr<SignalKerberosFilesChangedType> signal_KerberosFilesChanged_;

  using SignalKerberosTicketExpiringType = brillo::dbus_utils::DBusSignal<
      std::string /*principal_name*/>;
  std::weak_ptr<SignalKerberosTicketExpiringType> signal_KerberosTicketExpiring_;

  KerberosInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_KERBEROS_OUT_DEFAULT_GEN_INCLUDE_KERBEROS_ORG_CHROMIUM_KERBEROS_H
