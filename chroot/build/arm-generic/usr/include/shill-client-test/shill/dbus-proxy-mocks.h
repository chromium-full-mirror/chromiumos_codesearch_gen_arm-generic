// Automatic generation of D-Bus interface mock proxies for:
//  - org.chromium.flimflam.Device
//  - org.chromium.flimflam.IPConfig
//  - org.chromium.flimflam.Manager
//  - org.chromium.flimflam.Profile
//  - org.chromium.flimflam.Service
//  - org.chromium.flimflam.Task
//  - org.chromium.flimflam.ThirdPartyVpn
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_CLIENT_OUT_DEFAULT_GEN_INCLUDE_SHILL_DBUS_PROXY_MOCKS_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_CLIENT_OUT_DEFAULT_GEN_INCLUDE_SHILL_DBUS_PROXY_MOCKS_H
#include <string>
#include <vector>

#include <base/callback_forward.h>
#include <base/logging.h>
#include <brillo/any.h>
#include <brillo/errors/error.h>
#include <brillo/variant_dictionary.h>
#include <gmock/gmock.h>

#include "shill/dbus-proxies.h"

namespace org {
namespace chromium {
namespace flimflam {

// Mock object for DeviceProxyInterface.
class DeviceProxyMock : public DeviceProxyInterface {
 public:
  DeviceProxyMock() = default;
  DeviceProxyMock(const DeviceProxyMock&) = delete;
  DeviceProxyMock& operator=(const DeviceProxyMock&) = delete;

