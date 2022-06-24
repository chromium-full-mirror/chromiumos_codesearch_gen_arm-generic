// Automatic generation of D-Bus interfaces:
//  - org.bluez.Adapter1
//  - org.bluez.AdminPolicyStatus1
//  - org.bluez.Battery1
//  - org.bluez.Device1
//  - org.bluez.LEAdvertisingManager1
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DIAGNOSTICS_OUT_DEFAULT_GEN_INCLUDE_DIAGNOSTICS_DBUS_BINDINGS_BLUETOOTH_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DIAGNOSTICS_OUT_DEFAULT_GEN_INCLUDE_DIAGNOSTICS_DBUS_BINDINGS_BLUETOOTH_DBUS_PROXIES_H
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
class bluezProxy;
}  // namespace org

namespace org {
namespace bluez {

// Abstract interface proxy for org::bluez::Adapter1.
class Adapter1ProxyInterface {
 public:
  virtual ~Adapter1ProxyInterface() = default;

  static const char* AddressName() { return "Address"; }
  virtual const std::string& address() const = 0;
  static const char* NameName() { return "Name"; }
  virtual const std::string& name() const = 0;
  static const char* PoweredName() { return "Powered"; }
  virtual bool powered() const = 0;
  static const char* DiscoverableName() { return "Discoverable"; }
  virtual bool discoverable() const = 0;
  static const char* DiscoveringName() { return "Discovering"; }
  virtual bool discovering() const = 0;
  static const char* UUIDsName() { return "UUIDs"; }
  virtual const std::vector<std::string>& uuids() const = 0;
  static const char* ModaliasName() { return "Modalias"; }
  virtual const std::string& modalias() const = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;

  virtual void SetPropertyChangedCallback(
      const base::RepeatingCallback<void(Adapter1ProxyInterface*, const std::string&)>& callback) = 0;
};

}  // namespace bluez
}  // namespace org

namespace org {
namespace bluez {

// Interface proxy for org::bluez::Adapter1.
class Adapter1Proxy final : public Adapter1ProxyInterface {
 public:
  class PropertySet : public dbus::PropertySet {
   public:
    PropertySet(dbus::ObjectProxy* object_proxy,
                const PropertyChangedCallback& callback)
        : dbus::PropertySet{object_proxy,
                            "org.bluez.Adapter1",
                            callback} {
      RegisterProperty(AddressName(), &address);
      RegisterProperty(NameName(), &name);
      RegisterProperty(PoweredName(), &powered);
      RegisterProperty(DiscoverableName(), &discoverable);
      RegisterProperty(DiscoveringName(), &discovering);
      RegisterProperty(UUIDsName(), &uuids);
      RegisterProperty(ModaliasName(), &modalias);
    }
    PropertySet(const PropertySet&) = delete;
    PropertySet& operator=(const PropertySet&) = delete;

    brillo::dbus_utils::Property<std::string> address;
    brillo::dbus_utils::Property<std::string> name;
    brillo::dbus_utils::Property<bool> powered;
    brillo::dbus_utils::Property<bool> discoverable;
    brillo::dbus_utils::Property<bool> discovering;
    brillo::dbus_utils::Property<std::vector<std::string>> uuids;
    brillo::dbus_utils::Property<std::string> modalias;

  };

  Adapter1Proxy(
      const scoped_refptr<dbus::Bus>& bus,
      const dbus::ObjectPath& object_path,
      PropertySet* property_set) :
          bus_{bus},
          object_path_{object_path},
          property_set_{property_set},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  Adapter1Proxy(const Adapter1Proxy&) = delete;
  Adapter1Proxy& operator=(const Adapter1Proxy&) = delete;

  ~Adapter1Proxy() override {
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

  void SetPropertyChangedCallback(
      const base::RepeatingCallback<void(Adapter1ProxyInterface*, const std::string&)>& callback) override {
    on_property_changed_ = callback;
  }

  const PropertySet* GetProperties() const { return &(*property_set_); }
  PropertySet* GetProperties() { return &(*property_set_); }

  const std::string& address() const override {
    return property_set_->address.value();
  }

  const std::string& name() const override {
    return property_set_->name.value();
  }

  bool powered() const override {
    return property_set_->powered.value();
  }

  bool discoverable() const override {
    return property_set_->discoverable.value();
  }

  bool discovering() const override {
    return property_set_->discovering.value();
  }

  const std::vector<std::string>& uuids() const override {
    return property_set_->uuids.value();
  }

  const std::string& modalias() const override {
    return property_set_->modalias.value();
  }

 private:
  void OnPropertyChanged(const std::string& property_name) {
    if (!on_property_changed_.is_null())
      on_property_changed_.Run(this, property_name);
  }

  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.bluez"};
  dbus::ObjectPath object_path_;
  PropertySet* property_set_;
  base::RepeatingCallback<void(Adapter1ProxyInterface*, const std::string&)> on_property_changed_;
  dbus::ObjectProxy* dbus_object_proxy_;

  friend class org::bluezProxy;
};

}  // namespace bluez
}  // namespace org

namespace org {
namespace bluez {

// Abstract interface proxy for org::bluez::AdminPolicyStatus1.
class AdminPolicyStatus1ProxyInterface {
 public:
  virtual ~AdminPolicyStatus1ProxyInterface() = default;

