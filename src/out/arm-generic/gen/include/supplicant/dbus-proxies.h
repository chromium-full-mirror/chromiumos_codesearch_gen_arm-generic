// Automatic generation of D-Bus interfaces:
//  - fi.w1.wpa_supplicant1.BSS
//  - fi.w1.wpa_supplicant1.Interface
//  - fi.w1.wpa_supplicant1.Network
//  - fi.w1.wpa_supplicant1
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_SUPPLICANT_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_SUPPLICANT_DBUS_PROXIES_H
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

namespace fi {
namespace w1 {
namespace wpa_supplicant1 {

// Abstract interface proxy for fi::w1::wpa_supplicant1::BSS.
class BSSProxyInterface {
 public:
  virtual ~BSSProxyInterface() = default;

  virtual void RegisterPropertiesChangedSignalHandler(
      const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  static const char* BSSIDName() { return "BSSID"; }
  virtual const std::vector<uint8_t>& bssid() const = 0;
  static const char* SSIDName() { return "SSID"; }
  virtual const std::vector<uint8_t>& ssid() const = 0;
  static const char* WPAName() { return "WPA"; }
  virtual const brillo::VariantDictionary& wpa() const = 0;
  static const char* RSNName() { return "RSN"; }
  virtual const brillo::VariantDictionary& rsn() const = 0;
  static const char* IEsName() { return "IEs"; }
  virtual const std::vector<uint8_t>& ies() const = 0;
  static const char* PrivacyName() { return "Privacy"; }
  virtual bool privacy() const = 0;
  static const char* ModeName() { return "Mode"; }
  virtual const std::string& mode() const = 0;
  static const char* FrequencyName() { return "Frequency"; }
  virtual uint16_t frequency() const = 0;
  static const char* RatesName() { return "Rates"; }
  virtual const std::vector<uint32_t>& rates() const = 0;
  static const char* SignalName() { return "Signal"; }
  virtual int16_t signal() const = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;

  virtual void InitializeProperties(
      const base::RepeatingCallback<void(BSSProxyInterface*, const std::string&)>& callback) = 0;
};

}  // namespace wpa_supplicant1
}  // namespace w1
}  // namespace fi

namespace fi {
namespace w1 {
namespace wpa_supplicant1 {

// Interface proxy for fi::w1::wpa_supplicant1::BSS.
class BSSProxy final : public BSSProxyInterface {
 public:
  class PropertySet : public dbus::PropertySet {
   public:
    PropertySet(dbus::ObjectProxy* object_proxy,
                const PropertyChangedCallback& callback)
        : dbus::PropertySet{object_proxy,
                            "fi.w1.wpa_supplicant1.BSS",
                            callback} {
      RegisterProperty(BSSIDName(), &bssid);
      RegisterProperty(SSIDName(), &ssid);
      RegisterProperty(WPAName(), &wpa);
      RegisterProperty(RSNName(), &rsn);
      RegisterProperty(IEsName(), &ies);
      RegisterProperty(PrivacyName(), &privacy);
      RegisterProperty(ModeName(), &mode);
      RegisterProperty(FrequencyName(), &frequency);
      RegisterProperty(RatesName(), &rates);
      RegisterProperty(SignalName(), &signal);
    }
    PropertySet(const PropertySet&) = delete;
    PropertySet& operator=(const PropertySet&) = delete;

    brillo::dbus_utils::Property<std::vector<uint8_t>> bssid;
    brillo::dbus_utils::Property<std::vector<uint8_t>> ssid;
    brillo::dbus_utils::Property<brillo::VariantDictionary> wpa;
    brillo::dbus_utils::Property<brillo::VariantDictionary> rsn;
    brillo::dbus_utils::Property<std::vector<uint8_t>> ies;
    brillo::dbus_utils::Property<bool> privacy;
    brillo::dbus_utils::Property<std::string> mode;
    brillo::dbus_utils::Property<uint16_t> frequency;
    brillo::dbus_utils::Property<std::vector<uint32_t>> rates;
    brillo::dbus_utils::Property<int16_t> signal;

  };

  BSSProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name,
      const dbus::ObjectPath& object_path) :
          bus_{bus},
          service_name_{service_name},
          object_path_{object_path},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  BSSProxy(const BSSProxy&) = delete;
  BSSProxy& operator=(const BSSProxy&) = delete;

  ~BSSProxy() override {
  }

