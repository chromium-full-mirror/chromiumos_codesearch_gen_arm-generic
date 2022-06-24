// Automatic generation of D-Bus interfaces:
//  - org.chromium.TpmNvram
//  - org.chromium.TpmManager
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_TPM_MANAGER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_TPM_MANAGER_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_TPM_MANAGER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_TPM_MANAGER_DBUS_PROXIES_H
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

// Abstract interface proxy for org::chromium::TpmNvram.
class TpmNvramProxyInterface {
 public:
  virtual ~TpmNvramProxyInterface() = default;

  virtual bool DefineSpace(
      const tpm_manager::DefineSpaceRequest& in_request,
      tpm_manager::DefineSpaceReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DefineSpaceAsync(
      const tpm_manager::DefineSpaceRequest& in_request,
      base::OnceCallback<void(const tpm_manager::DefineSpaceReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool DestroySpace(
      const tpm_manager::DestroySpaceRequest& in_request,
      tpm_manager::DestroySpaceReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DestroySpaceAsync(
      const tpm_manager::DestroySpaceRequest& in_request,
      base::OnceCallback<void(const tpm_manager::DestroySpaceReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool WriteSpace(
      const tpm_manager::WriteSpaceRequest& in_request,
      tpm_manager::WriteSpaceReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void WriteSpaceAsync(
      const tpm_manager::WriteSpaceRequest& in_request,
      base::OnceCallback<void(const tpm_manager::WriteSpaceReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ReadSpace(
      const tpm_manager::ReadSpaceRequest& in_request,
      tpm_manager::ReadSpaceReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ReadSpaceAsync(
      const tpm_manager::ReadSpaceRequest& in_request,
      base::OnceCallback<void(const tpm_manager::ReadSpaceReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool LockSpace(
      const tpm_manager::LockSpaceRequest& in_request,
      tpm_manager::LockSpaceReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void LockSpaceAsync(
      const tpm_manager::LockSpaceRequest& in_request,
      base::OnceCallback<void(const tpm_manager::LockSpaceReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ListSpaces(
      const tpm_manager::ListSpacesRequest& in_request,
      tpm_manager::ListSpacesReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ListSpacesAsync(
      const tpm_manager::ListSpacesRequest& in_request,
      base::OnceCallback<void(const tpm_manager::ListSpacesReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetSpaceInfo(
      const tpm_manager::GetSpaceInfoRequest& in_request,
      tpm_manager::GetSpaceInfoReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetSpaceInfoAsync(
      const tpm_manager::GetSpaceInfoRequest& in_request,
      base::OnceCallback<void(const tpm_manager::GetSpaceInfoReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::TpmNvram.
class TpmNvramProxy final : public TpmNvramProxyInterface {
 public:
  TpmNvramProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  TpmNvramProxy(const TpmNvramProxy&) = delete;
  TpmNvramProxy& operator=(const TpmNvramProxy&) = delete;

  ~TpmNvramProxy() override {
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

  bool DefineSpace(
      const tpm_manager::DefineSpaceRequest& in_request,
      tpm_manager::DefineSpaceReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmNvram",
        "DefineSpace",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void DefineSpaceAsync(
      const tpm_manager::DefineSpaceRequest& in_request,
      base::OnceCallback<void(const tpm_manager::DefineSpaceReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmNvram",
        "DefineSpace",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool DestroySpace(
      const tpm_manager::DestroySpaceRequest& in_request,
      tpm_manager::DestroySpaceReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmNvram",
        "DestroySpace",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void DestroySpaceAsync(
      const tpm_manager::DestroySpaceRequest& in_request,
      base::OnceCallback<void(const tpm_manager::DestroySpaceReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmNvram",
        "DestroySpace",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool WriteSpace(
      const tpm_manager::WriteSpaceRequest& in_request,
      tpm_manager::WriteSpaceReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmNvram",
        "WriteSpace",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void WriteSpaceAsync(
      const tpm_manager::WriteSpaceRequest& in_request,
      base::OnceCallback<void(const tpm_manager::WriteSpaceReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmNvram",
        "WriteSpace",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool ReadSpace(
      const tpm_manager::ReadSpaceRequest& in_request,
      tpm_manager::ReadSpaceReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmNvram",
        "ReadSpace",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void ReadSpaceAsync(
      const tpm_manager::ReadSpaceRequest& in_request,
      base::OnceCallback<void(const tpm_manager::ReadSpaceReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmNvram",
        "ReadSpace",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool LockSpace(
      const tpm_manager::LockSpaceRequest& in_request,
      tpm_manager::LockSpaceReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmNvram",
        "LockSpace",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void LockSpaceAsync(
      const tpm_manager::LockSpaceRequest& in_request,
      base::OnceCallback<void(const tpm_manager::LockSpaceReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmNvram",
        "LockSpace",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool ListSpaces(
      const tpm_manager::ListSpacesRequest& in_request,
      tpm_manager::ListSpacesReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmNvram",
        "ListSpaces",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void ListSpacesAsync(
      const tpm_manager::ListSpacesRequest& in_request,
      base::OnceCallback<void(const tpm_manager::ListSpacesReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmNvram",
        "ListSpaces",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetSpaceInfo(
      const tpm_manager::GetSpaceInfoRequest& in_request,
      tpm_manager::GetSpaceInfoReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmNvram",
        "GetSpaceInfo",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetSpaceInfoAsync(
      const tpm_manager::GetSpaceInfoRequest& in_request,
      base::OnceCallback<void(const tpm_manager::GetSpaceInfoReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmNvram",
        "GetSpaceInfo",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.TpmManager"};
  const dbus::ObjectPath object_path_{"/org/chromium/TpmManager"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Abstract interface proxy for org::chromium::TpmManager.
class TpmManagerProxyInterface {
 public:
  virtual ~TpmManagerProxyInterface() = default;

  virtual bool GetTpmStatus(
      const tpm_manager::GetTpmStatusRequest& in_request,
      tpm_manager::GetTpmStatusReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetTpmStatusAsync(
      const tpm_manager::GetTpmStatusRequest& in_request,
      base::OnceCallback<void(const tpm_manager::GetTpmStatusReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetTpmNonsensitiveStatus(
      const tpm_manager::GetTpmNonsensitiveStatusRequest& in_request,
      tpm_manager::GetTpmNonsensitiveStatusReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetTpmNonsensitiveStatusAsync(
      const tpm_manager::GetTpmNonsensitiveStatusRequest& in_request,
      base::OnceCallback<void(const tpm_manager::GetTpmNonsensitiveStatusReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetVersionInfo(
      const tpm_manager::GetVersionInfoRequest& in_request,
      tpm_manager::GetVersionInfoReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetVersionInfoAsync(
      const tpm_manager::GetVersionInfoRequest& in_request,
      base::OnceCallback<void(const tpm_manager::GetVersionInfoReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetSupportedFeatures(
      const tpm_manager::GetSupportedFeaturesRequest& in_request,
      tpm_manager::GetSupportedFeaturesReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetSupportedFeaturesAsync(
      const tpm_manager::GetSupportedFeaturesRequest& in_request,
      base::OnceCallback<void(const tpm_manager::GetSupportedFeaturesReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetDictionaryAttackInfo(
      const tpm_manager::GetDictionaryAttackInfoRequest& in_request,
      tpm_manager::GetDictionaryAttackInfoReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetDictionaryAttackInfoAsync(
      const tpm_manager::GetDictionaryAttackInfoRequest& in_request,
      base::OnceCallback<void(const tpm_manager::GetDictionaryAttackInfoReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetRoVerificationStatus(
      const tpm_manager::GetRoVerificationStatusRequest& in_request,
      tpm_manager::GetRoVerificationStatusReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetRoVerificationStatusAsync(
      const tpm_manager::GetRoVerificationStatusRequest& in_request,
      base::OnceCallback<void(const tpm_manager::GetRoVerificationStatusReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ResetDictionaryAttackLock(
      const tpm_manager::ResetDictionaryAttackLockRequest& in_request,
      tpm_manager::ResetDictionaryAttackLockReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ResetDictionaryAttackLockAsync(
      const tpm_manager::ResetDictionaryAttackLockRequest& in_request,
      base::OnceCallback<void(const tpm_manager::ResetDictionaryAttackLockReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool TakeOwnership(
      const tpm_manager::TakeOwnershipRequest& in_request,
      tpm_manager::TakeOwnershipReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void TakeOwnershipAsync(
      const tpm_manager::TakeOwnershipRequest& in_request,
      base::OnceCallback<void(const tpm_manager::TakeOwnershipReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RemoveOwnerDependency(
      const tpm_manager::RemoveOwnerDependencyRequest& in_request,
      tpm_manager::RemoveOwnerDependencyReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RemoveOwnerDependencyAsync(
      const tpm_manager::RemoveOwnerDependencyRequest& in_request,
      base::OnceCallback<void(const tpm_manager::RemoveOwnerDependencyReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ClearStoredOwnerPassword(
      const tpm_manager::ClearStoredOwnerPasswordRequest& in_request,
      tpm_manager::ClearStoredOwnerPasswordReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ClearStoredOwnerPasswordAsync(
      const tpm_manager::ClearStoredOwnerPasswordRequest& in_request,
      base::OnceCallback<void(const tpm_manager::ClearStoredOwnerPasswordReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterSignalOwnershipTakenSignalHandler(
      const base::RepeatingCallback<void(const tpm_manager::OwnershipTakenSignal&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::TpmManager.
class TpmManagerProxy final : public TpmManagerProxyInterface {
 public:
  TpmManagerProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  TpmManagerProxy(const TpmManagerProxy&) = delete;
  TpmManagerProxy& operator=(const TpmManagerProxy&) = delete;

  ~TpmManagerProxy() override {
  }

  void RegisterSignalOwnershipTakenSignalHandler(
      const base::RepeatingCallback<void(const tpm_manager::OwnershipTakenSignal&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.TpmManager",
        "SignalOwnershipTaken",
        signal_callback,
        std::move(on_connected_callback));
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

  bool GetTpmStatus(
      const tpm_manager::GetTpmStatusRequest& in_request,
      tpm_manager::GetTpmStatusReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmManager",
        "GetTpmStatus",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetTpmStatusAsync(
      const tpm_manager::GetTpmStatusRequest& in_request,
      base::OnceCallback<void(const tpm_manager::GetTpmStatusReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmManager",
        "GetTpmStatus",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetTpmNonsensitiveStatus(
      const tpm_manager::GetTpmNonsensitiveStatusRequest& in_request,
      tpm_manager::GetTpmNonsensitiveStatusReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmManager",
        "GetTpmNonsensitiveStatus",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetTpmNonsensitiveStatusAsync(
      const tpm_manager::GetTpmNonsensitiveStatusRequest& in_request,
      base::OnceCallback<void(const tpm_manager::GetTpmNonsensitiveStatusReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmManager",
        "GetTpmNonsensitiveStatus",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetVersionInfo(
      const tpm_manager::GetVersionInfoRequest& in_request,
      tpm_manager::GetVersionInfoReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmManager",
        "GetVersionInfo",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetVersionInfoAsync(
      const tpm_manager::GetVersionInfoRequest& in_request,
      base::OnceCallback<void(const tpm_manager::GetVersionInfoReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmManager",
        "GetVersionInfo",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetSupportedFeatures(
      const tpm_manager::GetSupportedFeaturesRequest& in_request,
      tpm_manager::GetSupportedFeaturesReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmManager",
        "GetSupportedFeatures",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetSupportedFeaturesAsync(
      const tpm_manager::GetSupportedFeaturesRequest& in_request,
      base::OnceCallback<void(const tpm_manager::GetSupportedFeaturesReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmManager",
        "GetSupportedFeatures",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetDictionaryAttackInfo(
      const tpm_manager::GetDictionaryAttackInfoRequest& in_request,
      tpm_manager::GetDictionaryAttackInfoReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmManager",
        "GetDictionaryAttackInfo",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetDictionaryAttackInfoAsync(
      const tpm_manager::GetDictionaryAttackInfoRequest& in_request,
      base::OnceCallback<void(const tpm_manager::GetDictionaryAttackInfoReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmManager",
        "GetDictionaryAttackInfo",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool GetRoVerificationStatus(
      const tpm_manager::GetRoVerificationStatusRequest& in_request,
      tpm_manager::GetRoVerificationStatusReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmManager",
        "GetRoVerificationStatus",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void GetRoVerificationStatusAsync(
      const tpm_manager::GetRoVerificationStatusRequest& in_request,
      base::OnceCallback<void(const tpm_manager::GetRoVerificationStatusReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmManager",
        "GetRoVerificationStatus",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool ResetDictionaryAttackLock(
      const tpm_manager::ResetDictionaryAttackLockRequest& in_request,
      tpm_manager::ResetDictionaryAttackLockReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmManager",
        "ResetDictionaryAttackLock",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void ResetDictionaryAttackLockAsync(
      const tpm_manager::ResetDictionaryAttackLockRequest& in_request,
      base::OnceCallback<void(const tpm_manager::ResetDictionaryAttackLockReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmManager",
        "ResetDictionaryAttackLock",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool TakeOwnership(
      const tpm_manager::TakeOwnershipRequest& in_request,
      tpm_manager::TakeOwnershipReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmManager",
        "TakeOwnership",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void TakeOwnershipAsync(
      const tpm_manager::TakeOwnershipRequest& in_request,
      base::OnceCallback<void(const tpm_manager::TakeOwnershipReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmManager",
        "TakeOwnership",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool RemoveOwnerDependency(
      const tpm_manager::RemoveOwnerDependencyRequest& in_request,
      tpm_manager::RemoveOwnerDependencyReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmManager",
        "RemoveOwnerDependency",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void RemoveOwnerDependencyAsync(
      const tpm_manager::RemoveOwnerDependencyRequest& in_request,
      base::OnceCallback<void(const tpm_manager::RemoveOwnerDependencyReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmManager",
        "RemoveOwnerDependency",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  bool ClearStoredOwnerPassword(
      const tpm_manager::ClearStoredOwnerPasswordRequest& in_request,
      tpm_manager::ClearStoredOwnerPasswordReply* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmManager",
        "ClearStoredOwnerPassword",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  void ClearStoredOwnerPasswordAsync(
      const tpm_manager::ClearStoredOwnerPasswordRequest& in_request,
      base::OnceCallback<void(const tpm_manager::ClearStoredOwnerPasswordReply& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.TpmManager",
        "ClearStoredOwnerPassword",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.TpmManager"};
  const dbus::ObjectPath object_path_{"/org/chromium/TpmManager"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_TPM_MANAGER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_TPM_MANAGER_DBUS_PROXIES_H