  static const char* ServiceAllowListName() { return "ServiceAllowList"; }
  virtual const std::vector<std::string>& service_allow_list() const = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;

  virtual void SetPropertyChangedCallback(
      const base::RepeatingCallback<void(AdminPolicyStatus1ProxyInterface*, const std::string&)>& callback) = 0;
};

}  // namespace bluez
}  // namespace org

namespace org {
namespace bluez {

// Interface proxy for org::bluez::AdminPolicyStatus1.
class AdminPolicyStatus1Proxy final : public AdminPolicyStatus1ProxyInterface {
 public:
  class PropertySet : public dbus::PropertySet {
   public:
    PropertySet(dbus::ObjectProxy* object_proxy,
                const PropertyChangedCallback& callback)
        : dbus::PropertySet{object_proxy,
                            "org.bluez.AdminPolicyStatus1",
                            callback} {
      RegisterProperty(ServiceAllowListName(), &service_allow_list);
    }
    PropertySet(const PropertySet&) = delete;
    PropertySet& operator=(const PropertySet&) = delete;

    brillo::dbus_utils::Property<std::vector<std::string>> service_allow_list;

  };

  AdminPolicyStatus1Proxy(
      const scoped_refptr<dbus::Bus>& bus,
      const dbus::ObjectPath& object_path,
      PropertySet* property_set) :
          bus_{bus},
          object_path_{object_path},
          property_set_{property_set},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  AdminPolicyStatus1Proxy(const AdminPolicyStatus1Proxy&) = delete;
  AdminPolicyStatus1Proxy& operator=(const AdminPolicyStatus1Proxy&) = delete;

  ~AdminPolicyStatus1Proxy() override {
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

  void SetPropertyChangedCallback(
      const base::RepeatingCallback<void(AdminPolicyStatus1ProxyInterface*, const std::string&)>& callback) override {
    on_property_changed_ = callback;
  }

  const PropertySet* GetProperties() const { return &(*property_set_); }
  PropertySet* GetProperties() { return &(*property_set_); }

  const std::vector<std::string>& service_allow_list() const override {
    return property_set_->service_allow_list.value();
  }

 private:
  void OnPropertyChanged(const std::string& property_name) {
    if (!on_property_changed_.is_null())
      on_property_changed_.Run(this, property_name);
  }

  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.bluez"};
  dbus::ObjectPath object_path_;
  PropertySet* property_set_;
  base::RepeatingCallback<void(AdminPolicyStatus1ProxyInterface*, const std::string&)> on_property_changed_;
  dbus::ObjectProxy* dbus_object_proxy_;

  friend class org::bluezProxy;
};

}  // namespace bluez
}  // namespace org

namespace org {
namespace bluez {

// Abstract interface proxy for org::bluez::Battery1.
class Battery1ProxyInterface {
 public:
  virtual ~Battery1ProxyInterface() = default;

  static const char* PercentageName() { return "Percentage"; }
  virtual uint8_t percentage() const = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;

  virtual void SetPropertyChangedCallback(
      const base::RepeatingCallback<void(Battery1ProxyInterface*, const std::string&)>& callback) = 0;
};

}  // namespace bluez
}  // namespace org

namespace org {
namespace bluez {

// Interface proxy for org::bluez::Battery1.
class Battery1Proxy final : public Battery1ProxyInterface {
 public:
  class PropertySet : public dbus::PropertySet {
   public:
    PropertySet(dbus::ObjectProxy* object_proxy,
                const PropertyChangedCallback& callback)
        : dbus::PropertySet{object_proxy,
                            "org.bluez.Battery1",
                            callback} {
      RegisterProperty(PercentageName(), &percentage);
    }
    PropertySet(const PropertySet&) = delete;
    PropertySet& operator=(const PropertySet&) = delete;

