// Automatic generation of D-Bus interfaces:
//  - org.freedesktop.ModemManager1.Modem.Location
//  - org.freedesktop.ModemManager1.Modem.Modem3gpp.ProfileManager
//  - org.freedesktop.ModemManager1.Modem.Modem3gpp
//  - org.freedesktop.ModemManager1.Modem.ModemCdma
//  - org.freedesktop.ModemManager1.Modem.Signal
//  - org.freedesktop.ModemManager1.Modem.Simple
//  - org.freedesktop.ModemManager1.Modem
//  - org.freedesktop.ModemManager1.Sim
//  - org.freedesktop.ModemManager1
//  - org.freedesktop.DBus.ObjectManager
//  - org.freedesktop.DBus.Properties
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_CELLULAR_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_CELLULAR_DBUS_PROXIES_H
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

// Abstract interface proxy for org::freedesktop::ModemManager1::Modem::Location.
class LocationProxyInterface {
 public:
  virtual ~LocationProxyInterface() = default;

  virtual bool Setup(
      uint32_t in_sources,
      bool in_signal_location,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetupAsync(
      uint32_t in_sources,
      bool in_signal_location,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetLocation(
      std::map<uint32_t, brillo::Any>* out_Location,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetLocationAsync(
      base::OnceCallback<void(const std::map<uint32_t, brillo::Any>& /*Location*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetSuplServer(
      const std::string& in_supl,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetSuplServerAsync(
      const std::string& in_supl,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool InjectAssistanceData(
      const std::vector<uint8_t>& in_data,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void InjectAssistanceDataAsync(
      const std::vector<uint8_t>& in_data,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetGpsRefreshRate(
      uint32_t in_rate,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetGpsRefreshRateAsync(
      uint32_t in_rate,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  static const char* CapabilitiesName() { return "Capabilities"; }
  virtual uint32_t capabilities() const = 0;
  static const char* SupportedAssistanceDataName() { return "SupportedAssistanceData"; }
  virtual uint32_t supported_assistance_data() const = 0;
  static const char* EnabledName() { return "Enabled"; }
  virtual uint32_t enabled() const = 0;
  static const char* SignalsLocationName() { return "SignalsLocation"; }
  virtual bool signals_location() const = 0;
  static const char* LocationName() { return "Location"; }
  virtual const std::map<uint32_t, brillo::Any>& location() const = 0;
  static const char* SuplServerName() { return "SuplServer"; }
  virtual const std::string& supl_server() const = 0;
  static const char* AssistanceDataServersName() { return "AssistanceDataServers"; }
  virtual const std::vector<std::string>& assistance_data_servers() const = 0;
  static const char* GpsRefreshRateName() { return "GpsRefreshRate"; }
  virtual uint32_t gps_refresh_rate() const = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;

  virtual void InitializeProperties(
      const base::RepeatingCallback<void(LocationProxyInterface*, const std::string&)>& callback) = 0;
};

}  // namespace Modem
}  // namespace ModemManager1
}  // namespace freedesktop
}  // namespace org

namespace org {
namespace freedesktop {
namespace ModemManager1 {
namespace Modem {

// Interface proxy for org::freedesktop::ModemManager1::Modem::Location.
class LocationProxy final : public LocationProxyInterface {
 public:
  class PropertySet : public dbus::PropertySet {
   public:
    PropertySet(dbus::ObjectProxy* object_proxy,
                const PropertyChangedCallback& callback)
        : dbus::PropertySet{object_proxy,
                            "org.freedesktop.ModemManager1.Modem.Location",
                            callback} {
      RegisterProperty(CapabilitiesName(), &capabilities);
      RegisterProperty(SupportedAssistanceDataName(), &supported_assistance_data);
      RegisterProperty(EnabledName(), &enabled);
      RegisterProperty(SignalsLocationName(), &signals_location);
      RegisterProperty(LocationName(), &location);
      RegisterProperty(SuplServerName(), &supl_server);
      RegisterProperty(AssistanceDataServersName(), &assistance_data_servers);
      RegisterProperty(GpsRefreshRateName(), &gps_refresh_rate);
    }
    PropertySet(const PropertySet&) = delete;
    PropertySet& operator=(const PropertySet&) = delete;

    brillo::dbus_utils::Property<uint32_t> capabilities;
    brillo::dbus_utils::Property<uint32_t> supported_assistance_data;
    brillo::dbus_utils::Property<uint32_t> enabled;
    brillo::dbus_utils::Property<bool> signals_location;
    brillo::dbus_utils::Property<std::map<uint32_t, brillo::Any>> location;
    brillo::dbus_utils::Property<std::string> supl_server;
    brillo::dbus_utils::Property<std::vector<std::string>> assistance_data_servers;
    brillo::dbus_utils::Property<uint32_t> gps_refresh_rate;

  };

  LocationProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name,
      const dbus::ObjectPath& object_path) :
          bus_{bus},
          service_name_{service_name},
          object_path_{object_path},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  LocationProxy(const LocationProxy&) = delete;
  LocationProxy& operator=(const LocationProxy&) = delete;

  ~LocationProxy() override {
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
      const base::RepeatingCallback<void(LocationProxyInterface*, const std::string&)>& callback) override {
    property_set_.reset(
        new PropertySet(dbus_object_proxy_, base::BindRepeating(callback, this)));
    property_set_->ConnectSignals();
    property_set_->GetAll();
  }

  const PropertySet* GetProperties() const { return &(*property_set_); }
  PropertySet* GetProperties() { return &(*property_set_); }

  bool Setup(
      uint32_t in_sources,
      bool in_signal_location,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Location",
        "Setup",
        error,
        in_sources,
        in_signal_location);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetupAsync(
      uint32_t in_sources,
      bool in_signal_location,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Location",
        "Setup",
        std::move(success_callback),
        std::move(error_callback),
        in_sources,
        in_signal_location);
  }

  bool GetLocation(
      std::map<uint32_t, brillo::Any>* out_Location,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Location",
        "GetLocation",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_Location);
  }

  void GetLocationAsync(
      base::OnceCallback<void(const std::map<uint32_t, brillo::Any>& /*Location*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Location",
        "GetLocation",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool SetSuplServer(
      const std::string& in_supl,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Location",
        "SetSuplServer",
        error,
        in_supl);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetSuplServerAsync(
      const std::string& in_supl,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Location",
        "SetSuplServer",
        std::move(success_callback),
        std::move(error_callback),
        in_supl);
  }

  bool InjectAssistanceData(
      const std::vector<uint8_t>& in_data,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Location",
        "InjectAssistanceData",
        error,
        in_data);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void InjectAssistanceDataAsync(
      const std::vector<uint8_t>& in_data,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Location",
        "InjectAssistanceData",
        std::move(success_callback),
        std::move(error_callback),
        in_data);
  }

  bool SetGpsRefreshRate(
      uint32_t in_rate,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Location",
        "SetGpsRefreshRate",
        error,
        in_rate);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetGpsRefreshRateAsync(
      uint32_t in_rate,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Location",
        "SetGpsRefreshRate",
        std::move(success_callback),
        std::move(error_callback),
        in_rate);
  }

  uint32_t capabilities() const override {
    return property_set_->capabilities.value();
  }

  uint32_t supported_assistance_data() const override {
    return property_set_->supported_assistance_data.value();
  }

  uint32_t enabled() const override {
    return property_set_->enabled.value();
  }

  bool signals_location() const override {
    return property_set_->signals_location.value();
  }

  const std::map<uint32_t, brillo::Any>& location() const override {
    return property_set_->location.value();
  }

  const std::string& supl_server() const override {
    return property_set_->supl_server.value();
  }

  const std::vector<std::string>& assistance_data_servers() const override {
    return property_set_->assistance_data_servers.value();
  }

  uint32_t gps_refresh_rate() const override {
    return property_set_->gps_refresh_rate.value();
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
namespace Modem {
namespace Modem3gpp {

// Abstract interface proxy for org::freedesktop::ModemManager1::Modem::Modem3gpp::ProfileManager.
class ProfileManagerProxyInterface {
 public:
  virtual ~ProfileManagerProxyInterface() = default;

  virtual bool List(
      std::vector<brillo::VariantDictionary>* out_profiles,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ListAsync(
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*profiles*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Set(
      const brillo::VariantDictionary& in_requested_properties,
      brillo::VariantDictionary* out_stored_properties,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetAsync(
      const brillo::VariantDictionary& in_requested_properties,
      base::OnceCallback<void(const brillo::VariantDictionary& /*stored_properties*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Delete(
      const brillo::VariantDictionary& in_properties,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DeleteAsync(
      const brillo::VariantDictionary& in_properties,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterUpdatedSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  static const char* IndexFieldName() { return "IndexField"; }
  virtual const std::string& index_field() const = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;

  virtual void InitializeProperties(
      const base::RepeatingCallback<void(ProfileManagerProxyInterface*, const std::string&)>& callback) = 0;
};

}  // namespace Modem3gpp
}  // namespace Modem
}  // namespace ModemManager1
}  // namespace freedesktop
}  // namespace org

namespace org {
namespace freedesktop {
namespace ModemManager1 {
namespace Modem {
namespace Modem3gpp {

// Interface proxy for org::freedesktop::ModemManager1::Modem::Modem3gpp::ProfileManager.
class ProfileManagerProxy final : public ProfileManagerProxyInterface {
 public:
  class PropertySet : public dbus::PropertySet {
   public:
    PropertySet(dbus::ObjectProxy* object_proxy,
                const PropertyChangedCallback& callback)
        : dbus::PropertySet{object_proxy,
                            "org.freedesktop.ModemManager1.Modem.Modem3gpp.ProfileManager",
                            callback} {
      RegisterProperty(IndexFieldName(), &index_field);
    }
    PropertySet(const PropertySet&) = delete;
    PropertySet& operator=(const PropertySet&) = delete;

    brillo::dbus_utils::Property<std::string> index_field;

  };

  ProfileManagerProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name,
      const dbus::ObjectPath& object_path) :
          bus_{bus},
          service_name_{service_name},
          object_path_{object_path},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  ProfileManagerProxy(const ProfileManagerProxy&) = delete;
  ProfileManagerProxy& operator=(const ProfileManagerProxy&) = delete;

  ~ProfileManagerProxy() override {
  }

  void RegisterUpdatedSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Modem3gpp.ProfileManager",
        "Updated",
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
      const base::RepeatingCallback<void(ProfileManagerProxyInterface*, const std::string&)>& callback) override {
    property_set_.reset(
        new PropertySet(dbus_object_proxy_, base::BindRepeating(callback, this)));
    property_set_->ConnectSignals();
    property_set_->GetAll();
  }

  const PropertySet* GetProperties() const { return &(*property_set_); }
  PropertySet* GetProperties() { return &(*property_set_); }

  bool List(
      std::vector<brillo::VariantDictionary>* out_profiles,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Modem3gpp.ProfileManager",
        "List",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_profiles);
  }

  void ListAsync(
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*profiles*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Modem3gpp.ProfileManager",
        "List",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool Set(
      const brillo::VariantDictionary& in_requested_properties,
      brillo::VariantDictionary* out_stored_properties,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Modem3gpp.ProfileManager",
        "Set",
        error,
        in_requested_properties);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_stored_properties);
  }

  void SetAsync(
      const brillo::VariantDictionary& in_requested_properties,
      base::OnceCallback<void(const brillo::VariantDictionary& /*stored_properties*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Modem3gpp.ProfileManager",
        "Set",
        std::move(success_callback),
        std::move(error_callback),
        in_requested_properties);
  }

  bool Delete(
      const brillo::VariantDictionary& in_properties,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Modem3gpp.ProfileManager",
        "Delete",
        error,
        in_properties);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void DeleteAsync(
      const brillo::VariantDictionary& in_properties,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Modem3gpp.ProfileManager",
        "Delete",
        std::move(success_callback),
        std::move(error_callback),
        in_properties);
  }

  const std::string& index_field() const override {
    return property_set_->index_field.value();
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  std::string service_name_;
  dbus::ObjectPath object_path_;
  dbus::ObjectProxy* dbus_object_proxy_;
  std::unique_ptr<PropertySet> property_set_;

};

}  // namespace Modem3gpp
}  // namespace Modem
}  // namespace ModemManager1
}  // namespace freedesktop
}  // namespace org

namespace org {
namespace freedesktop {
namespace ModemManager1 {
namespace Modem {

// Abstract interface proxy for org::freedesktop::ModemManager1::Modem::Modem3gpp.
class Modem3gppProxyInterface {
 public:
  virtual ~Modem3gppProxyInterface() = default;

  virtual bool Register(
      const std::string& in_operator_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterAsync(
      const std::string& in_operator_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Scan(
      std::vector<brillo::VariantDictionary>* out_results,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ScanAsync(
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*results*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetEpsUeModeOperation(
      uint32_t in_mode,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetEpsUeModeOperationAsync(
      uint32_t in_mode,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetInitialEpsBearerSettings(
      const brillo::VariantDictionary& in_settings,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetInitialEpsBearerSettingsAsync(
      const brillo::VariantDictionary& in_settings,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetNr5gRegistrationSettings(
      const brillo::VariantDictionary& in_properties,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetNr5gRegistrationSettingsAsync(
      const brillo::VariantDictionary& in_properties,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool DisableFacilityLock(
      const std::tuple<uint32_t, std::string>& in_properties,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DisableFacilityLockAsync(
      const std::tuple<uint32_t, std::string>& in_properties,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetPacketServiceState(
      uint32_t in_state,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetPacketServiceStateAsync(
      uint32_t in_state,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  static const char* ImeiName() { return "Imei"; }
  virtual const std::string& imei() const = 0;
  static const char* RegistrationStateName() { return "RegistrationState"; }
  virtual uint32_t registration_state() const = 0;
  static const char* OperatorCodeName() { return "OperatorCode"; }
  virtual const std::string& operator_code() const = 0;
  static const char* OperatorNameName() { return "OperatorName"; }
  virtual const std::string& operator_name() const = 0;
  static const char* EnabledFacilityLocksName() { return "EnabledFacilityLocks"; }
  virtual uint32_t enabled_facility_locks() const = 0;
  static const char* SubscriptionStateName() { return "SubscriptionState"; }
  virtual uint32_t subscription_state() const = 0;
  static const char* EpsUeModeOperationName() { return "EpsUeModeOperation"; }
  virtual uint32_t eps_ue_mode_operation() const = 0;
  static const char* PcoName() { return "Pco"; }
  virtual const std::vector<std::tuple<uint32_t, bool, std::vector<uint8_t>>>& pco() const = 0;
  static const char* InitialEpsBearerName() { return "InitialEpsBearer"; }
  virtual const dbus::ObjectPath& initial_eps_bearer() const = 0;
  static const char* InitialEpsBearerSettingsName() { return "InitialEpsBearerSettings"; }
  virtual const brillo::VariantDictionary& initial_eps_bearer_settings() const = 0;
  static const char* PacketServiceStateName() { return "PacketServiceState"; }
  virtual uint32_t packet_service_state() const = 0;
  static const char* Nr5gRegistrationSettingsName() { return "Nr5gRegistrationSettings"; }
  virtual const brillo::VariantDictionary& nr5g_registration_settings() const = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;

  virtual void InitializeProperties(
      const base::RepeatingCallback<void(Modem3gppProxyInterface*, const std::string&)>& callback) = 0;
};

}  // namespace Modem
}  // namespace ModemManager1
}  // namespace freedesktop
}  // namespace org

namespace org {
namespace freedesktop {
namespace ModemManager1 {
namespace Modem {

// Interface proxy for org::freedesktop::ModemManager1::Modem::Modem3gpp.
class Modem3gppProxy final : public Modem3gppProxyInterface {
 public:
  class PropertySet : public dbus::PropertySet {
   public:
    PropertySet(dbus::ObjectProxy* object_proxy,
                const PropertyChangedCallback& callback)
        : dbus::PropertySet{object_proxy,
                            "org.freedesktop.ModemManager1.Modem.Modem3gpp",
                            callback} {
      RegisterProperty(ImeiName(), &imei);
      RegisterProperty(RegistrationStateName(), &registration_state);
      RegisterProperty(OperatorCodeName(), &operator_code);
      RegisterProperty(OperatorNameName(), &operator_name);
      RegisterProperty(EnabledFacilityLocksName(), &enabled_facility_locks);
      RegisterProperty(SubscriptionStateName(), &subscription_state);
      RegisterProperty(EpsUeModeOperationName(), &eps_ue_mode_operation);
      RegisterProperty(PcoName(), &pco);
      RegisterProperty(InitialEpsBearerName(), &initial_eps_bearer);
      RegisterProperty(InitialEpsBearerSettingsName(), &initial_eps_bearer_settings);
      RegisterProperty(PacketServiceStateName(), &packet_service_state);
      RegisterProperty(Nr5gRegistrationSettingsName(), &nr5g_registration_settings);
    }
    PropertySet(const PropertySet&) = delete;
    PropertySet& operator=(const PropertySet&) = delete;

    brillo::dbus_utils::Property<std::string> imei;
    brillo::dbus_utils::Property<uint32_t> registration_state;
    brillo::dbus_utils::Property<std::string> operator_code;
    brillo::dbus_utils::Property<std::string> operator_name;
    brillo::dbus_utils::Property<uint32_t> enabled_facility_locks;
    brillo::dbus_utils::Property<uint32_t> subscription_state;
    brillo::dbus_utils::Property<uint32_t> eps_ue_mode_operation;
    brillo::dbus_utils::Property<std::vector<std::tuple<uint32_t, bool, std::vector<uint8_t>>>> pco;
    brillo::dbus_utils::Property<dbus::ObjectPath> initial_eps_bearer;
    brillo::dbus_utils::Property<brillo::VariantDictionary> initial_eps_bearer_settings;
    brillo::dbus_utils::Property<uint32_t> packet_service_state;
    brillo::dbus_utils::Property<brillo::VariantDictionary> nr5g_registration_settings;

  };

  Modem3gppProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name,
      const dbus::ObjectPath& object_path) :
          bus_{bus},
          service_name_{service_name},
          object_path_{object_path},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  Modem3gppProxy(const Modem3gppProxy&) = delete;
  Modem3gppProxy& operator=(const Modem3gppProxy&) = delete;

  ~Modem3gppProxy() override {
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
      const base::RepeatingCallback<void(Modem3gppProxyInterface*, const std::string&)>& callback) override {
    property_set_.reset(
        new PropertySet(dbus_object_proxy_, base::BindRepeating(callback, this)));
    property_set_->ConnectSignals();
    property_set_->GetAll();
  }

  const PropertySet* GetProperties() const { return &(*property_set_); }
  PropertySet* GetProperties() { return &(*property_set_); }

  bool Register(
      const std::string& in_operator_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Modem3gpp",
        "Register",
        error,
        in_operator_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RegisterAsync(
      const std::string& in_operator_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Modem3gpp",
        "Register",
        std::move(success_callback),
        std::move(error_callback),
        in_operator_id);
  }

  bool Scan(
      std::vector<brillo::VariantDictionary>* out_results,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Modem3gpp",
        "Scan",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_results);
  }

  void ScanAsync(
      base::OnceCallback<void(const std::vector<brillo::VariantDictionary>& /*results*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Modem3gpp",
        "Scan",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool SetEpsUeModeOperation(
      uint32_t in_mode,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Modem3gpp",
        "SetEpsUeModeOperation",
        error,
        in_mode);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetEpsUeModeOperationAsync(
      uint32_t in_mode,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Modem3gpp",
        "SetEpsUeModeOperation",
        std::move(success_callback),
        std::move(error_callback),
        in_mode);
  }

  bool SetInitialEpsBearerSettings(
      const brillo::VariantDictionary& in_settings,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Modem3gpp",
        "SetInitialEpsBearerSettings",
        error,
        in_settings);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetInitialEpsBearerSettingsAsync(
      const brillo::VariantDictionary& in_settings,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Modem3gpp",
        "SetInitialEpsBearerSettings",
        std::move(success_callback),
        std::move(error_callback),
        in_settings);
  }

  bool SetNr5gRegistrationSettings(
      const brillo::VariantDictionary& in_properties,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Modem3gpp",
        "SetNr5gRegistrationSettings",
        error,
        in_properties);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetNr5gRegistrationSettingsAsync(
      const brillo::VariantDictionary& in_properties,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Modem3gpp",
        "SetNr5gRegistrationSettings",
        std::move(success_callback),
        std::move(error_callback),
        in_properties);
  }

  bool DisableFacilityLock(
      const std::tuple<uint32_t, std::string>& in_properties,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Modem3gpp",
        "DisableFacilityLock",
        error,
        in_properties);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void DisableFacilityLockAsync(
      const std::tuple<uint32_t, std::string>& in_properties,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Modem3gpp",
        "DisableFacilityLock",
        std::move(success_callback),
        std::move(error_callback),
        in_properties);
  }

  bool SetPacketServiceState(
      uint32_t in_state,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Modem3gpp",
        "SetPacketServiceState",
        error,
        in_state);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetPacketServiceStateAsync(
      uint32_t in_state,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Modem3gpp",
        "SetPacketServiceState",
        std::move(success_callback),
        std::move(error_callback),
        in_state);
  }

  const std::string& imei() const override {
    return property_set_->imei.value();
  }

  uint32_t registration_state() const override {
    return property_set_->registration_state.value();
  }

  const std::string& operator_code() const override {
    return property_set_->operator_code.value();
  }

  const std::string& operator_name() const override {
    return property_set_->operator_name.value();
  }

  uint32_t enabled_facility_locks() const override {
    return property_set_->enabled_facility_locks.value();
  }

  uint32_t subscription_state() const override {
    return property_set_->subscription_state.value();
  }

  uint32_t eps_ue_mode_operation() const override {
    return property_set_->eps_ue_mode_operation.value();
  }

  const std::vector<std::tuple<uint32_t, bool, std::vector<uint8_t>>>& pco() const override {
    return property_set_->pco.value();
  }

  const dbus::ObjectPath& initial_eps_bearer() const override {
    return property_set_->initial_eps_bearer.value();
  }

  const brillo::VariantDictionary& initial_eps_bearer_settings() const override {
    return property_set_->initial_eps_bearer_settings.value();
  }

  uint32_t packet_service_state() const override {
    return property_set_->packet_service_state.value();
  }

  const brillo::VariantDictionary& nr5g_registration_settings() const override {
    return property_set_->nr5g_registration_settings.value();
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
namespace Modem {

// Abstract interface proxy for org::freedesktop::ModemManager1::Modem::ModemCdma.
class ModemCdmaProxyInterface {
 public:
  virtual ~ModemCdmaProxyInterface() = default;

  virtual bool Activate(
      const std::string& in_carrier_code,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ActivateAsync(
      const std::string& in_carrier_code,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ActivateManual(
      const brillo::VariantDictionary& in_properties,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ActivateManualAsync(
      const brillo::VariantDictionary& in_properties,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterActivationStateChangedSignalHandler(
      const base::RepeatingCallback<void(uint32_t,
                                         uint32_t,
                                         const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  static const char* ActivationStateName() { return "ActivationState"; }
  virtual uint32_t activation_state() const = 0;
  static const char* MeidName() { return "Meid"; }
  virtual const std::string& meid() const = 0;
  static const char* EsnName() { return "Esn"; }
  virtual const std::string& esn() const = 0;
  static const char* SidName() { return "Sid"; }
  virtual uint32_t sid() const = 0;
  static const char* NidName() { return "Nid"; }
  virtual uint32_t nid() const = 0;
  static const char* Cdma1xRegistrationStateName() { return "Cdma1xRegistrationState"; }
  virtual uint32_t cdma1x_registration_state() const = 0;
  static const char* EvdoRegistrationStateName() { return "EvdoRegistrationState"; }
  virtual uint32_t evdo_registration_state() const = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;

  virtual void InitializeProperties(
      const base::RepeatingCallback<void(ModemCdmaProxyInterface*, const std::string&)>& callback) = 0;
};

}  // namespace Modem
}  // namespace ModemManager1
}  // namespace freedesktop
}  // namespace org

namespace org {
namespace freedesktop {
namespace ModemManager1 {
namespace Modem {

// Interface proxy for org::freedesktop::ModemManager1::Modem::ModemCdma.
class ModemCdmaProxy final : public ModemCdmaProxyInterface {
 public:
  class PropertySet : public dbus::PropertySet {
   public:
    PropertySet(dbus::ObjectProxy* object_proxy,
                const PropertyChangedCallback& callback)
        : dbus::PropertySet{object_proxy,
                            "org.freedesktop.ModemManager1.Modem.ModemCdma",
                            callback} {
      RegisterProperty(ActivationStateName(), &activation_state);
      RegisterProperty(MeidName(), &meid);
      RegisterProperty(EsnName(), &esn);
      RegisterProperty(SidName(), &sid);
      RegisterProperty(NidName(), &nid);
      RegisterProperty(Cdma1xRegistrationStateName(), &cdma1x_registration_state);
      RegisterProperty(EvdoRegistrationStateName(), &evdo_registration_state);
    }
    PropertySet(const PropertySet&) = delete;
    PropertySet& operator=(const PropertySet&) = delete;

    brillo::dbus_utils::Property<uint32_t> activation_state;
    brillo::dbus_utils::Property<std::string> meid;
    brillo::dbus_utils::Property<std::string> esn;
    brillo::dbus_utils::Property<uint32_t> sid;
    brillo::dbus_utils::Property<uint32_t> nid;
    brillo::dbus_utils::Property<uint32_t> cdma1x_registration_state;
    brillo::dbus_utils::Property<uint32_t> evdo_registration_state;

  };

  ModemCdmaProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name,
      const dbus::ObjectPath& object_path) :
          bus_{bus},
          service_name_{service_name},
          object_path_{object_path},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  ModemCdmaProxy(const ModemCdmaProxy&) = delete;
  ModemCdmaProxy& operator=(const ModemCdmaProxy&) = delete;

  ~ModemCdmaProxy() override {
  }

  void RegisterActivationStateChangedSignalHandler(
      const base::RepeatingCallback<void(uint32_t,
                                         uint32_t,
                                         const brillo::VariantDictionary&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.ModemCdma",
        "ActivationStateChanged",
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
      const base::RepeatingCallback<void(ModemCdmaProxyInterface*, const std::string&)>& callback) override {
    property_set_.reset(
        new PropertySet(dbus_object_proxy_, base::BindRepeating(callback, this)));
    property_set_->ConnectSignals();
    property_set_->GetAll();
  }

  const PropertySet* GetProperties() const { return &(*property_set_); }
  PropertySet* GetProperties() { return &(*property_set_); }

  bool Activate(
      const std::string& in_carrier_code,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.ModemCdma",
        "Activate",
        error,
        in_carrier_code);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ActivateAsync(
      const std::string& in_carrier_code,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.ModemCdma",
        "Activate",
        std::move(success_callback),
        std::move(error_callback),
        in_carrier_code);
  }

  bool ActivateManual(
      const brillo::VariantDictionary& in_properties,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.ModemCdma",
        "ActivateManual",
        error,
        in_properties);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ActivateManualAsync(
      const brillo::VariantDictionary& in_properties,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.ModemCdma",
        "ActivateManual",
        std::move(success_callback),
        std::move(error_callback),
        in_properties);
  }

  uint32_t activation_state() const override {
    return property_set_->activation_state.value();
  }

  const std::string& meid() const override {
    return property_set_->meid.value();
  }

  const std::string& esn() const override {
    return property_set_->esn.value();
  }

  uint32_t sid() const override {
    return property_set_->sid.value();
  }

  uint32_t nid() const override {
    return property_set_->nid.value();
  }

  uint32_t cdma1x_registration_state() const override {
    return property_set_->cdma1x_registration_state.value();
  }

  uint32_t evdo_registration_state() const override {
    return property_set_->evdo_registration_state.value();
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
namespace Modem {

// Abstract interface proxy for org::freedesktop::ModemManager1::Modem::Signal.
class SignalProxyInterface {
 public:
  virtual ~SignalProxyInterface() = default;

  virtual bool Setup(
      uint32_t in_rate,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetupAsync(
      uint32_t in_rate,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetupThresholds(
      const brillo::VariantDictionary& in_settings,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetupThresholdsAsync(
      const brillo::VariantDictionary& in_settings,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  static const char* RateName() { return "Rate"; }
  virtual uint32_t rate() const = 0;
  static const char* RssiThresholdName() { return "RssiThreshold"; }
  virtual uint32_t rssi_threshold() const = 0;
  static const char* ErrorRateThresholdName() { return "ErrorRateThreshold"; }
  virtual bool error_rate_threshold() const = 0;
  static const char* CdmaName() { return "Cdma"; }
  virtual const brillo::VariantDictionary& cdma() const = 0;
  static const char* EvdoName() { return "Evdo"; }
  virtual const brillo::VariantDictionary& evdo() const = 0;
  static const char* GsmName() { return "Gsm"; }
  virtual const brillo::VariantDictionary& gsm() const = 0;
  static const char* UmtsName() { return "Umts"; }
  virtual const brillo::VariantDictionary& umts() const = 0;
  static const char* LteName() { return "Lte"; }
  virtual const brillo::VariantDictionary& lte() const = 0;
  static const char* Nr5gName() { return "Nr5g"; }
  virtual const brillo::VariantDictionary& nr5g() const = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;

  virtual void InitializeProperties(
      const base::RepeatingCallback<void(SignalProxyInterface*, const std::string&)>& callback) = 0;
};

}  // namespace Modem
}  // namespace ModemManager1
}  // namespace freedesktop
}  // namespace org

namespace org {
namespace freedesktop {
namespace ModemManager1 {
namespace Modem {

// Interface proxy for org::freedesktop::ModemManager1::Modem::Signal.
class SignalProxy final : public SignalProxyInterface {
 public:
  class PropertySet : public dbus::PropertySet {
   public:
    PropertySet(dbus::ObjectProxy* object_proxy,
                const PropertyChangedCallback& callback)
        : dbus::PropertySet{object_proxy,
                            "org.freedesktop.ModemManager1.Modem.Signal",
                            callback} {
      RegisterProperty(RateName(), &rate);
      RegisterProperty(RssiThresholdName(), &rssi_threshold);
      RegisterProperty(ErrorRateThresholdName(), &error_rate_threshold);
      RegisterProperty(CdmaName(), &cdma);
      RegisterProperty(EvdoName(), &evdo);
      RegisterProperty(GsmName(), &gsm);
      RegisterProperty(UmtsName(), &umts);
      RegisterProperty(LteName(), &lte);
      RegisterProperty(Nr5gName(), &nr5g);
    }
    PropertySet(const PropertySet&) = delete;
    PropertySet& operator=(const PropertySet&) = delete;

    brillo::dbus_utils::Property<uint32_t> rate;
    brillo::dbus_utils::Property<uint32_t> rssi_threshold;
    brillo::dbus_utils::Property<bool> error_rate_threshold;
    brillo::dbus_utils::Property<brillo::VariantDictionary> cdma;
    brillo::dbus_utils::Property<brillo::VariantDictionary> evdo;
    brillo::dbus_utils::Property<brillo::VariantDictionary> gsm;
    brillo::dbus_utils::Property<brillo::VariantDictionary> umts;
    brillo::dbus_utils::Property<brillo::VariantDictionary> lte;
    brillo::dbus_utils::Property<brillo::VariantDictionary> nr5g;

  };

  SignalProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name,
      const dbus::ObjectPath& object_path) :
          bus_{bus},
          service_name_{service_name},
          object_path_{object_path},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  SignalProxy(const SignalProxy&) = delete;
  SignalProxy& operator=(const SignalProxy&) = delete;

  ~SignalProxy() override {
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
      const base::RepeatingCallback<void(SignalProxyInterface*, const std::string&)>& callback) override {
    property_set_.reset(
        new PropertySet(dbus_object_proxy_, base::BindRepeating(callback, this)));
    property_set_->ConnectSignals();
    property_set_->GetAll();
  }

  const PropertySet* GetProperties() const { return &(*property_set_); }
  PropertySet* GetProperties() { return &(*property_set_); }

  bool Setup(
      uint32_t in_rate,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Signal",
        "Setup",
        error,
        in_rate);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetupAsync(
      uint32_t in_rate,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Signal",
        "Setup",
        std::move(success_callback),
        std::move(error_callback),
        in_rate);
  }

  bool SetupThresholds(
      const brillo::VariantDictionary& in_settings,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Signal",
        "SetupThresholds",
        error,
        in_settings);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetupThresholdsAsync(
      const brillo::VariantDictionary& in_settings,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Signal",
        "SetupThresholds",
        std::move(success_callback),
        std::move(error_callback),
        in_settings);
  }

  uint32_t rate() const override {
    return property_set_->rate.value();
  }

  uint32_t rssi_threshold() const override {
    return property_set_->rssi_threshold.value();
  }

  bool error_rate_threshold() const override {
    return property_set_->error_rate_threshold.value();
  }

  const brillo::VariantDictionary& cdma() const override {
    return property_set_->cdma.value();
  }

  const brillo::VariantDictionary& evdo() const override {
    return property_set_->evdo.value();
  }

  const brillo::VariantDictionary& gsm() const override {
    return property_set_->gsm.value();
  }

  const brillo::VariantDictionary& umts() const override {
    return property_set_->umts.value();
  }

  const brillo::VariantDictionary& lte() const override {
    return property_set_->lte.value();
  }

  const brillo::VariantDictionary& nr5g() const override {
    return property_set_->nr5g.value();
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
namespace Modem {

// Abstract interface proxy for org::freedesktop::ModemManager1::Modem::Simple.
class SimpleProxyInterface {
 public:
  virtual ~SimpleProxyInterface() = default;

  virtual bool Connect(
      const brillo::VariantDictionary& in_properties,
      dbus::ObjectPath* out_bearer,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ConnectAsync(
      const brillo::VariantDictionary& in_properties,
      base::OnceCallback<void(const dbus::ObjectPath& /*bearer*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Disconnect(
      const dbus::ObjectPath& in_bearer,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void DisconnectAsync(
      const dbus::ObjectPath& in_bearer,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetStatus(
      brillo::VariantDictionary* out_properties,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetStatusAsync(
      base::OnceCallback<void(const brillo::VariantDictionary& /*properties*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace Modem
}  // namespace ModemManager1
}  // namespace freedesktop
}  // namespace org

namespace org {
namespace freedesktop {
namespace ModemManager1 {
namespace Modem {

// Interface proxy for org::freedesktop::ModemManager1::Modem::Simple.
class SimpleProxy final : public SimpleProxyInterface {
 public:
  SimpleProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name,
      const dbus::ObjectPath& object_path) :
          bus_{bus},
          service_name_{service_name},
          object_path_{object_path},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  SimpleProxy(const SimpleProxy&) = delete;
  SimpleProxy& operator=(const SimpleProxy&) = delete;

  ~SimpleProxy() override {
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

  bool Connect(
      const brillo::VariantDictionary& in_properties,
      dbus::ObjectPath* out_bearer,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Simple",
        "Connect",
        error,
        in_properties);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_bearer);
  }

  void ConnectAsync(
      const brillo::VariantDictionary& in_properties,
      base::OnceCallback<void(const dbus::ObjectPath& /*bearer*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Simple",
        "Connect",
        std::move(success_callback),
        std::move(error_callback),
        in_properties);
  }

  bool Disconnect(
      const dbus::ObjectPath& in_bearer,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Simple",
        "Disconnect",
        error,
        in_bearer);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void DisconnectAsync(
      const dbus::ObjectPath& in_bearer,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Simple",
        "Disconnect",
        std::move(success_callback),
        std::move(error_callback),
        in_bearer);
  }

  bool GetStatus(
      brillo::VariantDictionary* out_properties,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Simple",
        "GetStatus",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_properties);
  }

  void GetStatusAsync(
      base::OnceCallback<void(const brillo::VariantDictionary& /*properties*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Modem.Simple",
        "GetStatus",
        std::move(success_callback),
        std::move(error_callback));
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  std::string service_name_;
  dbus::ObjectPath object_path_;
  dbus::ObjectProxy* dbus_object_proxy_;

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
namespace ModemManager1 {

// Abstract interface proxy for org::freedesktop::ModemManager1::Sim.
class SimProxyInterface {
 public:
  virtual ~SimProxyInterface() = default;

  virtual bool SendPin(
      const std::string& in_pin,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SendPinAsync(
      const std::string& in_pin,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SendPuk(
      const std::string& in_puk,
      const std::string& in_pin,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SendPukAsync(
      const std::string& in_puk,
      const std::string& in_pin,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool EnablePin(
      const std::string& in_pin,
      bool in_enabled,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void EnablePinAsync(
      const std::string& in_pin,
      bool in_enabled,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ChangePin(
      const std::string& in_old_pin,
      const std::string& in_new_pin,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ChangePinAsync(
      const std::string& in_old_pin,
      const std::string& in_new_pin,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetPreferredNetworks(
      const std::vector<std::tuple<std::string, uint32_t>>& in_preferred_networks,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetPreferredNetworksAsync(
      const std::vector<std::tuple<std::string, uint32_t>>& in_preferred_networks,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  static const char* ActiveName() { return "Active"; }
  virtual bool active() const = 0;
  static const char* SimIdentifierName() { return "SimIdentifier"; }
  virtual const std::string& sim_identifier() const = 0;
  static const char* ImsiName() { return "Imsi"; }
  virtual const std::string& imsi() const = 0;
  static const char* EidName() { return "Eid"; }
  virtual const std::string& eid() const = 0;
  static const char* OperatorIdentifierName() { return "OperatorIdentifier"; }
  virtual const std::string& operator_identifier() const = 0;
  static const char* OperatorNameName() { return "OperatorName"; }
  virtual const std::string& operator_name() const = 0;
  static const char* EmergencyNumbersName() { return "EmergencyNumbers"; }
  virtual const std::vector<std::string>& emergency_numbers() const = 0;
  static const char* PreferredNetworksName() { return "PreferredNetworks"; }
  virtual const std::vector<std::tuple<std::string, uint32_t>>& preferred_networks() const = 0;
  static const char* SimTypeName() { return "SimType"; }
  virtual uint32_t sim_type() const = 0;
  static const char* EsimStatusName() { return "EsimStatus"; }
  virtual uint32_t esim_status() const = 0;
  static const char* RemovabilityName() { return "Removability"; }
  virtual uint32_t removability() const = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;

  virtual void InitializeProperties(
      const base::RepeatingCallback<void(SimProxyInterface*, const std::string&)>& callback) = 0;
};

}  // namespace ModemManager1
}  // namespace freedesktop
}  // namespace org

namespace org {
namespace freedesktop {
namespace ModemManager1 {

// Interface proxy for org::freedesktop::ModemManager1::Sim.
class SimProxy final : public SimProxyInterface {
 public:
  class PropertySet : public dbus::PropertySet {
   public:
    PropertySet(dbus::ObjectProxy* object_proxy,
                const PropertyChangedCallback& callback)
        : dbus::PropertySet{object_proxy,
                            "org.freedesktop.ModemManager1.Sim",
                            callback} {
      RegisterProperty(ActiveName(), &active);
      RegisterProperty(SimIdentifierName(), &sim_identifier);
      RegisterProperty(ImsiName(), &imsi);
      RegisterProperty(EidName(), &eid);
      RegisterProperty(OperatorIdentifierName(), &operator_identifier);
      RegisterProperty(OperatorNameName(), &operator_name);
      RegisterProperty(EmergencyNumbersName(), &emergency_numbers);
      RegisterProperty(PreferredNetworksName(), &preferred_networks);
      RegisterProperty(SimTypeName(), &sim_type);
      RegisterProperty(EsimStatusName(), &esim_status);
      RegisterProperty(RemovabilityName(), &removability);
    }
    PropertySet(const PropertySet&) = delete;
    PropertySet& operator=(const PropertySet&) = delete;

    brillo::dbus_utils::Property<bool> active;
    brillo::dbus_utils::Property<std::string> sim_identifier;
    brillo::dbus_utils::Property<std::string> imsi;
    brillo::dbus_utils::Property<std::string> eid;
    brillo::dbus_utils::Property<std::string> operator_identifier;
    brillo::dbus_utils::Property<std::string> operator_name;
    brillo::dbus_utils::Property<std::vector<std::string>> emergency_numbers;
    brillo::dbus_utils::Property<std::vector<std::tuple<std::string, uint32_t>>> preferred_networks;
    brillo::dbus_utils::Property<uint32_t> sim_type;
    brillo::dbus_utils::Property<uint32_t> esim_status;
    brillo::dbus_utils::Property<uint32_t> removability;

  };

  SimProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name,
      const dbus::ObjectPath& object_path) :
          bus_{bus},
          service_name_{service_name},
          object_path_{object_path},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  SimProxy(const SimProxy&) = delete;
  SimProxy& operator=(const SimProxy&) = delete;

  ~SimProxy() override {
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
      const base::RepeatingCallback<void(SimProxyInterface*, const std::string&)>& callback) override {
    property_set_.reset(
        new PropertySet(dbus_object_proxy_, base::BindRepeating(callback, this)));
    property_set_->ConnectSignals();
    property_set_->GetAll();
  }

  const PropertySet* GetProperties() const { return &(*property_set_); }
  PropertySet* GetProperties() { return &(*property_set_); }

  bool SendPin(
      const std::string& in_pin,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Sim",
        "SendPin",
        error,
        in_pin);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SendPinAsync(
      const std::string& in_pin,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Sim",
        "SendPin",
        std::move(success_callback),
        std::move(error_callback),
        in_pin);
  }

  bool SendPuk(
      const std::string& in_puk,
      const std::string& in_pin,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Sim",
        "SendPuk",
        error,
        in_puk,
        in_pin);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SendPukAsync(
      const std::string& in_puk,
      const std::string& in_pin,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Sim",
        "SendPuk",
        std::move(success_callback),
        std::move(error_callback),
        in_puk,
        in_pin);
  }

  bool EnablePin(
      const std::string& in_pin,
      bool in_enabled,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Sim",
        "EnablePin",
        error,
        in_pin,
        in_enabled);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void EnablePinAsync(
      const std::string& in_pin,
      bool in_enabled,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Sim",
        "EnablePin",
        std::move(success_callback),
        std::move(error_callback),
        in_pin,
        in_enabled);
  }

  bool ChangePin(
      const std::string& in_old_pin,
      const std::string& in_new_pin,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Sim",
        "ChangePin",
        error,
        in_old_pin,
        in_new_pin);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ChangePinAsync(
      const std::string& in_old_pin,
      const std::string& in_new_pin,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Sim",
        "ChangePin",
        std::move(success_callback),
        std::move(error_callback),
        in_old_pin,
        in_new_pin);
  }

  bool SetPreferredNetworks(
      const std::vector<std::tuple<std::string, uint32_t>>& in_preferred_networks,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Sim",
        "SetPreferredNetworks",
        error,
        in_preferred_networks);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetPreferredNetworksAsync(
      const std::vector<std::tuple<std::string, uint32_t>>& in_preferred_networks,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.ModemManager1.Sim",
        "SetPreferredNetworks",
        std::move(success_callback),
        std::move(error_callback),
        in_preferred_networks);
  }

  bool active() const override {
    return property_set_->active.value();
  }

  const std::string& sim_identifier() const override {
    return property_set_->sim_identifier.value();
  }

  const std::string& imsi() const override {
    return property_set_->imsi.value();
  }

  const std::string& eid() const override {
    return property_set_->eid.value();
  }

  const std::string& operator_identifier() const override {
    return property_set_->operator_identifier.value();
  }

  const std::string& operator_name() const override {
    return property_set_->operator_name.value();
  }

  const std::vector<std::string>& emergency_numbers() const override {
    return property_set_->emergency_numbers.value();
  }

  const std::vector<std::tuple<std::string, uint32_t>>& preferred_networks() const override {
    return property_set_->preferred_networks.value();
  }

  uint32_t sim_type() const override {
    return property_set_->sim_type.value();
  }

  uint32_t esim_status() const override {
    return property_set_->esim_status.value();
  }

  uint32_t removability() const override {
    return property_set_->removability.value();
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

namespace org {
namespace freedesktop {
namespace DBus {

// Abstract interface proxy for org::freedesktop::DBus::Properties.
class PropertiesProxyInterface {
 public:
  virtual ~PropertiesProxyInterface() = default;

  virtual bool Get(
      const std::string& in_interface_name,
      const std::string& in_property_name,
      brillo::Any* out_value,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetAsync(
      const std::string& in_interface_name,
      const std::string& in_property_name,
      base::OnceCallback<void(const brillo::Any& /*value*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool Set(
      const std::string& in_interface_name,
      const std::string& in_property_name,
      const brillo::Any& in_value,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetAsync(
      const std::string& in_interface_name,
      const std::string& in_property_name,
      const brillo::Any& in_value,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetAll(
      const std::string& in_interface_name,
      brillo::VariantDictionary* out_properties,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetAllAsync(
      const std::string& in_interface_name,
      base::OnceCallback<void(const brillo::VariantDictionary& /*properties*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterPropertiesChangedSignalHandler(
      const base::RepeatingCallback<void(const std::string&,
                                         const brillo::VariantDictionary&,
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

// Interface proxy for org::freedesktop::DBus::Properties.
class PropertiesProxy final : public PropertiesProxyInterface {
 public:
  PropertiesProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name,
      const dbus::ObjectPath& object_path) :
          bus_{bus},
          service_name_{service_name},
          object_path_{object_path},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  PropertiesProxy(const PropertiesProxy&) = delete;
  PropertiesProxy& operator=(const PropertiesProxy&) = delete;

  ~PropertiesProxy() override {
  }

  void RegisterPropertiesChangedSignalHandler(
      const base::RepeatingCallback<void(const std::string&,
                                         const brillo::VariantDictionary&,
                                         const std::vector<std::string>&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.freedesktop.DBus.Properties",
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

  bool Get(
      const std::string& in_interface_name,
      const std::string& in_property_name,
      brillo::Any* out_value,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.DBus.Properties",
        "Get",
        error,
        in_interface_name,
        in_property_name);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_value);
  }

  void GetAsync(
      const std::string& in_interface_name,
      const std::string& in_property_name,
      base::OnceCallback<void(const brillo::Any& /*value*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.DBus.Properties",
        "Get",
        std::move(success_callback),
        std::move(error_callback),
        in_interface_name,
        in_property_name);
  }

  bool Set(
      const std::string& in_interface_name,
      const std::string& in_property_name,
      const brillo::Any& in_value,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.DBus.Properties",
        "Set",
        error,
        in_interface_name,
        in_property_name,
        in_value);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetAsync(
      const std::string& in_interface_name,
      const std::string& in_property_name,
      const brillo::Any& in_value,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.DBus.Properties",
        "Set",
        std::move(success_callback),
        std::move(error_callback),
        in_interface_name,
        in_property_name,
        in_value);
  }

  bool GetAll(
      const std::string& in_interface_name,
      brillo::VariantDictionary* out_properties,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.DBus.Properties",
        "GetAll",
        error,
        in_interface_name);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_properties);
  }

  void GetAllAsync(
      const std::string& in_interface_name,
      base::OnceCallback<void(const brillo::VariantDictionary& /*properties*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.freedesktop.DBus.Properties",
        "GetAll",
        std::move(success_callback),
        std::move(error_callback),
        in_interface_name);
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

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_CELLULAR_DBUS_PROXIES_H
