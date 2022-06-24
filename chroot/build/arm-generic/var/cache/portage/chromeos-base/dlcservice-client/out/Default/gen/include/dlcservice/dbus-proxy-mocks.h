// Automatic generation of D-Bus interface mock proxies for:
//  - org.chromium.DlcServiceInterface
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DLCSERVICE_CLIENT_OUT_DEFAULT_GEN_INCLUDE_DLCSERVICE_DBUS_PROXY_MOCKS_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DLCSERVICE_CLIENT_OUT_DEFAULT_GEN_INCLUDE_DLCSERVICE_DBUS_PROXY_MOCKS_H
#include <string>
#include <vector>

#include <base/callback_forward.h>
#include <base/logging.h>
#include <brillo/any.h>
#include <brillo/errors/error.h>
#include <brillo/variant_dictionary.h>
#include <gmock/gmock.h>

#include "dlcservice/dbus-proxies.h"

namespace org {
namespace chromium {

// Mock object for DlcServiceInterfaceProxyInterface.
class DlcServiceInterfaceProxyMock : public DlcServiceInterfaceProxyInterface {
 public:
  DlcServiceInterfaceProxyMock() = default;
  DlcServiceInterfaceProxyMock(const DlcServiceInterfaceProxyMock&) = delete;
  DlcServiceInterfaceProxyMock& operator=(const DlcServiceInterfaceProxyMock&) = delete;

  MOCK_METHOD3(InstallDlc,
               bool(const std::string& /*in_id*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(InstallDlcAsync,
               void(const std::string& /*in_id*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(InstallWithOmahaUrl,
               bool(const std::string& /*in_id*/,
                    const std::string& /*in_omaha_url*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(InstallWithOmahaUrlAsync,
               void(const std::string& /*in_id*/,
                    const std::string& /*in_omaha_url*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(Install,
               bool(const dlcservice::InstallRequest& /*in_install_request*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(InstallAsync,
               void(const dlcservice::InstallRequest& /*in_install_request*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(Uninstall,
               bool(const std::string& /*in_id*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(UninstallAsync,
               void(const std::string& /*in_id*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(Purge,
               bool(const std::string& /*in_id*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(PurgeAsync,
               void(const std::string& /*in_id*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetInstalled,
               bool(std::vector<std::string>* /*out_ids*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetInstalledAsync,
               void(base::OnceCallback<void(const std::vector<std::string>& /*ids*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetExistingDlcs,
               bool(dlcservice::DlcsWithContent* /*out_dlc_list*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetExistingDlcsAsync,
               void(base::OnceCallback<void(const dlcservice::DlcsWithContent& /*dlc_list*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetDlcsToUpdate,
               bool(std::vector<std::string>* /*out_ids*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetDlcsToUpdateAsync,
               void(base::OnceCallback<void(const std::vector<std::string>& /*ids*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetDlcState,
               bool(const std::string& /*in_id*/,
                    dlcservice::DlcState* /*out_state*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetDlcStateAsync,
               void(const std::string& /*in_id*/,
                    base::OnceCallback<void(const dlcservice::DlcState& /*state*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(InstallCompleted,
               bool(const std::vector<std::string>& /*in_ids*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(InstallCompletedAsync,
               void(const std::vector<std::string>& /*in_ids*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(UpdateCompleted,
               bool(const std::vector<std::string>& /*in_ids*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(UpdateCompletedAsync,
               void(const std::vector<std::string>& /*in_ids*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  void RegisterDlcStateChangedSignalHandler(
    const base::RepeatingCallback<void(const dlcservice::DlcState&)>& signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterDlcStateChangedSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterDlcStateChangedSignalHandler,
               void(const base::RepeatingCallback<void(const dlcservice::DlcState&)>& /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DLCSERVICE_CLIENT_OUT_DEFAULT_GEN_INCLUDE_DLCSERVICE_DBUS_PROXY_MOCKS_H
