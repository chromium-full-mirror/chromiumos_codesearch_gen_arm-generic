// Automatic generation of D-Bus interface mock proxies for:
//  - org.freedesktop.fwupd
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DIAGNOSTICS_OUT_DEFAULT_GEN_INCLUDE_FWUPD_DBUS_PROXY_MOCKS_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DIAGNOSTICS_OUT_DEFAULT_GEN_INCLUDE_FWUPD_DBUS_PROXY_MOCKS_H
#include <string>
#include <vector>

#include <base/callback_forward.h>
#include <base/logging.h>
#include <brillo/any.h>
#include <brillo/errors/error.h>
#include <brillo/variant_dictionary.h>
#include <gmock/gmock.h>

#include "dbus-proxies.h"

namespace org {
namespace freedesktop {

// Mock object for fwupdProxyInterface.
class fwupdProxyMock : public fwupdProxyInterface {
 public:
  fwupdProxyMock() = default;
  fwupdProxyMock(const fwupdProxyMock&) = delete;
  fwupdProxyMock& operator=(const fwupdProxyMock&) = delete;

  MOCK_METHOD3(GetDevices,
               bool(std::vector<brillo::VariantDictionary>* /*out_devices*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetDevicesAsync,
               void(base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*devices*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetPlugins,
               bool(std::vector<brillo::VariantDictionary>* /*out_plugins*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetPluginsAsync,
               void(base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*plugins*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetReleases,
               bool(const std::string& /*in_device_id*/,
                    std::vector<brillo::VariantDictionary>* /*out_releases*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetReleasesAsync,
               void(const std::string& /*in_device_id*/,
                    base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*releases*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetDowngrades,
               bool(const std::string& /*in_device_id*/,
                    std::vector<brillo::VariantDictionary>* /*out_releases*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetDowngradesAsync,
               void(const std::string& /*in_device_id*/,
                    base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*releases*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetUpgrades,
               bool(const std::string& /*in_device_id*/,
                    std::vector<brillo::VariantDictionary>* /*out_releases*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetUpgradesAsync,
               void(const std::string& /*in_device_id*/,
                    base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*releases*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetDetails,
               bool(const brillo::dbus_utils::FileDescriptor& /*in_handle*/,
                    std::vector<brillo::VariantDictionary>* /*out_results*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetDetailsAsync,
               void(const brillo::dbus_utils::FileDescriptor& /*in_handle*/,
                    base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*results*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetHistory,
               bool(std::vector<brillo::VariantDictionary>* /*out_devices*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetHistoryAsync,
               void(base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*devices*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetHostSecurityAttrs,
               bool(std::vector<brillo::VariantDictionary>* /*out_attrs*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetHostSecurityAttrsAsync,
               void(base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*attrs*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetHostSecurityEvents,
               bool(uint32_t /*in_limit*/,
                    std::vector<brillo::VariantDictionary>* /*out_attrs*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetHostSecurityEventsAsync,
               void(uint32_t /*in_limit*/,
                    base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*attrs*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetReportMetadata,
               bool(std::map<std::string, std::string>* /*out_attrs*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetReportMetadataAsync,
               void(base::OnceCallback<void(const std::map<std::string, std::string>& /*attrs*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetHints,
               bool(const std::map<std::string, std::string>& /*in_hints*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetHintsAsync,
               void(const std::map<std::string, std::string>& /*in_hints*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(Install,
               bool(const std::string& /*in_id*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_handle*/,
                    const brillo::VariantDictionary& /*in_options*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(InstallAsync,
               void(const std::string& /*in_id*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_handle*/,
                    const brillo::VariantDictionary& /*in_options*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(Verify,
               bool(const std::string& /*in_id*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(VerifyAsync,
               void(const std::string& /*in_id*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(VerifyUpdate,
               bool(const std::string& /*in_id*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(VerifyUpdateAsync,
               void(const std::string& /*in_id*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(Unlock,
               bool(const std::string& /*in_id*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(UnlockAsync,
               void(const std::string& /*in_id*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(Activate,
               bool(const std::string& /*in_id*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ActivateAsync,
               void(const std::string& /*in_id*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetResults,
               bool(const std::string& /*in_id*/,
                    brillo::VariantDictionary* /*out_results*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetResultsAsync,
               void(const std::string& /*in_id*/,
                    base::OnceCallback<void(const brillo::VariantDictionary& /*results*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetRemotes,
               bool(std::vector<brillo::VariantDictionary>* /*out_results*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetRemotesAsync,
               void(base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*results*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetApprovedFirmware,
               bool(std::vector<std::string>* /*out_checksums*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetApprovedFirmwareAsync,
               void(base::OnceCallback<void(const std::vector<std::string>& /*checksums*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetApprovedFirmware,
               bool(const std::vector<std::string>& /*in_checksums*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetApprovedFirmwareAsync,
               void(const std::vector<std::string>& /*in_checksums*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetBlockedFirmware,
               bool(std::vector<std::string>* /*out_checksums*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetBlockedFirmwareAsync,
               void(base::OnceCallback<void(const std::vector<std::string>& /*checksums*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetBlockedFirmware,
               bool(const std::vector<std::string>& /*in_checksums*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetBlockedFirmwareAsync,
               void(const std::vector<std::string>& /*in_checksums*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetFeatureFlags,
               bool(uint64_t /*in_feature_flags*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetFeatureFlagsAsync,
               void(uint64_t /*in_feature_flags*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(ClearResults,
               bool(const std::string& /*in_id*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ClearResultsAsync,
               void(const std::string& /*in_id*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(ModifyDevice,
               bool(const std::string& /*in_device_id*/,
                    const std::string& /*in_key*/,
                    const std::string& /*in_value*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(ModifyDeviceAsync,
               void(const std::string& /*in_device_id*/,
                    const std::string& /*in_key*/,
                    const std::string& /*in_value*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ModifyConfig,
               bool(const std::string& /*in_key*/,
                    const std::string& /*in_value*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(ModifyConfigAsync,
               void(const std::string& /*in_key*/,
                    const std::string& /*in_value*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(UpdateMetadata,
               bool(const std::string& /*in_remote_id*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_data*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_signature*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(UpdateMetadataAsync,
               void(const std::string& /*in_remote_id*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_data*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_signature*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(ModifyRemote,
               bool(const std::string& /*in_remote_id*/,
                    const std::string& /*in_key*/,
                    const std::string& /*in_value*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(ModifyRemoteAsync,
               void(const std::string& /*in_remote_id*/,
                    const std::string& /*in_key*/,
                    const std::string& /*in_value*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SelfSign,
               bool(const std::string& /*in_data*/,
                    const brillo::VariantDictionary& /*in_options*/,
                    std::string* /*out_sig*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SelfSignAsync,
               void(const std::string& /*in_data*/,
                    const brillo::VariantDictionary& /*in_options*/,
                    base::OnceCallback<void(const std::string& /*sig*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(Quit,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(QuitAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  void RegisterChangedSignalHandler(
    base::RepeatingClosure signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterChangedSignalHandler,
               void(base::RepeatingClosure /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterDeviceAddedSignalHandler(
    const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterDeviceAddedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterDeviceAddedSignalHandler,
               void(const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterDeviceRemovedSignalHandler(
    const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterDeviceRemovedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterDeviceRemovedSignalHandler,
               void(const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterDeviceChangedSignalHandler(
    const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterDeviceChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterDeviceChangedSignalHandler,
               void(const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterDeviceRequestSignalHandler(
    const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterDeviceRequestSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterDeviceRequestSignalHandler,
               void(const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  MOCK_CONST_METHOD0(daemon_version, const std::string&());
  MOCK_CONST_METHOD0(host_bkc, const std::string&());
  MOCK_CONST_METHOD0(host_product, const std::string&());
  MOCK_CONST_METHOD0(host_machine_id, const std::string&());
  MOCK_CONST_METHOD0(host_security_id, const std::string&());
  MOCK_CONST_METHOD0(tainted, bool());
  MOCK_CONST_METHOD0(interactive, bool());
  MOCK_CONST_METHOD0(status, uint32_t());
  MOCK_CONST_METHOD0(percentage, uint32_t());
  MOCK_CONST_METHOD0(battery_level, uint32_t());
  MOCK_CONST_METHOD0(battery_threshold, uint32_t());
  MOCK_CONST_METHOD0(only_trusted, bool());
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
  MOCK_METHOD1(InitializeProperties,
               void(const base::RepeatingCallback<void(fwupdProxyInterface*, const std::string&)>&));
};
}  // namespace freedesktop
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DIAGNOSTICS_OUT_DEFAULT_GEN_INCLUDE_FWUPD_DBUS_PROXY_MOCKS_H
