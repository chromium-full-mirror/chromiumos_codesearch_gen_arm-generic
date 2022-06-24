// Automatic generation of D-Bus interfaces:
//  - org.chromium.debugd
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DEBUGD_OUT_DEFAULT_GEN_INCLUDE_DEBUGD_DBUS_ADAPTORS_ORG_CHROMIUM_DEBUGD_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DEBUGD_OUT_DEFAULT_GEN_INCLUDE_DEBUGD_DBUS_ADAPTORS_ORG_CHROMIUM_DEBUGD_H
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

// Interface definition for org::chromium::debugd.
class debugdInterface {
 public:
  virtual ~debugdInterface() = default;

  // Starts pinging the specified hostname with the specified options, with
  // output directed to the given output file descriptor. The returned opaque
  // string functions as a handle for this particular ping. Multiple pings
  // can be running at once.
  virtual bool PingStart(
      brillo::ErrorPtr* error,
      const base::ScopedFD& in_outfd,
      const std::string& in_destination,
      const brillo::VariantDictionary& in_options,
      std::string* out_handle) = 0;
  // Stops a running ping.
  virtual bool PingStop(
      brillo::ErrorPtr* error,
      const std::string& in_handle) = 0;
  // Start system/kernel tracing.  If tracing is already enabled it is
  // stopped first and any collected events are discarded.  The kernel
  // must have been configured to support tracing.
  virtual void SystraceStart(
      const std::string& in_categories) = 0;
  // Stop system/kernel tracing and write the collected event data.
  virtual void SystraceStop(
      const base::ScopedFD& in_outfd) = 0;
  // Return current status for system/kernel tracing including whether it
  // is enabled, the tracing clock, and the set of events enabled.
  virtual std::string SystraceStatus() = 0;
  virtual std::string TracePathStart(
      const base::ScopedFD& in_outfd,
      const std::string& in_destination,
      const brillo::VariantDictionary& in_options) = 0;
  // Stops a running tracepath.
  virtual bool TracePathStop(
      brillo::ErrorPtr* error,
      const std::string& in_handle) = 0;
  // Returns the IP addresses.
  virtual std::vector<std::string> GetIpAddresses(
      const brillo::VariantDictionary& in_options) = 0;
  // Returns the routing table.
  virtual std::vector<std::string> GetRoutes(
      const brillo::VariantDictionary& in_options) = 0;
  // Returns network information as a JSON string. See the design document
  // for a rationale.
  virtual std::string GetNetworkStatus() = 0;
  // Runs system-wide perf profiling. The profile parameters are selected by
  // perf_args.
  virtual bool GetPerfOutput(
      brillo::ErrorPtr* error,
      uint32_t in_duration_sec,
      const std::vector<std::string>& in_perf_args,
      int32_t* out_status,
      std::vector<uint8_t>* out_perf_data,
      std::vector<uint8_t>* out_perf_stat) = 0;
  // Runs system-wide perf profiling. The profile parameters are selected by
  // perf_args.
  // This method runs quipper asynchronously so that debugd isn't blocked for
  // duration_sec. The DBus client reads the perf output using the file
  // descriptor. Only one profiler session is allowed to run using this
  // method. Calling this method while the profiler is running yields a DBus
  // error. The profiler session can optionally be stopped using method
  // StopPerf before duration_sec elapses.
  virtual bool GetPerfOutputFd(
      brillo::ErrorPtr* error,
      uint32_t in_duration_sec,
      const std::vector<std::string>& in_perf_args,
      const base::ScopedFD& in_stdout,
      uint64_t* out_session_id) = 0;
  // Stop the existing profiler session and gather perf output right away. If
  // the collection started by GetPerfOutputFd has finished, calling this
  // method will silently succeed.
  virtual bool StopPerf(
      brillo::ErrorPtr* error,
      uint64_t in_session_id) = 0;
  // Runs system-wide perf profiling through quipper. The profile parameters
  // are selected by quipper_args.
  // This method runs quipper asynchronously so that debugd isn't blocked for
  // however long perf is recording. The DBus client reads the perf output
  // using the file descriptor. Only one profiler session is allowed to run
  // using this method. Calling this method while the profiler is running
  // yields a DBus error. The profiler session can optionally be stopped
  // early using method StopPerf.
  virtual bool GetPerfOutputV2(
      brillo::ErrorPtr* error,
      const std::vector<std::string>& in_quipper_args,
      bool in_disable_cpu_idle,
      const base::ScopedFD& in_stdout,
      uint64_t* out_session_id) = 0;
  // Packages up system logs into a .tar(.gz) and returns it over the
  // supplied file descriptor.
  virtual void DumpDebugLogs(
      bool in_is_compressed,
      const base::ScopedFD& in_outfd) = 0;
  // Enables or disables debug mode for a specified subsystem.
  virtual void SetDebugMode(
      const std::string& in_subsystem) = 0;
  // Fetches the contents of a single system log, identified by name. See
  // /src/log_tool.cc for a list of valid names.
  virtual std::string GetLog(
      const std::string& in_log) = 0;
  // Returns all the system logs.
  virtual std::map<std::string, std::string> GetAllLogs() = 0;
  // Fills the system logs for feedback reports in the file whose file
  // descriptor is given. This is used for logs that are so big that they
  // exceed the limits of D-Bus returning them.
  virtual void GetBigFeedbackLogs(
      const base::ScopedFD& in_outfd,
      const std::string& in_username) = 0;
  // Retrieves the ARC bug report and saves it in debugd daemon store.
  // If a backup already exists, it is over-written.
  // If backup operation fails, an error is logged.
  virtual void BackupArcBugReport(
      const std::string& in_username) = 0;
  // Deletes the backed up ARC bug report saved in daemon store.
  // If delete operation fails, an error is logged.
  virtual void DeleteArcBugReportBackup(
      const std::string& in_username) = 0;
  // Fills the journal log in export format for feedback reports in the
  // file whose file descriptor is given.
  virtual void GetJournalLog(
      const base::ScopedFD& in_outfd) = 0;
  // Example method. See /doc/hacking.md.
  virtual std::string GetExample() = 0;
  // Add a printer that can be auto-configured to CUPS.  Immediately attempt
  // to connect.  Returns true if setup was successful.
  virtual int32_t CupsAddAutoConfiguredPrinter(
      const std::string& in_name,
      const std::string& in_uri) = 0;
  // Add a printer to CUPS using the passed PPD contents.  Immediately
  // attempt to connect.  Returns true if setup was successful.
  virtual int32_t CupsAddManuallyConfiguredPrinter(
      const std::string& in_name,
      const std::string& in_uri,
      const std::vector<uint8_t>& in_ppd_contents) = 0;
  // Remove a printer from CUPS.  Returns true if the printer was removed
  // successfully.
  virtual bool CupsRemovePrinter(
      const std::string& in_name) = 0;
  // Returns information about network interfaces as a JSON string.
  virtual std::string GetInterfaces() = 0;
  // Tests ICMP connectivity to a specified host.
  virtual std::string TestICMP(
      const std::string& in_host) = 0;
  // Tests ICMP connectivity to a specified host (with options).
  virtual std::string TestICMPWithOptions(
      const std::string& in_host,
      const std::map<std::string, std::string>& in_options) = 0;
  // Runs BatteryFirmware utility.
  virtual std::string BatteryFirmware(
      const std::string& in_option) = 0;
  // Runs Smartctl utility.
  virtual std::string Smartctl(
      const std::string& in_option) = 0;
  // Runs mmc utility.
  virtual std::string Mmc(
      const std::string& in_option) = 0;
  // Runs ufs-related operations over various utilities.
  virtual std::string Ufs(
      const std::string& in_option) = 0;
  // Runs nvme utility.
  virtual std::string Nvme(
      const std::string& in_option) = 0;
  // Runs nvme utility to fetch log message.
  virtual std::string NvmeLog(
      uint32_t in_page_id,
      uint32_t in_length,
      bool in_raw_binary) = 0;
  // Starts running memtester.
  virtual std::string MemtesterStart(
      const base::ScopedFD& in_outfd,
      uint32_t in_memory) = 0;
  // Stops running memtester.
  virtual bool MemtesterStop(
      brillo::ErrorPtr* error,
      const std::string& in_handle) = 0;
  // Starts running badblocks test.
  virtual std::string BadblocksStart(
      const base::ScopedFD& in_outfd) = 0;
  // Stops running badblocks.
  virtual bool BadblocksStop(
      brillo::ErrorPtr* error,
      const std::string& in_handle) = 0;
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
      brillo::ErrorPtr* error,
      const base::ScopedFD& in_statfd,
      const base::ScopedFD& in_outfd,
      const brillo::VariantDictionary& in_options,
      std::string* out_handle) = 0;
  // Stops a running packet capture.
  virtual bool PacketCaptureStop(
      brillo::ErrorPtr* error,
      const std::string& in_handle) = 0;
  // Triggers show-task-states(T) SysRq.
  // See https://www.kernel.org/doc/Documentation/sysrq.txt.
  virtual bool LogKernelTaskStates(
      brillo::ErrorPtr* error) = 0;
  // Triggers uploading of system crashes (the crash_sender program).
  virtual void UploadCrashes() = 0;
  // Uploads a single crash report immediately. Crash report data is
  // contained in the message.
  virtual bool UploadSingleCrash(
      brillo::ErrorPtr* error,
      const std::vector<std::tuple<std::string, base::ScopedFD>>& in_files,
      bool in_consent_already_checked_by_crash_reporter) = 0;
  // If set to true, any UploadSingleCrash call will invoke crash_sender
  // with --test_mode. Avaialble only on dev mode devices.
  virtual bool SetCrashSenderTestMode(
      brillo::ErrorPtr* error,
      bool in_mode) = 0;
  // Removes rootfs verification. Requires a system reboot before it will
  // take effect. Restricted to pre-owner dev mode.
  virtual bool RemoveRootfsVerification(
      brillo::ErrorPtr* error) = 0;
  // Enables OS booting from a USB image. Restricted to pre-owner dev mode.
  virtual bool EnableBootFromUsb(
      brillo::ErrorPtr* error) = 0;
  // Sets up sshd to provide an SSH server immediately and on future reboots.
  // Also installs the test SSH keys to allow access by cros tools. Requires
  // that rootfs verification has been removed. Restricted to pre-owner dev
  // mode.
  virtual bool ConfigureSshServer(
      brillo::ErrorPtr* error) = 0;
  // Sets both the system and dev mode password for the indicated account.
  // Restricted to pre-owner dev mode.
  virtual bool SetUserPassword(
      brillo::ErrorPtr* error,
      const std::string& in_username,
      const std::string& in_password) = 0;
  // Sets up Chrome for remote debugging. It will take effect after a reboot
  // and using port 9222.
  // Requires that rootfs verification has been removed. Restricted to
  // pre-owner dev mode.
  virtual bool EnableChromeRemoteDebugging(
      brillo::ErrorPtr* error) = 0;
  // Convenience function to enable a predefined set of tools from the Chrome
  // UI. Equivalent to calling these functions in order:
  //   1. EnableBootFromUsb()
  //   2. ConfigureSshServer()
  //   3. SetUserPassword("root", root_password)
  // Requires that rootfs verification has been removed. If any sub-function
  // fails, this function will exit with an error without attempting any
  // further configuration or rollback. Restricted to pre-owner dev mode.
  virtual bool EnableChromeDevFeatures(
      brillo::ErrorPtr* error,
      const std::string& in_root_password) = 0;
  // Queries which dev features have been enabled. Each dev feature will be
  // indicated by a bit flag in the return value. Flags are defined in the
  // DevFeatureFlag enumeration. If the dev tools are unavailable (system is
  // not in dev mode/pre-login state), the DEV_FEATURES_DISABLED flag will be
  // set and the rest of the bits will always be set to 0.
  virtual bool QueryDevFeatures(
      brillo::ErrorPtr* error,
      int32_t* out_features) = 0;
  // Allow uploading of device coredump files.
  virtual bool EnableDevCoredumpUpload(
      brillo::ErrorPtr* error) = 0;
  // Disallow uploading of device coredump files.
  virtual bool DisableDevCoredumpUpload(
      brillo::ErrorPtr* error) = 0;
  // Set OOM score by writing scores to procfs /proc/pid/oom_score_adj.
  // It is an operation which needs root privilege so needs to be handled
  // carefully:
  // 1. Only user chronos can request the operation.
  // 2. It can only modify processes owned by chronos or run in Android
  // container.
  virtual std::string SetOomScoreAdj(
      const std::map<int32_t, int32_t>& in_scores) = 0;
  // Enable swap file usage via config files.
  virtual std::string SwapEnable(
      int32_t in_size,
      bool in_change_now) = 0;
  // Disable swap file usage via config files.
  virtual std::string SwapDisable(
      bool in_change_now) = 0;
  // Sets the ratio to use for kstaled, 0 will disable the feature.
  // The kstaled ratio is a control of how aggressively kstaled will
  // attempt to swap, higher values are more aggressive and consume
  // more CPU.
  virtual bool KstaledSetRatio(
      brillo::ErrorPtr* error,
      uint8_t in_ratio,
      bool* out_result) = 0;
  // Turn swap usage on/off (leaves config files alone).
  virtual std::string SwapStartStop(
      bool in_on) = 0;
  // Show current swap status.
  virtual std::string SwapStatus() = 0;
  // Persistently change the value of various parameters.
  virtual std::string SwapSetParameter(
      const std::string& in_command_name,
      int32_t in_value) = 0;
  // Enable writeback of zram swapped pages.
  virtual std::string SwapZramEnableWriteback(
      uint32_t in_size_mb) = 0;
  // Mark pages as idle which have been in zram for |age| in seconds.
  virtual std::string SwapZramMarkIdle(
      uint32_t in_age) = 0;
  // Set the zram writeback page limit to |limit| pages.
  virtual std::string SwapZramSetWritebackLimit(
      uint32_t in_limit) = 0;
  // Initiate a zram writeback using the provided |mode|.
  virtual std::string InitiateSwapZramWriteback(
      uint32_t in_mode) = 0;
  // Modify u2fd daemon debugging/override flags.
  virtual std::string SetU2fFlags(
      const std::string& in_flags) = 0;
  // Get u2fd daemon debugging/override flags.
  virtual std::string GetU2fFlags() = 0;
  // Notify debugd that a container is starting up.
  virtual void ContainerStarted() = 0;
  // Notify debugd that a container has stopped.
  virtual void ContainerStopped() = 0;
  // Enable/disable WiFi power save mode.
  virtual std::string SetWifiPowerSave(
      bool in_enable) = 0;
  // Show current WiFi power save mode.
  virtual std::string GetWifiPowerSave() = 0;
  // Run a shill debug script in a sandboxed environment.
  virtual bool RunShillScriptStart(
      brillo::ErrorPtr* error,
      const base::ScopedFD& in_outfd,
      const std::string& in_script,
      const std::vector<std::string>& in_script_args,
      std::string* out_handle) = 0;
  // Stops a running script.
  virtual bool RunShillScriptStop(
      brillo::ErrorPtr* error,
      const std::string& in_handle) = 0;
  // Starts the VM Plugin Dispatcher service.  Returns true if the service was
  // successfully started and is available over dbus, false otherwise.
  virtual void StartVmPluginDispatcher(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<bool>> response,
      const std::string& in_user_id_hash,
      const std::string& in_lang) = 0;
  // Stops the VM Plugin dispatcher service.
  virtual void StopVmPluginDispatcher() = 0;
  // Sets should_send_rlz_ping in RW_VPD to 0. Upon success, proceeds to
  // remove rlz_embargo_end_date in RW_VPD.
  virtual bool SetRlzPingSent(
      brillo::ErrorPtr* error) = 0;
  // Start updating the GSC FW of the USB-connected device (only if the
  // device's FW is not up-to-date) and verifying AP and EC RO FW integrity
  // of the device.
  virtual bool UpdateAndVerifyFWOnUsbStart(
      brillo::ErrorPtr* error,
      const base::ScopedFD& in_outfd,
      const std::string& in_image_file,
      const std::string& in_ro_db_dir,
      std::string* out_handle) = 0;
  // Stops a running VerifyRo.
  virtual bool UpdateAndVerifyFWOnUsbStop(
      brillo::ErrorPtr* error,
      const std::string& in_handle) = 0;
  // Set the scheduler configuration policy.
  virtual bool SetSchedulerConfiguration(
      brillo::ErrorPtr* error,
      const std::string& in_policy,
      bool* out_result) = 0;
  // Evaluates a probe statement by the runtime_probe helper with pre-defined
  // sandbox options in rootfs.
  virtual bool EvaluateProbeFunction(
      brillo::ErrorPtr* error,
      const std::string& in_probe_statement,
      int32_t in_log_level,
      brillo::dbus_utils::FileDescriptor* out_result_fd,
      brillo::dbus_utils::FileDescriptor* out_error_fd) = 0;
  // Set the scheduler configuration policy.
  virtual bool SetSchedulerConfigurationV2(
      brillo::ErrorPtr* error,
      const std::string& in_policy,
      bool in_lock_policy,
      bool* out_result,
      uint32_t* out_num_cores_disabled) = 0;
  // Trigger wifi firmware dump.
  virtual std::string WifiFWDump() = 0;
  // Runs the ectool i2cread command with pre-defined
  // sandbox options in rootfs and retrieves the
  // requested smart battery metric used by cros_healthd.
  virtual bool CollectSmartBatteryMetric(
      brillo::ErrorPtr* error,
      const std::string& in_metric_name,
      std::string* out_output) = 0;
  // Runs the 'ectool inventory' command with pre-defined
  // sandbox options in rootfs and returns the output.
  virtual std::string EcGetInventory() = 0;
  // Runs the command 'dmesg' with the given inputs.
  virtual bool CallDmesg(
      brillo::ErrorPtr* error,
      const brillo::VariantDictionary& in_options,
      std::string* out_output) = 0;
  // Runs the 'ectool typeccontrol' command with pre-defined
  // sandbox options in rootfs to enter a USB Type-C mode on the
  // specified port.
  virtual bool EcTypeCEnterMode(
      brillo::ErrorPtr* error,
      uint32_t in_port_num,
      uint32_t in_mode,
      std::string* out_output) = 0;
  // Runs the 'ectool typeccontrol' command with pre-defined
  // sandbox options in rootfs to exit a USB Type-C mode on the
  // specified port.
  virtual bool EcTypeCExitMode(
      brillo::ErrorPtr* error,
      uint32_t in_port_num,
      std::string* out_output) = 0;
  // Execute a sequence of commands to enable a kernel feature.
  virtual bool KernelFeatureEnable(
      brillo::ErrorPtr* error,
      const std::string& in_name,
      bool* out_result,
      std::string* out_err_str) = 0;
  // Get a CSV list of kernel features that are available to be enabled.
  virtual bool KernelFeatureList(
      brillo::ErrorPtr* error,
      bool* out_result,
      std::string* out_csv) = 0;
  // Set the log categories to enable for drm_trace.
  virtual bool DRMTraceSetCategories(
      brillo::ErrorPtr* error,
      uint32_t in_categories) = 0;
  // Modify the size of the drm_trace buffer.
  virtual bool DRMTraceSetSize(
      brillo::ErrorPtr* error,
      uint32_t in_size) = 0;
  // Append a string to the drm_trace log by writing |log| to
  // /sys/kernel/debug/trace/instances/drm/trace_marker
  // Characters that are not human-readable will be filtered out and
  // replaced with '_'.
  virtual bool DRMTraceAnnotateLog(
      brillo::ErrorPtr* error,
      const std::string& in_log) = 0;
  // Copy the current contents of the specified log type to a new file
  // /var/log/display_debug/$logtype.$datetimestamp
  virtual bool DRMTraceSnapshot(
      brillo::ErrorPtr* error,
      uint32_t in_type) = 0;
};

