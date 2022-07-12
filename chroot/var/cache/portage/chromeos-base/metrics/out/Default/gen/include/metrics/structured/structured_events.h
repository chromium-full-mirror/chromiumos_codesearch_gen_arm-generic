// Generated from gen_events.py. DO NOT EDIT!
// source: structured.xml

#ifndef METRICS_STRUCTURED_STRUCTURED_EVENTS_H
#define METRICS_STRUCTURED_STRUCTURED_EVENTS_H

#include <cstdint>
#include <string>

#include <brillo/brillo_export.h>

#include "metrics/structured/event_base.h"

namespace metrics {
namespace structured {
namespace events {

constexpr uint64_t kProjectNameHashes[] = {UINT64_C(9074739597929991885), UINT64_C(11181229631788078243), UINT64_C(1745381000935843040), UINT64_C(8206859287963243715), UINT64_C(11294265225635075664), UINT64_C(16881314472396226433), UINT64_C(5876808001962504629), UINT64_C(4320592646346933548), UINT64_C(7302676440391025918), UINT64_C(4690103929823698613), UINT64_C(9675127341789951965)};

namespace bluetooth {

class BRILLO_EXPORT BluetoothAdapterStateChanged final : public ::metrics::structured::EventBase {
 public:
  BluetoothAdapterStateChanged();
  ~BluetoothAdapterStateChanged() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(959829856916771459);
  static constexpr uint64_t kProjectNameHash = UINT64_C(9074739597929991885);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kBootIdNameHash = UINT64_C(9983133050293312198);
  BluetoothAdapterStateChanged& SetBootId(const std::string& value);

  static constexpr uint64_t kSystemTimeNameHash = UINT64_C(5430963162341175395);
  BluetoothAdapterStateChanged& SetSystemTime(const int64_t value);

  static constexpr uint64_t kIsFlossNameHash = UINT64_C(15868727231156599609);
  BluetoothAdapterStateChanged& SetIsFloss(const int64_t value);

  static constexpr uint64_t kAdapterStateNameHash = UINT64_C(12219887874367467564);
  BluetoothAdapterStateChanged& SetAdapterState(const int64_t value);

};

class BRILLO_EXPORT BluetoothPairingStateChanged final : public ::metrics::structured::EventBase {
 public:
  BluetoothPairingStateChanged();
  ~BluetoothPairingStateChanged() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(11839023048095184048);
  static constexpr uint64_t kProjectNameHash = UINT64_C(9074739597929991885);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kBootIdNameHash = UINT64_C(9983133050293312198);
  BluetoothPairingStateChanged& SetBootId(const std::string& value);

  static constexpr uint64_t kSystemTimeNameHash = UINT64_C(5430963162341175395);
  BluetoothPairingStateChanged& SetSystemTime(const int64_t value);

  static constexpr uint64_t kDeviceIdNameHash = UINT64_C(14998742047592455339);
  BluetoothPairingStateChanged& SetDeviceId(const std::string& value);

  static constexpr uint64_t kDeviceTypeNameHash = UINT64_C(7795620498098931292);
  BluetoothPairingStateChanged& SetDeviceType(const int64_t value);

  static constexpr uint64_t kPairingStateNameHash = UINT64_C(10324313318937084101);
  BluetoothPairingStateChanged& SetPairingState(const int64_t value);

};

class BRILLO_EXPORT BluetoothAclConnectionStateChanged final : public ::metrics::structured::EventBase {
 public:
  BluetoothAclConnectionStateChanged();
  ~BluetoothAclConnectionStateChanged() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(1880220404408566268);
  static constexpr uint64_t kProjectNameHash = UINT64_C(9074739597929991885);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kBootIdNameHash = UINT64_C(9983133050293312198);
  BluetoothAclConnectionStateChanged& SetBootId(const std::string& value);

  static constexpr uint64_t kSystemTimeNameHash = UINT64_C(5430963162341175395);
  BluetoothAclConnectionStateChanged& SetSystemTime(const int64_t value);

  static constexpr uint64_t kIsFlossNameHash = UINT64_C(15868727231156599609);
  BluetoothAclConnectionStateChanged& SetIsFloss(const int64_t value);

  static constexpr uint64_t kDeviceIdNameHash = UINT64_C(14998742047592455339);
  BluetoothAclConnectionStateChanged& SetDeviceId(const std::string& value);

  static constexpr uint64_t kDeviceTypeNameHash = UINT64_C(7795620498098931292);
  BluetoothAclConnectionStateChanged& SetDeviceType(const int64_t value);

  static constexpr uint64_t kConnectionDirectionNameHash = UINT64_C(10325946006427534911);
  BluetoothAclConnectionStateChanged& SetConnectionDirection(const int64_t value);

  static constexpr uint64_t kConnectionInitiatorNameHash = UINT64_C(3855198013004374807);
  BluetoothAclConnectionStateChanged& SetConnectionInitiator(const int64_t value);