    brillo::dbus_utils::Property<uint8_t> percentage;

  };

  Battery1Proxy(
      const scoped_refptr<dbus::Bus>& bus,
      const dbus::ObjectPath& object_path,
      PropertySet* property_set) :
          bus_{bus},
          object_path_{object_path},
          property_set_{property_set},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  Battery1Proxy(const Battery1Proxy&) = delete;
  Battery1Proxy& operator=(const Battery1Proxy&) = delete;

  ~Battery1Proxy() override {
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

  void SetPropertyChangedCallback(
      const base::RepeatingCallback<void(Battery1ProxyInterface*, const std::string&)>& callback) override {
    on_property_changed_ = callback;
  }

  const PropertySet* GetProperties() const { return &(*property_set_); }
  PropertySet* GetProperties() { return &(*property_set_); }

  uint8_t percentage() const override {
    return property_set_->percentage.value();
  }

 private:
  void OnPropertyChanged(const std::string& property_name) {
    if (!on_property_changed_.is_null())
      on_property_changed_.Run(this, property_name);
  }

  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.bluez"};
  dbus::ObjectPath object_path_;
  PropertySet* property_set_;
  base::RepeatingCallback<void(Battery1ProxyInterface*, const std::string&)> on_property_changed_;
  dbus::ObjectProxy* dbus_object_proxy_;

  friend class org::bluezProxy;
};

}  // namespace bluez
}  // namespace org

namespace org {
namespace bluez {

// Abstract interface proxy for org::bluez::Device1.
class Device1ProxyInterface {
 public:
  virtual ~Device1ProxyInterface() = default;

  static const char* AddressName() { return "Address"; }
  virtual const std::string& address() const = 0;
  static const char* NameName() { return "Name"; }
  virtual const std::string& name() const = 0;
  static const char* TypeName() { return "Type"; }
  virtual const std::string& type() const = 0;
  static const char* AppearanceName() { return "Appearance"; }
  virtual uint16_t appearance() const = 0;
  static const char* ModaliasName() { return "Modalias"; }
  virtual const std::string& modalias() const = 0;
  static const char* RSSIName() { return "RSSI"; }
  virtual int16_t rssi() const = 0;
  static const char* MTUName() { return "MTU"; }
  virtual uint16_t mtu() const = 0;
  static const char* UUIDsName() { return "UUIDs"; }
  virtual const std::vector<std::string>& uuids() const = 0;
  static const char* ConnectedName() { return "Connected"; }
  virtual bool connected() const = 0;
  static const char* AdapterName() { return "Adapter"; }
  virtual const dbus::ObjectPath& adapter() const = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;

  virtual void SetPropertyChangedCallback(
      const base::RepeatingCallback<void(Device1ProxyInterface*, const std::string&)>& callback) = 0;
};

}  // namespace bluez
}  // namespace org

namespace org {
namespace bluez {

// Interface proxy for org::bluez::Device1.
class Device1Proxy final : public Device1ProxyInterface {
 public:
  class PropertySet : public dbus::PropertySet {
   public:
    PropertySet(dbus::ObjectProxy* object_proxy,
                const PropertyChangedCallback& callback)
        : dbus::PropertySet{object_proxy,
                            "org.bluez.Device1",
                            callback} {
      RegisterProperty(AddressName(), &address);
      RegisterProperty(NameName(), &name);
      RegisterProperty(TypeName(), &type);
      RegisterProperty(AppearanceName(), &appearance);
      RegisterProperty(ModaliasName(), &modalias);
      RegisterProperty(RSSIName(), &rssi);
      RegisterProperty(MTUName(), &mtu);
      RegisterProperty(UUIDsName(), &uuids);
      RegisterProperty(ConnectedName(), &connected);
      RegisterProperty(AdapterName(), &adapter);
    }
    PropertySet(const PropertySet&) = delete;
    PropertySet& operator=(const PropertySet&) = delete;

    brillo::dbus_utils::Property<std::string> address;
    brillo::dbus_utils::Property<std::string> name;
    brillo::dbus_utils::Property<std::string> type;
    brillo::dbus_utils::Property<uint16_t> appearance;
    brillo::dbus_utils::Property<std::string> modalias;
    brillo::dbus_utils::Property<int16_t> rssi;
    brillo::dbus_utils::Property<uint16_t> mtu;
    brillo::dbus_utils::Property<std::vector<std::string>> uuids;
    brillo::dbus_utils::Property<bool> connected;
    brillo::dbus_utils::Property<dbus::ObjectPath> adapter;

  };

