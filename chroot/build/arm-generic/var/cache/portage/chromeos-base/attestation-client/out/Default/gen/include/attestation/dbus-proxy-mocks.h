// Automatic generation of D-Bus interface mock proxies for:
//  - org.chromium.Attestation
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_ATTESTATION_CLIENT_OUT_DEFAULT_GEN_INCLUDE_ATTESTATION_DBUS_PROXY_MOCKS_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_ATTESTATION_CLIENT_OUT_DEFAULT_GEN_INCLUDE_ATTESTATION_DBUS_PROXY_MOCKS_H
#include <string>
#include <vector>

#include <base/callback_forward.h>
#include <base/logging.h>
#include <brillo/any.h>
#include <brillo/errors/error.h>
#include <brillo/variant_dictionary.h>
#include <gmock/gmock.h>

#include "attestation/dbus-proxies.h"

namespace org {
namespace chromium {

// Mock object for AttestationProxyInterface.
class AttestationProxyMock : public AttestationProxyInterface {
 public:
  AttestationProxyMock() = default;
  AttestationProxyMock(const AttestationProxyMock&) = delete;
  AttestationProxyMock& operator=(const AttestationProxyMock&) = delete;

  MOCK_METHOD4(GetKeyInfo,
               bool(const attestation::GetKeyInfoRequest& /*in_request*/,
                    attestation::GetKeyInfoReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetKeyInfoAsync,
               void(const attestation::GetKeyInfoRequest& /*in_request*/,
                    base::OnceCallback<void(const attestation::GetKeyInfoReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetEndorsementInfo,
               bool(const attestation::GetEndorsementInfoRequest& /*in_request*/,
                    attestation::GetEndorsementInfoReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetEndorsementInfoAsync,
               void(const attestation::GetEndorsementInfoRequest& /*in_request*/,
                    base::OnceCallback<void(const attestation::GetEndorsementInfoReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetAttestationKeyInfo,
               bool(const attestation::GetAttestationKeyInfoRequest& /*in_request*/,
                    attestation::GetAttestationKeyInfoReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetAttestationKeyInfoAsync,
               void(const attestation::GetAttestationKeyInfoRequest& /*in_request*/,
                    base::OnceCallback<void(const attestation::GetAttestationKeyInfoReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ActivateAttestationKey,
               bool(const attestation::ActivateAttestationKeyRequest& /*in_request*/,
                    attestation::ActivateAttestationKeyReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ActivateAttestationKeyAsync,
               void(const attestation::ActivateAttestationKeyRequest& /*in_request*/,
                    base::OnceCallback<void(const attestation::ActivateAttestationKeyReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(CreateCertifiableKey,
               bool(const attestation::CreateCertifiableKeyRequest& /*in_request*/,
                    attestation::CreateCertifiableKeyReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(CreateCertifiableKeyAsync,
               void(const attestation::CreateCertifiableKeyRequest& /*in_request*/,
                    base::OnceCallback<void(const attestation::CreateCertifiableKeyReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(Decrypt,
               bool(const attestation::DecryptRequest& /*in_request*/,
                    attestation::DecryptReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(DecryptAsync,
               void(const attestation::DecryptRequest& /*in_request*/,
                    base::OnceCallback<void(const attestation::DecryptReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(Sign,
               bool(const attestation::SignRequest& /*in_request*/,
                    attestation::SignReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SignAsync,
               void(const attestation::SignRequest& /*in_request*/,
                    base::OnceCallback<void(const attestation::SignReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RegisterKeyWithChapsToken,
               bool(const attestation::RegisterKeyWithChapsTokenRequest& /*in_request*/,
                    attestation::RegisterKeyWithChapsTokenReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RegisterKeyWithChapsTokenAsync,
               void(const attestation::RegisterKeyWithChapsTokenRequest& /*in_request*/,
                    base::OnceCallback<void(const attestation::RegisterKeyWithChapsTokenReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetEnrollmentPreparations,
               bool(const attestation::GetEnrollmentPreparationsRequest& /*in_request*/,
                    attestation::GetEnrollmentPreparationsReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetEnrollmentPreparationsAsync,
               void(const attestation::GetEnrollmentPreparationsRequest& /*in_request*/,
                    base::OnceCallback<void(const attestation::GetEnrollmentPreparationsReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetStatus,
               bool(const attestation::GetStatusRequest& /*in_request*/,
                    attestation::GetStatusReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetStatusAsync,
               void(const attestation::GetStatusRequest& /*in_request*/,
                    base::OnceCallback<void(const attestation::GetStatusReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(Verify,
               bool(const attestation::VerifyRequest& /*in_request*/,
                    attestation::VerifyReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(VerifyAsync,
               void(const attestation::VerifyRequest& /*in_request*/,
                    base::OnceCallback<void(const attestation::VerifyReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(CreateEnrollRequest,
               bool(const attestation::CreateEnrollRequestRequest& /*in_request*/,
                    attestation::CreateEnrollRequestReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(CreateEnrollRequestAsync,
               void(const attestation::CreateEnrollRequestRequest& /*in_request*/,
                    base::OnceCallback<void(const attestation::CreateEnrollRequestReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(FinishEnroll,
               bool(const attestation::FinishEnrollRequest& /*in_request*/,
                    attestation::FinishEnrollReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(FinishEnrollAsync,
               void(const attestation::FinishEnrollRequest& /*in_request*/,
                    base::OnceCallback<void(const attestation::FinishEnrollReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(CreateCertificateRequest,
               bool(const attestation::CreateCertificateRequestRequest& /*in_request*/,
                    attestation::CreateCertificateRequestReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(CreateCertificateRequestAsync,
               void(const attestation::CreateCertificateRequestRequest& /*in_request*/,
                    base::OnceCallback<void(const attestation::CreateCertificateRequestReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(FinishCertificateRequest,
               bool(const attestation::FinishCertificateRequestRequest& /*in_request*/,
                    attestation::FinishCertificateRequestReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(FinishCertificateRequestAsync,
               void(const attestation::FinishCertificateRequestRequest& /*in_request*/,
                    base::OnceCallback<void(const attestation::FinishCertificateRequestReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(Enroll,
               bool(const attestation::EnrollRequest& /*in_request*/,
                    attestation::EnrollReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(EnrollAsync,
               void(const attestation::EnrollRequest& /*in_request*/,
                    base::OnceCallback<void(const attestation::EnrollReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetCertificate,
               bool(const attestation::GetCertificateRequest& /*in_request*/,
                    attestation::GetCertificateReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetCertificateAsync,
               void(const attestation::GetCertificateRequest& /*in_request*/,
                    base::OnceCallback<void(const attestation::GetCertificateReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SignEnterpriseChallenge,
               bool(const attestation::SignEnterpriseChallengeRequest& /*in_request*/,
                    attestation::SignEnterpriseChallengeReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SignEnterpriseChallengeAsync,
               void(const attestation::SignEnterpriseChallengeRequest& /*in_request*/,
                    base::OnceCallback<void(const attestation::SignEnterpriseChallengeReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SignSimpleChallenge,
               bool(const attestation::SignSimpleChallengeRequest& /*in_request*/,
                    attestation::SignSimpleChallengeReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SignSimpleChallengeAsync,
               void(const attestation::SignSimpleChallengeRequest& /*in_request*/,
                    base::OnceCallback<void(const attestation::SignSimpleChallengeReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetKeyPayload,
               bool(const attestation::SetKeyPayloadRequest& /*in_request*/,
                    attestation::SetKeyPayloadReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetKeyPayloadAsync,
               void(const attestation::SetKeyPayloadRequest& /*in_request*/,
                    base::OnceCallback<void(const attestation::SetKeyPayloadReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(DeleteKeys,
               bool(const attestation::DeleteKeysRequest& /*in_request*/,
                    attestation::DeleteKeysReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(DeleteKeysAsync,
               void(const attestation::DeleteKeysRequest& /*in_request*/,
                    base::OnceCallback<void(const attestation::DeleteKeysReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ResetIdentity,
               bool(const attestation::ResetIdentityRequest& /*in_request*/,
                    attestation::ResetIdentityReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ResetIdentityAsync,
               void(const attestation::ResetIdentityRequest& /*in_request*/,
                    base::OnceCallback<void(const attestation::ResetIdentityReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetEnrollmentId,
               bool(const attestation::GetEnrollmentIdRequest& /*in_request*/,
                    attestation::GetEnrollmentIdReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetEnrollmentIdAsync,
               void(const attestation::GetEnrollmentIdRequest& /*in_request*/,
                    base::OnceCallback<void(const attestation::GetEnrollmentIdReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetCertifiedNvIndex,
               bool(const attestation::GetCertifiedNvIndexRequest& /*in_request*/,
                    attestation::GetCertifiedNvIndexReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetCertifiedNvIndexAsync,
               void(const attestation::GetCertifiedNvIndexRequest& /*in_request*/,
                    base::OnceCallback<void(const attestation::GetCertifiedNvIndexReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_ATTESTATION_CLIENT_OUT_DEFAULT_GEN_INCLUDE_ATTESTATION_DBUS_PROXY_MOCKS_H