  static constexpr uint64_t kStateChangeTypeNameHash = UINT64_C(7769237458221075087);
  BluetoothAclConnectionStateChanged& SetStateChangeType(const int64_t value);

  static constexpr uint64_t kAclConnectionStateNameHash = UINT64_C(927065894624438386);
  BluetoothAclConnectionStateChanged& SetAclConnectionState(const int64_t value);

};

class BRILLO_EXPORT BluetoothProfileConnectionStateChanged final : public ::metrics::structured::EventBase {
 public:
  BluetoothProfileConnectionStateChanged();
  ~BluetoothProfileConnectionStateChanged() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(7217682640379679663);
  static constexpr uint64_t kProjectNameHash = UINT64_C(9074739597929991885);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kBootIdNameHash = UINT64_C(9983133050293312198);
  BluetoothProfileConnectionStateChanged& SetBootId(const std::string& value);

  static constexpr uint64_t kSystemTimeNameHash = UINT64_C(5430963162341175395);
  BluetoothProfileConnectionStateChanged& SetSystemTime(const int64_t value);

  static constexpr uint64_t kDeviceIdNameHash = UINT64_C(14998742047592455339);
  BluetoothProfileConnectionStateChanged& SetDeviceId(const std::string& value);

  static constexpr uint64_t kStateChangeTypeNameHash = UINT64_C(7769237458221075087);
  BluetoothProfileConnectionStateChanged& SetStateChangeType(const int64_t value);

  static constexpr uint64_t kProfileNameHash = UINT64_C(14765504761742342519);
  BluetoothProfileConnectionStateChanged& SetProfile(const int64_t value);

  static constexpr uint64_t kProfileConnectionStateNameHash = UINT64_C(3087232370221097682);
  BluetoothProfileConnectionStateChanged& SetProfileConnectionState(const int64_t value);

};

class BRILLO_EXPORT BluetoothDeviceInfoReport final : public ::metrics::structured::EventBase {
 public:
  BluetoothDeviceInfoReport();
  ~BluetoothDeviceInfoReport() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(1506471670382892394);
  static constexpr uint64_t kProjectNameHash = UINT64_C(9074739597929991885);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kBootIdNameHash = UINT64_C(9983133050293312198);
  BluetoothDeviceInfoReport& SetBootId(const std::string& value);

  static constexpr uint64_t kSystemTimeNameHash = UINT64_C(5430963162341175395);
  BluetoothDeviceInfoReport& SetSystemTime(const int64_t value);

  static constexpr uint64_t kDeviceIdNameHash = UINT64_C(14998742047592455339);
  BluetoothDeviceInfoReport& SetDeviceId(const std::string& value);

  static constexpr uint64_t kDeviceTypeNameHash = UINT64_C(7795620498098931292);
  BluetoothDeviceInfoReport& SetDeviceType(const int64_t value);

  static constexpr uint64_t kDeviceClassNameHash = UINT64_C(4411699667986879574);
  BluetoothDeviceInfoReport& SetDeviceClass(const int64_t value);

  static constexpr uint64_t kDeviceCategoryNameHash = UINT64_C(9022598035322877834);
  BluetoothDeviceInfoReport& SetDeviceCategory(const int64_t value);

  static constexpr uint64_t kVendorIdNameHash = UINT64_C(7982341394845147735);
  BluetoothDeviceInfoReport& SetVendorId(const int64_t value);

  static constexpr uint64_t kVendorIdSourceNameHash = UINT64_C(11271343156353958088);
  BluetoothDeviceInfoReport& SetVendorIdSource(const int64_t value);

  static constexpr uint64_t kProductIdNameHash = UINT64_C(3765840483194334735);
  BluetoothDeviceInfoReport& SetProductId(const int64_t value);

  static constexpr uint64_t kProductVersionNameHash = UINT64_C(13046660159880260301);
  BluetoothDeviceInfoReport& SetProductVersion(const int64_t value);

};

class BRILLO_EXPORT BluetoothAudioQualityReport final : public ::metrics::structured::EventBase {
 public:
  BluetoothAudioQualityReport();
  ~BluetoothAudioQualityReport() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(1658296165039992926);
  static constexpr uint64_t kProjectNameHash = UINT64_C(9074739597929991885);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kBootIdNameHash = UINT64_C(9983133050293312198);
  BluetoothAudioQualityReport& SetBootId(const std::string& value);

  static constexpr uint64_t kSystemTimeNameHash = UINT64_C(5430963162341175395);
  BluetoothAudioQualityReport& SetSystemTime(const int64_t value);

  static constexpr uint64_t kDeviceIdNameHash = UINT64_C(14998742047592455339);
  BluetoothAudioQualityReport& SetDeviceId(const std::string& value);

  static constexpr uint64_t kProfileNameHash = UINT64_C(14765504761742342519);
  BluetoothAudioQualityReport& SetProfile(const int64_t value);

  static constexpr uint64_t kQualityTypeNameHash = UINT64_C(17628057088911476486);
  BluetoothAudioQualityReport& SetQualityType(const int64_t value);

