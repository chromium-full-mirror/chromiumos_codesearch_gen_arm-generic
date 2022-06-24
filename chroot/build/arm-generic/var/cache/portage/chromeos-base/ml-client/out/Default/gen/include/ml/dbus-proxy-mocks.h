// Automatic generation of D-Bus interface mock proxies for:
//  - org.chromium.MachineLearning.AdaptiveCharging
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_ML_CLIENT_OUT_DEFAULT_GEN_INCLUDE_ML_DBUS_PROXY_MOCKS_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_ML_CLIENT_OUT_DEFAULT_GEN_INCLUDE_ML_DBUS_PROXY_MOCKS_H
#include <string>
#include <vector>

#include <base/callback_forward.h>
#include <base/logging.h>
#include <brillo/any.h>
#include <brillo/errors/error.h>
#include <brillo/variant_dictionary.h>
#include <gmock/gmock.h>

#include "ml/dbus-proxies.h"

namespace org {
namespace chromium {
namespace MachineLearning {

// Mock object for AdaptiveChargingProxyInterface.
class AdaptiveChargingProxyMock : public AdaptiveChargingProxyInterface {
 public:
  AdaptiveChargingProxyMock() = default;
  AdaptiveChargingProxyMock(const AdaptiveChargingProxyMock&) = delete;
  AdaptiveChargingProxyMock& operator=(const AdaptiveChargingProxyMock&) = delete;

  MOCK_METHOD5(RequestAdaptiveChargingDecision,
               bool(const std::vector<uint8_t>& /*in_serialized_example_proto*/,
                    bool* /*out_status*/,
                    std::vector<double>* /*out_result*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RequestAdaptiveChargingDecisionAsync,
               void(const std::vector<uint8_t>& /*in_serialized_example_proto*/,
                    base::OnceCallback<void(bool /*status*/, const std::vector<double>& /*result*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace MachineLearning
}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_ML_CLIENT_OUT_DEFAULT_GEN_INCLUDE_ML_DBUS_PROXY_MOCKS_H
