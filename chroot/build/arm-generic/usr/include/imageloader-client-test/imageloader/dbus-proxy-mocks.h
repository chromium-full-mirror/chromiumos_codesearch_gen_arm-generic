// Automatic generation of D-Bus interface mock proxies for:
//  - org.chromium.ImageLoaderInterface
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_IMAGELOADER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_IMAGELOADER_DBUS_PROXY_MOCKS_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_IMAGELOADER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_IMAGELOADER_DBUS_PROXY_MOCKS_H
#include <string>
#include <vector>

#include <base/callback_forward.h>
#include <base/logging.h>
#include <brillo/any.h>
#include <brillo/errors/error.h>
#include <brillo/variant_dictionary.h>
#include <gmock/gmock.h>

#include "imageloader/dbus-proxies.h"

namespace org {
namespace chromium {

// Mock object for ImageLoaderInterfaceProxyInterface.
class ImageLoaderInterfaceProxyMock : public ImageLoaderInterfaceProxyInterface {
 public:
  ImageLoaderInterfaceProxyMock() = default;
  ImageLoaderInterfaceProxyMock(const ImageLoaderInterfaceProxyMock&) = delete;
  ImageLoaderInterfaceProxyMock& operator=(const ImageLoaderInterfaceProxyMock&) = delete;

  MOCK_METHOD6(RegisterComponent,
               bool(const std::string& /*in_name*/,
                    const std::string& /*in_version*/,
                    const std::string& /*in_component_folder_abs_path*/,
                    bool* /*out_success*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(RegisterComponentAsync,
               void(const std::string& /*in_name*/,
                    const std::string& /*in_version*/,
                    const std::string& /*in_component_folder_abs_path*/,
                    base::OnceCallback<void(bool /*success*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetComponentVersion,
               bool(const std::string& /*in_name*/,
                    std::string* /*out_version*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetComponentVersionAsync,
               void(const std::string& /*in_name*/,
                    base::OnceCallback<void(const std::string& /*version*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(LoadComponent,
               bool(const std::string& /*in_name*/,
                    std::string* /*out_mount_point*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(LoadComponentAsync,
               void(const std::string& /*in_name*/,
                    base::OnceCallback<void(const std::string& /*mount_point*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(LoadComponentAtPath,
               bool(const std::string& /*in_name*/,
                    const std::string& /*in_absolute_path*/,
                    std::string* /*out_mount_point*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(LoadComponentAtPathAsync,
               void(const std::string& /*in_name*/,
                    const std::string& /*in_absolute_path*/,
                    base::OnceCallback<void(const std::string& /*mount_point*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(LoadDlcImage,
               bool(const std::string& /*in_id*/,
                    const std::string& /*in_package*/,
                    const std::string& /*in_a_or_b*/,
                    std::string* /*out_mount_point*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(LoadDlcImageAsync,
               void(const std::string& /*in_id*/,
                    const std::string& /*in_package*/,
                    const std::string& /*in_a_or_b*/,
                    base::OnceCallback<void(const std::string& /*mount_point*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RemoveComponent,
               bool(const std::string& /*in_name*/,
                    bool* /*out_success*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RemoveComponentAsync,
               void(const std::string& /*in_name*/,
                    base::OnceCallback<void(bool /*success*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetComponentMetadata,
               bool(const std::string& /*in_name*/,
                    std::map<std::string, std::string>* /*out_metadata*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetComponentMetadataAsync,
               void(const std::string& /*in_name*/,
                    base::OnceCallback<void(const std::map<std::string, std::string>& /*metadata*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(UnmountComponent,
               bool(const std::string& /*in_name*/,
                    bool* /*out_success*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(UnmountComponentAsync,
               void(const std::string& /*in_name*/,
                    base::OnceCallback<void(bool /*success*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(UnloadDlcImage,
               bool(const std::string& /*in_id*/,
                    const std::string& /*in_package*/,
                    bool* /*out_success*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(UnloadDlcImageAsync,
               void(const std::string& /*in_id*/,
                    const std::string& /*in_package*/,
                    base::OnceCallback<void(bool /*success*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_IMAGELOADER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_IMAGELOADER_DBUS_PROXY_MOCKS_H