  static constexpr uint64_t kAverageNameHash = UINT64_C(12792884953155676512);
  BluetoothAudioQualityReport& SetAverage(const int64_t value);

  static constexpr uint64_t kStdDevNameHash = UINT64_C(5713238848873808269);
  BluetoothAudioQualityReport& SetStdDev(const int64_t value);

  static constexpr uint64_t kPercentile95NameHash = UINT64_C(18351270367364284124);
  BluetoothAudioQualityReport& SetPercentile95(const int64_t value);

};

class BRILLO_EXPORT BluetoothChipsetInfoReport final : public ::metrics::structured::EventBase {
 public:
  BluetoothChipsetInfoReport();
  ~BluetoothChipsetInfoReport() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(16129006935014876138);
  static constexpr uint64_t kProjectNameHash = UINT64_C(9074739597929991885);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kBootIdNameHash = UINT64_C(9983133050293312198);
  BluetoothChipsetInfoReport& SetBootId(const std::string& value);

  static constexpr uint64_t kVendorIdNameHash = UINT64_C(7982341394845147735);
  BluetoothChipsetInfoReport& SetVendorId(const int64_t value);

  static constexpr uint64_t kProductIdNameHash = UINT64_C(3765840483194334735);
  BluetoothChipsetInfoReport& SetProductId(const int64_t value);

  static constexpr uint64_t kTransportNameHash = UINT64_C(17721880626079387512);
  BluetoothChipsetInfoReport& SetTransport(const int64_t value);

  static constexpr uint64_t kChipsetStringHashValueNameHash = UINT64_C(5567784120503214630);
  BluetoothChipsetInfoReport& SetChipsetStringHashValue(const int64_t value);

};

}  // namespace bluetooth

namespace bluetooth_device {

class BRILLO_EXPORT BluetoothDeviceInfo final : public ::metrics::structured::EventBase {
 public:
  BluetoothDeviceInfo();
  ~BluetoothDeviceInfo() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(2982383022172587778);
  static constexpr uint64_t kProjectNameHash = UINT64_C(1745381000935843040);
  static constexpr IdType kIdType = IdType::kUnidentified;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kDeviceTypeNameHash = UINT64_C(7795620498098931292);
  BluetoothDeviceInfo& SetDeviceType(const int64_t value);

  static constexpr uint64_t kDeviceClassNameHash = UINT64_C(4411699667986879574);
  BluetoothDeviceInfo& SetDeviceClass(const int64_t value);

  static constexpr uint64_t kDeviceCategoryNameHash = UINT64_C(9022598035322877834);
  BluetoothDeviceInfo& SetDeviceCategory(const int64_t value);

  static constexpr uint64_t kVendorIdNameHash = UINT64_C(7982341394845147735);
  BluetoothDeviceInfo& SetVendorId(const int64_t value);

  static constexpr uint64_t kVendorIdSourceNameHash = UINT64_C(11271343156353958088);
  BluetoothDeviceInfo& SetVendorIdSource(const int64_t value);

  static constexpr uint64_t kProductIdNameHash = UINT64_C(3765840483194334735);
  BluetoothDeviceInfo& SetProductId(const int64_t value);

  static constexpr uint64_t kProductVersionNameHash = UINT64_C(13046660159880260301);
  BluetoothDeviceInfo& SetProductVersion(const int64_t value);

};

}  // namespace bluetooth_device

namespace bluetooth_chipset {

class BRILLO_EXPORT BluetoothChipsetInfo final : public ::metrics::structured::EventBase {
 public:
  BluetoothChipsetInfo();
  ~BluetoothChipsetInfo() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(15863163262883578450);
  static constexpr uint64_t kProjectNameHash = UINT64_C(11181229631788078243);
  static constexpr IdType kIdType = IdType::kUnidentified;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_RAW_STRING;

  static constexpr uint64_t kVendorIdNameHash = UINT64_C(7982341394845147735);
  BluetoothChipsetInfo& SetVendorId(const int64_t value);

  static constexpr uint64_t kProductIdNameHash = UINT64_C(3765840483194334735);
  BluetoothChipsetInfo& SetProductId(const int64_t value);

  static constexpr uint64_t kTransportNameHash = UINT64_C(17721880626079387512);
  BluetoothChipsetInfo& SetTransport(const int64_t value);

  static constexpr uint64_t kChipsetStringNameHash = UINT64_C(16660529255980526929);
  BluetoothChipsetInfo& SetChipsetString(const std::string& value);

};

}  // namespace bluetooth_chipset

namespace hardware_verifier {

class BRILLO_EXPORT HwVerificationReport final : public ::metrics::structured::EventBase {
 public:
  HwVerificationReport();
  ~HwVerificationReport() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(2834323400914921560);
  static constexpr uint64_t kProjectNameHash = UINT64_C(11294265225635075664);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kIsCompliantNameHash = UINT64_C(12836332056303855230);
  HwVerificationReport& SetIsCompliant(const int64_t value);

