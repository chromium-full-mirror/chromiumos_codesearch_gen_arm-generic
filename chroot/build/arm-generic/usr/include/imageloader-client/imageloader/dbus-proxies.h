// Automatic generation of D-Bus interfaces:
//  - org.chromium.ImageLoaderInterface
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_IMAGELOADER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_IMAGELOADER_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_IMAGELOADER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_IMAGELOADER_DBUS_PROXIES_H
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

// Abstract interface proxy for org::chromium::ImageLoaderInterface.
class ImageLoaderInterfaceProxyInterface {
 public:
  virtual ~ImageLoaderInterfaceProxyInterface() = default;

  // Registers a component with ImageLoader. ImageLoader will verify
  // the integrity and Google signature of the component and, if and
  // only if valid, copy the component into its internal storage.
  virtual bool RegisterComponent(
      const std::string& in_name,
      const std::string& in_version,
      const std::string& in_component_folder_abs_path,
      bool* out_success,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Registers a component with ImageLoader. ImageLoader will verify
  // the integrity and Google signature of the component and, if and
  // only if valid, copy the component into its internal storage.
  virtual void RegisterComponentAsync(
      const std::string& in_name,
      const std::string& in_version,
      const std::string& in_component_folder_abs_path,
      base::OnceCallback<void(bool /*success*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns the currently registered version of the given component.
  virtual bool GetComponentVersion(
      const std::string& in_name,
      std::string* out_version,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns the currently registered version of the given component.
  virtual void GetComponentVersionAsync(
      const std::string& in_name,
      base::OnceCallback<void(const std::string& /*version*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Loads the component, if and only if the component verifies the
  // signature check, and returns the mount point.
  virtual bool LoadComponent(
      const std::string& in_name,
      std::string* out_mount_point,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Loads the component, if and only if the component verifies the
  // signature check, and returns the mount point.
  virtual void LoadComponentAsync(
      const std::string& in_name,
      base::OnceCallback<void(const std::string& /*mount_point*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Loads the component at the given path, if and only if the component
  // verifies the signature check, and returns the mount point.
  virtual bool LoadComponentAtPath(
      const std::string& in_name,
      const std::string& in_absolute_path,
      std::string* out_mount_point,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Loads the component at the given path, if and only if the component
  // verifies the signature check, and returns the mount point.
  virtual void LoadComponentAtPathAsync(
      const std::string& in_name,
      const std::string& in_absolute_path,
      base::OnceCallback<void(const std::string& /*mount_point*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Loads a DLC module image.
  virtual bool LoadDlcImage(
      const std::string& in_id,
      const std::string& in_package,
      const std::string& in_a_or_b,
      std::string* out_mount_point,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Loads a DLC module image.
  virtual void LoadDlcImageAsync(
      const std::string& in_id,
      const std::string& in_package,
      const std::string& in_a_or_b,
      base::OnceCallback<void(const std::string& /*mount_point*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Remove all versions of a component if removable.
  virtual bool RemoveComponent(
      const std::string& in_name,
      bool* out_success,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Remove all versions of a component if removable.
  virtual void RemoveComponentAsync(
      const std::string& in_name,
      base::OnceCallback<void(bool /*success*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Get the metadata for a registered component.
  virtual bool GetComponentMetadata(
      const std::string& in_name,
      std::map<std::string, std::string>* out_metadata,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Get the metadata for a registered component.
  virtual void GetComponentMetadataAsync(
      const std::string& in_name,
      base::OnceCallback<void(const std::map<std::string, std::string>& /*metadata*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Unmount all mount points of a component.
  virtual bool UnmountComponent(
      const std::string& in_name,
      bool* out_success,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Unmount all mount points of a component.
  virtual void UnmountComponentAsync(
      const std::string& in_name,
      base::OnceCallback<void(bool /*success*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Unmounts a DLC image.
  virtual bool UnloadDlcImage(
      const std::string& in_id,
      const std::string& in_package,
      bool* out_success,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Unmounts a DLC image.
  virtual void UnloadDlcImageAsync(
      const std::string& in_id,
      const std::string& in_package,
      base::OnceCallback<void(bool /*success*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::ImageLoaderInterface.
class ImageLoaderInterfaceProxy final : public ImageLoaderInterfaceProxyInterface {
 public:
  ImageLoaderInterfaceProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  ImageLoaderInterfaceProxy(const ImageLoaderInterfaceProxy&) = delete;
  ImageLoaderInterfaceProxy& operator=(const ImageLoaderInterfaceProxy&) = delete;

  ~ImageLoaderInterfaceProxy() override {
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

  // Registers a component with ImageLoader. ImageLoader will verify
  // the integrity and Google signature of the component and, if and
  // only if valid, copy the component into its internal storage.
  bool RegisterComponent(
      const std::string& in_name,
      const std::string& in_version,
      const std::string& in_component_folder_abs_path,
      bool* out_success,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ImageLoaderInterface",
        "RegisterComponent",
        error,
        in_name,
        in_version,
        in_component_folder_abs_path);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_success);
  }

  // Registers a component with ImageLoader. ImageLoader will verify
  // the integrity and Google signature of the component and, if and
  // only if valid, copy the component into its internal storage.
  void RegisterComponentAsync(
      const std::string& in_name,
      const std::string& in_version,
      const std::string& in_component_folder_abs_path,
      base::OnceCallback<void(bool /*success*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ImageLoaderInterface",
        "RegisterComponent",
        std::move(success_callback),
        std::move(error_callback),
        in_name,
        in_version,
        in_component_folder_abs_path);
  }

  // Returns the currently registered version of the given component.
  bool GetComponentVersion(
      const std::string& in_name,
      std::string* out_version,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ImageLoaderInterface",
        "GetComponentVersion",
        error,
        in_name);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_version);
  }

  // Returns the currently registered version of the given component.
  void GetComponentVersionAsync(
      const std::string& in_name,
      base::OnceCallback<void(const std::string& /*version*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ImageLoaderInterface",
        "GetComponentVersion",
        std::move(success_callback),
        std::move(error_callback),
        in_name);
  }

  // Loads the component, if and only if the component verifies the
  // signature check, and returns the mount point.
  bool LoadComponent(
      const std::string& in_name,
      std::string* out_mount_point,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ImageLoaderInterface",
        "LoadComponent",
        error,
        in_name);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_mount_point);
  }

  // Loads the component, if and only if the component verifies the
  // signature check, and returns the mount point.
  void LoadComponentAsync(
      const std::string& in_name,
      base::OnceCallback<void(const std::string& /*mount_point*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ImageLoaderInterface",
        "LoadComponent",
        std::move(success_callback),
        std::move(error_callback),
        in_name);
  }

  // Loads the component at the given path, if and only if the component
  // verifies the signature check, and returns the mount point.
  bool LoadComponentAtPath(
      const std::string& in_name,
      const std::string& in_absolute_path,
      std::string* out_mount_point,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ImageLoaderInterface",
        "LoadComponentAtPath",
        error,
        in_name,
        in_absolute_path);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_mount_point);
  }

  // Loads the component at the given path, if and only if the component
  // verifies the signature check, and returns the mount point.
  void LoadComponentAtPathAsync(
      const std::string& in_name,
      const std::string& in_absolute_path,
      base::OnceCallback<void(const std::string& /*mount_point*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ImageLoaderInterface",
        "LoadComponentAtPath",
        std::move(success_callback),
        std::move(error_callback),
        in_name,
        in_absolute_path);
  }

  // Loads a DLC module image.
  bool LoadDlcImage(
      const std::string& in_id,
      const std::string& in_package,
      const std::string& in_a_or_b,
      std::string* out_mount_point,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ImageLoaderInterface",
        "LoadDlcImage",
        error,
        in_id,
        in_package,
        in_a_or_b);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_mount_point);
  }

  // Loads a DLC module image.
  void LoadDlcImageAsync(
      const std::string& in_id,
      const std::string& in_package,
      const std::string& in_a_or_b,
      base::OnceCallback<void(const std::string& /*mount_point*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ImageLoaderInterface",
        "LoadDlcImage",
        std::move(success_callback),
        std::move(error_callback),
        in_id,
        in_package,
        in_a_or_b);
  }

  // Remove all versions of a component if removable.
  bool RemoveComponent(
      const std::string& in_name,
      bool* out_success,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ImageLoaderInterface",
        "RemoveComponent",
        error,
        in_name);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_success);
  }

  // Remove all versions of a component if removable.
  void RemoveComponentAsync(
      const std::string& in_name,
      base::OnceCallback<void(bool /*success*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ImageLoaderInterface",
        "RemoveComponent",
        std::move(success_callback),
        std::move(error_callback),
        in_name);
  }

  // Get the metadata for a registered component.
  bool GetComponentMetadata(
      const std::string& in_name,
      std::map<std::string, std::string>* out_metadata,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ImageLoaderInterface",
        "GetComponentMetadata",
        error,
        in_name);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_metadata);
  }

  // Get the metadata for a registered component.
  void GetComponentMetadataAsync(
      const std::string& in_name,
      base::OnceCallback<void(const std::map<std::string, std::string>& /*metadata*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ImageLoaderInterface",
        "GetComponentMetadata",
        std::move(success_callback),
        std::move(error_callback),
        in_name);
  }

  // Unmount all mount points of a component.
  bool UnmountComponent(
      const std::string& in_name,
      bool* out_success,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ImageLoaderInterface",
        "UnmountComponent",
        error,
        in_name);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_success);
  }

  // Unmount all mount points of a component.
  void UnmountComponentAsync(
      const std::string& in_name,
      base::OnceCallback<void(bool /*success*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ImageLoaderInterface",
        "UnmountComponent",
        std::move(success_callback),
        std::move(error_callback),
        in_name);
  }

  // Unmounts a DLC image.
  bool UnloadDlcImage(
      const std::string& in_id,
      const std::string& in_package,
      bool* out_success,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ImageLoaderInterface",
        "UnloadDlcImage",
        error,
        in_id,
        in_package);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_success);
  }

  // Unmounts a DLC image.
  void UnloadDlcImageAsync(
      const std::string& in_id,
      const std::string& in_package,
      base::OnceCallback<void(bool /*success*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ImageLoaderInterface",
        "UnloadDlcImage",
        std::move(success_callback),
        std::move(error_callback),
        in_id,
        in_package);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.ImageLoader"};
  const dbus::ObjectPath object_path_{"/org/chromium/ImageLoader"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_IMAGELOADER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_IMAGELOADER_DBUS_PROXIES_H