  Device1Proxy(
      const scoped_refptr<dbus::Bus>& bus,
      const dbus::ObjectPath& object_path,
      PropertySet* property_set) :
          bus_{bus},
          object_path_{object_path},
          property_set_{property_set},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  Device1Proxy(const Device1Proxy&) = delete;
  Device1Proxy& operator=(const Device1Proxy&) = delete;

  ~Device1Proxy() override {
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

  void SetPropertyChangedCallback(
      const base::RepeatingCallback<void(Device1ProxyInterface*, const std::string&)>& callback) override {
    on_property_changed_ = callback;
  }

  const PropertySet* GetProperties() const { return &(*property_set_); }
  PropertySet* GetProperties() { return &(*property_set_); }

  const std::string& address() const override {
    return property_set_->address.value();
  }

  const std::string& name() const override {
    return property_set_->name.value();
  }

  const std::string& type() const override {
    return property_set_->type.value();
  }

  uint16_t appearance() const override {
    return property_set_->appearance.value();
  }

  const std::string& modalias() const override {
    return property_set_->modalias.value();
  }

  int16_t rssi() const override {
    return property_set_->rssi.value();
  }

  uint16_t mtu() const override {
    return property_set_->mtu.value();
  }

  const std::vector<std::string>& uuids() const override {
    return property_set_->uuids.value();
  }

  bool connected() const override {
    return property_set_->connected.value();
  }

  const dbus::ObjectPath& adapter() const override {
    return property_set_->adapter.value();
  }

 private:
  void OnPropertyChanged(const std::string& property_name) {
    if (!on_property_changed_.is_null())
      on_property_changed_.Run(this, property_name);
  }

  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.bluez"};
  dbus::ObjectPath object_path_;
  PropertySet* property_set_;
  base::RepeatingCallback<void(Device1ProxyInterface*, const std::string&)> on_property_changed_;
  dbus::ObjectProxy* dbus_object_proxy_;

  friend class org::bluezProxy;
};

}  // namespace bluez
}  // namespace org

namespace org {
namespace bluez {

// Abstract interface proxy for org::bluez::LEAdvertisingManager1.
class LEAdvertisingManager1ProxyInterface {
 public:
  virtual ~LEAdvertisingManager1ProxyInterface() = default;

  static const char* SupportedCapabilitiesName() { return "SupportedCapabilities"; }
  virtual const brillo::VariantDictionary& supported_capabilities() const = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;

  virtual void SetPropertyChangedCallback(
      const base::RepeatingCallback<void(LEAdvertisingManager1ProxyInterface*, const std::string&)>& callback) = 0;
};

}  // namespace bluez
}  // namespace org

namespace org {
namespace bluez {

// Interface proxy for org::bluez::LEAdvertisingManager1.
class LEAdvertisingManager1Proxy final : public LEAdvertisingManager1ProxyInterface {
 public:
  class PropertySet : public dbus::PropertySet {
   public:
    PropertySet(dbus::ObjectProxy* object_proxy,
                const PropertyChangedCallback& callback)
        : dbus::PropertySet{object_proxy,
                            "org.bluez.LEAdvertisingManager1",
                            callback} {
      RegisterProperty(SupportedCapabilitiesName(), &supported_capabilities);
    }
    PropertySet(const PropertySet&) = delete;
    PropertySet& operator=(const PropertySet&) = delete;

    brillo::dbus_utils::Property<brillo::VariantDictionary> supported_capabilities;

  };

  LEAdvertisingManager1Proxy(
      const scoped_refptr<dbus::Bus>& bus,
      const dbus::ObjectPath& object_path,
      PropertySet* property_set) :
          bus_{bus},
          object_path_{object_path},
          property_set_{property_set},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  LEAdvertisingManager1Proxy(const LEAdvertisingManager1Proxy&) = delete;
  LEAdvertisingManager1Proxy& operator=(const LEAdvertisingManager1Proxy&) = delete;