  static constexpr uint64_t kQualificationStatusDisplayPanelNameHash = UINT64_C(14807089032170983128);
  HwVerificationReport& SetQualificationStatusDisplayPanel(const int64_t value);

  static constexpr uint64_t kQualificationStatusStorageNameHash = UINT64_C(6061898696972760018);
  HwVerificationReport& SetQualificationStatusStorage(const int64_t value);

};

class BRILLO_EXPORT ComponentInfo final : public ::metrics::structured::EventBase {
 public:
  ComponentInfo();
  ~ComponentInfo() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(7901409434669589766);
  static constexpr uint64_t kProjectNameHash = UINT64_C(11294265225635075664);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kComponentCategoryNameHash = UINT64_C(6840617904732463222);
  ComponentInfo& SetComponentCategory(const int64_t value);

  static constexpr uint64_t kDisplayPanelVendorNameHash = UINT64_C(6647879576829928130);
  ComponentInfo& SetDisplayPanelVendor(const int64_t value);

  static constexpr uint64_t kDisplayPanelProductIdNameHash = UINT64_C(4333866374950481047);
  ComponentInfo& SetDisplayPanelProductId(const int64_t value);

  static constexpr uint64_t kDisplayPanelHeightNameHash = UINT64_C(5381484897643542489);
  ComponentInfo& SetDisplayPanelHeight(const int64_t value);

  static constexpr uint64_t kDisplayPanelWidthNameHash = UINT64_C(2683133854057537060);
  ComponentInfo& SetDisplayPanelWidth(const int64_t value);

  static constexpr uint64_t kStorageMmcManfidNameHash = UINT64_C(3658527411330783922);
  ComponentInfo& SetStorageMmcManfid(const int64_t value);

  static constexpr uint64_t kStorageMmcHwrevNameHash = UINT64_C(9255816344494856668);
  ComponentInfo& SetStorageMmcHwrev(const int64_t value);

  static constexpr uint64_t kStorageMmcOemidNameHash = UINT64_C(15487174416604640309);
  ComponentInfo& SetStorageMmcOemid(const int64_t value);

  static constexpr uint64_t kStorageMmcPrvNameHash = UINT64_C(6362008749797374891);
  ComponentInfo& SetStorageMmcPrv(const int64_t value);

  static constexpr uint64_t kStoragePciVendorNameHash = UINT64_C(15576586824452424376);
  ComponentInfo& SetStoragePciVendor(const int64_t value);

  static constexpr uint64_t kStoragePciDeviceNameHash = UINT64_C(5646923230218809814);
  ComponentInfo& SetStoragePciDevice(const int64_t value);

  static constexpr uint64_t kStoragePciClassNameHash = UINT64_C(15622462130487462637);
  ComponentInfo& SetStoragePciClass(const int64_t value);

};

}  // namespace hardware_verifier

namespace cellular {

class BRILLO_EXPORT CellularConnectionAttempt final : public ::metrics::structured::EventBase {
 public:
  CellularConnectionAttempt();
  ~CellularConnectionAttempt() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(9565573741214161702);
  static constexpr uint64_t kProjectNameHash = UINT64_C(8206859287963243715);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kapn_idNameHash = UINT64_C(16969126494759758697);
  CellularConnectionAttempt& Setapn_id(const int64_t value);

  static constexpr uint64_t kipv4_config_methodNameHash = UINT64_C(9076171686243363883);
  CellularConnectionAttempt& Setipv4_config_method(const int64_t value);

  static constexpr uint64_t kipv6_config_methodNameHash = UINT64_C(1716075125711039121);
  CellularConnectionAttempt& Setipv6_config_method(const int64_t value);

  static constexpr uint64_t kconnect_resultNameHash = UINT64_C(15598723620146594619);
  CellularConnectionAttempt& Setconnect_result(const int64_t value);

  static constexpr uint64_t khome_mccmncNameHash = UINT64_C(37695558241520739);
  CellularConnectionAttempt& Sethome_mccmnc(const int64_t value);

  static constexpr uint64_t kserving_mccmncNameHash = UINT64_C(12771439443288387275);
  CellularConnectionAttempt& Setserving_mccmnc(const int64_t value);

  static constexpr uint64_t kroaming_stateNameHash = UINT64_C(532797944946872246);
  CellularConnectionAttempt& Setroaming_state(const int64_t value);

  static constexpr uint64_t kuse_attach_apnNameHash = UINT64_C(9693172311959236696);
  CellularConnectionAttempt& Setuse_attach_apn(const int64_t value);

  static constexpr uint64_t kapn_sourceNameHash = UINT64_C(17270104400182726796);
  CellularConnectionAttempt& Setapn_source(const int64_t value);

  static constexpr uint64_t ktech_usedNameHash = UINT64_C(16667945462103010669);
  CellularConnectionAttempt& Settech_used(const int64_t value);

