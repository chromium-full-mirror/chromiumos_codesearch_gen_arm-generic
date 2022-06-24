// Automatic generation of D-Bus interfaces:
//  - org.chromium.ImageLoaderInterface
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_IMAGELOADER_OUT_DEFAULT_GEN_INCLUDE_IMAGELOADER_DBUS_ADAPTORS_ORG_CHROMIUM_IMAGELOADERINTERFACE_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_IMAGELOADER_OUT_DEFAULT_GEN_INCLUDE_IMAGELOADER_DBUS_ADAPTORS_ORG_CHROMIUM_IMAGELOADERINTERFACE_H
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

// Interface definition for org::chromium::ImageLoaderInterface.
class ImageLoaderInterfaceInterface {
 public:
  virtual ~ImageLoaderInterfaceInterface() = default;

  // Registers a component with ImageLoader. ImageLoader will verify
  // the integrity and Google signature of the component and, if and
  // only if valid, copy the component into its internal storage.
  virtual bool RegisterComponent(
      brillo::ErrorPtr* error,
      const std::string& in_name,
      const std::string& in_version,
      const std::string& in_component_folder_abs_path,
      bool* out_success) = 0;
  // Returns the currently registered version of the given component.
  virtual bool GetComponentVersion(
      brillo::ErrorPtr* error,
      const std::string& in_name,
      std::string* out_version) = 0;
  // Loads the component, if and only if the component verifies the
  // signature check, and returns the mount point.
  virtual bool LoadComponent(
      brillo::ErrorPtr* error,
      const std::string& in_name,
      std::string* out_mount_point) = 0;
  // Loads the component at the given path, if and only if the component
  // verifies the signature check, and returns the mount point.
  virtual bool LoadComponentAtPath(
      brillo::ErrorPtr* error,
      const std::string& in_name,
      const std::string& in_absolute_path,
      std::string* out_mount_point) = 0;
  // Loads a DLC module image.
  virtual bool LoadDlcImage(
      brillo::ErrorPtr* error,
      const std::string& in_id,
      const std::string& in_package,
      const std::string& in_a_or_b,
      std::string* out_mount_point) = 0;
  // Remove all versions of a component if removable.
  virtual bool RemoveComponent(
      brillo::ErrorPtr* error,
      const std::string& in_name,
      bool* out_success) = 0;
  // Get the metadata for a registered component.
  virtual bool GetComponentMetadata(
      brillo::ErrorPtr* error,
      const std::string& in_name,
      std::map<std::string, std::string>* out_metadata) = 0;
  // Unmount all mount points of a component.
  virtual bool UnmountComponent(
      brillo::ErrorPtr* error,
      const std::string& in_name,
      bool* out_success) = 0;
  // Unmounts a DLC image.
  virtual bool UnloadDlcImage(
      brillo::ErrorPtr* error,
      const std::string& in_id,
      const std::string& in_package,
      bool* out_success) = 0;
};

// Interface adaptor for org::chromium::ImageLoaderInterface.
class ImageLoaderInterfaceAdaptor {
 public:
  ImageLoaderInterfaceAdaptor(ImageLoaderInterfaceInterface* interface) : interface_(interface) {}
  ImageLoaderInterfaceAdaptor(const ImageLoaderInterfaceAdaptor&) = delete;
  ImageLoaderInterfaceAdaptor& operator=(const ImageLoaderInterfaceAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.ImageLoaderInterface");

    itf->AddSimpleMethodHandlerWithError(
        "RegisterComponent",
        base::Unretained(interface_),
        &ImageLoaderInterfaceInterface::RegisterComponent);
    itf->AddSimpleMethodHandlerWithError(
        "GetComponentVersion",
        base::Unretained(interface_),
        &ImageLoaderInterfaceInterface::GetComponentVersion);
    itf->AddSimpleMethodHandlerWithError(
        "LoadComponent",
        base::Unretained(interface_),
        &ImageLoaderInterfaceInterface::LoadComponent);
    itf->AddSimpleMethodHandlerWithError(
        "LoadComponentAtPath",
        base::Unretained(interface_),
        &ImageLoaderInterfaceInterface::LoadComponentAtPath);
    itf->AddSimpleMethodHandlerWithError(
        "LoadDlcImage",
        base::Unretained(interface_),
        &ImageLoaderInterfaceInterface::LoadDlcImage);
    itf->AddSimpleMethodHandlerWithError(
        "RemoveComponent",
        base::Unretained(interface_),
        &ImageLoaderInterfaceInterface::RemoveComponent);
    itf->AddSimpleMethodHandlerWithError(
        "GetComponentMetadata",
        base::Unretained(interface_),
        &ImageLoaderInterfaceInterface::GetComponentMetadata);
    itf->AddSimpleMethodHandlerWithError(
        "UnmountComponent",
        base::Unretained(interface_),
        &ImageLoaderInterfaceInterface::UnmountComponent);
    itf->AddSimpleMethodHandlerWithError(
        "UnloadDlcImage",
        base::Unretained(interface_),
        &ImageLoaderInterfaceInterface::UnloadDlcImage);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/ImageLoader"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.ImageLoaderInterface\">\n"
        "    <method name=\"RegisterComponent\">\n"
        "      <arg name=\"name\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"version\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"component_folder_abs_path\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"success\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetComponentVersion\">\n"
        "      <arg name=\"name\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"version\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"LoadComponent\">\n"
        "      <arg name=\"name\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"mount_point\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"LoadComponentAtPath\">\n"
        "      <arg name=\"name\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"absolute_path\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"mount_point\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"LoadDlcImage\">\n"
        "      <arg name=\"id\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"package\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"a_or_b\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"mount_point\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"RemoveComponent\">\n"
        "      <arg name=\"name\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"success\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetComponentMetadata\">\n"
        "      <arg name=\"name\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"metadata\" type=\"a{ss}\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"UnmountComponent\">\n"
        "      <arg name=\"name\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"success\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"UnloadDlcImage\">\n"
        "      <arg name=\"id\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"package\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"success\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "  </interface>\n";
  }

 private:
  ImageLoaderInterfaceInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_IMAGELOADER_OUT_DEFAULT_GEN_INCLUDE_IMAGELOADER_DBUS_ADAPTORS_ORG_CHROMIUM_IMAGELOADERINTERFACE_H