  ~LEAdvertisingManager1Proxy() override {
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

  void SetPropertyChangedCallback(
      const base::RepeatingCallback<void(LEAdvertisingManager1ProxyInterface*, const std::string&)>& callback) override {
    on_property_changed_ = callback;
  }

  const PropertySet* GetProperties() const { return &(*property_set_); }
  PropertySet* GetProperties() { return &(*property_set_); }

  const brillo::VariantDictionary& supported_capabilities() const override {
    return property_set_->supported_capabilities.value();
  }

 private:
  void OnPropertyChanged(const std::string& property_name) {
    if (!on_property_changed_.is_null())
      on_property_changed_.Run(this, property_name);
  }

  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.bluez"};
  dbus::ObjectPath object_path_;
  PropertySet* property_set_;
  base::RepeatingCallback<void(LEAdvertisingManager1ProxyInterface*, const std::string&)> on_property_changed_;
  dbus::ObjectProxy* dbus_object_proxy_;

  friend class org::bluezProxy;
};

}  // namespace bluez
}  // namespace org

namespace org {

class bluezProxy : public dbus::ObjectManager::Interface {
 public:
  bluezProxy(const scoped_refptr<dbus::Bus>& bus)
      : bus_{bus},
        dbus_object_manager_{bus->GetObjectManager(
            "org.bluez",
            dbus::ObjectPath{"/"})} {
    dbus_object_manager_->RegisterInterface("org.bluez.Adapter1", this);
    dbus_object_manager_->RegisterInterface("org.bluez.AdminPolicyStatus1", this);
    dbus_object_manager_->RegisterInterface("org.bluez.Battery1", this);
    dbus_object_manager_->RegisterInterface("org.bluez.Device1", this);
    dbus_object_manager_->RegisterInterface("org.bluez.LEAdvertisingManager1", this);
  }

  bluezProxy(const bluezProxy&) = delete;
  bluezProxy& operator=(const bluezProxy&) = delete;

  ~bluezProxy() override {
    dbus_object_manager_->UnregisterInterface("org.bluez.Adapter1");
    dbus_object_manager_->UnregisterInterface("org.bluez.AdminPolicyStatus1");
    dbus_object_manager_->UnregisterInterface("org.bluez.Battery1");
    dbus_object_manager_->UnregisterInterface("org.bluez.Device1");
    dbus_object_manager_->UnregisterInterface("org.bluez.LEAdvertisingManager1");
  }

  dbus::ObjectManager* GetObjectManagerProxy() const {
    return dbus_object_manager_;
  }

  org::bluez::Adapter1ProxyInterface* GetAdapter1Proxy(
      const dbus::ObjectPath& object_path) {
    auto p = adapter1_instances_.find(object_path);
    if (p != adapter1_instances_.end())
      return p->second.get();
    return nullptr;
  }
  std::vector<org::bluez::Adapter1ProxyInterface*> GetAdapter1Instances() const {
    std::vector<org::bluez::Adapter1ProxyInterface*> values;
    values.reserve(adapter1_instances_.size());
    for (const auto& pair : adapter1_instances_)
      values.push_back(pair.second.get());
    return values;
  }
  void SetAdapter1AddedCallback(
      const base::RepeatingCallback<void(org::bluez::Adapter1ProxyInterface*)>& callback) {
    on_adapter1_added_ = callback;
  }
  void SetAdapter1RemovedCallback(
      const base::RepeatingCallback<void(const dbus::ObjectPath&)>& callback) {
    on_adapter1_removed_ = callback;
  }

  org::bluez::AdminPolicyStatus1ProxyInterface* GetAdminPolicyStatus1Proxy(
      const dbus::ObjectPath& object_path) {
    auto p = admin_policy_status1_instances_.find(object_path);
    if (p != admin_policy_status1_instances_.end())
      return p->second.get();
    return nullptr;
  }
  std::vector<org::bluez::AdminPolicyStatus1ProxyInterface*> GetAdminPolicyStatus1Instances() const {
    std::vector<org::bluez::AdminPolicyStatus1ProxyInterface*> values;
    values.reserve(admin_policy_status1_instances_.size());
    for (const auto& pair : admin_policy_status1_instances_)
      values.push_back(pair.second.get());
    return values;
  }
  void SetAdminPolicyStatus1AddedCallback(
      const base::RepeatingCallback<void(org::bluez::AdminPolicyStatus1ProxyInterface*)>& callback) {
    on_admin_policy_status1_added_ = callback;
  }
  void SetAdminPolicyStatus1RemovedCallback(
      const base::RepeatingCallback<void(const dbus::ObjectPath&)>& callback) {
    on_admin_policy_status1_removed_ = callback;
  }

