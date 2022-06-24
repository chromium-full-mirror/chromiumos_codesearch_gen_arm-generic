// Automatic generation of D-Bus interfaces:
//  - com.ubuntu.Upstart0_6.Job
//  - com.ubuntu.Upstart0_6
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_UPSTART_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_UPSTART_DBUS_PROXIES_H
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

namespace com {
namespace ubuntu {
namespace Upstart0_6 {

// Abstract interface proxy for com::ubuntu::Upstart0_6::Job.
class JobProxyInterface {
 public:
  virtual ~JobProxyInterface() = default;

  virtual bool Start(
      const std::vector<std::string>& in_env,
      bool in_wait,
      dbus::ObjectPath* out_instance,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StartAsync(
      const std::vector<std::string>& in_env,
      bool in_wait,
      base::OnceCallback<void(const dbus::ObjectPath& /*instance*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace Upstart0_6
}  // namespace ubuntu
}  // namespace com

namespace com {
namespace ubuntu {
namespace Upstart0_6 {

// Interface proxy for com::ubuntu::Upstart0_6::Job.
class JobProxy final : public JobProxyInterface {
 public:
  JobProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name) :
          bus_{bus},
          service_name_{service_name},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  JobProxy(const JobProxy&) = delete;
  JobProxy& operator=(const JobProxy&) = delete;

  ~JobProxy() override {
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

  bool Start(
      const std::vector<std::string>& in_env,
      bool in_wait,
      dbus::ObjectPath* out_instance,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "com.ubuntu.Upstart0_6.Job",
        "Start",
        error,
        in_env,
        in_wait);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_instance);
  }

  void StartAsync(
      const std::vector<std::string>& in_env,
      bool in_wait,
      base::OnceCallback<void(const dbus::ObjectPath& /*instance*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "com.ubuntu.Upstart0_6.Job",
        "Start",
        std::move(success_callback),
        std::move(error_callback),
        in_env,
        in_wait);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  std::string service_name_;
  const dbus::ObjectPath object_path_{"/com/ubuntu/Upstart/jobs/shill_2devent"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace Upstart0_6
}  // namespace ubuntu
}  // namespace com

namespace com {
namespace ubuntu {

// Abstract interface proxy for com::ubuntu::Upstart0_6.
class Upstart0_6ProxyInterface {
 public:
  virtual ~Upstart0_6ProxyInterface() = default;

  virtual bool ReloadConfiguration(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ReloadConfigurationAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetJobByName(
      const std::string& in_name,
      dbus::ObjectPath* out_job,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetJobByNameAsync(
      const std::string& in_name,
      base::OnceCallback<void(const dbus::ObjectPath& /*job*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetAllJobs(
      std::vector<dbus::ObjectPath>* out_jobs,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetAllJobsAsync(
      base::OnceCallback<void(const std::vector<dbus::ObjectPath>& /*jobs*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterJobAddedSignalHandler(
      const base::RepeatingCallback<void(const dbus::ObjectPath&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterJobRemovedSignalHandler(
      const base::RepeatingCallback<void(const dbus::ObjectPath&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  static const char* versionName() { return "version"; }
  virtual const std::string& version() const = 0;
  static const char* log_priorityName() { return "log_priority"; }
  virtual const std::string& log_priority() const = 0;
  virtual void set_log_priority(const std::string& value,
                                base::OnceCallback<void(bool)> callback) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;

  virtual void InitializeProperties(
      const base::RepeatingCallback<void(Upstart0_6ProxyInterface*, const std::string&)>& callback) = 0;
};

}  // namespace ubuntu
}  // namespace com

namespace com {
namespace ubuntu {

// Interface proxy for com::ubuntu::Upstart0_6.
class Upstart0_6Proxy final : public Upstart0_6ProxyInterface {
 public:
  class PropertySet : public dbus::PropertySet {
   public:
    PropertySet(dbus::ObjectProxy* object_proxy,
                const PropertyChangedCallback& callback)
        : dbus::PropertySet{object_proxy,
                            "com.ubuntu.Upstart0_6",
                            callback} {
      RegisterProperty(versionName(), &version);
      RegisterProperty(log_priorityName(), &log_priority);
    }
    PropertySet(const PropertySet&) = delete;
    PropertySet& operator=(const PropertySet&) = delete;

    brillo::dbus_utils::Property<std::string> version;
    brillo::dbus_utils::Property<std::string> log_priority;

  };

  Upstart0_6Proxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name) :
          bus_{bus},
          service_name_{service_name},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  Upstart0_6Proxy(const Upstart0_6Proxy&) = delete;
  Upstart0_6Proxy& operator=(const Upstart0_6Proxy&) = delete;

  ~Upstart0_6Proxy() override {
  }

  void RegisterJobAddedSignalHandler(
      const base::RepeatingCallback<void(const dbus::ObjectPath&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "com.ubuntu.Upstart0_6",
        "JobAdded",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterJobRemovedSignalHandler(
      const base::RepeatingCallback<void(const dbus::ObjectPath&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "com.ubuntu.Upstart0_6",
        "JobRemoved",
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
      const base::RepeatingCallback<void(Upstart0_6ProxyInterface*, const std::string&)>& callback) override {
    property_set_.reset(
        new PropertySet(dbus_object_proxy_, base::BindRepeating(callback, this)));
    property_set_->ConnectSignals();
    property_set_->GetAll();
  }

  const PropertySet* GetProperties() const { return &(*property_set_); }
  PropertySet* GetProperties() { return &(*property_set_); }

  bool ReloadConfiguration(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "com.ubuntu.Upstart0_6",
        "ReloadConfiguration",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ReloadConfigurationAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "com.ubuntu.Upstart0_6",
        "ReloadConfiguration",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool GetJobByName(
      const std::string& in_name,
      dbus::ObjectPath* out_job,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "com.ubuntu.Upstart0_6",
        "GetJobByName",
        error,
        in_name);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_job);
  }

  void GetJobByNameAsync(
      const std::string& in_name,
      base::OnceCallback<void(const dbus::ObjectPath& /*job*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "com.ubuntu.Upstart0_6",
        "GetJobByName",
        std::move(success_callback),
        std::move(error_callback),
        in_name);
  }

  bool GetAllJobs(
      std::vector<dbus::ObjectPath>* out_jobs,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "com.ubuntu.Upstart0_6",
        "GetAllJobs",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_jobs);
  }

  void GetAllJobsAsync(
      base::OnceCallback<void(const std::vector<dbus::ObjectPath>& /*jobs*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "com.ubuntu.Upstart0_6",
        "GetAllJobs",
        std::move(success_callback),
        std::move(error_callback));
  }

  const std::string& version() const override {
    return property_set_->version.value();
  }

  const std::string& log_priority() const override {
    return property_set_->log_priority.value();
  }

  void set_log_priority(const std::string& value,
                        base::OnceCallback<void(bool)> callback) override {
    property_set_->log_priority.Set(value, std::move(callback));
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  std::string service_name_;
  const dbus::ObjectPath object_path_{"/com/ubuntu/Upstart"};
  dbus::ObjectProxy* dbus_object_proxy_;
  std::unique_ptr<PropertySet> property_set_;

};

}  // namespace ubuntu
}  // namespace com

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SHILL_OUT_DEFAULT_GEN_INCLUDE_UPSTART_DBUS_PROXIES_H
