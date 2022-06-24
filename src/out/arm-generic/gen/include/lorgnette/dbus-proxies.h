// Automatic generation of D-Bus interfaces:
//  - org.chromium.lorgnette.Manager
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_LORGNETTE_OUT_DEFAULT_GEN_INCLUDE_LORGNETTE_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_LORGNETTE_OUT_DEFAULT_GEN_INCLUDE_LORGNETTE_DBUS_PROXIES_H
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
namespace lorgnette {

// Abstract interface proxy for org::chromium::lorgnette::Manager.
class ManagerProxyInterface {
 public:
  virtual ~ManagerProxyInterface() = default;

  virtual bool ListScanners(
      std::vector<uint8_t>* out_scanner_list,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ListScannersAsync(
      base::OnceCallback<void(const std::vector<uint8_t>& /*scanner_list*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns the supported capabilities for scanner |device_name|.
  virtual bool GetScannerCapabilities(
      const std::string& in_device_name,
      std::vector<uint8_t>* out_capabilities,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns the supported capabilities for scanner |device_name|.
  virtual void GetScannerCapabilitiesAsync(
      const std::string& in_device_name,
      base::OnceCallback<void(const std::vector<uint8_t>& /*capabilities*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets up a multi-page scan job.
  // Initiates a connection to the scanner and prepares for scanning. Once
  // called, the client can call GetNextImage to fetch image data.
  //
  //   Serialized StartScanRequest proto specifying the scanner to use and
  //   the settings for the scan.
  virtual bool StartScan(
      const std::vector<uint8_t>& in_start_scan_request,
      std::vector<uint8_t>* out_start_scan_response,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets up a multi-page scan job.
  // Initiates a connection to the scanner and prepares for scanning. Once
  // called, the client can call GetNextImage to fetch image data.
  //
  //   Serialized StartScanRequest proto specifying the scanner to use and
  //   the settings for the scan.
  virtual void StartScanAsync(
      const std::vector<uint8_t>& in_start_scan_request,
      base::OnceCallback<void(const std::vector<uint8_t>& /*start_scan_response*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Reads the next image for the given scan job and outputs image data to
  // out_fd.
  //
  // A response will be sent once image acquisition has started successfully
  // or if acquiring the image failed.
  //
  //   Serialized GetNextImageRequest proto specifying the scan job uuid.
  //
  //   Output file descriptor. PNG image data will be written to this fd.
  virtual bool GetNextImage(
      const std::vector<uint8_t>& in_get_next_image_request,
      const brillo::dbus_utils::FileDescriptor& in_out_fd,
      std::vector<uint8_t>* out_get_next_image_response,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Reads the next image for the given scan job and outputs image data to
  // out_fd.
  //
  // A response will be sent once image acquisition has started successfully
  // or if acquiring the image failed.
  //
  //   Serialized GetNextImageRequest proto specifying the scan job uuid.
  //
  //   Output file descriptor. PNG image data will be written to this fd.
  virtual void GetNextImageAsync(
      const std::vector<uint8_t>& in_get_next_image_request,
      const brillo::dbus_utils::FileDescriptor& in_out_fd,
      base::OnceCallback<void(const std::vector<uint8_t>& /*get_next_image_response*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Attempts to cancel the scan job specified by the given UUID.
  //
  //   Serialized CancelScanRequest proto specifying the scan job to cancel.
  virtual bool CancelScan(
      const std::vector<uint8_t>& in_cancel_scan_request,
      std::vector<uint8_t>* out_cancel_scan_response,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Attempts to cancel the scan job specified by the given UUID.
  //
  //   Serialized CancelScanRequest proto specifying the scan job to cancel.
  virtual void CancelScanAsync(
      const std::vector<uint8_t>& in_cancel_scan_request,
      base::OnceCallback<void(const std::vector<uint8_t>& /*cancel_scan_response*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterScanStatusChangedSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace lorgnette
}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {
namespace lorgnette {

// Interface proxy for org::chromium::lorgnette::Manager.
class ManagerProxy final : public ManagerProxyInterface {
 public:
  ManagerProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name) :
          bus_{bus},
          service_name_{service_name},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  ManagerProxy(const ManagerProxy&) = delete;
  ManagerProxy& operator=(const ManagerProxy&) = delete;

  ~ManagerProxy() override {
  }

  void RegisterScanStatusChangedSignalHandler(
      const base::RepeatingCallback<void(const std::vector<uint8_t>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.lorgnette.Manager",
        "ScanStatusChanged",
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

  bool ListScanners(
      std::vector<uint8_t>* out_scanner_list,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.lorgnette.Manager",
        "ListScanners",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_scanner_list);
  }

  void ListScannersAsync(
      base::OnceCallback<void(const std::vector<uint8_t>& /*scanner_list*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.lorgnette.Manager",
        "ListScanners",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Returns the supported capabilities for scanner |device_name|.
  bool GetScannerCapabilities(
      const std::string& in_device_name,
      std::vector<uint8_t>* out_capabilities,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.lorgnette.Manager",
        "GetScannerCapabilities",
        error,
        in_device_name);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_capabilities);
  }

  // Returns the supported capabilities for scanner |device_name|.
  void GetScannerCapabilitiesAsync(
      const std::string& in_device_name,
      base::OnceCallback<void(const std::vector<uint8_t>& /*capabilities*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.lorgnette.Manager",
        "GetScannerCapabilities",
        std::move(success_callback),
        std::move(error_callback),
        in_device_name);
  }

  // Sets up a multi-page scan job.
  // Initiates a connection to the scanner and prepares for scanning. Once
  // called, the client can call GetNextImage to fetch image data.
  //
  //   Serialized StartScanRequest proto specifying the scanner to use and
  //   the settings for the scan.
  bool StartScan(
      const std::vector<uint8_t>& in_start_scan_request,
      std::vector<uint8_t>* out_start_scan_response,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.lorgnette.Manager",
        "StartScan",
        error,
        in_start_scan_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_start_scan_response);
  }

  // Sets up a multi-page scan job.
  // Initiates a connection to the scanner and prepares for scanning. Once
  // called, the client can call GetNextImage to fetch image data.
  //
  //   Serialized StartScanRequest proto specifying the scanner to use and
  //   the settings for the scan.
  void StartScanAsync(
      const std::vector<uint8_t>& in_start_scan_request,
      base::OnceCallback<void(const std::vector<uint8_t>& /*start_scan_response*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.lorgnette.Manager",
        "StartScan",
        std::move(success_callback),
        std::move(error_callback),
        in_start_scan_request);
  }

  // Reads the next image for the given scan job and outputs image data to
  // out_fd.
  //
  // A response will be sent once image acquisition has started successfully
  // or if acquiring the image failed.
  //
  //   Serialized GetNextImageRequest proto specifying the scan job uuid.
  //
  //   Output file descriptor. PNG image data will be written to this fd.
  bool GetNextImage(
      const std::vector<uint8_t>& in_get_next_image_request,
      const brillo::dbus_utils::FileDescriptor& in_out_fd,
      std::vector<uint8_t>* out_get_next_image_response,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.lorgnette.Manager",
        "GetNextImage",
        error,
        in_get_next_image_request,
        in_out_fd);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_get_next_image_response);
  }

  // Reads the next image for the given scan job and outputs image data to
  // out_fd.
  //
  // A response will be sent once image acquisition has started successfully
  // or if acquiring the image failed.
  //
  //   Serialized GetNextImageRequest proto specifying the scan job uuid.
  //
  //   Output file descriptor. PNG image data will be written to this fd.
  void GetNextImageAsync(
      const std::vector<uint8_t>& in_get_next_image_request,
      const brillo::dbus_utils::FileDescriptor& in_out_fd,
      base::OnceCallback<void(const std::vector<uint8_t>& /*get_next_image_response*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.lorgnette.Manager",
        "GetNextImage",
        std::move(success_callback),
        std::move(error_callback),
        in_get_next_image_request,
        in_out_fd);
  }

  // Attempts to cancel the scan job specified by the given UUID.
  //
  //   Serialized CancelScanRequest proto specifying the scan job to cancel.
  bool CancelScan(
      const std::vector<uint8_t>& in_cancel_scan_request,
      std::vector<uint8_t>* out_cancel_scan_response,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.lorgnette.Manager",
        "CancelScan",
        error,
        in_cancel_scan_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_cancel_scan_response);
  }

  // Attempts to cancel the scan job specified by the given UUID.
  //
  //   Serialized CancelScanRequest proto specifying the scan job to cancel.
  void CancelScanAsync(
      const std::vector<uint8_t>& in_cancel_scan_request,
      base::OnceCallback<void(const std::vector<uint8_t>& /*cancel_scan_response*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.lorgnette.Manager",
        "CancelScan",
        std::move(success_callback),
        std::move(error_callback),
        in_cancel_scan_request);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  std::string service_name_;
  const dbus::ObjectPath object_path_{"/org/chromium/lorgnette/Manager"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace lorgnette
}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_LORGNETTE_OUT_DEFAULT_GEN_INCLUDE_LORGNETTE_DBUS_PROXIES_H