  static constexpr uint64_t kiccid_lengthNameHash = UINT64_C(5784223339536231838);
  CellularConnectionAttempt& Seticcid_length(const int64_t value);

  static constexpr uint64_t ksim_typeNameHash = UINT64_C(5174493250357414186);
  CellularConnectionAttempt& Setsim_type(const int64_t value);

  static constexpr uint64_t kmodem_stateNameHash = UINT64_C(17447318209902125520);
  CellularConnectionAttempt& Setmodem_state(const int64_t value);

  static constexpr uint64_t kconnect_timeNameHash = UINT64_C(15404119718930226429);
  CellularConnectionAttempt& Setconnect_time(const int64_t value);

  static constexpr uint64_t kscan_connect_timeNameHash = UINT64_C(1148666456833482689);
  CellularConnectionAttempt& Setscan_connect_time(const int64_t value);

  static constexpr uint64_t kdetailed_errorNameHash = UINT64_C(1755108877035597562);
  CellularConnectionAttempt& Setdetailed_error(const int64_t value);

};

class BRILLO_EXPORT ModemFwdFwInstallResult final : public ::metrics::structured::EventBase {
 public:
  ModemFwdFwInstallResult();
  ~ModemFwdFwInstallResult() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(14156919410880982639);
  static constexpr uint64_t kProjectNameHash = UINT64_C(8206859287963243715);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kfirmware_typesNameHash = UINT64_C(9912504727039983873);
  ModemFwdFwInstallResult& Setfirmware_types(const int64_t value);

  static constexpr uint64_t kfw_install_resultNameHash = UINT64_C(10120023257186796185);
  ModemFwdFwInstallResult& Setfw_install_result(const int64_t value);

};

}  // namespace cellular

namespace rmad {

class BRILLO_EXPORT ShimlessRmaReport final : public ::metrics::structured::EventBase {
 public:
  ShimlessRmaReport();
  ~ShimlessRmaReport() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(16290457139838424490);
  static constexpr uint64_t kProjectNameHash = UINT64_C(9675127341789951965);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kOverallTimeNameHash = UINT64_C(9999132872938351554);
  ShimlessRmaReport& SetOverallTime(const int64_t value);

  static constexpr uint64_t kRunningTimeNameHash = UINT64_C(4417369112820092838);
  ShimlessRmaReport& SetRunningTime(const int64_t value);

  static constexpr uint64_t kIsCompleteNameHash = UINT64_C(13430706429255306620);
  ShimlessRmaReport& SetIsComplete(const int64_t value);

  static constexpr uint64_t kRoVerificationNameHash = UINT64_C(18221210148763351576);
  ShimlessRmaReport& SetRoVerification(const int64_t value);

  static constexpr uint64_t kReturningOwnerNameHash = UINT64_C(12951406561128878647);
  ShimlessRmaReport& SetReturningOwner(const int64_t value);

  static constexpr uint64_t kMainboardReplacementNameHash = UINT64_C(9805118565725983617);
  ShimlessRmaReport& SetMainboardReplacement(const int64_t value);

  static constexpr uint64_t kWriteProtectDisableMethodNameHash = UINT64_C(3945735952585306939);
  ShimlessRmaReport& SetWriteProtectDisableMethod(const int64_t value);

};

class BRILLO_EXPORT ReplacedComponent final : public ::metrics::structured::EventBase {
 public:
  ReplacedComponent();
  ~ReplacedComponent() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(18142902924169883861);
  static constexpr uint64_t kProjectNameHash = UINT64_C(9675127341789951965);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kComponentCategoryNameHash = UINT64_C(6840617904732463222);
  ReplacedComponent& SetComponentCategory(const int64_t value);

};

class BRILLO_EXPORT OccurredError final : public ::metrics::structured::EventBase {
 public:
  OccurredError();
  ~OccurredError() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(11339814705699381436);
  static constexpr uint64_t kProjectNameHash = UINT64_C(9675127341789951965);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kErrorTypeNameHash = UINT64_C(9540451424322945387);
  OccurredError& SetErrorType(const int64_t value);

};

class BRILLO_EXPORT AdditionalActivity final : public ::metrics::structured::EventBase {
 public:
  AdditionalActivity();
  ~AdditionalActivity() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(2928394770253852778);
  static constexpr uint64_t kProjectNameHash = UINT64_C(9675127341789951965);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kActivityTypeNameHash = UINT64_C(3974259668746749924);
  AdditionalActivity& SetActivityType(const int64_t value);

};

}  // namespace rmad

namespace wi_fi_chipset {

class BRILLO_EXPORT WiFiChipsetInfo final : public ::metrics::structured::EventBase {
 public:
  WiFiChipsetInfo();
  ~WiFiChipsetInfo() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(8949599978721997824);
  static constexpr uint64_t kProjectNameHash = UINT64_C(4690103929823698613);
  static constexpr IdType kIdType = IdType::kUnidentified;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kEventVersionNameHash = UINT64_C(16640453375065674525);
  WiFiChipsetInfo& SetEventVersion(const int64_t value);

