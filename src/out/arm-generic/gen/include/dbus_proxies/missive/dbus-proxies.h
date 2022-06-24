// Automatic generation of D-Bus interfaces:
//  - org.chromium.Missived
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_MISSIVE_OUT_DEFAULT_GEN_INCLUDE_DBUS_PROXIES_MISSIVE_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_MISSIVE_OUT_DEFAULT_GEN_INCLUDE_DBUS_PROXIES_MISSIVE_DBUS_PROXIES_H
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

// Abstract interface proxy for org::chromium::Missived.
class MissivedProxyInterface {
 public:
  virtual ~MissivedProxyInterface() = default;

  // Enqueues records for encryption, storage, and upload.
  virtual bool EnqueueRecord(
      const reporting::EnqueueRecordRequest& in_request,
      reporting::EnqueueRecordResponse* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Enqueues records for encryption, storage, and upload.
  virtual void EnqueueRecordAsync(
      const reporting::EnqueueRecordRequest& in_request,
      base::OnceCallback<void(const reporting::EnqueueRecordResponse& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Requests that the indicated priority queue is flushed.
  virtual bool FlushPriority(
      const reporting::FlushPriorityRequest& in_request,
      reporting::FlushPriorityResponse* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Requests that the indicated priority queue is flushed.
  virtual void FlushPriorityAsync(
      const reporting::FlushPriorityRequest& in_request,
      base::OnceCallback<void(const reporting::FlushPriorityResponse& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sent by Chrome to indicate the record was succesfully uploaded.
  // Record indicated by the provided SequenceInformation.
  virtual bool ConfirmRecordUpload(
      const reporting::ConfirmRecordUploadRequest& in_request,
      reporting::ConfirmRecordUploadResponse* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sent by Chrome to indicate the record was succesfully uploaded.
  // Record indicated by the provided SequenceInformation.
  virtual void ConfirmRecordUploadAsync(
      const reporting::ConfirmRecordUploadRequest& in_request,
      base::OnceCallback<void(const reporting::ConfirmRecordUploadResponse& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sent by Chrome to update the Missive Daemon Encryption Key.
  virtual bool UpdateEncryptionKey(
      const reporting::UpdateEncryptionKeyRequest& in_request,
      reporting::UpdateEncryptionKeyResponse* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sent by Chrome to update the Missive Daemon Encryption Key.
  virtual void UpdateEncryptionKeyAsync(
      const reporting::UpdateEncryptionKeyRequest& in_request,
      base::OnceCallback<void(const reporting::UpdateEncryptionKeyResponse& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::Missived.
class MissivedProxy final : public MissivedProxyInterface {
 public:
  MissivedProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  MissivedProxy(const MissivedProxy&) = delete;
  MissivedProxy& operator=(const MissivedProxy&) = delete;

  ~MissivedProxy() override {
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

  // Enqueues records for encryption, storage, and upload.
  bool EnqueueRecord(
      const reporting::EnqueueRecordRequest& in_request,
      reporting::EnqueueRecordResponse* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Missived",
        "EnqueueRecord",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  // Enqueues records for encryption, storage, and upload.
  void EnqueueRecordAsync(
      const reporting::EnqueueRecordRequest& in_request,
      base::OnceCallback<void(const reporting::EnqueueRecordResponse& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Missived",
        "EnqueueRecord",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  // Requests that the indicated priority queue is flushed.
  bool FlushPriority(
      const reporting::FlushPriorityRequest& in_request,
      reporting::FlushPriorityResponse* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Missived",
        "FlushPriority",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  // Requests that the indicated priority queue is flushed.
  void FlushPriorityAsync(
      const reporting::FlushPriorityRequest& in_request,
      base::OnceCallback<void(const reporting::FlushPriorityResponse& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Missived",
        "FlushPriority",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  // Sent by Chrome to indicate the record was succesfully uploaded.
  // Record indicated by the provided SequenceInformation.
  bool ConfirmRecordUpload(
      const reporting::ConfirmRecordUploadRequest& in_request,
      reporting::ConfirmRecordUploadResponse* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Missived",
        "ConfirmRecordUpload",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  // Sent by Chrome to indicate the record was succesfully uploaded.
  // Record indicated by the provided SequenceInformation.
  void ConfirmRecordUploadAsync(
      const reporting::ConfirmRecordUploadRequest& in_request,
      base::OnceCallback<void(const reporting::ConfirmRecordUploadResponse& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Missived",
        "ConfirmRecordUpload",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

  // Sent by Chrome to update the Missive Daemon Encryption Key.
  bool UpdateEncryptionKey(
      const reporting::UpdateEncryptionKeyRequest& in_request,
      reporting::UpdateEncryptionKeyResponse* out_reply,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Missived",
        "UpdateEncryptionKey",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_reply);
  }

  // Sent by Chrome to update the Missive Daemon Encryption Key.
  void UpdateEncryptionKeyAsync(
      const reporting::UpdateEncryptionKeyRequest& in_request,
      base::OnceCallback<void(const reporting::UpdateEncryptionKeyResponse& /*reply*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.Missived",
        "UpdateEncryptionKey",
        std::move(success_callback),
        std::move(error_callback),
        in_request);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.Missived"};
  const dbus::ObjectPath object_path_{"/org/chromium/Missived"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_MISSIVE_OUT_DEFAULT_GEN_INCLUDE_DBUS_PROXIES_MISSIVE_DBUS_PROXIES_H
