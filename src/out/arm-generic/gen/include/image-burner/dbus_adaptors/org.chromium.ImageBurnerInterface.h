// Automatic generation of D-Bus interfaces:
//  - org.chromium.ImageBurnerInterface
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_TMP_PORTAGE_CHROMEOS_BASE_CHROMEOS_IMAGEBURNER_9999_WORK_BUILD_OUT_DEFAULT_GEN_INCLUDE_IMAGE_BURNER_DBUS_ADAPTORS_ORG_CHROMIUM_IMAGEBURNERINTERFACE_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_TMP_PORTAGE_CHROMEOS_BASE_CHROMEOS_IMAGEBURNER_9999_WORK_BUILD_OUT_DEFAULT_GEN_INCLUDE_IMAGE_BURNER_DBUS_ADAPTORS_ORG_CHROMIUM_IMAGEBURNERINTERFACE_H
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

// Interface definition for org::chromium::ImageBurnerInterface.
class ImageBurnerInterfaceInterface {
 public:
  virtual ~ImageBurnerInterfaceInterface() = default;

  virtual bool BurnImage(
      brillo::ErrorPtr* error,
      const std::string& in_from_path,
      const std::string& in_to_path) = 0;
};

// Interface adaptor for org::chromium::ImageBurnerInterface.
class ImageBurnerInterfaceAdaptor {
 public:
  ImageBurnerInterfaceAdaptor(ImageBurnerInterfaceInterface* interface) : interface_(interface) {}
  ImageBurnerInterfaceAdaptor(const ImageBurnerInterfaceAdaptor&) = delete;
  ImageBurnerInterfaceAdaptor& operator=(const ImageBurnerInterfaceAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.ImageBurnerInterface");

    itf->AddSimpleMethodHandlerWithError(
        "BurnImage",
        base::Unretained(interface_),
        &ImageBurnerInterfaceInterface::BurnImage);

    signal_burn_finished_ = itf->RegisterSignalOfType<Signalburn_finishedType>("burn_finished");
    signal_burn_progress_update_ = itf->RegisterSignalOfType<Signalburn_progress_updateType>("burn_progress_update");
  }

  void Sendburn_finishedSignal(
      const std::string& in_target_path,
      bool in_success,
      const std::string& in_error) {
    auto signal = signal_burn_finished_.lock();
    if (signal)
      signal->Send(in_target_path, in_success, in_error);
  }
  void Sendburn_progress_updateSignal(
      const std::string& in_target_path,
      int64_t in_amount_burnt,
      int64_t in_total_size) {
    auto signal = signal_burn_progress_update_.lock();
    if (signal)
      signal->Send(in_target_path, in_amount_burnt, in_total_size);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.ImageBurnerInterface\">\n"
        "    <method name=\"BurnImage\">\n"
        "      <arg name=\"from_path\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"to_path\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <signal name=\"burn_finished\">\n"
        "      <arg name=\"target_path\" type=\"s\"/>\n"
        "      <arg name=\"success\" type=\"b\"/>\n"
        "      <arg name=\"error\" type=\"s\"/>\n"
        "    </signal>\n"
        "    <signal name=\"burn_progress_update\">\n"
        "      <arg name=\"target_path\" type=\"s\"/>\n"
        "      <arg name=\"amount_burnt\" type=\"x\"/>\n"
        "      <arg name=\"total_size\" type=\"x\"/>\n"
        "    </signal>\n"
        "  </interface>\n";
  }

 private:
  using Signalburn_finishedType = brillo::dbus_utils::DBusSignal<
      std::string /*target_path*/,
      bool /*success*/,
      std::string /*error*/>;
  std::weak_ptr<Signalburn_finishedType> signal_burn_finished_;

  using Signalburn_progress_updateType = brillo::dbus_utils::DBusSignal<
      std::string /*target_path*/,
      int64_t /*amount_burnt*/,
      int64_t /*total_size*/>;
  std::weak_ptr<Signalburn_progress_updateType> signal_burn_progress_update_;

  ImageBurnerInterfaceInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_TMP_PORTAGE_CHROMEOS_BASE_CHROMEOS_IMAGEBURNER_9999_WORK_BUILD_OUT_DEFAULT_GEN_INCLUDE_IMAGE_BURNER_DBUS_ADAPTORS_ORG_CHROMIUM_IMAGEBURNERINTERFACE_H