  MOCK_METHOD3(GetProperties,
               bool(brillo::VariantDictionary*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetPropertiesAsync,
               void(base::OnceCallback<void(const brillo::VariantDictionary&)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetProperty,
               bool(const std::string&,
                    const brillo::Any&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SetPropertyAsync,
               void(const std::string&,
                    const brillo::Any&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(ClearProperty,
               bool(const std::string&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ClearPropertyAsync,
               void(const std::string&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(Enable,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(EnableAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(Disable,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(DisableAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(Register,
               bool(const std::string&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RegisterAsync,
               void(const std::string&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RequirePin,
               bool(const std::string&,
                    bool,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(RequirePinAsync,
               void(const std::string&,
                    bool,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(EnterPin,
               bool(const std::string&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(EnterPinAsync,
               void(const std::string&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(UnblockPin,
               bool(const std::string&,
                    const std::string&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(UnblockPinAsync,
               void(const std::string&,
                    const std::string&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ChangePin,
               bool(const std::string&,
                    const std::string&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(ChangePinAsync,
               void(const std::string&,
                    const std::string&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(RenewDHCPLease,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(RenewDHCPLeaseAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(Reset,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(ResetAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(RequestRoam,
               bool(const std::string&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RequestRoamAsync,
               void(const std::string&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetUsbEthernetMacAddressSource,
               bool(const std::string&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetUsbEthernetMacAddressSourceAsync,
               void(const std::string&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  void RegisterPropertyChangedSignalHandler(
    const base::RepeatingCallback<void(const std::string&,
                                       const brillo::Any&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterPropertyChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterPropertyChangedSignalHandler,
               void(const base::RepeatingCallback<void(const std::string&,
                                                       const brillo::Any&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace flimflam
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {
namespace flimflam {

// Mock object for IPConfigProxyInterface.
class IPConfigProxyMock : public IPConfigProxyInterface {
 public:
  IPConfigProxyMock() = default;
  IPConfigProxyMock(const IPConfigProxyMock&) = delete;
  IPConfigProxyMock& operator=(const IPConfigProxyMock&) = delete;

  MOCK_METHOD3(GetProperties,
               bool(brillo::VariantDictionary*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetPropertiesAsync,
               void(base::OnceCallback<void(const brillo::VariantDictionary&)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetProperty,
               bool(const std::string&,
                    const brillo::Any&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SetPropertyAsync,
               void(const std::string&,
                    const brillo::Any&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(ClearProperty,
               bool(const std::string&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ClearPropertyAsync,
               void(const std::string&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(Remove,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(RemoveAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  void RegisterPropertyChangedSignalHandler(
    const base::RepeatingCallback<void(const std::string&,
                                       const brillo::Any&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterPropertyChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterPropertyChangedSignalHandler,
               void(const base::RepeatingCallback<void(const std::string&,
                                                       const brillo::Any&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace flimflam
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {
namespace flimflam {

// Mock object for ManagerProxyInterface.
class ManagerProxyMock : public ManagerProxyInterface {
 public:
  ManagerProxyMock() = default;
  ManagerProxyMock(const ManagerProxyMock&) = delete;
  ManagerProxyMock& operator=(const ManagerProxyMock&) = delete;

  MOCK_METHOD3(GetProperties,
               bool(brillo::VariantDictionary*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetPropertiesAsync,
               void(base::OnceCallback<void(const brillo::VariantDictionary&)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetProperty,
               bool(const std::string&,
                    const brillo::Any&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SetPropertyAsync,
               void(const std::string&,
                    const brillo::Any&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetState,
               bool(std::string*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetStateAsync,
               void(base::OnceCallback<void(const std::string&)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(CreateProfile,
               bool(const std::string&,
                    dbus::ObjectPath*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(CreateProfileAsync,
               void(const std::string&,
                    base::OnceCallback<void(const dbus::ObjectPath&)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(RemoveProfile,
               bool(const std::string&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RemoveProfileAsync,
               void(const std::string&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(PushProfile,
               bool(const std::string&,
                    dbus::ObjectPath*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(PushProfileAsync,
               void(const std::string&,
                    base::OnceCallback<void(const dbus::ObjectPath&)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(InsertUserProfile,
               bool(const std::string&,
                    const std::string&,
                    dbus::ObjectPath*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(InsertUserProfileAsync,
               void(const std::string&,
                    const std::string&,
                    base::OnceCallback<void(const dbus::ObjectPath&)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(PopProfile,
               bool(const std::string&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(PopProfileAsync,
               void(const std::string&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(PopAnyProfile,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(PopAnyProfileAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(PopAllUserProfiles,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(PopAllUserProfilesAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(RecheckPortal,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(RecheckPortalAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(RequestScan,
               bool(const std::string&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RequestScanAsync,
               void(const std::string&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(EnableTechnology,
               bool(const std::string&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(EnableTechnologyAsync,
               void(const std::string&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SetNetworkThrottlingStatus,
               bool(bool,
                    uint32_t,
                    uint32_t,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(SetNetworkThrottlingStatusAsync,
               void(bool,
                    uint32_t,
                    uint32_t,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(DisableTechnology,
               bool(const std::string&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(DisableTechnologyAsync,
               void(const std::string&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetService,
               bool(const brillo::VariantDictionary&,
                    dbus::ObjectPath*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetServiceAsync,
               void(const brillo::VariantDictionary&,
                    base::OnceCallback<void(const dbus::ObjectPath&)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ConfigureService,
               bool(const brillo::VariantDictionary&,
                    dbus::ObjectPath*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ConfigureServiceAsync,
               void(const brillo::VariantDictionary&,
                    base::OnceCallback<void(const dbus::ObjectPath&)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(ConfigureServiceForProfile,
               bool(const dbus::ObjectPath&,
                    const brillo::VariantDictionary&,
                    dbus::ObjectPath*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(ConfigureServiceForProfileAsync,
               void(const dbus::ObjectPath&,
                    const brillo::VariantDictionary&,
                    base::OnceCallback<void(const dbus::ObjectPath&)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(FindMatchingService,
               bool(const brillo::VariantDictionary&,
                    dbus::ObjectPath*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(FindMatchingServiceAsync,
               void(const brillo::VariantDictionary&,
                    base::OnceCallback<void(const dbus::ObjectPath&)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetDebugLevel,
               bool(int32_t*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetDebugLevelAsync,
               void(base::OnceCallback<void(int32_t)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetDebugLevel,
               bool(int32_t,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetDebugLevelAsync,
               void(int32_t,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetServiceOrder,
               bool(std::string*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetServiceOrderAsync,
               void(base::OnceCallback<void(const std::string&)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetServiceOrder,
               bool(const std::string&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetServiceOrderAsync,
               void(const std::string&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetDebugTags,
               bool(std::string*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetDebugTagsAsync,
               void(base::OnceCallback<void(const std::string&)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetDebugTags,
               bool(const std::string&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetDebugTagsAsync,
               void(const std::string&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(ListDebugTags,
               bool(std::string*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(ListDebugTagsAsync,
               void(base::OnceCallback<void(const std::string&)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetNetworksForGeolocation,
               bool(brillo::VariantDictionary*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetNetworksForGeolocationAsync,
               void(base::OnceCallback<void(const brillo::VariantDictionary&)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(ScanAndConnectToBestServices,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(ScanAndConnectToBestServicesAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(ConnectToBestServices,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(ConnectToBestServicesAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(CreateConnectivityReport,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(CreateConnectivityReportAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ClaimInterface,
               bool(const std::string& /*in_claimer_name*/,
                    const std::string& /*in_interface_name*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(ClaimInterfaceAsync,
               void(const std::string& /*in_claimer_name*/,
                    const std::string& /*in_interface_name*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ReleaseInterface,
               bool(const std::string& /*in_claimer_name*/,
                    const std::string& /*in_interface_name*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(ReleaseInterfaceAsync,
               void(const std::string& /*in_claimer_name*/,
                    const std::string& /*in_interface_name*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetDNSProxyAddresses,
               bool(const std::vector<std::string>&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetDNSProxyAddressesAsync,
               void(const std::vector<std::string>&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(ClearDNSProxyAddresses,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(ClearDNSProxyAddressesAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetDNSProxyDOHProviders,
               bool(const brillo::VariantDictionary&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetDNSProxyDOHProvidersAsync,
               void(const brillo::VariantDictionary&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(AddPasspointCredentials,
               bool(const dbus::ObjectPath& /*in_profile*/,
                    const brillo::VariantDictionary& /*in_properties*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(AddPasspointCredentialsAsync,
               void(const dbus::ObjectPath& /*in_profile*/,
                    const brillo::VariantDictionary& /*in_properties*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RemovePasspointCredentials,
               bool(const dbus::ObjectPath& /*in_profile*/,
                    const brillo::VariantDictionary& /*in_properties*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(RemovePasspointCredentialsAsync,
               void(const dbus::ObjectPath& /*in_profile*/,
                    const brillo::VariantDictionary& /*in_properties*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetTetheringEnabled,
               bool(bool,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetTetheringEnabledAsync,
               void(bool,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  void RegisterPropertyChangedSignalHandler(
    const base::RepeatingCallback<void(const std::string&,
                                       const brillo::Any&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterPropertyChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterPropertyChangedSignalHandler,
               void(const base::RepeatingCallback<void(const std::string&,
                                                       const brillo::Any&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterStateChangedSignalHandler(
    const base::RepeatingCallback<void(const std::string&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterStateChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterStateChangedSignalHandler,
               void(const base::RepeatingCallback<void(const std::string&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace flimflam
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {
namespace flimflam {

// Mock object for ProfileProxyInterface.
class ProfileProxyMock : public ProfileProxyInterface {
 public:
  ProfileProxyMock() = default;
  ProfileProxyMock(const ProfileProxyMock&) = delete;
  ProfileProxyMock& operator=(const ProfileProxyMock&) = delete;

  MOCK_METHOD3(GetProperties,
               bool(brillo::VariantDictionary*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetPropertiesAsync,
               void(base::OnceCallback<void(const brillo::VariantDictionary&)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetProperty,
               bool(const std::string&,
                    const brillo::Any&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SetPropertyAsync,
               void(const std::string&,
                    const brillo::Any&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetEntry,
               bool(const std::string&,
                    brillo::VariantDictionary*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetEntryAsync,
               void(const std::string&,
                    base::OnceCallback<void(const brillo::VariantDictionary&)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(DeleteEntry,
               bool(const std::string&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(DeleteEntryAsync,
               void(const std::string&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  void RegisterPropertyChangedSignalHandler(
    const base::RepeatingCallback<void(const std::string&,
                                       const brillo::Any&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterPropertyChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterPropertyChangedSignalHandler,
               void(const base::RepeatingCallback<void(const std::string&,
                                                       const brillo::Any&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace flimflam
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {
namespace flimflam {

// Mock object for ServiceProxyInterface.
class ServiceProxyMock : public ServiceProxyInterface {
 public:
  ServiceProxyMock() = default;
  ServiceProxyMock(const ServiceProxyMock&) = delete;
  ServiceProxyMock& operator=(const ServiceProxyMock&) = delete;

  MOCK_METHOD3(GetProperties,
               bool(brillo::VariantDictionary*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetPropertiesAsync,
               void(base::OnceCallback<void(const brillo::VariantDictionary&)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetProperty,
               bool(const std::string&,
                    const brillo::Any&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SetPropertyAsync,
               void(const std::string&,
                    const brillo::Any&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetProperties,
               bool(const brillo::VariantDictionary&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetPropertiesAsync,
               void(const brillo::VariantDictionary&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(ClearProperty,
               bool(const std::string&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ClearPropertyAsync,
               void(const std::string&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ClearProperties,
               bool(const std::vector<std::string>&,
                    std::vector<bool>*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ClearPropertiesAsync,
               void(const std::vector<std::string>&,
                    base::OnceCallback<void(const std::vector<bool>&)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(Connect,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(ConnectAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(Disconnect,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(DisconnectAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(Remove,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(RemoveAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(CompleteCellularActivation,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(CompleteCellularActivationAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetLoadableProfileEntries,
               bool(std::map<dbus::ObjectPath, std::string>*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetLoadableProfileEntriesAsync,
               void(base::OnceCallback<void(const std::map<dbus::ObjectPath, std::string>&)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetWiFiPassphrase,
               bool(std::string*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetWiFiPassphraseAsync,
               void(base::OnceCallback<void(const std::string&)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetEapPassphrase,
               bool(std::string*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetEapPassphraseAsync,
               void(base::OnceCallback<void(const std::string&)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(RequestTrafficCounters,
               bool(std::vector<brillo::VariantDictionary>*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(RequestTrafficCountersAsync,
               void(base::OnceCallback<void(const std::vector<brillo::VariantDictionary>&)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(ResetTrafficCounters,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(ResetTrafficCountersAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  void RegisterPropertyChangedSignalHandler(
    const base::RepeatingCallback<void(const std::string&,
                                       const brillo::Any&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterPropertyChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterPropertyChangedSignalHandler,
               void(const base::RepeatingCallback<void(const std::string&,
                                                       const brillo::Any&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace flimflam
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {
namespace flimflam {

// Mock object for TaskProxyInterface.
class TaskProxyMock : public TaskProxyInterface {
 public:
  TaskProxyMock() = default;
  TaskProxyMock(const TaskProxyMock&) = delete;
  TaskProxyMock& operator=(const TaskProxyMock&) = delete;

  MOCK_METHOD4(getsec,
               bool(std::string*,
                    std::string*,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(getsecAsync,
               void(base::OnceCallback<void(const std::string&, const std::string&)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(notify,
               bool(const std::string&,
                    const std::map<std::string, std::string>&,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(notifyAsync,
               void(const std::string&,
                    const std::map<std::string, std::string>&,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace flimflam
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {
namespace flimflam {

// Mock object for ThirdPartyVpnProxyInterface.
class ThirdPartyVpnProxyMock : public ThirdPartyVpnProxyInterface {
 public:
  ThirdPartyVpnProxyMock() = default;
  ThirdPartyVpnProxyMock(const ThirdPartyVpnProxyMock&) = delete;
  ThirdPartyVpnProxyMock& operator=(const ThirdPartyVpnProxyMock&) = delete;

  MOCK_METHOD4(SetParameters,
               bool(const std::map<std::string, std::string>& /*in_parameters*/,
                    std::string* /*out_warning*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetParametersAsync,
               void(const std::map<std::string, std::string>& /*in_parameters*/,
                    base::OnceCallback<void(const std::string& /*warning*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(UpdateConnectionState,
               bool(uint32_t /*in_connection_state*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(UpdateConnectionStateAsync,
               void(uint32_t /*in_connection_state*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SendPacket,
               bool(const std::vector<uint8_t>& /*in_ip_packet*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SendPacketAsync,
               void(const std::vector<uint8_t>& /*in_ip_packet*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  void RegisterOnPacketReceivedSignalHandler(
    const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterOnPacketReceivedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterOnPacketReceivedSignalHandler,
               void(const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterOnPlatformMessageSignalHandler(
    const base::RepeatingCallback<void(uint32_t)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterOnPlatformMessageSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterOnPlatformMessageSignalHandler,
               void(const base::RepeatingCallback<void(uint32_t)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace flimflam
}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_CLIENT_OUT_DEFAULT_GEN_INCLUDE_SHILL_DBUS_PROXY_MOCKS_H
