// Automatic generation of D-Bus interface mock proxies for:
//  - org.chromium.RuntimeProbe
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_RUNTIME_PROBE_CLIENT_OUT_DEFAULT_GEN_INCLUDE_RUNTIME_PROBE_DBUS_PROXY_MOCKS_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_RUNTIME_PROBE_CLIENT_OUT_DEFAULT_GEN_INCLUDE_RUNTIME_PROBE_DBUS_PROXY_MOCKS_H
#include <string>
#include <vector>

#include <base/callback_forward.h>
#include <base/logging.h>
#include <brillo/any.h>
#include <brillo/errors/error.h>
#include <brillo/variant_dictionary.h>
#include <gmock/gmock.h>

#include "runtime_probe/dbus-proxies.h"

namespace org {
namespace chromium {

// Mock object for RuntimeProbeProxyInterface.
class RuntimeProbeProxyMock : public RuntimeProbeProxyInterface {
 public:
  RuntimeProbeProxyMock() = default;
  RuntimeProbeProxyMock(const RuntimeProbeProxyMock&) = delete;
  RuntimeProbeProxyMock& operator=(const RuntimeProbeProxyMock&) = delete;

  MOCK_METHOD4(ProbeCategories,
               bool(const runtime_probe::ProbeRequest& /*in_request*/,
                    runtime_probe::ProbeResult* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ProbeCategoriesAsync,
               void(const runtime_probe::ProbeRequest& /*in_request*/,
                    base::OnceCallback<void(const runtime_probe::ProbeResult& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetKnownComponents,
               bool(const runtime_probe::GetKnownComponentsRequest& /*in_request*/,
                    runtime_probe::GetKnownComponentsResult* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetKnownComponentsAsync,
               void(const runtime_probe::GetKnownComponentsRequest& /*in_request*/,
                    base::OnceCallback<void(const runtime_probe::GetKnownComponentsResult& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_RUNTIME_PROBE_CLIENT_OUT_DEFAULT_GEN_INCLUDE_RUNTIME_PROBE_DBUS_PROXY_MOCKS_H
