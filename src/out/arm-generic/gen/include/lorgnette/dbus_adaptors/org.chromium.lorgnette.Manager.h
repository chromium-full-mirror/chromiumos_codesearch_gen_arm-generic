// Automatic generation of D-Bus interfaces:
//  - org.chromium.lorgnette.Manager
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_LORGNETTE_OUT_DEFAULT_GEN_INCLUDE_LORGNETTE_DBUS_ADAPTORS_ORG_CHROMIUM_LORGNETTE_MANAGER_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_LORGNETTE_OUT_DEFAULT_GEN_INCLUDE_LORGNETTE_DBUS_ADAPTORS_ORG_CHROMIUM_LORGNETTE_MANAGER_H
#include <memory>
#include <string>
#include <tuple>
#include <vector>

#include <base/files/scoped_file.h>
#include <dbus/object_path.h>
#include <brillo/any.h>
#include <brillo/dbus/dbus_object.h>
#include <brillo/dbus/exported_object_manager.h>
#include <brillo/dbus/file_descriptor.h>
#include <brillo/variant_dictionary.h>

namespace org {
namespace chromium {
namespace lorgnette {

// Interface definition for org::chromium::lorgnette::Manager.
class ManagerInterface {
 public:
  virtual ~ManagerInterface() = default;

  virtual bool ListScanners(
      brillo::ErrorPtr* error,
      std::vector<uint8_t>* out_scanner_list) = 0;
  // Returns the supported capabilities for scanner |device_name|.
  virtual bool GetScannerCapabilities(
      brillo::ErrorPtr* error,
      const std::string& in_device_name,
      std::vector<uint8_t>* out_capabilities) = 0;
  // Sets up a multi-page scan job.
  // Initiates a connection to the scanner and prepares for scanning. Once
  // called, the client can call GetNextImage to fetch image data.
  //
  //   Serialized StartScanRequest proto specifying the scanner to use and
  //   the settings for the scan.
  virtual std::vector<uint8_t> StartScan(
      const std::vector<uint8_t>& in_start_scan_request) = 0;
  // Reads the next image for the given scan job and outputs image data to
  // out_fd.
  //
  // A response will be sent once image acquisition has started successfully
  // or if acquiring the image failed.
  //
  //   Serialized GetNextImageRequest proto specifying the scan job uuid.
  //
  //   Output file descriptor. PNG image data will be written to this fd.
  virtual void GetNextImage(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<std::vector<uint8_t>>> response,
      const std::vector<uint8_t>& in_get_next_image_request,
      const base::ScopedFD& in_out_fd) = 0;
  // Attempts to cancel the scan job specified by the given UUID.
  //
  //   Serialized CancelScanRequest proto specifying the scan job to cancel.
  virtual std::vector<uint8_t> CancelScan(
      const std::vector<uint8_t>& in_cancel_scan_request) = 0;
};

// Interface adaptor for org::chromium::lorgnette::Manager.
class ManagerAdaptor {
 public:
  ManagerAdaptor(ManagerInterface* interface) : interface_(interface) {}
  ManagerAdaptor(const ManagerAdaptor&) = delete;
  ManagerAdaptor& operator=(const ManagerAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.lorgnette.Manager");

    itf->AddSimpleMethodHandlerWithError(
        "ListScanners",
        base::Unretained(interface_),
        &ManagerInterface::ListScanners);
    itf->AddSimpleMethodHandlerWithError(
        "GetScannerCapabilities",
        base::Unretained(interface_),
        &ManagerInterface::GetScannerCapabilities);
    itf->AddSimpleMethodHandler(
        "StartScan",
        base::Unretained(interface_),
        &ManagerInterface::StartScan);
    itf->AddMethodHandler(
        "GetNextImage",
        base::Unretained(interface_),
        &ManagerInterface::GetNextImage);
    itf->AddSimpleMethodHandler(
        "CancelScan",
        base::Unretained(interface_),
        &ManagerInterface::CancelScan);

    signal_ScanStatusChanged_ = itf->RegisterSignalOfType<SignalScanStatusChangedType>("ScanStatusChanged");
  }

  // A serialized ScanStatusChangedSignal proto, containing a scan id, scan
  // state, and potentially a failure reason or progress percentage.
  void SendScanStatusChangedSignal(
      const std::vector<uint8_t>& in_scan_status_changed_signal) {
    auto signal = signal_ScanStatusChanged_.lock();
    if (signal)
      signal->Send(in_scan_status_changed_signal);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/lorgnette/Manager"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.lorgnette.Manager\">\n"
        "    <method name=\"ListScanners\">\n"
        "      <arg name=\"scanner_list\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetScannerCapabilities\">\n"
        "      <arg name=\"device_name\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"capabilities\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"StartScan\">\n"
        "      <arg name=\"start_scan_request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"start_scan_response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetNextImage\">\n"
        "      <arg name=\"get_next_image_request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"out_fd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"get_next_image_response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"CancelScan\">\n"
        "      <arg name=\"cancel_scan_request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"cancel_scan_response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <signal name=\"ScanStatusChanged\">\n"
        "      <arg name=\"scan_status_changed_signal\" type=\"ay\"/>\n"
        "    </signal>\n"
        "  </interface>\n";
  }

 private:
  using SignalScanStatusChangedType = brillo::dbus_utils::DBusSignal<
      std::vector<uint8_t> /*scan_status_changed_signal*/>;
  std::weak_ptr<SignalScanStatusChangedType> signal_ScanStatusChanged_;

  ManagerInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace lorgnette
}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_LORGNETTE_OUT_DEFAULT_GEN_INCLUDE_LORGNETTE_DBUS_ADAPTORS_ORG_CHROMIUM_LORGNETTE_MANAGER_H