  org::bluez::Battery1ProxyInterface* GetBattery1Proxy(
      const dbus::ObjectPath& object_path) {
    auto p = battery1_instances_.find(object_path);
    if (p != battery1_instances_.end())
      return p->second.get();
    return nullptr;
  }
  std::vector<org::bluez::Battery1ProxyInterface*> GetBattery1Instances() const {
    std::vector<org::bluez::Battery1ProxyInterface*> values;
    values.reserve(battery1_instances_.size());
    for (const auto& pair : battery1_instances_)
      values.push_back(pair.second.get());
    return values;
  }
  void SetBattery1AddedCallback(
      const base::RepeatingCallback<void(org::bluez::Battery1ProxyInterface*)>& callback) {
    on_battery1_added_ = callback;
  }
  void SetBattery1RemovedCallback(
      const base::RepeatingCallback<void(const dbus::ObjectPath&)>& callback) {
    on_battery1_removed_ = callback;
  }

  org::bluez::Device1ProxyInterface* GetDevice1Proxy(
      const dbus::ObjectPath& object_path) {
    auto p = device1_instances_.find(object_path);
    if (p != device1_instances_.end())
      return p->second.get();
    return nullptr;
  }
  std::vector<org::bluez::Device1ProxyInterface*> GetDevice1Instances() const {
    std::vector<org::bluez::Device1ProxyInterface*> values;
    values.reserve(device1_instances_.size());
    for (const auto& pair : device1_instances_)
      values.push_back(pair.second.get());
    return values;
  }
  void SetDevice1AddedCallback(
      const base::RepeatingCallback<void(org::bluez::Device1ProxyInterface*)>& callback) {
    on_device1_added_ = callback;
  }
  void SetDevice1RemovedCallback(
      const base::RepeatingCallback<void(const dbus::ObjectPath&)>& callback) {
    on_device1_removed_ = callback;
  }

  org::bluez::LEAdvertisingManager1ProxyInterface* GetLEAdvertisingManager1Proxy(
      const dbus::ObjectPath& object_path) {
    auto p = leadvertising_manager1_instances_.find(object_path);
    if (p != leadvertising_manager1_instances_.end())
      return p->second.get();
    return nullptr;
  }
  std::vector<org::bluez::LEAdvertisingManager1ProxyInterface*> GetLEAdvertisingManager1Instances() const {
    std::vector<org::bluez::LEAdvertisingManager1ProxyInterface*> values;
    values.reserve(leadvertising_manager1_instances_.size());
    for (const auto& pair : leadvertising_manager1_instances_)
      values.push_back(pair.second.get());
    return values;
  }
  void SetLEAdvertisingManager1AddedCallback(
      const base::RepeatingCallback<void(org::bluez::LEAdvertisingManager1ProxyInterface*)>& callback) {
    on_leadvertising_manager1_added_ = callback;
  }
  void SetLEAdvertisingManager1RemovedCallback(
      const base::RepeatingCallback<void(const dbus::ObjectPath&)>& callback) {
    on_leadvertising_manager1_removed_ = callback;
  }

 private:
  void OnPropertyChanged(const dbus::ObjectPath& object_path,
                         const std::string& interface_name,
                         const std::string& property_name) {
    if (interface_name == "org.bluez.Adapter1") {
      auto p = adapter1_instances_.find(object_path);
      if (p == adapter1_instances_.end())
        return;
      p->second->OnPropertyChanged(property_name);
      return;
    }
    if (interface_name == "org.bluez.AdminPolicyStatus1") {
      auto p = admin_policy_status1_instances_.find(object_path);
      if (p == admin_policy_status1_instances_.end())
        return;
      p->second->OnPropertyChanged(property_name);
      return;
    }
    if (interface_name == "org.bluez.Battery1") {
      auto p = battery1_instances_.find(object_path);
      if (p == battery1_instances_.end())
        return;
      p->second->OnPropertyChanged(property_name);
      return;
    }
    if (interface_name == "org.bluez.Device1") {
      auto p = device1_instances_.find(object_path);
      if (p == device1_instances_.end())
        return;
      p->second->OnPropertyChanged(property_name);
      return;
    }
    if (interface_name == "org.bluez.LEAdvertisingManager1") {
      auto p = leadvertising_manager1_instances_.find(object_path);
      if (p == leadvertising_manager1_instances_.end())
        return;
      p->second->OnPropertyChanged(property_name);
      return;
    }
  }

