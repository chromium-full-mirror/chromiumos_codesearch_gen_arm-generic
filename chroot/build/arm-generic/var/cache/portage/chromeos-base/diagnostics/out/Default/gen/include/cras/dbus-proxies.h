// Automatic generation of D-Bus interfaces:
//  - org.chromium.cras.Control
//  - org.freedesktop.DBus.Introspectable
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DIAGNOSTICS_OUT_DEFAULT_GEN_INCLUDE_CRAS_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DIAGNOSTICS_OUT_DEFAULT_GEN_INCLUDE_CRAS_DBUS_PROXIES_H
#include <memory>
#include <string>
#include <vector>

#include <base/bind.h>
#include <base/callback.h>
#include <base/files/scoped_file.h>
#include <base/logging.h>
#include <base/memory/ref_counted.h>
#include <brillo/any.h>
#include <brillo/dbus/dbus_method_invoker.h>
#include <brillo/dbus/dbus_property.h>
#include <brillo/dbus/dbus_signal_handler.h>
#include <brillo/dbus/file_descriptor.h>
#include <brillo/errors/error.h>
#include <brillo/variant_dictionary.h>
#include <dbus/bus.h>
#include <dbus/message.h>
#include <dbus/object_manager.h>
#include <dbus/object_path.h>
#include <dbus/object_proxy.h>

namespace org {
namespace chromium {
namespace cras {

// Abstract interface proxy for org::chromium::cras::Control.
class ControlProxyInterface {
 public:
  virtual ~ControlProxyInterface() = default;

