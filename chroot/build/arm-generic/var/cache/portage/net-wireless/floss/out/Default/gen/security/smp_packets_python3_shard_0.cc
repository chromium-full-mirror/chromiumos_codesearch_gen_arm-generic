#include <pybind11/pybind11.h>
#include <pybind11/stl.h>


#include "security/smp_packets.h"


#include "packet/raw_builder.h"


#include "hci/address_pybind11_type_caster.h"


namespace bluetooth {
namespace security {


using ::bluetooth::hci::Address;

using ::bluetooth::packet::BasePacketBuilder;using ::bluetooth::packet::BitInserter;using ::bluetooth::packet::CustomTypeChecker;using ::bluetooth::packet::Iterator;using ::bluetooth::packet::kLittleEndian;using ::bluetooth::packet::PacketBuilder;using ::bluetooth::packet::BaseStruct;using ::bluetooth::packet::PacketStruct;using ::bluetooth::packet::PacketView;using ::bluetooth::packet::RawBuilder;using ::bluetooth::packet::parser::ChecksumTypeChecker;

namespace py = pybind11;

void define_smp_packets_submodule_shard_0(py::module& m) {

py::enum_<Code>(m, "Code").value("PAIRING_REQUEST", Code::PAIRING_REQUEST).value("PAIRING_RESPONSE", Code::PAIRING_RESPONSE).value("PAIRING_CONFIRM", Code::PAIRING_CONFIRM).value("PAIRING_RANDOM", Code::PAIRING_RANDOM).value("PAIRING_FAILED", Code::PAIRING_FAILED).value("ENCRYPTION_INFORMATION", Code::ENCRYPTION_INFORMATION).value("CENTRAL_IDENTIFICATION", Code::CENTRAL_IDENTIFICATION).value("IDENTITY_INFORMATION", Code::IDENTITY_INFORMATION).value("IDENTITY_ADDRESS_INFORMATION", Code::IDENTITY_ADDRESS_INFORMATION).value("SIGNING_INFORMATION", Code::SIGNING_INFORMATION).value("SECURITY_REQUEST", Code::SECURITY_REQUEST).value("PAIRING_PUBLIC_KEY", Code::PAIRING_PUBLIC_KEY).value("PAIRING_DH_KEY_CHECK", Code::PAIRING_DH_KEY_CHECK).value("PAIRING_KEYPRESS_NOTIFICATION", Code::PAIRING_KEYPRESS_NOTIFICATION);


py::enum_<IoCapability>(m, "IoCapability").value("DISPLAY_ONLY", IoCapability::DISPLAY_ONLY).value("DISPLAY_YES_NO", IoCapability::DISPLAY_YES_NO).value("KEYBOARD_ONLY", IoCapability::KEYBOARD_ONLY).value("NO_INPUT_NO_OUTPUT", IoCapability::NO_INPUT_NO_OUTPUT).value("KEYBOARD_DISPLAY", IoCapability::KEYBOARD_DISPLAY);


py::enum_<OobDataFlag>(m, "OobDataFlag").value("NOT_PRESENT", OobDataFlag::NOT_PRESENT).value("PRESENT", OobDataFlag::PRESENT);


py::enum_<BondingFlags>(m, "BondingFlags").value("NO_BONDING", BondingFlags::NO_BONDING).value("BONDING", BondingFlags::BONDING);


py::enum_<PairingFailedReason>(m, "PairingFailedReason").value("PASSKEY_ENTRY_FAILED", PairingFailedReason::PASSKEY_ENTRY_FAILED).value("OOB_NOT_AVAILABLE", PairingFailedReason::OOB_NOT_AVAILABLE).value("AUTHENTICATION_REQUIREMENTS", PairingFailedReason::AUTHENTICATION_REQUIREMENTS).value("CONFIRM_VALUE_FAILED", PairingFailedReason::CONFIRM_VALUE_FAILED).value("PAIRING_NOT_SUPPORTED", PairingFailedReason::PAIRING_NOT_SUPPORTED).value("ENCRYPTION_KEY_SIZE", PairingFailedReason::ENCRYPTION_KEY_SIZE).value("COMMAND_NOT_SUPPORTED", PairingFailedReason::COMMAND_NOT_SUPPORTED).value("UNSPECIFIED_REASON", PairingFailedReason::UNSPECIFIED_REASON).value("REPEATED_ATTEMPTS", PairingFailedReason::REPEATED_ATTEMPTS).value("INVALID_PARAMETERS", PairingFailedReason::INVALID_PARAMETERS).value("DHKEY_CHECK_FAILED", PairingFailedReason::DHKEY_CHECK_FAILED).value("NUMERIC_COMPARISON_FAILED", PairingFailedReason::NUMERIC_COMPARISON_FAILED).value("BR_EDR_PAIRING_IN_PROGRESS", PairingFailedReason::BR_EDR_PAIRING_IN_PROGRESS).value("CROSS_TRANSPORT_KEY_DERIVATION_NOT_ALLOWED", PairingFailedReason::CROSS_TRANSPORT_KEY_DERIVATION_NOT_ALLOWED);


py::enum_<AddrType>(m, "AddrType").value("PUBLIC", AddrType::PUBLIC).value("STATIC_RANDOM", AddrType::STATIC_RANDOM);


py::enum_<KeypressNotificationType>(m, "KeypressNotificationType").value("ENTRY_STARTED", KeypressNotificationType::ENTRY_STARTED).value("DIGIT_ENTERED", KeypressNotificationType::DIGIT_ENTERED).value("DIGIT_ERASED", KeypressNotificationType::DIGIT_ERASED).value("CLEARED", KeypressNotificationType::CLEARED).value("ENTRY_COMPLETED", KeypressNotificationType::ENTRY_COMPLETED);


py::class_<CommandView, PacketView<kLittleEndian>>(m, "CommandView").def(py::init([](PacketView<kLittleEndian> parent) {auto view =CommandView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&CommandView::Create)).def("GetCode", &CommandView::GetCode).def("GetPayload", &CommandView::GetPayload).def("IsValid", &CommandView::IsValid);


py::class_<PairingRequestView, CommandView>(m, "PairingRequestView").def(py::init([](CommandView parent) {auto view =PairingRequestView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&PairingRequestView::Create)).def("GetIoCapability", &PairingRequestView::GetIoCapability).def("GetOobDataFlag", &PairingRequestView::GetOobDataFlag).def("GetAuthReq", &PairingRequestView::GetAuthReq).def("GetMaximumEncryptionKeySize", &PairingRequestView::GetMaximumEncryptionKeySize).def("GetInitiatorKeyDistribution", &PairingRequestView::GetInitiatorKeyDistribution).def("GetResponderKeyDistribution", &PairingRequestView::GetResponderKeyDistribution).def("IsValid", &PairingRequestView::IsValid);


py::class_<PairingResponseView, CommandView>(m, "PairingResponseView").def(py::init([](CommandView parent) {auto view =PairingResponseView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&PairingResponseView::Create)).def("GetIoCapability", &PairingResponseView::GetIoCapability).def("GetOobDataFlag", &PairingResponseView::GetOobDataFlag).def("GetAuthReq", &PairingResponseView::GetAuthReq).def("GetMaximumEncryptionKeySize", &PairingResponseView::GetMaximumEncryptionKeySize).def("GetInitiatorKeyDistribution", &PairingResponseView::GetInitiatorKeyDistribution).def("GetResponderKeyDistribution", &PairingResponseView::GetResponderKeyDistribution).def("IsValid", &PairingResponseView::IsValid);


py::class_<PairingConfirmView, CommandView>(m, "PairingConfirmView").def(py::init([](CommandView parent) {auto view =PairingConfirmView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&PairingConfirmView::Create)).def("GetConfirmValue", &PairingConfirmView::GetConfirmValue).def("IsValid", &PairingConfirmView::IsValid);


py::class_<PairingRandomView, CommandView>(m, "PairingRandomView").def(py::init([](CommandView parent) {auto view =PairingRandomView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&PairingRandomView::Create)).def("GetRandomValue", &PairingRandomView::GetRandomValue).def("IsValid", &PairingRandomView::IsValid);


py::class_<PairingFailedView, CommandView>(m, "PairingFailedView").def(py::init([](CommandView parent) {auto view =PairingFailedView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&PairingFailedView::Create)).def("GetReason", &PairingFailedView::GetReason).def("IsValid", &PairingFailedView::IsValid);


py::class_<EncryptionInformationView, CommandView>(m, "EncryptionInformationView").def(py::init([](CommandView parent) {auto view =EncryptionInformationView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&EncryptionInformationView::Create)).def("GetLongTermKey", &EncryptionInformationView::GetLongTermKey).def("IsValid", &EncryptionInformationView::IsValid);


py::class_<CentralIdentificationView, CommandView>(m, "CentralIdentificationView").def(py::init([](CommandView parent) {auto view =CentralIdentificationView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&CentralIdentificationView::Create)).def("GetEdiv", &CentralIdentificationView::GetEdiv).def("GetRand", &CentralIdentificationView::GetRand).def("IsValid", &CentralIdentificationView::IsValid);


py::class_<IdentityInformationView, CommandView>(m, "IdentityInformationView").def(py::init([](CommandView parent) {auto view =IdentityInformationView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&IdentityInformationView::Create)).def("GetIdentityResolvingKey", &IdentityInformationView::GetIdentityResolvingKey).def("IsValid", &IdentityInformationView::IsValid);


py::class_<IdentityAddressInformationView, CommandView>(m, "IdentityAddressInformationView").def(py::init([](CommandView parent) {auto view =IdentityAddressInformationView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&IdentityAddressInformationView::Create)).def("GetAddrType", &IdentityAddressInformationView::GetAddrType).def("GetBdAddr", &IdentityAddressInformationView::GetBdAddr).def("IsValid", &IdentityAddressInformationView::IsValid);


py::class_<SigningInformationView, CommandView>(m, "SigningInformationView").def(py::init([](CommandView parent) {auto view =SigningInformationView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&SigningInformationView::Create)).def("GetSignatureKey", &SigningInformationView::GetSignatureKey).def("IsValid", &SigningInformationView::IsValid);


py::class_<SecurityRequestView, CommandView>(m, "SecurityRequestView").def(py::init([](CommandView parent) {auto view =SecurityRequestView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&SecurityRequestView::Create)).def("GetAuthReq", &SecurityRequestView::GetAuthReq).def("IsValid", &SecurityRequestView::IsValid);


py::class_<PairingPublicKeyView, CommandView>(m, "PairingPublicKeyView").def(py::init([](CommandView parent) {auto view =PairingPublicKeyView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&PairingPublicKeyView::Create)).def("GetPublicKeyX", &PairingPublicKeyView::GetPublicKeyX).def("GetPublicKeyY", &PairingPublicKeyView::GetPublicKeyY).def("IsValid", &PairingPublicKeyView::IsValid);


py::class_<PairingDhKeyCheckView, CommandView>(m, "PairingDhKeyCheckView").def(py::init([](CommandView parent) {auto view =PairingDhKeyCheckView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&PairingDhKeyCheckView::Create)).def("GetDhKeyCheck", &PairingDhKeyCheckView::GetDhKeyCheck).def("IsValid", &PairingDhKeyCheckView::IsValid);


py::class_<PairingKeypressNotificationView, CommandView>(m, "PairingKeypressNotificationView").def(py::init([](CommandView parent) {auto view =PairingKeypressNotificationView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&PairingKeypressNotificationView::Create)).def("GetNotificationType", &PairingKeypressNotificationView::GetNotificationType).def("IsValid", &PairingKeypressNotificationView::IsValid);


py::class_<CommandBuilder, PacketBuilder<kLittleEndian>, std::shared_ptr<CommandBuilder>>(m, "CommandBuilder").def(py::init([](Code code,std::shared_ptr<BasePacketBuilder> payload){std::unique_ptr<BasePacketBuilder> payload_move_only;std::vector<uint8_t> payload_bytes;payload_bytes.reserve(payload->size());BitInserter payload_bi(payload_bytes);payload->Serialize(payload_bi);payload_move_only = std::make_unique<RawBuilder>(payload_bytes);return CommandBuilder::Create(code,std::move(payload_move_only));})).def("Serialize", [](CommandBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<PairingRequestBuilder, CommandBuilder, std::shared_ptr<PairingRequestBuilder>>(m, "PairingRequestBuilder").def(py::init([](IoCapability io_capability,OobDataFlag oob_data_flag,uint8_t auth_req,uint8_t maximum_encryption_key_size,uint8_t initiator_key_distribution,uint8_t responder_key_distribution){return PairingRequestBuilder::Create(io_capability,oob_data_flag,auth_req,maximum_encryption_key_size,initiator_key_distribution,responder_key_distribution);})).def("Serialize", [](PairingRequestBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<PairingResponseBuilder, CommandBuilder, std::shared_ptr<PairingResponseBuilder>>(m, "PairingResponseBuilder").def(py::init([](IoCapability io_capability,OobDataFlag oob_data_flag,uint8_t auth_req,uint8_t maximum_encryption_key_size,uint8_t initiator_key_distribution,uint8_t responder_key_distribution){return PairingResponseBuilder::Create(io_capability,oob_data_flag,auth_req,maximum_encryption_key_size,initiator_key_distribution,responder_key_distribution);})).def("Serialize", [](PairingResponseBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<PairingConfirmBuilder, CommandBuilder, std::shared_ptr<PairingConfirmBuilder>>(m, "PairingConfirmBuilder").def(py::init([](const std::array<uint8_t,16>& confirm_value){return PairingConfirmBuilder::Create(confirm_value);})).def("Serialize", [](PairingConfirmBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<PairingRandomBuilder, CommandBuilder, std::shared_ptr<PairingRandomBuilder>>(m, "PairingRandomBuilder").def(py::init([](const std::array<uint8_t,16>& random_value){return PairingRandomBuilder::Create(random_value);})).def("Serialize", [](PairingRandomBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<PairingFailedBuilder, CommandBuilder, std::shared_ptr<PairingFailedBuilder>>(m, "PairingFailedBuilder").def(py::init([](PairingFailedReason reason){return PairingFailedBuilder::Create(reason);})).def("Serialize", [](PairingFailedBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<EncryptionInformationBuilder, CommandBuilder, std::shared_ptr<EncryptionInformationBuilder>>(m, "EncryptionInformationBuilder").def(py::init([](const std::array<uint8_t,16>& long_term_key){return EncryptionInformationBuilder::Create(long_term_key);})).def("Serialize", [](EncryptionInformationBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<CentralIdentificationBuilder, CommandBuilder, std::shared_ptr<CentralIdentificationBuilder>>(m, "CentralIdentificationBuilder").def(py::init([](uint16_t ediv,const std::array<uint8_t,8>& rand){return CentralIdentificationBuilder::Create(ediv,rand);})).def("Serialize", [](CentralIdentificationBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<IdentityInformationBuilder, CommandBuilder, std::shared_ptr<IdentityInformationBuilder>>(m, "IdentityInformationBuilder").def(py::init([](const std::array<uint8_t,16>& identity_resolving_key){return IdentityInformationBuilder::Create(identity_resolving_key);})).def("Serialize", [](IdentityInformationBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<IdentityAddressInformationBuilder, CommandBuilder, std::shared_ptr<IdentityAddressInformationBuilder>>(m, "IdentityAddressInformationBuilder").def(py::init([](AddrType addr_type,Address bd_addr){return IdentityAddressInformationBuilder::Create(addr_type,bd_addr);})).def("Serialize", [](IdentityAddressInformationBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<SigningInformationBuilder, CommandBuilder, std::shared_ptr<SigningInformationBuilder>>(m, "SigningInformationBuilder").def(py::init([](const std::array<uint8_t,16>& signature_key){return SigningInformationBuilder::Create(signature_key);})).def("Serialize", [](SigningInformationBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<SecurityRequestBuilder, CommandBuilder, std::shared_ptr<SecurityRequestBuilder>>(m, "SecurityRequestBuilder").def(py::init([](uint8_t auth_req){return SecurityRequestBuilder::Create(auth_req);})).def("Serialize", [](SecurityRequestBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<PairingPublicKeyBuilder, CommandBuilder, std::shared_ptr<PairingPublicKeyBuilder>>(m, "PairingPublicKeyBuilder").def(py::init([](const std::array<uint8_t,32>& public_key_x,const std::array<uint8_t,32>& public_key_y){return PairingPublicKeyBuilder::Create(public_key_x,public_key_y);})).def("Serialize", [](PairingPublicKeyBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<PairingDhKeyCheckBuilder, CommandBuilder, std::shared_ptr<PairingDhKeyCheckBuilder>>(m, "PairingDhKeyCheckBuilder").def(py::init([](const std::array<uint8_t,16>& dh_key_check){return PairingDhKeyCheckBuilder::Create(dh_key_check);})).def("Serialize", [](PairingDhKeyCheckBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<PairingKeypressNotificationBuilder, CommandBuilder, std::shared_ptr<PairingKeypressNotificationBuilder>>(m, "PairingKeypressNotificationBuilder").def(py::init([](KeypressNotificationType notification_type){return PairingKeypressNotificationBuilder::Create(notification_type);})).def("Serialize", [](PairingKeypressNotificationBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


}

}  //namespace security
}  //namespace bluetooth
