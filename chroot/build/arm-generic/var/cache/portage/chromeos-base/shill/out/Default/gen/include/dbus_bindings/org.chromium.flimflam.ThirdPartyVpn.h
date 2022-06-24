// Automatic generation of D-Bus interfaces:
//  - org.chromium.flimflam.ThirdPartyVpn
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_DBUS_BINDINGS_ORG_CHROMIUM_FLIMFLAM_THIRDPARTYVPN_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_DBUS_BINDINGS_ORG_CHROMIUM_FLIMFLAM_THIRDPARTYVPN_H
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

// Interface definition for org::chromium::flimflam::ThirdPartyVpn.
class ThirdPartyVpnInterface {
 public:
  virtual ~ThirdPartyVpnInterface() = default;

  virtual bool SetParameters(
      brillo::ErrorPtr* error,
      const std::map<std::string, std::string>& in_parameters,
      std::string* out_warning) = 0;
  virtual bool UpdateConnectionState(
      brillo::ErrorPtr* error,
      uint32_t in_connection_state) = 0;
  virtual bool SendPacket(
      brillo::ErrorPtr* error,
      const std::vector<uint8_t>& in_ip_packet) = 0;
};

// Interface adaptor for org::chromium::flimflam::ThirdPartyVpn.
class ThirdPartyVpnAdaptor {
 public:
  ThirdPartyVpnAdaptor(ThirdPartyVpnInterface* interface) : interface_(interface) {}
  ThirdPartyVpnAdaptor(const ThirdPartyVpnAdaptor&) = delete;
  ThirdPartyVpnAdaptor& operator=(const ThirdPartyVpnAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.flimflam.ThirdPartyVpn");

    itf->AddSimpleMethodHandlerWithError(
        "SetParameters",
        base::Unretained(interface_),
        &ThirdPartyVpnInterface::SetParameters);
    itf->AddSimpleMethodHandlerWithError(
        "UpdateConnectionState",
        base::Unretained(interface_),
        &ThirdPartyVpnInterface::UpdateConnectionState);
    itf->AddSimpleMethodHandlerWithError(
        "SendPacket",
        base::Unretained(interface_),
        &ThirdPartyVpnInterface::SendPacket);

    signal_OnPacketReceived_ = itf->RegisterSignalOfType<SignalOnPacketReceivedType>("OnPacketReceived");
    signal_OnPlatformMessage_ = itf->RegisterSignalOfType<SignalOnPlatformMessageType>("OnPlatformMessage");
  }

  void SendOnPacketReceivedSignal(
      const std::vector<uint8_t>& in_ip_packet) {
    auto signal = signal_OnPacketReceived_.lock();
    if (signal)
      signal->Send(in_ip_packet);
  }
  void SendOnPlatformMessageSignal(
      uint32_t in_platform_message) {
    auto signal = signal_OnPlatformMessage_.lock();
    if (signal)
      signal->Send(in_platform_message);
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.flimflam.ThirdPartyVpn\">\n"
        "    <method name=\"SetParameters\">\n"
        "      <arg name=\"parameters\" type=\"a{ss}\" direction=\"in\"/>\n"
        "      <arg name=\"warning\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"UpdateConnectionState\">\n"
        "      <arg name=\"connection_state\" type=\"u\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"SendPacket\">\n"
        "      <arg name=\"ip_packet\" type=\"ay\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <signal name=\"OnPacketReceived\">\n"
        "      <arg name=\"ip_packet\" type=\"ay\"/>\n"
        "    </signal>\n"
        "    <signal name=\"OnPlatformMessage\">\n"
        "      <arg name=\"platform_message\" type=\"u\"/>\n"
        "    </signal>\n"
        "  </interface>\n";
  }

 private:
  using SignalOnPacketReceivedType = brillo::dbus_utils::DBusSignal<
      std::vector<uint8_t> /*ip_packet*/>;
  std::weak_ptr<SignalOnPacketReceivedType> signal_OnPacketReceived_;

  using SignalOnPlatformMessageType = brillo::dbus_utils::DBusSignal<
      uint32_t /*platform_message*/>;
  std::weak_ptr<SignalOnPlatformMessageType> signal_OnPlatformMessage_;

  ThirdPartyVpnInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace flimflam
}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_DBUS_BINDINGS_ORG_CHROMIUM_FLIMFLAM_THIRDPARTYVPN_H