  // Sets the volume of the system.
  virtual bool SetOutputVolume(
      int32_t in_volume,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets the volume of the system.
  virtual void SetOutputVolumeAsync(
      int32_t in_volume,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets the volume of the given node.
  virtual bool SetOutputNodeVolume(
      uint64_t in_node_id,
      int32_t in_volume,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets the volume of the given node.
  virtual void SetOutputNodeVolumeAsync(
      uint64_t in_node_id,
      int32_t in_volume,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Swap the left and right channel of the given node.
  // Message will be dropped if this feature is not supported.
  virtual bool SwapLeftRight(
      uint64_t in_node_id,
      bool in_swap,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Swap the left and right channel of the given node.
  // Message will be dropped if this feature is not supported.
  virtual void SwapLeftRightAsync(
      uint64_t in_node_id,
      bool in_swap,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Set the display rotation state with the enum CRAS_SCREEN_ROTATION
  // which is aligned with display::Display::Rotation in
  // ui/display/display.h.
  // Message will be dropped if this feature is not supported.
  virtual bool SetDisplayRotation(
      uint64_t in_node_id,
      uint32_t in_rotation,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Set the display rotation state with the enum CRAS_SCREEN_ROTATION
  // which is aligned with display::Display::Rotation in
  // ui/display/display.h.
  // Message will be dropped if this feature is not supported.
  virtual void SetDisplayRotationAsync(
      uint64_t in_node_id,
      uint32_t in_rotation,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets the system output mute.
  virtual bool SetOutputMute(
      bool in_mute_on,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets the system output mute.
  virtual void SetOutputMuteAsync(
      bool in_mute_on,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets the system output mute from user action.
  virtual bool SetOutputUserMute(
      bool in_mute_on,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets the system output mute from user action.
  virtual void SetOutputUserMuteAsync(
      bool in_mute_on,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetSuspendAudio(
      bool in_suspend,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetSuspendAudioAsync(
      bool in_suspend,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets the capture gain of the node.
  virtual bool SetInputNodeGain(
      uint64_t in_node_id,
      int32_t in_gain,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets the capture gain of the node.
  virtual void SetInputNodeGainAsync(
      uint64_t in_node_id,
      int32_t in_gain,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets the capture mute state of the system.
  // Recordings will be muted when this is set.
  virtual bool SetInputMute(
      bool in_mute_on,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets the capture mute state of the system.
  // Recordings will be muted when this is set.
  virtual void SetInputMuteAsync(
      bool in_mute_on,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns the volume and capture gain.
  virtual bool GetVolumeState(
      int32_t* out_output_volume,
      bool* out_output_mute,
      bool* out_input_mute,
      bool* out_output_user_mute,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns the volume and capture gain.
  virtual void GetVolumeStateAsync(
      base::OnceCallback<void(int32_t /*output_volume*/, bool /*output_mute*/, bool /*input_mute*/, bool /*output_user_mute*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns the default output buffer size in frames.
  virtual bool GetDefaultOutputBufferSize(
      int32_t* out_buffer_size,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns the default output buffer size in frames.
  virtual void GetDefaultOutputBufferSizeAsync(
      base::OnceCallback<void(int32_t /*buffer_size*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns information about nodes. A node can be either
  // output or input but not both. An output node is
  // something like a speaker or a headphone, and an input
  // node is like a microphone.  The return value is a
  // sequence of dicts mapping from strings to variants
  // (e.g. signature "a{sv}a{sv}" for two nodes).  Each dict
  // contains information about a node.
  //
  // Each dict contains the following properties:
  //   boolean IsInput
  //     false for output nodes, true for input
  //     nodes.
  //   uint64 Id
  //     The id of this node. It is unique among
  //     all nodes including both output and
  //     input nodes.
  //   string Type
  //           The type of this node. It can be one of
  //           following values:
  //     /* for output nodes. */
  //     "INTERNAL_SPEAKER","HEADPHONE", "HDMI",
  //     /* for input nodes. */
  //     "INTERNAL_MIC", "MIC",
  //     /* for both output and input nodes. */
  //     "USB", "BLUETOOTH", "UNKNOWN",
  //   string Name
  //     The name of this node. For example,
  //     "Speaker" or "Internal Mic".
  //   string DeviceName
  //     The name of the device that this node
  //     belongs to. For example,
  //     "HDA Intel PCH: CA0132 Analog:0,0" or
  //     "Creative SB Arena Headset".
  //   uint64 StableDeviceId
  //     The stable ID does not change due to
  //     device plug/unplug or reboot.
  //   uint64 StableDeviceIdNew
  //     The new stable ID. Keeping both stable
  //     ID and stable ID new is for backward
  //     compatibility.
  //   boolean Active
  //     Whether this node is currently used
  //     for output/input. There is one active
  //     node for output and one active node for
  //     input.
  //   uint64 PluggedTime
  //     The time that this device was plugged
  //     in. This value is in microseconds.
  //   uint64 NodeVolume
  //     The node volume indexed from 0 to 100.
  //   uint64 NodeCaptureGain
  //     The capture gain of node in dBFS * 100.
  //     It's not used by any clients.
  //   uint32 InputNodeGain
  //     The input node gain set by UI. Its value
  //     ranges from 0 to 100.
  //   string HotwordModels
  //     A string of comma-separated hotword
  //     language model locales supported by this
  //     node. e.g. "en_au,en_gb,en_us"
  //     The string is empty if the node type is
  //     not HOTWORD.
  //   uint32 NodeAudioEffect
  //     The support information of audio effects
  //     in bit-wise manner, which is defined by
  //     enum "audio_effect_type" in
  //     src/common/cras_iodev_info.h.
  virtual bool GetNodes(
      brillo::VariantDictionary* out_nodes,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns information about nodes. A node can be either
  // output or input but not both. An output node is
  // something like a speaker or a headphone, and an input
  // node is like a microphone.  The return value is a
  // sequence of dicts mapping from strings to variants
  // (e.g. signature "a{sv}a{sv}" for two nodes).  Each dict
  // contains information about a node.
  //
  // Each dict contains the following properties:
  //   boolean IsInput
  //     false for output nodes, true for input
  //     nodes.
  //   uint64 Id
  //     The id of this node. It is unique among
  //     all nodes including both output and
  //     input nodes.
  //   string Type
  //           The type of this node. It can be one of
  //           following values:
  //     /* for output nodes. */
  //     "INTERNAL_SPEAKER","HEADPHONE", "HDMI",
  //     /* for input nodes. */
  //     "INTERNAL_MIC", "MIC",
  //     /* for both output and input nodes. */
  //     "USB", "BLUETOOTH", "UNKNOWN",
  //   string Name
  //     The name of this node. For example,
  //     "Speaker" or "Internal Mic".
  //   string DeviceName
  //     The name of the device that this node
  //     belongs to. For example,
  //     "HDA Intel PCH: CA0132 Analog:0,0" or
  //     "Creative SB Arena Headset".
  //   uint64 StableDeviceId
  //     The stable ID does not change due to
  //     device plug/unplug or reboot.
  //   uint64 StableDeviceIdNew
  //     The new stable ID. Keeping both stable
  //     ID and stable ID new is for backward
  //     compatibility.
  //   boolean Active
  //     Whether this node is currently used
  //     for output/input. There is one active
  //     node for output and one active node for
  //     input.
  //   uint64 PluggedTime
  //     The time that this device was plugged
  //     in. This value is in microseconds.
  //   uint64 NodeVolume
  //     The node volume indexed from 0 to 100.
  //   uint64 NodeCaptureGain
  //     The capture gain of node in dBFS * 100.
  //     It's not used by any clients.
  //   uint32 InputNodeGain
  //     The input node gain set by UI. Its value
  //     ranges from 0 to 100.
  //   string HotwordModels
  //     A string of comma-separated hotword
  //     language model locales supported by this
  //     node. e.g. "en_au,en_gb,en_us"
  //     The string is empty if the node type is
  //     not HOTWORD.
  //   uint32 NodeAudioEffect
  //     The support information of audio effects
  //     in bit-wise manner, which is defined by
  //     enum "audio_effect_type" in
  //     src/common/cras_iodev_info.h.
  virtual void GetNodesAsync(
      base::OnceCallback<void(const brillo::VariantDictionary& /*nodes*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Similar to GetNodes, but this one returns an array of
  // dict and has signature "aa{sv}". Clients using
  // chromeos-dbus-bindings should use this method instead of
  // "GetNodes".
  virtual bool GetNodeInfos(
      std::vector<brillo::VariantDictionary>* out_nodes,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Similar to GetNodes, but this one returns an array of
  // dict and has signature "aa{sv}". Clients using
  // chromeos-dbus-bindings should use this method instead of
  // "GetNodes".
  virtual void GetNodeInfosAsync(
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*nodes*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns 1 if system echo cancellation is supported,
  // otherwise return 0.
  virtual bool GetSystemAecSupported(
      bool* out_supported,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns 1 if system echo cancellation is supported,
  // otherwise return 0.
  virtual void GetSystemAecSupportedAsync(
      base::OnceCallback<void(bool /*supported*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetSystemAecGroupId(
      int32_t* out_group_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetSystemAecGroupIdAsync(
      base::OnceCallback<void(int32_t /*group_id*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns 1 if system noise suppression is supported,
  // otherwise return 0.
  virtual bool GetSystemNsSupported(
      bool* out_supported,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns 1 if system noise suppression is supported,
  // otherwise return 0.
  virtual void GetSystemNsSupportedAsync(
      base::OnceCallback<void(bool /*supported*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns 1 if system automatic gain control is supported,
  // otherwise return 0.
  virtual bool GetSystemAgcSupported(
      bool* out_supported,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns 1 if system automatic gain control is supported,
  // otherwise return 0.
  virtual void GetSystemAgcSupportedAsync(
      base::OnceCallback<void(bool /*supported*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetDeprioritizeBtWbsMic(
      bool* out_deprioritized,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetDeprioritizeBtWbsMicAsync(
      base::OnceCallback<void(bool /*deprioritized*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns true if there are running RTC streams, otherwise
  // return false.
  virtual bool GetRtcRunning(
      bool* out_deprioritized,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns true if there are running RTC streams, otherwise
  // return false.
  virtual void GetRtcRunningAsync(
      base::OnceCallback<void(bool /*deprioritized*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Requests the specified node to be used for
  // output. If node_id is 0 (which is not a valid
  // node id), cras will choose the active node
  // automatically.
  virtual bool SetActiveOutputNode(
      uint64_t in_node_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Requests the specified node to be used for
  // output. If node_id is 0 (which is not a valid
  // node id), cras will choose the active node
  // automatically.
  virtual void SetActiveOutputNodeAsync(
      uint64_t in_node_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Requests the specified node to be used for
  // input. If node_id is 0 (which is not a valid
  // node id), cras will choose the active node
  // automatically.
  virtual bool SetActiveInputNode(
      uint64_t in_node_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Requests the specified node to be used for
  // input. If node_id is 0 (which is not a valid
  // node id), cras will choose the active node
  // automatically.
  virtual void SetActiveInputNodeAsync(
      uint64_t in_node_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool AddActiveInputNode(
      uint64_t in_node_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void AddActiveInputNodeAsync(
      uint64_t in_node_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool AddActiveOutputNode(
      uint64_t in_node_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void AddActiveOutputNodeAsync(
      uint64_t in_node_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RemoveActiveInputNode(
      uint64_t in_node_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RemoveActiveInputNodeAsync(
      uint64_t in_node_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RemoveActiveOutputNode(
      uint64_t in_node_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RemoveActiveOutputNodeAsync(
      uint64_t in_node_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetFixA2dpPacketSize(
      bool in_toggle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetFixA2dpPacketSizeAsync(
      bool in_toggle,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns the number of streams currently being
  // played or recorded.
  virtual bool GetNumberOfActiveStreams(
      int32_t* out_num,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns the number of streams currently being
  // played or recorded.
  virtual void GetNumberOfActiveStreamsAsync(
      base::OnceCallback<void(int32_t /*num*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns the number of streams currently using output hardware.
  virtual bool GetNumberOfActiveOutputStreams(
      int32_t* out_num,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns the number of streams currently using output hardware.
  virtual void GetNumberOfActiveOutputStreamsAsync(
      base::OnceCallback<void(int32_t /*num*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns the number of streams currently using input hardware.
  virtual bool GetNumberOfActiveInputStreams(
      int32_t* out_num,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns the number of streams currently using input hardware.
  virtual void GetNumberOfActiveInputStreamsAsync(
      base::OnceCallback<void(int32_t /*num*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetNumberOfInputStreamsWithPermission(
      brillo::VariantDictionary* out_num,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetNumberOfInputStreamsWithPermissionAsync(
      base::OnceCallback<void(const brillo::VariantDictionary& /*num*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets the conversion matrix for global output channel
  // remixing. The coefficient array represents an N * N
  // conversion matrix M, where N is num_channels, with
  // M[i][j] = coefficient[i * N + j].
  // The remix is done by multiplying the conversion matrix
  // to each N-channel PCM data, i.e M * [L, R] = [L', R']
  // For example, coefficient [0.1, 0.9, 0.4, 0.6] will
  // result in:
  // L' = 0.1 * L + 0.9 * R
  // R' = 0.4 * L + 0.6 * R
  virtual bool SetGlobalOutputChannelRemix(
      int32_t in_num_channels,
      const std::vector<double>& in_coefficient,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets the conversion matrix for global output channel
  // remixing. The coefficient array represents an N * N
  // conversion matrix M, where N is num_channels, with
  // M[i][j] = coefficient[i * N + j].
  // The remix is done by multiplying the conversion matrix
  // to each N-channel PCM data, i.e M * [L, R] = [L', R']
  // For example, coefficient [0.1, 0.9, 0.4, 0.6] will
  // result in:
  // L' = 0.1 * L + 0.9 * R
  // R' = 0.4 * L + 0.6 * R
  virtual void SetGlobalOutputChannelRemixAsync(
      int32_t in_num_channels,
      const std::vector<double>& in_coefficient,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Set the hotword language model on the specified node.
  // The node must have type HOTWORD and the model_name must
  // be one of the supported locales returned by
  // GetNodes() HotwordModels string.
  // Returns 0 on success, or a negative errno on failure.
  virtual bool SetHotwordModel(
      uint64_t in_node_id,
      const std::string& in_model_name,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Set the hotword language model on the specified node.
  // The node must have type HOTWORD and the model_name must
  // be one of the supported locales returned by
  // GetNodes() HotwordModels string.
  // Returns 0 on success, or a negative errno on failure.
  virtual void SetHotwordModelAsync(
      uint64_t in_node_id,
      const std::string& in_model_name,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns 1 if there are currently any active output streams,
  // excluding 'fake' streams that are not actually outputting any
  // audio. Returns 0 if there are no active streams, or all active
  // streams are 'fake' streams.
  virtual bool IsAudioOutputActive(
      bool* out_active,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns 1 if there are currently any active output streams,
  // excluding 'fake' streams that are not actually outputting any
  // audio. Returns 0 if there are no active streams, or all active
  // streams are 'fake' streams.
  virtual void IsAudioOutputActiveAsync(
      base::OnceCallback<void(bool /*active*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetFlossEnabled(
      bool in_enabled,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetFlossEnabledAsync(
      bool in_enabled,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetWbsEnabled(
      bool in_enabled,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetWbsEnabledAsync(
      bool in_enabled,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetNoiseCancellationEnabled(
      bool in_enabled,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetNoiseCancellationEnabledAsync(
      bool in_enabled,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool IsNoiseCancellationSupported(
      bool* out_supported,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void IsNoiseCancellationSupportedAsync(
      base::OnceCallback<void(bool /*supported*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetBypassBlockNoiseCancellation(
      bool in_bypass,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetBypassBlockNoiseCancellationAsync(
      bool in_bypass,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetPlayerPlaybackStatus(
      const std::string& in_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetPlayerPlaybackStatusAsync(
      const std::string& in_status,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetPlayerIdentity(
      const std::string& in_identity,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetPlayerIdentityAsync(
      const std::string& in_identity,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetPlayerPosition(
      int64_t in_position,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetPlayerPositionAsync(
      int64_t in_position,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetPlayerMetadata(
      const brillo::VariantDictionary& in_metadata,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetPlayerMetadataAsync(
      const brillo::VariantDictionary& in_metadata,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterOutputVolumeChangedSignalHandler(
      const base::RepeatingCallback<void(int32_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterOutputMuteChangedSignalHandler(
      const base::RepeatingCallback<void(bool,
                                         bool)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterInputGainChangedSignalHandler(
      const base::RepeatingCallback<void(int32_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterInputMuteChangedSignalHandler(
      const base::RepeatingCallback<void(bool)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterNodesChangedSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterActiveOutputNodeChangedSignalHandler(
      const base::RepeatingCallback<void(uint64_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterActiveInputNodeChangedSignalHandler(
      const base::RepeatingCallback<void(uint64_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterOutputNodeVolumeChangedSignalHandler(
      const base::RepeatingCallback<void(uint64_t,
                                         int32_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterInputNodeGainChangedSignalHandler(
      const base::RepeatingCallback<void(uint64_t,
                                         int32_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterNodeLeftRightSwappedChangedSignalHandler(
      const base::RepeatingCallback<void(uint64_t,
                                         bool)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterNumberOfActiveStreamsChangedSignalHandler(
      const base::RepeatingCallback<void(int32_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterNumberOfInputStreamsWithPermissionChangedSignalHandler(
      const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterHotwordTriggeredSignalHandler(
      const base::RepeatingCallback<void(int64_t,
                                         int64_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterAudioOutputActiveStateChangedSignalHandler(
      const base::RepeatingCallback<void(bool)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterSevereUnderrunSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterUnderrunSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterSurveyTriggerSignalHandler(
      const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace cras
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {
namespace cras {

// Interface proxy for org::chromium::cras::Control.
class ControlProxy final : public ControlProxyInterface {
 public:
  ControlProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name,
      const dbus::ObjectPath& object_path) :
          bus_{bus},
          service_name_{service_name},
          object_path_{object_path},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  ControlProxy(const ControlProxy&) = delete;
  ControlProxy& operator=(const ControlProxy&) = delete;

  ~ControlProxy() override {
  }

  void RegisterOutputVolumeChangedSignalHandler(
      const base::RepeatingCallback<void(int32_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "OutputVolumeChanged",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterOutputMuteChangedSignalHandler(
      const base::RepeatingCallback<void(bool,
                                         bool)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "OutputMuteChanged",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterInputGainChangedSignalHandler(
      const base::RepeatingCallback<void(int32_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "InputGainChanged",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterInputMuteChangedSignalHandler(
      const base::RepeatingCallback<void(bool)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "InputMuteChanged",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterNodesChangedSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "NodesChanged",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterActiveOutputNodeChangedSignalHandler(
      const base::RepeatingCallback<void(uint64_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "ActiveOutputNodeChanged",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterActiveInputNodeChangedSignalHandler(
      const base::RepeatingCallback<void(uint64_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "ActiveInputNodeChanged",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterOutputNodeVolumeChangedSignalHandler(
      const base::RepeatingCallback<void(uint64_t,
                                         int32_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "OutputNodeVolumeChanged",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterInputNodeGainChangedSignalHandler(
      const base::RepeatingCallback<void(uint64_t,
                                         int32_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "InputNodeGainChanged",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterNodeLeftRightSwappedChangedSignalHandler(
      const base::RepeatingCallback<void(uint64_t,
                                         bool)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "NodeLeftRightSwappedChanged",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterNumberOfActiveStreamsChangedSignalHandler(
      const base::RepeatingCallback<void(int32_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "NumberOfActiveStreamsChanged",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterNumberOfInputStreamsWithPermissionChangedSignalHandler(
      const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "NumberOfInputStreamsWithPermissionChanged",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterHotwordTriggeredSignalHandler(
      const base::RepeatingCallback<void(int64_t,
                                         int64_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "HotwordTriggered",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterAudioOutputActiveStateChangedSignalHandler(
      const base::RepeatingCallback<void(bool)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "AudioOutputActiveStateChanged",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterSevereUnderrunSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SevereUnderrun",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterUnderrunSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "Underrun",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterSurveyTriggerSignalHandler(
      const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SurveyTrigger",
        signal_callback,
        std::move(on_connected_callback));
  }

  void ReleaseObjectProxy(base::OnceClosure callback) {
    bus_->RemoveObjectProxy(service_name_, object_path_, std::move(callback));
  }

  const dbus::ObjectPath& GetObjectPath() const override {
    return object_path_;
  }

  dbus::ObjectProxy* GetObjectProxy() const override {
    return dbus_object_proxy_;
  }

  // Sets the volume of the system.
  bool SetOutputVolume(
      int32_t in_volume,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetOutputVolume",
        error,
        in_volume);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Sets the volume of the system.
  void SetOutputVolumeAsync(
      int32_t in_volume,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetOutputVolume",
        std::move(success_callback),
        std::move(error_callback),
        in_volume);
  }

  // Sets the volume of the given node.
  bool SetOutputNodeVolume(
      uint64_t in_node_id,
      int32_t in_volume,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetOutputNodeVolume",
        error,
        in_node_id,
        in_volume);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Sets the volume of the given node.
  void SetOutputNodeVolumeAsync(
      uint64_t in_node_id,
      int32_t in_volume,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetOutputNodeVolume",
        std::move(success_callback),
        std::move(error_callback),
        in_node_id,
        in_volume);
  }

  // Swap the left and right channel of the given node.
  // Message will be dropped if this feature is not supported.
  bool SwapLeftRight(
      uint64_t in_node_id,
      bool in_swap,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SwapLeftRight",
        error,
        in_node_id,
        in_swap);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Swap the left and right channel of the given node.
  // Message will be dropped if this feature is not supported.
  void SwapLeftRightAsync(
      uint64_t in_node_id,
      bool in_swap,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SwapLeftRight",
        std::move(success_callback),
        std::move(error_callback),
        in_node_id,
        in_swap);
  }

  // Set the display rotation state with the enum CRAS_SCREEN_ROTATION
  // which is aligned with display::Display::Rotation in
  // ui/display/display.h.
  // Message will be dropped if this feature is not supported.
  bool SetDisplayRotation(
      uint64_t in_node_id,
      uint32_t in_rotation,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetDisplayRotation",
        error,
        in_node_id,
        in_rotation);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Set the display rotation state with the enum CRAS_SCREEN_ROTATION
  // which is aligned with display::Display::Rotation in
  // ui/display/display.h.
  // Message will be dropped if this feature is not supported.
  void SetDisplayRotationAsync(
      uint64_t in_node_id,
      uint32_t in_rotation,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetDisplayRotation",
        std::move(success_callback),
        std::move(error_callback),
        in_node_id,
        in_rotation);
  }

  // Sets the system output mute.
  bool SetOutputMute(
      bool in_mute_on,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetOutputMute",
        error,
        in_mute_on);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Sets the system output mute.
  void SetOutputMuteAsync(
      bool in_mute_on,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetOutputMute",
        std::move(success_callback),
        std::move(error_callback),
        in_mute_on);
  }

  // Sets the system output mute from user action.
  bool SetOutputUserMute(
      bool in_mute_on,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetOutputUserMute",
        error,
        in_mute_on);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Sets the system output mute from user action.
  void SetOutputUserMuteAsync(
      bool in_mute_on,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetOutputUserMute",
        std::move(success_callback),
        std::move(error_callback),
        in_mute_on);
  }

  bool SetSuspendAudio(
      bool in_suspend,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetSuspendAudio",
        error,
        in_suspend);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetSuspendAudioAsync(
      bool in_suspend,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetSuspendAudio",
        std::move(success_callback),
        std::move(error_callback),
        in_suspend);
  }

  // Sets the capture gain of the node.
  bool SetInputNodeGain(
      uint64_t in_node_id,
      int32_t in_gain,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetInputNodeGain",
        error,
        in_node_id,
        in_gain);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Sets the capture gain of the node.
  void SetInputNodeGainAsync(
      uint64_t in_node_id,
      int32_t in_gain,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetInputNodeGain",
        std::move(success_callback),
        std::move(error_callback),
        in_node_id,
        in_gain);
  }

  // Sets the capture mute state of the system.
  // Recordings will be muted when this is set.
  bool SetInputMute(
      bool in_mute_on,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetInputMute",
        error,
        in_mute_on);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Sets the capture mute state of the system.
  // Recordings will be muted when this is set.
  void SetInputMuteAsync(
      bool in_mute_on,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetInputMute",
        std::move(success_callback),
        std::move(error_callback),
        in_mute_on);
  }

  // Returns the volume and capture gain.
  bool GetVolumeState(
      int32_t* out_output_volume,
      bool* out_output_mute,
      bool* out_input_mute,
      bool* out_output_user_mute,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetVolumeState",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_output_volume, out_output_mute, out_input_mute, out_output_user_mute);
  }

  // Returns the volume and capture gain.
  void GetVolumeStateAsync(
      base::OnceCallback<void(int32_t /*output_volume*/, bool /*output_mute*/, bool /*input_mute*/, bool /*output_user_mute*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetVolumeState",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Returns the default output buffer size in frames.
  bool GetDefaultOutputBufferSize(
      int32_t* out_buffer_size,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetDefaultOutputBufferSize",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_buffer_size);
  }

  // Returns the default output buffer size in frames.
  void GetDefaultOutputBufferSizeAsync(
      base::OnceCallback<void(int32_t /*buffer_size*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetDefaultOutputBufferSize",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Returns information about nodes. A node can be either
  // output or input but not both. An output node is
  // something like a speaker or a headphone, and an input
  // node is like a microphone.  The return value is a
  // sequence of dicts mapping from strings to variants
  // (e.g. signature "a{sv}a{sv}" for two nodes).  Each dict
  // contains information about a node.
  //
  // Each dict contains the following properties:
  //   boolean IsInput
  //     false for output nodes, true for input
  //     nodes.
  //   uint64 Id
  //     The id of this node. It is unique among
  //     all nodes including both output and
  //     input nodes.
  //   string Type
  //           The type of this node. It can be one of
  //           following values:
  //     /* for output nodes. */
  //     "INTERNAL_SPEAKER","HEADPHONE", "HDMI",
  //     /* for input nodes. */
  //     "INTERNAL_MIC", "MIC",
  //     /* for both output and input nodes. */
  //     "USB", "BLUETOOTH", "UNKNOWN",
  //   string Name
  //     The name of this node. For example,
  //     "Speaker" or "Internal Mic".
  //   string DeviceName
  //     The name of the device that this node
  //     belongs to. For example,
  //     "HDA Intel PCH: CA0132 Analog:0,0" or
  //     "Creative SB Arena Headset".
  //   uint64 StableDeviceId
  //     The stable ID does not change due to
  //     device plug/unplug or reboot.
  //   uint64 StableDeviceIdNew
  //     The new stable ID. Keeping both stable
  //     ID and stable ID new is for backward
  //     compatibility.
  //   boolean Active
  //     Whether this node is currently used
  //     for output/input. There is one active
  //     node for output and one active node for
  //     input.
  //   uint64 PluggedTime
  //     The time that this device was plugged
  //     in. This value is in microseconds.
  //   uint64 NodeVolume
  //     The node volume indexed from 0 to 100.
  //   uint64 NodeCaptureGain
  //     The capture gain of node in dBFS * 100.
  //     It's not used by any clients.
  //   uint32 InputNodeGain
  //     The input node gain set by UI. Its value
  //     ranges from 0 to 100.
  //   string HotwordModels
  //     A string of comma-separated hotword
  //     language model locales supported by this
  //     node. e.g. "en_au,en_gb,en_us"
  //     The string is empty if the node type is
  //     not HOTWORD.
  //   uint32 NodeAudioEffect
  //     The support information of audio effects
  //     in bit-wise manner, which is defined by
  //     enum "audio_effect_type" in
  //     src/common/cras_iodev_info.h.
  bool GetNodes(
      brillo::VariantDictionary* out_nodes,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetNodes",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_nodes);
  }

  // Returns information about nodes. A node can be either
  // output or input but not both. An output node is
  // something like a speaker or a headphone, and an input
  // node is like a microphone.  The return value is a
  // sequence of dicts mapping from strings to variants
  // (e.g. signature "a{sv}a{sv}" for two nodes).  Each dict
  // contains information about a node.
  //
  // Each dict contains the following properties:
  //   boolean IsInput
  //     false for output nodes, true for input
  //     nodes.
  //   uint64 Id
  //     The id of this node. It is unique among
  //     all nodes including both output and
  //     input nodes.
  //   string Type
  //           The type of this node. It can be one of
  //           following values:
  //     /* for output nodes. */
  //     "INTERNAL_SPEAKER","HEADPHONE", "HDMI",
  //     /* for input nodes. */
  //     "INTERNAL_MIC", "MIC",
  //     /* for both output and input nodes. */
  //     "USB", "BLUETOOTH", "UNKNOWN",
  //   string Name
  //     The name of this node. For example,
  //     "Speaker" or "Internal Mic".
  //   string DeviceName
  //     The name of the device that this node
  //     belongs to. For example,
  //     "HDA Intel PCH: CA0132 Analog:0,0" or
  //     "Creative SB Arena Headset".
  //   uint64 StableDeviceId
  //     The stable ID does not change due to
  //     device plug/unplug or reboot.
  //   uint64 StableDeviceIdNew
  //     The new stable ID. Keeping both stable
  //     ID and stable ID new is for backward
  //     compatibility.
  //   boolean Active
  //     Whether this node is currently used
  //     for output/input. There is one active
  //     node for output and one active node for
  //     input.
  //   uint64 PluggedTime
  //     The time that this device was plugged
  //     in. This value is in microseconds.
  //   uint64 NodeVolume
  //     The node volume indexed from 0 to 100.
  //   uint64 NodeCaptureGain
  //     The capture gain of node in dBFS * 100.
  //     It's not used by any clients.
  //   uint32 InputNodeGain
  //     The input node gain set by UI. Its value
  //     ranges from 0 to 100.
  //   string HotwordModels
  //     A string of comma-separated hotword
  //     language model locales supported by this
  //     node. e.g. "en_au,en_gb,en_us"
  //     The string is empty if the node type is
  //     not HOTWORD.
  //   uint32 NodeAudioEffect
  //     The support information of audio effects
  //     in bit-wise manner, which is defined by
  //     enum "audio_effect_type" in
  //     src/common/cras_iodev_info.h.
  void GetNodesAsync(
      base::OnceCallback<void(const brillo::VariantDictionary& /*nodes*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetNodes",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Similar to GetNodes, but this one returns an array of
  // dict and has signature "aa{sv}". Clients using
  // chromeos-dbus-bindings should use this method instead of
  // "GetNodes".
  bool GetNodeInfos(
      std::vector<brillo::VariantDictionary>* out_nodes,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetNodeInfos",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_nodes);
  }

  // Similar to GetNodes, but this one returns an array of
  // dict and has signature "aa{sv}". Clients using
  // chromeos-dbus-bindings should use this method instead of
  // "GetNodes".
  void GetNodeInfosAsync(
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*nodes*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetNodeInfos",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Returns 1 if system echo cancellation is supported,
  // otherwise return 0.
  bool GetSystemAecSupported(
      bool* out_supported,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetSystemAecSupported",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_supported);
  }

  // Returns 1 if system echo cancellation is supported,
  // otherwise return 0.
  void GetSystemAecSupportedAsync(
      base::OnceCallback<void(bool /*supported*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetSystemAecSupported",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool GetSystemAecGroupId(
      int32_t* out_group_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetSystemAecGroupId",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_group_id);
  }

  void GetSystemAecGroupIdAsync(
      base::OnceCallback<void(int32_t /*group_id*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetSystemAecGroupId",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Returns 1 if system noise suppression is supported,
  // otherwise return 0.
  bool GetSystemNsSupported(
      bool* out_supported,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetSystemNsSupported",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_supported);
  }

  // Returns 1 if system noise suppression is supported,
  // otherwise return 0.
  void GetSystemNsSupportedAsync(
      base::OnceCallback<void(bool /*supported*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetSystemNsSupported",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Returns 1 if system automatic gain control is supported,
  // otherwise return 0.
  bool GetSystemAgcSupported(
      bool* out_supported,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetSystemAgcSupported",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_supported);
  }

  // Returns 1 if system automatic gain control is supported,
  // otherwise return 0.
  void GetSystemAgcSupportedAsync(
      base::OnceCallback<void(bool /*supported*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetSystemAgcSupported",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool GetDeprioritizeBtWbsMic(
      bool* out_deprioritized,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetDeprioritizeBtWbsMic",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_deprioritized);
  }

  void GetDeprioritizeBtWbsMicAsync(
      base::OnceCallback<void(bool /*deprioritized*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetDeprioritizeBtWbsMic",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Returns true if there are running RTC streams, otherwise
  // return false.
  bool GetRtcRunning(
      bool* out_deprioritized,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetRtcRunning",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_deprioritized);
  }

  // Returns true if there are running RTC streams, otherwise
  // return false.
  void GetRtcRunningAsync(
      base::OnceCallback<void(bool /*deprioritized*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetRtcRunning",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Requests the specified node to be used for
  // output. If node_id is 0 (which is not a valid
  // node id), cras will choose the active node
  // automatically.
  bool SetActiveOutputNode(
      uint64_t in_node_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetActiveOutputNode",
        error,
        in_node_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Requests the specified node to be used for
  // output. If node_id is 0 (which is not a valid
  // node id), cras will choose the active node
  // automatically.
  void SetActiveOutputNodeAsync(
      uint64_t in_node_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetActiveOutputNode",
        std::move(success_callback),
        std::move(error_callback),
        in_node_id);
  }

  // Requests the specified node to be used for
  // input. If node_id is 0 (which is not a valid
  // node id), cras will choose the active node
  // automatically.
  bool SetActiveInputNode(
      uint64_t in_node_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetActiveInputNode",
        error,
        in_node_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Requests the specified node to be used for
  // input. If node_id is 0 (which is not a valid
  // node id), cras will choose the active node
  // automatically.
  void SetActiveInputNodeAsync(
      uint64_t in_node_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetActiveInputNode",
        std::move(success_callback),
        std::move(error_callback),
        in_node_id);
  }

  bool AddActiveInputNode(
      uint64_t in_node_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "AddActiveInputNode",
        error,
        in_node_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void AddActiveInputNodeAsync(
      uint64_t in_node_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "AddActiveInputNode",
        std::move(success_callback),
        std::move(error_callback),
        in_node_id);
  }

  bool AddActiveOutputNode(
      uint64_t in_node_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "AddActiveOutputNode",
        error,
        in_node_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void AddActiveOutputNodeAsync(
      uint64_t in_node_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "AddActiveOutputNode",
        std::move(success_callback),
        std::move(error_callback),
        in_node_id);
  }

  bool RemoveActiveInputNode(
      uint64_t in_node_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "RemoveActiveInputNode",
        error,
        in_node_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RemoveActiveInputNodeAsync(
      uint64_t in_node_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "RemoveActiveInputNode",
        std::move(success_callback),
        std::move(error_callback),
        in_node_id);
  }

  bool RemoveActiveOutputNode(
      uint64_t in_node_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "RemoveActiveOutputNode",
        error,
        in_node_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RemoveActiveOutputNodeAsync(
      uint64_t in_node_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "RemoveActiveOutputNode",
        std::move(success_callback),
        std::move(error_callback),
        in_node_id);
  }

  bool SetFixA2dpPacketSize(
      bool in_toggle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetFixA2dpPacketSize",
        error,
        in_toggle);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetFixA2dpPacketSizeAsync(
      bool in_toggle,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetFixA2dpPacketSize",
        std::move(success_callback),
        std::move(error_callback),
        in_toggle);
  }

  // Returns the number of streams currently being
  // played or recorded.
  bool GetNumberOfActiveStreams(
      int32_t* out_num,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetNumberOfActiveStreams",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_num);
  }

  // Returns the number of streams currently being
  // played or recorded.
  void GetNumberOfActiveStreamsAsync(
      base::OnceCallback<void(int32_t /*num*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetNumberOfActiveStreams",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Returns the number of streams currently using output hardware.
  bool GetNumberOfActiveOutputStreams(
      int32_t* out_num,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetNumberOfActiveOutputStreams",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_num);
  }

  // Returns the number of streams currently using output hardware.
  void GetNumberOfActiveOutputStreamsAsync(
      base::OnceCallback<void(int32_t /*num*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetNumberOfActiveOutputStreams",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Returns the number of streams currently using input hardware.
  bool GetNumberOfActiveInputStreams(
      int32_t* out_num,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetNumberOfActiveInputStreams",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_num);
  }

  // Returns the number of streams currently using input hardware.
  void GetNumberOfActiveInputStreamsAsync(
      base::OnceCallback<void(int32_t /*num*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetNumberOfActiveInputStreams",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool GetNumberOfInputStreamsWithPermission(
      brillo::VariantDictionary* out_num,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetNumberOfInputStreamsWithPermission",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_num);
  }

  void GetNumberOfInputStreamsWithPermissionAsync(
      base::OnceCallback<void(const brillo::VariantDictionary& /*num*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "GetNumberOfInputStreamsWithPermission",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Sets the conversion matrix for global output channel
  // remixing. The coefficient array represents an N * N
  // conversion matrix M, where N is num_channels, with
  // M[i][j] = coefficient[i * N + j].
  // The remix is done by multiplying the conversion matrix
  // to each N-channel PCM data, i.e M * [L, R] = [L', R']
  // For example, coefficient [0.1, 0.9, 0.4, 0.6] will
  // result in:
  // L' = 0.1 * L + 0.9 * R
  // R' = 0.4 * L + 0.6 * R
  bool SetGlobalOutputChannelRemix(
      int32_t in_num_channels,
      const std::vector<double>& in_coefficient,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetGlobalOutputChannelRemix",
        error,
        in_num_channels,
        in_coefficient);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Sets the conversion matrix for global output channel
  // remixing. The coefficient array represents an N * N
  // conversion matrix M, where N is num_channels, with
  // M[i][j] = coefficient[i * N + j].
  // The remix is done by multiplying the conversion matrix
  // to each N-channel PCM data, i.e M * [L, R] = [L', R']
  // For example, coefficient [0.1, 0.9, 0.4, 0.6] will
  // result in:
  // L' = 0.1 * L + 0.9 * R
  // R' = 0.4 * L + 0.6 * R
  void SetGlobalOutputChannelRemixAsync(
      int32_t in_num_channels,
      const std::vector<double>& in_coefficient,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetGlobalOutputChannelRemix",
        std::move(success_callback),
        std::move(error_callback),
        in_num_channels,
        in_coefficient);
  }

  // Set the hotword language model on the specified node.
  // The node must have type HOTWORD and the model_name must
  // be one of the supported locales returned by
  // GetNodes() HotwordModels string.
  // Returns 0 on success, or a negative errno on failure.
  bool SetHotwordModel(
      uint64_t in_node_id,
      const std::string& in_model_name,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetHotwordModel",
        error,
        in_node_id,
        in_model_name);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Set the hotword language model on the specified node.
  // The node must have type HOTWORD and the model_name must
  // be one of the supported locales returned by
  // GetNodes() HotwordModels string.
  // Returns 0 on success, or a negative errno on failure.
  void SetHotwordModelAsync(
      uint64_t in_node_id,
      const std::string& in_model_name,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetHotwordModel",
        std::move(success_callback),
        std::move(error_callback),
        in_node_id,
        in_model_name);
  }

  // Returns 1 if there are currently any active output streams,
  // excluding 'fake' streams that are not actually outputting any
  // audio. Returns 0 if there are no active streams, or all active
  // streams are 'fake' streams.
  bool IsAudioOutputActive(
      bool* out_active,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "IsAudioOutputActive",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_active);
  }

  // Returns 1 if there are currently any active output streams,
  // excluding 'fake' streams that are not actually outputting any
  // audio. Returns 0 if there are no active streams, or all active
  // streams are 'fake' streams.
  void IsAudioOutputActiveAsync(
      base::OnceCallback<void(bool /*active*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "IsAudioOutputActive",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool SetFlossEnabled(
      bool in_enabled,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetFlossEnabled",
        error,
        in_enabled);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetFlossEnabledAsync(
      bool in_enabled,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetFlossEnabled",
        std::move(success_callback),
        std::move(error_callback),
        in_enabled);
  }

  bool SetWbsEnabled(
      bool in_enabled,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetWbsEnabled",
        error,
        in_enabled);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetWbsEnabledAsync(
      bool in_enabled,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetWbsEnabled",
        std::move(success_callback),
        std::move(error_callback),
        in_enabled);
  }

  bool SetNoiseCancellationEnabled(
      bool in_enabled,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetNoiseCancellationEnabled",
        error,
        in_enabled);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetNoiseCancellationEnabledAsync(
      bool in_enabled,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetNoiseCancellationEnabled",
        std::move(success_callback),
        std::move(error_callback),
        in_enabled);
  }

  bool IsNoiseCancellationSupported(
      bool* out_supported,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "IsNoiseCancellationSupported",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_supported);
  }

  void IsNoiseCancellationSupportedAsync(
      base::OnceCallback<void(bool /*supported*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "IsNoiseCancellationSupported",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool SetBypassBlockNoiseCancellation(
      bool in_bypass,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetBypassBlockNoiseCancellation",
        error,
        in_bypass);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetBypassBlockNoiseCancellationAsync(
      bool in_bypass,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetBypassBlockNoiseCancellation",
        std::move(success_callback),
        std::move(error_callback),
        in_bypass);
  }

  bool SetPlayerPlaybackStatus(
      const std::string& in_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetPlayerPlaybackStatus",
        error,
        in_status);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetPlayerPlaybackStatusAsync(
      const std::string& in_status,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetPlayerPlaybackStatus",
        std::move(success_callback),
        std::move(error_callback),
        in_status);
  }

  bool SetPlayerIdentity(
      const std::string& in_identity,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetPlayerIdentity",
        error,
        in_identity);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetPlayerIdentityAsync(
      const std::string& in_identity,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetPlayerIdentity",
        std::move(success_callback),
        std::move(error_callback),
        in_identity);
  }

  bool SetPlayerPosition(
      int64_t in_position,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetPlayerPosition",
        error,
        in_position);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetPlayerPositionAsync(
      int64_t in_position,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetPlayerPosition",
        std::move(success_callback),
        std::move(error_callback),
        in_position);
  }

  bool SetPlayerMetadata(
      const brillo::VariantDictionary& in_metadata,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetPlayerMetadata",
        error,
        in_metadata);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetPlayerMetadataAsync(
      const brillo::VariantDictionary& in_metadata,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.cras.Control",
        "SetPlayerMetadata",
        std::move(success_callback),
        std::move(error_callback),
        in_metadata);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  std::string service_name_;
  dbus::ObjectPath object_path_;
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace cras
}  // namespace chromium
}  // namespace org

namespace org {
namespace freedesktop {
namespace DBus {

// Abstract interface proxy for org::freedesktop::DBus::Introspectable.
class IntrospectableProxyInterface {
 public:
  virtual ~IntrospectableProxyInterface() = default;

  virtual bool Introspect(
      std::string* out_data,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void IntrospectAsync(
      base::OnceCallback<void(const std::string& /*data*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace DBus
}  // namespace freedesktop
}  // namespace org

namespace org {
namespace freedesktop {
namespace DBus {

// Interface proxy for org::freedesktop::DBus::Introspectable.
class IntrospectableProxy final : public IntrospectableProxyInterface {
 public:
  IntrospectableProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name,
      const dbus::ObjectPath& object_path) :
          bus_{bus},
          service_name_{service_name},
          object_path_{object_path},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  IntrospectableProxy(const IntrospectableProxy&) = delete;
  IntrospectableProxy& operator=(const IntrospectableProxy&) = delete;

  ~IntrospectableProxy() override {
  }

  void ReleaseObjectProxy(base::OnceClosure callback) {
    bus_->RemoveObjectProxy(service_name_, object_path_, std::move(callback));
  }

  const dbus::ObjectPath& GetObjectPath() const override {
    return object_path_;
  }

  dbus::ObjectProxy* GetObjectProxy() const override {
    return dbus_object_proxy_;
  }

  bool Introspect(
      std::string* out_data,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.DBus.Introspectable",
        "Introspect",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_data);
  }

  void IntrospectAsync(
      base::OnceCallback<void(const std::string& /*data*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.DBus.Introspectable",
        "Introspect",
        std::move(success_callback),
        std::move(error_callback));
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  std::string service_name_;
  dbus::ObjectPath object_path_;
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace DBus
}  // namespace freedesktop
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DIAGNOSTICS_OUT_DEFAULT_GEN_INCLUDE_CRAS_DBUS_PROXIES_H
