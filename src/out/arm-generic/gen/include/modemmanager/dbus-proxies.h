// Automatic generation of D-Bus interfaces:
//  - org.freedesktop.ModemManager1.Modem.Sar
//  - org.freedesktop.ModemManager1.Modem
//  - org.freedesktop.ModemManager1
//  - org.freedesktop.DBus.ObjectManager
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_TMP_PORTAGE_CHROMEOS_BASE_POWER_MANAGER_9999_WORK_BUILD_OUT_DEFAULT_GEN_INCLUDE_MODEMMANAGER_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_TMP_PORTAGE_CHROMEOS_BASE_POWER_MANAGER_9999_WORK_BUILD_OUT_DEFAULT_GEN_INCLUDE_MODEMMANAGER_DBUS_PROXIES_H
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
namespace freedesktop {
namespace ModemManager1 {
namespace Modem {

// Abstract interface proxy for org::freedesktop::ModemManager1::Modem::Sar.
class SarProxyInterface {
 public:
  virtual ~SarProxyInterface() = default;

  virtual bool Enable(
      bool in_enable,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void EnableAsync(
      bool in_enable,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetPowerLevel(
      uint32_t in_level,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetPowerLevelAsync(
      uint32_t in_level,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  static const char* StateName() { return "State"; }
  virtual bool state() const = 0;
  static const char* PowerLevelName() { return "PowerLevel"; }
  virtual uint32_t power_level() const = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;

  virtual void InitializeProperties(
      const base::RepeatingCallback<void(SarProxyInterface*, const std::string&)>& callback) = 0;
};

}  // namespace Modem
}  // namespace ModemManager1
}  // namespace freedesktop
}  // namespace org

namespace org {
namespace freedesktop {
namespace ModemManager1 {
namespace Modem {

// Interface proxy for org::freedesktop::ModemManager1::Modem::Sar.
class SarProxy final : public SarProxyInterface {
 public:
  class PropertySet : public dbus::PropertySet {
   public:
    PropertySet(dbus::ObjectProxy* object_proxy,
                const PropertyChangedCallback& callback)
        : dbus::PropertySet{object_proxy,
                            "org.freedesktop.ModemManager1.Modem.Sar",
                            callback} {
      RegisterProperty(StateName(), &state);
      RegisterProperty(PowerLevelName(), &power_level);
    }
    PropertySet(const PropertySet&) = delete;
    PropertySet& operator=(const PropertySet&) = delete;

    brillo::dbus_utils::Property<bool> state;
    brillo::dbus_utils::Property<uint32_t> power_level;

  };

  SarProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name,
      const dbus::ObjectPath& object_path) :
          bus_{bus},
          service_name_{service_name},
          object_path_{object_path},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  SarProxy(const SarProxy&) = delete;
  SarProxy& operator=(const SarProxy&) = delete;

  ~SarProxy() override {
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
      const base::RepeatingCallback<void(SarProxyInterface*, const std::string&)>& callback) override {
    property_set_.reset(
        new PropertySet(dbus_object_proxy_, base::BindRepeating(callback, this)));
    property_set_->ConnectSignals();
    property_set_->GetAll();
  }

  const PropertySet* GetProperties() const { return &(*property_set_); }
  PropertySet* GetProperties() { return &(*property_set_); }

  bool Enable(
      bool in_enable,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Sar",
        "Enable",
        error,
        in_enable);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void EnableAsync(
      bool in_enable,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Sar",
        "Enable",
        std::move(success_callback),
        std::move(error_callback),
        in_enable);
  }

  bool SetPowerLevel(
      uint32_t in_level,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Sar",
        "SetPowerLevel",
        error,
        in_level);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetPowerLevelAsync(
      uint32_t in_level,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Sar",
        "SetPowerLevel",
        std::move(success_callback),
        std::move(error_callback),
        in_level);
  }

  bool state() const override {
    return property_set_->state.value();
  }

