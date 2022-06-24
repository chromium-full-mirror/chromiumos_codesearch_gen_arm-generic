// Automatic generation of D-Bus interfaces:
//  - org.chromium.Attestation
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_ATTESTATION_CLIENT_OUT_DEFAULT_GEN_INCLUDE_ATTESTATION_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_ATTESTATION_CLIENT_OUT_DEFAULT_GEN_INCLUDE_ATTESTATION_DBUS_PROXIES_H
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

// Abstract interface proxy for org::chromium::Attestation.
class AttestationProxyInterface {
 public:
  virtual ~AttestationProxyInterface() = default;

  virtual bool GetKeyInfo(
      const attestation::GetKeyInfoRequest& in_request,
      attestation::GetKeyInfoReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetKeyInfoAsync(
      const attestation::GetKeyInfoRequest& in_request,
      base::OnceCallback<void(const attestation::GetKeyInfoReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetEndorsementInfo(
      const attestation::GetEndorsementInfoRequest& in_request,
      attestation::GetEndorsementInfoReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetEndorsementInfoAsync(
      const attestation::GetEndorsementInfoRequest& in_request,
      base::OnceCallback<void(const attestation::GetEndorsementInfoReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetAttestationKeyInfo(
      const attestation::GetAttestationKeyInfoRequest& in_request,
      attestation::GetAttestationKeyInfoReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetAttestationKeyInfoAsync(
      const attestation::GetAttestationKeyInfoRequest& in_request,
      base::OnceCallback<void(const attestation::GetAttestationKeyInfoReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ActivateAttestationKey(
      const attestation::ActivateAttestationKeyRequest& in_request,
      attestation::ActivateAttestationKeyReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ActivateAttestationKeyAsync(
      const attestation::ActivateAttestationKeyRequest& in_request,
      base::OnceCallback<void(const attestation::ActivateAttestationKeyReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool CreateCertifiableKey(
      const attestation::CreateCertifiableKeyRequest& in_request,
      attestation::CreateCertifiableKeyReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void CreateCertifiableKeyAsync(
      const attestation::CreateCertifiableKeyRequest& in_request,
      base::OnceCallback<void(const attestation::CreateCertifiableKeyReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Decrypt(
      const attestation::DecryptRequest& in_request,
      attestation::DecryptReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DecryptAsync(
      const attestation::DecryptRequest& in_request,
      base::OnceCallback<void(const attestation::DecryptReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Sign(
      const attestation::SignRequest& in_request,
      attestation::SignReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SignAsync(
      const attestation::SignRequest& in_request,
      base::OnceCallback<void(const attestation::SignReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RegisterKeyWithChapsToken(
      const attestation::RegisterKeyWithChapsTokenRequest& in_request,
      attestation::RegisterKeyWithChapsTokenReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterKeyWithChapsTokenAsync(
      const attestation::RegisterKeyWithChapsTokenRequest& in_request,
      base::OnceCallback<void(const attestation::RegisterKeyWithChapsTokenReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetEnrollmentPreparations(
      const attestation::GetEnrollmentPreparationsRequest& in_request,
      attestation::GetEnrollmentPreparationsReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetEnrollmentPreparationsAsync(
      const attestation::GetEnrollmentPreparationsRequest& in_request,
      base::OnceCallback<void(const attestation::GetEnrollmentPreparationsReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetStatus(
      const attestation::GetStatusRequest& in_request,
      attestation::GetStatusReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetStatusAsync(
      const attestation::GetStatusRequest& in_request,
      base::OnceCallback<void(const attestation::GetStatusReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Verify(
      const attestation::VerifyRequest& in_request,
      attestation::VerifyReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void VerifyAsync(
      const attestation::VerifyRequest& in_request,
      base::OnceCallback<void(const attestation::VerifyReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool CreateEnrollRequest(
      const attestation::CreateEnrollRequestRequest& in_request,
      attestation::CreateEnrollRequestReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void CreateEnrollRequestAsync(
      const attestation::CreateEnrollRequestRequest& in_request,
      base::OnceCallback<void(const attestation::CreateEnrollRequestReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool FinishEnroll(
      const attestation::FinishEnrollRequest& in_request,
      attestation::FinishEnrollReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void FinishEnrollAsync(
      const attestation::FinishEnrollRequest& in_request,
      base::OnceCallback<void(const attestation::FinishEnrollReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool CreateCertificateRequest(
      const attestation::CreateCertificateRequestRequest& in_request,
      attestation::CreateCertificateRequestReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void CreateCertificateRequestAsync(
      const attestation::CreateCertificateRequestRequest& in_request,
      base::OnceCallback<void(const attestation::CreateCertificateRequestReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool FinishCertificateRequest(
      const attestation::FinishCertificateRequestRequest& in_request,
      attestation::FinishCertificateRequestReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void FinishCertificateRequestAsync(
      const attestation::FinishCertificateRequestRequest& in_request,
      base::OnceCallback<void(const attestation::FinishCertificateRequestReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Enroll(
      const attestation::EnrollRequest& in_request,
      attestation::EnrollReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void EnrollAsync(
      const attestation::EnrollRequest& in_request,
      base::OnceCallback<void(const attestation::EnrollReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetCertificate(
      const attestation::GetCertificateRequest& in_request,
      attestation::GetCertificateReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetCertificateAsync(
      const attestation::GetCertificateRequest& in_request,
      base::OnceCallback<void(const attestation::GetCertificateReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SignEnterpriseChallenge(
      const attestation::SignEnterpriseChallengeRequest& in_request,
      attestation::SignEnterpriseChallengeReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SignEnterpriseChallengeAsync(
      const attestation::SignEnterpriseChallengeRequest& in_request,
      base::OnceCallback<void(const attestation::SignEnterpriseChallengeReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SignSimpleChallenge(
      const attestation::SignSimpleChallengeRequest& in_request,
      attestation::SignSimpleChallengeReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SignSimpleChallengeAsync(
      const attestation::SignSimpleChallengeRequest& in_request,
      base::OnceCallback<void(const attestation::SignSimpleChallengeReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetKeyPayload(
      const attestation::SetKeyPayloadRequest& in_request,
      attestation::SetKeyPayloadReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetKeyPayloadAsync(
      const attestation::SetKeyPayloadRequest& in_request,
      base::OnceCallback<void(const attestation::SetKeyPayloadReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool DeleteKeys(
      const attestation::DeleteKeysRequest& in_request,
      attestation::DeleteKeysReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DeleteKeysAsync(
      const attestation::DeleteKeysRequest& in_request,
      base::OnceCallback<void(const attestation::DeleteKeysReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ResetIdentity(
      const attestation::ResetIdentityRequest& in_request,
      attestation::ResetIdentityReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ResetIdentityAsync(
      const attestation::ResetIdentityRequest& in_request,
      base::OnceCallback<void(const attestation::ResetIdentityReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetEnrollmentId(
      const attestation::GetEnrollmentIdRequest& in_request,
      attestation::GetEnrollmentIdReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetEnrollmentIdAsync(
      const attestation::GetEnrollmentIdRequest& in_request,
      base::OnceCallback<void(const attestation::GetEnrollmentIdReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetCertifiedNvIndex(
      const attestation::GetCertifiedNvIndexRequest& in_request,
      attestation::GetCertifiedNvIndexReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetCertifiedNvIndexAsync(
      const attestation::GetCertifiedNvIndexRequest& in_request,
      base::OnceCallback<void(const attestation::GetCertifiedNvIndexReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::Attestation.
class AttestationProxy final : public AttestationProxyInterface {
 public:
  AttestationProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  AttestationProxy(const AttestationProxy&) = delete;
  AttestationProxy& operator=(const AttestationProxy&) = delete;

  ~AttestationProxy() override {
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

  bool GetKeyInfo(
      const attestation::GetKeyInfoRequest& in_request,
      attestation::GetKeyInfoReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "GetKeyInfo",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetKeyInfoAsync(
      const attestation::GetKeyInfoRequest& in_request,
      base::OnceCallback<void(const attestation::GetKeyInfoReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "GetKeyInfo",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetEndorsementInfo(
      const attestation::GetEndorsementInfoRequest& in_request,
      attestation::GetEndorsementInfoReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "GetEndorsementInfo",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetEndorsementInfoAsync(
      const attestation::GetEndorsementInfoRequest& in_request,
      base::OnceCallback<void(const attestation::GetEndorsementInfoReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "GetEndorsementInfo",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetAttestationKeyInfo(
      const attestation::GetAttestationKeyInfoRequest& in_request,
      attestation::GetAttestationKeyInfoReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "GetAttestationKeyInfo",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetAttestationKeyInfoAsync(
      const attestation::GetAttestationKeyInfoRequest& in_request,
      base::OnceCallback<void(const attestation::GetAttestationKeyInfoReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "GetAttestationKeyInfo",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool ActivateAttestationKey(
      const attestation::ActivateAttestationKeyRequest& in_request,
      attestation::ActivateAttestationKeyReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "ActivateAttestationKey",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void ActivateAttestationKeyAsync(
      const attestation::ActivateAttestationKeyRequest& in_request,
      base::OnceCallback<void(const attestation::ActivateAttestationKeyReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "ActivateAttestationKey",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool CreateCertifiableKey(
      const attestation::CreateCertifiableKeyRequest& in_request,
      attestation::CreateCertifiableKeyReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "CreateCertifiableKey",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void CreateCertifiableKeyAsync(
      const attestation::CreateCertifiableKeyRequest& in_request,
      base::OnceCallback<void(const attestation::CreateCertifiableKeyReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "CreateCertifiableKey",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool Decrypt(
      const attestation::DecryptRequest& in_request,
      attestation::DecryptReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "Decrypt",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void DecryptAsync(
      const attestation::DecryptRequest& in_request,
      base::OnceCallback<void(const attestation::DecryptReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "Decrypt",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool Sign(
      const attestation::SignRequest& in_request,
      attestation::SignReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "Sign",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void SignAsync(
      const attestation::SignRequest& in_request,
      base::OnceCallback<void(const attestation::SignReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "Sign",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool RegisterKeyWithChapsToken(
      const attestation::RegisterKeyWithChapsTokenRequest& in_request,
      attestation::RegisterKeyWithChapsTokenReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "RegisterKeyWithChapsToken",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void RegisterKeyWithChapsTokenAsync(
      const attestation::RegisterKeyWithChapsTokenRequest& in_request,
      base::OnceCallback<void(const attestation::RegisterKeyWithChapsTokenReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "RegisterKeyWithChapsToken",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetEnrollmentPreparations(
      const attestation::GetEnrollmentPreparationsRequest& in_request,
      attestation::GetEnrollmentPreparationsReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "GetEnrollmentPreparations",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetEnrollmentPreparationsAsync(
      const attestation::GetEnrollmentPreparationsRequest& in_request,
      base::OnceCallback<void(const attestation::GetEnrollmentPreparationsReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "GetEnrollmentPreparations",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetStatus(
      const attestation::GetStatusRequest& in_request,
      attestation::GetStatusReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "GetStatus",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetStatusAsync(
      const attestation::GetStatusRequest& in_request,
      base::OnceCallback<void(const attestation::GetStatusReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "GetStatus",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool Verify(
      const attestation::VerifyRequest& in_request,
      attestation::VerifyReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "Verify",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void VerifyAsync(
      const attestation::VerifyRequest& in_request,
      base::OnceCallback<void(const attestation::VerifyReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "Verify",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool CreateEnrollRequest(
      const attestation::CreateEnrollRequestRequest& in_request,
      attestation::CreateEnrollRequestReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "CreateEnrollRequest",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void CreateEnrollRequestAsync(
      const attestation::CreateEnrollRequestRequest& in_request,
      base::OnceCallback<void(const attestation::CreateEnrollRequestReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "CreateEnrollRequest",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool FinishEnroll(
      const attestation::FinishEnrollRequest& in_request,
      attestation::FinishEnrollReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "FinishEnroll",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void FinishEnrollAsync(
      const attestation::FinishEnrollRequest& in_request,
      base::OnceCallback<void(const attestation::FinishEnrollReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "FinishEnroll",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool CreateCertificateRequest(
      const attestation::CreateCertificateRequestRequest& in_request,
      attestation::CreateCertificateRequestReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "CreateCertificateRequest",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void CreateCertificateRequestAsync(
      const attestation::CreateCertificateRequestRequest& in_request,
      base::OnceCallback<void(const attestation::CreateCertificateRequestReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "CreateCertificateRequest",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool FinishCertificateRequest(
      const attestation::FinishCertificateRequestRequest& in_request,
      attestation::FinishCertificateRequestReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "FinishCertificateRequest",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void FinishCertificateRequestAsync(
      const attestation::FinishCertificateRequestRequest& in_request,
      base::OnceCallback<void(const attestation::FinishCertificateRequestReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "FinishCertificateRequest",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool Enroll(
      const attestation::EnrollRequest& in_request,
      attestation::EnrollReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "Enroll",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void EnrollAsync(
      const attestation::EnrollRequest& in_request,
      base::OnceCallback<void(const attestation::EnrollReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "Enroll",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetCertificate(
      const attestation::GetCertificateRequest& in_request,
      attestation::GetCertificateReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "GetCertificate",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetCertificateAsync(
      const attestation::GetCertificateRequest& in_request,
      base::OnceCallback<void(const attestation::GetCertificateReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "GetCertificate",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool SignEnterpriseChallenge(
      const attestation::SignEnterpriseChallengeRequest& in_request,
      attestation::SignEnterpriseChallengeReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "SignEnterpriseChallenge",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void SignEnterpriseChallengeAsync(
      const attestation::SignEnterpriseChallengeRequest& in_request,
      base::OnceCallback<void(const attestation::SignEnterpriseChallengeReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "SignEnterpriseChallenge",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool SignSimpleChallenge(
      const attestation::SignSimpleChallengeRequest& in_request,
      attestation::SignSimpleChallengeReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "SignSimpleChallenge",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void SignSimpleChallengeAsync(
      const attestation::SignSimpleChallengeRequest& in_request,
      base::OnceCallback<void(const attestation::SignSimpleChallengeReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "SignSimpleChallenge",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool SetKeyPayload(
      const attestation::SetKeyPayloadRequest& in_request,
      attestation::SetKeyPayloadReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "SetKeyPayload",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void SetKeyPayloadAsync(
      const attestation::SetKeyPayloadRequest& in_request,
      base::OnceCallback<void(const attestation::SetKeyPayloadReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "SetKeyPayload",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool DeleteKeys(
      const attestation::DeleteKeysRequest& in_request,
      attestation::DeleteKeysReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "DeleteKeys",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void DeleteKeysAsync(
      const attestation::DeleteKeysRequest& in_request,
      base::OnceCallback<void(const attestation::DeleteKeysReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "DeleteKeys",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool ResetIdentity(
      const attestation::ResetIdentityRequest& in_request,
      attestation::ResetIdentityReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "ResetIdentity",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void ResetIdentityAsync(
      const attestation::ResetIdentityRequest& in_request,
      base::OnceCallback<void(const attestation::ResetIdentityReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "ResetIdentity",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetEnrollmentId(
      const attestation::GetEnrollmentIdRequest& in_request,
      attestation::GetEnrollmentIdReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "GetEnrollmentId",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetEnrollmentIdAsync(
      const attestation::GetEnrollmentIdRequest& in_request,
      base::OnceCallback<void(const attestation::GetEnrollmentIdReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "GetEnrollmentId",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetCertifiedNvIndex(
      const attestation::GetCertifiedNvIndexRequest& in_request,
      attestation::GetCertifiedNvIndexReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "GetCertifiedNvIndex",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetCertifiedNvIndexAsync(
      const attestation::GetCertifiedNvIndexRequest& in_request,
      base::OnceCallback<void(const attestation::GetCertifiedNvIndexReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Attestation",
        "GetCertifiedNvIndex",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.Attestation"};
  const dbus::ObjectPath object_path_{"/org/chromium/Attestation"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_ATTESTATION_CLIENT_OUT_DEFAULT_GEN_INCLUDE_ATTESTATION_DBUS_PROXIES_H