  void ObjectAdded(
      const dbus::ObjectPath& object_path,
      const std::string& interface_name) override {
    if (interface_name == "org.bluez.Adapter1") {
      auto property_set =
          static_cast<org::bluez::Adapter1Proxy::PropertySet*>(
              dbus_object_manager_->GetProperties(object_path, interface_name));
      std::unique_ptr<org::bluez::Adapter1Proxy> adapter1_proxy{
        new org::bluez::Adapter1Proxy{bus_, object_path, property_set}
      };
      auto p = adapter1_instances_.emplace(object_path, std::move(adapter1_proxy));
      if (!on_adapter1_added_.is_null())
        on_adapter1_added_.Run(p.first->second.get());
      return;
    }
    if (interface_name == "org.bluez.AdminPolicyStatus1") {
      auto property_set =
          static_cast<org::bluez::AdminPolicyStatus1Proxy::PropertySet*>(
              dbus_object_manager_->GetProperties(object_path, interface_name));
      std::unique_ptr<org::bluez::AdminPolicyStatus1Proxy> admin_policy_status1_proxy{
        new org::bluez::AdminPolicyStatus1Proxy{bus_, object_path, property_set}
      };
      auto p = admin_policy_status1_instances_.emplace(object_path, std::move(admin_policy_status1_proxy));
      if (!on_admin_policy_status1_added_.is_null())
        on_admin_policy_status1_added_.Run(p.first->second.get());
      return;
    }
    if (interface_name == "org.bluez.Battery1") {
      auto property_set =
          static_cast<org::bluez::Battery1Proxy::PropertySet*>(
              dbus_object_manager_->GetProperties(object_path, interface_name));
      std::unique_ptr<org::bluez::Battery1Proxy> battery1_proxy{
        new org::bluez::Battery1Proxy{bus_, object_path, property_set}
      };
      auto p = battery1_instances_.emplace(object_path, std::move(battery1_proxy));
      if (!on_battery1_added_.is_null())
        on_battery1_added_.Run(p.first->second.get());
      return;
    }
    if (interface_name == "org.bluez.Device1") {
      auto property_set =
          static_cast<org::bluez::Device1Proxy::PropertySet*>(
              dbus_object_manager_->GetProperties(object_path, interface_name));
      std::unique_ptr<org::bluez::Device1Proxy> device1_proxy{
        new org::bluez::Device1Proxy{bus_, object_path, property_set}
      };
      auto p = device1_instances_.emplace(object_path, std::move(device1_proxy));
      if (!on_device1_added_.is_null())
        on_device1_added_.Run(p.first->second.get());
      return;
    }
    if (interface_name == "org.bluez.LEAdvertisingManager1") {
      auto property_set =
          static_cast<org::bluez::LEAdvertisingManager1Proxy::PropertySet*>(
              dbus_object_manager_->GetProperties(object_path, interface_name));
      std::unique_ptr<org::bluez::LEAdvertisingManager1Proxy> leadvertising_manager1_proxy{
        new org::bluez::LEAdvertisingManager1Proxy{bus_, object_path, property_set}
      };
      auto p = leadvertising_manager1_instances_.emplace(object_path, std::move(leadvertising_manager1_proxy));
      if (!on_leadvertising_manager1_added_.is_null())
        on_leadvertising_manager1_added_.Run(p.first->second.get());
      return;
    }
  }

  void ObjectRemoved(
      const dbus::ObjectPath& object_path,
      const std::string& interface_name) override {
    if (interface_name == "org.bluez.Adapter1") {
      auto p = adapter1_instances_.find(object_path);
      if (p != adapter1_instances_.end()) {
        if (!on_adapter1_removed_.is_null())
          on_adapter1_removed_.Run(object_path);
        adapter1_instances_.erase(p);
      }
      return;
    }
    if (interface_name == "org.bluez.AdminPolicyStatus1") {
      auto p = admin_policy_status1_instances_.find(object_path);
      if (p != admin_policy_status1_instances_.end()) {
        if (!on_admin_policy_status1_removed_.is_null())
          on_admin_policy_status1_removed_.Run(object_path);
        admin_policy_status1_instances_.erase(p);
      }
      return;
    }
    if (interface_name == "org.bluez.Battery1") {
      auto p = battery1_instances_.find(object_path);
      if (p != battery1_instances_.end()) {
        if (!on_battery1_removed_.is_null())
          on_battery1_removed_.Run(object_path);
        battery1_instances_.erase(p);
      }
      return;
    }
    if (interface_name == "org.bluez.Device1") {
      auto p = device1_instances_.find(object_path);
      if (p != device1_instances_.end()) {
        if (!on_device1_removed_.is_null())
          on_device1_removed_.Run(object_path);
        device1_instances_.erase(p);
      }
      return;
    }
    if (interface_name == "org.bluez.LEAdvertisingManager1") {
      auto p = leadvertising_manager1_instances_.find(object_path);
      if (p != leadvertising_manager1_instances_.end()) {
        if (!on_leadvertising_manager1_removed_.is_null())
          on_leadvertising_manager1_removed_.Run(object_path);
        leadvertising_manager1_instances_.erase(p);
      }
      return;
    }
  }