// Interface adaptor for org::chromium::debugd.
class debugdAdaptor {
 public:
  debugdAdaptor(debugdInterface* interface) : interface_(interface) {}
  debugdAdaptor(const debugdAdaptor&) = delete;
  debugdAdaptor& operator=(const debugdAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.debugd");

    itf->AddSimpleMethodHandlerWithError(
        "PingStart",
        base::Unretained(interface_),
        &debugdInterface::PingStart);
    itf->AddSimpleMethodHandlerWithError(
        "PingStop",
        base::Unretained(interface_),
        &debugdInterface::PingStop);
    itf->AddSimpleMethodHandler(
        "SystraceStart",
        base::Unretained(interface_),
        &debugdInterface::SystraceStart);
    itf->AddSimpleMethodHandler(
        "SystraceStop",
        base::Unretained(interface_),
        &debugdInterface::SystraceStop);
    itf->AddSimpleMethodHandler(
        "SystraceStatus",
        base::Unretained(interface_),
        &debugdInterface::SystraceStatus);
    itf->AddSimpleMethodHandler(
        "TracePathStart",
        base::Unretained(interface_),
        &debugdInterface::TracePathStart);
    itf->AddSimpleMethodHandlerWithError(
        "TracePathStop",
        base::Unretained(interface_),
        &debugdInterface::TracePathStop);
    itf->AddSimpleMethodHandler(
        "GetIpAddresses",
        base::Unretained(interface_),
        &debugdInterface::GetIpAddresses);
    itf->AddSimpleMethodHandler(
        "GetRoutes",
        base::Unretained(interface_),
        &debugdInterface::GetRoutes);
    itf->AddSimpleMethodHandler(
        "GetNetworkStatus",
        base::Unretained(interface_),
        &debugdInterface::GetNetworkStatus);
    itf->AddSimpleMethodHandlerWithError(
        "GetPerfOutput",
        base::Unretained(interface_),
        &debugdInterface::GetPerfOutput);
    itf->AddSimpleMethodHandlerWithError(
        "GetPerfOutputFd",
        base::Unretained(interface_),
        &debugdInterface::GetPerfOutputFd);
    itf->AddSimpleMethodHandlerWithError(
        "StopPerf",
        base::Unretained(interface_),
        &debugdInterface::StopPerf);
    itf->AddSimpleMethodHandlerWithError(
        "GetPerfOutputV2",
        base::Unretained(interface_),
        &debugdInterface::GetPerfOutputV2);
    itf->AddSimpleMethodHandler(
        "DumpDebugLogs",
        base::Unretained(interface_),
        &debugdInterface::DumpDebugLogs);
    itf->AddSimpleMethodHandler(
        "SetDebugMode",
        base::Unretained(interface_),
        &debugdInterface::SetDebugMode);
    itf->AddSimpleMethodHandler(
        "GetLog",
        base::Unretained(interface_),
        &debugdInterface::GetLog);
    itf->AddSimpleMethodHandler(
        "GetAllLogs",
        base::Unretained(interface_),
        &debugdInterface::GetAllLogs);
    itf->AddSimpleMethodHandler(
        "GetBigFeedbackLogs",
        base::Unretained(interface_),
        &debugdInterface::GetBigFeedbackLogs);
    itf->AddSimpleMethodHandler(
        "BackupArcBugReport",
        base::Unretained(interface_),
        &debugdInterface::BackupArcBugReport);
    itf->AddSimpleMethodHandler(
        "DeleteArcBugReportBackup",
        base::Unretained(interface_),
        &debugdInterface::DeleteArcBugReportBackup);
    itf->AddSimpleMethodHandler(
        "GetJournalLog",
        base::Unretained(interface_),
        &debugdInterface::GetJournalLog);
    itf->AddSimpleMethodHandler(
        "GetExample",
        base::Unretained(interface_),
        &debugdInterface::GetExample);
    itf->AddSimpleMethodHandler(
        "CupsAddAutoConfiguredPrinter",
        base::Unretained(interface_),
        &debugdInterface::CupsAddAutoConfiguredPrinter);
    itf->AddSimpleMethodHandler(
        "CupsAddManuallyConfiguredPrinter",
        base::Unretained(interface_),
        &debugdInterface::CupsAddManuallyConfiguredPrinter);
    itf->AddSimpleMethodHandler(
        "CupsRemovePrinter",
        base::Unretained(interface_),
        &debugdInterface::CupsRemovePrinter);
    itf->AddSimpleMethodHandler(
        "GetInterfaces",
        base::Unretained(interface_),
        &debugdInterface::GetInterfaces);
    itf->AddSimpleMethodHandler(
        "TestICMP",
        base::Unretained(interface_),
        &debugdInterface::TestICMP);
    itf->AddSimpleMethodHandler(
        "TestICMPWithOptions",
        base::Unretained(interface_),
        &debugdInterface::TestICMPWithOptions);
    itf->AddSimpleMethodHandler(
        "BatteryFirmware",
        base::Unretained(interface_),
        &debugdInterface::BatteryFirmware);
    itf->AddSimpleMethodHandler(
        "Smartctl",
        base::Unretained(interface_),
        &debugdInterface::Smartctl);
    itf->AddSimpleMethodHandler(
        "Mmc",
        base::Unretained(interface_),
        &debugdInterface::Mmc);
    itf->AddSimpleMethodHandler(
        "Ufs",
        base::Unretained(interface_),
        &debugdInterface::Ufs);
    itf->AddSimpleMethodHandler(
        "Nvme",
        base::Unretained(interface_),
        &debugdInterface::Nvme);
    itf->AddSimpleMethodHandler(
        "NvmeLog",
        base::Unretained(interface_),
        &debugdInterface::NvmeLog);
    itf->AddSimpleMethodHandler(
        "MemtesterStart",
        base::Unretained(interface_),
        &debugdInterface::MemtesterStart);
    itf->AddSimpleMethodHandlerWithError(
        "MemtesterStop",
        base::Unretained(interface_),
        &debugdInterface::MemtesterStop);
    itf->AddSimpleMethodHandler(
        "BadblocksStart",
        base::Unretained(interface_),
        &debugdInterface::BadblocksStart);
    itf->AddSimpleMethodHandlerWithError(
        "BadblocksStop",
        base::Unretained(interface_),
        &debugdInterface::BadblocksStop);
    itf->AddSimpleMethodHandlerWithError(
        "PacketCaptureStart",
        base::Unretained(interface_),
        &debugdInterface::PacketCaptureStart);
    itf->AddSimpleMethodHandlerWithError(
        "PacketCaptureStop",
        base::Unretained(interface_),
        &debugdInterface::PacketCaptureStop);
    itf->AddSimpleMethodHandlerWithError(
        "LogKernelTaskStates",
        base::Unretained(interface_),
        &debugdInterface::LogKernelTaskStates);
    itf->AddSimpleMethodHandler(
        "UploadCrashes",
        base::Unretained(interface_),
        &debugdInterface::UploadCrashes);
    itf->AddSimpleMethodHandlerWithError(
        "UploadSingleCrash",
        base::Unretained(interface_),
        &debugdInterface::UploadSingleCrash);
    itf->AddSimpleMethodHandlerWithError(
        "SetCrashSenderTestMode",
        base::Unretained(interface_),
        &debugdInterface::SetCrashSenderTestMode);
    itf->AddSimpleMethodHandlerWithError(
        "RemoveRootfsVerification",
        base::Unretained(interface_),
        &debugdInterface::RemoveRootfsVerification);
    itf->AddSimpleMethodHandlerWithError(
        "EnableBootFromUsb",
        base::Unretained(interface_),
        &debugdInterface::EnableBootFromUsb);
    itf->AddSimpleMethodHandlerWithError(
        "ConfigureSshServer",
        base::Unretained(interface_),
        &debugdInterface::ConfigureSshServer);
    itf->AddSimpleMethodHandlerWithError(
        "SetUserPassword",
        base::Unretained(interface_),
        &debugdInterface::SetUserPassword);
    itf->AddSimpleMethodHandlerWithError(
        "EnableChromeRemoteDebugging",
        base::Unretained(interface_),
        &debugdInterface::EnableChromeRemoteDebugging);
    itf->AddSimpleMethodHandlerWithError(
        "EnableChromeDevFeatures",
        base::Unretained(interface_),
        &debugdInterface::EnableChromeDevFeatures);
    itf->AddSimpleMethodHandlerWithError(
        "QueryDevFeatures",
        base::Unretained(interface_),
        &debugdInterface::QueryDevFeatures);
    itf->AddSimpleMethodHandlerWithError(
        "EnableDevCoredumpUpload",
        base::Unretained(interface_),
        &debugdInterface::EnableDevCoredumpUpload);
    itf->AddSimpleMethodHandlerWithError(
        "DisableDevCoredumpUpload",
        base::Unretained(interface_),
        &debugdInterface::DisableDevCoredumpUpload);
    itf->AddSimpleMethodHandler(
        "SetOomScoreAdj",
        base::Unretained(interface_),
        &debugdInterface::SetOomScoreAdj);
    itf->AddSimpleMethodHandler(
        "SwapEnable",
        base::Unretained(interface_),
        &debugdInterface::SwapEnable);
    itf->AddSimpleMethodHandler(
        "SwapDisable",
        base::Unretained(interface_),
        &debugdInterface::SwapDisable);
    itf->AddSimpleMethodHandlerWithError(
        "KstaledSetRatio",
        base::Unretained(interface_),
        &debugdInterface::KstaledSetRatio);
    itf->AddSimpleMethodHandler(
        "SwapStartStop",
        base::Unretained(interface_),
        &debugdInterface::SwapStartStop);
    itf->AddSimpleMethodHandler(
        "SwapStatus",
        base::Unretained(interface_),
        &debugdInterface::SwapStatus);
    itf->AddSimpleMethodHandler(
        "SwapSetParameter",
        base::Unretained(interface_),
        &debugdInterface::SwapSetParameter);
    itf->AddSimpleMethodHandler(
        "SwapZramEnableWriteback",
        base::Unretained(interface_),
        &debugdInterface::SwapZramEnableWriteback);
    itf->AddSimpleMethodHandler(
        "SwapZramMarkIdle",
        base::Unretained(interface_),
        &debugdInterface::SwapZramMarkIdle);
    itf->AddSimpleMethodHandler(
        "SwapZramSetWritebackLimit",
        base::Unretained(interface_),
        &debugdInterface::SwapZramSetWritebackLimit);
    itf->AddSimpleMethodHandler(
        "InitiateSwapZramWriteback",
        base::Unretained(interface_),
        &debugdInterface::InitiateSwapZramWriteback);
    itf->AddSimpleMethodHandler(
        "SetU2fFlags",
        base::Unretained(interface_),
        &debugdInterface::SetU2fFlags);
    itf->AddSimpleMethodHandler(
        "GetU2fFlags",
        base::Unretained(interface_),
        &debugdInterface::GetU2fFlags);
    itf->AddSimpleMethodHandler(
        "ContainerStarted",
        base::Unretained(interface_),
        &debugdInterface::ContainerStarted);
    itf->AddSimpleMethodHandler(
        "ContainerStopped",
        base::Unretained(interface_),
        &debugdInterface::ContainerStopped);
    itf->AddSimpleMethodHandler(
        "SetWifiPowerSave",
        base::Unretained(interface_),
        &debugdInterface::SetWifiPowerSave);
    itf->AddSimpleMethodHandler(
        "GetWifiPowerSave",
        base::Unretained(interface_),
        &debugdInterface::GetWifiPowerSave);
    itf->AddSimpleMethodHandlerWithError(
        "RunShillScriptStart",
        base::Unretained(interface_),
        &debugdInterface::RunShillScriptStart);
    itf->AddSimpleMethodHandlerWithError(
        "RunShillScriptStop",
        base::Unretained(interface_),
        &debugdInterface::RunShillScriptStop);
    itf->AddMethodHandler(
        "StartVmPluginDispatcher",
        base::Unretained(interface_),
        &debugdInterface::StartVmPluginDispatcher);
    itf->AddSimpleMethodHandler(
        "StopVmPluginDispatcher",
        base::Unretained(interface_),
        &debugdInterface::StopVmPluginDispatcher);
    itf->AddSimpleMethodHandlerWithError(
        "SetRlzPingSent",
        base::Unretained(interface_),
        &debugdInterface::SetRlzPingSent);
    itf->AddSimpleMethodHandlerWithError(
        "UpdateAndVerifyFWOnUsbStart",
        base::Unretained(interface_),
        &debugdInterface::UpdateAndVerifyFWOnUsbStart);
    itf->AddSimpleMethodHandlerWithError(
        "UpdateAndVerifyFWOnUsbStop",
        base::Unretained(interface_),
        &debugdInterface::UpdateAndVerifyFWOnUsbStop);
    itf->AddSimpleMethodHandlerWithError(
        "SetSchedulerConfiguration",
        base::Unretained(interface_),
        &debugdInterface::SetSchedulerConfiguration);
    itf->AddSimpleMethodHandlerWithError(
        "EvaluateProbeFunction",
        base::Unretained(interface_),
        &debugdInterface::EvaluateProbeFunction);
    itf->AddSimpleMethodHandlerWithError(
        "SetSchedulerConfigurationV2",
        base::Unretained(interface_),
        &debugdInterface::SetSchedulerConfigurationV2);
    itf->AddSimpleMethodHandler(
        "WifiFWDump",
        base::Unretained(interface_),
        &debugdInterface::WifiFWDump);
    itf->AddSimpleMethodHandlerWithError(
        "CollectSmartBatteryMetric",
        base::Unretained(interface_),
        &debugdInterface::CollectSmartBatteryMetric);
    itf->AddSimpleMethodHandler(
        "EcGetInventory",
        base::Unretained(interface_),
        &debugdInterface::EcGetInventory);
    itf->AddSimpleMethodHandlerWithError(
        "CallDmesg",
        base::Unretained(interface_),
        &debugdInterface::CallDmesg);
    itf->AddSimpleMethodHandlerWithError(
        "EcTypeCEnterMode",
        base::Unretained(interface_),
        &debugdInterface::EcTypeCEnterMode);
    itf->AddSimpleMethodHandlerWithError(
        "EcTypeCExitMode",
        base::Unretained(interface_),
        &debugdInterface::EcTypeCExitMode);
    itf->AddSimpleMethodHandlerWithError(
        "KernelFeatureEnable",
        base::Unretained(interface_),
        &debugdInterface::KernelFeatureEnable);
    itf->AddSimpleMethodHandlerWithError(
        "KernelFeatureList",
        base::Unretained(interface_),
        &debugdInterface::KernelFeatureList);
    itf->AddSimpleMethodHandlerWithError(
        "DRMTraceSetCategories",
        base::Unretained(interface_),
        &debugdInterface::DRMTraceSetCategories);
    itf->AddSimpleMethodHandlerWithError(
        "DRMTraceSetSize",
        base::Unretained(interface_),
        &debugdInterface::DRMTraceSetSize);
    itf->AddSimpleMethodHandlerWithError(
        "DRMTraceAnnotateLog",
        base::Unretained(interface_),
        &debugdInterface::DRMTraceAnnotateLog);
    itf->AddSimpleMethodHandlerWithError(
        "DRMTraceSnapshot",
        base::Unretained(interface_),
        &debugdInterface::DRMTraceSnapshot);

    signal_PacketCaptureStart_ = itf->RegisterSignalOfType<SignalPacketCaptureStartType>("PacketCaptureStart");
    signal_PacketCaptureStop_ = itf->RegisterSignalOfType<SignalPacketCaptureStopType>("PacketCaptureStop");
  }

