// Automatic generation of D-Bus interface mock proxies for:
//  - org.chromium.BootLockboxInterface
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_BOOTLOCKBOX_CLIENT_OUT_DEFAULT_GEN_INCLUDE_BOOTLOCKBOX_DBUS_PROXY_MOCKS_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_BOOTLOCKBOX_CLIENT_OUT_DEFAULT_GEN_INCLUDE_BOOTLOCKBOX_DBUS_PROXY_MOCKS_H
#include <string>
#include <vector>

#include <base/callback_forward.h>
#include <base/logging.h>
#include <brillo/any.h>
#include <brillo/errors/error.h>
#include <brillo/variant_dictionary.h>
#include <gmock/gmock.h>

#include "bootlockbox/dbus-proxies.h"

namespace org {
namespace chromium {

// Mock object for BootLockboxInterfaceProxyInterface.
class BootLockboxInterfaceProxyMock : public BootLockboxInterfaceProxyInterface {
 public:
  BootLockboxInterfaceProxyMock() = default;
  BootLockboxInterfaceProxyMock(const BootLockboxInterfaceProxyMock&) = delete;
  BootLockboxInterfaceProxyMock& operator=(const BootLockboxInterfaceProxyMock&) = delete;

  MOCK_METHOD4(StoreBootLockbox,
               bool(const cryptohome::StoreBootLockboxRequest& /*in_request*/,
                    cryptohome::StoreBootLockboxReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(StoreBootLockboxAsync,
               void(const cryptohome::StoreBootLockboxRequest& /*in_request*/,
                    base::OnceCallback<void(const cryptohome::StoreBootLockboxReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ReadBootLockbox,
               bool(const cryptohome::ReadBootLockboxRequest& /*in_request*/,
                    cryptohome::ReadBootLockboxReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ReadBootLockboxAsync,
               void(const cryptohome::ReadBootLockboxRequest& /*in_request*/,
                    base::OnceCallback<void(const cryptohome::ReadBootLockboxReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(FinalizeBootLockbox,
               bool(const cryptohome::FinalizeNVRamBootLockboxRequest& /*in_request*/,
                    cryptohome::FinalizeBootLockboxReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(FinalizeBootLockboxAsync,
               void(const cryptohome::FinalizeNVRamBootLockboxRequest& /*in_request*/,
                    base::OnceCallback<void(const cryptohome::FinalizeBootLockboxReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_BOOTLOCKBOX_CLIENT_OUT_DEFAULT_GEN_INCLUDE_BOOTLOCKBOX_DBUS_PROXY_MOCKS_H