  dbus::PropertySet* CreateProperties(
      dbus::ObjectProxy* object_proxy,
      const dbus::ObjectPath& object_path,
      const std::string& interface_name) override {
    if (interface_name == "org.bluez.Adapter1") {
      return new org::bluez::Adapter1Proxy::PropertySet{
          object_proxy,
          base::BindRepeating(&bluezProxy::OnPropertyChanged,
                              weak_ptr_factory_.GetWeakPtr(),
                              object_path,
                              interface_name)
      };
    }
    if (interface_name == "org.bluez.AdminPolicyStatus1") {
      return new org::bluez::AdminPolicyStatus1Proxy::PropertySet{
          object_proxy,
          base::BindRepeating(&bluezProxy::OnPropertyChanged,
                              weak_ptr_factory_.GetWeakPtr(),
                              object_path,
                              interface_name)
      };
    }
    if (interface_name == "org.bluez.Battery1") {
      return new org::bluez::Battery1Proxy::PropertySet{
          object_proxy,
          base::BindRepeating(&bluezProxy::OnPropertyChanged,
                              weak_ptr_factory_.GetWeakPtr(),
                              object_path,
                              interface_name)
      };
    }
    if (interface_name == "org.bluez.Device1") {
      return new org::bluez::Device1Proxy::PropertySet{
          object_proxy,
          base::BindRepeating(&bluezProxy::OnPropertyChanged,
                              weak_ptr_factory_.GetWeakPtr(),
                              object_path,
                              interface_name)
      };
    }
    if (interface_name == "org.bluez.LEAdvertisingManager1") {
      return new org::bluez::LEAdvertisingManager1Proxy::PropertySet{
          object_proxy,
          base::BindRepeating(&bluezProxy::OnPropertyChanged,
                              weak_ptr_factory_.GetWeakPtr(),
                              object_path,
                              interface_name)
      };
    }
    LOG(FATAL) << "Creating properties for unsupported interface "
               << interface_name;
    return nullptr;
  }

  scoped_refptr<dbus::Bus> bus_;
  dbus::ObjectManager* dbus_object_manager_;
  std::map<dbus::ObjectPath,
           std::unique_ptr<org::bluez::Adapter1Proxy>> adapter1_instances_;
  base::RepeatingCallback<void(org::bluez::Adapter1ProxyInterface*)> on_adapter1_added_;
  base::RepeatingCallback<void(const dbus::ObjectPath&)> on_adapter1_removed_;
  std::map<dbus::ObjectPath,
           std::unique_ptr<org::bluez::AdminPolicyStatus1Proxy>> admin_policy_status1_instances_;
  base::RepeatingCallback<void(org::bluez::AdminPolicyStatus1ProxyInterface*)> on_admin_policy_status1_added_;
  base::RepeatingCallback<void(const dbus::ObjectPath&)> on_admin_policy_status1_removed_;
  std::map<dbus::ObjectPath,
           std::unique_ptr<org::bluez::Battery1Proxy>> battery1_instances_;
  base::RepeatingCallback<void(org::bluez::Battery1ProxyInterface*)> on_battery1_added_;
  base::RepeatingCallback<void(const dbus::ObjectPath&)> on_battery1_removed_;
  std::map<dbus::ObjectPath,
           std::unique_ptr<org::bluez::Device1Proxy>> device1_instances_;
  base::RepeatingCallback<void(org::bluez::Device1ProxyInterface*)> on_device1_added_;
  base::RepeatingCallback<void(const dbus::ObjectPath&)> on_device1_removed_;
  std::map<dbus::ObjectPath,
           std::unique_ptr<org::bluez::LEAdvertisingManager1Proxy>> leadvertising_manager1_instances_;
  base::RepeatingCallback<void(org::bluez::LEAdvertisingManager1ProxyInterface*)> on_leadvertising_manager1_added_;
  base::RepeatingCallback<void(const dbus::ObjectPath&)> on_leadvertising_manager1_removed_;
  base::WeakPtrFactory<bluezProxy> weak_ptr_factory_{this};
};

}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DIAGNOSTICS_OUT_DEFAULT_GEN_INCLUDE_DIAGNOSTICS_DBUS_BINDINGS_BLUETOOTH_DBUS_PROXIES_H