  uint32_t power_level() const override {
    return property_set_->power_level.value();
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  std::string service_name_;
  dbus::ObjectPath object_path_;
  dbus::ObjectProxy* dbus_object_proxy_;
  std::unique_ptr<PropertySet> property_set_;

};

}  // namespace Modem
}  // namespace ModemManager1
}  // namespace freedesktop
}  // namespace org

namespace org {
namespace freedesktop {
namespace ModemManager1 {

// Abstract interface proxy for org::freedesktop::ModemManager1::Modem.
class ModemProxyInterface {
 public:
  virtual ~ModemProxyInterface() = default;

  virtual bool Enable(
      bool in_enable,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void EnableAsync(
      bool in_enable,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ListBearers(
      std::vector<dbus::ObjectPath>* out_bearers,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ListBearersAsync(
      base::OnceCallback<void(const std::vector<dbus::ObjectPath>& /*bearers*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool CreateBearer(
      const brillo::VariantDictionary& in_properties,
      dbus::ObjectPath* out_path,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void CreateBearerAsync(
      const brillo::VariantDictionary& in_properties,
      base::OnceCallback<void(const dbus::ObjectPath& /*path*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool DeleteBearer(
      const dbus::ObjectPath& in_bearer,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DeleteBearerAsync(
      const dbus::ObjectPath& in_bearer,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Reset(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ResetAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool FactoryReset(
      const std::string& in_code,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void FactoryResetAsync(
      const std::string& in_code,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetPowerState(
      uint32_t in_state,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetPowerStateAsync(
      uint32_t in_state,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetCurrentCapabilities(
      uint32_t in_capabilities,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetCurrentCapabilitiesAsync(
      uint32_t in_capabilities,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetCurrentModes(
      const std::tuple<uint32_t, uint32_t>& in_modes,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetCurrentModesAsync(
      const std::tuple<uint32_t, uint32_t>& in_modes,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetCurrentBands(
      const std::vector<uint32_t>& in_bands,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetCurrentBandsAsync(
      const std::vector<uint32_t>& in_bands,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetPrimarySimSlot(
      uint32_t in_sim_slot,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetPrimarySimSlotAsync(
      uint32_t in_sim_slot,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetCellInfo(
      std::vector<brillo::VariantDictionary>* out_cell_info,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetCellInfoAsync(
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*cell_info*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Command(
      const std::string& in_cmd,
      uint32_t in_timeout,
      std::string* out_response,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void CommandAsync(
      const std::string& in_cmd,
      uint32_t in_timeout,
      base::OnceCallback<void(const std::string& /*response*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterStateChangedSignalHandler(
      const base::RepeatingCallback<void(int32_t,
                                         int32_t,
                                         uint32_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  static const char* SimName() { return "Sim"; }
  virtual const dbus::ObjectPath& sim() const = 0;
  static const char* SimSlotsName() { return "SimSlots"; }
  virtual const std::vector<dbus::ObjectPath>& sim_slots() const = 0;
  static const char* PrimarySimSlotName() { return "PrimarySimSlot"; }
  virtual uint32_t primary_sim_slot() const = 0;
  static const char* BearersName() { return "Bearers"; }
  virtual const std::vector<dbus::ObjectPath>& bearers() const = 0;
  static const char* SupportedCapabilitiesName() { return "SupportedCapabilities"; }
  virtual const std::vector<uint32_t>& supported_capabilities() const = 0;
  static const char* CurrentCapabilitiesName() { return "CurrentCapabilities"; }
  virtual uint32_t current_capabilities() const = 0;
  static const char* MaxBearersName() { return "MaxBearers"; }
  virtual uint32_t max_bearers() const = 0;
  static const char* MaxActiveBearersName() { return "MaxActiveBearers"; }
  virtual uint32_t max_active_bearers() const = 0;
  static const char* MaxActiveMultiplexedBearersName() { return "MaxActiveMultiplexedBearers"; }
  virtual uint32_t max_active_multiplexed_bearers() const = 0;
  static const char* ManufacturerName() { return "Manufacturer"; }
  virtual const std::string& manufacturer() const = 0;
  static const char* ModelName() { return "Model"; }
  virtual const std::string& model() const = 0;
  static const char* RevisionName() { return "Revision"; }
  virtual const std::string& revision() const = 0;
  static const char* CarrierConfigurationName() { return "CarrierConfiguration"; }
  virtual const std::string& carrier_configuration() const = 0;
  static const char* CarrierConfigurationRevisionName() { return "CarrierConfigurationRevision"; }
  virtual const std::string& carrier_configuration_revision() const = 0;
  static const char* HardwareRevisionName() { return "HardwareRevision"; }
  virtual const std::string& hardware_revision() const = 0;
  static const char* DeviceIdentifierName() { return "DeviceIdentifier"; }
  virtual const std::string& device_identifier() const = 0;
  static const char* DeviceName() { return "Device"; }
  virtual const std::string& device() const = 0;
  static const char* DriversName() { return "Drivers"; }
  virtual const std::vector<std::string>& drivers() const = 0;
  static const char* PluginName() { return "Plugin"; }
  virtual const std::string& plugin() const = 0;
  static const char* PrimaryPortName() { return "PrimaryPort"; }
  virtual const std::string& primary_port() const = 0;
  static const char* PortsName() { return "Ports"; }
  virtual const std::vector<std::tuple<std::string, uint32_t>>& ports() const = 0;
  static const char* EquipmentIdentifierName() { return "EquipmentIdentifier"; }
  virtual const std::string& equipment_identifier() const = 0;
  static const char* UnlockRequiredName() { return "UnlockRequired"; }
  virtual uint32_t unlock_required() const = 0;
  static const char* UnlockRetriesName() { return "UnlockRetries"; }
  virtual const std::map<uint32_t, uint32_t>& unlock_retries() const = 0;
  static const char* StateName() { return "State"; }
  virtual int32_t state() const = 0;
  static const char* StateFailedReasonName() { return "StateFailedReason"; }
  virtual uint32_t state_failed_reason() const = 0;
  static const char* AccessTechnologiesName() { return "AccessTechnologies"; }
  virtual uint32_t access_technologies() const = 0;
  static const char* SignalQualityName() { return "SignalQuality"; }
  virtual const std::tuple<uint32_t, bool>& signal_quality() const = 0;
  static const char* OwnNumbersName() { return "OwnNumbers"; }
  virtual const std::vector<std::string>& own_numbers() const = 0;
  static const char* PowerStateName() { return "PowerState"; }
  virtual uint32_t power_state() const = 0;
  static const char* SupportedModesName() { return "SupportedModes"; }
  virtual const std::vector<std::tuple<uint32_t, uint32_t>>& supported_modes() const = 0;
  static const char* CurrentModesName() { return "CurrentModes"; }
  virtual const std::tuple<uint32_t, uint32_t>& current_modes() const = 0;
  static const char* SupportedBandsName() { return "SupportedBands"; }
  virtual const std::vector<uint32_t>& supported_bands() const = 0;
  static const char* CurrentBandsName() { return "CurrentBands"; }
  virtual const std::vector<uint32_t>& current_bands() const = 0;
  static const char* SupportedIpFamiliesName() { return "SupportedIpFamilies"; }
  virtual uint32_t supported_ip_families() const = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;

  virtual void InitializeProperties(
      const base::RepeatingCallback<void(ModemProxyInterface*, const std::string&)>& callback) = 0;
};

}  // namespace ModemManager1
}  // namespace freedesktop
}  // namespace org

namespace org {
namespace freedesktop {
namespace ModemManager1 {

// Interface proxy for org::freedesktop::ModemManager1::Modem.
class ModemProxy final : public ModemProxyInterface {
 public:
  class PropertySet : public dbus::PropertySet {
   public:
    PropertySet(dbus::ObjectProxy* object_proxy,
                const PropertyChangedCallback& callback)
        : dbus::PropertySet{object_proxy,
                            "org.freedesktop.ModemManager1.Modem",
                            callback} {
      RegisterProperty(SimName(), &sim);
      RegisterProperty(SimSlotsName(), &sim_slots);
      RegisterProperty(PrimarySimSlotName(), &primary_sim_slot);
      RegisterProperty(BearersName(), &bearers);
      RegisterProperty(SupportedCapabilitiesName(), &supported_capabilities);
      RegisterProperty(CurrentCapabilitiesName(), &current_capabilities);
      RegisterProperty(MaxBearersName(), &max_bearers);
      RegisterProperty(MaxActiveBearersName(), &max_active_bearers);
      RegisterProperty(MaxActiveMultiplexedBearersName(), &max_active_multiplexed_bearers);
      RegisterProperty(ManufacturerName(), &manufacturer);
      RegisterProperty(ModelName(), &model);
      RegisterProperty(RevisionName(), &revision);
      RegisterProperty(CarrierConfigurationName(), &carrier_configuration);
      RegisterProperty(CarrierConfigurationRevisionName(), &carrier_configuration_revision);
      RegisterProperty(HardwareRevisionName(), &hardware_revision);
      RegisterProperty(DeviceIdentifierName(), &device_identifier);
      RegisterProperty(DeviceName(), &device);
      RegisterProperty(DriversName(), &drivers);
      RegisterProperty(PluginName(), &plugin);
      RegisterProperty(PrimaryPortName(), &primary_port);
      RegisterProperty(PortsName(), &ports);
      RegisterProperty(EquipmentIdentifierName(), &equipment_identifier);
      RegisterProperty(UnlockRequiredName(), &unlock_required);
      RegisterProperty(UnlockRetriesName(), &unlock_retries);
      RegisterProperty(StateName(), &state);
      RegisterProperty(StateFailedReasonName(), &state_failed_reason);
      RegisterProperty(AccessTechnologiesName(), &access_technologies);
      RegisterProperty(SignalQualityName(), &signal_quality);
      RegisterProperty(OwnNumbersName(), &own_numbers);
      RegisterProperty(PowerStateName(), &power_state);
      RegisterProperty(SupportedModesName(), &supported_modes);
      RegisterProperty(CurrentModesName(), &current_modes);
      RegisterProperty(SupportedBandsName(), &supported_bands);
      RegisterProperty(CurrentBandsName(), &current_bands);
      RegisterProperty(SupportedIpFamiliesName(), &supported_ip_families);
    }
    PropertySet(const PropertySet&) = delete;
    PropertySet& operator=(const PropertySet&) = delete;

    brillo::dbus_utils::Property<dbus::ObjectPath> sim;
    brillo::dbus_utils::Property<std::vector<dbus::ObjectPath>> sim_slots;
    brillo::dbus_utils::Property<uint32_t> primary_sim_slot;
    brillo::dbus_utils::Property<std::vector<dbus::ObjectPath>> bearers;
    brillo::dbus_utils::Property<std::vector<uint32_t>> supported_capabilities;
    brillo::dbus_utils::Property<uint32_t> current_capabilities;
    brillo::dbus_utils::Property<uint32_t> max_bearers;
    brillo::dbus_utils::Property<uint32_t> max_active_bearers;
    brillo::dbus_utils::Property<uint32_t> max_active_multiplexed_bearers;
    brillo::dbus_utils::Property<std::string> manufacturer;
    brillo::dbus_utils::Property<std::string> model;
    brillo::dbus_utils::Property<std::string> revision;
    brillo::dbus_utils::Property<std::string> carrier_configuration;
    brillo::dbus_utils::Property<std::string> carrier_configuration_revision;
    brillo::dbus_utils::Property<std::string> hardware_revision;
    brillo::dbus_utils::Property<std::string> device_identifier;
    brillo::dbus_utils::Property<std::string> device;
    brillo::dbus_utils::Property<std::vector<std::string>> drivers;
    brillo::dbus_utils::Property<std::string> plugin;
    brillo::dbus_utils::Property<std::string> primary_port;
    brillo::dbus_utils::Property<std::vector<std::tuple<std::string, uint32_t>>> ports;
    brillo::dbus_utils::Property<std::string> equipment_identifier;
    brillo::dbus_utils::Property<uint32_t> unlock_required;
    brillo::dbus_utils::Property<std::map<uint32_t, uint32_t>> unlock_retries;
    brillo::dbus_utils::Property<int32_t> state;
    brillo::dbus_utils::Property<uint32_t> state_failed_reason;
    brillo::dbus_utils::Property<uint32_t> access_technologies;
    brillo::dbus_utils::Property<std::tuple<uint32_t, bool>> signal_quality;
    brillo::dbus_utils::Property<std::vector<std::string>> own_numbers;
    brillo::dbus_utils::Property<uint32_t> power_state;
    brillo::dbus_utils::Property<std::vector<std::tuple<uint32_t, uint32_t>>> supported_modes;
    brillo::dbus_utils::Property<std::tuple<uint32_t, uint32_t>> current_modes;
    brillo::dbus_utils::Property<std::vector<uint32_t>> supported_bands;
    brillo::dbus_utils::Property<std::vector<uint32_t>> current_bands;
    brillo::dbus_utils::Property<uint32_t> supported_ip_families;

  };

  ModemProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name,
      const dbus::ObjectPath& object_path) :
          bus_{bus},
          service_name_{service_name},
          object_path_{object_path},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  ModemProxy(const ModemProxy&) = delete;
  ModemProxy& operator=(const ModemProxy&) = delete;

  ~ModemProxy() override {
  }

  void RegisterStateChangedSignalHandler(
      const base::RepeatingCallback<void(int32_t,
                                         int32_t,
                                         uint32_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "StateChanged",
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
      const base::RepeatingCallback<void(ModemProxyInterface*, const std::string&)>& callback) override {
    property_set_.reset(
        new PropertySet(dbus_object_proxy_, base::BindRepeating(callback, this)));
    property_set_->ConnectSignals();
    property_set_->GetAll();
  }

  const PropertySet* GetProperties() const { return &(*property_set_); }
  PropertySet* GetProperties() { return &(*property_set_); }

  bool Enable(
      bool in_enable,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "Enable",
        error,
        in_enable);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void EnableAsync(
      bool in_enable,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "Enable",
        std::move(success_callback),
        std::move(error_callback),
        in_enable);
  }

  bool ListBearers(
      std::vector<dbus::ObjectPath>* out_bearers,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "ListBearers",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_bearers);
  }

  void ListBearersAsync(
      base::OnceCallback<void(const std::vector<dbus::ObjectPath>& /*bearers*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "ListBearers",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool CreateBearer(
      const brillo::VariantDictionary& in_properties,
      dbus::ObjectPath* out_path,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "CreateBearer",
        error,
        in_properties);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_path);
  }

  void CreateBearerAsync(
      const brillo::VariantDictionary& in_properties,
      base::OnceCallback<void(const dbus::ObjectPath& /*path*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "CreateBearer",
        std::move(success_callback),
        std::move(error_callback),
        in_properties);
  }

  bool DeleteBearer(
      const dbus::ObjectPath& in_bearer,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "DeleteBearer",
        error,
        in_bearer);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void DeleteBearerAsync(
      const dbus::ObjectPath& in_bearer,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "DeleteBearer",
        std::move(success_callback),
        std::move(error_callback),
        in_bearer);
  }

  bool Reset(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "Reset",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ResetAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "Reset",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool FactoryReset(
      const std::string& in_code,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "FactoryReset",
        error,
        in_code);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void FactoryResetAsync(
      const std::string& in_code,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "FactoryReset",
        std::move(success_callback),
        std::move(error_callback),
        in_code);
  }

  bool SetPowerState(
      uint32_t in_state,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "SetPowerState",
        error,
        in_state);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetPowerStateAsync(
      uint32_t in_state,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "SetPowerState",
        std::move(success_callback),
        std::move(error_callback),
        in_state);
  }

  bool SetCurrentCapabilities(
      uint32_t in_capabilities,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "SetCurrentCapabilities",
        error,
        in_capabilities);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetCurrentCapabilitiesAsync(
      uint32_t in_capabilities,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "SetCurrentCapabilities",
        std::move(success_callback),
        std::move(error_callback),
        in_capabilities);
  }

  bool SetCurrentModes(
      const std::tuple<uint32_t, uint32_t>& in_modes,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "SetCurrentModes",
        error,
        in_modes);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetCurrentModesAsync(
      const std::tuple<uint32_t, uint32_t>& in_modes,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "SetCurrentModes",
        std::move(success_callback),
        std::move(error_callback),
        in_modes);
  }

  bool SetCurrentBands(
      const std::vector<uint32_t>& in_bands,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "SetCurrentBands",
        error,
        in_bands);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetCurrentBandsAsync(
      const std::vector<uint32_t>& in_bands,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "SetCurrentBands",
        std::move(success_callback),
        std::move(error_callback),
        in_bands);
  }

  bool SetPrimarySimSlot(
      uint32_t in_sim_slot,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "SetPrimarySimSlot",
        error,
        in_sim_slot);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetPrimarySimSlotAsync(
      uint32_t in_sim_slot,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "SetPrimarySimSlot",
        std::move(success_callback),
        std::move(error_callback),
        in_sim_slot);
  }

  bool GetCellInfo(
      std::vector<brillo::VariantDictionary>* out_cell_info,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "GetCellInfo",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_cell_info);
  }

  void GetCellInfoAsync(
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*cell_info*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "GetCellInfo",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool Command(
      const std::string& in_cmd,
      uint32_t in_timeout,
      std::string* out_response,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "Command",
        error,
        in_cmd,
        in_timeout);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_response);
  }

  void CommandAsync(
      const std::string& in_cmd,
      uint32_t in_timeout,
      base::OnceCallback<void(const std::string& /*response*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem",
        "Command",
        std::move(success_callback),
        std::move(error_callback),
        in_cmd,
        in_timeout);
  }

  const dbus::ObjectPath& sim() const override {
    return property_set_->sim.value();
  }

  const std::vector<dbus::ObjectPath>& sim_slots() const override {
    return property_set_->sim_slots.value();
  }

  uint32_t primary_sim_slot() const override {
    return property_set_->primary_sim_slot.value();
  }

  const std::vector<dbus::ObjectPath>& bearers() const override {
    return property_set_->bearers.value();
  }

  const std::vector<uint32_t>& supported_capabilities() const override {
    return property_set_->supported_capabilities.value();
  }

  uint32_t current_capabilities() const override {
    return property_set_->current_capabilities.value();
  }

  uint32_t max_bearers() const override {
    return property_set_->max_bearers.value();
  }

  uint32_t max_active_bearers() const override {
    return property_set_->max_active_bearers.value();
  }

  uint32_t max_active_multiplexed_bearers() const override {
    return property_set_->max_active_multiplexed_bearers.value();
  }

  const std::string& manufacturer() const override {
    return property_set_->manufacturer.value();
  }

  const std::string& model() const override {
    return property_set_->model.value();
  }

  const std::string& revision() const override {
    return property_set_->revision.value();
  }

  const std::string& carrier_configuration() const override {
    return property_set_->carrier_configuration.value();
  }

  const std::string& carrier_configuration_revision() const override {
    return property_set_->carrier_configuration_revision.value();
  }

  const std::string& hardware_revision() const override {
    return property_set_->hardware_revision.value();
  }

  const std::string& device_identifier() const override {
    return property_set_->device_identifier.value();
  }

  const std::string& device() const override {
    return property_set_->device.value();
  }

  const std::vector<std::string>& drivers() const override {
    return property_set_->drivers.value();
  }

  const std::string& plugin() const override {
    return property_set_->plugin.value();
  }

  const std::string& primary_port() const override {
    return property_set_->primary_port.value();
  }

  const std::vector<std::tuple<std::string, uint32_t>>& ports() const override {
    return property_set_->ports.value();
  }

  const std::string& equipment_identifier() const override {
    return property_set_->equipment_identifier.value();
  }

  uint32_t unlock_required() const override {
    return property_set_->unlock_required.value();
  }

  const std::map<uint32_t, uint32_t>& unlock_retries() const override {
    return property_set_->unlock_retries.value();
  }

  int32_t state() const override {
    return property_set_->state.value();
  }

  uint32_t state_failed_reason() const override {
    return property_set_->state_failed_reason.value();
  }

  uint32_t access_technologies() const override {
    return property_set_->access_technologies.value();
  }

  const std::tuple<uint32_t, bool>& signal_quality() const override {
    return property_set_->signal_quality.value();
  }

  const std::vector<std::string>& own_numbers() const override {
    return property_set_->own_numbers.value();
  }

  uint32_t power_state() const override {
    return property_set_->power_state.value();
  }

  const std::vector<std::tuple<uint32_t, uint32_t>>& supported_modes() const override {
    return property_set_->supported_modes.value();
  }

  const std::tuple<uint32_t, uint32_t>& current_modes() const override {
    return property_set_->current_modes.value();
  }

  const std::vector<uint32_t>& supported_bands() const override {
    return property_set_->supported_bands.value();
  }

  const std::vector<uint32_t>& current_bands() const override {
    return property_set_->current_bands.value();
  }

  uint32_t supported_ip_families() const override {
    return property_set_->supported_ip_families.value();
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  std::string service_name_;
  dbus::ObjectPath object_path_;
  dbus::ObjectProxy* dbus_object_proxy_;
  std::unique_ptr<PropertySet> property_set_;

};

}  // namespace ModemManager1
}  // namespace freedesktop
}  // namespace org

namespace org {
namespace freedesktop {

// Abstract interface proxy for org::freedesktop::ModemManager1.
class ModemManager1ProxyInterface {
 public:
  virtual ~ModemManager1ProxyInterface() = default;

  virtual bool ScanDevices(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ScanDevicesAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetLogging(
      const std::string& in_level,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetLoggingAsync(
      const std::string& in_level,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ReportKernelEvent(
      const brillo::VariantDictionary& in_properties,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ReportKernelEventAsync(
      const brillo::VariantDictionary& in_properties,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool InhibitDevice(
      const std::string& in_uid,
      bool in_inhibit,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void InhibitDeviceAsync(
      const std::string& in_uid,
      bool in_inhibit,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  static const char* VersionName() { return "Version"; }
  virtual const std::string& version() const = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;

  virtual void InitializeProperties(
      const base::RepeatingCallback<void(ModemManager1ProxyInterface*, const std::string&)>& callback) = 0;
};

}  // namespace freedesktop
}  // namespace org

namespace org {
namespace freedesktop {

// Interface proxy for org::freedesktop::ModemManager1.
class ModemManager1Proxy final : public ModemManager1ProxyInterface {
 public:
  class PropertySet : public dbus::PropertySet {
   public:
    PropertySet(dbus::ObjectProxy* object_proxy,
                const PropertyChangedCallback& callback)
        : dbus::PropertySet{object_proxy,
                            "org.freedesktop.ModemManager1",
                            callback} {
      RegisterProperty(VersionName(), &version);
    }
    PropertySet(const PropertySet&) = delete;
    PropertySet& operator=(const PropertySet&) = delete;

    brillo::dbus_utils::Property<std::string> version;

  };

  ModemManager1Proxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name) :
          bus_{bus},
          service_name_{service_name},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  ModemManager1Proxy(const ModemManager1Proxy&) = delete;
  ModemManager1Proxy& operator=(const ModemManager1Proxy&) = delete;

  ~ModemManager1Proxy() override {
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
      const base::RepeatingCallback<void(ModemManager1ProxyInterface*, const std::string&)>& callback) override {
    property_set_.reset(
        new PropertySet(dbus_object_proxy_, base::BindRepeating(callback, this)));
    property_set_->ConnectSignals();
    property_set_->GetAll();
  }

  const PropertySet* GetProperties() const { return &(*property_set_); }
  PropertySet* GetProperties() { return &(*property_set_); }

  bool ScanDevices(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1",
        "ScanDevices",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ScanDevicesAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1",
        "ScanDevices",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool SetLogging(
      const std::string& in_level,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1",
        "SetLogging",
        error,
        in_level);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetLoggingAsync(
      const std::string& in_level,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1",
        "SetLogging",
        std::move(success_callback),
        std::move(error_callback),
        in_level);
  }

  bool ReportKernelEvent(
      const brillo::VariantDictionary& in_properties,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1",
        "ReportKernelEvent",
        error,
        in_properties);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ReportKernelEventAsync(
      const brillo::VariantDictionary& in_properties,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1",
        "ReportKernelEvent",
        std::move(success_callback),
        std::move(error_callback),
        in_properties);
  }

  bool InhibitDevice(
      const std::string& in_uid,
      bool in_inhibit,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1",
        "InhibitDevice",
        error,
        in_uid,
        in_inhibit);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void InhibitDeviceAsync(
      const std::string& in_uid,
      bool in_inhibit,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1",
        "InhibitDevice",
        std::move(success_callback),
        std::move(error_callback),
        in_uid,
        in_inhibit);
  }

  const std::string& version() const override {
    return property_set_->version.value();
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  std::string service_name_;
  const dbus::ObjectPath object_path_{"/org/freedesktop/ModemManager1"};
  dbus::ObjectProxy* dbus_object_proxy_;
  std::unique_ptr<PropertySet> property_set_;

};

}  // namespace freedesktop
}  // namespace org

namespace org {
namespace freedesktop {
namespace DBus {

// Abstract interface proxy for org::freedesktop::DBus::ObjectManager.
class ObjectManagerProxyInterface {
 public:
  virtual ~ObjectManagerProxyInterface() = default;

  virtual bool GetManagedObjects(
      std::map<dbus::ObjectPath, std::map<std::string, brillo::VariantDictionary>>* out_object_paths_interfaces_and_properties,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetManagedObjectsAsync(
      base::OnceCallback<void(const std::map<dbus::ObjectPath, std::map<std::string, brillo::VariantDictionary>>& /*object_paths_interfaces_and_properties*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterInterfacesAddedSignalHandler(
      const base::RepeatingCallback<void(const dbus::ObjectPath&,
                                         const std::map<std::string, brillo::VariantDictionary>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterInterfacesRemovedSignalHandler(
      const base::RepeatingCallback<void(const dbus::ObjectPath&,
                                         const std::vector<std::string>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace DBus
}  // namespace freedesktop
}  // namespace org

namespace org {
namespace freedesktop {
namespace DBus {

// Interface proxy for org::freedesktop::DBus::ObjectManager.
class ObjectManagerProxy final : public ObjectManagerProxyInterface {
 public:
  ObjectManagerProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name,
      const dbus::ObjectPath& object_path) :
          bus_{bus},
          service_name_{service_name},
          object_path_{object_path},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  ObjectManagerProxy(const ObjectManagerProxy&) = delete;
  ObjectManagerProxy& operator=(const ObjectManagerProxy&) = delete;

  ~ObjectManagerProxy() override {
  }

  void RegisterInterfacesAddedSignalHandler(
      const base::RepeatingCallback<void(const dbus::ObjectPath&,
                                         const std::map<std::string, brillo::VariantDictionary>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.freedesktop.DBus.ObjectManager",
        "InterfacesAdded",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterInterfacesRemovedSignalHandler(
      const base::RepeatingCallback<void(const dbus::ObjectPath&,
                                         const std::vector<std::string>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.freedesktop.DBus.ObjectManager",
        "InterfacesRemoved",
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

  bool GetManagedObjects(
      std::map<dbus::ObjectPath, std::map<std::string, brillo::VariantDictionary>>* out_object_paths_interfaces_and_properties,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.DBus.ObjectManager",
        "GetManagedObjects",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_object_paths_interfaces_and_properties);
  }

  void GetManagedObjectsAsync(
      base::OnceCallback<void(const std::map<dbus::ObjectPath, std::map<std::string, brillo::VariantDictionary>>& /*object_paths_interfaces_and_properties*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.DBus.ObjectManager",
        "GetManagedObjects",
        std::move(success_callback),
        std::move(error_callback));
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  std::string service_name_;
  dbus::ObjectPath object_path_;
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace DBus
}  // namespace freedesktop
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_TMP_PORTAGE_CHROMEOS_BASE_POWER_MANAGER_9999_WORK_BUILD_OUT_DEFAULT_GEN_INCLUDE_MODEMMANAGER_DBUS_PROXIES_H
