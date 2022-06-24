// Automatic generation of D-Bus interface mock proxies for:
//  - org.chromium.TpmNvram
//  - org.chromium.TpmManager
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_TPM_MANAGER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_TPM_MANAGER_DBUS_PROXY_MOCKS_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_TPM_MANAGER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_TPM_MANAGER_DBUS_PROXY_MOCKS_H
#include <string>
#include <vector>

#include <base/callback_forward.h>
#include <base/logging.h>
#include <brillo/any.h>
#include <brillo/errors/error.h>
#include <brillo/variant_dictionary.h>
#include <gmock/gmock.h>

#include "tpm_manager/dbus-proxies.h"

namespace org {
namespace chromium {

// Mock object for TpmNvramProxyInterface.
class TpmNvramProxyMock : public TpmNvramProxyInterface {
 public:
  TpmNvramProxyMock() = default;
  TpmNvramProxyMock(const TpmNvramProxyMock&) = delete;
  TpmNvramProxyMock& operator=(const TpmNvramProxyMock&) = delete;

  MOCK_METHOD4(DefineSpace,
               bool(const tpm_manager::DefineSpaceRequest& /*in_request*/,
                    tpm_manager::DefineSpaceReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(DefineSpaceAsync,
               void(const tpm_manager::DefineSpaceRequest& /*in_request*/,
                    base::OnceCallback<void(const tpm_manager::DefineSpaceReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(DestroySpace,
               bool(const tpm_manager::DestroySpaceRequest& /*in_request*/,
                    tpm_manager::DestroySpaceReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(DestroySpaceAsync,
               void(const tpm_manager::DestroySpaceRequest& /*in_request*/,
                    base::OnceCallback<void(const tpm_manager::DestroySpaceReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(WriteSpace,
               bool(const tpm_manager::WriteSpaceRequest& /*in_request*/,
                    tpm_manager::WriteSpaceReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(WriteSpaceAsync,
               void(const tpm_manager::WriteSpaceRequest& /*in_request*/,
                    base::OnceCallback<void(const tpm_manager::WriteSpaceReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ReadSpace,
               bool(const tpm_manager::ReadSpaceRequest& /*in_request*/,
                    tpm_manager::ReadSpaceReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ReadSpaceAsync,
               void(const tpm_manager::ReadSpaceRequest& /*in_request*/,
                    base::OnceCallback<void(const tpm_manager::ReadSpaceReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(LockSpace,
               bool(const tpm_manager::LockSpaceRequest& /*in_request*/,
                    tpm_manager::LockSpaceReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(LockSpaceAsync,
               void(const tpm_manager::LockSpaceRequest& /*in_request*/,
                    base::OnceCallback<void(const tpm_manager::LockSpaceReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ListSpaces,
               bool(const tpm_manager::ListSpacesRequest& /*in_request*/,
                    tpm_manager::ListSpacesReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ListSpacesAsync,
               void(const tpm_manager::ListSpacesRequest& /*in_request*/,
                    base::OnceCallback<void(const tpm_manager::ListSpacesReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetSpaceInfo,
               bool(const tpm_manager::GetSpaceInfoRequest& /*in_request*/,
                    tpm_manager::GetSpaceInfoReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetSpaceInfoAsync,
               void(const tpm_manager::GetSpaceInfoRequest& /*in_request*/,
                    base::OnceCallback<void(const tpm_manager::GetSpaceInfoReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Mock object for TpmManagerProxyInterface.
class TpmManagerProxyMock : public TpmManagerProxyInterface {
 public:
  TpmManagerProxyMock() = default;
  TpmManagerProxyMock(const TpmManagerProxyMock&) = delete;
  TpmManagerProxyMock& operator=(const TpmManagerProxyMock&) = delete;

  MOCK_METHOD4(GetTpmStatus,
               bool(const tpm_manager::GetTpmStatusRequest& /*in_request*/,
                    tpm_manager::GetTpmStatusReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetTpmStatusAsync,
               void(const tpm_manager::GetTpmStatusRequest& /*in_request*/,
                    base::OnceCallback<void(const tpm_manager::GetTpmStatusReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetTpmNonsensitiveStatus,
               bool(const tpm_manager::GetTpmNonsensitiveStatusRequest& /*in_request*/,
                    tpm_manager::GetTpmNonsensitiveStatusReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetTpmNonsensitiveStatusAsync,
               void(const tpm_manager::GetTpmNonsensitiveStatusRequest& /*in_request*/,
                    base::OnceCallback<void(const tpm_manager::GetTpmNonsensitiveStatusReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetVersionInfo,
               bool(const tpm_manager::GetVersionInfoRequest& /*in_request*/,
                    tpm_manager::GetVersionInfoReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetVersionInfoAsync,
               void(const tpm_manager::GetVersionInfoRequest& /*in_request*/,
                    base::OnceCallback<void(const tpm_manager::GetVersionInfoReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetSupportedFeatures,
               bool(const tpm_manager::GetSupportedFeaturesRequest& /*in_request*/,
                    tpm_manager::GetSupportedFeaturesReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetSupportedFeaturesAsync,
               void(const tpm_manager::GetSupportedFeaturesRequest& /*in_request*/,
                    base::OnceCallback<void(const tpm_manager::GetSupportedFeaturesReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetDictionaryAttackInfo,
               bool(const tpm_manager::GetDictionaryAttackInfoRequest& /*in_request*/,
                    tpm_manager::GetDictionaryAttackInfoReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetDictionaryAttackInfoAsync,
               void(const tpm_manager::GetDictionaryAttackInfoRequest& /*in_request*/,
                    base::OnceCallback<void(const tpm_manager::GetDictionaryAttackInfoReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetRoVerificationStatus,
               bool(const tpm_manager::GetRoVerificationStatusRequest& /*in_request*/,
                    tpm_manager::GetRoVerificationStatusReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetRoVerificationStatusAsync,
               void(const tpm_manager::GetRoVerificationStatusRequest& /*in_request*/,
                    base::OnceCallback<void(const tpm_manager::GetRoVerificationStatusReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ResetDictionaryAttackLock,
               bool(const tpm_manager::ResetDictionaryAttackLockRequest& /*in_request*/,
                    tpm_manager::ResetDictionaryAttackLockReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ResetDictionaryAttackLockAsync,
               void(const tpm_manager::ResetDictionaryAttackLockRequest& /*in_request*/,
                    base::OnceCallback<void(const tpm_manager::ResetDictionaryAttackLockReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(TakeOwnership,
               bool(const tpm_manager::TakeOwnershipRequest& /*in_request*/,
                    tpm_manager::TakeOwnershipReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(TakeOwnershipAsync,
               void(const tpm_manager::TakeOwnershipRequest& /*in_request*/,
                    base::OnceCallback<void(const tpm_manager::TakeOwnershipReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RemoveOwnerDependency,
               bool(const tpm_manager::RemoveOwnerDependencyRequest& /*in_request*/,
                    tpm_manager::RemoveOwnerDependencyReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RemoveOwnerDependencyAsync,
               void(const tpm_manager::RemoveOwnerDependencyRequest& /*in_request*/,
                    base::OnceCallback<void(const tpm_manager::RemoveOwnerDependencyReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ClearStoredOwnerPassword,
               bool(const tpm_manager::ClearStoredOwnerPasswordRequest& /*in_request*/,
                    tpm_manager::ClearStoredOwnerPasswordReply* /*out_reply*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ClearStoredOwnerPasswordAsync,
               void(const tpm_manager::ClearStoredOwnerPasswordRequest& /*in_request*/,
                    base::OnceCallback<void(const tpm_manager::ClearStoredOwnerPasswordReply& /*reply*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  void RegisterSignalOwnershipTakenSignalHandler(
    const base::RepeatingCallback<void(const tpm_manager::OwnershipTakenSignal&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterSignalOwnershipTakenSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterSignalOwnershipTakenSignalHandler,
               void(const base::RepeatingCallback<void(const tpm_manager::OwnershipTakenSignal&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_TPM_MANAGER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_TPM_MANAGER_DBUS_PROXY_MOCKS_H