  static constexpr uint64_t kVendorIdNameHash = UINT64_C(7982341394845147735);
  WiFiChipsetInfo& SetVendorId(const int64_t value);

  static constexpr uint64_t kProductIdNameHash = UINT64_C(3765840483194334735);
  WiFiChipsetInfo& SetProductId(const int64_t value);

  static constexpr uint64_t kSubsystemIdNameHash = UINT64_C(1787939335700279301);
  WiFiChipsetInfo& SetSubsystemId(const int64_t value);

};

}  // namespace wi_fi_chipset

namespace wi_fi_ap {

class BRILLO_EXPORT WiFiAPInfo final : public ::metrics::structured::EventBase {
 public:
  WiFiAPInfo();
  ~WiFiAPInfo() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(3203698821781850467);
  static constexpr uint64_t kProjectNameHash = UINT64_C(7302676440391025918);
  static constexpr IdType kIdType = IdType::kUnidentified;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kEventVersionNameHash = UINT64_C(16640453375065674525);
  WiFiAPInfo& SetEventVersion(const int64_t value);

  static constexpr uint64_t kAPOUINameHash = UINT64_C(17648906605096151474);
  WiFiAPInfo& SetAPOUI(const int64_t value);

};

}  // namespace wi_fi_ap

namespace wi_fi {

class BRILLO_EXPORT WiFiAdapterStateChanged final : public ::metrics::structured::EventBase {
 public:
  WiFiAdapterStateChanged();
  ~WiFiAdapterStateChanged() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(712395881256357385);
  static constexpr uint64_t kProjectNameHash = UINT64_C(4320592646346933548);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kBootIdNameHash = UINT64_C(9983133050293312198);
  WiFiAdapterStateChanged& SetBootId(const std::string& value);

  static constexpr uint64_t kSystemTimeNameHash = UINT64_C(5430963162341175395);
  WiFiAdapterStateChanged& SetSystemTime(const int64_t value);

  static constexpr uint64_t kEventVersionNameHash = UINT64_C(16640453375065674525);
  WiFiAdapterStateChanged& SetEventVersion(const int64_t value);

  static constexpr uint64_t kAdapterStateNameHash = UINT64_C(12219887874367467564);
  WiFiAdapterStateChanged& SetAdapterState(const int64_t value);

  static constexpr uint64_t kVendorIdNameHash = UINT64_C(7982341394845147735);
  WiFiAdapterStateChanged& SetVendorId(const int64_t value);

  static constexpr uint64_t kProductIdNameHash = UINT64_C(3765840483194334735);
  WiFiAdapterStateChanged& SetProductId(const int64_t value);

  static constexpr uint64_t kSubsystemIdNameHash = UINT64_C(1787939335700279301);
  WiFiAdapterStateChanged& SetSubsystemId(const int64_t value);

};

class BRILLO_EXPORT WiFiConnectionAttempt final : public ::metrics::structured::EventBase {
 public:
  WiFiConnectionAttempt();
  ~WiFiConnectionAttempt() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(1666654794282642243);
  static constexpr uint64_t kProjectNameHash = UINT64_C(4320592646346933548);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kBootIdNameHash = UINT64_C(9983133050293312198);
  WiFiConnectionAttempt& SetBootId(const std::string& value);

  static constexpr uint64_t kSystemTimeNameHash = UINT64_C(5430963162341175395);
  WiFiConnectionAttempt& SetSystemTime(const int64_t value);

  static constexpr uint64_t kEventVersionNameHash = UINT64_C(16640453375065674525);
  WiFiConnectionAttempt& SetEventVersion(const int64_t value);

  static constexpr uint64_t kSessionTagNameHash = UINT64_C(17993910024827537162);
  WiFiConnectionAttempt& SetSessionTag(const int64_t value);

  static constexpr uint64_t kAttemptTypeNameHash = UINT64_C(1076825646773901714);
  WiFiConnectionAttempt& SetAttemptType(const int64_t value);

  static constexpr uint64_t kAPPhyModeNameHash = UINT64_C(10624366125648376523);
  WiFiConnectionAttempt& SetAPPhyMode(const int64_t value);

  static constexpr uint64_t kAPSecurityModeNameHash = UINT64_C(5344296387346893171);
  WiFiConnectionAttempt& SetAPSecurityMode(const int64_t value);

  static constexpr uint64_t kAPSecurityEAPInnerProtocolNameHash = UINT64_C(12558771549648493785);
  WiFiConnectionAttempt& SetAPSecurityEAPInnerProtocol(const int64_t value);

  static constexpr uint64_t kAPSecurityEAPOuterProtocolNameHash = UINT64_C(13976314105449930700);
  WiFiConnectionAttempt& SetAPSecurityEAPOuterProtocol(const int64_t value);

  static constexpr uint64_t kAPBandNameHash = UINT64_C(15945507885291025263);
  WiFiConnectionAttempt& SetAPBand(const int64_t value);

