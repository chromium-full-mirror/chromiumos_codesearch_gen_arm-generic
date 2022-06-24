// Automatic generation of D-Bus interfaces:
//  - org.chromium.SystemProxy
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SYSTEM_PROXY_OUT_DEFAULT_GEN_INCLUDE_SYSTEM_PROXY_ORG_CHROMIUM_SYSTEMPROXY_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SYSTEM_PROXY_OUT_DEFAULT_GEN_INCLUDE_SYSTEM_PROXY_ORG_CHROMIUM_SYSTEMPROXY_H
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

// Interface definition for org::chromium::SystemProxy.
class SystemProxyInterface {
 public:
  virtual ~SystemProxyInterface() = default;

  // Sets the credentails for authenticating system services and ARC++ apps
  // to the remote web proxy and the Kerberos availability flag.
  virtual std::vector<uint8_t> SetAuthenticationDetails(
      const std::vector<uint8_t>& in_request) = 0;
  // Removes the user credentials from System-proxy. Credentials set for
  // system services via policy will still be available for proxy
  // authentication.
  virtual std::vector<uint8_t> ClearUserCredentials(
      const std::vector<uint8_t>& in_request) = 0;
  // Shuts down the System-proxy service or just one of the worker processes,
  // depending on the argument.
  virtual std::vector<uint8_t> ShutDownProcess(
      const std::vector<uint8_t>& in_request) = 0;
};

// Interface adaptor for org::chromium::SystemProxy.
class SystemProxyAdaptor {
 public:
  SystemProxyAdaptor(SystemProxyInterface* interface) : interface_(interface) {}
  SystemProxyAdaptor(const SystemProxyAdaptor&) = delete;
  SystemProxyAdaptor& operator=(const SystemProxyAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.SystemProxy");

    itf->AddSimpleMethodHandler(
        "SetAuthenticationDetails",
        base::Unretained(interface_),
        &SystemProxyInterface::SetAuthenticationDetails);
    itf->AddSimpleMethodHandler(
        "ClearUserCredentials",
        base::Unretained(interface_),
        &SystemProxyInterface::ClearUserCredentials);
    itf->AddSimpleMethodHandler(
        "ShutDownProcess",
        base::Unretained(interface_),
        &SystemProxyInterface::ShutDownProcess);

    signal_WorkerActive_ = itf->RegisterSignalOfType<SignalWorkerActiveType>("WorkerActive");
    signal_AuthenticationRequired_ = itf->RegisterSignalOfType<SignalAuthenticationRequiredType>("AuthenticationRequired");
  }

  // Signal emitted when a system proxy worker is active and accepting
  // traffic.
  void SendWorkerActiveSignal(
      const std::vector<uint8_t>& in_details) {
    auto signal = signal_WorkerActive_.lock();
    if (signal)
      signal->Send(in_details);
  }
  // Signal emitted when a system proxy worker requires credentials for
  // proxy authentication.
  void SendAuthenticationRequiredSignal(
      const std::vector<uint8_t>& in_details) {
    auto signal = signal_AuthenticationRequired_.lock();
    if (signal)
      signal->Send(in_details);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/SystemProxy"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.SystemProxy\">\n"
        "    <method name=\"SetAuthenticationDetails\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ClearUserCredentials\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ShutDownProcess\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <signal name=\"WorkerActive\">\n"
        "      <arg name=\"details\" type=\"ay\"/>\n"
        "    </signal>\n"
        "    <signal name=\"AuthenticationRequired\">\n"
        "      <arg name=\"details\" type=\"ay\"/>\n"
        "    </signal>\n"
        "  </interface>\n";
  }

 private:
  using SignalWorkerActiveType = brillo::dbus_utils::DBusSignal<
      std::vector<uint8_t> /*details*/>;
  std::weak_ptr<SignalWorkerActiveType> signal_WorkerActive_;

  using SignalAuthenticationRequiredType = brillo::dbus_utils::DBusSignal<
      std::vector<uint8_t> /*details*/>;
  std::weak_ptr<SignalAuthenticationRequiredType> signal_AuthenticationRequired_;

  SystemProxyInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SYSTEM_PROXY_OUT_DEFAULT_GEN_INCLUDE_SYSTEM_PROXY_ORG_CHROMIUM_SYSTEMPROXY_H
