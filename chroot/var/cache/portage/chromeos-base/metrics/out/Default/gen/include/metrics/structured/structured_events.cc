// Generated from gen_events.py. DO NOT EDIT!
// source: structured.xml

#include "structured_events.h"

namespace metrics {
namespace structured {
namespace events {
namespace bluetooth {

BluetoothAdapterStateChanged::BluetoothAdapterStateChanged() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
BluetoothAdapterStateChanged::~BluetoothAdapterStateChanged() = default;
BluetoothAdapterStateChanged& BluetoothAdapterStateChanged::SetBootId(const std::string& value) {
  AddHmacMetric(kBootIdNameHash, value);
  return *this;
}

BluetoothAdapterStateChanged& BluetoothAdapterStateChanged::SetSystemTime(const int64_t value) {
  AddIntMetric(kSystemTimeNameHash, value);
  return *this;
}

BluetoothAdapterStateChanged& BluetoothAdapterStateChanged::SetIsFloss(const int64_t value) {
  AddIntMetric(kIsFlossNameHash, value);
  return *this;
}

BluetoothAdapterStateChanged& BluetoothAdapterStateChanged::SetAdapterState(const int64_t value) {
  AddIntMetric(kAdapterStateNameHash, value);
  return *this;
}

BluetoothPairingStateChanged::BluetoothPairingStateChanged() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
BluetoothPairingStateChanged::~BluetoothPairingStateChanged() = default;
BluetoothPairingStateChanged& BluetoothPairingStateChanged::SetBootId(const std::string& value) {
  AddHmacMetric(kBootIdNameHash, value);
  return *this;
}

BluetoothPairingStateChanged& BluetoothPairingStateChanged::SetSystemTime(const int64_t value) {
  AddIntMetric(kSystemTimeNameHash, value);
  return *this;
}

BluetoothPairingStateChanged& BluetoothPairingStateChanged::SetDeviceId(const std::string& value) {
  AddHmacMetric(kDeviceIdNameHash, value);
  return *this;
}

BluetoothPairingStateChanged& BluetoothPairingStateChanged::SetDeviceType(const int64_t value) {
  AddIntMetric(kDeviceTypeNameHash, value);
  return *this;
}

BluetoothPairingStateChanged& BluetoothPairingStateChanged::SetPairingState(const int64_t value) {
  AddIntMetric(kPairingStateNameHash, value);
  return *this;
}

BluetoothAclConnectionStateChanged::BluetoothAclConnectionStateChanged() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
BluetoothAclConnectionStateChanged::~BluetoothAclConnectionStateChanged() = default;
BluetoothAclConnectionStateChanged& BluetoothAclConnectionStateChanged::SetBootId(const std::string& value) {
  AddHmacMetric(kBootIdNameHash, value);
  return *this;
}

BluetoothAclConnectionStateChanged& BluetoothAclConnectionStateChanged::SetSystemTime(const int64_t value) {
  AddIntMetric(kSystemTimeNameHash, value);
  return *this;
}

BluetoothAclConnectionStateChanged& BluetoothAclConnectionStateChanged::SetIsFloss(const int64_t value) {
  AddIntMetric(kIsFlossNameHash, value);
  return *this;
}

BluetoothAclConnectionStateChanged& BluetoothAclConnectionStateChanged::SetDeviceId(const std::string& value) {
  AddHmacMetric(kDeviceIdNameHash, value);
  return *this;
}

BluetoothAclConnectionStateChanged& BluetoothAclConnectionStateChanged::SetDeviceType(const int64_t value) {
  AddIntMetric(kDeviceTypeNameHash, value);
  return *this;
}

BluetoothAclConnectionStateChanged& BluetoothAclConnectionStateChanged::SetConnectionDirection(const int64_t value) {
  AddIntMetric(kConnectionDirectionNameHash, value);
  return *this;
}

BluetoothAclConnectionStateChanged& BluetoothAclConnectionStateChanged::SetConnectionInitiator(const int64_t value) {
  AddIntMetric(kConnectionInitiatorNameHash, value);
  return *this;
}

BluetoothAclConnectionStateChanged& BluetoothAclConnectionStateChanged::SetStateChangeType(const int64_t value) {
  AddIntMetric(kStateChangeTypeNameHash, value);
  return *this;
}

BluetoothAclConnectionStateChanged& BluetoothAclConnectionStateChanged::SetAclConnectionState(const int64_t value) {
  AddIntMetric(kAclConnectionStateNameHash, value);
  return *this;
}

BluetoothProfileConnectionStateChanged::BluetoothProfileConnectionStateChanged() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
BluetoothProfileConnectionStateChanged::~BluetoothProfileConnectionStateChanged() = default;
BluetoothProfileConnectionStateChanged& BluetoothProfileConnectionStateChanged::SetBootId(const std::string& value) {
  AddHmacMetric(kBootIdNameHash, value);
  return *this;
}

BluetoothProfileConnectionStateChanged& BluetoothProfileConnectionStateChanged::SetSystemTime(const int64_t value) {
  AddIntMetric(kSystemTimeNameHash, value);
  return *this;
}

BluetoothProfileConnectionStateChanged& BluetoothProfileConnectionStateChanged::SetDeviceId(const std::string& value) {
  AddHmacMetric(kDeviceIdNameHash, value);
  return *this;
}

BluetoothProfileConnectionStateChanged& BluetoothProfileConnectionStateChanged::SetStateChangeType(const int64_t value) {
  AddIntMetric(kStateChangeTypeNameHash, value);
  return *this;
}

BluetoothProfileConnectionStateChanged& BluetoothProfileConnectionStateChanged::SetProfile(const int64_t value) {
  AddIntMetric(kProfileNameHash, value);
  return *this;
}

BluetoothProfileConnectionStateChanged& BluetoothProfileConnectionStateChanged::SetProfileConnectionState(const int64_t value) {
  AddIntMetric(kProfileConnectionStateNameHash, value);
  return *this;
}

BluetoothDeviceInfoReport::BluetoothDeviceInfoReport() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
BluetoothDeviceInfoReport::~BluetoothDeviceInfoReport() = default;
BluetoothDeviceInfoReport& BluetoothDeviceInfoReport::SetBootId(const std::string& value) {
  AddHmacMetric(kBootIdNameHash, value);
  return *this;
}

BluetoothDeviceInfoReport& BluetoothDeviceInfoReport::SetSystemTime(const int64_t value) {
  AddIntMetric(kSystemTimeNameHash, value);
  return *this;
}

BluetoothDeviceInfoReport& BluetoothDeviceInfoReport::SetDeviceId(const std::string& value) {
  AddHmacMetric(kDeviceIdNameHash, value);
  return *this;
}

BluetoothDeviceInfoReport& BluetoothDeviceInfoReport::SetDeviceType(const int64_t value) {
  AddIntMetric(kDeviceTypeNameHash, value);
  return *this;
}

BluetoothDeviceInfoReport& BluetoothDeviceInfoReport::SetDeviceClass(const int64_t value) {
  AddIntMetric(kDeviceClassNameHash, value);
  return *this;
}

BluetoothDeviceInfoReport& BluetoothDeviceInfoReport::SetDeviceCategory(const int64_t value) {
  AddIntMetric(kDeviceCategoryNameHash, value);
  return *this;
}

BluetoothDeviceInfoReport& BluetoothDeviceInfoReport::SetVendorId(const int64_t value) {
  AddIntMetric(kVendorIdNameHash, value);
  return *this;
}

BluetoothDeviceInfoReport& BluetoothDeviceInfoReport::SetVendorIdSource(const int64_t value) {
  AddIntMetric(kVendorIdSourceNameHash, value);
  return *this;
}

BluetoothDeviceInfoReport& BluetoothDeviceInfoReport::SetProductId(const int64_t value) {
  AddIntMetric(kProductIdNameHash, value);
  return *this;
}

BluetoothDeviceInfoReport& BluetoothDeviceInfoReport::SetProductVersion(const int64_t value) {
  AddIntMetric(kProductVersionNameHash, value);
  return *this;
}

BluetoothAudioQualityReport::BluetoothAudioQualityReport() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
BluetoothAudioQualityReport::~BluetoothAudioQualityReport() = default;
BluetoothAudioQualityReport& BluetoothAudioQualityReport::SetBootId(const std::string& value) {
  AddHmacMetric(kBootIdNameHash, value);
  return *this;
}

BluetoothAudioQualityReport& BluetoothAudioQualityReport::SetSystemTime(const int64_t value) {
  AddIntMetric(kSystemTimeNameHash, value);
  return *this;
}

BluetoothAudioQualityReport& BluetoothAudioQualityReport::SetDeviceId(const std::string& value) {
  AddHmacMetric(kDeviceIdNameHash, value);
  return *this;
}

BluetoothAudioQualityReport& BluetoothAudioQualityReport::SetProfile(const int64_t value) {
  AddIntMetric(kProfileNameHash, value);
  return *this;
}

BluetoothAudioQualityReport& BluetoothAudioQualityReport::SetQualityType(const int64_t value) {
  AddIntMetric(kQualityTypeNameHash, value);
  return *this;
}

BluetoothAudioQualityReport& BluetoothAudioQualityReport::SetAverage(const int64_t value) {
  AddIntMetric(kAverageNameHash, value);
  return *this;
}

BluetoothAudioQualityReport& BluetoothAudioQualityReport::SetStdDev(const int64_t value) {
  AddIntMetric(kStdDevNameHash, value);
  return *this;
}

BluetoothAudioQualityReport& BluetoothAudioQualityReport::SetPercentile95(const int64_t value) {
  AddIntMetric(kPercentile95NameHash, value);
  return *this;
}

BluetoothChipsetInfoReport::BluetoothChipsetInfoReport() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
BluetoothChipsetInfoReport::~BluetoothChipsetInfoReport() = default;
BluetoothChipsetInfoReport& BluetoothChipsetInfoReport::SetBootId(const std::string& value) {
  AddHmacMetric(kBootIdNameHash, value);
  return *this;
}

BluetoothChipsetInfoReport& BluetoothChipsetInfoReport::SetVendorId(const int64_t value) {
  AddIntMetric(kVendorIdNameHash, value);
  return *this;
}

BluetoothChipsetInfoReport& BluetoothChipsetInfoReport::SetProductId(const int64_t value) {
  AddIntMetric(kProductIdNameHash, value);
  return *this;
}

BluetoothChipsetInfoReport& BluetoothChipsetInfoReport::SetTransport(const int64_t value) {
  AddIntMetric(kTransportNameHash, value);
  return *this;
}

BluetoothChipsetInfoReport& BluetoothChipsetInfoReport::SetChipsetStringHashValue(const int64_t value) {
  AddIntMetric(kChipsetStringHashValueNameHash, value);
  return *this;
}

}  // namespace bluetooth

namespace bluetooth_device {

BluetoothDeviceInfo::BluetoothDeviceInfo() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
BluetoothDeviceInfo::~BluetoothDeviceInfo() = default;
BluetoothDeviceInfo& BluetoothDeviceInfo::SetDeviceType(const int64_t value) {
  AddIntMetric(kDeviceTypeNameHash, value);
  return *this;
}

BluetoothDeviceInfo& BluetoothDeviceInfo::SetDeviceClass(const int64_t value) {
  AddIntMetric(kDeviceClassNameHash, value);
  return *this;
}

BluetoothDeviceInfo& BluetoothDeviceInfo::SetDeviceCategory(const int64_t value) {
  AddIntMetric(kDeviceCategoryNameHash, value);
  return *this;
}

BluetoothDeviceInfo& BluetoothDeviceInfo::SetVendorId(const int64_t value) {
  AddIntMetric(kVendorIdNameHash, value);
  return *this;
}

BluetoothDeviceInfo& BluetoothDeviceInfo::SetVendorIdSource(const int64_t value) {
  AddIntMetric(kVendorIdSourceNameHash, value);
  return *this;
}

BluetoothDeviceInfo& BluetoothDeviceInfo::SetProductId(const int64_t value) {
  AddIntMetric(kProductIdNameHash, value);
  return *this;
}

BluetoothDeviceInfo& BluetoothDeviceInfo::SetProductVersion(const int64_t value) {
  AddIntMetric(kProductVersionNameHash, value);
  return *this;
}

}  // namespace bluetooth_device

namespace bluetooth_chipset {

BluetoothChipsetInfo::BluetoothChipsetInfo() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
BluetoothChipsetInfo::~BluetoothChipsetInfo() = default;
BluetoothChipsetInfo& BluetoothChipsetInfo::SetVendorId(const int64_t value) {
  AddIntMetric(kVendorIdNameHash, value);
  return *this;
}

BluetoothChipsetInfo& BluetoothChipsetInfo::SetProductId(const int64_t value) {
  AddIntMetric(kProductIdNameHash, value);
  return *this;
}

BluetoothChipsetInfo& BluetoothChipsetInfo::SetTransport(const int64_t value) {
  AddIntMetric(kTransportNameHash, value);
  return *this;
}

BluetoothChipsetInfo& BluetoothChipsetInfo::SetChipsetString(const std::string& value) {
  AddRawStringMetric(kChipsetStringNameHash, value);
  return *this;
}

}  // namespace bluetooth_chipset

namespace hardware_verifier {

HwVerificationReport::HwVerificationReport() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
HwVerificationReport::~HwVerificationReport() = default;
HwVerificationReport& HwVerificationReport::SetIsCompliant(const int64_t value) {
  AddIntMetric(kIsCompliantNameHash, value);
  return *this;
}

HwVerificationReport& HwVerificationReport::SetQualificationStatusDisplayPanel(const int64_t value) {
  AddIntMetric(kQualificationStatusDisplayPanelNameHash, value);
  return *this;
}

HwVerificationReport& HwVerificationReport::SetQualificationStatusStorage(const int64_t value) {
  AddIntMetric(kQualificationStatusStorageNameHash, value);
  return *this;
}

ComponentInfo::ComponentInfo() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
ComponentInfo::~ComponentInfo() = default;
ComponentInfo& ComponentInfo::SetComponentCategory(const int64_t value) {
  AddIntMetric(kComponentCategoryNameHash, value);
  return *this;
}

ComponentInfo& ComponentInfo::SetDisplayPanelVendor(const int64_t value) {
  AddIntMetric(kDisplayPanelVendorNameHash, value);
  return *this;
}

ComponentInfo& ComponentInfo::SetDisplayPanelProductId(const int64_t value) {
  AddIntMetric(kDisplayPanelProductIdNameHash, value);
  return *this;
}

ComponentInfo& ComponentInfo::SetDisplayPanelHeight(const int64_t value) {
  AddIntMetric(kDisplayPanelHeightNameHash, value);
  return *this;
}

ComponentInfo& ComponentInfo::SetDisplayPanelWidth(const int64_t value) {
  AddIntMetric(kDisplayPanelWidthNameHash, value);
  return *this;
}

ComponentInfo& ComponentInfo::SetStorageMmcManfid(const int64_t value) {
  AddIntMetric(kStorageMmcManfidNameHash, value);
  return *this;
}

ComponentInfo& ComponentInfo::SetStorageMmcHwrev(const int64_t value) {
  AddIntMetric(kStorageMmcHwrevNameHash, value);
  return *this;
}

ComponentInfo& ComponentInfo::SetStorageMmcOemid(const int64_t value) {
  AddIntMetric(kStorageMmcOemidNameHash, value);
  return *this;
}

ComponentInfo& ComponentInfo::SetStorageMmcPrv(const int64_t value) {
  AddIntMetric(kStorageMmcPrvNameHash, value);
  return *this;
}

ComponentInfo& ComponentInfo::SetStoragePciVendor(const int64_t value) {
  AddIntMetric(kStoragePciVendorNameHash, value);
  return *this;
}

ComponentInfo& ComponentInfo::SetStoragePciDevice(const int64_t value) {
  AddIntMetric(kStoragePciDeviceNameHash, value);
  return *this;
}

ComponentInfo& ComponentInfo::SetStoragePciClass(const int64_t value) {
  AddIntMetric(kStoragePciClassNameHash, value);
  return *this;
}

}  // namespace hardware_verifier

namespace cellular {

CellularConnectionAttempt::CellularConnectionAttempt() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
CellularConnectionAttempt::~CellularConnectionAttempt() = default;
CellularConnectionAttempt& CellularConnectionAttempt::Setapn_id(const int64_t value) {
  AddIntMetric(kapn_idNameHash, value);
  return *this;
}

CellularConnectionAttempt& CellularConnectionAttempt::Setipv4_config_method(const int64_t value) {
  AddIntMetric(kipv4_config_methodNameHash, value);
  return *this;
}

CellularConnectionAttempt& CellularConnectionAttempt::Setipv6_config_method(const int64_t value) {
  AddIntMetric(kipv6_config_methodNameHash, value);
  return *this;
}

CellularConnectionAttempt& CellularConnectionAttempt::Setconnect_result(const int64_t value) {
  AddIntMetric(kconnect_resultNameHash, value);
  return *this;
}

CellularConnectionAttempt& CellularConnectionAttempt::Sethome_mccmnc(const int64_t value) {
  AddIntMetric(khome_mccmncNameHash, value);
  return *this;
}

CellularConnectionAttempt& CellularConnectionAttempt::Setserving_mccmnc(const int64_t value) {
  AddIntMetric(kserving_mccmncNameHash, value);
  return *this;
}

CellularConnectionAttempt& CellularConnectionAttempt::Setroaming_state(const int64_t value) {
  AddIntMetric(kroaming_stateNameHash, value);
  return *this;
}

CellularConnectionAttempt& CellularConnectionAttempt::Setuse_attach_apn(const int64_t value) {
  AddIntMetric(kuse_attach_apnNameHash, value);
  return *this;
}

CellularConnectionAttempt& CellularConnectionAttempt::Setapn_source(const int64_t value) {
  AddIntMetric(kapn_sourceNameHash, value);
  return *this;
}

CellularConnectionAttempt& CellularConnectionAttempt::Settech_used(const int64_t value) {
  AddIntMetric(ktech_usedNameHash, value);
  return *this;
}

CellularConnectionAttempt& CellularConnectionAttempt::Seticcid_length(const int64_t value) {
  AddIntMetric(kiccid_lengthNameHash, value);
  return *this;
}

CellularConnectionAttempt& CellularConnectionAttempt::Setsim_type(const int64_t value) {
  AddIntMetric(ksim_typeNameHash, value);
  return *this;
}

CellularConnectionAttempt& CellularConnectionAttempt::Setmodem_state(const int64_t value) {
  AddIntMetric(kmodem_stateNameHash, value);
  return *this;
}

CellularConnectionAttempt& CellularConnectionAttempt::Setconnect_time(const int64_t value) {
  AddIntMetric(kconnect_timeNameHash, value);
  return *this;
}

CellularConnectionAttempt& CellularConnectionAttempt::Setscan_connect_time(const int64_t value) {
  AddIntMetric(kscan_connect_timeNameHash, value);
  return *this;
}

CellularConnectionAttempt& CellularConnectionAttempt::Setdetailed_error(const int64_t value) {
  AddIntMetric(kdetailed_errorNameHash, value);
  return *this;
}

ModemFwdFwInstallResult::ModemFwdFwInstallResult() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
ModemFwdFwInstallResult::~ModemFwdFwInstallResult() = default;
ModemFwdFwInstallResult& ModemFwdFwInstallResult::Setfirmware_types(const int64_t value) {
  AddIntMetric(kfirmware_typesNameHash, value);
  return *this;
}

ModemFwdFwInstallResult& ModemFwdFwInstallResult::Setfw_install_result(const int64_t value) {
  AddIntMetric(kfw_install_resultNameHash, value);
  return *this;
}

}  // namespace cellular

namespace rmad {

ShimlessRmaReport::ShimlessRmaReport() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
ShimlessRmaReport::~ShimlessRmaReport() = default;
ShimlessRmaReport& ShimlessRmaReport::SetOverallTime(const int64_t value) {
  AddIntMetric(kOverallTimeNameHash, value);
  return *this;
}

ShimlessRmaReport& ShimlessRmaReport::SetRunningTime(const int64_t value) {
  AddIntMetric(kRunningTimeNameHash, value);
  return *this;
}

ShimlessRmaReport& ShimlessRmaReport::SetIsComplete(const int64_t value) {
  AddIntMetric(kIsCompleteNameHash, value);
  return *this;
}

ShimlessRmaReport& ShimlessRmaReport::SetRoVerification(const int64_t value) {
  AddIntMetric(kRoVerificationNameHash, value);
  return *this;
}

ShimlessRmaReport& ShimlessRmaReport::SetReturningOwner(const int64_t value) {
  AddIntMetric(kReturningOwnerNameHash, value);
  return *this;
}

ShimlessRmaReport& ShimlessRmaReport::SetMainboardReplacement(const int64_t value) {
  AddIntMetric(kMainboardReplacementNameHash, value);
  return *this;
}

ShimlessRmaReport& ShimlessRmaReport::SetWriteProtectDisableMethod(const int64_t value) {
  AddIntMetric(kWriteProtectDisableMethodNameHash, value);
  return *this;
}

ReplacedComponent::ReplacedComponent() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
ReplacedComponent::~ReplacedComponent() = default;
ReplacedComponent& ReplacedComponent::SetComponentCategory(const int64_t value) {
  AddIntMetric(kComponentCategoryNameHash, value);
  return *this;
}

OccurredError::OccurredError() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
OccurredError::~OccurredError() = default;
OccurredError& OccurredError::SetErrorType(const int64_t value) {
  AddIntMetric(kErrorTypeNameHash, value);
  return *this;
}

AdditionalActivity::AdditionalActivity() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
AdditionalActivity::~AdditionalActivity() = default;
AdditionalActivity& AdditionalActivity::SetActivityType(const int64_t value) {
  AddIntMetric(kActivityTypeNameHash, value);
  return *this;
}

}  // namespace rmad

namespace wi_fi_chipset {

WiFiChipsetInfo::WiFiChipsetInfo() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
WiFiChipsetInfo::~WiFiChipsetInfo() = default;
WiFiChipsetInfo& WiFiChipsetInfo::SetEventVersion(const int64_t value) {
  AddIntMetric(kEventVersionNameHash, value);
  return *this;
}

WiFiChipsetInfo& WiFiChipsetInfo::SetVendorId(const int64_t value) {
  AddIntMetric(kVendorIdNameHash, value);
  return *this;
}

WiFiChipsetInfo& WiFiChipsetInfo::SetProductId(const int64_t value) {
  AddIntMetric(kProductIdNameHash, value);
  return *this;
}

WiFiChipsetInfo& WiFiChipsetInfo::SetSubsystemId(const int64_t value) {
  AddIntMetric(kSubsystemIdNameHash, value);
  return *this;
}

}  // namespace wi_fi_chipset

namespace wi_fi_ap {

WiFiAPInfo::WiFiAPInfo() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
WiFiAPInfo::~WiFiAPInfo() = default;
WiFiAPInfo& WiFiAPInfo::SetEventVersion(const int64_t value) {
  AddIntMetric(kEventVersionNameHash, value);
  return *this;
}

WiFiAPInfo& WiFiAPInfo::SetAPOUI(const int64_t value) {
  AddIntMetric(kAPOUINameHash, value);
  return *this;
}

}  // namespace wi_fi_ap

namespace wi_fi {

WiFiAdapterStateChanged::WiFiAdapterStateChanged() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
WiFiAdapterStateChanged::~WiFiAdapterStateChanged() = default;
WiFiAdapterStateChanged& WiFiAdapterStateChanged::SetBootId(const std::string& value) {
  AddHmacMetric(kBootIdNameHash, value);
  return *this;
}

WiFiAdapterStateChanged& WiFiAdapterStateChanged::SetSystemTime(const int64_t value) {
  AddIntMetric(kSystemTimeNameHash, value);
  return *this;
}

WiFiAdapterStateChanged& WiFiAdapterStateChanged::SetEventVersion(const int64_t value) {
  AddIntMetric(kEventVersionNameHash, value);
  return *this;
}

WiFiAdapterStateChanged& WiFiAdapterStateChanged::SetAdapterState(const int64_t value) {
  AddIntMetric(kAdapterStateNameHash, value);
  return *this;
}

WiFiAdapterStateChanged& WiFiAdapterStateChanged::SetVendorId(const int64_t value) {
  AddIntMetric(kVendorIdNameHash, value);
  return *this;
}

WiFiAdapterStateChanged& WiFiAdapterStateChanged::SetProductId(const int64_t value) {
  AddIntMetric(kProductIdNameHash, value);
  return *this;
}

WiFiAdapterStateChanged& WiFiAdapterStateChanged::SetSubsystemId(const int64_t value) {
  AddIntMetric(kSubsystemIdNameHash, value);
  return *this;
}

WiFiConnectionAttempt::WiFiConnectionAttempt() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
WiFiConnectionAttempt::~WiFiConnectionAttempt() = default;
WiFiConnectionAttempt& WiFiConnectionAttempt::SetBootId(const std::string& value) {
  AddHmacMetric(kBootIdNameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetSystemTime(const int64_t value) {
  AddIntMetric(kSystemTimeNameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetEventVersion(const int64_t value) {
  AddIntMetric(kEventVersionNameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetSessionTag(const int64_t value) {
  AddIntMetric(kSessionTagNameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetAttemptType(const int64_t value) {
  AddIntMetric(kAttemptTypeNameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetAPPhyMode(const int64_t value) {
  AddIntMetric(kAPPhyModeNameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetAPSecurityMode(const int64_t value) {
  AddIntMetric(kAPSecurityModeNameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetAPSecurityEAPInnerProtocol(const int64_t value) {
  AddIntMetric(kAPSecurityEAPInnerProtocolNameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetAPSecurityEAPOuterProtocol(const int64_t value) {
  AddIntMetric(kAPSecurityEAPOuterProtocolNameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetAPBand(const int64_t value) {
  AddIntMetric(kAPBandNameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetAPChannel(const int64_t value) {
  AddIntMetric(kAPChannelNameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetRSSI(const int64_t value) {
  AddIntMetric(kRSSINameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetSSID(const std::string& value) {
  AddHmacMetric(kSSIDNameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetSSIDProvisioningMode(const int64_t value) {
  AddIntMetric(kSSIDProvisioningModeNameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetSSIDHidden(const int64_t value) {
  AddIntMetric(kSSIDHiddenNameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetBSSID(const std::string& value) {
  AddHmacMetric(kBSSIDNameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetAPOUI(const int64_t value) {
  AddIntMetric(kAPOUINameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetAP_80211krv_NLSSupport(const int64_t value) {
  AddIntMetric(kAP_80211krv_NLSSupportNameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetAP_80211krv_OTA_FTSupport(const int64_t value) {
  AddIntMetric(kAP_80211krv_OTA_FTSupportNameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetAP_80211krv_OTDS_FTSupport(const int64_t value) {
  AddIntMetric(kAP_80211krv_OTDS_FTSupportNameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetAP_80211krv_DMSSupport(const int64_t value) {
  AddIntMetric(kAP_80211krv_DMSSupportNameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetAP_80211krv_BSSMaxIdleSupport(const int64_t value) {
  AddIntMetric(kAP_80211krv_BSSMaxIdleSupportNameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetAP_80211krv_BSSTMSupport(const int64_t value) {
  AddIntMetric(kAP_80211krv_BSSTMSupportNameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetAP_HS20Support(const int64_t value) {
  AddIntMetric(kAP_HS20SupportNameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetAP_HS20Version(const int64_t value) {
  AddIntMetric(kAP_HS20VersionNameHash, value);
  return *this;
}

WiFiConnectionAttempt& WiFiConnectionAttempt::SetAP_MBOSupport(const int64_t value) {
  AddIntMetric(kAP_MBOSupportNameHash, value);
  return *this;
}

WiFiConnectionAttemptResult::WiFiConnectionAttemptResult() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
WiFiConnectionAttemptResult::~WiFiConnectionAttemptResult() = default;
WiFiConnectionAttemptResult& WiFiConnectionAttemptResult::SetBootId(const std::string& value) {
  AddHmacMetric(kBootIdNameHash, value);
  return *this;
}

WiFiConnectionAttemptResult& WiFiConnectionAttemptResult::SetSystemTime(const int64_t value) {
  AddIntMetric(kSystemTimeNameHash, value);
  return *this;
}

WiFiConnectionAttemptResult& WiFiConnectionAttemptResult::SetEventVersion(const int64_t value) {
  AddIntMetric(kEventVersionNameHash, value);
  return *this;
}

WiFiConnectionAttemptResult& WiFiConnectionAttemptResult::SetSessionTag(const int64_t value) {
  AddIntMetric(kSessionTagNameHash, value);
  return *this;
}

WiFiConnectionAttemptResult& WiFiConnectionAttemptResult::SetResultCode(const int64_t value) {
  AddIntMetric(kResultCodeNameHash, value);
  return *this;
}

WiFiIPConnectivityStatus::WiFiIPConnectivityStatus() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
WiFiIPConnectivityStatus::~WiFiIPConnectivityStatus() = default;
WiFiIPConnectivityStatus& WiFiIPConnectivityStatus::SetBootId(const std::string& value) {
  AddHmacMetric(kBootIdNameHash, value);
  return *this;
}

WiFiIPConnectivityStatus& WiFiIPConnectivityStatus::SetSystemTime(const int64_t value) {
  AddIntMetric(kSystemTimeNameHash, value);
  return *this;
}

WiFiIPConnectivityStatus& WiFiIPConnectivityStatus::SetEventVersion(const int64_t value) {
  AddIntMetric(kEventVersionNameHash, value);
  return *this;
}

WiFiIPConnectivityStatus& WiFiIPConnectivityStatus::SetIPConnectivityStatus(const int64_t value) {
  AddIntMetric(kIPConnectivityStatusNameHash, value);
  return *this;
}

WiFiIPConnectivityStatus& WiFiIPConnectivityStatus::SetIPConnectivityType(const int64_t value) {
  AddIntMetric(kIPConnectivityTypeNameHash, value);
  return *this;
}

WiFiPortalDetectionStatus::WiFiPortalDetectionStatus() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
WiFiPortalDetectionStatus::~WiFiPortalDetectionStatus() = default;
WiFiPortalDetectionStatus& WiFiPortalDetectionStatus::SetBootId(const std::string& value) {
  AddHmacMetric(kBootIdNameHash, value);
  return *this;
}

WiFiPortalDetectionStatus& WiFiPortalDetectionStatus::SetSystemTime(const int64_t value) {
  AddIntMetric(kSystemTimeNameHash, value);
  return *this;
}

WiFiPortalDetectionStatus& WiFiPortalDetectionStatus::SetEventVersion(const int64_t value) {
  AddIntMetric(kEventVersionNameHash, value);
  return *this;
}

WiFiPortalDetectionStatus& WiFiPortalDetectionStatus::SetPortalDetectionStatus(const int64_t value) {
  AddIntMetric(kPortalDetectionStatusNameHash, value);
  return *this;
}

WiFiConnectionEnd::WiFiConnectionEnd() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
WiFiConnectionEnd::~WiFiConnectionEnd() = default;
WiFiConnectionEnd& WiFiConnectionEnd::SetBootId(const std::string& value) {
  AddHmacMetric(kBootIdNameHash, value);
  return *this;
}

WiFiConnectionEnd& WiFiConnectionEnd::SetSystemTime(const int64_t value) {
  AddIntMetric(kSystemTimeNameHash, value);
  return *this;
}

WiFiConnectionEnd& WiFiConnectionEnd::SetEventVersion(const int64_t value) {
  AddIntMetric(kEventVersionNameHash, value);
  return *this;
}

WiFiConnectionEnd& WiFiConnectionEnd::SetSessionTag(const int64_t value) {
  AddIntMetric(kSessionTagNameHash, value);
  return *this;
}

WiFiConnectionEnd& WiFiConnectionEnd::SetDisconnectionType(const int64_t value) {
  AddIntMetric(kDisconnectionTypeNameHash, value);
  return *this;
}

WiFiConnectionEnd& WiFiConnectionEnd::SetDisconnectionReasonCode(const int64_t value) {
  AddIntMetric(kDisconnectionReasonCodeNameHash, value);
  return *this;
}

}  // namespace wi_fi

namespace test_project_one {

TestEventOne::TestEventOne() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
TestEventOne::~TestEventOne() = default;
TestEventOne& TestEventOne::SetTestMetricOne(const std::string& value) {
  AddHmacMetric(kTestMetricOneNameHash, value);
  return *this;
}

TestEventOne& TestEventOne::SetTestMetricTwo(const int64_t value) {
  AddIntMetric(kTestMetricTwoNameHash, value);
  return *this;
}

TestEventTwo::TestEventTwo() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
TestEventTwo::~TestEventTwo() = default;
TestEventTwo& TestEventTwo::SetTestMetricThree(const int64_t value) {
  AddIntMetric(kTestMetricThreeNameHash, value);
  return *this;
}

}  // namespace test_project_one

namespace test_project_two {

TestEventThree::TestEventThree() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash, kIdType, kEventType) {}
TestEventThree::~TestEventThree() = default;
TestEventThree& TestEventThree::SetTestMetricFour(const std::string& value) {
  AddHmacMetric(kTestMetricFourNameHash, value);
  return *this;
}

}  // namespace test_project_two


}  // namespace events
}  // namespace structured
}  // namespace metrics