  // The signal is emitted when a packet capture process starts in debugd.
  // The signal is expected to be received by Chrome to send a notification
  // to the user to indicate the ongoing packet capture.
  void SendPacketCaptureStartSignal() {
    auto signal = signal_PacketCaptureStart_.lock();
    if (signal)
      signal->Send();
  }
  // The signal is emitted when the packet capture process is stopped in
  // debugd. The signal is expected to be received by Chrome to close the
  // notification about packet capture.
  void SendPacketCaptureStopSignal() {
    auto signal = signal_PacketCaptureStop_.lock();
    if (signal)
      signal->Send();
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/debugd"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.debugd\">\n"
        "    <method name=\"PingStart\">\n"
        "      <arg name=\"outfd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"destination\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"options\" type=\"a{sv}\" direction=\"in\"/>\n"
        "      <arg name=\"handle\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"PingStop\">\n"
        "      <arg name=\"handle\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"SystraceStart\">\n"
        "      <arg name=\"categories\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"SystraceStop\">\n"
        "      <arg name=\"outfd\" type=\"h\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"SystraceStatus\">\n"
        "      <arg name=\"status\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"TracePathStart\">\n"
        "      <arg name=\"outfd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"destination\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"options\" type=\"a{sv}\" direction=\"in\"/>\n"
        "      <arg name=\"handle\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"TracePathStop\">\n"
        "      <arg name=\"handle\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"GetIpAddresses\">\n"
        "      <arg name=\"options\" type=\"a{sv}\" direction=\"in\"/>\n"
        "      <arg name=\"result\" type=\"as\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetRoutes\">\n"
        "      <arg name=\"options\" type=\"a{sv}\" direction=\"in\"/>\n"
        "      <arg name=\"result\" type=\"as\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetNetworkStatus\">\n"
        "      <arg name=\"status\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetPerfOutput\">\n"
        "      <arg name=\"duration_sec\" type=\"u\" direction=\"in\"/>\n"
        "      <arg name=\"perf_args\" type=\"as\" direction=\"in\"/>\n"
        "      <arg name=\"status\" type=\"i\" direction=\"out\"/>\n"
        "      <arg name=\"perf_data\" type=\"ay\" direction=\"out\"/>\n"
        "      <arg name=\"perf_stat\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetPerfOutputFd\">\n"
        "      <arg name=\"duration_sec\" type=\"u\" direction=\"in\"/>\n"
        "      <arg name=\"perf_args\" type=\"as\" direction=\"in\"/>\n"
        "      <arg name=\"stdout\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"session_id\" type=\"t\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"StopPerf\">\n"
        "      <arg name=\"session_id\" type=\"t\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"GetPerfOutputV2\">\n"
        "      <arg name=\"quipper_args\" type=\"as\" direction=\"in\"/>\n"
        "      <arg name=\"disable_cpu_idle\" type=\"b\" direction=\"in\"/>\n"
        "      <arg name=\"stdout\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"session_id\" type=\"t\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"DumpDebugLogs\">\n"
        "      <arg name=\"is_compressed\" type=\"b\" direction=\"in\"/>\n"
        "      <arg name=\"outfd\" type=\"h\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"SetDebugMode\">\n"
        "      <arg name=\"subsystem\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"GetLog\">\n"
        "      <arg name=\"log\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"contents\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetAllLogs\">\n"
        "      <arg name=\"logs\" type=\"a{ss}\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetBigFeedbackLogs\">\n"
        "      <arg name=\"outfd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"username\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"BackupArcBugReport\">\n"
        "      <arg name=\"username\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"DeleteArcBugReportBackup\">\n"
        "      <arg name=\"username\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"GetJournalLog\">\n"
        "      <arg name=\"outfd\" type=\"h\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"GetExample\">\n"
        "      <arg name=\"result\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"CupsAddAutoConfiguredPrinter\">\n"
        "      <arg name=\"name\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"uri\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"result\" type=\"i\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"CupsAddManuallyConfiguredPrinter\">\n"
        "      <arg name=\"name\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"uri\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"ppd_contents\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"result\" type=\"i\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"CupsRemovePrinter\">\n"
        "      <arg name=\"name\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"result\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetInterfaces\">\n"
        "      <arg name=\"result\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"TestICMP\">\n"
        "      <arg name=\"host\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"result\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"TestICMPWithOptions\">\n"
        "      <arg name=\"host\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"options\" type=\"a{ss}\" direction=\"in\"/>\n"
        "      <arg name=\"result\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"BatteryFirmware\">\n"
        "      <arg name=\"option\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"result\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"Smartctl\">\n"
        "      <arg name=\"option\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"result\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"Mmc\">\n"
        "      <arg name=\"option\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"result\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"Ufs\">\n"
        "      <arg name=\"option\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"result\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"Nvme\">\n"
        "      <arg name=\"option\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"result\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"NvmeLog\">\n"
        "      <arg name=\"page_id\" type=\"u\" direction=\"in\"/>\n"
        "      <arg name=\"length\" type=\"u\" direction=\"in\"/>\n"
        "      <arg name=\"raw_binary\" type=\"b\" direction=\"in\"/>\n"
        "      <arg name=\"result\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"MemtesterStart\">\n"
        "      <arg name=\"outfd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"memory\" type=\"u\" direction=\"in\"/>\n"
        "      <arg name=\"status\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"MemtesterStop\">\n"
        "      <arg name=\"handle\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"BadblocksStart\">\n"
        "      <arg name=\"outfd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"status\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"BadblocksStop\">\n"
        "      <arg name=\"handle\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"PacketCaptureStart\">\n"
        "      <arg name=\"statfd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"outfd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"options\" type=\"a{sv}\" direction=\"in\"/>\n"
        "      <arg name=\"handle\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"PacketCaptureStop\">\n"
        "      <arg name=\"handle\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"LogKernelTaskStates\">\n"
        "    </method>\n"
        "    <method name=\"UploadCrashes\">\n"
        "    </method>\n"
        "    <method name=\"UploadSingleCrash\">\n"
        "      <arg name=\"files\" type=\"a(sh)\" direction=\"in\"/>\n"
        "      <arg name=\"consent_already_checked_by_crash_reporter\" type=\"b\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"SetCrashSenderTestMode\">\n"
        "      <arg name=\"mode\" type=\"b\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"RemoveRootfsVerification\">\n"
        "    </method>\n"
        "    <method name=\"EnableBootFromUsb\">\n"
        "    </method>\n"
        "    <method name=\"ConfigureSshServer\">\n"
        "    </method>\n"
        "    <method name=\"SetUserPassword\">\n"
        "      <arg name=\"username\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"password\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"EnableChromeRemoteDebugging\">\n"
        "    </method>\n"
        "    <method name=\"EnableChromeDevFeatures\">\n"
        "      <arg name=\"root_password\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"QueryDevFeatures\">\n"
        "      <arg name=\"features\" type=\"i\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"EnableDevCoredumpUpload\">\n"
        "    </method>\n"
        "    <method name=\"DisableDevCoredumpUpload\">\n"
        "    </method>\n"
        "    <method name=\"SetOomScoreAdj\">\n"
        "      <arg name=\"scores\" type=\"a{ii}\" direction=\"in\"/>\n"
        "      <arg name=\"out\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SwapEnable\">\n"
        "      <arg name=\"size\" type=\"i\" direction=\"in\"/>\n"
        "      <arg name=\"change_now\" type=\"b\" direction=\"in\"/>\n"
        "      <arg name=\"status\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SwapDisable\">\n"
        "      <arg name=\"change_now\" type=\"b\" direction=\"in\"/>\n"
        "      <arg name=\"status\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"KstaledSetRatio\">\n"
        "      <arg name=\"ratio\" type=\"y\" direction=\"in\"/>\n"
        "      <arg name=\"result\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SwapStartStop\">\n"
        "      <arg name=\"on\" type=\"b\" direction=\"in\"/>\n"
        "      <arg name=\"status\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SwapStatus\">\n"
        "      <arg name=\"status\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SwapSetParameter\">\n"
        "      <arg name=\"command_name\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"value\" type=\"i\" direction=\"in\"/>\n"
        "      <arg name=\"status\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SwapZramEnableWriteback\">\n"
        "      <arg name=\"size_mb\" type=\"u\" direction=\"in\"/>\n"
        "      <arg name=\"result\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SwapZramMarkIdle\">\n"
        "      <arg name=\"age\" type=\"u\" direction=\"in\"/>\n"
        "      <arg name=\"status\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SwapZramSetWritebackLimit\">\n"
        "      <arg name=\"limit\" type=\"u\" direction=\"in\"/>\n"
        "      <arg name=\"status\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"InitiateSwapZramWriteback\">\n"
        "      <arg name=\"mode\" type=\"u\" direction=\"in\"/>\n"
        "      <arg name=\"status\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SetU2fFlags\">\n"
        "      <arg name=\"flags\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"status\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetU2fFlags\">\n"
        "      <arg name=\"flags\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ContainerStarted\">\n"
        "    </method>\n"
        "    <method name=\"ContainerStopped\">\n"
        "    </method>\n"
        "    <method name=\"SetWifiPowerSave\">\n"
        "      <arg name=\"enable\" type=\"b\" direction=\"in\"/>\n"
        "      <arg name=\"status\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetWifiPowerSave\">\n"
        "      <arg name=\"status\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"RunShillScriptStart\">\n"
        "      <arg name=\"outfd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"script\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"script_args\" type=\"as\" direction=\"in\"/>\n"
        "      <arg name=\"handle\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"RunShillScriptStop\">\n"
        "      <arg name=\"handle\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"StartVmPluginDispatcher\">\n"
        "      <arg name=\"user_id_hash\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"lang\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"status\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"StopVmPluginDispatcher\">\n"
        "    </method>\n"
        "    <method name=\"SetRlzPingSent\">\n"
        "    </method>\n"
        "    <method name=\"UpdateAndVerifyFWOnUsbStart\">\n"
        "      <arg name=\"outfd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"image_file\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"ro_db_dir\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"handle\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"UpdateAndVerifyFWOnUsbStop\">\n"
        "      <arg name=\"handle\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"SetSchedulerConfiguration\">\n"
        "      <arg name=\"policy\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"result\" type=\"b\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"EvaluateProbeFunction\">\n"
        "      <arg name=\"probe_statement\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"log_level\" type=\"i\" direction=\"in\"/>\n"
        "      <arg name=\"result_fd\" type=\"h\" direction=\"out\"/>\n"
        "      <arg name=\"error_fd\" type=\"h\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SetSchedulerConfigurationV2\">\n"
        "      <arg name=\"policy\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"lock_policy\" type=\"b\" direction=\"in\"/>\n"
        "      <arg name=\"result\" type=\"b\" direction=\"out\"/>\n"
        "      <arg name=\"num_cores_disabled\" type=\"u\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"WifiFWDump\">\n"
        "      <arg name=\"output\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"CollectSmartBatteryMetric\">\n"
        "      <arg name=\"metric_name\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"output\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"EcGetInventory\">\n"
        "      <arg name=\"output\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"CallDmesg\">\n"
        "      <arg name=\"options\" type=\"a{sv}\" direction=\"in\"/>\n"
        "      <arg name=\"output\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"EcTypeCEnterMode\">\n"
        "      <arg name=\"port_num\" type=\"u\" direction=\"in\"/>\n"
        "      <arg name=\"mode\" type=\"u\" direction=\"in\"/>\n"
        "      <arg name=\"output\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"EcTypeCExitMode\">\n"
        "      <arg name=\"port_num\" type=\"u\" direction=\"in\"/>\n"
        "      <arg name=\"output\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"KernelFeatureEnable\">\n"
        "      <arg name=\"name\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"result\" type=\"b\" direction=\"out\"/>\n"
        "      <arg name=\"err_str\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"KernelFeatureList\">\n"
        "      <arg name=\"result\" type=\"b\" direction=\"out\"/>\n"
        "      <arg name=\"csv\" type=\"s\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"DRMTraceSetCategories\">\n"
        "      <arg name=\"categories\" type=\"u\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"DRMTraceSetSize\">\n"
        "      <arg name=\"size\" type=\"u\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"DRMTraceAnnotateLog\">\n"
        "      <arg name=\"log\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"DRMTraceSnapshot\">\n"
        "      <arg name=\"type\" type=\"u\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <signal name=\"PacketCaptureStart\">\n"
        "    </signal>\n"
        "    <signal name=\"PacketCaptureStop\">\n"
        "    </signal>\n"
        "  </interface>\n";
  }

 private:
  using SignalPacketCaptureStartType = brillo::dbus_utils::DBusSignal<>;
  std::weak_ptr<SignalPacketCaptureStartType> signal_PacketCaptureStart_;

  using SignalPacketCaptureStopType = brillo::dbus_utils::DBusSignal<>;
  std::weak_ptr<SignalPacketCaptureStopType> signal_PacketCaptureStop_;

  debugdInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DEBUGD_OUT_DEFAULT_GEN_INCLUDE_DEBUGD_DBUS_ADAPTORS_ORG_CHROMIUM_DEBUGD_H