  static constexpr uint64_t kAPChannelNameHash = UINT64_C(9443718677209127399);
  WiFiConnectionAttempt& SetAPChannel(const int64_t value);

  static constexpr uint64_t kRSSINameHash = UINT64_C(7508615291271386745);
  WiFiConnectionAttempt& SetRSSI(const int64_t value);

  static constexpr uint64_t kSSIDNameHash = UINT64_C(939519157834106403);
  WiFiConnectionAttempt& SetSSID(const std::string& value);

  static constexpr uint64_t kSSIDProvisioningModeNameHash = UINT64_C(1488851835668942072);
  WiFiConnectionAttempt& SetSSIDProvisioningMode(const int64_t value);

  static constexpr uint64_t kSSIDHiddenNameHash = UINT64_C(1065718776176264714);
  WiFiConnectionAttempt& SetSSIDHidden(const int64_t value);

  static constexpr uint64_t kBSSIDNameHash = UINT64_C(5670702108860320605);
  WiFiConnectionAttempt& SetBSSID(const std::string& value);

  static constexpr uint64_t kAPOUINameHash = UINT64_C(17648906605096151474);
  WiFiConnectionAttempt& SetAPOUI(const int64_t value);

  static constexpr uint64_t kAP_80211krv_NLSSupportNameHash = UINT64_C(2466001655202338830);
  WiFiConnectionAttempt& SetAP_80211krv_NLSSupport(const int64_t value);

  static constexpr uint64_t kAP_80211krv_OTA_FTSupportNameHash = UINT64_C(3766376923419614227);
  WiFiConnectionAttempt& SetAP_80211krv_OTA_FTSupport(const int64_t value);

  static constexpr uint64_t kAP_80211krv_OTDS_FTSupportNameHash = UINT64_C(17226534418478032240);
  WiFiConnectionAttempt& SetAP_80211krv_OTDS_FTSupport(const int64_t value);

  static constexpr uint64_t kAP_80211krv_DMSSupportNameHash = UINT64_C(264625629166588074);
  WiFiConnectionAttempt& SetAP_80211krv_DMSSupport(const int64_t value);

  static constexpr uint64_t kAP_80211krv_BSSMaxIdleSupportNameHash = UINT64_C(10384705939500767290);
  WiFiConnectionAttempt& SetAP_80211krv_BSSMaxIdleSupport(const int64_t value);

  static constexpr uint64_t kAP_80211krv_BSSTMSupportNameHash = UINT64_C(11108539677176483011);
  WiFiConnectionAttempt& SetAP_80211krv_BSSTMSupport(const int64_t value);

  static constexpr uint64_t kAP_HS20SupportNameHash = UINT64_C(17650250833285491950);
  WiFiConnectionAttempt& SetAP_HS20Support(const int64_t value);

  static constexpr uint64_t kAP_HS20VersionNameHash = UINT64_C(15412572593867193316);
  WiFiConnectionAttempt& SetAP_HS20Version(const int64_t value);

  static constexpr uint64_t kAP_MBOSupportNameHash = UINT64_C(2357877664271108867);
  WiFiConnectionAttempt& SetAP_MBOSupport(const int64_t value);

};

class BRILLO_EXPORT WiFiConnectionAttemptResult final : public ::metrics::structured::EventBase {
 public:
  WiFiConnectionAttemptResult();
  ~WiFiConnectionAttemptResult() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(11158508809305650629);
  static constexpr uint64_t kProjectNameHash = UINT64_C(4320592646346933548);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kBootIdNameHash = UINT64_C(9983133050293312198);
  WiFiConnectionAttemptResult& SetBootId(const std::string& value);

  static constexpr uint64_t kSystemTimeNameHash = UINT64_C(5430963162341175395);
  WiFiConnectionAttemptResult& SetSystemTime(const int64_t value);

  static constexpr uint64_t kEventVersionNameHash = UINT64_C(16640453375065674525);
  WiFiConnectionAttemptResult& SetEventVersion(const int64_t value);

  static constexpr uint64_t kSessionTagNameHash = UINT64_C(17993910024827537162);
  WiFiConnectionAttemptResult& SetSessionTag(const int64_t value);

  static constexpr uint64_t kResultCodeNameHash = UINT64_C(16006853255194879345);
  WiFiConnectionAttemptResult& SetResultCode(const int64_t value);

};

class BRILLO_EXPORT WiFiIPConnectivityStatus final : public ::metrics::structured::EventBase {
 public:
  WiFiIPConnectivityStatus();
  ~WiFiIPConnectivityStatus() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(8628520796612200324);
  static constexpr uint64_t kProjectNameHash = UINT64_C(4320592646346933548);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kBootIdNameHash = UINT64_C(9983133050293312198);
  WiFiIPConnectivityStatus& SetBootId(const std::string& value);

  static constexpr uint64_t kSystemTimeNameHash = UINT64_C(5430963162341175395);
  WiFiIPConnectivityStatus& SetSystemTime(const int64_t value);

