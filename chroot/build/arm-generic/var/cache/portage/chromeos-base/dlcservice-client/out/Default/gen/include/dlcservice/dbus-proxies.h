// Automatic generation of D-Bus interfaces:
//  - org.chromium.DlcServiceInterface
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DLCSERVICE_CLIENT_OUT_DEFAULT_GEN_INCLUDE_DLCSERVICE_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DLCSERVICE_CLIENT_OUT_DEFAULT_GEN_INCLUDE_DLCSERVICE_DBUS_PROXIES_H
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

// Abstract interface proxy for org::chromium::DlcServiceInterface.
class DlcServiceInterfaceProxyInterface {
 public:
  virtual ~DlcServiceInterfaceProxyInterface() = default;

  // Install a Downloadable Content (DLC).
  virtual bool InstallDlc(
      const std::string& in_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Install a Downloadable Content (DLC).
  virtual void InstallDlcAsync(
      const std::string& in_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Install a DLC with a given Omaha URL.
  virtual bool InstallWithOmahaUrl(
      const std::string& in_id,
      const std::string& in_omaha_url,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Install a DLC with a given Omaha URL.
  virtual void InstallWithOmahaUrlAsync(
      const std::string& in_id,
      const std::string& in_omaha_url,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Install a Downloadable Content (DLC).
  virtual bool Install(
      const dlcservice::InstallRequest& in_install_request,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Install a Downloadable Content (DLC).
  virtual void InstallAsync(
      const dlcservice::InstallRequest& in_install_request,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Uninstall a Downloadable Content (DLC).
  virtual bool Uninstall(
      const std::string& in_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Uninstall a Downloadable Content (DLC).
  virtual void UninstallAsync(
      const std::string& in_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Removes a DLC and all files related to it.
  virtual bool Purge(
      const std::string& in_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Removes a DLC and all files related to it.
  virtual void PurgeAsync(
      const std::string& in_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns a list of installed Downloadable Content (DLC) IDs that are
  // installed.
  virtual bool GetInstalled(
      std::vector<std::string>* out_ids,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns a list of installed Downloadable Content (DLC) IDs that are
  // installed.
  virtual void GetInstalledAsync(
      base::OnceCallback<void(const std::vector<std::string>& /*ids*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns a list of DLCs that have content on disk.
  virtual bool GetExistingDlcs(
      dlcservice::DlcsWithContent* out_dlc_list,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns a list of DLCs that have content on disk.
  virtual void GetExistingDlcsAsync(
      base::OnceCallback<void(const dlcservice::DlcsWithContent& /*dlc_list*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns a list of DLCs that need to be updated. The implementation needs
  // to make sure the target DLC images are ready to be updated.
  virtual bool GetDlcsToUpdate(
      std::vector<std::string>* out_ids,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns a list of DLCs that need to be updated. The implementation needs
  // to make sure the target DLC images are ready to be updated.
  virtual void GetDlcsToUpdateAsync(
      base::OnceCallback<void(const std::vector<std::string>& /*ids*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns the state of a DLC.
  virtual bool GetDlcState(
      const std::string& in_id,
      dlcservice::DlcState* out_state,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns the state of a DLC.
  virtual void GetDlcStateAsync(
      const std::string& in_id,
      base::OnceCallback<void(const dlcservice::DlcState& /*state*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Notifies dlcservice that the installation is complete for the given DLCs.
  virtual bool InstallCompleted(
      const std::vector<std::string>& in_ids,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Notifies dlcservice that the installation is complete for the given DLCs.
  virtual void InstallCompletedAsync(
      const std::vector<std::string>& in_ids,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Notifies dlcservice that the update is complete for the given DLCs.
  virtual bool UpdateCompleted(
      const std::vector<std::string>& in_ids,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Notifies dlcservice that the update is complete for the given DLCs.
  virtual void UpdateCompletedAsync(
      const std::vector<std::string>& in_ids,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterDlcStateChangedSignalHandler(
      const base::RepeatingCallback<void(const dlcservice::DlcState&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::DlcServiceInterface.
class DlcServiceInterfaceProxy final : public DlcServiceInterfaceProxyInterface {
 public:
  DlcServiceInterfaceProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  DlcServiceInterfaceProxy(const DlcServiceInterfaceProxy&) = delete;
  DlcServiceInterfaceProxy& operator=(const DlcServiceInterfaceProxy&) = delete;

  ~DlcServiceInterfaceProxy() override {
  }

  void RegisterDlcStateChangedSignalHandler(
      const base::RepeatingCallback<void(const dlcservice::DlcState&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.DlcServiceInterface",
        "DlcStateChanged",
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

  // Install a Downloadable Content (DLC).
  bool InstallDlc(
      const std::string& in_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlcServiceInterface",
        "InstallDlc",
        error,
        in_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Install a Downloadable Content (DLC).
  void InstallDlcAsync(
      const std::string& in_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlcServiceInterface",
        "InstallDlc",
        std::move(success_callback),
        std::move(error_callback),
        in_id);
  }

  // Install a DLC with a given Omaha URL.
  bool InstallWithOmahaUrl(
      const std::string& in_id,
      const std::string& in_omaha_url,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlcServiceInterface",
        "InstallWithOmahaUrl",
        error,
        in_id,
        in_omaha_url);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Install a DLC with a given Omaha URL.
  void InstallWithOmahaUrlAsync(
      const std::string& in_id,
      const std::string& in_omaha_url,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlcServiceInterface",
        "InstallWithOmahaUrl",
        std::move(success_callback),
        std::move(error_callback),
        in_id,
        in_omaha_url);
  }

  // Install a Downloadable Content (DLC).
  bool Install(
      const dlcservice::InstallRequest& in_install_request,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlcServiceInterface",
        "Install",
        error,
        in_install_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Install a Downloadable Content (DLC).
  void InstallAsync(
      const dlcservice::InstallRequest& in_install_request,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlcServiceInterface",
        "Install",
        std::move(success_callback),
        std::move(error_callback),
        in_install_request);
  }

  // Uninstall a Downloadable Content (DLC).
  bool Uninstall(
      const std::string& in_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlcServiceInterface",
        "Uninstall",
        error,
        in_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Uninstall a Downloadable Content (DLC).
  void UninstallAsync(
      const std::string& in_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlcServiceInterface",
        "Uninstall",
        std::move(success_callback),
        std::move(error_callback),
        in_id);
  }

  // Removes a DLC and all files related to it.
  bool Purge(
      const std::string& in_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlcServiceInterface",
        "Purge",
        error,
        in_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Removes a DLC and all files related to it.
  void PurgeAsync(
      const std::string& in_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlcServiceInterface",
        "Purge",
        std::move(success_callback),
        std::move(error_callback),
        in_id);
  }

  // Returns a list of installed Downloadable Content (DLC) IDs that are
  // installed.
  bool GetInstalled(
      std::vector<std::string>* out_ids,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlcServiceInterface",
        "GetInstalled",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_ids);
  }

  // Returns a list of installed Downloadable Content (DLC) IDs that are
  // installed.
  void GetInstalledAsync(
      base::OnceCallback<void(const std::vector<std::string>& /*ids*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlcServiceInterface",
        "GetInstalled",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Returns a list of DLCs that have content on disk.
  bool GetExistingDlcs(
      dlcservice::DlcsWithContent* out_dlc_list,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlcServiceInterface",
        "GetExistingDlcs",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_dlc_list);
  }

  // Returns a list of DLCs that have content on disk.
  void GetExistingDlcsAsync(
      base::OnceCallback<void(const dlcservice::DlcsWithContent& /*dlc_list*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlcServiceInterface",
        "GetExistingDlcs",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Returns a list of DLCs that need to be updated. The implementation needs
  // to make sure the target DLC images are ready to be updated.
  bool GetDlcsToUpdate(
      std::vector<std::string>* out_ids,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlcServiceInterface",
        "GetDlcsToUpdate",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_ids);
  }

  // Returns a list of DLCs that need to be updated. The implementation needs
  // to make sure the target DLC images are ready to be updated.
  void GetDlcsToUpdateAsync(
      base::OnceCallback<void(const std::vector<std::string>& /*ids*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlcServiceInterface",
        "GetDlcsToUpdate",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Returns the state of a DLC.
  bool GetDlcState(
      const std::string& in_id,
      dlcservice::DlcState* out_state,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlcServiceInterface",
        "GetDlcState",
        error,
        in_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_state);
  }

  // Returns the state of a DLC.
  void GetDlcStateAsync(
      const std::string& in_id,
      base::OnceCallback<void(const dlcservice::DlcState& /*state*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlcServiceInterface",
        "GetDlcState",
        std::move(success_callback),
        std::move(error_callback),
        in_id);
  }

  // Notifies dlcservice that the installation is complete for the given DLCs.
  bool InstallCompleted(
      const std::vector<std::string>& in_ids,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlcServiceInterface",
        "InstallCompleted",
        error,
        in_ids);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Notifies dlcservice that the installation is complete for the given DLCs.
  void InstallCompletedAsync(
      const std::vector<std::string>& in_ids,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlcServiceInterface",
        "InstallCompleted",
        std::move(success_callback),
        std::move(error_callback),
        in_ids);
  }

  // Notifies dlcservice that the update is complete for the given DLCs.
  bool UpdateCompleted(
      const std::vector<std::string>& in_ids,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlcServiceInterface",
        "UpdateCompleted",
        error,
        in_ids);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Notifies dlcservice that the update is complete for the given DLCs.
  void UpdateCompletedAsync(
      const std::vector<std::string>& in_ids,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.DlcServiceInterface",
        "UpdateCompleted",
        std::move(success_callback),
        std::move(error_callback),
        in_ids);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.DlcService"};
  const dbus::ObjectPath object_path_{"/org/chromium/DlcService"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DLCSERVICE_CLIENT_OUT_DEFAULT_GEN_INCLUDE_DLCSERVICE_DBUS_PROXIES_H
