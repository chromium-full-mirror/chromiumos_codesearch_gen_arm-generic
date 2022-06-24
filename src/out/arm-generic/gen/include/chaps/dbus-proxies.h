// Automatic generation of D-Bus interfaces:
//  - org.chromium.ChapsEvents
//  - org.chromium.Chaps
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CHAPS_CLIENT_OUT_DEFAULT_GEN_INCLUDE_CHAPS_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CHAPS_CLIENT_OUT_DEFAULT_GEN_INCLUDE_CHAPS_DBUS_PROXIES_H
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

// Abstract interface proxy for org::chromium::ChapsEvents.
class ChapsEventsProxyInterface {
 public:
  virtual ~ChapsEventsProxyInterface() = default;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::ChapsEvents.
class ChapsEventsProxy final : public ChapsEventsProxyInterface {
 public:
  ChapsEventsProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  ChapsEventsProxy(const ChapsEventsProxy&) = delete;
  ChapsEventsProxy& operator=(const ChapsEventsProxy&) = delete;

  ~ChapsEventsProxy() override {
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

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.Chaps"};
  const dbus::ObjectPath object_path_{"/org/chromium/Chaps"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Abstract interface proxy for org::chromium::Chaps.
class ChapsProxyInterface {
 public:
  virtual ~ChapsProxyInterface() = default;

  virtual bool OpenIsolate(
      const std::vector<uint8_t>& in_isolate_credential_in,
      std::vector<uint8_t>* out_isolate_credential_out,
      bool* out_new_isolate_created,
      bool* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void OpenIsolateAsync(
      const std::vector<uint8_t>& in_isolate_credential_in,
      base::OnceCallback<void(const std::vector<uint8_t>& /*isolate_credential_out*/, bool /*new_isolate_created*/, bool /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool CloseIsolate(
      const std::vector<uint8_t>& in_isolate_credential,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void CloseIsolateAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool LoadToken(
      const std::vector<uint8_t>& in_isolate_credential,
      const std::string& in_path,
      const std::vector<uint8_t>& in_auth_data,
      const std::string& in_label,
      uint64_t* out_slot_id,
      bool* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void LoadTokenAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      const std::string& in_path,
      const std::vector<uint8_t>& in_auth_data,
      const std::string& in_label,
      base::OnceCallback<void(uint64_t /*slot_id*/, bool /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool UnloadToken(
      const std::vector<uint8_t>& in_isolate_credential,
      const std::string& in_path,
      bool* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void UnloadTokenAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      const std::string& in_path,
      base::OnceCallback<void(bool /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ChangeTokenAuthData(
      const std::string& in_path,
      const std::vector<uint8_t>& in_old_auth_data,
      const std::vector<uint8_t>& in_new_auth_data,
      bool* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ChangeTokenAuthDataAsync(
      const std::string& in_path,
      const std::vector<uint8_t>& in_old_auth_data,
      const std::vector<uint8_t>& in_new_auth_data,
      base::OnceCallback<void(bool /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetTokenPath(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      std::string* out_path,
      bool* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetTokenPathAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      base::OnceCallback<void(const std::string& /*path*/, bool /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetLogLevel(
      int32_t in_level,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetLogLevelAsync(
      int32_t in_level,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetSlotList(
      const std::vector<uint8_t>& in_isolate_credential,
      bool in_token_present,
      std::vector<uint64_t>* out_slot_list,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetSlotListAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      bool in_token_present,
      base::OnceCallback<void(const std::vector<uint64_t>& /*slot_list*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetSlotInfo(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      chaps::SlotInfo* out_slot_info,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetSlotInfoAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      base::OnceCallback<void(const chaps::SlotInfo& /*slot_info*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetTokenInfo(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      chaps::TokenInfo* out_token_info,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetTokenInfoAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      base::OnceCallback<void(const chaps::TokenInfo& /*token_info*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetMechanismList(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      std::vector<uint64_t>* out_mechanism_list,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetMechanismListAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      base::OnceCallback<void(const std::vector<uint64_t>& /*mechanism_list*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetMechanismInfo(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      uint64_t in_mechanism_type,
      chaps::MechanismInfo* out_mechanism_info,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetMechanismInfoAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      uint64_t in_mechanism_type,
      base::OnceCallback<void(const chaps::MechanismInfo& /*mechanism_info*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool InitToken(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      bool in_use_null_pin,
      const std::string& in_optional_so_pin,
      const std::vector<uint8_t>& in_new_token_label,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void InitTokenAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      bool in_use_null_pin,
      const std::string& in_optional_so_pin,
      const std::vector<uint8_t>& in_new_token_label,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool InitPIN(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      bool in_use_null_pin,
      const std::string& in_optional_user_pin,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void InitPINAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      bool in_use_null_pin,
      const std::string& in_optional_user_pin,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetPIN(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      bool in_use_null_old_pin,
      const std::string& in_optional_old_pin,
      bool in_use_null_new_pin,
      const std::string& in_optional_new_pin,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetPINAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      bool in_use_null_old_pin,
      const std::string& in_optional_old_pin,
      bool in_use_null_new_pin,
      const std::string& in_optional_new_pin,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool OpenSession(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      uint64_t in_flags,
      uint64_t* out_session_id,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void OpenSessionAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      uint64_t in_flags,
      base::OnceCallback<void(uint64_t /*session_id*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool CloseSession(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void CloseSessionAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetSessionInfo(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      chaps::SessionInfo* out_session_info,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetSessionInfoAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      base::OnceCallback<void(const chaps::SessionInfo& /*session_info*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetOperationState(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      std::vector<uint8_t>* out_operation_state,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetOperationStateAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      base::OnceCallback<void(const std::vector<uint8_t>& /*operation_state*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetOperationState(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_operation_state,
      uint64_t in_encryption_key_handle,
      uint64_t in_authentication_key_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetOperationStateAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_operation_state,
      uint64_t in_encryption_key_handle,
      uint64_t in_authentication_key_handle,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Login(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_user_type,
      bool in_use_null_pin,
      const std::string& in_optional_pin,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void LoginAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_user_type,
      bool in_use_null_pin,
      const std::string& in_optional_pin,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Logout(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void LogoutAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool CreateObject(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_attributes,
      uint64_t* out_new_object_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void CreateObjectAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_attributes,
      base::OnceCallback<void(uint64_t /*new_object_handle*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool CopyObject(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_object_handle,
      const std::vector<uint8_t>& in_attributes,
      uint64_t* out_new_object_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void CopyObjectAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_object_handle,
      const std::vector<uint8_t>& in_attributes,
      base::OnceCallback<void(uint64_t /*new_object_handle*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool DestroyObject(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_object_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DestroyObjectAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_object_handle,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetObjectSize(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_object_handle,
      uint64_t* out_object_size,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetObjectSizeAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_object_handle,
      base::OnceCallback<void(uint64_t /*object_size*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetAttributeValue(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_object_handle,
      const std::vector<uint8_t>& in_attributes_in,
      std::vector<uint8_t>* out_attributes_out,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetAttributeValueAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_object_handle,
      const std::vector<uint8_t>& in_attributes_in,
      base::OnceCallback<void(const std::vector<uint8_t>& /*attributes_out*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetAttributeValue(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_object_handle,
      const std::vector<uint8_t>& in_attributes,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetAttributeValueAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_object_handle,
      const std::vector<uint8_t>& in_attributes,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool FindObjectsInit(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_attributes,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void FindObjectsInitAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_attributes,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool FindObjects(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_max_object_count,
      std::vector<uint64_t>* out_object_list,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void FindObjectsAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_max_object_count,
      base::OnceCallback<void(const std::vector<uint64_t>& /*object_list*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool FindObjectsFinal(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void FindObjectsFinalAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool EncryptInit(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_key_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void EncryptInitAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_key_handle,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Encrypt(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_data_out,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void EncryptAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*data_out*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool EncryptUpdate(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_data_out,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void EncryptUpdateAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*data_out*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool EncryptFinal(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_data_out,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void EncryptFinalAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*data_out*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool EncryptCancel(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void EncryptCancelAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool DecryptInit(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_key_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DecryptInitAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_key_handle,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Decrypt(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_data_out,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DecryptAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*data_out*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool DecryptUpdate(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_data_out,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DecryptUpdateAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*data_out*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool DecryptFinal(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_data_out,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DecryptFinalAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*data_out*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool DecryptCancel(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DecryptCancelAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool DigestInit(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DigestInitAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Digest(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_digest,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DigestAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*digest*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool DigestUpdate(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DigestUpdateAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool DigestKey(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_key_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DigestKeyAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_key_handle,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool DigestFinal(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_digest,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DigestFinalAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*digest*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool DigestCancel(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DigestCancelAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SignInit(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_key_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SignInitAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_key_handle,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Sign(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_signature,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SignAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*signature*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SignUpdate(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_part,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SignUpdateAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_part,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SignFinal(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_signature,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SignFinalAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*signature*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SignCancel(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SignCancelAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SignRecoverInit(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_key_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SignRecoverInitAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_key_handle,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SignRecover(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_signature,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SignRecoverAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*signature*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool VerifyInit(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_key_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void VerifyInitAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_key_handle,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Verify(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data,
      const std::vector<uint8_t>& in_signature,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void VerifyAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data,
      const std::vector<uint8_t>& in_signature,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool VerifyUpdate(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_part,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void VerifyUpdateAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_part,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool VerifyFinal(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_signature,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void VerifyFinalAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_signature,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool VerifyCancel(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void VerifyCancelAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool VerifyRecoverInit(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_key_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void VerifyRecoverInitAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_key_handle,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool VerifyRecover(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_signature,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_data,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void VerifyRecoverAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_signature,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*data*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool DigestEncryptUpdate(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_data_out,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DigestEncryptUpdateAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*data_out*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool DecryptDigestUpdate(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_data_out,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DecryptDigestUpdateAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*data_out*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SignEncryptUpdate(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_data_out,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SignEncryptUpdateAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*data_out*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool DecryptVerifyUpdate(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_data_out,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DecryptVerifyUpdateAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*data_out*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GenerateKey(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      const std::vector<uint8_t>& in_attributes,
      uint64_t* out_key_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GenerateKeyAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      const std::vector<uint8_t>& in_attributes,
      base::OnceCallback<void(uint64_t /*key_handle*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GenerateKeyPair(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      const std::vector<uint8_t>& in_public_attributes,
      const std::vector<uint8_t>& in_private_attributes,
      uint64_t* out_public_key_handle,
      uint64_t* out_private_key_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GenerateKeyPairAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      const std::vector<uint8_t>& in_public_attributes,
      const std::vector<uint8_t>& in_private_attributes,
      base::OnceCallback<void(uint64_t /*public_key_handle*/, uint64_t /*private_key_handle*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool WrapKey(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_wrapping_key_handle,
      uint64_t in_key_handle,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_wrapped_key,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void WrapKeyAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_wrapping_key_handle,
      uint64_t in_key_handle,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*wrapped_key*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool UnwrapKey(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_wrapping_key_handle,
      const std::vector<uint8_t>& in_wrapped_key,
      const std::vector<uint8_t>& in_attributes,
      uint64_t* out_key_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void UnwrapKeyAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_wrapping_key_handle,
      const std::vector<uint8_t>& in_wrapped_key,
      const std::vector<uint8_t>& in_attributes,
      base::OnceCallback<void(uint64_t /*key_handle*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool DeriveKey(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_base_key_handle,
      const std::vector<uint8_t>& in_attributes,
      uint64_t* out_key_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DeriveKeyAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_base_key_handle,
      const std::vector<uint8_t>& in_attributes,
      base::OnceCallback<void(uint64_t /*key_handle*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SeedRandom(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_seed,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SeedRandomAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_seed,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GenerateRandom(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_num_bytes,
      std::vector<uint8_t>* out_random_data,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GenerateRandomAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_num_bytes,
      base::OnceCallback<void(const std::vector<uint8_t>& /*random_data*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::Chaps.
class ChapsProxy final : public ChapsProxyInterface {
 public:
  ChapsProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  ChapsProxy(const ChapsProxy&) = delete;
  ChapsProxy& operator=(const ChapsProxy&) = delete;

  ~ChapsProxy() override {
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

  bool OpenIsolate(
      const std::vector<uint8_t>& in_isolate_credential_in,
      std::vector<uint8_t>* out_isolate_credential_out,
      bool* out_new_isolate_created,
      bool* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "OpenIsolate",
        error,
        in_isolate_credential_in);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_isolate_credential_out, out_new_isolate_created, out_result);
  }

  void OpenIsolateAsync(
      const std::vector<uint8_t>& in_isolate_credential_in,
      base::OnceCallback<void(const std::vector<uint8_t>& /*isolate_credential_out*/, bool /*new_isolate_created*/, bool /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "OpenIsolate",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential_in);
  }

  bool CloseIsolate(
      const std::vector<uint8_t>& in_isolate_credential,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "CloseIsolate",
        error,
        in_isolate_credential);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void CloseIsolateAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "CloseIsolate",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential);
  }

  bool LoadToken(
      const std::vector<uint8_t>& in_isolate_credential,
      const std::string& in_path,
      const std::vector<uint8_t>& in_auth_data,
      const std::string& in_label,
      uint64_t* out_slot_id,
      bool* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "LoadToken",
        error,
        in_isolate_credential,
        in_path,
        in_auth_data,
        in_label);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_slot_id, out_result);
  }

  void LoadTokenAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      const std::string& in_path,
      const std::vector<uint8_t>& in_auth_data,
      const std::string& in_label,
      base::OnceCallback<void(uint64_t /*slot_id*/, bool /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "LoadToken",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_path,
        in_auth_data,
        in_label);
  }

  bool UnloadToken(
      const std::vector<uint8_t>& in_isolate_credential,
      const std::string& in_path,
      bool* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "UnloadToken",
        error,
        in_isolate_credential,
        in_path);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void UnloadTokenAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      const std::string& in_path,
      base::OnceCallback<void(bool /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "UnloadToken",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_path);
  }

  bool ChangeTokenAuthData(
      const std::string& in_path,
      const std::vector<uint8_t>& in_old_auth_data,
      const std::vector<uint8_t>& in_new_auth_data,
      bool* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "ChangeTokenAuthData",
        error,
        in_path,
        in_old_auth_data,
        in_new_auth_data);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void ChangeTokenAuthDataAsync(
      const std::string& in_path,
      const std::vector<uint8_t>& in_old_auth_data,
      const std::vector<uint8_t>& in_new_auth_data,
      base::OnceCallback<void(bool /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "ChangeTokenAuthData",
        std::move(success_callback),
        std::move(error_callback),
        in_path,
        in_old_auth_data,
        in_new_auth_data);
  }

  bool GetTokenPath(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      std::string* out_path,
      bool* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GetTokenPath",
        error,
        in_isolate_credential,
        in_slot_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_path, out_result);
  }

  void GetTokenPathAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      base::OnceCallback<void(const std::string& /*path*/, bool /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GetTokenPath",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_slot_id);
  }

  bool SetLogLevel(
      int32_t in_level,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "SetLogLevel",
        error,
        in_level);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetLogLevelAsync(
      int32_t in_level,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "SetLogLevel",
        std::move(success_callback),
        std::move(error_callback),
        in_level);
  }

  bool GetSlotList(
      const std::vector<uint8_t>& in_isolate_credential,
      bool in_token_present,
      std::vector<uint64_t>* out_slot_list,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GetSlotList",
        error,
        in_isolate_credential,
        in_token_present);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_slot_list, out_result);
  }

  void GetSlotListAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      bool in_token_present,
      base::OnceCallback<void(const std::vector<uint64_t>& /*slot_list*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GetSlotList",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_token_present);
  }

  bool GetSlotInfo(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      chaps::SlotInfo* out_slot_info,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GetSlotInfo",
        error,
        in_isolate_credential,
        in_slot_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_slot_info, out_result);
  }

  void GetSlotInfoAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      base::OnceCallback<void(const chaps::SlotInfo& /*slot_info*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GetSlotInfo",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_slot_id);
  }

  bool GetTokenInfo(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      chaps::TokenInfo* out_token_info,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GetTokenInfo",
        error,
        in_isolate_credential,
        in_slot_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_token_info, out_result);
  }

  void GetTokenInfoAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      base::OnceCallback<void(const chaps::TokenInfo& /*token_info*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GetTokenInfo",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_slot_id);
  }

  bool GetMechanismList(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      std::vector<uint64_t>* out_mechanism_list,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GetMechanismList",
        error,
        in_isolate_credential,
        in_slot_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_mechanism_list, out_result);
  }

  void GetMechanismListAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      base::OnceCallback<void(const std::vector<uint64_t>& /*mechanism_list*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GetMechanismList",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_slot_id);
  }

  bool GetMechanismInfo(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      uint64_t in_mechanism_type,
      chaps::MechanismInfo* out_mechanism_info,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GetMechanismInfo",
        error,
        in_isolate_credential,
        in_slot_id,
        in_mechanism_type);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_mechanism_info, out_result);
  }

  void GetMechanismInfoAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      uint64_t in_mechanism_type,
      base::OnceCallback<void(const chaps::MechanismInfo& /*mechanism_info*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GetMechanismInfo",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_slot_id,
        in_mechanism_type);
  }

  bool InitToken(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      bool in_use_null_pin,
      const std::string& in_optional_so_pin,
      const std::vector<uint8_t>& in_new_token_label,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "InitToken",
        error,
        in_isolate_credential,
        in_slot_id,
        in_use_null_pin,
        in_optional_so_pin,
        in_new_token_label);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void InitTokenAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      bool in_use_null_pin,
      const std::string& in_optional_so_pin,
      const std::vector<uint8_t>& in_new_token_label,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "InitToken",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_slot_id,
        in_use_null_pin,
        in_optional_so_pin,
        in_new_token_label);
  }

  bool InitPIN(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      bool in_use_null_pin,
      const std::string& in_optional_user_pin,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "InitPIN",
        error,
        in_isolate_credential,
        in_session_id,
        in_use_null_pin,
        in_optional_user_pin);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void InitPINAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      bool in_use_null_pin,
      const std::string& in_optional_user_pin,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "InitPIN",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_use_null_pin,
        in_optional_user_pin);
  }

  bool SetPIN(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      bool in_use_null_old_pin,
      const std::string& in_optional_old_pin,
      bool in_use_null_new_pin,
      const std::string& in_optional_new_pin,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "SetPIN",
        error,
        in_isolate_credential,
        in_session_id,
        in_use_null_old_pin,
        in_optional_old_pin,
        in_use_null_new_pin,
        in_optional_new_pin);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void SetPINAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      bool in_use_null_old_pin,
      const std::string& in_optional_old_pin,
      bool in_use_null_new_pin,
      const std::string& in_optional_new_pin,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "SetPIN",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_use_null_old_pin,
        in_optional_old_pin,
        in_use_null_new_pin,
        in_optional_new_pin);
  }

  bool OpenSession(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      uint64_t in_flags,
      uint64_t* out_session_id,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "OpenSession",
        error,
        in_isolate_credential,
        in_slot_id,
        in_flags);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_session_id, out_result);
  }

  void OpenSessionAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_slot_id,
      uint64_t in_flags,
      base::OnceCallback<void(uint64_t /*session_id*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "OpenSession",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_slot_id,
        in_flags);
  }

  bool CloseSession(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "CloseSession",
        error,
        in_isolate_credential,
        in_session_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void CloseSessionAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "CloseSession",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id);
  }

  bool GetSessionInfo(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      chaps::SessionInfo* out_session_info,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GetSessionInfo",
        error,
        in_isolate_credential,
        in_session_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_session_info, out_result);
  }

  void GetSessionInfoAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      base::OnceCallback<void(const chaps::SessionInfo& /*session_info*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GetSessionInfo",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id);
  }

  bool GetOperationState(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      std::vector<uint8_t>* out_operation_state,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GetOperationState",
        error,
        in_isolate_credential,
        in_session_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_operation_state, out_result);
  }

  void GetOperationStateAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      base::OnceCallback<void(const std::vector<uint8_t>& /*operation_state*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GetOperationState",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id);
  }

  bool SetOperationState(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_operation_state,
      uint64_t in_encryption_key_handle,
      uint64_t in_authentication_key_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "SetOperationState",
        error,
        in_isolate_credential,
        in_session_id,
        in_operation_state,
        in_encryption_key_handle,
        in_authentication_key_handle);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void SetOperationStateAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_operation_state,
      uint64_t in_encryption_key_handle,
      uint64_t in_authentication_key_handle,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "SetOperationState",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_operation_state,
        in_encryption_key_handle,
        in_authentication_key_handle);
  }

  bool Login(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_user_type,
      bool in_use_null_pin,
      const std::string& in_optional_pin,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "Login",
        error,
        in_isolate_credential,
        in_session_id,
        in_user_type,
        in_use_null_pin,
        in_optional_pin);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void LoginAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_user_type,
      bool in_use_null_pin,
      const std::string& in_optional_pin,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "Login",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_user_type,
        in_use_null_pin,
        in_optional_pin);
  }

  bool Logout(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "Logout",
        error,
        in_isolate_credential,
        in_session_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void LogoutAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "Logout",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id);
  }

  bool CreateObject(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_attributes,
      uint64_t* out_new_object_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "CreateObject",
        error,
        in_isolate_credential,
        in_session_id,
        in_attributes);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_new_object_handle, out_result);
  }

  void CreateObjectAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_attributes,
      base::OnceCallback<void(uint64_t /*new_object_handle*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "CreateObject",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_attributes);
  }

  bool CopyObject(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_object_handle,
      const std::vector<uint8_t>& in_attributes,
      uint64_t* out_new_object_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "CopyObject",
        error,
        in_isolate_credential,
        in_session_id,
        in_object_handle,
        in_attributes);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_new_object_handle, out_result);
  }

  void CopyObjectAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_object_handle,
      const std::vector<uint8_t>& in_attributes,
      base::OnceCallback<void(uint64_t /*new_object_handle*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "CopyObject",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_object_handle,
        in_attributes);
  }

  bool DestroyObject(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_object_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DestroyObject",
        error,
        in_isolate_credential,
        in_session_id,
        in_object_handle);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void DestroyObjectAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_object_handle,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DestroyObject",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_object_handle);
  }

  bool GetObjectSize(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_object_handle,
      uint64_t* out_object_size,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GetObjectSize",
        error,
        in_isolate_credential,
        in_session_id,
        in_object_handle);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_object_size, out_result);
  }

  void GetObjectSizeAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_object_handle,
      base::OnceCallback<void(uint64_t /*object_size*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GetObjectSize",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_object_handle);
  }

  bool GetAttributeValue(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_object_handle,
      const std::vector<uint8_t>& in_attributes_in,
      std::vector<uint8_t>* out_attributes_out,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GetAttributeValue",
        error,
        in_isolate_credential,
        in_session_id,
        in_object_handle,
        in_attributes_in);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_attributes_out, out_result);
  }

  void GetAttributeValueAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_object_handle,
      const std::vector<uint8_t>& in_attributes_in,
      base::OnceCallback<void(const std::vector<uint8_t>& /*attributes_out*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GetAttributeValue",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_object_handle,
        in_attributes_in);
  }

  bool SetAttributeValue(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_object_handle,
      const std::vector<uint8_t>& in_attributes,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "SetAttributeValue",
        error,
        in_isolate_credential,
        in_session_id,
        in_object_handle,
        in_attributes);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void SetAttributeValueAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_object_handle,
      const std::vector<uint8_t>& in_attributes,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "SetAttributeValue",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_object_handle,
        in_attributes);
  }

  bool FindObjectsInit(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_attributes,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "FindObjectsInit",
        error,
        in_isolate_credential,
        in_session_id,
        in_attributes);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void FindObjectsInitAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_attributes,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "FindObjectsInit",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_attributes);
  }

  bool FindObjects(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_max_object_count,
      std::vector<uint64_t>* out_object_list,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "FindObjects",
        error,
        in_isolate_credential,
        in_session_id,
        in_max_object_count);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_object_list, out_result);
  }

  void FindObjectsAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_max_object_count,
      base::OnceCallback<void(const std::vector<uint64_t>& /*object_list*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "FindObjects",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_max_object_count);
  }

  bool FindObjectsFinal(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "FindObjectsFinal",
        error,
        in_isolate_credential,
        in_session_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void FindObjectsFinalAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "FindObjectsFinal",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id);
  }

  bool EncryptInit(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_key_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "EncryptInit",
        error,
        in_isolate_credential,
        in_session_id,
        in_mechanism_type,
        in_mechanism_parameter,
        in_key_handle);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void EncryptInitAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_key_handle,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "EncryptInit",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_mechanism_type,
        in_mechanism_parameter,
        in_key_handle);
  }

  bool Encrypt(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_data_out,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "Encrypt",
        error,
        in_isolate_credential,
        in_session_id,
        in_data_in,
        in_max_out_length);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_actual_out_length, out_data_out, out_result);
  }

  void EncryptAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*data_out*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "Encrypt",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_data_in,
        in_max_out_length);
  }

  bool EncryptUpdate(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_data_out,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "EncryptUpdate",
        error,
        in_isolate_credential,
        in_session_id,
        in_data_in,
        in_max_out_length);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_actual_out_length, out_data_out, out_result);
  }

  void EncryptUpdateAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*data_out*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "EncryptUpdate",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_data_in,
        in_max_out_length);
  }

  bool EncryptFinal(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_data_out,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "EncryptFinal",
        error,
        in_isolate_credential,
        in_session_id,
        in_max_out_length);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_actual_out_length, out_data_out, out_result);
  }

  void EncryptFinalAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*data_out*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "EncryptFinal",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_max_out_length);
  }

  bool EncryptCancel(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "EncryptCancel",
        error,
        in_isolate_credential,
        in_session_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void EncryptCancelAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "EncryptCancel",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id);
  }

  bool DecryptInit(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_key_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DecryptInit",
        error,
        in_isolate_credential,
        in_session_id,
        in_mechanism_type,
        in_mechanism_parameter,
        in_key_handle);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void DecryptInitAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_key_handle,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DecryptInit",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_mechanism_type,
        in_mechanism_parameter,
        in_key_handle);
  }

  bool Decrypt(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_data_out,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "Decrypt",
        error,
        in_isolate_credential,
        in_session_id,
        in_data_in,
        in_max_out_length);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_actual_out_length, out_data_out, out_result);
  }

  void DecryptAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*data_out*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "Decrypt",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_data_in,
        in_max_out_length);
  }

  bool DecryptUpdate(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_data_out,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DecryptUpdate",
        error,
        in_isolate_credential,
        in_session_id,
        in_data_in,
        in_max_out_length);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_actual_out_length, out_data_out, out_result);
  }

  void DecryptUpdateAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*data_out*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DecryptUpdate",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_data_in,
        in_max_out_length);
  }

  bool DecryptFinal(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_data_out,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DecryptFinal",
        error,
        in_isolate_credential,
        in_session_id,
        in_max_out_length);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_actual_out_length, out_data_out, out_result);
  }

  void DecryptFinalAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*data_out*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DecryptFinal",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_max_out_length);
  }

  bool DecryptCancel(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DecryptCancel",
        error,
        in_isolate_credential,
        in_session_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void DecryptCancelAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DecryptCancel",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id);
  }

  bool DigestInit(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DigestInit",
        error,
        in_isolate_credential,
        in_session_id,
        in_mechanism_type,
        in_mechanism_parameter);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void DigestInitAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DigestInit",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_mechanism_type,
        in_mechanism_parameter);
  }

  bool Digest(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_digest,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "Digest",
        error,
        in_isolate_credential,
        in_session_id,
        in_data_in,
        in_max_out_length);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_actual_out_length, out_digest, out_result);
  }

  void DigestAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*digest*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "Digest",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_data_in,
        in_max_out_length);
  }

  bool DigestUpdate(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DigestUpdate",
        error,
        in_isolate_credential,
        in_session_id,
        in_data_in);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void DigestUpdateAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DigestUpdate",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_data_in);
  }

  bool DigestKey(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_key_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DigestKey",
        error,
        in_isolate_credential,
        in_session_id,
        in_key_handle);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void DigestKeyAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_key_handle,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DigestKey",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_key_handle);
  }

  bool DigestFinal(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_digest,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DigestFinal",
        error,
        in_isolate_credential,
        in_session_id,
        in_max_out_length);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_actual_out_length, out_digest, out_result);
  }

  void DigestFinalAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*digest*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DigestFinal",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_max_out_length);
  }

  bool DigestCancel(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DigestCancel",
        error,
        in_isolate_credential,
        in_session_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void DigestCancelAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DigestCancel",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id);
  }

  bool SignInit(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_key_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "SignInit",
        error,
        in_isolate_credential,
        in_session_id,
        in_mechanism_type,
        in_mechanism_parameter,
        in_key_handle);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void SignInitAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_key_handle,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "SignInit",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_mechanism_type,
        in_mechanism_parameter,
        in_key_handle);
  }

  bool Sign(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_signature,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "Sign",
        error,
        in_isolate_credential,
        in_session_id,
        in_data,
        in_max_out_length);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_actual_out_length, out_signature, out_result);
  }

  void SignAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*signature*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "Sign",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_data,
        in_max_out_length);
  }

  bool SignUpdate(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_part,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "SignUpdate",
        error,
        in_isolate_credential,
        in_session_id,
        in_data_part);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void SignUpdateAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_part,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "SignUpdate",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_data_part);
  }

  bool SignFinal(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_signature,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "SignFinal",
        error,
        in_isolate_credential,
        in_session_id,
        in_max_out_length);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_actual_out_length, out_signature, out_result);
  }

  void SignFinalAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*signature*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "SignFinal",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_max_out_length);
  }

  bool SignCancel(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "SignCancel",
        error,
        in_isolate_credential,
        in_session_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SignCancelAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "SignCancel",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id);
  }

  bool SignRecoverInit(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_key_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "SignRecoverInit",
        error,
        in_isolate_credential,
        in_session_id,
        in_mechanism_type,
        in_mechanism_parameter,
        in_key_handle);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void SignRecoverInitAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_key_handle,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "SignRecoverInit",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_mechanism_type,
        in_mechanism_parameter,
        in_key_handle);
  }

  bool SignRecover(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_signature,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "SignRecover",
        error,
        in_isolate_credential,
        in_session_id,
        in_data,
        in_max_out_length);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_actual_out_length, out_signature, out_result);
  }

  void SignRecoverAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*signature*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "SignRecover",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_data,
        in_max_out_length);
  }

  bool VerifyInit(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_key_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "VerifyInit",
        error,
        in_isolate_credential,
        in_session_id,
        in_mechanism_type,
        in_mechanism_parameter,
        in_key_handle);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void VerifyInitAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_key_handle,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "VerifyInit",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_mechanism_type,
        in_mechanism_parameter,
        in_key_handle);
  }

  bool Verify(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data,
      const std::vector<uint8_t>& in_signature,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "Verify",
        error,
        in_isolate_credential,
        in_session_id,
        in_data,
        in_signature);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void VerifyAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data,
      const std::vector<uint8_t>& in_signature,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "Verify",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_data,
        in_signature);
  }

  bool VerifyUpdate(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_part,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "VerifyUpdate",
        error,
        in_isolate_credential,
        in_session_id,
        in_data_part);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void VerifyUpdateAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_part,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "VerifyUpdate",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_data_part);
  }

  bool VerifyFinal(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_signature,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "VerifyFinal",
        error,
        in_isolate_credential,
        in_session_id,
        in_signature);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void VerifyFinalAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_signature,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "VerifyFinal",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_signature);
  }

  bool VerifyCancel(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "VerifyCancel",
        error,
        in_isolate_credential,
        in_session_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void VerifyCancelAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "VerifyCancel",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id);
  }

  bool VerifyRecoverInit(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_key_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "VerifyRecoverInit",
        error,
        in_isolate_credential,
        in_session_id,
        in_mechanism_type,
        in_mechanism_parameter,
        in_key_handle);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void VerifyRecoverInitAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_key_handle,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "VerifyRecoverInit",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_mechanism_type,
        in_mechanism_parameter,
        in_key_handle);
  }

  bool VerifyRecover(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_signature,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_data,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "VerifyRecover",
        error,
        in_isolate_credential,
        in_session_id,
        in_signature,
        in_max_out_length);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_actual_out_length, out_data, out_result);
  }

  void VerifyRecoverAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_signature,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*data*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "VerifyRecover",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_signature,
        in_max_out_length);
  }

  bool DigestEncryptUpdate(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_data_out,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DigestEncryptUpdate",
        error,
        in_isolate_credential,
        in_session_id,
        in_data_in,
        in_max_out_length);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_actual_out_length, out_data_out, out_result);
  }

  void DigestEncryptUpdateAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*data_out*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DigestEncryptUpdate",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_data_in,
        in_max_out_length);
  }

  bool DecryptDigestUpdate(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_data_out,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DecryptDigestUpdate",
        error,
        in_isolate_credential,
        in_session_id,
        in_data_in,
        in_max_out_length);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_actual_out_length, out_data_out, out_result);
  }

  void DecryptDigestUpdateAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*data_out*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DecryptDigestUpdate",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_data_in,
        in_max_out_length);
  }

  bool SignEncryptUpdate(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_data_out,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "SignEncryptUpdate",
        error,
        in_isolate_credential,
        in_session_id,
        in_data_in,
        in_max_out_length);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_actual_out_length, out_data_out, out_result);
  }

  void SignEncryptUpdateAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*data_out*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "SignEncryptUpdate",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_data_in,
        in_max_out_length);
  }

  bool DecryptVerifyUpdate(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_data_out,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DecryptVerifyUpdate",
        error,
        in_isolate_credential,
        in_session_id,
        in_data_in,
        in_max_out_length);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_actual_out_length, out_data_out, out_result);
  }

  void DecryptVerifyUpdateAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_data_in,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*data_out*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DecryptVerifyUpdate",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_data_in,
        in_max_out_length);
  }

  bool GenerateKey(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      const std::vector<uint8_t>& in_attributes,
      uint64_t* out_key_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GenerateKey",
        error,
        in_isolate_credential,
        in_session_id,
        in_mechanism_type,
        in_mechanism_parameter,
        in_attributes);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_key_handle, out_result);
  }

  void GenerateKeyAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      const std::vector<uint8_t>& in_attributes,
      base::OnceCallback<void(uint64_t /*key_handle*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GenerateKey",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_mechanism_type,
        in_mechanism_parameter,
        in_attributes);
  }

  bool GenerateKeyPair(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      const std::vector<uint8_t>& in_public_attributes,
      const std::vector<uint8_t>& in_private_attributes,
      uint64_t* out_public_key_handle,
      uint64_t* out_private_key_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GenerateKeyPair",
        error,
        in_isolate_credential,
        in_session_id,
        in_mechanism_type,
        in_mechanism_parameter,
        in_public_attributes,
        in_private_attributes);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_public_key_handle, out_private_key_handle, out_result);
  }

  void GenerateKeyPairAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      const std::vector<uint8_t>& in_public_attributes,
      const std::vector<uint8_t>& in_private_attributes,
      base::OnceCallback<void(uint64_t /*public_key_handle*/, uint64_t /*private_key_handle*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GenerateKeyPair",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_mechanism_type,
        in_mechanism_parameter,
        in_public_attributes,
        in_private_attributes);
  }

  bool WrapKey(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_wrapping_key_handle,
      uint64_t in_key_handle,
      uint64_t in_max_out_length,
      uint64_t* out_actual_out_length,
      std::vector<uint8_t>* out_wrapped_key,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "WrapKey",
        error,
        in_isolate_credential,
        in_session_id,
        in_mechanism_type,
        in_mechanism_parameter,
        in_wrapping_key_handle,
        in_key_handle,
        in_max_out_length);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_actual_out_length, out_wrapped_key, out_result);
  }

  void WrapKeyAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_wrapping_key_handle,
      uint64_t in_key_handle,
      uint64_t in_max_out_length,
      base::OnceCallback<void(uint64_t /*actual_out_length*/, const std::vector<uint8_t>& /*wrapped_key*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "WrapKey",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_mechanism_type,
        in_mechanism_parameter,
        in_wrapping_key_handle,
        in_key_handle,
        in_max_out_length);
  }

  bool UnwrapKey(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_wrapping_key_handle,
      const std::vector<uint8_t>& in_wrapped_key,
      const std::vector<uint8_t>& in_attributes,
      uint64_t* out_key_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "UnwrapKey",
        error,
        in_isolate_credential,
        in_session_id,
        in_mechanism_type,
        in_mechanism_parameter,
        in_wrapping_key_handle,
        in_wrapped_key,
        in_attributes);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_key_handle, out_result);
  }

  void UnwrapKeyAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_wrapping_key_handle,
      const std::vector<uint8_t>& in_wrapped_key,
      const std::vector<uint8_t>& in_attributes,
      base::OnceCallback<void(uint64_t /*key_handle*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "UnwrapKey",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_mechanism_type,
        in_mechanism_parameter,
        in_wrapping_key_handle,
        in_wrapped_key,
        in_attributes);
  }

  bool DeriveKey(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_base_key_handle,
      const std::vector<uint8_t>& in_attributes,
      uint64_t* out_key_handle,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DeriveKey",
        error,
        in_isolate_credential,
        in_session_id,
        in_mechanism_type,
        in_mechanism_parameter,
        in_base_key_handle,
        in_attributes);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_key_handle, out_result);
  }

  void DeriveKeyAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_mechanism_type,
      const std::vector<uint8_t>& in_mechanism_parameter,
      uint64_t in_base_key_handle,
      const std::vector<uint8_t>& in_attributes,
      base::OnceCallback<void(uint64_t /*key_handle*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "DeriveKey",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_mechanism_type,
        in_mechanism_parameter,
        in_base_key_handle,
        in_attributes);
  }

  bool SeedRandom(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_seed,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "SeedRandom",
        error,
        in_isolate_credential,
        in_session_id,
        in_seed);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  void SeedRandomAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      const std::vector<uint8_t>& in_seed,
      base::OnceCallback<void(uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "SeedRandom",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_seed);
  }

  bool GenerateRandom(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_num_bytes,
      std::vector<uint8_t>* out_random_data,
      uint32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GenerateRandom",
        error,
        in_isolate_credential,
        in_session_id,
        in_num_bytes);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_random_data, out_result);
  }

  void GenerateRandomAsync(
      const std::vector<uint8_t>& in_isolate_credential,
      uint64_t in_session_id,
      uint64_t in_num_bytes,
      base::OnceCallback<void(const std::vector<uint8_t>& /*random_data*/, uint32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Chaps",
        "GenerateRandom",
        std::move(success_callback),
        std::move(error_callback),
        in_isolate_credential,
        in_session_id,
        in_num_bytes);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.Chaps"};
  const dbus::ObjectPath object_path_{"/org/chromium/Chaps"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CHAPS_CLIENT_OUT_DEFAULT_GEN_INCLUDE_CHAPS_DBUS_PROXIES_H
