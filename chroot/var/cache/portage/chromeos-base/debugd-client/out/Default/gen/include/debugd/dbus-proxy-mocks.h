// Automatic generation of D-Bus interface mock proxies for:
//  - org.chromium.debugd
#ifndef ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_DEBUGD_CLIENT_OUT_DEFAULT_GEN_INCLUDE_DEBUGD_DBUS_PROXY_MOCKS_H
#define ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_DEBUGD_CLIENT_OUT_DEFAULT_GEN_INCLUDE_DEBUGD_DBUS_PROXY_MOCKS_H
#include <string>
#include <vector>

#include <base/callback_forward.h>
#include <base/logging.h>
#include <brillo/any.h>
#include <brillo/errors/error.h>
#include <brillo/variant_dictionary.h>
#include <gmock/gmock.h>

#include "debugd/dbus-proxies.h"

namespace org {
namespace chromium {

// Mock object for debugdProxyInterface.
class debugdProxyMock : public debugdProxyInterface {
 public:
  debugdProxyMock() = default;
  debugdProxyMock(const debugdProxyMock&) = delete;
  debugdProxyMock& operator=(const debugdProxyMock&) = delete;

  MOCK_METHOD6(PingStart,
               bool(const brillo::dbus_utils::FileDescriptor& /*in_outfd*/,
                    const std::string& /*in_destination*/,
                    const brillo::VariantDictionary& /*in_options*/,
                    std::string* /*out_handle*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(PingStartAsync,
               void(const brillo::dbus_utils::FileDescriptor& /*in_outfd*/,
                    const std::string& /*in_destination*/,
                    const brillo::VariantDictionary& /*in_options*/,
                    base::OnceCallback<void(const std::string& /*handle*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(PingStop,
               bool(const std::string& /*in_handle*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(PingStopAsync,
               void(const std::string& /*in_handle*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SystraceStart,
               bool(const std::string& /*in_categories*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SystraceStartAsync,
               void(const std::string& /*in_categories*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SystraceStop,
               bool(const brillo::dbus_utils::FileDescriptor& /*in_outfd*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SystraceStopAsync,
               void(const brillo::dbus_utils::FileDescriptor& /*in_outfd*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SystraceStatus,
               bool(std::string* /*out_status*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SystraceStatusAsync,
               void(base::OnceCallback<void(const std::string& /*status*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(TracePathStart,
               bool(const brillo::dbus_utils::FileDescriptor& /*in_outfd*/,
                    const std::string& /*in_destination*/,
                    const brillo::VariantDictionary& /*in_options*/,
                    std::string* /*out_handle*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(TracePathStartAsync,
               void(const brillo::dbus_utils::FileDescriptor& /*in_outfd*/,
                    const std::string& /*in_destination*/,
                    const brillo::VariantDictionary& /*in_options*/,
                    base::OnceCallback<void(const std::string& /*handle*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(TracePathStop,
               bool(const std::string& /*in_handle*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(TracePathStopAsync,
               void(const std::string& /*in_handle*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetIpAddresses,
               bool(const brillo::VariantDictionary& /*in_options*/,
                    std::vector<std::string>* /*out_result*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetIpAddressesAsync,
               void(const brillo::VariantDictionary& /*in_options*/,
                    base::OnceCallback<void(const std::vector<std::string>& /*result*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetRoutes,
               bool(const brillo::VariantDictionary& /*in_options*/,
                    std::vector<std::string>* /*out_result*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetRoutesAsync,
               void(const brillo::VariantDictionary& /*in_options*/,
                    base::OnceCallback<void(const std::vector<std::string>& /*result*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetNetworkStatus,
               bool(std::string* /*out_status*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetNetworkStatusAsync,
               void(base::OnceCallback<void(const std::string& /*status*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD7(GetPerfOutput,
               bool(uint32_t /*in_duration_sec*/,
                    const std::vector<std::string>& /*in_perf_args*/,
                    int32_t* /*out_status*/,
                    std::vector<uint8_t>* /*out_perf_data*/,
                    std::vector<uint8_t>* /*out_perf_stat*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(GetPerfOutputAsync,
               void(uint32_t /*in_duration_sec*/,
                    const std::vector<std::string>& /*in_perf_args*/,
                    base::OnceCallback<void(int32_t /*status*/, const std::vector<uint8_t>& /*perf_data*/, const std::vector<uint8_t>& /*perf_stat*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(GetPerfOutputFd,
               bool(uint32_t /*in_duration_sec*/,
                    const std::vector<std::string>& /*in_perf_args*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_stdout*/,
                    uint64_t* /*out_session_id*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(GetPerfOutputFdAsync,
               void(uint32_t /*in_duration_sec*/,
                    const std::vector<std::string>& /*in_perf_args*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_stdout*/,
                    base::OnceCallback<void(uint64_t /*session_id*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(StopPerf,
               bool(uint64_t /*in_session_id*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(StopPerfAsync,
               void(uint64_t /*in_session_id*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(GetPerfOutputV2,
               bool(const std::vector<std::string>& /*in_quipper_args*/,
                    bool /*in_disable_cpu_idle*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_stdout*/,
                    uint64_t* /*out_session_id*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(GetPerfOutputV2Async,
               void(const std::vector<std::string>& /*in_quipper_args*/,
                    bool /*in_disable_cpu_idle*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_stdout*/,
                    base::OnceCallback<void(uint64_t /*session_id*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(DumpDebugLogs,
               bool(bool /*in_is_compressed*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_outfd*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(DumpDebugLogsAsync,
               void(bool /*in_is_compressed*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_outfd*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetDebugMode,
               bool(const std::string& /*in_subsystem*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetDebugModeAsync,
               void(const std::string& /*in_subsystem*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetLog,
               bool(const std::string& /*in_log*/,
                    std::string* /*out_contents*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetLogAsync,
               void(const std::string& /*in_log*/,
                    base::OnceCallback<void(const std::string& /*contents*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetAllLogs,
               bool(std::map<std::string, std::string>* /*out_logs*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetAllLogsAsync,
               void(base::OnceCallback<void(const std::map<std::string, std::string>& /*logs*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetBigFeedbackLogs,
               bool(const brillo::dbus_utils::FileDescriptor& /*in_outfd*/,
                    const std::string& /*in_username*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(GetBigFeedbackLogsAsync,
               void(const brillo::dbus_utils::FileDescriptor& /*in_outfd*/,
                    const std::string& /*in_username*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(BackupArcBugReport,
               bool(const std::string& /*in_username*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(BackupArcBugReportAsync,
               void(const std::string& /*in_username*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(DeleteArcBugReportBackup,
               bool(const std::string& /*in_username*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(DeleteArcBugReportBackupAsync,
               void(const std::string& /*in_username*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetJournalLog,
               bool(const brillo::dbus_utils::FileDescriptor& /*in_outfd*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(GetJournalLogAsync,
               void(const brillo::dbus_utils::FileDescriptor& /*in_outfd*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetExample,
               bool(std::string* /*out_result*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetExampleAsync,
               void(base::OnceCallback<void(const std::string& /*result*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(CupsAddAutoConfiguredPrinter,
               bool(const std::string& /*in_name*/,
                    const std::string& /*in_uri*/,
                    int32_t* /*out_result*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(CupsAddAutoConfiguredPrinterAsync,
               void(const std::string& /*in_name*/,
                    const std::string& /*in_uri*/,
                    base::OnceCallback<void(int32_t /*result*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(CupsAddManuallyConfiguredPrinter,
               bool(const std::string& /*in_name*/,
                    const std::string& /*in_uri*/,
                    const std::vector<uint8_t>& /*in_ppd_contents*/,
                    int32_t* /*out_result*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(CupsAddManuallyConfiguredPrinterAsync,
               void(const std::string& /*in_name*/,
                    const std::string& /*in_uri*/,
                    const std::vector<uint8_t>& /*in_ppd_contents*/,
                    base::OnceCallback<void(int32_t /*result*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(CupsRemovePrinter,
               bool(const std::string& /*in_name*/,
                    bool* /*out_result*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(CupsRemovePrinterAsync,
               void(const std::string& /*in_name*/,
                    base::OnceCallback<void(bool /*result*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetInterfaces,
               bool(std::string* /*out_result*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetInterfacesAsync,
               void(base::OnceCallback<void(const std::string& /*result*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(TestICMP,
               bool(const std::string& /*in_host*/,
                    std::string* /*out_result*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(TestICMPAsync,
               void(const std::string& /*in_host*/,
                    base::OnceCallback<void(const std::string& /*result*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(TestICMPWithOptions,
               bool(const std::string& /*in_host*/,
                    const std::map<std::string, std::string>& /*in_options*/,
                    std::string* /*out_result*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(TestICMPWithOptionsAsync,
               void(const std::string& /*in_host*/,
                    const std::map<std::string, std::string>& /*in_options*/,
                    base::OnceCallback<void(const std::string& /*result*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(BatteryFirmware,
               bool(const std::string& /*in_option*/,
                    std::string* /*out_result*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(BatteryFirmwareAsync,
               void(const std::string& /*in_option*/,
                    base::OnceCallback<void(const std::string& /*result*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(Smartctl,
               bool(const std::string& /*in_option*/,
                    std::string* /*out_result*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SmartctlAsync,
               void(const std::string& /*in_option*/,
                    base::OnceCallback<void(const std::string& /*result*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(Mmc,
               bool(const std::string& /*in_option*/,
                    std::string* /*out_result*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(MmcAsync,
               void(const std::string& /*in_option*/,
                    base::OnceCallback<void(const std::string& /*result*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(Ufs,
               bool(const std::string& /*in_option*/,
                    std::string* /*out_result*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(UfsAsync,
               void(const std::string& /*in_option*/,
                    base::OnceCallback<void(const std::string& /*result*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(Nvme,
               bool(const std::string& /*in_option*/,
                    std::string* /*out_result*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(NvmeAsync,
               void(const std::string& /*in_option*/,
                    base::OnceCallback<void(const std::string& /*result*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(NvmeLog,
               bool(uint32_t /*in_page_id*/,
                    uint32_t /*in_length*/,
                    bool /*in_raw_binary*/,
                    std::string* /*out_result*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(NvmeLogAsync,
               void(uint32_t /*in_page_id*/,
                    uint32_t /*in_length*/,
                    bool /*in_raw_binary*/,
                    base::OnceCallback<void(const std::string& /*result*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(MemtesterStart,
               bool(const brillo::dbus_utils::FileDescriptor& /*in_outfd*/,
                    uint32_t /*in_memory*/,
                    std::string* /*out_status*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(MemtesterStartAsync,
               void(const brillo::dbus_utils::FileDescriptor& /*in_outfd*/,
                    uint32_t /*in_memory*/,
                    base::OnceCallback<void(const std::string& /*status*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(MemtesterStop,
               bool(const std::string& /*in_handle*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(MemtesterStopAsync,
               void(const std::string& /*in_handle*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(BadblocksStart,
               bool(const brillo::dbus_utils::FileDescriptor& /*in_outfd*/,
                    std::string* /*out_status*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(BadblocksStartAsync,
               void(const brillo::dbus_utils::FileDescriptor& /*in_outfd*/,
                    base::OnceCallback<void(const std::string& /*status*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(BadblocksStop,
               bool(const std::string& /*in_handle*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(BadblocksStopAsync,
               void(const std::string& /*in_handle*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(PacketCaptureStart,
               bool(const brillo::dbus_utils::FileDescriptor& /*in_statfd*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_outfd*/,
                    const brillo::VariantDictionary& /*in_options*/,
                    std::string* /*out_handle*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(PacketCaptureStartAsync,
               void(const brillo::dbus_utils::FileDescriptor& /*in_statfd*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_outfd*/,
                    const brillo::VariantDictionary& /*in_options*/,
                    base::OnceCallback<void(const std::string& /*handle*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(PacketCaptureStop,
               bool(const std::string& /*in_handle*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(PacketCaptureStopAsync,
               void(const std::string& /*in_handle*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(LogKernelTaskStates,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(LogKernelTaskStatesAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(UploadCrashes,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(UploadCrashesAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(UploadSingleCrash,
               bool(const std::vector<std::tuple<std::string, brillo::dbus_utils::FileDescriptor>>& /*in_files*/,
                    bool /*in_consent_already_checked_by_crash_reporter*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(UploadSingleCrashAsync,
               void(const std::vector<std::tuple<std::string, brillo::dbus_utils::FileDescriptor>>& /*in_files*/,
                    bool /*in_consent_already_checked_by_crash_reporter*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetCrashSenderTestMode,
               bool(bool /*in_mode*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetCrashSenderTestModeAsync,
               void(bool /*in_mode*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(RemoveRootfsVerification,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(RemoveRootfsVerificationAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(EnableBootFromUsb,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(EnableBootFromUsbAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(ConfigureSshServer,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(ConfigureSshServerAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetUserPassword,
               bool(const std::string& /*in_username*/,
                    const std::string& /*in_password*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SetUserPasswordAsync,
               void(const std::string& /*in_username*/,
                    const std::string& /*in_password*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(EnableChromeRemoteDebugging,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(EnableChromeRemoteDebuggingAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(EnableChromeDevFeatures,
               bool(const std::string& /*in_root_password*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(EnableChromeDevFeaturesAsync,
               void(const std::string& /*in_root_password*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(QueryDevFeatures,
               bool(int32_t* /*out_features*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(QueryDevFeaturesAsync,
               void(base::OnceCallback<void(int32_t /*features*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(EnableDevCoredumpUpload,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(EnableDevCoredumpUploadAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(DisableDevCoredumpUpload,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(DisableDevCoredumpUploadAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetOomScoreAdj,
               bool(const std::map<int32_t, int32_t>& /*in_scores*/,
                    std::string* /*out_out*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetOomScoreAdjAsync,
               void(const std::map<int32_t, int32_t>& /*in_scores*/,
                    base::OnceCallback<void(const std::string& /*out*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SwapEnable,
               bool(int32_t /*in_size*/,
                    bool /*in_change_now*/,
                    std::string* /*out_status*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SwapEnableAsync,
               void(int32_t /*in_size*/,
                    bool /*in_change_now*/,
                    base::OnceCallback<void(const std::string& /*status*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SwapDisable,
               bool(bool /*in_change_now*/,
                    std::string* /*out_status*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SwapDisableAsync,
               void(bool /*in_change_now*/,
                    base::OnceCallback<void(const std::string& /*status*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(KstaledSetRatio,
               bool(uint8_t /*in_ratio*/,
                    bool* /*out_result*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(KstaledSetRatioAsync,
               void(uint8_t /*in_ratio*/,
                    base::OnceCallback<void(bool /*result*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SwapStartStop,
               bool(bool /*in_on*/,
                    std::string* /*out_status*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SwapStartStopAsync,
               void(bool /*in_on*/,
                    base::OnceCallback<void(const std::string& /*status*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SwapStatus,
               bool(std::string* /*out_status*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SwapStatusAsync,
               void(base::OnceCallback<void(const std::string& /*status*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SwapSetParameter,
               bool(const std::string& /*in_command_name*/,
                    int32_t /*in_value*/,
                    std::string* /*out_status*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SwapSetParameterAsync,
               void(const std::string& /*in_command_name*/,
                    int32_t /*in_value*/,
                    base::OnceCallback<void(const std::string& /*status*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SwapZramEnableWriteback,
               bool(uint32_t /*in_size_mb*/,
                    std::string* /*out_result*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SwapZramEnableWritebackAsync,
               void(uint32_t /*in_size_mb*/,
                    base::OnceCallback<void(const std::string& /*result*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SwapZramMarkIdle,
               bool(uint32_t /*in_age*/,
                    std::string* /*out_status*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SwapZramMarkIdleAsync,
               void(uint32_t /*in_age*/,
                    base::OnceCallback<void(const std::string& /*status*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SwapZramSetWritebackLimit,
               bool(uint32_t /*in_limit*/,
                    std::string* /*out_status*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SwapZramSetWritebackLimitAsync,
               void(uint32_t /*in_limit*/,
                    base::OnceCallback<void(const std::string& /*status*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(InitiateSwapZramWriteback,
               bool(uint32_t /*in_mode*/,
                    std::string* /*out_status*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(InitiateSwapZramWritebackAsync,
               void(uint32_t /*in_mode*/,
                    base::OnceCallback<void(const std::string& /*status*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetU2fFlags,
               bool(const std::string& /*in_flags*/,
                    std::string* /*out_status*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetU2fFlagsAsync,
               void(const std::string& /*in_flags*/,
                    base::OnceCallback<void(const std::string& /*status*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetU2fFlags,
               bool(std::string* /*out_flags*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetU2fFlagsAsync,
               void(base::OnceCallback<void(const std::string& /*flags*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(ContainerStarted,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(ContainerStartedAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(ContainerStopped,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(ContainerStoppedAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetWifiPowerSave,
               bool(bool /*in_enable*/,
                    std::string* /*out_status*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetWifiPowerSaveAsync,
               void(bool /*in_enable*/,
                    base::OnceCallback<void(const std::string& /*status*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetWifiPowerSave,
               bool(std::string* /*out_status*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetWifiPowerSaveAsync,
               void(base::OnceCallback<void(const std::string& /*status*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(RunShillScriptStart,
               bool(const brillo::dbus_utils::FileDescriptor& /*in_outfd*/,
                    const std::string& /*in_script*/,
                    const std::vector<std::string>& /*in_script_args*/,
                    std::string* /*out_handle*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(RunShillScriptStartAsync,
               void(const brillo::dbus_utils::FileDescriptor& /*in_outfd*/,
                    const std::string& /*in_script*/,
                    const std::vector<std::string>& /*in_script_args*/,
                    base::OnceCallback<void(const std::string& /*handle*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(RunShillScriptStop,
               bool(const std::string& /*in_handle*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(RunShillScriptStopAsync,
               void(const std::string& /*in_handle*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(StartVmPluginDispatcher,
               bool(const std::string& /*in_user_id_hash*/,
                    const std::string& /*in_lang*/,
                    bool* /*out_status*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(StartVmPluginDispatcherAsync,
               void(const std::string& /*in_user_id_hash*/,
                    const std::string& /*in_lang*/,
                    base::OnceCallback<void(bool /*status*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(StopVmPluginDispatcher,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(StopVmPluginDispatcherAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD2(SetRlzPingSent,
               bool(brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(SetRlzPingSentAsync,
               void(base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(UpdateAndVerifyFWOnUsbStart,
               bool(const brillo::dbus_utils::FileDescriptor& /*in_outfd*/,
                    const std::string& /*in_image_file*/,
                    const std::string& /*in_ro_db_dir*/,
                    std::string* /*out_handle*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(UpdateAndVerifyFWOnUsbStartAsync,
               void(const brillo::dbus_utils::FileDescriptor& /*in_outfd*/,
                    const std::string& /*in_image_file*/,
                    const std::string& /*in_ro_db_dir*/,
                    base::OnceCallback<void(const std::string& /*handle*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(UpdateAndVerifyFWOnUsbStop,
               bool(const std::string& /*in_handle*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(UpdateAndVerifyFWOnUsbStopAsync,
               void(const std::string& /*in_handle*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetSchedulerConfiguration,
               bool(const std::string& /*in_policy*/,
                    bool* /*out_result*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SetSchedulerConfigurationAsync,
               void(const std::string& /*in_policy*/,
                    base::OnceCallback<void(bool /*result*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(EvaluateProbeFunction,
               bool(const std::string& /*in_probe_statement*/,
                    int32_t /*in_log_level*/,
                    base::ScopedFD* /*out_result_fd*/,
                    base::ScopedFD* /*out_error_fd*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(EvaluateProbeFunctionAsync,
               void(const std::string& /*in_probe_statement*/,
                    int32_t /*in_log_level*/,
                    base::OnceCallback<void(const base::ScopedFD& /*result_fd*/, const base::ScopedFD& /*error_fd*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(SetSchedulerConfigurationV2,
               bool(const std::string& /*in_policy*/,
                    bool /*in_lock_policy*/,
                    bool* /*out_result*/,
                    uint32_t* /*out_num_cores_disabled*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(SetSchedulerConfigurationV2Async,
               void(const std::string& /*in_policy*/,
                    bool /*in_lock_policy*/,
                    base::OnceCallback<void(bool /*result*/, uint32_t /*num_cores_disabled*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(WifiFWDump,
               bool(std::string* /*out_output*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(WifiFWDumpAsync,
               void(base::OnceCallback<void(const std::string& /*output*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(CollectSmartBatteryMetric,
               bool(const std::string& /*in_metric_name*/,
                    std::string* /*out_output*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(CollectSmartBatteryMetricAsync,
               void(const std::string& /*in_metric_name*/,
                    base::OnceCallback<void(const std::string& /*output*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(EcGetInventory,
               bool(std::string* /*out_output*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(EcGetInventoryAsync,
               void(base::OnceCallback<void(const std::string& /*output*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(CallDmesg,
               bool(const brillo::VariantDictionary& /*in_options*/,
                    std::string* /*out_output*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(CallDmesgAsync,
               void(const brillo::VariantDictionary& /*in_options*/,
                    base::OnceCallback<void(const std::string& /*output*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(EcTypeCEnterMode,
               bool(uint32_t /*in_port_num*/,
                    uint32_t /*in_mode*/,
                    std::string* /*out_output*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(EcTypeCEnterModeAsync,
               void(uint32_t /*in_port_num*/,
                    uint32_t /*in_mode*/,
                    base::OnceCallback<void(const std::string& /*output*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(EcTypeCExitMode,
               bool(uint32_t /*in_port_num*/,
                    std::string* /*out_output*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(EcTypeCExitModeAsync,
               void(uint32_t /*in_port_num*/,
                    base::OnceCallback<void(const std::string& /*output*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(KernelFeatureEnable,
               bool(const std::string& /*in_name*/,
                    bool* /*out_result*/,
                    std::string* /*out_err_str*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(KernelFeatureEnableAsync,
               void(const std::string& /*in_name*/,
                    base::OnceCallback<void(bool /*result*/, const std::string& /*err_str*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(KernelFeatureList,
               bool(bool* /*out_result*/,
                    std::string* /*out_csv*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(KernelFeatureListAsync,
               void(base::OnceCallback<void(bool /*result*/, const std::string& /*csv*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(DRMTraceSetCategories,
               bool(uint32_t /*in_categories*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(DRMTraceSetCategoriesAsync,
               void(uint32_t /*in_categories*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(DRMTraceSetSize,
               bool(uint32_t /*in_size*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(DRMTraceSetSizeAsync,
               void(uint32_t /*in_size*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(DRMTraceAnnotateLog,
               bool(const std::string& /*in_log*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(DRMTraceAnnotateLogAsync,
               void(const std::string& /*in_log*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(DRMTraceSnapshot,
               bool(uint32_t /*in_type*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(DRMTraceSnapshotAsync,
               void(uint32_t /*in_type*/,
                    base::OnceCallback<void()> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  void RegisterPacketCaptureStartSignalHandler(
    base::RepeatingClosure signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterPacketCaptureStartSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterPacketCaptureStartSignalHandler,
               void(base::RepeatingClosure /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  void RegisterPacketCaptureStopSignalHandler(
    base::RepeatingClosure signal_callback,
    dbus::ObjectProxy::OnConnectedCallback on_connected_callback) {
    DoRegisterPacketCaptureStopSignalHandler(signal_callback, &on_connected_callback);
  }
  MOCK_METHOD2(DoRegisterPacketCaptureStopSignalHandler,
               void(base::RepeatingClosure /*signal_callback*/,
                    dbus::ObjectProxy::OnConnectedCallback* /*on_connected_callback*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___VAR_CACHE_PORTAGE_CHROMEOS_BASE_DEBUGD_CLIENT_OUT_DEFAULT_GEN_INCLUDE_DEBUGD_DBUS_PROXY_MOCKS_H
