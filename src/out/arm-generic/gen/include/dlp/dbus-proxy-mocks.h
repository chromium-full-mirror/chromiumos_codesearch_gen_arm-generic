// Automatic generation of D-Bus interface mock proxies for:
//  - org.chromium.DlpFilesPolicyService
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DLP_OUT_DEFAULT_GEN_INCLUDE_DLP_DBUS_PROXY_MOCKS_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DLP_OUT_DEFAULT_GEN_INCLUDE_DLP_DBUS_PROXY_MOCKS_H
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

// Mock object for DlpFilesPolicyServiceProxyInterface.
class DlpFilesPolicyServiceProxyMock : public DlpFilesPolicyServiceProxyInterface {
 public:
  DlpFilesPolicyServiceProxyMock() = default;
  DlpFilesPolicyServiceProxyMock(const DlpFilesPolicyServiceProxyMock&) = delete;
  DlpFilesPolicyServiceProxyMock& operator=(const DlpFilesPolicyServiceProxyMock&) = delete;

  MOCK_METHOD4(IsRestricted,
               bool(const std::vector<uint8_t>& /*in_request*/,
                    std::vector<uint8_t>* /*out_response*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(IsRestrictedAsync,
               void(const std::vector<uint8_t>& /*in_request*/,
                    base::OnceCallback<void(const std::vector<uint8_t>& /*response*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(IsDlpPolicyMatched,
               bool(const std::vector<uint8_t>& /*in_request*/,
                    std::vector<uint8_t>* /*out_response*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(IsDlpPolicyMatchedAsync,
               void(const std::vector<uint8_t>& /*in_request*/,
                    base::OnceCallback<void(const std::vector<uint8_t>& /*response*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(IsFilesTransferRestricted,
               bool(const std::vector<uint8_t>& /*in_request*/,
                    std::vector<uint8_t>* /*out_response*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(IsFilesTransferRestrictedAsync,
               void(const std::vector<uint8_t>& /*in_request*/,
                    base::OnceCallback<void(const std::vector<uint8_t>& /*response*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DLP_OUT_DEFAULT_GEN_INCLUDE_DLP_DBUS_PROXY_MOCKS_H
