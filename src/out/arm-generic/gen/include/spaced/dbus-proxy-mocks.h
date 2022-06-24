// Automatic generation of D-Bus interface mock proxies for:
//  - org.chromium.Spaced
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SPACED_OUT_DEFAULT_GEN_INCLUDE_SPACED_DBUS_PROXY_MOCKS_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SPACED_OUT_DEFAULT_GEN_INCLUDE_SPACED_DBUS_PROXY_MOCKS_H
#include <string>
#include <vector>

#include <base/callback_forward.h>
#include <base/logging.h>
#include <brillo/any.h>
#include <brillo/errors/error.h>
#include <brillo/variant_dictionary.h>
#include <gmock/gmock.h>

#include "spaced/dbus-proxies.h"

namespace org {
namespace chromium {

// Mock object for SpacedProxyInterface.
class SpacedProxyMock : public SpacedProxyInterface {
 public:
  SpacedProxyMock() = default;
  SpacedProxyMock(const SpacedProxyMock&) = delete;
  SpacedProxyMock& operator=(const SpacedProxyMock&) = delete;

  MOCK_METHOD4(GetFreeDiskSpace,
               bool(const std::string& /*in_path*/,
                    int64_t* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetFreeDiskSpaceAsync,
               void(const std::string& /*in_path*/,
                    base::OnceCallback<void(int64_t /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetTotalDiskSpace,
               bool(const std::string& /*in_path*/,
                    int64_t* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetTotalDiskSpaceAsync,
               void(const std::string& /*in_path*/,
                    base::OnceCallback<void(int64_t /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetRootDeviceSize,
               bool(int64_t* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetRootDeviceSizeAsync,
               void(base::OnceCallback<void(int64_t /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SPACED_OUT_DEFAULT_GEN_INCLUDE_SPACED_DBUS_PROXY_MOCKS_H