  static constexpr uint64_t kEventVersionNameHash = UINT64_C(16640453375065674525);
  WiFiIPConnectivityStatus& SetEventVersion(const int64_t value);

  static constexpr uint64_t kIPConnectivityStatusNameHash = UINT64_C(9272595525244154652);
  WiFiIPConnectivityStatus& SetIPConnectivityStatus(const int64_t value);

  static constexpr uint64_t kIPConnectivityTypeNameHash = UINT64_C(9400292009307729378);
  WiFiIPConnectivityStatus& SetIPConnectivityType(const int64_t value);

};

class BRILLO_EXPORT WiFiPortalDetectionStatus final : public ::metrics::structured::EventBase {
 public:
  WiFiPortalDetectionStatus();
  ~WiFiPortalDetectionStatus() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(1477634351488400735);
  static constexpr uint64_t kProjectNameHash = UINT64_C(4320592646346933548);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kBootIdNameHash = UINT64_C(9983133050293312198);
  WiFiPortalDetectionStatus& SetBootId(const std::string& value);

  static constexpr uint64_t kSystemTimeNameHash = UINT64_C(5430963162341175395);
  WiFiPortalDetectionStatus& SetSystemTime(const int64_t value);

  static constexpr uint64_t kEventVersionNameHash = UINT64_C(16640453375065674525);
  WiFiPortalDetectionStatus& SetEventVersion(const int64_t value);

  static constexpr uint64_t kPortalDetectionStatusNameHash = UINT64_C(3858682471204091838);
  WiFiPortalDetectionStatus& SetPortalDetectionStatus(const int64_t value);

};

class BRILLO_EXPORT WiFiConnectionEnd final : public ::metrics::structured::EventBase {
 public:
  WiFiConnectionEnd();
  ~WiFiConnectionEnd() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(16118400771523474582);
  static constexpr uint64_t kProjectNameHash = UINT64_C(4320592646346933548);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kBootIdNameHash = UINT64_C(9983133050293312198);
  WiFiConnectionEnd& SetBootId(const std::string& value);

  static constexpr uint64_t kSystemTimeNameHash = UINT64_C(5430963162341175395);
  WiFiConnectionEnd& SetSystemTime(const int64_t value);

  static constexpr uint64_t kEventVersionNameHash = UINT64_C(16640453375065674525);
  WiFiConnectionEnd& SetEventVersion(const int64_t value);

  static constexpr uint64_t kSessionTagNameHash = UINT64_C(17993910024827537162);
  WiFiConnectionEnd& SetSessionTag(const int64_t value);

  static constexpr uint64_t kDisconnectionTypeNameHash = UINT64_C(5489713198643466610);
  WiFiConnectionEnd& SetDisconnectionType(const int64_t value);

  static constexpr uint64_t kDisconnectionReasonCodeNameHash = UINT64_C(10425992208290386059);
  WiFiConnectionEnd& SetDisconnectionReasonCode(const int64_t value);

};

}  // namespace wi_fi

namespace test_project_one {

class BRILLO_EXPORT TestEventOne final : public ::metrics::structured::EventBase {
 public:
  TestEventOne();
  ~TestEventOne() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(16542188217976373364);
  static constexpr uint64_t kProjectNameHash = UINT64_C(16881314472396226433);
  static constexpr IdType kIdType = IdType::kUnidentified;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kTestMetricOneNameHash = UINT64_C(637929385654885975);
  TestEventOne& SetTestMetricOne(const std::string& value);

  static constexpr uint64_t kTestMetricTwoNameHash = UINT64_C(14083999144141567134);
  TestEventOne& SetTestMetricTwo(const int64_t value);

};

class BRILLO_EXPORT TestEventTwo final : public ::metrics::structured::EventBase {
 public:
  TestEventTwo();
  ~TestEventTwo() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(13768178553954802986);
  static constexpr uint64_t kProjectNameHash = UINT64_C(16881314472396226433);
  static constexpr IdType kIdType = IdType::kUnidentified;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kTestMetricThreeNameHash = UINT64_C(13469300759843809564);
  TestEventTwo& SetTestMetricThree(const int64_t value);

};

}  // namespace test_project_one

namespace test_project_two {

class BRILLO_EXPORT TestEventThree final : public ::metrics::structured::EventBase {
 public:
  TestEventThree();
  ~TestEventThree() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(18051195235939111613);
  static constexpr uint64_t kProjectNameHash = UINT64_C(5876808001962504629);
  static constexpr IdType kIdType = IdType::kUnidentified;
  static constexpr StructuredEventProto_EventType kEventType =
    StructuredEventProto_EventType_REGULAR;

  static constexpr uint64_t kTestMetricFourNameHash = UINT64_C(2917855408523247722);
  TestEventThree& SetTestMetricFour(const std::string& value);

};

}  // namespace test_project_two



}  // namespace events
}  // namespace structured
}  // namespace metrics

#endif  // METRICS_STRUCTURED_STRUCTURED_EVENTS_H