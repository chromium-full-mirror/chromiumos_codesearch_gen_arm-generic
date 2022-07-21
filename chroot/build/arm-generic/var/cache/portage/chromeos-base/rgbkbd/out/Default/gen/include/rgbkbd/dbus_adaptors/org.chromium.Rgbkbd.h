// Automatic generation of D-Bus interfaces:
//  - org.chromium.Rgbkbd
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_RGBKBD_OUT_DEFAULT_GEN_INCLUDE_RGBKBD_DBUS_ADAPTORS_ORG_CHROMIUM_RGBKBD_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_RGBKBD_OUT_DEFAULT_GEN_INCLUDE_RGBKBD_DBUS_ADAPTORS_ORG_CHROMIUM_RGBKBD_H
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

// Interface definition for org::chromium::Rgbkbd.
class RgbkbdInterface {
 public:
  virtual ~RgbkbdInterface() = default;

  // Retrieve whether or not RGB keyboard is supported for the current device. It
  // can be one of the enum values of rgbkbd::RgbKeyboardCapabilities. See
  // platform2/system_api/dbus/rgbkbd/dbus-constants.h
  virtual void GetRgbKeyboardCapabilities(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<uint32_t>> response) = 0;
  // When caps lock is enabled, both shift keys are highlighted to a preset
  // caps lock highlight color. If the preset color conflicts with the
  // colors set for the rest of the keys, an alternate highlight color will
  // be chosen. When caps lock is disabled, the shift keys are restored to
  // the previously set background color.
  virtual void SetCapsLockState(
      bool in_enabled) = 0;
  // Sets the static background RGB color for the keyboard. If CapsLock is
  // enabled, this will not override the Capslock highlight keys. If
  // Capslock is disabled, the Capslock highlight keys will reflect this
  // background color.
  virtual void SetStaticBackgroundColor(
      uint8_t in_r,
      uint8_t in_g,
      uint8_t in_b) = 0;
  // Sets the backlight RGB keys of the keyboard to a rainbow color scheme.
  // If CapsLock is enabled, this will not override the Capslock highlight
  // keys. If Capslock is disabled, the Capslock highlight keys will reflect
  // this background color.
  virtual void SetRainbowMode() = 0;
  // Used for testing purposes only. If `enable_testing` is true, the Rgbkbd
  // daemon will be configured to a testing mode in which will write Rgbkbd
  // calls to logs. If `enable_testing` is false, the Rgbkbd daemon will be
  // configured to the non-testing mode.
  virtual void SetTestingMode(
      bool in_enable_testing,
      uint32_t in_capability) = 0;
  // Sets the animation mode for the RGB keys of the keyboard. This overrides
  // any static colors or special color mode (e.g. rainbow).
  virtual void SetAnimationMode(
      uint32_t in_mode) = 0;
};

// Interface adaptor for org::chromium::Rgbkbd.
class RgbkbdAdaptor {
 public:
  RgbkbdAdaptor(RgbkbdInterface* interface) : interface_(interface) {}
  RgbkbdAdaptor(const RgbkbdAdaptor&) = delete;
  RgbkbdAdaptor& operator=(const RgbkbdAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.Rgbkbd");

    itf->AddMethodHandler(
        "GetRgbKeyboardCapabilities",
        base::Unretained(interface_),
        &RgbkbdInterface::GetRgbKeyboardCapabilities);
    itf->AddSimpleMethodHandler(
        "SetCapsLockState",
        base::Unretained(interface_),
        &RgbkbdInterface::SetCapsLockState);
    itf->AddSimpleMethodHandler(
        "SetStaticBackgroundColor",
        base::Unretained(interface_),
        &RgbkbdInterface::SetStaticBackgroundColor);
    itf->AddSimpleMethodHandler(
        "SetRainbowMode",
        base::Unretained(interface_),
        &RgbkbdInterface::SetRainbowMode);
    itf->AddSimpleMethodHandler(
        "SetTestingMode",
        base::Unretained(interface_),
        &RgbkbdInterface::SetTestingMode);
    itf->AddSimpleMethodHandler(
        "SetAnimationMode",
        base::Unretained(interface_),
        &RgbkbdInterface::SetAnimationMode);

    signal_CapabilityUpdatedForTesting_ = itf->RegisterSignalOfType<SignalCapabilityUpdatedForTestingType>("CapabilityUpdatedForTesting");
  }

  // Signals that the RGB keyboard capability has been updated. This is only
  // used for tests.
  void SendCapabilityUpdatedForTestingSignal(
      uint32_t in_capability) {
    auto signal = signal_CapabilityUpdatedForTesting_.lock();
    if (signal)
      signal->Send(in_capability);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/Rgbkbd"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.Rgbkbd\">\n"
        "    <method name=\"GetRgbKeyboardCapabilities\">\n"
        "      <arg name=\"keyboard_capabilities\" type=\"u\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SetCapsLockState\">\n"
        "      <arg name=\"enabled\" type=\"b\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"SetStaticBackgroundColor\">\n"
        "      <arg name=\"r\" type=\"y\" direction=\"in\"/>\n"
        "      <arg name=\"g\" type=\"y\" direction=\"in\"/>\n"
        "      <arg name=\"b\" type=\"y\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"SetRainbowMode\">\n"
        "    </method>\n"
        "    <method name=\"SetTestingMode\">\n"
        "      <arg name=\"enable_testing\" type=\"b\" direction=\"in\"/>\n"
        "      <arg name=\"capability\" type=\"u\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"SetAnimationMode\">\n"
        "      <arg name=\"mode\" type=\"u\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <signal name=\"CapabilityUpdatedForTesting\">\n"
        "      <arg name=\"capability\" type=\"u\"/>\n"
        "    </signal>\n"
        "  </interface>\n";
  }

 private:
  using SignalCapabilityUpdatedForTestingType = brillo::dbus_utils::DBusSignal<
      uint32_t /*capability*/>;
  std::weak_ptr<SignalCapabilityUpdatedForTestingType> signal_CapabilityUpdatedForTesting_;

  RgbkbdInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_RGBKBD_OUT_DEFAULT_GEN_INCLUDE_RGBKBD_DBUS_ADAPTORS_ORG_CHROMIUM_RGBKBD_H
