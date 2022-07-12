// Automatic generation of D-Bus interfaces:
//  - org.chromium.debugd
#ifndef ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_DEBUGD_CLIENT_OUT_DEFAULT_GEN_INCLUDE_DEBUGD_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_DEBUGD_CLIENT_OUT_DEFAULT_GEN_INCLUDE_DEBUGD_DBUS_PROXIES_H
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

// Abstract interface proxy for org::chromium::debugd.
class debugdProxyInterface {
 public:
  virtual ~debugdProxyInterface() = default;

  // Starts pinging the specified hostname with the specified options, with
  // output directed to the given output file descriptor. The returned opaque
  // string functions as a handle for this particular ping. Multiple pings
  // can be running at once.
  virtual bool PingStart(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      const std::string& in_destination,
      const brillo::VariantDictionary& in_options,
      std::string* out_handle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Starts pinging the specified hostname with the specified options, with
  // output directed to the given output file descriptor. The returned opaque
  // string functions as a handle for this particular ping. Multiple pings
  // can be running at once.
  virtual void PingStartAsync(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      const std::string& in_destination,
      const brillo::VariantDictionary& in_options,
      base::OnceCallback<void(const std::string& /*handle*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Stops a running ping.
  virtual bool PingStop(
      const std::string& in_handle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Stops a running ping.
  virtual void PingStopAsync(
      const std::string& in_handle,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Start system/kernel tracing.  If tracing is already enabled it is
  // stopped first and any collected events are discarded.  The kernel
  // must have been configured to support tracing.
  virtual bool SystraceStart(
      const std::string& in_categories,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Start system/kernel tracing.  If tracing is already enabled it is
  // stopped first and any collected events are discarded.  The kernel
  // must have been configured to support tracing.
  virtual void SystraceStartAsync(
      const std::string& in_categories,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Stop system/kernel tracing and write the collected event data.
  virtual bool SystraceStop(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Stop system/kernel tracing and write the collected event data.
  virtual void SystraceStopAsync(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Return current status for system/kernel tracing including whether it
  // is enabled, the tracing clock, and the set of events enabled.
  virtual bool SystraceStatus(
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Return current status for system/kernel tracing including whether it
  // is enabled, the tracing clock, and the set of events enabled.
  virtual void SystraceStatusAsync(
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool TracePathStart(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      const std::string& in_destination,
      const brillo::VariantDictionary& in_options,
      std::string* out_handle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void TracePathStartAsync(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      const std::string& in_destination,
      const brillo::VariantDictionary& in_options,
      base::OnceCallback<void(const std::string& /*handle*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Stops a running tracepath.
  virtual bool TracePathStop(
      const std::string& in_handle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Stops a running tracepath.
  virtual void TracePathStopAsync(
      const std::string& in_handle,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns the IP addresses.
  virtual bool GetIpAddresses(
      const brillo::VariantDictionary& in_options,
      std::vector<std::string>* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns the IP addresses.
  virtual void GetIpAddressesAsync(
      const brillo::VariantDictionary& in_options,
      base::OnceCallback<void(const std::vector<std::string>& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns the routing table.
  virtual bool GetRoutes(
      const brillo::VariantDictionary& in_options,
      std::vector<std::string>* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns the routing table.
  virtual void GetRoutesAsync(
      const brillo::VariantDictionary& in_options,
      base::OnceCallback<void(const std::vector<std::string>& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns network information as a JSON string. See the design document
  // for a rationale.
  virtual bool GetNetworkStatus(
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns network information as a JSON string. See the design document
  // for a rationale.
  virtual void GetNetworkStatusAsync(
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs system-wide perf profiling. The profile parameters are selected by
  // perf_args.
  virtual bool GetPerfOutput(
      uint32_t in_duration_sec,
      const std::vector<std::string>& in_perf_args,
      int32_t* out_status,
      std::vector<uint8_t>* out_perf_data,
      std::vector<uint8_t>* out_perf_stat,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs system-wide perf profiling. The profile parameters are selected by
  // perf_args.
  virtual void GetPerfOutputAsync(
      uint32_t in_duration_sec,
      const std::vector<std::string>& in_perf_args,
      base::OnceCallback<void(int32_t /*status*/, const std::vector<uint8_t>& /*perf_data*/, const std::vector<uint8_t>& /*perf_stat*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs system-wide perf profiling. The profile parameters are selected by
  // perf_args.
  // This method runs quipper asynchronously so that debugd isn't blocked for
  // duration_sec. The DBus client reads the perf output using the file
  // descriptor. Only one profiler session is allowed to run using this
  // method. Calling this method while the profiler is running yields a DBus
  // error. The profiler session can optionally be stopped using method
  // StopPerf before duration_sec elapses.
  virtual bool GetPerfOutputFd(
      uint32_t in_duration_sec,
      const std::vector<std::string>& in_perf_args,
      const brillo::dbus_utils::FileDescriptor& in_stdout,
      uint64_t* out_session_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs system-wide perf profiling. The profile parameters are selected by
  // perf_args.
  // This method runs quipper asynchronously so that debugd isn't blocked for
  // duration_sec. The DBus client reads the perf output using the file
  // descriptor. Only one profiler session is allowed to run using this
  // method. Calling this method while the profiler is running yields a DBus
  // error. The profiler session can optionally be stopped using method
  // StopPerf before duration_sec elapses.
  virtual void GetPerfOutputFdAsync(
      uint32_t in_duration_sec,
      const std::vector<std::string>& in_perf_args,
      const brillo::dbus_utils::FileDescriptor& in_stdout,
      base::OnceCallback<void(uint64_t /*session_id*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Stop the existing profiler session and gather perf output right away. If
  // the collection started by GetPerfOutputFd has finished, calling this
  // method will silently succeed.
  virtual bool StopPerf(
      uint64_t in_session_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Stop the existing profiler session and gather perf output right away. If
  // the collection started by GetPerfOutputFd has finished, calling this
  // method will silently succeed.
  virtual void StopPerfAsync(
      uint64_t in_session_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs system-wide perf profiling through quipper. The profile parameters
  // are selected by quipper_args.
  // This method runs quipper asynchronously so that debugd isn't blocked for
  // however long perf is recording. The DBus client reads the perf output
  // using the file descriptor. Only one profiler session is allowed to run
  // using this method. Calling this method while the profiler is running
  // yields a DBus error. The profiler session can optionally be stopped
  // early using method StopPerf.
  virtual bool GetPerfOutputV2(
      const std::vector<std::string>& in_quipper_args,
      bool in_disable_cpu_idle,
      const brillo::dbus_utils::FileDescriptor& in_stdout,
      uint64_t* out_session_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs system-wide perf profiling through quipper. The profile parameters
  // are selected by quipper_args.
  // This method runs quipper asynchronously so that debugd isn't blocked for
  // however long perf is recording. The DBus client reads the perf output
  // using the file descriptor. Only one profiler session is allowed to run
  // using this method. Calling this method while the profiler is running
  // yields a DBus error. The profiler session can optionally be stopped
  // early using method StopPerf.
  virtual void GetPerfOutputV2Async(
      const std::vector<std::string>& in_quipper_args,
      bool in_disable_cpu_idle,
      const brillo::dbus_utils::FileDescriptor& in_stdout,
      base::OnceCallback<void(uint64_t /*session_id*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Packages up system logs into a .tar(.gz) and returns it over the
  // supplied file descriptor.
  virtual bool DumpDebugLogs(
      bool in_is_compressed,
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Packages up system logs into a .tar(.gz) and returns it over the
  // supplied file descriptor.
  virtual void DumpDebugLogsAsync(
      bool in_is_compressed,
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Enables or disables debug mode for a specified subsystem.
  virtual bool SetDebugMode(
      const std::string& in_subsystem,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Enables or disables debug mode for a specified subsystem.
  virtual void SetDebugModeAsync(
      const std::string& in_subsystem,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Fetches the contents of a single system log, identified by name. See
  // /src/log_tool.cc for a list of valid names.
  virtual bool GetLog(
      const std::string& in_log,
      std::string* out_contents,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Fetches the contents of a single system log, identified by name. See
  // /src/log_tool.cc for a list of valid names.
  virtual void GetLogAsync(
      const std::string& in_log,
      base::OnceCallback<void(const std::string& /*contents*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns all the system logs.
  virtual bool GetAllLogs(
      std::map<std::string, std::string>* out_logs,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns all the system logs.
  virtual void GetAllLogsAsync(
      base::OnceCallback<void(const std::map<std::string, std::string>& /*logs*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Fills the system logs for feedback reports in the file whose file
  // descriptor is given. This is used for logs that are so big that they
  // exceed the limits of D-Bus returning them.
  virtual bool GetBigFeedbackLogs(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      const std::string& in_username,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Fills the system logs for feedback reports in the file whose file
  // descriptor is given. This is used for logs that are so big that they
  // exceed the limits of D-Bus returning them.
  virtual void GetBigFeedbackLogsAsync(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      const std::string& in_username,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Retrieves the ARC bug report and saves it in debugd daemon store.
  // If a backup already exists, it is over-written.
  // If backup operation fails, an error is logged.
  virtual bool BackupArcBugReport(
      const std::string& in_username,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Retrieves the ARC bug report and saves it in debugd daemon store.
  // If a backup already exists, it is over-written.
  // If backup operation fails, an error is logged.
  virtual void BackupArcBugReportAsync(
      const std::string& in_username,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Deletes the backed up ARC bug report saved in daemon store.
  // If delete operation fails, an error is logged.
  virtual bool DeleteArcBugReportBackup(
      const std::string& in_username,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Deletes the backed up ARC bug report saved in daemon store.
  // If delete operation fails, an error is logged.
  virtual void DeleteArcBugReportBackupAsync(
      const std::string& in_username,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Fills the journal log in export format for feedback reports in the
  // file whose file descriptor is given.
  virtual bool GetJournalLog(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Fills the journal log in export format for feedback reports in the
  // file whose file descriptor is given.
  virtual void GetJournalLogAsync(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Example method. See /doc/hacking.md.
  virtual bool GetExample(
      std::string* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Example method. See /doc/hacking.md.
  virtual void GetExampleAsync(
      base::OnceCallback<void(const std::string& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Add a printer that can be auto-configured to CUPS.  Immediately attempt
  // to connect.  Returns true if setup was successful.
  virtual bool CupsAddAutoConfiguredPrinter(
      const std::string& in_name,
      const std::string& in_uri,
      int32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Add a printer that can be auto-configured to CUPS.  Immediately attempt
  // to connect.  Returns true if setup was successful.
  virtual void CupsAddAutoConfiguredPrinterAsync(
      const std::string& in_name,
      const std::string& in_uri,
      base::OnceCallback<void(int32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Add a printer to CUPS using the passed PPD contents.  Immediately
  // attempt to connect.  Returns true if setup was successful.
  virtual bool CupsAddManuallyConfiguredPrinter(
      const std::string& in_name,
      const std::string& in_uri,
      const std::vector<uint8_t>& in_ppd_contents,
      int32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Add a printer to CUPS using the passed PPD contents.  Immediately
  // attempt to connect.  Returns true if setup was successful.
  virtual void CupsAddManuallyConfiguredPrinterAsync(
      const std::string& in_name,
      const std::string& in_uri,
      const std::vector<uint8_t>& in_ppd_contents,
      base::OnceCallback<void(int32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Remove a printer from CUPS.  Returns true if the printer was removed
  // successfully.
  virtual bool CupsRemovePrinter(
      const std::string& in_name,
      bool* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Remove a printer from CUPS.  Returns true if the printer was removed
  // successfully.
  virtual void CupsRemovePrinterAsync(
      const std::string& in_name,
      base::OnceCallback<void(bool /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns information about network interfaces as a JSON string.
  virtual bool GetInterfaces(
      std::string* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Returns information about network interfaces as a JSON string.
  virtual void GetInterfacesAsync(
      base::OnceCallback<void(const std::string& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Tests ICMP connectivity to a specified host.
  virtual bool TestICMP(
      const std::string& in_host,
      std::string* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Tests ICMP connectivity to a specified host.
  virtual void TestICMPAsync(
      const std::string& in_host,
      base::OnceCallback<void(const std::string& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Tests ICMP connectivity to a specified host (with options).
  virtual bool TestICMPWithOptions(
      const std::string& in_host,
      const std::map<std::string, std::string>& in_options,
      std::string* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Tests ICMP connectivity to a specified host (with options).
  virtual void TestICMPWithOptionsAsync(
      const std::string& in_host,
      const std::map<std::string, std::string>& in_options,
      base::OnceCallback<void(const std::string& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs BatteryFirmware utility.
  virtual bool BatteryFirmware(
      const std::string& in_option,
      std::string* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs BatteryFirmware utility.
  virtual void BatteryFirmwareAsync(
      const std::string& in_option,
      base::OnceCallback<void(const std::string& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs Smartctl utility.
  virtual bool Smartctl(
      const std::string& in_option,
      std::string* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs Smartctl utility.
  virtual void SmartctlAsync(
      const std::string& in_option,
      base::OnceCallback<void(const std::string& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs mmc utility.
  virtual bool Mmc(
      const std::string& in_option,
      std::string* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs mmc utility.
  virtual void MmcAsync(
      const std::string& in_option,
      base::OnceCallback<void(const std::string& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs ufs-related operations over various utilities.
  virtual bool Ufs(
      const std::string& in_option,
      std::string* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs ufs-related operations over various utilities.
  virtual void UfsAsync(
      const std::string& in_option,
      base::OnceCallback<void(const std::string& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs nvme utility.
  virtual bool Nvme(
      const std::string& in_option,
      std::string* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs nvme utility.
  virtual void NvmeAsync(
      const std::string& in_option,
      base::OnceCallback<void(const std::string& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs nvme utility to fetch log message.
  virtual bool NvmeLog(
      uint32_t in_page_id,
      uint32_t in_length,
      bool in_raw_binary,
      std::string* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs nvme utility to fetch log message.
  virtual void NvmeLogAsync(
      uint32_t in_page_id,
      uint32_t in_length,
      bool in_raw_binary,
      base::OnceCallback<void(const std::string& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Starts running memtester.
  virtual bool MemtesterStart(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      uint32_t in_memory,
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Starts running memtester.
  virtual void MemtesterStartAsync(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      uint32_t in_memory,
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Stops running memtester.
  virtual bool MemtesterStop(
      const std::string& in_handle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Stops running memtester.
  virtual void MemtesterStopAsync(
      const std::string& in_handle,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Starts running badblocks test.
  virtual bool BadblocksStart(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Starts running badblocks test.
  virtual void BadblocksStartAsync(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Stops running badblocks.
  virtual bool BadblocksStop(
      const std::string& in_handle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Stops running badblocks.
  virtual void BadblocksStopAsync(
      const std::string& in_handle,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Starts a packet capture with the specified options, with diagnostic
  // status directed to the "statfd" file descriptor and packet capture
  // data sent to the "outfd" file descriptor.  The returned opaque string
  // functions as a handle for this particular packet capture.  Multiple
  // captures can be running at once.  Captures can be initiated on
  // Ethernet-like devices or WiFi devices in "client mode" (showing only
  // Ethernet frames) by specifying the "device" parameter (see below).
  // By specifying a channel, the script will find or create a "monitor
  // mode" interface if one is available and produce an "over the air"
  // packet capture.  The name of the output packet capture file is sent
  // to the output file descriptor.
  virtual bool PacketCaptureStart(
      const brillo::dbus_utils::FileDescriptor& in_statfd,
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      const brillo::VariantDictionary& in_options,
      std::string* out_handle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Starts a packet capture with the specified options, with diagnostic
  // status directed to the "statfd" file descriptor and packet capture
  // data sent to the "outfd" file descriptor.  The returned opaque string
  // functions as a handle for this particular packet capture.  Multiple
  // captures can be running at once.  Captures can be initiated on
  // Ethernet-like devices or WiFi devices in "client mode" (showing only
  // Ethernet frames) by specifying the "device" parameter (see below).
  // By specifying a channel, the script will find or create a "monitor
  // mode" interface if one is available and produce an "over the air"
  // packet capture.  The name of the output packet capture file is sent
  // to the output file descriptor.
  virtual void PacketCaptureStartAsync(
      const brillo::dbus_utils::FileDescriptor& in_statfd,
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      const brillo::VariantDictionary& in_options,
      base::OnceCallback<void(const std::string& /*handle*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Stops a running packet capture.
  virtual bool PacketCaptureStop(
      const std::string& in_handle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Stops a running packet capture.
  virtual void PacketCaptureStopAsync(
      const std::string& in_handle,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Triggers show-task-states(T) SysRq.
  // See https://www.kernel.org/doc/Documentation/sysrq.txt.
  virtual bool LogKernelTaskStates(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Triggers show-task-states(T) SysRq.
  // See https://www.kernel.org/doc/Documentation/sysrq.txt.
  virtual void LogKernelTaskStatesAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Triggers uploading of system crashes (the crash_sender program).
  virtual bool UploadCrashes(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Triggers uploading of system crashes (the crash_sender program).
  virtual void UploadCrashesAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Uploads a single crash report immediately. Crash report data is
  // contained in the message.
  virtual bool UploadSingleCrash(
      const std::vector<std::tuple<std::string, brillo::dbus_utils::FileDescriptor>>& in_files,
      bool in_consent_already_checked_by_crash_reporter,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Uploads a single crash report immediately. Crash report data is
  // contained in the message.
  virtual void UploadSingleCrashAsync(
      const std::vector<std::tuple<std::string, brillo::dbus_utils::FileDescriptor>>& in_files,
      bool in_consent_already_checked_by_crash_reporter,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // If set to true, any UploadSingleCrash call will invoke crash_sender
  // with --test_mode. Avaialble only on dev mode devices.
  virtual bool SetCrashSenderTestMode(
      bool in_mode,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // If set to true, any UploadSingleCrash call will invoke crash_sender
  // with --test_mode. Avaialble only on dev mode devices.
  virtual void SetCrashSenderTestModeAsync(
      bool in_mode,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Removes rootfs verification. Requires a system reboot before it will
  // take effect. Restricted to pre-owner dev mode.
  virtual bool RemoveRootfsVerification(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Removes rootfs verification. Requires a system reboot before it will
  // take effect. Restricted to pre-owner dev mode.
  virtual void RemoveRootfsVerificationAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Enables OS booting from a USB image. Restricted to pre-owner dev mode.
  virtual bool EnableBootFromUsb(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Enables OS booting from a USB image. Restricted to pre-owner dev mode.
  virtual void EnableBootFromUsbAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets up sshd to provide an SSH server immediately and on future reboots.
  // Also installs the test SSH keys to allow access by cros tools. Requires
  // that rootfs verification has been removed. Restricted to pre-owner dev
  // mode.
  virtual bool ConfigureSshServer(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets up sshd to provide an SSH server immediately and on future reboots.
  // Also installs the test SSH keys to allow access by cros tools. Requires
  // that rootfs verification has been removed. Restricted to pre-owner dev
  // mode.
  virtual void ConfigureSshServerAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets both the system and dev mode password for the indicated account.
  // Restricted to pre-owner dev mode.
  virtual bool SetUserPassword(
      const std::string& in_username,
      const std::string& in_password,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets both the system and dev mode password for the indicated account.
  // Restricted to pre-owner dev mode.
  virtual void SetUserPasswordAsync(
      const std::string& in_username,
      const std::string& in_password,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets up Chrome for remote debugging. It will take effect after a reboot
  // and using port 9222.
  // Requires that rootfs verification has been removed. Restricted to
  // pre-owner dev mode.
  virtual bool EnableChromeRemoteDebugging(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets up Chrome for remote debugging. It will take effect after a reboot
  // and using port 9222.
  // Requires that rootfs verification has been removed. Restricted to
  // pre-owner dev mode.
  virtual void EnableChromeRemoteDebuggingAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Convenience function to enable a predefined set of tools from the Chrome
  // UI. Equivalent to calling these functions in order:
  //   1. EnableBootFromUsb()
  //   2. ConfigureSshServer()
  //   3. SetUserPassword("root", root_password)
  // Requires that rootfs verification has been removed. If any sub-function
  // fails, this function will exit with an error without attempting any
  // further configuration or rollback. Restricted to pre-owner dev mode.
  virtual bool EnableChromeDevFeatures(
      const std::string& in_root_password,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Convenience function to enable a predefined set of tools from the Chrome
  // UI. Equivalent to calling these functions in order:
  //   1. EnableBootFromUsb()
  //   2. ConfigureSshServer()
  //   3. SetUserPassword("root", root_password)
  // Requires that rootfs verification has been removed. If any sub-function
  // fails, this function will exit with an error without attempting any
  // further configuration or rollback. Restricted to pre-owner dev mode.
  virtual void EnableChromeDevFeaturesAsync(
      const std::string& in_root_password,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Queries which dev features have been enabled. Each dev feature will be
  // indicated by a bit flag in the return value. Flags are defined in the
  // DevFeatureFlag enumeration. If the dev tools are unavailable (system is
  // not in dev mode/pre-login state), the DEV_FEATURES_DISABLED flag will be
  // set and the rest of the bits will always be set to 0.
  virtual bool QueryDevFeatures(
      int32_t* out_features,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Queries which dev features have been enabled. Each dev feature will be
  // indicated by a bit flag in the return value. Flags are defined in the
  // DevFeatureFlag enumeration. If the dev tools are unavailable (system is
  // not in dev mode/pre-login state), the DEV_FEATURES_DISABLED flag will be
  // set and the rest of the bits will always be set to 0.
  virtual void QueryDevFeaturesAsync(
      base::OnceCallback<void(int32_t /*features*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Allow uploading of device coredump files.
  virtual bool EnableDevCoredumpUpload(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Allow uploading of device coredump files.
  virtual void EnableDevCoredumpUploadAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Disallow uploading of device coredump files.
  virtual bool DisableDevCoredumpUpload(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Disallow uploading of device coredump files.
  virtual void DisableDevCoredumpUploadAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Set OOM score by writing scores to procfs /proc/pid/oom_score_adj.
  // It is an operation which needs root privilege so needs to be handled
  // carefully:
  // 1. Only user chronos can request the operation.
  // 2. It can only modify processes owned by chronos or run in Android
  // container.
  virtual bool SetOomScoreAdj(
      const std::map<int32_t, int32_t>& in_scores,
      std::string* out_out,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Set OOM score by writing scores to procfs /proc/pid/oom_score_adj.
  // It is an operation which needs root privilege so needs to be handled
  // carefully:
  // 1. Only user chronos can request the operation.
  // 2. It can only modify processes owned by chronos or run in Android
  // container.
  virtual void SetOomScoreAdjAsync(
      const std::map<int32_t, int32_t>& in_scores,
      base::OnceCallback<void(const std::string& /*out*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Enable swap file usage via config files.
  virtual bool SwapEnable(
      int32_t in_size,
      bool in_change_now,
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Enable swap file usage via config files.
  virtual void SwapEnableAsync(
      int32_t in_size,
      bool in_change_now,
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Disable swap file usage via config files.
  virtual bool SwapDisable(
      bool in_change_now,
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Disable swap file usage via config files.
  virtual void SwapDisableAsync(
      bool in_change_now,
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets the ratio to use for kstaled, 0 will disable the feature.
  // The kstaled ratio is a control of how aggressively kstaled will
  // attempt to swap, higher values are more aggressive and consume
  // more CPU.
  virtual bool KstaledSetRatio(
      uint8_t in_ratio,
      bool* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets the ratio to use for kstaled, 0 will disable the feature.
  // The kstaled ratio is a control of how aggressively kstaled will
  // attempt to swap, higher values are more aggressive and consume
  // more CPU.
  virtual void KstaledSetRatioAsync(
      uint8_t in_ratio,
      base::OnceCallback<void(bool /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Turn swap usage on/off (leaves config files alone).
  virtual bool SwapStartStop(
      bool in_on,
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Turn swap usage on/off (leaves config files alone).
  virtual void SwapStartStopAsync(
      bool in_on,
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Show current swap status.
  virtual bool SwapStatus(
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Show current swap status.
  virtual void SwapStatusAsync(
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Persistently change the value of various parameters.
  virtual bool SwapSetParameter(
      const std::string& in_command_name,
      int32_t in_value,
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Persistently change the value of various parameters.
  virtual void SwapSetParameterAsync(
      const std::string& in_command_name,
      int32_t in_value,
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Enable writeback of zram swapped pages.
  virtual bool SwapZramEnableWriteback(
      uint32_t in_size_mb,
      std::string* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Enable writeback of zram swapped pages.
  virtual void SwapZramEnableWritebackAsync(
      uint32_t in_size_mb,
      base::OnceCallback<void(const std::string& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Mark pages as idle which have been in zram for |age| in seconds.
  virtual bool SwapZramMarkIdle(
      uint32_t in_age,
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Mark pages as idle which have been in zram for |age| in seconds.
  virtual void SwapZramMarkIdleAsync(
      uint32_t in_age,
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Set the zram writeback page limit to |limit| pages.
  virtual bool SwapZramSetWritebackLimit(
      uint32_t in_limit,
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Set the zram writeback page limit to |limit| pages.
  virtual void SwapZramSetWritebackLimitAsync(
      uint32_t in_limit,
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Initiate a zram writeback using the provided |mode|.
  virtual bool InitiateSwapZramWriteback(
      uint32_t in_mode,
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Initiate a zram writeback using the provided |mode|.
  virtual void InitiateSwapZramWritebackAsync(
      uint32_t in_mode,
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Modify u2fd daemon debugging/override flags.
  virtual bool SetU2fFlags(
      const std::string& in_flags,
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Modify u2fd daemon debugging/override flags.
  virtual void SetU2fFlagsAsync(
      const std::string& in_flags,
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Get u2fd daemon debugging/override flags.
  virtual bool GetU2fFlags(
      std::string* out_flags,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Get u2fd daemon debugging/override flags.
  virtual void GetU2fFlagsAsync(
      base::OnceCallback<void(const std::string& /*flags*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Notify debugd that a container is starting up.
  virtual bool ContainerStarted(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Notify debugd that a container is starting up.
  virtual void ContainerStartedAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Notify debugd that a container has stopped.
  virtual bool ContainerStopped(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Notify debugd that a container has stopped.
  virtual void ContainerStoppedAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Enable/disable WiFi power save mode.
  virtual bool SetWifiPowerSave(
      bool in_enable,
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Enable/disable WiFi power save mode.
  virtual void SetWifiPowerSaveAsync(
      bool in_enable,
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Show current WiFi power save mode.
  virtual bool GetWifiPowerSave(
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Show current WiFi power save mode.
  virtual void GetWifiPowerSaveAsync(
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Run a shill debug script in a sandboxed environment.
  virtual bool RunShillScriptStart(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      const std::string& in_script,
      const std::vector<std::string>& in_script_args,
      std::string* out_handle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Run a shill debug script in a sandboxed environment.
  virtual void RunShillScriptStartAsync(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      const std::string& in_script,
      const std::vector<std::string>& in_script_args,
      base::OnceCallback<void(const std::string& /*handle*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Stops a running script.
  virtual bool RunShillScriptStop(
      const std::string& in_handle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Stops a running script.
  virtual void RunShillScriptStopAsync(
      const std::string& in_handle,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Starts the VM Plugin Dispatcher service.  Returns true if the service was
  // successfully started and is available over dbus, false otherwise.
  virtual bool StartVmPluginDispatcher(
      const std::string& in_user_id_hash,
      const std::string& in_lang,
      bool* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Starts the VM Plugin Dispatcher service.  Returns true if the service was
  // successfully started and is available over dbus, false otherwise.
  virtual void StartVmPluginDispatcherAsync(
      const std::string& in_user_id_hash,
      const std::string& in_lang,
      base::OnceCallback<void(bool /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Stops the VM Plugin dispatcher service.
  virtual bool StopVmPluginDispatcher(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Stops the VM Plugin dispatcher service.
  virtual void StopVmPluginDispatcherAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets should_send_rlz_ping in RW_VPD to 0. Upon success, proceeds to
  // remove rlz_embargo_end_date in RW_VPD.
  virtual bool SetRlzPingSent(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Sets should_send_rlz_ping in RW_VPD to 0. Upon success, proceeds to
  // remove rlz_embargo_end_date in RW_VPD.
  virtual void SetRlzPingSentAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Start updating the GSC FW of the USB-connected device (only if the
  // device's FW is not up-to-date) and verifying AP and EC RO FW integrity
  // of the device.
  virtual bool UpdateAndVerifyFWOnUsbStart(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      const std::string& in_image_file,
      const std::string& in_ro_db_dir,
      std::string* out_handle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Start updating the GSC FW of the USB-connected device (only if the
  // device's FW is not up-to-date) and verifying AP and EC RO FW integrity
  // of the device.
  virtual void UpdateAndVerifyFWOnUsbStartAsync(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      const std::string& in_image_file,
      const std::string& in_ro_db_dir,
      base::OnceCallback<void(const std::string& /*handle*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Stops a running VerifyRo.
  virtual bool UpdateAndVerifyFWOnUsbStop(
      const std::string& in_handle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Stops a running VerifyRo.
  virtual void UpdateAndVerifyFWOnUsbStopAsync(
      const std::string& in_handle,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Set the scheduler configuration policy.
  virtual bool SetSchedulerConfiguration(
      const std::string& in_policy,
      bool* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Set the scheduler configuration policy.
  virtual void SetSchedulerConfigurationAsync(
      const std::string& in_policy,
      base::OnceCallback<void(bool /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Evaluates a probe statement by the runtime_probe helper with pre-defined
  // sandbox options in rootfs.
  virtual bool EvaluateProbeFunction(
      const std::string& in_probe_statement,
      int32_t in_log_level,
      base::ScopedFD* out_result_fd,
      base::ScopedFD* out_error_fd,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Evaluates a probe statement by the runtime_probe helper with pre-defined
  // sandbox options in rootfs.
  virtual void EvaluateProbeFunctionAsync(
      const std::string& in_probe_statement,
      int32_t in_log_level,
      base::OnceCallback<void(const base::ScopedFD& /*result_fd*/, const base::ScopedFD& /*error_fd*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Set the scheduler configuration policy.
  virtual bool SetSchedulerConfigurationV2(
      const std::string& in_policy,
      bool in_lock_policy,
      bool* out_result,
      uint32_t* out_num_cores_disabled,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Set the scheduler configuration policy.
  virtual void SetSchedulerConfigurationV2Async(
      const std::string& in_policy,
      bool in_lock_policy,
      base::OnceCallback<void(bool /*result*/, uint32_t /*num_cores_disabled*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Trigger wifi firmware dump.
  virtual bool WifiFWDump(
      std::string* out_output,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Trigger wifi firmware dump.
  virtual void WifiFWDumpAsync(
      base::OnceCallback<void(const std::string& /*output*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs the ectool i2cread command with pre-defined
  // sandbox options in rootfs and retrieves the
  // requested smart battery metric used by cros_healthd.
  virtual bool CollectSmartBatteryMetric(
      const std::string& in_metric_name,
      std::string* out_output,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs the ectool i2cread command with pre-defined
  // sandbox options in rootfs and retrieves the
  // requested smart battery metric used by cros_healthd.
  virtual void CollectSmartBatteryMetricAsync(
      const std::string& in_metric_name,
      base::OnceCallback<void(const std::string& /*output*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs the 'ectool inventory' command with pre-defined
  // sandbox options in rootfs and returns the output.
  virtual bool EcGetInventory(
      std::string* out_output,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs the 'ectool inventory' command with pre-defined
  // sandbox options in rootfs and returns the output.
  virtual void EcGetInventoryAsync(
      base::OnceCallback<void(const std::string& /*output*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs the command 'dmesg' with the given inputs.
  virtual bool CallDmesg(
      const brillo::VariantDictionary& in_options,
      std::string* out_output,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs the command 'dmesg' with the given inputs.
  virtual void CallDmesgAsync(
      const brillo::VariantDictionary& in_options,
      base::OnceCallback<void(const std::string& /*output*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs the 'ectool typeccontrol' command with pre-defined
  // sandbox options in rootfs to enter a USB Type-C mode on the
  // specified port.
  virtual bool EcTypeCEnterMode(
      uint32_t in_port_num,
      uint32_t in_mode,
      std::string* out_output,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs the 'ectool typeccontrol' command with pre-defined
  // sandbox options in rootfs to enter a USB Type-C mode on the
  // specified port.
  virtual void EcTypeCEnterModeAsync(
      uint32_t in_port_num,
      uint32_t in_mode,
      base::OnceCallback<void(const std::string& /*output*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs the 'ectool typeccontrol' command with pre-defined
  // sandbox options in rootfs to exit a USB Type-C mode on the
  // specified port.
  virtual bool EcTypeCExitMode(
      uint32_t in_port_num,
      std::string* out_output,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Runs the 'ectool typeccontrol' command with pre-defined
  // sandbox options in rootfs to exit a USB Type-C mode on the
  // specified port.
  virtual void EcTypeCExitModeAsync(
      uint32_t in_port_num,
      base::OnceCallback<void(const std::string& /*output*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Execute a sequence of commands to enable a kernel feature.
  virtual bool KernelFeatureEnable(
      const std::string& in_name,
      bool* out_result,
      std::string* out_err_str,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Execute a sequence of commands to enable a kernel feature.
  virtual void KernelFeatureEnableAsync(
      const std::string& in_name,
      base::OnceCallback<void(bool /*result*/, const std::string& /*err_str*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Get a CSV list of kernel features that are available to be enabled.
  virtual bool KernelFeatureList(
      bool* out_result,
      std::string* out_csv,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Get a CSV list of kernel features that are available to be enabled.
  virtual void KernelFeatureListAsync(
      base::OnceCallback<void(bool /*result*/, const std::string& /*csv*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Set the log categories to enable for drm_trace.
  virtual bool DRMTraceSetCategories(
      uint32_t in_categories,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Set the log categories to enable for drm_trace.
  virtual void DRMTraceSetCategoriesAsync(
      uint32_t in_categories,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Modify the size of the drm_trace buffer.
  virtual bool DRMTraceSetSize(
      uint32_t in_size,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Modify the size of the drm_trace buffer.
  virtual void DRMTraceSetSizeAsync(
      uint32_t in_size,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Append a string to the drm_trace log by writing |log| to
  // /sys/kernel/debug/trace/instances/drm/trace_marker
  // Characters that are not human-readable will be filtered out and
  // replaced with '_'.
  virtual bool DRMTraceAnnotateLog(
      const std::string& in_log,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Append a string to the drm_trace log by writing |log| to
  // /sys/kernel/debug/trace/instances/drm/trace_marker
  // Characters that are not human-readable will be filtered out and
  // replaced with '_'.
  virtual void DRMTraceAnnotateLogAsync(
      const std::string& in_log,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Copy the current contents of the specified log type to a new file
  // /var/log/display_debug/$logtype.$datetimestamp
  virtual bool DRMTraceSnapshot(
      uint32_t in_type,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // Copy the current contents of the specified log type to a new file
  // /var/log/display_debug/$logtype.$datetimestamp
  virtual void DRMTraceSnapshotAsync(
      uint32_t in_type,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterPacketCaptureStartSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterPacketCaptureStopSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::debugd.
class debugdProxy final : public debugdProxyInterface {
 public:
  debugdProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  debugdProxy(const debugdProxy&) = delete;
  debugdProxy& operator=(const debugdProxy&) = delete;

  ~debugdProxy() override {
  }

  void RegisterPacketCaptureStartSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.debugd",
        "PacketCaptureStart",
        signal_callback,
        std::move(on_connected_callback));
  }

  void RegisterPacketCaptureStopSignalHandler(
      base::RepeatingClosure signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.debugd",
        "PacketCaptureStop",
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

  // Starts pinging the specified hostname with the specified options, with
  // output directed to the given output file descriptor. The returned opaque
  // string functions as a handle for this particular ping. Multiple pings
  // can be running at once.
  bool PingStart(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      const std::string& in_destination,
      const brillo::VariantDictionary& in_options,
      std::string* out_handle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "PingStart",
        error,
        in_outfd,
        in_destination,
        in_options);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_handle);
  }

  // Starts pinging the specified hostname with the specified options, with
  // output directed to the given output file descriptor. The returned opaque
  // string functions as a handle for this particular ping. Multiple pings
  // can be running at once.
  void PingStartAsync(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      const std::string& in_destination,
      const brillo::VariantDictionary& in_options,
      base::OnceCallback<void(const std::string& /*handle*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "PingStart",
        std::move(success_callback),
        std::move(error_callback),
        in_outfd,
        in_destination,
        in_options);
  }

  // Stops a running ping.
  bool PingStop(
      const std::string& in_handle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "PingStop",
        error,
        in_handle);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Stops a running ping.
  void PingStopAsync(
      const std::string& in_handle,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "PingStop",
        std::move(success_callback),
        std::move(error_callback),
        in_handle);
  }

  // Start system/kernel tracing.  If tracing is already enabled it is
  // stopped first and any collected events are discarded.  The kernel
  // must have been configured to support tracing.
  bool SystraceStart(
      const std::string& in_categories,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SystraceStart",
        error,
        in_categories);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Start system/kernel tracing.  If tracing is already enabled it is
  // stopped first and any collected events are discarded.  The kernel
  // must have been configured to support tracing.
  void SystraceStartAsync(
      const std::string& in_categories,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SystraceStart",
        std::move(success_callback),
        std::move(error_callback),
        in_categories);
  }

  // Stop system/kernel tracing and write the collected event data.
  bool SystraceStop(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SystraceStop",
        error,
        in_outfd);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Stop system/kernel tracing and write the collected event data.
  void SystraceStopAsync(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SystraceStop",
        std::move(success_callback),
        std::move(error_callback),
        in_outfd);
  }

  // Return current status for system/kernel tracing including whether it
  // is enabled, the tracing clock, and the set of events enabled.
  bool SystraceStatus(
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SystraceStatus",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_status);
  }

  // Return current status for system/kernel tracing including whether it
  // is enabled, the tracing clock, and the set of events enabled.
  void SystraceStatusAsync(
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SystraceStatus",
        std::move(success_callback),
        std::move(error_callback));
  }

  bool TracePathStart(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      const std::string& in_destination,
      const brillo::VariantDictionary& in_options,
      std::string* out_handle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "TracePathStart",
        error,
        in_outfd,
        in_destination,
        in_options);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_handle);
  }

  void TracePathStartAsync(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      const std::string& in_destination,
      const brillo::VariantDictionary& in_options,
      base::OnceCallback<void(const std::string& /*handle*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "TracePathStart",
        std::move(success_callback),
        std::move(error_callback),
        in_outfd,
        in_destination,
        in_options);
  }

  // Stops a running tracepath.
  bool TracePathStop(
      const std::string& in_handle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "TracePathStop",
        error,
        in_handle);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Stops a running tracepath.
  void TracePathStopAsync(
      const std::string& in_handle,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "TracePathStop",
        std::move(success_callback),
        std::move(error_callback),
        in_handle);
  }

  // Returns the IP addresses.
  bool GetIpAddresses(
      const brillo::VariantDictionary& in_options,
      std::vector<std::string>* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetIpAddresses",
        error,
        in_options);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  // Returns the IP addresses.
  void GetIpAddressesAsync(
      const brillo::VariantDictionary& in_options,
      base::OnceCallback<void(const std::vector<std::string>& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetIpAddresses",
        std::move(success_callback),
        std::move(error_callback),
        in_options);
  }

  // Returns the routing table.
  bool GetRoutes(
      const brillo::VariantDictionary& in_options,
      std::vector<std::string>* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetRoutes",
        error,
        in_options);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  // Returns the routing table.
  void GetRoutesAsync(
      const brillo::VariantDictionary& in_options,
      base::OnceCallback<void(const std::vector<std::string>& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetRoutes",
        std::move(success_callback),
        std::move(error_callback),
        in_options);
  }

  // Returns network information as a JSON string. See the design document
  // for a rationale.
  bool GetNetworkStatus(
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetNetworkStatus",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_status);
  }

  // Returns network information as a JSON string. See the design document
  // for a rationale.
  void GetNetworkStatusAsync(
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetNetworkStatus",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Runs system-wide perf profiling. The profile parameters are selected by
  // perf_args.
  bool GetPerfOutput(
      uint32_t in_duration_sec,
      const std::vector<std::string>& in_perf_args,
      int32_t* out_status,
      std::vector<uint8_t>* out_perf_data,
      std::vector<uint8_t>* out_perf_stat,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetPerfOutput",
        error,
        in_duration_sec,
        in_perf_args);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_status, out_perf_data, out_perf_stat);
  }

  // Runs system-wide perf profiling. The profile parameters are selected by
  // perf_args.
  void GetPerfOutputAsync(
      uint32_t in_duration_sec,
      const std::vector<std::string>& in_perf_args,
      base::OnceCallback<void(int32_t /*status*/, const std::vector<uint8_t>& /*perf_data*/, const std::vector<uint8_t>& /*perf_stat*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetPerfOutput",
        std::move(success_callback),
        std::move(error_callback),
        in_duration_sec,
        in_perf_args);
  }

  // Runs system-wide perf profiling. The profile parameters are selected by
  // perf_args.
  // This method runs quipper asynchronously so that debugd isn't blocked for
  // duration_sec. The DBus client reads the perf output using the file
  // descriptor. Only one profiler session is allowed to run using this
  // method. Calling this method while the profiler is running yields a DBus
  // error. The profiler session can optionally be stopped using method
  // StopPerf before duration_sec elapses.
  bool GetPerfOutputFd(
      uint32_t in_duration_sec,
      const std::vector<std::string>& in_perf_args,
      const brillo::dbus_utils::FileDescriptor& in_stdout,
      uint64_t* out_session_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetPerfOutputFd",
        error,
        in_duration_sec,
        in_perf_args,
        in_stdout);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_session_id);
  }

  // Runs system-wide perf profiling. The profile parameters are selected by
  // perf_args.
  // This method runs quipper asynchronously so that debugd isn't blocked for
  // duration_sec. The DBus client reads the perf output using the file
  // descriptor. Only one profiler session is allowed to run using this
  // method. Calling this method while the profiler is running yields a DBus
  // error. The profiler session can optionally be stopped using method
  // StopPerf before duration_sec elapses.
  void GetPerfOutputFdAsync(
      uint32_t in_duration_sec,
      const std::vector<std::string>& in_perf_args,
      const brillo::dbus_utils::FileDescriptor& in_stdout,
      base::OnceCallback<void(uint64_t /*session_id*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetPerfOutputFd",
        std::move(success_callback),
        std::move(error_callback),
        in_duration_sec,
        in_perf_args,
        in_stdout);
  }

  // Stop the existing profiler session and gather perf output right away. If
  // the collection started by GetPerfOutputFd has finished, calling this
  // method will silently succeed.
  bool StopPerf(
      uint64_t in_session_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "StopPerf",
        error,
        in_session_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Stop the existing profiler session and gather perf output right away. If
  // the collection started by GetPerfOutputFd has finished, calling this
  // method will silently succeed.
  void StopPerfAsync(
      uint64_t in_session_id,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "StopPerf",
        std::move(success_callback),
        std::move(error_callback),
        in_session_id);
  }

  // Runs system-wide perf profiling through quipper. The profile parameters
  // are selected by quipper_args.
  // This method runs quipper asynchronously so that debugd isn't blocked for
  // however long perf is recording. The DBus client reads the perf output
  // using the file descriptor. Only one profiler session is allowed to run
  // using this method. Calling this method while the profiler is running
  // yields a DBus error. The profiler session can optionally be stopped
  // early using method StopPerf.
  bool GetPerfOutputV2(
      const std::vector<std::string>& in_quipper_args,
      bool in_disable_cpu_idle,
      const brillo::dbus_utils::FileDescriptor& in_stdout,
      uint64_t* out_session_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetPerfOutputV2",
        error,
        in_quipper_args,
        in_disable_cpu_idle,
        in_stdout);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_session_id);
  }

  // Runs system-wide perf profiling through quipper. The profile parameters
  // are selected by quipper_args.
  // This method runs quipper asynchronously so that debugd isn't blocked for
  // however long perf is recording. The DBus client reads the perf output
  // using the file descriptor. Only one profiler session is allowed to run
  // using this method. Calling this method while the profiler is running
  // yields a DBus error. The profiler session can optionally be stopped
  // early using method StopPerf.
  void GetPerfOutputV2Async(
      const std::vector<std::string>& in_quipper_args,
      bool in_disable_cpu_idle,
      const brillo::dbus_utils::FileDescriptor& in_stdout,
      base::OnceCallback<void(uint64_t /*session_id*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetPerfOutputV2",
        std::move(success_callback),
        std::move(error_callback),
        in_quipper_args,
        in_disable_cpu_idle,
        in_stdout);
  }

  // Packages up system logs into a .tar(.gz) and returns it over the
  // supplied file descriptor.
  bool DumpDebugLogs(
      bool in_is_compressed,
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "DumpDebugLogs",
        error,
        in_is_compressed,
        in_outfd);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Packages up system logs into a .tar(.gz) and returns it over the
  // supplied file descriptor.
  void DumpDebugLogsAsync(
      bool in_is_compressed,
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "DumpDebugLogs",
        std::move(success_callback),
        std::move(error_callback),
        in_is_compressed,
        in_outfd);
  }

  // Enables or disables debug mode for a specified subsystem.
  bool SetDebugMode(
      const std::string& in_subsystem,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SetDebugMode",
        error,
        in_subsystem);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Enables or disables debug mode for a specified subsystem.
  void SetDebugModeAsync(
      const std::string& in_subsystem,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SetDebugMode",
        std::move(success_callback),
        std::move(error_callback),
        in_subsystem);
  }

  // Fetches the contents of a single system log, identified by name. See
  // /src/log_tool.cc for a list of valid names.
  bool GetLog(
      const std::string& in_log,
      std::string* out_contents,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetLog",
        error,
        in_log);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_contents);
  }

  // Fetches the contents of a single system log, identified by name. See
  // /src/log_tool.cc for a list of valid names.
  void GetLogAsync(
      const std::string& in_log,
      base::OnceCallback<void(const std::string& /*contents*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetLog",
        std::move(success_callback),
        std::move(error_callback),
        in_log);
  }

  // Returns all the system logs.
  bool GetAllLogs(
      std::map<std::string, std::string>* out_logs,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetAllLogs",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_logs);
  }

  // Returns all the system logs.
  void GetAllLogsAsync(
      base::OnceCallback<void(const std::map<std::string, std::string>& /*logs*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetAllLogs",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Fills the system logs for feedback reports in the file whose file
  // descriptor is given. This is used for logs that are so big that they
  // exceed the limits of D-Bus returning them.
  bool GetBigFeedbackLogs(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      const std::string& in_username,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetBigFeedbackLogs",
        error,
        in_outfd,
        in_username);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Fills the system logs for feedback reports in the file whose file
  // descriptor is given. This is used for logs that are so big that they
  // exceed the limits of D-Bus returning them.
  void GetBigFeedbackLogsAsync(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      const std::string& in_username,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetBigFeedbackLogs",
        std::move(success_callback),
        std::move(error_callback),
        in_outfd,
        in_username);
  }

  // Retrieves the ARC bug report and saves it in debugd daemon store.
  // If a backup already exists, it is over-written.
  // If backup operation fails, an error is logged.
  bool BackupArcBugReport(
      const std::string& in_username,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "BackupArcBugReport",
        error,
        in_username);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Retrieves the ARC bug report and saves it in debugd daemon store.
  // If a backup already exists, it is over-written.
  // If backup operation fails, an error is logged.
  void BackupArcBugReportAsync(
      const std::string& in_username,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "BackupArcBugReport",
        std::move(success_callback),
        std::move(error_callback),
        in_username);
  }

  // Deletes the backed up ARC bug report saved in daemon store.
  // If delete operation fails, an error is logged.
  bool DeleteArcBugReportBackup(
      const std::string& in_username,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "DeleteArcBugReportBackup",
        error,
        in_username);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Deletes the backed up ARC bug report saved in daemon store.
  // If delete operation fails, an error is logged.
  void DeleteArcBugReportBackupAsync(
      const std::string& in_username,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "DeleteArcBugReportBackup",
        std::move(success_callback),
        std::move(error_callback),
        in_username);
  }

  // Fills the journal log in export format for feedback reports in the
  // file whose file descriptor is given.
  bool GetJournalLog(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetJournalLog",
        error,
        in_outfd);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Fills the journal log in export format for feedback reports in the
  // file whose file descriptor is given.
  void GetJournalLogAsync(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetJournalLog",
        std::move(success_callback),
        std::move(error_callback),
        in_outfd);
  }

  // Example method. See /doc/hacking.md.
  bool GetExample(
      std::string* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetExample",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  // Example method. See /doc/hacking.md.
  void GetExampleAsync(
      base::OnceCallback<void(const std::string& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetExample",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Add a printer that can be auto-configured to CUPS.  Immediately attempt
  // to connect.  Returns true if setup was successful.
  bool CupsAddAutoConfiguredPrinter(
      const std::string& in_name,
      const std::string& in_uri,
      int32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "CupsAddAutoConfiguredPrinter",
        error,
        in_name,
        in_uri);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  // Add a printer that can be auto-configured to CUPS.  Immediately attempt
  // to connect.  Returns true if setup was successful.
  void CupsAddAutoConfiguredPrinterAsync(
      const std::string& in_name,
      const std::string& in_uri,
      base::OnceCallback<void(int32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "CupsAddAutoConfiguredPrinter",
        std::move(success_callback),
        std::move(error_callback),
        in_name,
        in_uri);
  }

  // Add a printer to CUPS using the passed PPD contents.  Immediately
  // attempt to connect.  Returns true if setup was successful.
  bool CupsAddManuallyConfiguredPrinter(
      const std::string& in_name,
      const std::string& in_uri,
      const std::vector<uint8_t>& in_ppd_contents,
      int32_t* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "CupsAddManuallyConfiguredPrinter",
        error,
        in_name,
        in_uri,
        in_ppd_contents);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  // Add a printer to CUPS using the passed PPD contents.  Immediately
  // attempt to connect.  Returns true if setup was successful.
  void CupsAddManuallyConfiguredPrinterAsync(
      const std::string& in_name,
      const std::string& in_uri,
      const std::vector<uint8_t>& in_ppd_contents,
      base::OnceCallback<void(int32_t /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "CupsAddManuallyConfiguredPrinter",
        std::move(success_callback),
        std::move(error_callback),
        in_name,
        in_uri,
        in_ppd_contents);
  }

  // Remove a printer from CUPS.  Returns true if the printer was removed
  // successfully.
  bool CupsRemovePrinter(
      const std::string& in_name,
      bool* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "CupsRemovePrinter",
        error,
        in_name);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  // Remove a printer from CUPS.  Returns true if the printer was removed
  // successfully.
  void CupsRemovePrinterAsync(
      const std::string& in_name,
      base::OnceCallback<void(bool /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "CupsRemovePrinter",
        std::move(success_callback),
        std::move(error_callback),
        in_name);
  }

  // Returns information about network interfaces as a JSON string.
  bool GetInterfaces(
      std::string* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetInterfaces",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  // Returns information about network interfaces as a JSON string.
  void GetInterfacesAsync(
      base::OnceCallback<void(const std::string& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetInterfaces",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Tests ICMP connectivity to a specified host.
  bool TestICMP(
      const std::string& in_host,
      std::string* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "TestICMP",
        error,
        in_host);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  // Tests ICMP connectivity to a specified host.
  void TestICMPAsync(
      const std::string& in_host,
      base::OnceCallback<void(const std::string& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "TestICMP",
        std::move(success_callback),
        std::move(error_callback),
        in_host);
  }

  // Tests ICMP connectivity to a specified host (with options).
  bool TestICMPWithOptions(
      const std::string& in_host,
      const std::map<std::string, std::string>& in_options,
      std::string* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "TestICMPWithOptions",
        error,
        in_host,
        in_options);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  // Tests ICMP connectivity to a specified host (with options).
  void TestICMPWithOptionsAsync(
      const std::string& in_host,
      const std::map<std::string, std::string>& in_options,
      base::OnceCallback<void(const std::string& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "TestICMPWithOptions",
        std::move(success_callback),
        std::move(error_callback),
        in_host,
        in_options);
  }

  // Runs BatteryFirmware utility.
  bool BatteryFirmware(
      const std::string& in_option,
      std::string* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "BatteryFirmware",
        error,
        in_option);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  // Runs BatteryFirmware utility.
  void BatteryFirmwareAsync(
      const std::string& in_option,
      base::OnceCallback<void(const std::string& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "BatteryFirmware",
        std::move(success_callback),
        std::move(error_callback),
        in_option);
  }

  // Runs Smartctl utility.
  bool Smartctl(
      const std::string& in_option,
      std::string* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "Smartctl",
        error,
        in_option);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  // Runs Smartctl utility.
  void SmartctlAsync(
      const std::string& in_option,
      base::OnceCallback<void(const std::string& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "Smartctl",
        std::move(success_callback),
        std::move(error_callback),
        in_option);
  }

  // Runs mmc utility.
  bool Mmc(
      const std::string& in_option,
      std::string* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "Mmc",
        error,
        in_option);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  // Runs mmc utility.
  void MmcAsync(
      const std::string& in_option,
      base::OnceCallback<void(const std::string& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "Mmc",
        std::move(success_callback),
        std::move(error_callback),
        in_option);
  }

  // Runs ufs-related operations over various utilities.
  bool Ufs(
      const std::string& in_option,
      std::string* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "Ufs",
        error,
        in_option);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  // Runs ufs-related operations over various utilities.
  void UfsAsync(
      const std::string& in_option,
      base::OnceCallback<void(const std::string& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "Ufs",
        std::move(success_callback),
        std::move(error_callback),
        in_option);
  }

  // Runs nvme utility.
  bool Nvme(
      const std::string& in_option,
      std::string* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "Nvme",
        error,
        in_option);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  // Runs nvme utility.
  void NvmeAsync(
      const std::string& in_option,
      base::OnceCallback<void(const std::string& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "Nvme",
        std::move(success_callback),
        std::move(error_callback),
        in_option);
  }

  // Runs nvme utility to fetch log message.
  bool NvmeLog(
      uint32_t in_page_id,
      uint32_t in_length,
      bool in_raw_binary,
      std::string* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "NvmeLog",
        error,
        in_page_id,
        in_length,
        in_raw_binary);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  // Runs nvme utility to fetch log message.
  void NvmeLogAsync(
      uint32_t in_page_id,
      uint32_t in_length,
      bool in_raw_binary,
      base::OnceCallback<void(const std::string& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "NvmeLog",
        std::move(success_callback),
        std::move(error_callback),
        in_page_id,
        in_length,
        in_raw_binary);
  }

  // Starts running memtester.
  bool MemtesterStart(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      uint32_t in_memory,
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "MemtesterStart",
        error,
        in_outfd,
        in_memory);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_status);
  }

  // Starts running memtester.
  void MemtesterStartAsync(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      uint32_t in_memory,
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "MemtesterStart",
        std::move(success_callback),
        std::move(error_callback),
        in_outfd,
        in_memory);
  }

  // Stops running memtester.
  bool MemtesterStop(
      const std::string& in_handle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "MemtesterStop",
        error,
        in_handle);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Stops running memtester.
  void MemtesterStopAsync(
      const std::string& in_handle,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "MemtesterStop",
        std::move(success_callback),
        std::move(error_callback),
        in_handle);
  }

  // Starts running badblocks test.
  bool BadblocksStart(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "BadblocksStart",
        error,
        in_outfd);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_status);
  }

  // Starts running badblocks test.
  void BadblocksStartAsync(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "BadblocksStart",
        std::move(success_callback),
        std::move(error_callback),
        in_outfd);
  }

  // Stops running badblocks.
  bool BadblocksStop(
      const std::string& in_handle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "BadblocksStop",
        error,
        in_handle);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Stops running badblocks.
  void BadblocksStopAsync(
      const std::string& in_handle,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "BadblocksStop",
        std::move(success_callback),
        std::move(error_callback),
        in_handle);
  }

  // Starts a packet capture with the specified options, with diagnostic
  // status directed to the "statfd" file descriptor and packet capture
  // data sent to the "outfd" file descriptor.  The returned opaque string
  // functions as a handle for this particular packet capture.  Multiple
  // captures can be running at once.  Captures can be initiated on
  // Ethernet-like devices or WiFi devices in "client mode" (showing only
  // Ethernet frames) by specifying the "device" parameter (see below).
  // By specifying a channel, the script will find or create a "monitor
  // mode" interface if one is available and produce an "over the air"
  // packet capture.  The name of the output packet capture file is sent
  // to the output file descriptor.
  bool PacketCaptureStart(
      const brillo::dbus_utils::FileDescriptor& in_statfd,
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      const brillo::VariantDictionary& in_options,
      std::string* out_handle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "PacketCaptureStart",
        error,
        in_statfd,
        in_outfd,
        in_options);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_handle);
  }

  // Starts a packet capture with the specified options, with diagnostic
  // status directed to the "statfd" file descriptor and packet capture
  // data sent to the "outfd" file descriptor.  The returned opaque string
  // functions as a handle for this particular packet capture.  Multiple
  // captures can be running at once.  Captures can be initiated on
  // Ethernet-like devices or WiFi devices in "client mode" (showing only
  // Ethernet frames) by specifying the "device" parameter (see below).
  // By specifying a channel, the script will find or create a "monitor
  // mode" interface if one is available and produce an "over the air"
  // packet capture.  The name of the output packet capture file is sent
  // to the output file descriptor.
  void PacketCaptureStartAsync(
      const brillo::dbus_utils::FileDescriptor& in_statfd,
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      const brillo::VariantDictionary& in_options,
      base::OnceCallback<void(const std::string& /*handle*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "PacketCaptureStart",
        std::move(success_callback),
        std::move(error_callback),
        in_statfd,
        in_outfd,
        in_options);
  }

  // Stops a running packet capture.
  bool PacketCaptureStop(
      const std::string& in_handle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "PacketCaptureStop",
        error,
        in_handle);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Stops a running packet capture.
  void PacketCaptureStopAsync(
      const std::string& in_handle,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "PacketCaptureStop",
        std::move(success_callback),
        std::move(error_callback),
        in_handle);
  }

  // Triggers show-task-states(T) SysRq.
  // See https://www.kernel.org/doc/Documentation/sysrq.txt.
  bool LogKernelTaskStates(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "LogKernelTaskStates",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Triggers show-task-states(T) SysRq.
  // See https://www.kernel.org/doc/Documentation/sysrq.txt.
  void LogKernelTaskStatesAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "LogKernelTaskStates",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Triggers uploading of system crashes (the crash_sender program).
  bool UploadCrashes(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "UploadCrashes",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Triggers uploading of system crashes (the crash_sender program).
  void UploadCrashesAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "UploadCrashes",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Uploads a single crash report immediately. Crash report data is
  // contained in the message.
  bool UploadSingleCrash(
      const std::vector<std::tuple<std::string, brillo::dbus_utils::FileDescriptor>>& in_files,
      bool in_consent_already_checked_by_crash_reporter,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "UploadSingleCrash",
        error,
        in_files,
        in_consent_already_checked_by_crash_reporter);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Uploads a single crash report immediately. Crash report data is
  // contained in the message.
  void UploadSingleCrashAsync(
      const std::vector<std::tuple<std::string, brillo::dbus_utils::FileDescriptor>>& in_files,
      bool in_consent_already_checked_by_crash_reporter,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "UploadSingleCrash",
        std::move(success_callback),
        std::move(error_callback),
        in_files,
        in_consent_already_checked_by_crash_reporter);
  }

  // If set to true, any UploadSingleCrash call will invoke crash_sender
  // with --test_mode. Avaialble only on dev mode devices.
  bool SetCrashSenderTestMode(
      bool in_mode,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SetCrashSenderTestMode",
        error,
        in_mode);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // If set to true, any UploadSingleCrash call will invoke crash_sender
  // with --test_mode. Avaialble only on dev mode devices.
  void SetCrashSenderTestModeAsync(
      bool in_mode,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SetCrashSenderTestMode",
        std::move(success_callback),
        std::move(error_callback),
        in_mode);
  }

  // Removes rootfs verification. Requires a system reboot before it will
  // take effect. Restricted to pre-owner dev mode.
  bool RemoveRootfsVerification(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "RemoveRootfsVerification",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Removes rootfs verification. Requires a system reboot before it will
  // take effect. Restricted to pre-owner dev mode.
  void RemoveRootfsVerificationAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "RemoveRootfsVerification",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Enables OS booting from a USB image. Restricted to pre-owner dev mode.
  bool EnableBootFromUsb(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "EnableBootFromUsb",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Enables OS booting from a USB image. Restricted to pre-owner dev mode.
  void EnableBootFromUsbAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "EnableBootFromUsb",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Sets up sshd to provide an SSH server immediately and on future reboots.
  // Also installs the test SSH keys to allow access by cros tools. Requires
  // that rootfs verification has been removed. Restricted to pre-owner dev
  // mode.
  bool ConfigureSshServer(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "ConfigureSshServer",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Sets up sshd to provide an SSH server immediately and on future reboots.
  // Also installs the test SSH keys to allow access by cros tools. Requires
  // that rootfs verification has been removed. Restricted to pre-owner dev
  // mode.
  void ConfigureSshServerAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "ConfigureSshServer",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Sets both the system and dev mode password for the indicated account.
  // Restricted to pre-owner dev mode.
  bool SetUserPassword(
      const std::string& in_username,
      const std::string& in_password,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SetUserPassword",
        error,
        in_username,
        in_password);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Sets both the system and dev mode password for the indicated account.
  // Restricted to pre-owner dev mode.
  void SetUserPasswordAsync(
      const std::string& in_username,
      const std::string& in_password,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SetUserPassword",
        std::move(success_callback),
        std::move(error_callback),
        in_username,
        in_password);
  }

  // Sets up Chrome for remote debugging. It will take effect after a reboot
  // and using port 9222.
  // Requires that rootfs verification has been removed. Restricted to
  // pre-owner dev mode.
  bool EnableChromeRemoteDebugging(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "EnableChromeRemoteDebugging",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Sets up Chrome for remote debugging. It will take effect after a reboot
  // and using port 9222.
  // Requires that rootfs verification has been removed. Restricted to
  // pre-owner dev mode.
  void EnableChromeRemoteDebuggingAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "EnableChromeRemoteDebugging",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Convenience function to enable a predefined set of tools from the Chrome
  // UI. Equivalent to calling these functions in order:
  //   1. EnableBootFromUsb()
  //   2. ConfigureSshServer()
  //   3. SetUserPassword("root", root_password)
  // Requires that rootfs verification has been removed. If any sub-function
  // fails, this function will exit with an error without attempting any
  // further configuration or rollback. Restricted to pre-owner dev mode.
  bool EnableChromeDevFeatures(
      const std::string& in_root_password,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "EnableChromeDevFeatures",
        error,
        in_root_password);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Convenience function to enable a predefined set of tools from the Chrome
  // UI. Equivalent to calling these functions in order:
  //   1. EnableBootFromUsb()
  //   2. ConfigureSshServer()
  //   3. SetUserPassword("root", root_password)
  // Requires that rootfs verification has been removed. If any sub-function
  // fails, this function will exit with an error without attempting any
  // further configuration or rollback. Restricted to pre-owner dev mode.
  void EnableChromeDevFeaturesAsync(
      const std::string& in_root_password,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "EnableChromeDevFeatures",
        std::move(success_callback),
        std::move(error_callback),
        in_root_password);
  }

  // Queries which dev features have been enabled. Each dev feature will be
  // indicated by a bit flag in the return value. Flags are defined in the
  // DevFeatureFlag enumeration. If the dev tools are unavailable (system is
  // not in dev mode/pre-login state), the DEV_FEATURES_DISABLED flag will be
  // set and the rest of the bits will always be set to 0.
  bool QueryDevFeatures(
      int32_t* out_features,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "QueryDevFeatures",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_features);
  }

  // Queries which dev features have been enabled. Each dev feature will be
  // indicated by a bit flag in the return value. Flags are defined in the
  // DevFeatureFlag enumeration. If the dev tools are unavailable (system is
  // not in dev mode/pre-login state), the DEV_FEATURES_DISABLED flag will be
  // set and the rest of the bits will always be set to 0.
  void QueryDevFeaturesAsync(
      base::OnceCallback<void(int32_t /*features*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "QueryDevFeatures",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Allow uploading of device coredump files.
  bool EnableDevCoredumpUpload(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "EnableDevCoredumpUpload",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Allow uploading of device coredump files.
  void EnableDevCoredumpUploadAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "EnableDevCoredumpUpload",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Disallow uploading of device coredump files.
  bool DisableDevCoredumpUpload(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "DisableDevCoredumpUpload",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Disallow uploading of device coredump files.
  void DisableDevCoredumpUploadAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "DisableDevCoredumpUpload",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Set OOM score by writing scores to procfs /proc/pid/oom_score_adj.
  // It is an operation which needs root privilege so needs to be handled
  // carefully:
  // 1. Only user chronos can request the operation.
  // 2. It can only modify processes owned by chronos or run in Android
  // container.
  bool SetOomScoreAdj(
      const std::map<int32_t, int32_t>& in_scores,
      std::string* out_out,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SetOomScoreAdj",
        error,
        in_scores);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_out);
  }

  // Set OOM score by writing scores to procfs /proc/pid/oom_score_adj.
  // It is an operation which needs root privilege so needs to be handled
  // carefully:
  // 1. Only user chronos can request the operation.
  // 2. It can only modify processes owned by chronos or run in Android
  // container.
  void SetOomScoreAdjAsync(
      const std::map<int32_t, int32_t>& in_scores,
      base::OnceCallback<void(const std::string& /*out*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SetOomScoreAdj",
        std::move(success_callback),
        std::move(error_callback),
        in_scores);
  }

  // Enable swap file usage via config files.
  bool SwapEnable(
      int32_t in_size,
      bool in_change_now,
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SwapEnable",
        error,
        in_size,
        in_change_now);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_status);
  }

  // Enable swap file usage via config files.
  void SwapEnableAsync(
      int32_t in_size,
      bool in_change_now,
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SwapEnable",
        std::move(success_callback),
        std::move(error_callback),
        in_size,
        in_change_now);
  }

  // Disable swap file usage via config files.
  bool SwapDisable(
      bool in_change_now,
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SwapDisable",
        error,
        in_change_now);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_status);
  }

  // Disable swap file usage via config files.
  void SwapDisableAsync(
      bool in_change_now,
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SwapDisable",
        std::move(success_callback),
        std::move(error_callback),
        in_change_now);
  }

  // Sets the ratio to use for kstaled, 0 will disable the feature.
  // The kstaled ratio is a control of how aggressively kstaled will
  // attempt to swap, higher values are more aggressive and consume
  // more CPU.
  bool KstaledSetRatio(
      uint8_t in_ratio,
      bool* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "KstaledSetRatio",
        error,
        in_ratio);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  // Sets the ratio to use for kstaled, 0 will disable the feature.
  // The kstaled ratio is a control of how aggressively kstaled will
  // attempt to swap, higher values are more aggressive and consume
  // more CPU.
  void KstaledSetRatioAsync(
      uint8_t in_ratio,
      base::OnceCallback<void(bool /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "KstaledSetRatio",
        std::move(success_callback),
        std::move(error_callback),
        in_ratio);
  }

  // Turn swap usage on/off (leaves config files alone).
  bool SwapStartStop(
      bool in_on,
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SwapStartStop",
        error,
        in_on);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_status);
  }

  // Turn swap usage on/off (leaves config files alone).
  void SwapStartStopAsync(
      bool in_on,
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SwapStartStop",
        std::move(success_callback),
        std::move(error_callback),
        in_on);
  }

  // Show current swap status.
  bool SwapStatus(
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SwapStatus",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_status);
  }

  // Show current swap status.
  void SwapStatusAsync(
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SwapStatus",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Persistently change the value of various parameters.
  bool SwapSetParameter(
      const std::string& in_command_name,
      int32_t in_value,
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SwapSetParameter",
        error,
        in_command_name,
        in_value);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_status);
  }

  // Persistently change the value of various parameters.
  void SwapSetParameterAsync(
      const std::string& in_command_name,
      int32_t in_value,
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SwapSetParameter",
        std::move(success_callback),
        std::move(error_callback),
        in_command_name,
        in_value);
  }

  // Enable writeback of zram swapped pages.
  bool SwapZramEnableWriteback(
      uint32_t in_size_mb,
      std::string* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SwapZramEnableWriteback",
        error,
        in_size_mb);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  // Enable writeback of zram swapped pages.
  void SwapZramEnableWritebackAsync(
      uint32_t in_size_mb,
      base::OnceCallback<void(const std::string& /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SwapZramEnableWriteback",
        std::move(success_callback),
        std::move(error_callback),
        in_size_mb);
  }

  // Mark pages as idle which have been in zram for |age| in seconds.
  bool SwapZramMarkIdle(
      uint32_t in_age,
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SwapZramMarkIdle",
        error,
        in_age);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_status);
  }

  // Mark pages as idle which have been in zram for |age| in seconds.
  void SwapZramMarkIdleAsync(
      uint32_t in_age,
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SwapZramMarkIdle",
        std::move(success_callback),
        std::move(error_callback),
        in_age);
  }

  // Set the zram writeback page limit to |limit| pages.
  bool SwapZramSetWritebackLimit(
      uint32_t in_limit,
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SwapZramSetWritebackLimit",
        error,
        in_limit);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_status);
  }

  // Set the zram writeback page limit to |limit| pages.
  void SwapZramSetWritebackLimitAsync(
      uint32_t in_limit,
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SwapZramSetWritebackLimit",
        std::move(success_callback),
        std::move(error_callback),
        in_limit);
  }

  // Initiate a zram writeback using the provided |mode|.
  bool InitiateSwapZramWriteback(
      uint32_t in_mode,
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "InitiateSwapZramWriteback",
        error,
        in_mode);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_status);
  }

  // Initiate a zram writeback using the provided |mode|.
  void InitiateSwapZramWritebackAsync(
      uint32_t in_mode,
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "InitiateSwapZramWriteback",
        std::move(success_callback),
        std::move(error_callback),
        in_mode);
  }

  // Modify u2fd daemon debugging/override flags.
  bool SetU2fFlags(
      const std::string& in_flags,
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SetU2fFlags",
        error,
        in_flags);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_status);
  }

  // Modify u2fd daemon debugging/override flags.
  void SetU2fFlagsAsync(
      const std::string& in_flags,
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SetU2fFlags",
        std::move(success_callback),
        std::move(error_callback),
        in_flags);
  }

  // Get u2fd daemon debugging/override flags.
  bool GetU2fFlags(
      std::string* out_flags,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetU2fFlags",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_flags);
  }

  // Get u2fd daemon debugging/override flags.
  void GetU2fFlagsAsync(
      base::OnceCallback<void(const std::string& /*flags*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetU2fFlags",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Notify debugd that a container is starting up.
  bool ContainerStarted(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "ContainerStarted",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Notify debugd that a container is starting up.
  void ContainerStartedAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "ContainerStarted",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Notify debugd that a container has stopped.
  bool ContainerStopped(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "ContainerStopped",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Notify debugd that a container has stopped.
  void ContainerStoppedAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "ContainerStopped",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Enable/disable WiFi power save mode.
  bool SetWifiPowerSave(
      bool in_enable,
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SetWifiPowerSave",
        error,
        in_enable);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_status);
  }

  // Enable/disable WiFi power save mode.
  void SetWifiPowerSaveAsync(
      bool in_enable,
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SetWifiPowerSave",
        std::move(success_callback),
        std::move(error_callback),
        in_enable);
  }

  // Show current WiFi power save mode.
  bool GetWifiPowerSave(
      std::string* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetWifiPowerSave",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_status);
  }

  // Show current WiFi power save mode.
  void GetWifiPowerSaveAsync(
      base::OnceCallback<void(const std::string& /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "GetWifiPowerSave",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Run a shill debug script in a sandboxed environment.
  bool RunShillScriptStart(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      const std::string& in_script,
      const std::vector<std::string>& in_script_args,
      std::string* out_handle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "RunShillScriptStart",
        error,
        in_outfd,
        in_script,
        in_script_args);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_handle);
  }

  // Run a shill debug script in a sandboxed environment.
  void RunShillScriptStartAsync(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      const std::string& in_script,
      const std::vector<std::string>& in_script_args,
      base::OnceCallback<void(const std::string& /*handle*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "RunShillScriptStart",
        std::move(success_callback),
        std::move(error_callback),
        in_outfd,
        in_script,
        in_script_args);
  }

  // Stops a running script.
  bool RunShillScriptStop(
      const std::string& in_handle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "RunShillScriptStop",
        error,
        in_handle);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Stops a running script.
  void RunShillScriptStopAsync(
      const std::string& in_handle,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "RunShillScriptStop",
        std::move(success_callback),
        std::move(error_callback),
        in_handle);
  }

  // Starts the VM Plugin Dispatcher service.  Returns true if the service was
  // successfully started and is available over dbus, false otherwise.
  bool StartVmPluginDispatcher(
      const std::string& in_user_id_hash,
      const std::string& in_lang,
      bool* out_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "StartVmPluginDispatcher",
        error,
        in_user_id_hash,
        in_lang);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_status);
  }

  // Starts the VM Plugin Dispatcher service.  Returns true if the service was
  // successfully started and is available over dbus, false otherwise.
  void StartVmPluginDispatcherAsync(
      const std::string& in_user_id_hash,
      const std::string& in_lang,
      base::OnceCallback<void(bool /*status*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "StartVmPluginDispatcher",
        std::move(success_callback),
        std::move(error_callback),
        in_user_id_hash,
        in_lang);
  }

  // Stops the VM Plugin dispatcher service.
  bool StopVmPluginDispatcher(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "StopVmPluginDispatcher",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Stops the VM Plugin dispatcher service.
  void StopVmPluginDispatcherAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "StopVmPluginDispatcher",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Sets should_send_rlz_ping in RW_VPD to 0. Upon success, proceeds to
  // remove rlz_embargo_end_date in RW_VPD.
  bool SetRlzPingSent(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SetRlzPingSent",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Sets should_send_rlz_ping in RW_VPD to 0. Upon success, proceeds to
  // remove rlz_embargo_end_date in RW_VPD.
  void SetRlzPingSentAsync(
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SetRlzPingSent",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Start updating the GSC FW of the USB-connected device (only if the
  // device's FW is not up-to-date) and verifying AP and EC RO FW integrity
  // of the device.
  bool UpdateAndVerifyFWOnUsbStart(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      const std::string& in_image_file,
      const std::string& in_ro_db_dir,
      std::string* out_handle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "UpdateAndVerifyFWOnUsbStart",
        error,
        in_outfd,
        in_image_file,
        in_ro_db_dir);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_handle);
  }

  // Start updating the GSC FW of the USB-connected device (only if the
  // device's FW is not up-to-date) and verifying AP and EC RO FW integrity
  // of the device.
  void UpdateAndVerifyFWOnUsbStartAsync(
      const brillo::dbus_utils::FileDescriptor& in_outfd,
      const std::string& in_image_file,
      const std::string& in_ro_db_dir,
      base::OnceCallback<void(const std::string& /*handle*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "UpdateAndVerifyFWOnUsbStart",
        std::move(success_callback),
        std::move(error_callback),
        in_outfd,
        in_image_file,
        in_ro_db_dir);
  }

  // Stops a running VerifyRo.
  bool UpdateAndVerifyFWOnUsbStop(
      const std::string& in_handle,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "UpdateAndVerifyFWOnUsbStop",
        error,
        in_handle);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Stops a running VerifyRo.
  void UpdateAndVerifyFWOnUsbStopAsync(
      const std::string& in_handle,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "UpdateAndVerifyFWOnUsbStop",
        std::move(success_callback),
        std::move(error_callback),
        in_handle);
  }

  // Set the scheduler configuration policy.
  bool SetSchedulerConfiguration(
      const std::string& in_policy,
      bool* out_result,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SetSchedulerConfiguration",
        error,
        in_policy);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result);
  }

  // Set the scheduler configuration policy.
  void SetSchedulerConfigurationAsync(
      const std::string& in_policy,
      base::OnceCallback<void(bool /*result*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SetSchedulerConfiguration",
        std::move(success_callback),
        std::move(error_callback),
        in_policy);
  }

  // Evaluates a probe statement by the runtime_probe helper with pre-defined
  // sandbox options in rootfs.
  bool EvaluateProbeFunction(
      const std::string& in_probe_statement,
      int32_t in_log_level,
      base::ScopedFD* out_result_fd,
      base::ScopedFD* out_error_fd,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "EvaluateProbeFunction",
        error,
        in_probe_statement,
        in_log_level);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result_fd, out_error_fd);
  }

  // Evaluates a probe statement by the runtime_probe helper with pre-defined
  // sandbox options in rootfs.
  void EvaluateProbeFunctionAsync(
      const std::string& in_probe_statement,
      int32_t in_log_level,
      base::OnceCallback<void(const base::ScopedFD& /*result_fd*/, const base::ScopedFD& /*error_fd*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "EvaluateProbeFunction",
        std::move(success_callback),
        std::move(error_callback),
        in_probe_statement,
        in_log_level);
  }

  // Set the scheduler configuration policy.
  bool SetSchedulerConfigurationV2(
      const std::string& in_policy,
      bool in_lock_policy,
      bool* out_result,
      uint32_t* out_num_cores_disabled,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SetSchedulerConfigurationV2",
        error,
        in_policy,
        in_lock_policy);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result, out_num_cores_disabled);
  }

  // Set the scheduler configuration policy.
  void SetSchedulerConfigurationV2Async(
      const std::string& in_policy,
      bool in_lock_policy,
      base::OnceCallback<void(bool /*result*/, uint32_t /*num_cores_disabled*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "SetSchedulerConfigurationV2",
        std::move(success_callback),
        std::move(error_callback),
        in_policy,
        in_lock_policy);
  }

  // Trigger wifi firmware dump.
  bool WifiFWDump(
      std::string* out_output,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "WifiFWDump",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_output);
  }

  // Trigger wifi firmware dump.
  void WifiFWDumpAsync(
      base::OnceCallback<void(const std::string& /*output*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "WifiFWDump",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Runs the ectool i2cread command with pre-defined
  // sandbox options in rootfs and retrieves the
  // requested smart battery metric used by cros_healthd.
  bool CollectSmartBatteryMetric(
      const std::string& in_metric_name,
      std::string* out_output,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "CollectSmartBatteryMetric",
        error,
        in_metric_name);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_output);
  }

  // Runs the ectool i2cread command with pre-defined
  // sandbox options in rootfs and retrieves the
  // requested smart battery metric used by cros_healthd.
  void CollectSmartBatteryMetricAsync(
      const std::string& in_metric_name,
      base::OnceCallback<void(const std::string& /*output*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "CollectSmartBatteryMetric",
        std::move(success_callback),
        std::move(error_callback),
        in_metric_name);
  }

  // Runs the 'ectool inventory' command with pre-defined
  // sandbox options in rootfs and returns the output.
  bool EcGetInventory(
      std::string* out_output,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "EcGetInventory",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_output);
  }

  // Runs the 'ectool inventory' command with pre-defined
  // sandbox options in rootfs and returns the output.
  void EcGetInventoryAsync(
      base::OnceCallback<void(const std::string& /*output*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "EcGetInventory",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Runs the command 'dmesg' with the given inputs.
  bool CallDmesg(
      const brillo::VariantDictionary& in_options,
      std::string* out_output,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "CallDmesg",
        error,
        in_options);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_output);
  }

  // Runs the command 'dmesg' with the given inputs.
  void CallDmesgAsync(
      const brillo::VariantDictionary& in_options,
      base::OnceCallback<void(const std::string& /*output*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "CallDmesg",
        std::move(success_callback),
        std::move(error_callback),
        in_options);
  }

  // Runs the 'ectool typeccontrol' command with pre-defined
  // sandbox options in rootfs to enter a USB Type-C mode on the
  // specified port.
  bool EcTypeCEnterMode(
      uint32_t in_port_num,
      uint32_t in_mode,
      std::string* out_output,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "EcTypeCEnterMode",
        error,
        in_port_num,
        in_mode);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_output);
  }

  // Runs the 'ectool typeccontrol' command with pre-defined
  // sandbox options in rootfs to enter a USB Type-C mode on the
  // specified port.
  void EcTypeCEnterModeAsync(
      uint32_t in_port_num,
      uint32_t in_mode,
      base::OnceCallback<void(const std::string& /*output*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "EcTypeCEnterMode",
        std::move(success_callback),
        std::move(error_callback),
        in_port_num,
        in_mode);
  }

  // Runs the 'ectool typeccontrol' command with pre-defined
  // sandbox options in rootfs to exit a USB Type-C mode on the
  // specified port.
  bool EcTypeCExitMode(
      uint32_t in_port_num,
      std::string* out_output,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "EcTypeCExitMode",
        error,
        in_port_num);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_output);
  }

  // Runs the 'ectool typeccontrol' command with pre-defined
  // sandbox options in rootfs to exit a USB Type-C mode on the
  // specified port.
  void EcTypeCExitModeAsync(
      uint32_t in_port_num,
      base::OnceCallback<void(const std::string& /*output*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "EcTypeCExitMode",
        std::move(success_callback),
        std::move(error_callback),
        in_port_num);
  }

  // Execute a sequence of commands to enable a kernel feature.
  bool KernelFeatureEnable(
      const std::string& in_name,
      bool* out_result,
      std::string* out_err_str,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "KernelFeatureEnable",
        error,
        in_name);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result, out_err_str);
  }

  // Execute a sequence of commands to enable a kernel feature.
  void KernelFeatureEnableAsync(
      const std::string& in_name,
      base::OnceCallback<void(bool /*result*/, const std::string& /*err_str*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "KernelFeatureEnable",
        std::move(success_callback),
        std::move(error_callback),
        in_name);
  }

  // Get a CSV list of kernel features that are available to be enabled.
  bool KernelFeatureList(
      bool* out_result,
      std::string* out_csv,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "KernelFeatureList",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_result, out_csv);
  }

  // Get a CSV list of kernel features that are available to be enabled.
  void KernelFeatureListAsync(
      base::OnceCallback<void(bool /*result*/, const std::string& /*csv*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "KernelFeatureList",
        std::move(success_callback),
        std::move(error_callback));
  }

  // Set the log categories to enable for drm_trace.
  bool DRMTraceSetCategories(
      uint32_t in_categories,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "DRMTraceSetCategories",
        error,
        in_categories);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Set the log categories to enable for drm_trace.
  void DRMTraceSetCategoriesAsync(
      uint32_t in_categories,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "DRMTraceSetCategories",
        std::move(success_callback),
        std::move(error_callback),
        in_categories);
  }

  // Modify the size of the drm_trace buffer.
  bool DRMTraceSetSize(
      uint32_t in_size,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "DRMTraceSetSize",
        error,
        in_size);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Modify the size of the drm_trace buffer.
  void DRMTraceSetSizeAsync(
      uint32_t in_size,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "DRMTraceSetSize",
        std::move(success_callback),
        std::move(error_callback),
        in_size);
  }

  // Append a string to the drm_trace log by writing |log| to
  // /sys/kernel/debug/trace/instances/drm/trace_marker
  // Characters that are not human-readable will be filtered out and
  // replaced with '_'.
  bool DRMTraceAnnotateLog(
      const std::string& in_log,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "DRMTraceAnnotateLog",
        error,
        in_log);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Append a string to the drm_trace log by writing |log| to
  // /sys/kernel/debug/trace/instances/drm/trace_marker
  // Characters that are not human-readable will be filtered out and
  // replaced with '_'.
  void DRMTraceAnnotateLogAsync(
      const std::string& in_log,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "DRMTraceAnnotateLog",
        std::move(success_callback),
        std::move(error_callback),
        in_log);
  }

  // Copy the current contents of the specified log type to a new file
  // /var/log/display_debug/$logtype.$datetimestamp
  bool DRMTraceSnapshot(
      uint32_t in_type,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "DRMTraceSnapshot",
        error,
        in_type);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // Copy the current contents of the specified log type to a new file
  // /var/log/display_debug/$logtype.$datetimestamp
  void DRMTraceSnapshotAsync(
      uint32_t in_type,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.debugd",
        "DRMTraceSnapshot",
        std::move(success_callback),
        std::move(error_callback),
        in_type);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.debugd"};
  const dbus::ObjectPath object_path_{"/org/chromium/debugd"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_DEBUGD_CLIENT_OUT_DEFAULT_GEN_INCLUDE_DEBUGD_DBUS_PROXIES_H
