// Automatic generation of D-Bus interfaces:
//  - org.chromium.CryptohomeKeyDelegateInterface
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CRYPTOHOME_OUT_DEFAULT_GEN_INCLUDE_CRYPTOHOME_KEY_DELEGATE_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CRYPTOHOME_OUT_DEFAULT_GEN_INCLUDE_CRYPTOHOME_KEY_DELEGATE_DBUS_PROXIES_H
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

// Abstract interface proxy for org::chromium::CryptohomeKeyDelegateInterface.
class CryptohomeKeyDelegateInterfaceProxyInterface {
 public:
  virtual ~CryptohomeKeyDelegateInterfaceProxyInterface() = default;

  virtual bool ChallengeKey(
      const std::vector<uint8_t>& in_account_id,
      const std::vector<uint8_t>& in_challenge_request,
      std::vector<uint8_t>* out_challenge_response,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ChallengeKeyAsync(
      const std::vector<uint8_t>& in_account_id,
      const std::vector<uint8_t>& in_challenge_request,
      base::OnceCallback<void(const std::vector<uint8_t>& /*challenge_response*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool FidoMakeCredential(
      const std::string& in_client_data_json,
      const std::vector<uint8_t>& in_fido_create_credential_request,
      std::vector<uint8_t>* out_fido_create_credential_response,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void FidoMakeCredentialAsync(
      const std::string& in_client_data_json,
      const std::vector<uint8_t>& in_fido_create_credential_request,
      base::OnceCallback<void(const std::vector<uint8_t>& /*fido_create_credential_response*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool FidoGetAssertion(
      const std::string& in_client_data_json,
      const std::vector<uint8_t>& in_fido_get_assertion_request,
      std::vector<uint8_t>* out_fido_get_assertion_response,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void FidoGetAssertionAsync(
      const std::string& in_client_data_json,
      const std::vector<uint8_t>& in_fido_get_assertion_request,
      base::OnceCallback<void(const std::vector<uint8_t>& /*fido_get_assertion_response*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::CryptohomeKeyDelegateInterface.
class CryptohomeKeyDelegateInterfaceProxy final : public CryptohomeKeyDelegateInterfaceProxyInterface {
 public:
  CryptohomeKeyDelegateInterfaceProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name) :
          bus_{bus},
          service_name_{service_name},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  CryptohomeKeyDelegateInterfaceProxy(const CryptohomeKeyDelegateInterfaceProxy&) = delete;
  CryptohomeKeyDelegateInterfaceProxy& operator=(const CryptohomeKeyDelegateInterfaceProxy&) = delete;

  ~CryptohomeKeyDelegateInterfaceProxy() override {
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

  bool ChallengeKey(
      const std::vector<uint8_t>& in_account_id,
      const std::vector<uint8_t>& in_challenge_request,
      std::vector<uint8_t>* out_challenge_response,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomeKeyDelegateInterface",
        "ChallengeKey",
        error,
        in_account_id,
        in_challenge_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_challenge_response);
  }

  void ChallengeKeyAsync(
      const std::vector<uint8_t>& in_account_id,
      const std::vector<uint8_t>& in_challenge_request,
      base::OnceCallback<void(const std::vector<uint8_t>& /*challenge_response*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomeKeyDelegateInterface",
        "ChallengeKey",
        std::move(success_callback),
        std::move(error_callback),
        in_account_id,
        in_challenge_request);
  }

  bool FidoMakeCredential(
      const std::string& in_client_data_json,
      const std::vector<uint8_t>& in_fido_create_credential_request,
      std::vector<uint8_t>* out_fido_create_credential_response,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomeKeyDelegateInterface",
        "FidoMakeCredential",
        error,
        in_client_data_json,
        in_fido_create_credential_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_fido_create_credential_response);
  }

  void FidoMakeCredentialAsync(
      const std::string& in_client_data_json,
      const std::vector<uint8_t>& in_fido_create_credential_request,
      base::OnceCallback<void(const std::vector<uint8_t>& /*fido_create_credential_response*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomeKeyDelegateInterface",
        "FidoMakeCredential",
        std::move(success_callback),
        std::move(error_callback),
        in_client_data_json,
        in_fido_create_credential_request);
  }

  bool FidoGetAssertion(
      const std::string& in_client_data_json,
      const std::vector<uint8_t>& in_fido_get_assertion_request,
      std::vector<uint8_t>* out_fido_get_assertion_response,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomeKeyDelegateInterface",
        "FidoGetAssertion",
        error,
        in_client_data_json,
        in_fido_get_assertion_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_fido_get_assertion_response);
  }

  void FidoGetAssertionAsync(
      const std::string& in_client_data_json,
      const std::vector<uint8_t>& in_fido_get_assertion_request,
      base::OnceCallback<void(const std::vector<uint8_t>& /*fido_get_assertion_response*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CryptohomeKeyDelegateInterface",
        "FidoGetAssertion",
        std::move(success_callback),
        std::move(error_callback),
        in_client_data_json,
        in_fido_get_assertion_request);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  std::string service_name_;
  const dbus::ObjectPath object_path_{"/org/chromium/CryptohomeKeyDelegate"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CRYPTOHOME_OUT_DEFAULT_GEN_INCLUDE_CRYPTOHOME_KEY_DELEGATE_DBUS_PROXIES_H