  void RegisterPropertiesChangedSignalHandler(
      const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.BSS",
        "PropertiesChanged",
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

  void InitializeProperties(
      const base::RepeatingCallback<void(BSSProxyInterface*, const std::string&)>& callback) override {
    property_set_.reset(
        new PropertySet(dbus_object_proxy_, base::BindRepeating(callback, this)));
    property_set_->ConnectSignals();
    property_set_->GetAll();
  }

  const PropertySet* GetProperties() const { return &(*property_set_); }
  PropertySet* GetProperties() { return &(*property_set_); }

  const std::vector<uint8_t>& bssid() const override {
    return property_set_->bssid.value();
  }

  const std::vector<uint8_t>& ssid() const override {
    return property_set_->ssid.value();
  }

  const brillo::VariantDictionary& wpa() const override {
    return property_set_->wpa.value();
  }

  const brillo::VariantDictionary& rsn() const override {
    return property_set_->rsn.value();
  }

  const std::vector<uint8_t>& ies() const override {
    return property_set_->ies.value();
  }

  bool privacy() const override {
    return property_set_->privacy.value();
  }

  const std::string& mode() const override {
    return property_set_->mode.value();
  }

  uint16_t frequency() const override {
    return property_set_->frequency.value();
  }

  const std::vector<uint32_t>& rates() const override {
    return property_set_->rates.value();
  }

  int16_t signal() const override {
    return property_set_->signal.value();
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  std::string service_name_;
  dbus::ObjectPath object_path_;
  dbus::ObjectProxy* dbus_object_proxy_;
  std::unique_ptr<PropertySet> property_set_;

};

}  // namespace wpa_supplicant1
}  // namespace w1
}  // namespace fi

namespace fi {
namespace w1 {
namespace wpa_supplicant1 {

// Abstract interface proxy for fi::w1::wpa_supplicant1::Interface.
class InterfaceProxyInterface {
 public:
  virtual ~InterfaceProxyInterface() = default;

