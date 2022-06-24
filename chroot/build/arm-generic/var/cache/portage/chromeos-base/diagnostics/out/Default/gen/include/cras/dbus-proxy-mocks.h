// Automatic generation of D-Bus interface mock proxies for:
//  - org.chromium.cras.Control
//  - org.freedesktop.DBus.Introspectable
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DIAGNOSTICS_OUT_DEFAULT_GEN_INCLUDE_CRAS_DBUS_PROXY_MOCKS_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DIAGNOSTICS_OUT_DEFAULT_GEN_INCLUDE_CRAS_DBUS_PROXY_MOCKS_H
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
namespace chromium {
namespace cras {

// Mock object for ControlProxyInterface.
class ControlProxyMock : public ControlProxyInterface {
 public:
  ControlProxyMock() = default;
  ControlProxyMock(const ControlProxyMock&) = delete;
  ControlProxyMock& operator=(const ControlProxyMock&) = delete;

  MOCK_METHOD3(SetOutputVolume,
               bool(int32_t /*in_volume*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetOutputVolumeAsync,
               void(int32_t /*in_volume*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetOutputNodeVolume,
               bool(uint64_t /*in_node_id*/,
                    int32_t /*in_volume*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SetOutputNodeVolumeAsync,
               void(uint64_t /*in_node_id*/,
                    int32_t /*in_volume*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SwapLeftRight,
               bool(uint64_t /*in_node_id*/,
                    bool /*in_swap*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SwapLeftRightAsync,
               void(uint64_t /*in_node_id*/,
                    bool /*in_swap*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetDisplayRotation,
               bool(uint64_t /*in_node_id*/,
                    uint32_t /*in_rotation*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SetDisplayRotationAsync,
               void(uint64_t /*in_node_id*/,
                    uint32_t /*in_rotation*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetOutputMute,
               bool(bool /*in_mute_on*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetOutputMuteAsync,
               void(bool /*in_mute_on*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetOutputUserMute,
               bool(bool /*in_mute_on*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetOutputUserMuteAsync,
               void(bool /*in_mute_on*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetSuspendAudio,
               bool(bool /*in_suspend*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetSuspendAudioAsync,
               void(bool /*in_suspend*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetInputNodeGain,
               bool(uint64_t /*in_node_id*/,
                    int32_t /*in_gain*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SetInputNodeGainAsync,
               void(uint64_t /*in_node_id*/,
                    int32_t /*in_gain*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetInputMute,
               bool(bool /*in_mute_on*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetInputMuteAsync,
               void(bool /*in_mute_on*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(GetVolumeState,
               bool(int32_t* /*out_output_volume*/,
                    bool* /*out_output_mute*/,
                    bool* /*out_input_mute*/,
                    bool* /*out_output_user_mute*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetVolumeStateAsync,
               void(base::OnceCallback<void(int32_t /*output_volume*/, bool /*output_mute*/, bool /*input_mute*/, bool /*output_user_mute*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetDefaultOutputBufferSize,
               bool(int32_t* /*out_buffer_size*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetDefaultOutputBufferSizeAsync,
               void(base::OnceCallback<void(int32_t /*buffer_size*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetNodes,
               bool(brillo::VariantDictionary* /*out_nodes*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetNodesAsync,
               void(base::OnceCallback<void(const brillo::VariantDictionary& /*nodes*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetNodeInfos,
               bool(std::vector<brillo::VariantDictionary>* /*out_nodes*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetNodeInfosAsync,
               void(base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*nodes*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetSystemAecSupported,
               bool(bool* /*out_supported*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetSystemAecSupportedAsync,
               void(base::OnceCallback<void(bool /*supported*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetSystemAecGroupId,
               bool(int32_t* /*out_group_id*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetSystemAecGroupIdAsync,
               void(base::OnceCallback<void(int32_t /*group_id*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetSystemNsSupported,
               bool(bool* /*out_supported*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetSystemNsSupportedAsync,
               void(base::OnceCallback<void(bool /*supported*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetSystemAgcSupported,
               bool(bool* /*out_supported*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetSystemAgcSupportedAsync,
               void(base::OnceCallback<void(bool /*supported*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetDeprioritizeBtWbsMic,
               bool(bool* /*out_deprioritized*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetDeprioritizeBtWbsMicAsync,
               void(base::OnceCallback<void(bool /*deprioritized*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetRtcRunning,
               bool(bool* /*out_deprioritized*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetRtcRunningAsync,
               void(base::OnceCallback<void(bool /*deprioritized*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetActiveOutputNode,
               bool(uint64_t /*in_node_id*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetActiveOutputNodeAsync,
               void(uint64_t /*in_node_id*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetActiveInputNode,
               bool(uint64_t /*in_node_id*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetActiveInputNodeAsync,
               void(uint64_t /*in_node_id*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(AddActiveInputNode,
               bool(uint64_t /*in_node_id*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(AddActiveInputNodeAsync,
               void(uint64_t /*in_node_id*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(AddActiveOutputNode,
               bool(uint64_t /*in_node_id*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(AddActiveOutputNodeAsync,
               void(uint64_t /*in_node_id*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(RemoveActiveInputNode,
               bool(uint64_t /*in_node_id*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RemoveActiveInputNodeAsync,
               void(uint64_t /*in_node_id*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(RemoveActiveOutputNode,
               bool(uint64_t /*in_node_id*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RemoveActiveOutputNodeAsync,
               void(uint64_t /*in_node_id*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetFixA2dpPacketSize,
               bool(bool /*in_toggle*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetFixA2dpPacketSizeAsync,
               void(bool /*in_toggle*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetNumberOfActiveStreams,
               bool(int32_t* /*out_num*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetNumberOfActiveStreamsAsync,
               void(base::OnceCallback<void(int32_t /*num*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetNumberOfActiveOutputStreams,
               bool(int32_t* /*out_num*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetNumberOfActiveOutputStreamsAsync,
               void(base::OnceCallback<void(int32_t /*num*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetNumberOfActiveInputStreams,
               bool(int32_t* /*out_num*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetNumberOfActiveInputStreamsAsync,
               void(base::OnceCallback<void(int32_t /*num*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetNumberOfInputStreamsWithPermission,
               bool(brillo::VariantDictionary* /*out_num*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetNumberOfInputStreamsWithPermissionAsync,
               void(base::OnceCallback<void(const brillo::VariantDictionary& /*num*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetGlobalOutputChannelRemix,
               bool(int32_t /*in_num_channels*/,
                    const std::vector<double>& /*in_coefficient*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SetGlobalOutputChannelRemixAsync,
               void(int32_t /*in_num_channels*/,
                    const std::vector<double>& /*in_coefficient*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetHotwordModel,
               bool(uint64_t /*in_node_id*/,
                    const std::string& /*in_model_name*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SetHotwordModelAsync,
               void(uint64_t /*in_node_id*/,
                    const std::string& /*in_model_name*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(IsAudioOutputActive,
               bool(bool* /*out_active*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(IsAudioOutputActiveAsync,
               void(base::OnceCallback<void(bool /*active*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetFlossEnabled,
               bool(bool /*in_enabled*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetFlossEnabledAsync,
               void(bool /*in_enabled*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetWbsEnabled,
               bool(bool /*in_enabled*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetWbsEnabledAsync,
               void(bool /*in_enabled*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetNoiseCancellationEnabled,
               bool(bool /*in_enabled*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetNoiseCancellationEnabledAsync,
               void(bool /*in_enabled*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(IsNoiseCancellationSupported,
               bool(bool* /*out_supported*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(IsNoiseCancellationSupportedAsync,
               void(base::OnceCallback<void(bool /*supported*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetBypassBlockNoiseCancellation,
               bool(bool /*in_bypass*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetBypassBlockNoiseCancellationAsync,
               void(bool /*in_bypass*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetPlayerPlaybackStatus,
               bool(const std::string& /*in_status*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetPlayerPlaybackStatusAsync,
               void(const std::string& /*in_status*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetPlayerIdentity,
               bool(const std::string& /*in_identity*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetPlayerIdentityAsync,
               void(const std::string& /*in_identity*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetPlayerPosition,
               bool(int64_t /*in_position*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetPlayerPositionAsync,
               void(int64_t /*in_position*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetPlayerMetadata,
               bool(const brillo::VariantDictionary& /*in_metadata*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetPlayerMetadataAsync,
               void(const brillo::VariantDictionary& /*in_metadata*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  void RegisterOutputVolumeChangedSignalHandler(
    const base::RepeatingCallback<void(int32_t)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterOutputVolumeChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterOutputVolumeChangedSignalHandler,
               void(const base::RepeatingCallback<void(int32_t)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterOutputMuteChangedSignalHandler(
    const base::RepeatingCallback<void(bool,
                                       bool)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterOutputMuteChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterOutputMuteChangedSignalHandler,
               void(const base::RepeatingCallback<void(bool,
                                                       bool)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterInputGainChangedSignalHandler(
    const base::RepeatingCallback<void(int32_t)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterInputGainChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterInputGainChangedSignalHandler,
               void(const base::RepeatingCallback<void(int32_t)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterInputMuteChangedSignalHandler(
    const base::RepeatingCallback<void(bool)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterInputMuteChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterInputMuteChangedSignalHandler,
               void(const base::RepeatingCallback<void(bool)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterNodesChangedSignalHandler(
    base::RepeatingClosure signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterNodesChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterNodesChangedSignalHandler,
               void(base::RepeatingClosure /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterActiveOutputNodeChangedSignalHandler(
    const base::RepeatingCallback<void(uint64_t)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterActiveOutputNodeChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterActiveOutputNodeChangedSignalHandler,
               void(const base::RepeatingCallback<void(uint64_t)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterActiveInputNodeChangedSignalHandler(
    const base::RepeatingCallback<void(uint64_t)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterActiveInputNodeChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterActiveInputNodeChangedSignalHandler,
               void(const base::RepeatingCallback<void(uint64_t)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterOutputNodeVolumeChangedSignalHandler(
    const base::RepeatingCallback<void(uint64_t,
                                       int32_t)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterOutputNodeVolumeChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterOutputNodeVolumeChangedSignalHandler,
               void(const base::RepeatingCallback<void(uint64_t,
                                                       int32_t)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterInputNodeGainChangedSignalHandler(
    const base::RepeatingCallback<void(uint64_t,
                                       int32_t)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterInputNodeGainChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterInputNodeGainChangedSignalHandler,
               void(const base::RepeatingCallback<void(uint64_t,
                                                       int32_t)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterNodeLeftRightSwappedChangedSignalHandler(
    const base::RepeatingCallback<void(uint64_t,
                                       bool)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterNodeLeftRightSwappedChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterNodeLeftRightSwappedChangedSignalHandler,
               void(const base::RepeatingCallback<void(uint64_t,
                                                       bool)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterNumberOfActiveStreamsChangedSignalHandler(
    const base::RepeatingCallback<void(int32_t)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterNumberOfActiveStreamsChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterNumberOfActiveStreamsChangedSignalHandler,
               void(const base::RepeatingCallback<void(int32_t)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterNumberOfInputStreamsWithPermissionChangedSignalHandler(
    const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterNumberOfInputStreamsWithPermissionChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterNumberOfInputStreamsWithPermissionChangedSignalHandler,
               void(const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterHotwordTriggeredSignalHandler(
    const base::RepeatingCallback<void(int64_t,
                                       int64_t)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterHotwordTriggeredSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterHotwordTriggeredSignalHandler,
               void(const base::RepeatingCallback<void(int64_t,
                                                       int64_t)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterAudioOutputActiveStateChangedSignalHandler(
    const base::RepeatingCallback<void(bool)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterAudioOutputActiveStateChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterAudioOutputActiveStateChangedSignalHandler,
               void(const base::RepeatingCallback<void(bool)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterSevereUnderrunSignalHandler(
    base::RepeatingClosure signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterSevereUnderrunSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterSevereUnderrunSignalHandler,
               void(base::RepeatingClosure /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterUnderrunSignalHandler(
    base::RepeatingClosure signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterUnderrunSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterUnderrunSignalHandler,
               void(base::RepeatingClosure /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterSurveyTriggerSignalHandler(
    const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterSurveyTriggerSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterSurveyTriggerSignalHandler,
               void(const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace cras
}  // namespace chromium
}  // namespace org

namespace org {
namespace freedesktop {
namespace DBus {

// Mock object for IntrospectableProxyInterface.
class IntrospectableProxyMock : public IntrospectableProxyInterface {
 public:
  IntrospectableProxyMock() = default;
  IntrospectableProxyMock(const IntrospectableProxyMock&) = delete;
  IntrospectableProxyMock& operator=(const IntrospectableProxyMock&) = delete;

  MOCK_METHOD3(Introspect,
               bool(std::string* /*out_data*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(IntrospectAsync,
               void(base::OnceCallback<void(const std::string& /*data*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace DBus
}  // namespace freedesktop
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DIAGNOSTICS_OUT_DEFAULT_GEN_INCLUDE_CRAS_DBUS_PROXY_MOCKS_H
