// Automatic generation of D-Bus interfaces:
//  - org.chromium.DlcServiceInterface
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DLCSERVICE_OUT_DEFAULT_GEN_INCLUDE_DLCSERVICE_DBUS_ADAPTORS_ORG_CHROMIUM_DLCSERVICEINTERFACE_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DLCSERVICE_OUT_DEFAULT_GEN_INCLUDE_DLCSERVICE_DBUS_ADAPTORS_ORG_CHROMIUM_DLCSERVICEINTERFACE_H
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

// Interface definition for org::chromium::DlcServiceInterface.
class DlcServiceInterfaceInterface {
 public:
  virtual ~DlcServiceInterfaceInterface() = default;

  // Install a Downloadable Content (DLC).
  virtual bool InstallDlc(
      brillo::ErrorPtr* error,
      const std::string& in_id) = 0;
  // Install a DLC with a given Omaha URL.
  virtual bool InstallWithOmahaUrl(
      brillo::ErrorPtr* error,
      const std::string& in_id,
      const std::string& in_omaha_url) = 0;
  // Install a Downloadable Content (DLC).
  virtual bool Install(
      brillo::ErrorPtr* error,
      const dlcservice::InstallRequest& in_install_request) = 0;
  // Uninstall a Downloadable Content (DLC).
  virtual bool Uninstall(
      brillo::ErrorPtr* error,
      const std::string& in_id) = 0;
  // Removes a DLC and all files related to it.
  virtual bool Purge(
      brillo::ErrorPtr* error,
      const std::string& in_id) = 0;
  // Returns a list of installed Downloadable Content (DLC) IDs that are
  // installed.
  virtual bool GetInstalled(
      brillo::ErrorPtr* error,
      std::vector<std::string>* out_ids) = 0;
  // Returns a list of DLCs that have content on disk.
  virtual bool GetExistingDlcs(
      brillo::ErrorPtr* error,
      dlcservice::DlcsWithContent* out_dlc_list) = 0;
  // Returns a list of DLCs that need to be updated. The implementation needs
  // to make sure the target DLC images are ready to be updated.
  virtual bool GetDlcsToUpdate(
      brillo::ErrorPtr* error,
      std::vector<std::string>* out_ids) = 0;
  // Returns the state of a DLC.
  virtual bool GetDlcState(
      brillo::ErrorPtr* error,
      const std::string& in_id,
      dlcservice::DlcState* out_state) = 0;
  // Notifies dlcservice that the installation is complete for the given DLCs.
  virtual bool InstallCompleted(
      brillo::ErrorPtr* error,
      const std::vector<std::string>& in_ids) = 0;
  // Notifies dlcservice that the update is complete for the given DLCs.
  virtual bool UpdateCompleted(
      brillo::ErrorPtr* error,
      const std::vector<std::string>& in_ids) = 0;
};

// Interface adaptor for org::chromium::DlcServiceInterface.
class DlcServiceInterfaceAdaptor {
 public:
  DlcServiceInterfaceAdaptor(DlcServiceInterfaceInterface* interface) : interface_(interface) {}
  DlcServiceInterfaceAdaptor(const DlcServiceInterfaceAdaptor&) = delete;
  DlcServiceInterfaceAdaptor& operator=(const DlcServiceInterfaceAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.DlcServiceInterface");

    itf->AddSimpleMethodHandlerWithError(
        "InstallDlc",
        base::Unretained(interface_),
        &DlcServiceInterfaceInterface::InstallDlc);
    itf->AddSimpleMethodHandlerWithError(
        "InstallWithOmahaUrl",
        base::Unretained(interface_),
        &DlcServiceInterfaceInterface::InstallWithOmahaUrl);
    itf->AddSimpleMethodHandlerWithError(
        "Install",
        base::Unretained(interface_),
        &DlcServiceInterfaceInterface::Install);
    itf->AddSimpleMethodHandlerWithError(
        "Uninstall",
        base::Unretained(interface_),
        &DlcServiceInterfaceInterface::Uninstall);
    itf->AddSimpleMethodHandlerWithError(
        "Purge",
        base::Unretained(interface_),
        &DlcServiceInterfaceInterface::Purge);
    itf->AddSimpleMethodHandlerWithError(
        "GetInstalled",
        base::Unretained(interface_),
        &DlcServiceInterfaceInterface::GetInstalled);
    itf->AddSimpleMethodHandlerWithError(
        "GetExistingDlcs",
        base::Unretained(interface_),
        &DlcServiceInterfaceInterface::GetExistingDlcs);
    itf->AddSimpleMethodHandlerWithError(
        "GetDlcsToUpdate",
        base::Unretained(interface_),
        &DlcServiceInterfaceInterface::GetDlcsToUpdate);
    itf->AddSimpleMethodHandlerWithError(
        "GetDlcState",
        base::Unretained(interface_),
        &DlcServiceInterfaceInterface::GetDlcState);
    itf->AddSimpleMethodHandlerWithError(
        "InstallCompleted",
        base::Unretained(interface_),
        &DlcServiceInterfaceInterface::InstallCompleted);
    itf->AddSimpleMethodHandlerWithError(
        "UpdateCompleted",
        base::Unretained(interface_),
        &DlcServiceInterfaceInterface::UpdateCompleted);

    signal_DlcStateChanged_ = itf->RegisterSignalOfType<SignalDlcStateChangedType>("DlcStateChanged");
  }

  void SendDlcStateChangedSignal(
      const dlcservice::DlcState& in_state) {
    auto signal = signal_DlcStateChanged_.lock();
    if (signal)
      signal->Send(in_state);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/DlcService"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.DlcServiceInterface\">\n"
        "    <method name=\"InstallDlc\">\n"
        "      <arg name=\"id\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"InstallWithOmahaUrl\">\n"
        "      <arg name=\"id\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"omaha_url\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"Install\">\n"
        "      <arg name=\"install_request\" type=\"ay\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"Uninstall\">\n"
        "      <arg name=\"id\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"Purge\">\n"
        "      <arg name=\"id\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"GetInstalled\">\n"
        "      <arg name=\"ids\" type=\"as\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetExistingDlcs\">\n"
        "      <arg name=\"dlc_list\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetDlcsToUpdate\">\n"
        "      <arg name=\"ids\" type=\"as\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetDlcState\">\n"
        "      <arg name=\"id\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"state\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"InstallCompleted\">\n"
        "      <arg name=\"ids\" type=\"as\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"UpdateCompleted\">\n"
        "      <arg name=\"ids\" type=\"as\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <signal name=\"DlcStateChanged\">\n"
        "      <arg name=\"state\" type=\"ay\"/>\n"
        "    </signal>\n"
        "  </interface>\n";
  }

 private:
  using SignalDlcStateChangedType = brillo::dbus_utils::DBusSignal<
      dlcservice::DlcState /*state*/>;
  std::weak_ptr<SignalDlcStateChangedType> signal_DlcStateChanged_;

  DlcServiceInterfaceInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DLCSERVICE_OUT_DEFAULT_GEN_INCLUDE_DLCSERVICE_DBUS_ADAPTORS_ORG_CHROMIUM_DLCSERVICEINTERFACE_H