  virtual bool Scan(
      const brillo::VariantDictionary& in_args,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ScanAsync(
      const brillo::VariantDictionary& in_args,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Disconnect(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DisconnectAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool AddNetwork(
      const brillo::VariantDictionary& in_args,
      dbus::ObjectPath* out_network,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void AddNetworkAsync(
      const brillo::VariantDictionary& in_args,
      base::OnceCallback<void(const dbus::ObjectPath& /*network*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Reassociate(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ReassociateAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Reattach(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ReattachAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RemoveNetwork(
      const dbus::ObjectPath& in_network,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RemoveNetworkAsync(
      const dbus::ObjectPath& in_network,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RemoveAllNetworks(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RemoveAllNetworksAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SelectNetwork(
      const dbus::ObjectPath& in_network,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SelectNetworkAsync(
      const dbus::ObjectPath& in_network,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool AddBlob(
      const std::string& in_name,
      const std::vector<uint8_t>& in_data,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void AddBlobAsync(
      const std::string& in_name,
      const std::vector<uint8_t>& in_data,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RemoveBlob(
      const std::string& in_name,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RemoveBlobAsync(
      const std::string& in_name,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetBlob(
      const std::string& in_name,
      std::vector<uint8_t>* out_data,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetBlobAsync(
      const std::string& in_name,
      base::OnceCallback<void(const std::vector<uint8_t>& /*data*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool FlushBSS(
      uint32_t in_age,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void FlushBSSAsync(
      uint32_t in_age,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool EAPLogoff(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void EAPLogoffAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool EAPLogon(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void EAPLogonAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool NetworkReply(
      const dbus::ObjectPath& in_network,
      const std::string& in_field,
      const std::string& in_value,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void NetworkReplyAsync(
      const dbus::ObjectPath& in_network,
      const std::string& in_field,
      const std::string& in_value,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Roam(
      const std::string& in_addr,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RoamAsync(
      const std::string& in_addr,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool AddCred(
      const brillo::VariantDictionary& in_args,
      dbus::ObjectPath* out_path,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void AddCredAsync(
      const brillo::VariantDictionary& in_args,
      base::OnceCallback<void(const dbus::ObjectPath& /*path*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RemoveCred(
      const dbus::ObjectPath& in_path,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RemoveCredAsync(
      const dbus::ObjectPath& in_path,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RemoveAllCreds(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RemoveAllCredsAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool InterworkingSelect(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void InterworkingSelectAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterScanDoneSignalHandler(
      const base::RepeatingCallback<void(bool)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterBSSAddedSignalHandler(
      const base::RepeatingCallback<void(const dbus::ObjectPath&,
                                         const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterBSSRemovedSignalHandler(
      const base::RepeatingCallback<void(const dbus::ObjectPath&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterBlobAddedSignalHandler(
      const base::RepeatingCallback<void(const std::string&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterBlobRemovedSignalHandler(
      const base::RepeatingCallback<void(const std::string&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterCertificationSignalHandler(
      const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterEAPSignalHandler(
      const base::RepeatingCallback<void(const std::string&,
                                         const std::string&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterNetworkAddedSignalHandler(
      const base::RepeatingCallback<void(const dbus::ObjectPath&,
                                         const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterNetworkRemovedSignalHandler(
      const base::RepeatingCallback<void(const dbus::ObjectPath&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterNetworkSelectedSignalHandler(
      const base::RepeatingCallback<void(const dbus::ObjectPath&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterPropertiesChangedSignalHandler(
      const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterInterworkingAPAddedSignalHandler(
      const base::RepeatingCallback<void(const dbus::ObjectPath&,
                                         const dbus::ObjectPath&,
                                         const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterInterworkingSelectDoneSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  static const char* CapabilitiesName() { return "Capabilities"; }
  virtual const brillo::VariantDictionary& capabilities() const = 0;
  static const char* StateName() { return "State"; }
  virtual const std::string& state() const = 0;
  static const char* ScanningName() { return "Scanning"; }
  virtual bool scanning() const = 0;
  static const char* ApScanName() { return "ApScan"; }
  virtual uint32_t ap_scan() const = 0;
  virtual void set_ap_scan(uint32_t value,
                           base::OnceCallback<void(bool)> callback) = 0;
  static const char* IfnameName() { return "Ifname"; }
  virtual const std::string& ifname() const = 0;
  static const char* BridgeIfnameName() { return "BridgeIfname"; }
  virtual const std::string& bridge_ifname() const = 0;
  static const char* DriverName() { return "Driver"; }
  virtual const std::string& driver() const = 0;
  static const char* CurrentBSSName() { return "CurrentBSS"; }
  virtual const dbus::ObjectPath& current_bss() const = 0;
  static const char* CurrentNetworkName() { return "CurrentNetwork"; }
  virtual const dbus::ObjectPath& current_network() const = 0;
  static const char* BlobsName() { return "Blobs"; }
  virtual const std::vector<std::string>& blobs() const = 0;
  static const char* BSSsName() { return "BSSs"; }
  virtual const std::vector<dbus::ObjectPath>& bsss() const = 0;
  static const char* NetworksName() { return "Networks"; }
  virtual const std::vector<dbus::ObjectPath>& networks() const = 0;
  static const char* FastReauthName() { return "FastReauth"; }
  virtual bool fast_reauth() const = 0;
  virtual void set_fast_reauth(bool value,
                               base::OnceCallback<void(bool)> callback) = 0;
  static const char* ScanIntervalName() { return "ScanInterval"; }
  virtual int32_t scan_interval() const = 0;
  virtual void set_scan_interval(int32_t value,
                                 base::OnceCallback<void(bool)> callback) = 0;
  static const char* SchedScanName() { return "SchedScan"; }
  virtual bool sched_scan() const = 0;
  virtual void set_sched_scan(bool value,
                              base::OnceCallback<void(bool)> callback) = 0;
  static const char* ScanName() { return "Scan"; }
  virtual bool scan() const = 0;
  virtual void set_scan(bool value,
                        base::OnceCallback<void(bool)> callback) = 0;
  static const char* MACAddressRandomizationMaskName() { return "MACAddressRandomizationMask"; }
  virtual const std::map<std::string, std::vector<uint8_t>>& macaddress_randomization_mask() const = 0;
  virtual void set_macaddress_randomization_mask(const std::map<std::string, std::vector<uint8_t>>& value,
                                                 base::OnceCallback<void(bool)> callback) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;

  virtual void InitializeProperties(
      const base::RepeatingCallback<void(InterfaceProxyInterface*, const std::string&)>& callback) = 0;
};

}  // namespace wpa_supplicant1
}  // namespace w1
}  // namespace fi

namespace fi {
namespace w1 {
namespace wpa_supplicant1 {

// Interface proxy for fi::w1::wpa_supplicant1::Interface.
class InterfaceProxy final : public InterfaceProxyInterface {
 public:
  class PropertySet : public dbus::PropertySet {
   public:
    PropertySet(dbus::ObjectProxy* object_proxy,
                const PropertyChangedCallback& callback)
        : dbus::PropertySet{object_proxy,
                            "fi.w1.wpa_supplicant1.Interface",
                            callback} {
      RegisterProperty(CapabilitiesName(), &capabilities);
      RegisterProperty(StateName(), &state);
      RegisterProperty(ScanningName(), &scanning);
      RegisterProperty(ApScanName(), &ap_scan);
      RegisterProperty(IfnameName(), &ifname);
      RegisterProperty(BridgeIfnameName(), &bridge_ifname);
      RegisterProperty(DriverName(), &driver);
      RegisterProperty(CurrentBSSName(), &current_bss);
      RegisterProperty(CurrentNetworkName(), &current_network);
      RegisterProperty(BlobsName(), &blobs);
      RegisterProperty(BSSsName(), &bsss);
      RegisterProperty(NetworksName(), &networks);
      RegisterProperty(FastReauthName(), &fast_reauth);
      RegisterProperty(ScanIntervalName(), &scan_interval);
      RegisterProperty(SchedScanName(), &sched_scan);
      RegisterProperty(ScanName(), &scan);
      RegisterProperty(MACAddressRandomizationMaskName(), &macaddress_randomization_mask);
    }
    PropertySet(const PropertySet&) = delete;
    PropertySet& operator=(const PropertySet&) = delete;

    brillo::dbus_utils::Property<brillo::VariantDictionary> capabilities;
    brillo::dbus_utils::Property<std::string> state;
    brillo::dbus_utils::Property<bool> scanning;
    brillo::dbus_utils::Property<uint32_t> ap_scan;
    brillo::dbus_utils::Property<std::string> ifname;
    brillo::dbus_utils::Property<std::string> bridge_ifname;
    brillo::dbus_utils::Property<std::string> driver;
    brillo::dbus_utils::Property<dbus::ObjectPath> current_bss;
    brillo::dbus_utils::Property<dbus::ObjectPath> current_network;
    brillo::dbus_utils::Property<std::vector<std::string>> blobs;
    brillo::dbus_utils::Property<std::vector<dbus::ObjectPath>> bsss;
    brillo::dbus_utils::Property<std::vector<dbus::ObjectPath>> networks;
    brillo::dbus_utils::Property<bool> fast_reauth;
    brillo::dbus_utils::Property<int32_t> scan_interval;
    brillo::dbus_utils::Property<bool> sched_scan;
    brillo::dbus_utils::Property<bool> scan;
    brillo::dbus_utils::Property<std::map<std::string, std::vector<uint8_t>>> macaddress_randomization_mask;

  };

  InterfaceProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name,
      const dbus::ObjectPath& object_path) :
          bus_{bus},
          service_name_{service_name},
          object_path_{object_path},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  InterfaceProxy(const InterfaceProxy&) = delete;
  InterfaceProxy& operator=(const InterfaceProxy&) = delete;

  ~InterfaceProxy() override {
  }

  void RegisterScanDoneSignalHandler(
      const base::RepeatingCallback<void(bool)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "ScanDone",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterBSSAddedSignalHandler(
      const base::RepeatingCallback<void(const dbus::ObjectPath&,
                                         const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "BSSAdded",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterBSSRemovedSignalHandler(
      const base::RepeatingCallback<void(const dbus::ObjectPath&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "BSSRemoved",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterBlobAddedSignalHandler(
      const base::RepeatingCallback<void(const std::string&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "BlobAdded",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterBlobRemovedSignalHandler(
      const base::RepeatingCallback<void(const std::string&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "BlobRemoved",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterCertificationSignalHandler(
      const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "Certification",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterEAPSignalHandler(
      const base::RepeatingCallback<void(const std::string&,
                                         const std::string&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "EAP",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterNetworkAddedSignalHandler(
      const base::RepeatingCallback<void(const dbus::ObjectPath&,
                                         const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "NetworkAdded",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterNetworkRemovedSignalHandler(
      const base::RepeatingCallback<void(const dbus::ObjectPath&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "NetworkRemoved",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterNetworkSelectedSignalHandler(
      const base::RepeatingCallback<void(const dbus::ObjectPath&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "NetworkSelected",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterPropertiesChangedSignalHandler(
      const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "PropertiesChanged",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterInterworkingAPAddedSignalHandler(
      const base::RepeatingCallback<void(const dbus::ObjectPath&,
                                         const dbus::ObjectPath&,
                                         const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "InterworkingAPAdded",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterInterworkingSelectDoneSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "InterworkingSelectDone",
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

  void InitializeProperties(
      const base::RepeatingCallback<void(InterfaceProxyInterface*, const std::string&)>& callback) override {
    property_set_.reset(
        new PropertySet(dbus_object_proxy_, base::BindRepeating(callback, this)));
    property_set_->ConnectSignals();
    property_set_->GetAll();
  }

  const PropertySet* GetProperties() const { return &(*property_set_); }
  PropertySet* GetProperties() { return &(*property_set_); }

  bool Scan(
      const brillo::VariantDictionary& in_args,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "Scan",
        error,
        in_args);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ScanAsync(
      const brillo::VariantDictionary& in_args,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "Scan",
        std::move(success_callback),
        std::move(error_callback),
        in_args);
  }

  bool Disconnect(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "Disconnect",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void DisconnectAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "Disconnect",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool AddNetwork(
      const brillo::VariantDictionary& in_args,
      dbus::ObjectPath* out_network,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "AddNetwork",
        error,
        in_args);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_network);
  }

  void AddNetworkAsync(
      const brillo::VariantDictionary& in_args,
      base::OnceCallback<void(const dbus::ObjectPath& /*network*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "AddNetwork",
        std::move(success_callback),
        std::move(error_callback),
        in_args);
  }

  bool Reassociate(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "Reassociate",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ReassociateAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "Reassociate",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool Reattach(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "Reattach",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ReattachAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "Reattach",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool RemoveNetwork(
      const dbus::ObjectPath& in_network,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "RemoveNetwork",
        error,
        in_network);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RemoveNetworkAsync(
      const dbus::ObjectPath& in_network,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "RemoveNetwork",
        std::move(success_callback),
        std::move(error_callback),
        in_network);
  }

  bool RemoveAllNetworks(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "RemoveAllNetworks",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RemoveAllNetworksAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "RemoveAllNetworks",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool SelectNetwork(
      const dbus::ObjectPath& in_network,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "SelectNetwork",
        error,
        in_network);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SelectNetworkAsync(
      const dbus::ObjectPath& in_network,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "SelectNetwork",
        std::move(success_callback),
        std::move(error_callback),
        in_network);
  }

  bool AddBlob(
      const std::string& in_name,
      const std::vector<uint8_t>& in_data,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "AddBlob",
        error,
        in_name,
        in_data);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void AddBlobAsync(
      const std::string& in_name,
      const std::vector<uint8_t>& in_data,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "AddBlob",
        std::move(success_callback),
        std::move(error_callback),
        in_name,
        in_data);
  }

  bool RemoveBlob(
      const std::string& in_name,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "RemoveBlob",
        error,
        in_name);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RemoveBlobAsync(
      const std::string& in_name,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "RemoveBlob",
        std::move(success_callback),
        std::move(error_callback),
        in_name);
  }

  bool GetBlob(
      const std::string& in_name,
      std::vector<uint8_t>* out_data,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "GetBlob",
        error,
        in_name);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_data);
  }

  void GetBlobAsync(
      const std::string& in_name,
      base::OnceCallback<void(const std::vector<uint8_t>& /*data*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "GetBlob",
        std::move(success_callback),
        std::move(error_callback),
        in_name);
  }

  bool FlushBSS(
      uint32_t in_age,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "FlushBSS",
        error,
        in_age);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void FlushBSSAsync(
      uint32_t in_age,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "FlushBSS",
        std::move(success_callback),
        std::move(error_callback),
        in_age);
  }

  bool EAPLogoff(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "EAPLogoff",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void EAPLogoffAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "EAPLogoff",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool EAPLogon(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "EAPLogon",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void EAPLogonAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "EAPLogon",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool NetworkReply(
      const dbus::ObjectPath& in_network,
      const std::string& in_field,
      const std::string& in_value,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "NetworkReply",
        error,
        in_network,
        in_field,
        in_value);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void NetworkReplyAsync(
      const dbus::ObjectPath& in_network,
      const std::string& in_field,
      const std::string& in_value,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "NetworkReply",
        std::move(success_callback),
        std::move(error_callback),
        in_network,
        in_field,
        in_value);
  }

  bool Roam(
      const std::string& in_addr,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "Roam",
        error,
        in_addr);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RoamAsync(
      const std::string& in_addr,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "Roam",
        std::move(success_callback),
        std::move(error_callback),
        in_addr);
  }

  bool AddCred(
      const brillo::VariantDictionary& in_args,
      dbus::ObjectPath* out_path,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "AddCred",
        error,
        in_args);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_path);
  }

  void AddCredAsync(
      const brillo::VariantDictionary& in_args,
      base::OnceCallback<void(const dbus::ObjectPath& /*path*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "AddCred",
        std::move(success_callback),
        std::move(error_callback),
        in_args);
  }

  bool RemoveCred(
      const dbus::ObjectPath& in_path,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "RemoveCred",
        error,
        in_path);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RemoveCredAsync(
      const dbus::ObjectPath& in_path,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "RemoveCred",
        std::move(success_callback),
        std::move(error_callback),
        in_path);
  }

  bool RemoveAllCreds(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "RemoveAllCreds",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RemoveAllCredsAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "RemoveAllCreds",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool InterworkingSelect(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "InterworkingSelect",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void InterworkingSelectAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Interface",
        "InterworkingSelect",
        std::move(success_callback),
        std::move(error_callback));
  }

  const brillo::VariantDictionary& capabilities() const override {
    return property_set_->capabilities.value();
  }

  const std::string& state() const override {
    return property_set_->state.value();
  }

  bool scanning() const override {
    return property_set_->scanning.value();
  }

  uint32_t ap_scan() const override {
    return property_set_->ap_scan.value();
  }

  void set_ap_scan(uint32_t value,
                   base::OnceCallback<void(bool)> callback) override {
    property_set_->ap_scan.Set(value, std::move(callback));
  }

  const std::string& ifname() const override {
    return property_set_->ifname.value();
  }

  const std::string& bridge_ifname() const override {
    return property_set_->bridge_ifname.value();
  }

  const std::string& driver() const override {
    return property_set_->driver.value();
  }

  const dbus::ObjectPath& current_bss() const override {
    return property_set_->current_bss.value();
  }

  const dbus::ObjectPath& current_network() const override {
    return property_set_->current_network.value();
  }

  const std::vector<std::string>& blobs() const override {
    return property_set_->blobs.value();
  }

  const std::vector<dbus::ObjectPath>& bsss() const override {
    return property_set_->bsss.value();
  }

  const std::vector<dbus::ObjectPath>& networks() const override {
    return property_set_->networks.value();
  }

  bool fast_reauth() const override {
    return property_set_->fast_reauth.value();
  }

  void set_fast_reauth(bool value,
                       base::OnceCallback<void(bool)> callback) override {
    property_set_->fast_reauth.Set(value, std::move(callback));
  }

  int32_t scan_interval() const override {
    return property_set_->scan_interval.value();
  }

  void set_scan_interval(int32_t value,
                         base::OnceCallback<void(bool)> callback) override {
    property_set_->scan_interval.Set(value, std::move(callback));
  }

  bool sched_scan() const override {
    return property_set_->sched_scan.value();
  }

  void set_sched_scan(bool value,
                      base::OnceCallback<void(bool)> callback) override {
    property_set_->sched_scan.Set(value, std::move(callback));
  }

  bool scan() const override {
    return property_set_->scan.value();
  }

  void set_scan(bool value,
                base::OnceCallback<void(bool)> callback) override {
    property_set_->scan.Set(value, std::move(callback));
  }

  const std::map<std::string, std::vector<uint8_t>>& macaddress_randomization_mask() const override {
    return property_set_->macaddress_randomization_mask.value();
  }

  void set_macaddress_randomization_mask(const std::map<std::string, std::vector<uint8_t>>& value,
                                         base::OnceCallback<void(bool)> callback) override {
    property_set_->macaddress_randomization_mask.Set(value, std::move(callback));
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  std::string service_name_;
  dbus::ObjectPath object_path_;
  dbus::ObjectProxy* dbus_object_proxy_;
  std::unique_ptr<PropertySet> property_set_;

};

}  // namespace wpa_supplicant1
}  // namespace w1
}  // namespace fi

namespace fi {
namespace w1 {
namespace wpa_supplicant1 {

// Abstract interface proxy for fi::w1::wpa_supplicant1::Network.
class NetworkProxyInterface {
 public:
  virtual ~NetworkProxyInterface() = default;

  virtual void RegisterPropertiesChangedSignalHandler(
      const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  static const char* EnabledName() { return "Enabled"; }
  virtual bool enabled() const = 0;
  virtual void set_enabled(bool value,
                           base::OnceCallback<void(bool)> callback) = 0;
  static const char* PropertiesName() { return "Properties"; }
  virtual const brillo::VariantDictionary& properties() const = 0;
  virtual void set_properties(const brillo::VariantDictionary& value,
                              base::OnceCallback<void(bool)> callback) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;

  virtual void InitializeProperties(
      const base::RepeatingCallback<void(NetworkProxyInterface*, const std::string&)>& callback) = 0;
};

}  // namespace wpa_supplicant1
}  // namespace w1
}  // namespace fi

namespace fi {
namespace w1 {
namespace wpa_supplicant1 {

// Interface proxy for fi::w1::wpa_supplicant1::Network.
class NetworkProxy final : public NetworkProxyInterface {
 public:
  class PropertySet : public dbus::PropertySet {
   public:
    PropertySet(dbus::ObjectProxy* object_proxy,
                const PropertyChangedCallback& callback)
        : dbus::PropertySet{object_proxy,
                            "fi.w1.wpa_supplicant1.Network",
                            callback} {
      RegisterProperty(EnabledName(), &enabled);
      RegisterProperty(PropertiesName(), &properties);
    }
    PropertySet(const PropertySet&) = delete;
    PropertySet& operator=(const PropertySet&) = delete;

    brillo::dbus_utils::Property<bool> enabled;
    brillo::dbus_utils::Property<brillo::VariantDictionary> properties;

  };

  NetworkProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name,
      const dbus::ObjectPath& object_path) :
          bus_{bus},
          service_name_{service_name},
          object_path_{object_path},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  NetworkProxy(const NetworkProxy&) = delete;
  NetworkProxy& operator=(const NetworkProxy&) = delete;

  ~NetworkProxy() override {
  }

  void RegisterPropertiesChangedSignalHandler(
      const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1.Network",
        "PropertiesChanged",
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

  void InitializeProperties(
      const base::RepeatingCallback<void(NetworkProxyInterface*, const std::string&)>& callback) override {
    property_set_.reset(
        new PropertySet(dbus_object_proxy_, base::BindRepeating(callback, this)));
    property_set_->ConnectSignals();
    property_set_->GetAll();
  }

  const PropertySet* GetProperties() const { return &(*property_set_); }
  PropertySet* GetProperties() { return &(*property_set_); }

  bool enabled() const override {
    return property_set_->enabled.value();
  }

  void set_enabled(bool value,
                   base::OnceCallback<void(bool)> callback) override {
    property_set_->enabled.Set(value, std::move(callback));
  }

  const brillo::VariantDictionary& properties() const override {
    return property_set_->properties.value();
  }

  void set_properties(const brillo::VariantDictionary& value,
                      base::OnceCallback<void(bool)> callback) override {
    property_set_->properties.Set(value, std::move(callback));
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  std::string service_name_;
  dbus::ObjectPath object_path_;
  dbus::ObjectProxy* dbus_object_proxy_;
  std::unique_ptr<PropertySet> property_set_;

};

}  // namespace wpa_supplicant1
}  // namespace w1
}  // namespace fi

namespace fi {
namespace w1 {

// Abstract interface proxy for fi::w1::wpa_supplicant1.
class wpa_supplicant1ProxyInterface {
 public:
  virtual ~wpa_supplicant1ProxyInterface() = default;

  virtual bool CreateInterface(
      const brillo::VariantDictionary& in_args,
      dbus::ObjectPath* out_path,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void CreateInterfaceAsync(
      const brillo::VariantDictionary& in_args,
      base::OnceCallback<void(const dbus::ObjectPath& /*path*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RemoveInterface(
      const dbus::ObjectPath& in_path,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RemoveInterfaceAsync(
      const dbus::ObjectPath& in_path,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetInterface(
      const std::string& in_ifname,
      dbus::ObjectPath* out_path,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetInterfaceAsync(
      const std::string& in_ifname,
      base::OnceCallback<void(const dbus::ObjectPath& /*path*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ExpectDisconnect(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ExpectDisconnectAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterInterfaceAddedSignalHandler(
      const base::RepeatingCallback<void(const dbus::ObjectPath&,
                                         const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterInterfaceRemovedSignalHandler(
      const base::RepeatingCallback<void(const dbus::ObjectPath&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterPropertiesChangedSignalHandler(
      const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  static const char* DebugLevelName() { return "DebugLevel"; }
  virtual const std::string& debug_level() const = 0;
  virtual void set_debug_level(const std::string& value,
                               base::OnceCallback<void(bool)> callback) = 0;
  static const char* DebugTimestampName() { return "DebugTimestamp"; }
  virtual bool debug_timestamp() const = 0;
  virtual void set_debug_timestamp(bool value,
                                   base::OnceCallback<void(bool)> callback) = 0;
  static const char* DebugShowKeysName() { return "DebugShowKeys"; }
  virtual bool debug_show_keys() const = 0;
  virtual void set_debug_show_keys(bool value,
                                   base::OnceCallback<void(bool)> callback) = 0;
  static const char* InterfacesName() { return "Interfaces"; }
  virtual const std::vector<dbus::ObjectPath>& interfaces() const = 0;
  static const char* EapMethodsName() { return "EapMethods"; }
  virtual const std::vector<std::string>& eap_methods() const = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;

  virtual void InitializeProperties(
      const base::RepeatingCallback<void(wpa_supplicant1ProxyInterface*, const std::string&)>& callback) = 0;
};

}  // namespace w1
}  // namespace fi

namespace fi {
namespace w1 {

// Interface proxy for fi::w1::wpa_supplicant1.
class wpa_supplicant1Proxy final : public wpa_supplicant1ProxyInterface {
 public:
  class PropertySet : public dbus::PropertySet {
   public:
    PropertySet(dbus::ObjectProxy* object_proxy,
                const PropertyChangedCallback& callback)
        : dbus::PropertySet{object_proxy,
                            "fi.w1.wpa_supplicant1",
                            callback} {
      RegisterProperty(DebugLevelName(), &debug_level);
      RegisterProperty(DebugTimestampName(), &debug_timestamp);
      RegisterProperty(DebugShowKeysName(), &debug_show_keys);
      RegisterProperty(InterfacesName(), &interfaces);
      RegisterProperty(EapMethodsName(), &eap_methods);
    }
    PropertySet(const PropertySet&) = delete;
    PropertySet& operator=(const PropertySet&) = delete;

    brillo::dbus_utils::Property<std::string> debug_level;
    brillo::dbus_utils::Property<bool> debug_timestamp;
    brillo::dbus_utils::Property<bool> debug_show_keys;
    brillo::dbus_utils::Property<std::vector<dbus::ObjectPath>> interfaces;
    brillo::dbus_utils::Property<std::vector<std::string>> eap_methods;

  };

  wpa_supplicant1Proxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name,
      const dbus::ObjectPath& object_path) :
          bus_{bus},
          service_name_{service_name},
          object_path_{object_path},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  wpa_supplicant1Proxy(const wpa_supplicant1Proxy&) = delete;
  wpa_supplicant1Proxy& operator=(const wpa_supplicant1Proxy&) = delete;

  ~wpa_supplicant1Proxy() override {
  }

  void RegisterInterfaceAddedSignalHandler(
      const base::RepeatingCallback<void(const dbus::ObjectPath&,
                                         const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1",
        "InterfaceAdded",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterInterfaceRemovedSignalHandler(
      const base::RepeatingCallback<void(const dbus::ObjectPath&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1",
        "InterfaceRemoved",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterPropertiesChangedSignalHandler(
      const base::RepeatingCallback<void(const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1",
        "PropertiesChanged",
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

  void InitializeProperties(
      const base::RepeatingCallback<void(wpa_supplicant1ProxyInterface*, const std::string&)>& callback) override {
    property_set_.reset(
        new PropertySet(dbus_object_proxy_, base::BindRepeating(callback, this)));
    property_set_->ConnectSignals();
    property_set_->GetAll();
  }

  const PropertySet* GetProperties() const { return &(*property_set_); }
  PropertySet* GetProperties() { return &(*property_set_); }

  bool CreateInterface(
      const brillo::VariantDictionary& in_args,
      dbus::ObjectPath* out_path,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1",
        "CreateInterface",
        error,
        in_args);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_path);
  }

  void CreateInterfaceAsync(
      const brillo::VariantDictionary& in_args,
      base::OnceCallback<void(const dbus::ObjectPath& /*path*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1",
        "CreateInterface",
        std::move(success_callback),
        std::move(error_callback),
        in_args);
  }

  bool RemoveInterface(
      const dbus::ObjectPath& in_path,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1",
        "RemoveInterface",
        error,
        in_path);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RemoveInterfaceAsync(
      const dbus::ObjectPath& in_path,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1",
        "RemoveInterface",
        std::move(success_callback),
        std::move(error_callback),
        in_path);
  }

  bool GetInterface(
      const std::string& in_ifname,
      dbus::ObjectPath* out_path,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1",
        "GetInterface",
        error,
        in_ifname);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_path);
  }

  void GetInterfaceAsync(
      const std::string& in_ifname,
      base::OnceCallback<void(const dbus::ObjectPath& /*path*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1",
        "GetInterface",
        std::move(success_callback),
        std::move(error_callback),
        in_ifname);
  }

  bool ExpectDisconnect(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1",
        "ExpectDisconnect",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ExpectDisconnectAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "fi.w1.wpa_supplicant1",
        "ExpectDisconnect",
        std::move(success_callback),
        std::move(error_callback));
  }

  const std::string& debug_level() const override {
    return property_set_->debug_level.value();
  }

  void set_debug_level(const std::string& value,
                       base::OnceCallback<void(bool)> callback) override {
    property_set_->debug_level.Set(value, std::move(callback));
  }

  bool debug_timestamp() const override {
    return property_set_->debug_timestamp.value();
  }

  void set_debug_timestamp(bool value,
                           base::OnceCallback<void(bool)> callback) override {
    property_set_->debug_timestamp.Set(value, std::move(callback));
  }

  bool debug_show_keys() const override {
    return property_set_->debug_show_keys.value();
  }

  void set_debug_show_keys(bool value,
                           base::OnceCallback<void(bool)> callback) override {
    property_set_->debug_show_keys.Set(value, std::move(callback));
  }

  const std::vector<dbus::ObjectPath>& interfaces() const override {
    return property_set_->interfaces.value();
  }

  const std::vector<std::string>& eap_methods() const override {
    return property_set_->eap_methods.value();
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  std::string service_name_;
  dbus::ObjectPath object_path_;
  dbus::ObjectProxy* dbus_object_proxy_;
  std::unique_ptr<PropertySet> property_set_;

};

}  // namespace w1
}  // namespace fi

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_SUPPLICANT_DBUS_PROXIES_H
