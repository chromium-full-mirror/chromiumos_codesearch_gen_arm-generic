// Automatic generation of D-Bus interface mock proxies for:
//  - org.chromium.KioskAppServiceInterface
#ifndef ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_UPDATE_ENGINE_OUT_DEFAULT_GEN_INCLUDE_KIOSK_APP_DBUS_PROXY_MOCKS_H
#define ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_UPDATE_ENGINE_OUT_DEFAULT_GEN_INCLUDE_KIOSK_APP_DBUS_PROXY_MOCKS_H
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

// Mock object for KioskAppServiceInterfaceProxyInterface.
class KioskAppServiceInterfaceProxyMock : public KioskAppServiceInterfaceProxyInterface {
 public:
  KioskAppServiceInterfaceProxyMock() = default;
  KioskAppServiceInterfaceProxyMock(const KioskAppServiceInterfaceProxyMock&) = delete;
  KioskAppServiceInterfaceProxyMock& operator=(const KioskAppServiceInterfaceProxyMock&) = delete;

  MOCK_METHOD3(GetRequiredPlatformVersion,
               bool(std::string* /*out_required_platform_version*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetRequiredPlatformVersionAsync,
               void(base::OnceCallback<void(const std::string& /*required_platform_version*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_UPDATE_ENGINE_OUT_DEFAULT_GEN_INCLUDE_KIOSK_APP_DBUS_PROXY_MOCKS_H
