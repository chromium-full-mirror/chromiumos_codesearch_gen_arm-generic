#include <pybind11/pybind11.h>
#include <pybind11/stl.h>


#include "l2cap/l2cap_packets.h"


#include "packet/raw_builder.h"




namespace bluetooth {
namespace l2cap {


using ::bluetooth::l2cap::Fcs;

using ::bluetooth::packet::BasePacketBuilder;using ::bluetooth::packet::BitInserter;using ::bluetooth::packet::CustomTypeChecker;using ::bluetooth::packet::Iterator;using ::bluetooth::packet::kLittleEndian;using ::bluetooth::packet::PacketBuilder;using ::bluetooth::packet::BaseStruct;using ::bluetooth::packet::PacketStruct;using ::bluetooth::packet::PacketView;using ::bluetooth::packet::RawBuilder;using ::bluetooth::packet::parser::ChecksumTypeChecker;

namespace py = pybind11;

void define_l2cap_packets_submodule_shard_0(py::module& m) {

py::enum_<Continuation>(m, "Continuation").value("END", Continuation::END).value("CONTINUE", Continuation::CONTINUE);


py::enum_<FrameType>(m, "FrameType").value("I_FRAME", FrameType::I_FRAME).value("S_FRAME", FrameType::S_FRAME);


py::enum_<SupervisoryFunction>(m, "SupervisoryFunction").value("RECEIVER_READY", SupervisoryFunction::RECEIVER_READY).value("REJECT", SupervisoryFunction::REJECT).value("RECEIVER_NOT_READY", SupervisoryFunction::RECEIVER_NOT_READY).value("SELECT_REJECT", SupervisoryFunction::SELECT_REJECT);


py::enum_<RetransmissionDisable>(m, "RetransmissionDisable").value("NORMAL", RetransmissionDisable::NORMAL).value("DISABLE", RetransmissionDisable::DISABLE);


py::enum_<SegmentationAndReassembly>(m, "SegmentationAndReassembly").value("UNSEGMENTED", SegmentationAndReassembly::UNSEGMENTED).value("START", SegmentationAndReassembly::START).value("END", SegmentationAndReassembly::END).value("CONTINUATION", SegmentationAndReassembly::CONTINUATION);


py::enum_<Poll>(m, "Poll").value("NOT_SET", Poll::NOT_SET).value("POLL", Poll::POLL);


py::enum_<Final>(m, "Final").value("NOT_SET", Final::NOT_SET).value("POLL_RESPONSE", Final::POLL_RESPONSE);


py::enum_<CommandCode>(m, "CommandCode").value("COMMAND_REJECT", CommandCode::COMMAND_REJECT).value("CONNECTION_REQUEST", CommandCode::CONNECTION_REQUEST).value("CONNECTION_RESPONSE", CommandCode::CONNECTION_RESPONSE).value("CONFIGURATION_REQUEST", CommandCode::CONFIGURATION_REQUEST).value("CONFIGURATION_RESPONSE", CommandCode::CONFIGURATION_RESPONSE).value("DISCONNECTION_REQUEST", CommandCode::DISCONNECTION_REQUEST).value("DISCONNECTION_RESPONSE", CommandCode::DISCONNECTION_RESPONSE).value("ECHO_REQUEST", CommandCode::ECHO_REQUEST).value("ECHO_RESPONSE", CommandCode::ECHO_RESPONSE).value("INFORMATION_REQUEST", CommandCode::INFORMATION_REQUEST).value("INFORMATION_RESPONSE", CommandCode::INFORMATION_RESPONSE).value("CREATE_CHANNEL_REQUEST", CommandCode::CREATE_CHANNEL_REQUEST).value("CREATE_CHANNEL_RESPONSE", CommandCode::CREATE_CHANNEL_RESPONSE).value("MOVE_CHANNEL_REQUEST", CommandCode::MOVE_CHANNEL_REQUEST).value("MOVE_CHANNEL_RESPONSE", CommandCode::MOVE_CHANNEL_RESPONSE).value("MOVE_CHANNEL_CONFIRMATION_REQUEST", CommandCode::MOVE_CHANNEL_CONFIRMATION_REQUEST).value("MOVE_CHANNEL_CONFIRMATION_RESPONSE", CommandCode::MOVE_CHANNEL_CONFIRMATION_RESPONSE).value("FLOW_CONTROL_CREDIT", CommandCode::FLOW_CONTROL_CREDIT).value("CREDIT_BASED_CONNECTION_REQUEST", CommandCode::CREDIT_BASED_CONNECTION_REQUEST).value("CREDIT_BASED_CONNECTION_RESPONSE", CommandCode::CREDIT_BASED_CONNECTION_RESPONSE).value("CREDIT_BASED_RECONFIGURE_REQUEST", CommandCode::CREDIT_BASED_RECONFIGURE_REQUEST).value("CREDIT_BASED_RECONFIGURE_RESPONSE", CommandCode::CREDIT_BASED_RECONFIGURE_RESPONSE);


py::enum_<CommandRejectReason>(m, "CommandRejectReason").value("COMMAND_NOT_UNDERSTOOD", CommandRejectReason::COMMAND_NOT_UNDERSTOOD).value("SIGNALING_MTU_EXCEEDED", CommandRejectReason::SIGNALING_MTU_EXCEEDED).value("INVALID_CID_IN_REQUEST", CommandRejectReason::INVALID_CID_IN_REQUEST);


py::enum_<ConnectionResponseResult>(m, "ConnectionResponseResult").value("SUCCESS", ConnectionResponseResult::SUCCESS).value("PENDING", ConnectionResponseResult::PENDING).value("PSM_NOT_SUPPORTED", ConnectionResponseResult::PSM_NOT_SUPPORTED).value("SECURITY_BLOCK", ConnectionResponseResult::SECURITY_BLOCK).value("NO_RESOURCES_AVAILABLE", ConnectionResponseResult::NO_RESOURCES_AVAILABLE).value("INVALID_CID", ConnectionResponseResult::INVALID_CID).value("SOURCE_CID_ALREADY_ALLOCATED", ConnectionResponseResult::SOURCE_CID_ALREADY_ALLOCATED);


py::enum_<ConnectionResponseStatus>(m, "ConnectionResponseStatus").value("NO_FURTHER_INFORMATION_AVAILABLE", ConnectionResponseStatus::NO_FURTHER_INFORMATION_AVAILABLE).value("AUTHENTICATION_PENDING", ConnectionResponseStatus::AUTHENTICATION_PENDING).value("AUTHORIZATION_PENDING", ConnectionResponseStatus::AUTHORIZATION_PENDING);


py::enum_<ConfigurationOptionType>(m, "ConfigurationOptionType").value("MTU", ConfigurationOptionType::MTU).value("FLUSH_TIMEOUT", ConfigurationOptionType::FLUSH_TIMEOUT).value("QUALITY_OF_SERVICE", ConfigurationOptionType::QUALITY_OF_SERVICE).value("RETRANSMISSION_AND_FLOW_CONTROL", ConfigurationOptionType::RETRANSMISSION_AND_FLOW_CONTROL).value("FRAME_CHECK_SEQUENCE", ConfigurationOptionType::FRAME_CHECK_SEQUENCE).value("EXTENDED_FLOW_SPECIFICATION", ConfigurationOptionType::EXTENDED_FLOW_SPECIFICATION).value("EXTENDED_WINDOW_SIZE", ConfigurationOptionType::EXTENDED_WINDOW_SIZE);


py::enum_<ConfigurationOptionIsHint>(m, "ConfigurationOptionIsHint").value("OPTION_MUST_BE_RECOGNIZED", ConfigurationOptionIsHint::OPTION_MUST_BE_RECOGNIZED).value("OPTION_IS_A_HINT", ConfigurationOptionIsHint::OPTION_IS_A_HINT);


py::enum_<QosServiceType>(m, "QosServiceType").value("NO_TRAFFIC", QosServiceType::NO_TRAFFIC).value("BEST_EFFORT", QosServiceType::BEST_EFFORT).value("GUARANTEED", QosServiceType::GUARANTEED);


py::enum_<RetransmissionAndFlowControlModeOption>(m, "RetransmissionAndFlowControlModeOption").value("L2CAP_BASIC", RetransmissionAndFlowControlModeOption::L2CAP_BASIC).value("RETRANSMISSION", RetransmissionAndFlowControlModeOption::RETRANSMISSION).value("FLOW_CONTROL", RetransmissionAndFlowControlModeOption::FLOW_CONTROL).value("ENHANCED_RETRANSMISSION", RetransmissionAndFlowControlModeOption::ENHANCED_RETRANSMISSION).value("STREAMING", RetransmissionAndFlowControlModeOption::STREAMING);


py::enum_<FcsType>(m, "FcsType").value("NO_FCS", FcsType::NO_FCS).value("DEFAULT", FcsType::DEFAULT);


py::enum_<ConfigurationResponseResult>(m, "ConfigurationResponseResult").value("SUCCESS", ConfigurationResponseResult::SUCCESS).value("UNACCEPTABLE_PARAMETERS", ConfigurationResponseResult::UNACCEPTABLE_PARAMETERS).value("REJECTED", ConfigurationResponseResult::REJECTED).value("UNKNOWN_OPTIONS", ConfigurationResponseResult::UNKNOWN_OPTIONS).value("PENDING", ConfigurationResponseResult::PENDING).value("FLOW_SPEC_REJECTED", ConfigurationResponseResult::FLOW_SPEC_REJECTED);


py::enum_<InformationRequestInfoType>(m, "InformationRequestInfoType").value("CONNECTIONLESS_MTU", InformationRequestInfoType::CONNECTIONLESS_MTU).value("EXTENDED_FEATURES_SUPPORTED", InformationRequestInfoType::EXTENDED_FEATURES_SUPPORTED).value("FIXED_CHANNELS_SUPPORTED", InformationRequestInfoType::FIXED_CHANNELS_SUPPORTED);


py::enum_<InformationRequestResult>(m, "InformationRequestResult").value("SUCCESS", InformationRequestResult::SUCCESS).value("NOT_SUPPORTED", InformationRequestResult::NOT_SUPPORTED);


py::enum_<CreateChannelResponseResult>(m, "CreateChannelResponseResult").value("SUCCESS", CreateChannelResponseResult::SUCCESS).value("PENDING", CreateChannelResponseResult::PENDING).value("PSM_NOT_SUPPORTED", CreateChannelResponseResult::PSM_NOT_SUPPORTED).value("SECURITY_BLOCK", CreateChannelResponseResult::SECURITY_BLOCK).value("NO_RESOURCES_AVAILABLE", CreateChannelResponseResult::NO_RESOURCES_AVAILABLE).value("CONTROLLER_ID_NOT_SUPPORTED", CreateChannelResponseResult::CONTROLLER_ID_NOT_SUPPORTED).value("INVALID_CID", CreateChannelResponseResult::INVALID_CID).value("SOURCE_CID_ALREADY_ALLOCATED", CreateChannelResponseResult::SOURCE_CID_ALREADY_ALLOCATED);


py::enum_<CreateChannelResponseStatus>(m, "CreateChannelResponseStatus").value("NO_FURTHER_INFORMATION_AVAILABLE", CreateChannelResponseStatus::NO_FURTHER_INFORMATION_AVAILABLE).value("AUTHENTICATION_PENDING", CreateChannelResponseStatus::AUTHENTICATION_PENDING).value("AUTHORIZATION_PENDING", CreateChannelResponseStatus::AUTHORIZATION_PENDING);


py::enum_<MoveChannelResponseResult>(m, "MoveChannelResponseResult").value("SUCCESS", MoveChannelResponseResult::SUCCESS).value("PENDING", MoveChannelResponseResult::PENDING).value("CONTROLLER_ID_NOT_SUPPORTED", MoveChannelResponseResult::CONTROLLER_ID_NOT_SUPPORTED).value("NEW_CONTROLLER_ID_IS_SAME", MoveChannelResponseResult::NEW_CONTROLLER_ID_IS_SAME).value("CONFIGURATION_NOT_SUPPORTED", MoveChannelResponseResult::CONFIGURATION_NOT_SUPPORTED).value("CHANNEL_COLLISION", MoveChannelResponseResult::CHANNEL_COLLISION).value("CHANNEL_NOT_ALLOWED_TO_BE_MOVED", MoveChannelResponseResult::CHANNEL_NOT_ALLOWED_TO_BE_MOVED);


py::enum_<MoveChannelConfirmationResult>(m, "MoveChannelConfirmationResult").value("SUCCESS", MoveChannelConfirmationResult::SUCCESS).value("FAILURE", MoveChannelConfirmationResult::FAILURE);


py::enum_<CreditBasedConnectionResponseResult>(m, "CreditBasedConnectionResponseResult").value("SUCCESS", CreditBasedConnectionResponseResult::SUCCESS).value("SPSM_NOT_SUPPORTED", CreditBasedConnectionResponseResult::SPSM_NOT_SUPPORTED).value("SOME_REFUSED_NO_RESOURCES_AVAILABLE", CreditBasedConnectionResponseResult::SOME_REFUSED_NO_RESOURCES_AVAILABLE).value("ALL_REFUSED_INSUFFICIENT_AUTHENTICATION", CreditBasedConnectionResponseResult::ALL_REFUSED_INSUFFICIENT_AUTHENTICATION).value("ALL_REFUSED_INSUFFICIENT_AUTHORIZATION", CreditBasedConnectionResponseResult::ALL_REFUSED_INSUFFICIENT_AUTHORIZATION).value("ALL_REFUSED_INSUFFICIENT_ENCRYPTION_KEY_SIZE", CreditBasedConnectionResponseResult::ALL_REFUSED_INSUFFICIENT_ENCRYPTION_KEY_SIZE).value("ALL_REFUSED_INSUFFICIENT_ENCRYPTION", CreditBasedConnectionResponseResult::ALL_REFUSED_INSUFFICIENT_ENCRYPTION).value("SOME_REFUSED_INVALID_SOURCE_CID", CreditBasedConnectionResponseResult::SOME_REFUSED_INVALID_SOURCE_CID).value("SOME_REFUSED_SOURCE_CID_ALREADY_ALLOCATED", CreditBasedConnectionResponseResult::SOME_REFUSED_SOURCE_CID_ALREADY_ALLOCATED).value("ALL_REFUSED_UNACCEPTABLE_PARAMETERS", CreditBasedConnectionResponseResult::ALL_REFUSED_UNACCEPTABLE_PARAMETERS).value("ALL_REFUSED_INVALID_PARAMETERS", CreditBasedConnectionResponseResult::ALL_REFUSED_INVALID_PARAMETERS);


py::enum_<CreditBasedReconfigureResponseResult>(m, "CreditBasedReconfigureResponseResult").value("SUCCESS", CreditBasedReconfigureResponseResult::SUCCESS).value("MTU_NOT_ALLOWED", CreditBasedReconfigureResponseResult::MTU_NOT_ALLOWED).value("MPS_NOT_ALLOWED", CreditBasedReconfigureResponseResult::MPS_NOT_ALLOWED).value("INVALID_DESTINATION_CID", CreditBasedReconfigureResponseResult::INVALID_DESTINATION_CID).value("UNACCEPTABLE_PARAMETERS", CreditBasedReconfigureResponseResult::UNACCEPTABLE_PARAMETERS);


py::enum_<LeCommandCode>(m, "LeCommandCode").value("COMMAND_REJECT", LeCommandCode::COMMAND_REJECT).value("DISCONNECTION_REQUEST", LeCommandCode::DISCONNECTION_REQUEST).value("DISCONNECTION_RESPONSE", LeCommandCode::DISCONNECTION_RESPONSE).value("CONNECTION_PARAMETER_UPDATE_REQUEST", LeCommandCode::CONNECTION_PARAMETER_UPDATE_REQUEST).value("CONNECTION_PARAMETER_UPDATE_RESPONSE", LeCommandCode::CONNECTION_PARAMETER_UPDATE_RESPONSE).value("LE_CREDIT_BASED_CONNECTION_REQUEST", LeCommandCode::LE_CREDIT_BASED_CONNECTION_REQUEST).value("LE_CREDIT_BASED_CONNECTION_RESPONSE", LeCommandCode::LE_CREDIT_BASED_CONNECTION_RESPONSE).value("LE_FLOW_CONTROL_CREDIT", LeCommandCode::LE_FLOW_CONTROL_CREDIT).value("CREDIT_BASED_CONNECTION_REQUEST", LeCommandCode::CREDIT_BASED_CONNECTION_REQUEST).value("CREDIT_BASED_CONNECTION_RESPONSE", LeCommandCode::CREDIT_BASED_CONNECTION_RESPONSE).value("CREDIT_BASED_RECONFIGURE_REQUEST", LeCommandCode::CREDIT_BASED_RECONFIGURE_REQUEST).value("CREDIT_BASED_RECONFIGURE_RESPONSE", LeCommandCode::CREDIT_BASED_RECONFIGURE_RESPONSE);


py::enum_<ConnectionParameterUpdateResponseResult>(m, "ConnectionParameterUpdateResponseResult").value("ACCEPTED", ConnectionParameterUpdateResponseResult::ACCEPTED).value("REJECTED", ConnectionParameterUpdateResponseResult::REJECTED);


py::enum_<LeCreditBasedConnectionResponseResult>(m, "LeCreditBasedConnectionResponseResult").value("SUCCESS", LeCreditBasedConnectionResponseResult::SUCCESS).value("LE_PSM_NOT_SUPPORTED", LeCreditBasedConnectionResponseResult::LE_PSM_NOT_SUPPORTED).value("NO_RESOURCES_AVAILABLE", LeCreditBasedConnectionResponseResult::NO_RESOURCES_AVAILABLE).value("INSUFFICIENT_AUTHENTICATION", LeCreditBasedConnectionResponseResult::INSUFFICIENT_AUTHENTICATION).value("INSUFFICIENT_AUTHORIZATION", LeCreditBasedConnectionResponseResult::INSUFFICIENT_AUTHORIZATION).value("INSUFFICIENT_ENCRYPTION_KEY_SIZE", LeCreditBasedConnectionResponseResult::INSUFFICIENT_ENCRYPTION_KEY_SIZE).value("INSUFFICIENT_ENCRYPTION", LeCreditBasedConnectionResponseResult::INSUFFICIENT_ENCRYPTION).value("INVALID_SOURCE_CID", LeCreditBasedConnectionResponseResult::INVALID_SOURCE_CID).value("SOURCE_CID_ALREADY_ALLOCATED", LeCreditBasedConnectionResponseResult::SOURCE_CID_ALREADY_ALLOCATED).value("UNACCEPTABLE_PARAMETERS", LeCreditBasedConnectionResponseResult::UNACCEPTABLE_PARAMETERS);


py::class_<ConfigurationOption, PacketStruct<kLittleEndian>, std::shared_ptr<ConfigurationOption>>(m, "ConfigurationOption").def(py::init<>()).def("Serialize", [](ConfigurationOption& obj){std::vector<uint8_t> bytes;BitInserter bi(bytes);obj.Serialize(bi);return bytes;}).def("Parse", &ConfigurationOption::Parse).def("size", &ConfigurationOption::size).def_readwrite("type", &ConfigurationOption::type_).def_readwrite("is_hint", &ConfigurationOption::is_hint_);

py::class_<MtuConfigurationOption, ConfigurationOption, std::shared_ptr<MtuConfigurationOption>>(m, "MtuConfigurationOption").def(py::init<>()).def("Serialize", [](MtuConfigurationOption& obj){std::vector<uint8_t> bytes;BitInserter bi(bytes);obj.Serialize(bi);return bytes;}).def("Parse", &MtuConfigurationOption::Parse).def("size", &MtuConfigurationOption::size).def_readwrite("mtu", &MtuConfigurationOption::mtu_);

py::class_<FlushTimeoutConfigurationOption, ConfigurationOption, std::shared_ptr<FlushTimeoutConfigurationOption>>(m, "FlushTimeoutConfigurationOption").def(py::init<>()).def("Serialize", [](FlushTimeoutConfigurationOption& obj){std::vector<uint8_t> bytes;BitInserter bi(bytes);obj.Serialize(bi);return bytes;}).def("Parse", &FlushTimeoutConfigurationOption::Parse).def("size", &FlushTimeoutConfigurationOption::size).def_readwrite("flush_timeout", &FlushTimeoutConfigurationOption::flush_timeout_);

py::class_<QualityOfServiceConfigurationOption, ConfigurationOption, std::shared_ptr<QualityOfServiceConfigurationOption>>(m, "QualityOfServiceConfigurationOption").def(py::init<>()).def("Serialize", [](QualityOfServiceConfigurationOption& obj){std::vector<uint8_t> bytes;BitInserter bi(bytes);obj.Serialize(bi);return bytes;}).def("Parse", &QualityOfServiceConfigurationOption::Parse).def("size", &QualityOfServiceConfigurationOption::size).def_readwrite("service_type", &QualityOfServiceConfigurationOption::service_type_).def_readwrite("token_rate", &QualityOfServiceConfigurationOption::token_rate_).def_readwrite("token_bucket_size", &QualityOfServiceConfigurationOption::token_bucket_size_).def_readwrite("peak_bandwidth", &QualityOfServiceConfigurationOption::peak_bandwidth_).def_readwrite("latency", &QualityOfServiceConfigurationOption::latency_).def_readwrite("delay_variation", &QualityOfServiceConfigurationOption::delay_variation_);

py::class_<RetransmissionAndFlowControlConfigurationOption, ConfigurationOption, std::shared_ptr<RetransmissionAndFlowControlConfigurationOption>>(m, "RetransmissionAndFlowControlConfigurationOption").def(py::init<>()).def("Serialize", [](RetransmissionAndFlowControlConfigurationOption& obj){std::vector<uint8_t> bytes;BitInserter bi(bytes);obj.Serialize(bi);return bytes;}).def("Parse", &RetransmissionAndFlowControlConfigurationOption::Parse).def("size", &RetransmissionAndFlowControlConfigurationOption::size).def_readwrite("mode", &RetransmissionAndFlowControlConfigurationOption::mode_).def_readwrite("tx_window_size", &RetransmissionAndFlowControlConfigurationOption::tx_window_size_).def_readwrite("max_transmit", &RetransmissionAndFlowControlConfigurationOption::max_transmit_).def_readwrite("retransmission_time_out", &RetransmissionAndFlowControlConfigurationOption::retransmission_time_out_).def_readwrite("monitor_time_out", &RetransmissionAndFlowControlConfigurationOption::monitor_time_out_).def_readwrite("maximum_pdu_size", &RetransmissionAndFlowControlConfigurationOption::maximum_pdu_size_);

py::class_<FrameCheckSequenceOption, ConfigurationOption, std::shared_ptr<FrameCheckSequenceOption>>(m, "FrameCheckSequenceOption").def(py::init<>()).def("Serialize", [](FrameCheckSequenceOption& obj){std::vector<uint8_t> bytes;BitInserter bi(bytes);obj.Serialize(bi);return bytes;}).def("Parse", &FrameCheckSequenceOption::Parse).def("size", &FrameCheckSequenceOption::size).def_readwrite("fcs_type", &FrameCheckSequenceOption::fcs_type_);

py::class_<ExtendedFlowSpecificationOption, ConfigurationOption, std::shared_ptr<ExtendedFlowSpecificationOption>>(m, "ExtendedFlowSpecificationOption").def(py::init<>()).def("Serialize", [](ExtendedFlowSpecificationOption& obj){std::vector<uint8_t> bytes;BitInserter bi(bytes);obj.Serialize(bi);return bytes;}).def("Parse", &ExtendedFlowSpecificationOption::Parse).def("size", &ExtendedFlowSpecificationOption::size).def_readwrite("identifier", &ExtendedFlowSpecificationOption::identifier_).def_readwrite("service_type", &ExtendedFlowSpecificationOption::service_type_).def_readwrite("maximum_sdu_size", &ExtendedFlowSpecificationOption::maximum_sdu_size_).def_readwrite("sdu_interarrival_time", &ExtendedFlowSpecificationOption::sdu_interarrival_time_).def_readwrite("access_latency", &ExtendedFlowSpecificationOption::access_latency_).def_readwrite("flush_timeout", &ExtendedFlowSpecificationOption::flush_timeout_);

py::class_<ExtendedWindowSizeOption, ConfigurationOption, std::shared_ptr<ExtendedWindowSizeOption>>(m, "ExtendedWindowSizeOption").def(py::init<>()).def("Serialize", [](ExtendedWindowSizeOption& obj){std::vector<uint8_t> bytes;BitInserter bi(bytes);obj.Serialize(bi);return bytes;}).def("Parse", &ExtendedWindowSizeOption::Parse).def("size", &ExtendedWindowSizeOption::size).def_readwrite("max_window_size", &ExtendedWindowSizeOption::max_window_size_);

py::class_<BasicFrameView, PacketView<kLittleEndian>>(m, "BasicFrameView").def(py::init([](PacketView<kLittleEndian> parent) {auto view =BasicFrameView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&BasicFrameView::Create)).def("GetChannelId", &BasicFrameView::GetChannelId).def("GetPayload", &BasicFrameView::GetPayload).def("IsValid", &BasicFrameView::IsValid);


py::class_<BasicFrameWithFcsView, PacketView<kLittleEndian>>(m, "BasicFrameWithFcsView").def(py::init([](PacketView<kLittleEndian> parent) {auto view =BasicFrameWithFcsView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&BasicFrameWithFcsView::Create)).def("GetChannelId", &BasicFrameWithFcsView::GetChannelId).def("GetPayload", &BasicFrameWithFcsView::GetPayload).def("IsValid", &BasicFrameWithFcsView::IsValid);


py::class_<GroupFrameView, BasicFrameView>(m, "GroupFrameView").def(py::init([](BasicFrameView parent) {auto view =GroupFrameView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&GroupFrameView::Create)).def("GetPsm", &GroupFrameView::GetPsm).def("GetPayload", &GroupFrameView::GetPayload).def("IsValid", &GroupFrameView::IsValid);


py::class_<StandardFrameView, BasicFrameView>(m, "StandardFrameView").def(py::init([](BasicFrameView parent) {auto view =StandardFrameView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&StandardFrameView::Create)).def("GetFrameType", &StandardFrameView::GetFrameType).def("IsValid", &StandardFrameView::IsValid);


py::class_<StandardFrameWithFcsView, BasicFrameWithFcsView>(m, "StandardFrameWithFcsView").def(py::init([](BasicFrameWithFcsView parent) {auto view =StandardFrameWithFcsView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&StandardFrameWithFcsView::Create)).def("GetFrameType", &StandardFrameWithFcsView::GetFrameType).def("IsValid", &StandardFrameWithFcsView::IsValid);


py::class_<StandardSupervisoryFrameView, StandardFrameView>(m, "StandardSupervisoryFrameView").def(py::init([](StandardFrameView parent) {auto view =StandardSupervisoryFrameView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&StandardSupervisoryFrameView::Create)).def("GetS", &StandardSupervisoryFrameView::GetS).def("GetR", &StandardSupervisoryFrameView::GetR).def("GetReqSeq", &StandardSupervisoryFrameView::GetReqSeq).def("IsValid", &StandardSupervisoryFrameView::IsValid);


py::class_<StandardSupervisoryFrameWithFcsView, StandardFrameWithFcsView>(m, "StandardSupervisoryFrameWithFcsView").def(py::init([](StandardFrameWithFcsView parent) {auto view =StandardSupervisoryFrameWithFcsView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&StandardSupervisoryFrameWithFcsView::Create)).def("GetS", &StandardSupervisoryFrameWithFcsView::GetS).def("GetR", &StandardSupervisoryFrameWithFcsView::GetR).def("GetReqSeq", &StandardSupervisoryFrameWithFcsView::GetReqSeq).def("IsValid", &StandardSupervisoryFrameWithFcsView::IsValid);


py::class_<StandardInformationFrameView, StandardFrameView>(m, "StandardInformationFrameView").def(py::init([](StandardFrameView parent) {auto view =StandardInformationFrameView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&StandardInformationFrameView::Create)).def("GetTxSeq", &StandardInformationFrameView::GetTxSeq).def("GetR", &StandardInformationFrameView::GetR).def("GetReqSeq", &StandardInformationFrameView::GetReqSeq).def("GetSar", &StandardInformationFrameView::GetSar).def("GetPayload", &StandardInformationFrameView::GetPayload).def("IsValid", &StandardInformationFrameView::IsValid);


py::class_<StandardInformationFrameWithFcsView, StandardFrameWithFcsView>(m, "StandardInformationFrameWithFcsView").def(py::init([](StandardFrameWithFcsView parent) {auto view =StandardInformationFrameWithFcsView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&StandardInformationFrameWithFcsView::Create)).def("GetTxSeq", &StandardInformationFrameWithFcsView::GetTxSeq).def("GetR", &StandardInformationFrameWithFcsView::GetR).def("GetReqSeq", &StandardInformationFrameWithFcsView::GetReqSeq).def("GetSar", &StandardInformationFrameWithFcsView::GetSar).def("GetPayload", &StandardInformationFrameWithFcsView::GetPayload).def("IsValid", &StandardInformationFrameWithFcsView::IsValid);


py::class_<StandardInformationStartFrameView, StandardInformationFrameView>(m, "StandardInformationStartFrameView").def(py::init([](StandardInformationFrameView parent) {auto view =StandardInformationStartFrameView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&StandardInformationStartFrameView::Create)).def("GetL2capSduLength", &StandardInformationStartFrameView::GetL2capSduLength).def("GetPayload", &StandardInformationStartFrameView::GetPayload).def("IsValid", &StandardInformationStartFrameView::IsValid);


py::class_<StandardInformationStartFrameWithFcsView, StandardInformationFrameWithFcsView>(m, "StandardInformationStartFrameWithFcsView").def(py::init([](StandardInformationFrameWithFcsView parent) {auto view =StandardInformationStartFrameWithFcsView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&StandardInformationStartFrameWithFcsView::Create)).def("GetL2capSduLength", &StandardInformationStartFrameWithFcsView::GetL2capSduLength).def("GetPayload", &StandardInformationStartFrameWithFcsView::GetPayload).def("IsValid", &StandardInformationStartFrameWithFcsView::IsValid);


py::class_<EnhancedSupervisoryFrameView, StandardFrameView>(m, "EnhancedSupervisoryFrameView").def(py::init([](StandardFrameView parent) {auto view =EnhancedSupervisoryFrameView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&EnhancedSupervisoryFrameView::Create)).def("GetS", &EnhancedSupervisoryFrameView::GetS).def("GetP", &EnhancedSupervisoryFrameView::GetP).def("GetF", &EnhancedSupervisoryFrameView::GetF).def("GetReqSeq", &EnhancedSupervisoryFrameView::GetReqSeq).def("IsValid", &EnhancedSupervisoryFrameView::IsValid);


py::class_<EnhancedSupervisoryFrameWithFcsView, StandardFrameWithFcsView>(m, "EnhancedSupervisoryFrameWithFcsView").def(py::init([](StandardFrameWithFcsView parent) {auto view =EnhancedSupervisoryFrameWithFcsView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&EnhancedSupervisoryFrameWithFcsView::Create)).def("GetS", &EnhancedSupervisoryFrameWithFcsView::GetS).def("GetP", &EnhancedSupervisoryFrameWithFcsView::GetP).def("GetF", &EnhancedSupervisoryFrameWithFcsView::GetF).def("GetReqSeq", &EnhancedSupervisoryFrameWithFcsView::GetReqSeq).def("IsValid", &EnhancedSupervisoryFrameWithFcsView::IsValid);


py::class_<EnhancedInformationFrameView, StandardFrameView>(m, "EnhancedInformationFrameView").def(py::init([](StandardFrameView parent) {auto view =EnhancedInformationFrameView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&EnhancedInformationFrameView::Create)).def("GetTxSeq", &EnhancedInformationFrameView::GetTxSeq).def("GetF", &EnhancedInformationFrameView::GetF).def("GetReqSeq", &EnhancedInformationFrameView::GetReqSeq).def("GetSar", &EnhancedInformationFrameView::GetSar).def("GetPayload", &EnhancedInformationFrameView::GetPayload).def("IsValid", &EnhancedInformationFrameView::IsValid);


py::class_<EnhancedInformationFrameWithFcsView, StandardFrameWithFcsView>(m, "EnhancedInformationFrameWithFcsView").def(py::init([](StandardFrameWithFcsView parent) {auto view =EnhancedInformationFrameWithFcsView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&EnhancedInformationFrameWithFcsView::Create)).def("GetTxSeq", &EnhancedInformationFrameWithFcsView::GetTxSeq).def("GetF", &EnhancedInformationFrameWithFcsView::GetF).def("GetReqSeq", &EnhancedInformationFrameWithFcsView::GetReqSeq).def("GetSar", &EnhancedInformationFrameWithFcsView::GetSar).def("GetPayload", &EnhancedInformationFrameWithFcsView::GetPayload).def("IsValid", &EnhancedInformationFrameWithFcsView::IsValid);


py::class_<EnhancedInformationStartFrameView, EnhancedInformationFrameView>(m, "EnhancedInformationStartFrameView").def(py::init([](EnhancedInformationFrameView parent) {auto view =EnhancedInformationStartFrameView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&EnhancedInformationStartFrameView::Create)).def("GetL2capSduLength", &EnhancedInformationStartFrameView::GetL2capSduLength).def("GetPayload", &EnhancedInformationStartFrameView::GetPayload).def("IsValid", &EnhancedInformationStartFrameView::IsValid);


py::class_<EnhancedInformationStartFrameWithFcsView, EnhancedInformationFrameWithFcsView>(m, "EnhancedInformationStartFrameWithFcsView").def(py::init([](EnhancedInformationFrameWithFcsView parent) {auto view =EnhancedInformationStartFrameWithFcsView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&EnhancedInformationStartFrameWithFcsView::Create)).def("GetL2capSduLength", &EnhancedInformationStartFrameWithFcsView::GetL2capSduLength).def("GetPayload", &EnhancedInformationStartFrameWithFcsView::GetPayload).def("IsValid", &EnhancedInformationStartFrameWithFcsView::IsValid);


py::class_<ExtendedSupervisoryFrameView, StandardFrameView>(m, "ExtendedSupervisoryFrameView").def(py::init([](StandardFrameView parent) {auto view =ExtendedSupervisoryFrameView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&ExtendedSupervisoryFrameView::Create)).def("GetF", &ExtendedSupervisoryFrameView::GetF).def("GetReqSeq", &ExtendedSupervisoryFrameView::GetReqSeq).def("GetS", &ExtendedSupervisoryFrameView::GetS).def("GetP", &ExtendedSupervisoryFrameView::GetP).def("IsValid", &ExtendedSupervisoryFrameView::IsValid);


py::class_<ExtendedSupervisoryFrameWithFcsView, StandardFrameWithFcsView>(m, "ExtendedSupervisoryFrameWithFcsView").def(py::init([](StandardFrameWithFcsView parent) {auto view =ExtendedSupervisoryFrameWithFcsView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&ExtendedSupervisoryFrameWithFcsView::Create)).def("GetF", &ExtendedSupervisoryFrameWithFcsView::GetF).def("GetReqSeq", &ExtendedSupervisoryFrameWithFcsView::GetReqSeq).def("GetS", &ExtendedSupervisoryFrameWithFcsView::GetS).def("GetP", &ExtendedSupervisoryFrameWithFcsView::GetP).def("IsValid", &ExtendedSupervisoryFrameWithFcsView::IsValid);


py::class_<ExtendedInformationFrameView, StandardFrameView>(m, "ExtendedInformationFrameView").def(py::init([](StandardFrameView parent) {auto view =ExtendedInformationFrameView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&ExtendedInformationFrameView::Create)).def("GetF", &ExtendedInformationFrameView::GetF).def("GetReqSeq", &ExtendedInformationFrameView::GetReqSeq).def("GetSar", &ExtendedInformationFrameView::GetSar).def("GetTxSeq", &ExtendedInformationFrameView::GetTxSeq).def("GetPayload", &ExtendedInformationFrameView::GetPayload).def("IsValid", &ExtendedInformationFrameView::IsValid);


py::class_<ExtendedInformationFrameWithFcsView, StandardFrameWithFcsView>(m, "ExtendedInformationFrameWithFcsView").def(py::init([](StandardFrameWithFcsView parent) {auto view =ExtendedInformationFrameWithFcsView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&ExtendedInformationFrameWithFcsView::Create)).def("GetF", &ExtendedInformationFrameWithFcsView::GetF).def("GetReqSeq", &ExtendedInformationFrameWithFcsView::GetReqSeq).def("GetSar", &ExtendedInformationFrameWithFcsView::GetSar).def("GetTxSeq", &ExtendedInformationFrameWithFcsView::GetTxSeq).def("GetPayload", &ExtendedInformationFrameWithFcsView::GetPayload).def("IsValid", &ExtendedInformationFrameWithFcsView::IsValid);


py::class_<ExtendedInformationStartFrameView, ExtendedInformationFrameView>(m, "ExtendedInformationStartFrameView").def(py::init([](ExtendedInformationFrameView parent) {auto view =ExtendedInformationStartFrameView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&ExtendedInformationStartFrameView::Create)).def("GetL2capSduLength", &ExtendedInformationStartFrameView::GetL2capSduLength).def("GetPayload", &ExtendedInformationStartFrameView::GetPayload).def("IsValid", &ExtendedInformationStartFrameView::IsValid);


py::class_<ExtendedInformationStartFrameWithFcsView, ExtendedInformationFrameWithFcsView>(m, "ExtendedInformationStartFrameWithFcsView").def(py::init([](ExtendedInformationFrameWithFcsView parent) {auto view =ExtendedInformationStartFrameWithFcsView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&ExtendedInformationStartFrameWithFcsView::Create)).def("GetL2capSduLength", &ExtendedInformationStartFrameWithFcsView::GetL2capSduLength).def("GetPayload", &ExtendedInformationStartFrameWithFcsView::GetPayload).def("IsValid", &ExtendedInformationStartFrameWithFcsView::IsValid);


py::class_<FirstLeInformationFrameView, BasicFrameView>(m, "FirstLeInformationFrameView").def(py::init([](BasicFrameView parent) {auto view =FirstLeInformationFrameView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&FirstLeInformationFrameView::Create)).def("GetL2capSduLength", &FirstLeInformationFrameView::GetL2capSduLength).def("GetPayload", &FirstLeInformationFrameView::GetPayload).def("IsValid", &FirstLeInformationFrameView::IsValid);


py::class_<ControlFrameView, BasicFrameView>(m, "ControlFrameView").def(py::init([](BasicFrameView parent) {auto view =ControlFrameView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&ControlFrameView::Create)).def("GetPayload", &ControlFrameView::GetPayload).def("IsValid", &ControlFrameView::IsValid);


py::class_<ControlView, PacketView<kLittleEndian>>(m, "ControlView").def(py::init([](PacketView<kLittleEndian> parent) {auto view =ControlView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&ControlView::Create)).def("GetCode", &ControlView::GetCode).def("GetIdentifier", &ControlView::GetIdentifier).def("GetPayload", &ControlView::GetPayload).def("IsValid", &ControlView::IsValid);


py::class_<CommandRejectView, ControlView>(m, "CommandRejectView").def(py::init([](ControlView parent) {auto view =CommandRejectView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&CommandRejectView::Create)).def("GetReason", &CommandRejectView::GetReason).def("IsValid", &CommandRejectView::IsValid);


py::class_<CommandRejectNotUnderstoodView, CommandRejectView>(m, "CommandRejectNotUnderstoodView").def(py::init([](CommandRejectView parent) {auto view =CommandRejectNotUnderstoodView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&CommandRejectNotUnderstoodView::Create)).def("IsValid", &CommandRejectNotUnderstoodView::IsValid);


py::class_<CommandRejectMtuExceededView, CommandRejectView>(m, "CommandRejectMtuExceededView").def(py::init([](CommandRejectView parent) {auto view =CommandRejectMtuExceededView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&CommandRejectMtuExceededView::Create)).def("GetActualMtu", &CommandRejectMtuExceededView::GetActualMtu).def("IsValid", &CommandRejectMtuExceededView::IsValid);


py::class_<CommandRejectInvalidCidView, CommandRejectView>(m, "CommandRejectInvalidCidView").def(py::init([](CommandRejectView parent) {auto view =CommandRejectInvalidCidView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&CommandRejectInvalidCidView::Create)).def("GetLocalChannel", &CommandRejectInvalidCidView::GetLocalChannel).def("GetRemoteChannel", &CommandRejectInvalidCidView::GetRemoteChannel).def("IsValid", &CommandRejectInvalidCidView::IsValid);


py::class_<ConnectionRequestView, ControlView>(m, "ConnectionRequestView").def(py::init([](ControlView parent) {auto view =ConnectionRequestView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&ConnectionRequestView::Create)).def("GetPsm", &ConnectionRequestView::GetPsm).def("GetSourceCid", &ConnectionRequestView::GetSourceCid).def("IsValid", &ConnectionRequestView::IsValid);


py::class_<ConnectionResponseView, ControlView>(m, "ConnectionResponseView").def(py::init([](ControlView parent) {auto view =ConnectionResponseView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&ConnectionResponseView::Create)).def("GetDestinationCid", &ConnectionResponseView::GetDestinationCid).def("GetSourceCid", &ConnectionResponseView::GetSourceCid).def("GetResult", &ConnectionResponseView::GetResult).def("GetStatus", &ConnectionResponseView::GetStatus).def("IsValid", &ConnectionResponseView::IsValid);


py::class_<ConfigurationRequestView, ControlView>(m, "ConfigurationRequestView").def(py::init([](ControlView parent) {auto view =ConfigurationRequestView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&ConfigurationRequestView::Create)).def("GetDestinationCid", &ConfigurationRequestView::GetDestinationCid).def("GetContinuation", &ConfigurationRequestView::GetContinuation).def("GetConfig", &ConfigurationRequestView::GetConfig).def("IsValid", &ConfigurationRequestView::IsValid);


py::class_<ConfigurationResponseView, ControlView>(m, "ConfigurationResponseView").def(py::init([](ControlView parent) {auto view =ConfigurationResponseView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&ConfigurationResponseView::Create)).def("GetSourceCid", &ConfigurationResponseView::GetSourceCid).def("GetContinuation", &ConfigurationResponseView::GetContinuation).def("GetResult", &ConfigurationResponseView::GetResult).def("GetConfig", &ConfigurationResponseView::GetConfig).def("IsValid", &ConfigurationResponseView::IsValid);


py::class_<DisconnectionRequestView, ControlView>(m, "DisconnectionRequestView").def(py::init([](ControlView parent) {auto view =DisconnectionRequestView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&DisconnectionRequestView::Create)).def("GetDestinationCid", &DisconnectionRequestView::GetDestinationCid).def("GetSourceCid", &DisconnectionRequestView::GetSourceCid).def("IsValid", &DisconnectionRequestView::IsValid);


py::class_<DisconnectionResponseView, ControlView>(m, "DisconnectionResponseView").def(py::init([](ControlView parent) {auto view =DisconnectionResponseView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&DisconnectionResponseView::Create)).def("GetDestinationCid", &DisconnectionResponseView::GetDestinationCid).def("GetSourceCid", &DisconnectionResponseView::GetSourceCid).def("IsValid", &DisconnectionResponseView::IsValid);


py::class_<EchoRequestView, ControlView>(m, "EchoRequestView").def(py::init([](ControlView parent) {auto view =EchoRequestView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&EchoRequestView::Create)).def("GetPayload", &EchoRequestView::GetPayload).def("IsValid", &EchoRequestView::IsValid);


py::class_<EchoResponseView, ControlView>(m, "EchoResponseView").def(py::init([](ControlView parent) {auto view =EchoResponseView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&EchoResponseView::Create)).def("GetPayload", &EchoResponseView::GetPayload).def("IsValid", &EchoResponseView::IsValid);


py::class_<InformationRequestView, ControlView>(m, "InformationRequestView").def(py::init([](ControlView parent) {auto view =InformationRequestView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&InformationRequestView::Create)).def("GetInfoType", &InformationRequestView::GetInfoType).def("IsValid", &InformationRequestView::IsValid);


py::class_<InformationResponseView, ControlView>(m, "InformationResponseView").def(py::init([](ControlView parent) {auto view =InformationResponseView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&InformationResponseView::Create)).def("GetInfoType", &InformationResponseView::GetInfoType).def("GetResult", &InformationResponseView::GetResult).def("IsValid", &InformationResponseView::IsValid);


py::class_<InformationResponseConnectionlessMtuView, InformationResponseView>(m, "InformationResponseConnectionlessMtuView").def(py::init([](InformationResponseView parent) {auto view =InformationResponseConnectionlessMtuView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&InformationResponseConnectionlessMtuView::Create)).def("GetConnectionlessMtu", &InformationResponseConnectionlessMtuView::GetConnectionlessMtu).def("IsValid", &InformationResponseConnectionlessMtuView::IsValid);


py::class_<InformationResponseExtendedFeaturesView, InformationResponseView>(m, "InformationResponseExtendedFeaturesView").def(py::init([](InformationResponseView parent) {auto view =InformationResponseExtendedFeaturesView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&InformationResponseExtendedFeaturesView::Create)).def("GetFlowControlMode", &InformationResponseExtendedFeaturesView::GetFlowControlMode).def("GetRetransmissionMode", &InformationResponseExtendedFeaturesView::GetRetransmissionMode).def("GetBiDirectionalQoS", &InformationResponseExtendedFeaturesView::GetBiDirectionalQoS).def("GetEnhancedRetransmissionMode", &InformationResponseExtendedFeaturesView::GetEnhancedRetransmissionMode).def("GetStreamingMode", &InformationResponseExtendedFeaturesView::GetStreamingMode).def("GetFcsOption", &InformationResponseExtendedFeaturesView::GetFcsOption).def("GetExtendedFlowSpecificationForBrEdr", &InformationResponseExtendedFeaturesView::GetExtendedFlowSpecificationForBrEdr).def("GetFixedChannels", &InformationResponseExtendedFeaturesView::GetFixedChannels).def("GetExtendedWindowSize", &InformationResponseExtendedFeaturesView::GetExtendedWindowSize).def("GetUnicastConnectionlessDataReception", &InformationResponseExtendedFeaturesView::GetUnicastConnectionlessDataReception).def("GetEnhancedCreditBasedFlowControlMode", &InformationResponseExtendedFeaturesView::GetEnhancedCreditBasedFlowControlMode).def("IsValid", &InformationResponseExtendedFeaturesView::IsValid);


py::class_<InformationResponseFixedChannelsView, InformationResponseView>(m, "InformationResponseFixedChannelsView").def(py::init([](InformationResponseView parent) {auto view =InformationResponseFixedChannelsView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&InformationResponseFixedChannelsView::Create)).def("GetFixedChannels", &InformationResponseFixedChannelsView::GetFixedChannels).def("IsValid", &InformationResponseFixedChannelsView::IsValid);


py::class_<CreateChannelRequestView, ControlView>(m, "CreateChannelRequestView").def(py::init([](ControlView parent) {auto view =CreateChannelRequestView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&CreateChannelRequestView::Create)).def("GetPsm", &CreateChannelRequestView::GetPsm).def("GetSourceCid", &CreateChannelRequestView::GetSourceCid).def("GetControllerId", &CreateChannelRequestView::GetControllerId).def("IsValid", &CreateChannelRequestView::IsValid);


py::class_<CreateChannelResponseView, ControlView>(m, "CreateChannelResponseView").def(py::init([](ControlView parent) {auto view =CreateChannelResponseView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&CreateChannelResponseView::Create)).def("GetDestinationCid", &CreateChannelResponseView::GetDestinationCid).def("GetSourceCid", &CreateChannelResponseView::GetSourceCid).def("GetResult", &CreateChannelResponseView::GetResult).def("GetStatus", &CreateChannelResponseView::GetStatus).def("IsValid", &CreateChannelResponseView::IsValid);


py::class_<MoveChannelRequestView, ControlView>(m, "MoveChannelRequestView").def(py::init([](ControlView parent) {auto view =MoveChannelRequestView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&MoveChannelRequestView::Create)).def("GetInitiatorCid", &MoveChannelRequestView::GetInitiatorCid).def("GetDestControllerId", &MoveChannelRequestView::GetDestControllerId).def("IsValid", &MoveChannelRequestView::IsValid);


py::class_<MoveChannelResponseView, ControlView>(m, "MoveChannelResponseView").def(py::init([](ControlView parent) {auto view =MoveChannelResponseView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&MoveChannelResponseView::Create)).def("GetInitiatorCid", &MoveChannelResponseView::GetInitiatorCid).def("GetResult", &MoveChannelResponseView::GetResult).def("IsValid", &MoveChannelResponseView::IsValid);


py::class_<MoveChannelConfirmationRequestView, ControlView>(m, "MoveChannelConfirmationRequestView").def(py::init([](ControlView parent) {auto view =MoveChannelConfirmationRequestView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&MoveChannelConfirmationRequestView::Create)).def("GetInitiatorCid", &MoveChannelConfirmationRequestView::GetInitiatorCid).def("GetResult", &MoveChannelConfirmationRequestView::GetResult).def("IsValid", &MoveChannelConfirmationRequestView::IsValid);


py::class_<MoveChannelConfirmationResponseView, ControlView>(m, "MoveChannelConfirmationResponseView").def(py::init([](ControlView parent) {auto view =MoveChannelConfirmationResponseView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&MoveChannelConfirmationResponseView::Create)).def("GetInitiatorCid", &MoveChannelConfirmationResponseView::GetInitiatorCid).def("IsValid", &MoveChannelConfirmationResponseView::IsValid);


py::class_<FlowControlCreditView, ControlView>(m, "FlowControlCreditView").def(py::init([](ControlView parent) {auto view =FlowControlCreditView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&FlowControlCreditView::Create)).def("GetCid", &FlowControlCreditView::GetCid).def("GetCredits", &FlowControlCreditView::GetCredits).def("IsValid", &FlowControlCreditView::IsValid);


py::class_<CreditBasedConnectionRequestView, ControlView>(m, "CreditBasedConnectionRequestView").def(py::init([](ControlView parent) {auto view =CreditBasedConnectionRequestView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&CreditBasedConnectionRequestView::Create)).def("GetSpsm", &CreditBasedConnectionRequestView::GetSpsm).def("GetMtu", &CreditBasedConnectionRequestView::GetMtu).def("GetMps", &CreditBasedConnectionRequestView::GetMps).def("GetInitialCredits", &CreditBasedConnectionRequestView::GetInitialCredits).def("GetSourceCid", &CreditBasedConnectionRequestView::GetSourceCid).def("IsValid", &CreditBasedConnectionRequestView::IsValid);


py::class_<CreditBasedConnectionResponseView, ControlView>(m, "CreditBasedConnectionResponseView").def(py::init([](ControlView parent) {auto view =CreditBasedConnectionResponseView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&CreditBasedConnectionResponseView::Create)).def("GetMtu", &CreditBasedConnectionResponseView::GetMtu).def("GetMps", &CreditBasedConnectionResponseView::GetMps).def("GetInitialCredits", &CreditBasedConnectionResponseView::GetInitialCredits).def("GetResult", &CreditBasedConnectionResponseView::GetResult).def("GetDestinationCid", &CreditBasedConnectionResponseView::GetDestinationCid).def("IsValid", &CreditBasedConnectionResponseView::IsValid);


py::class_<CreditBasedReconfigureRequestView, ControlView>(m, "CreditBasedReconfigureRequestView").def(py::init([](ControlView parent) {auto view =CreditBasedReconfigureRequestView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&CreditBasedReconfigureRequestView::Create)).def("GetMtu", &CreditBasedReconfigureRequestView::GetMtu).def("GetMps", &CreditBasedReconfigureRequestView::GetMps).def("GetDestinationCid", &CreditBasedReconfigureRequestView::GetDestinationCid).def("IsValid", &CreditBasedReconfigureRequestView::IsValid);


py::class_<CreditBasedReconfigureResponseView, ControlView>(m, "CreditBasedReconfigureResponseView").def(py::init([](ControlView parent) {auto view =CreditBasedReconfigureResponseView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&CreditBasedReconfigureResponseView::Create)).def("GetResult", &CreditBasedReconfigureResponseView::GetResult).def("IsValid", &CreditBasedReconfigureResponseView::IsValid);


py::class_<LeControlFrameView, BasicFrameView>(m, "LeControlFrameView").def(py::init([](BasicFrameView parent) {auto view =LeControlFrameView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&LeControlFrameView::Create)).def("GetPayload", &LeControlFrameView::GetPayload).def("IsValid", &LeControlFrameView::IsValid);


py::class_<LeControlView, PacketView<kLittleEndian>>(m, "LeControlView").def(py::init([](PacketView<kLittleEndian> parent) {auto view =LeControlView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&LeControlView::Create)).def("GetCode", &LeControlView::GetCode).def("GetIdentifier", &LeControlView::GetIdentifier).def("GetPayload", &LeControlView::GetPayload).def("IsValid", &LeControlView::IsValid);


py::class_<LeCommandRejectView, LeControlView>(m, "LeCommandRejectView").def(py::init([](LeControlView parent) {auto view =LeCommandRejectView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&LeCommandRejectView::Create)).def("GetReason", &LeCommandRejectView::GetReason).def("GetPayload", &LeCommandRejectView::GetPayload).def("IsValid", &LeCommandRejectView::IsValid);


py::class_<LeCommandRejectNotUnderstoodView, LeCommandRejectView>(m, "LeCommandRejectNotUnderstoodView").def(py::init([](LeCommandRejectView parent) {auto view =LeCommandRejectNotUnderstoodView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&LeCommandRejectNotUnderstoodView::Create)).def("IsValid", &LeCommandRejectNotUnderstoodView::IsValid);


py::class_<LeCommandRejectMtuExceededView, LeCommandRejectView>(m, "LeCommandRejectMtuExceededView").def(py::init([](LeCommandRejectView parent) {auto view =LeCommandRejectMtuExceededView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&LeCommandRejectMtuExceededView::Create)).def("GetActualMtu", &LeCommandRejectMtuExceededView::GetActualMtu).def("IsValid", &LeCommandRejectMtuExceededView::IsValid);


py::class_<LeCommandRejectInvalidCidView, LeCommandRejectView>(m, "LeCommandRejectInvalidCidView").def(py::init([](LeCommandRejectView parent) {auto view =LeCommandRejectInvalidCidView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&LeCommandRejectInvalidCidView::Create)).def("GetLocalChannel", &LeCommandRejectInvalidCidView::GetLocalChannel).def("GetRemoteChannel", &LeCommandRejectInvalidCidView::GetRemoteChannel).def("IsValid", &LeCommandRejectInvalidCidView::IsValid);


py::class_<LeDisconnectionRequestView, LeControlView>(m, "LeDisconnectionRequestView").def(py::init([](LeControlView parent) {auto view =LeDisconnectionRequestView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&LeDisconnectionRequestView::Create)).def("GetDestinationCid", &LeDisconnectionRequestView::GetDestinationCid).def("GetSourceCid", &LeDisconnectionRequestView::GetSourceCid).def("IsValid", &LeDisconnectionRequestView::IsValid);


py::class_<LeDisconnectionResponseView, LeControlView>(m, "LeDisconnectionResponseView").def(py::init([](LeControlView parent) {auto view =LeDisconnectionResponseView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&LeDisconnectionResponseView::Create)).def("GetDestinationCid", &LeDisconnectionResponseView::GetDestinationCid).def("GetSourceCid", &LeDisconnectionResponseView::GetSourceCid).def("IsValid", &LeDisconnectionResponseView::IsValid);


py::class_<ConnectionParameterUpdateRequestView, LeControlView>(m, "ConnectionParameterUpdateRequestView").def(py::init([](LeControlView parent) {auto view =ConnectionParameterUpdateRequestView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&ConnectionParameterUpdateRequestView::Create)).def("GetIntervalMin", &ConnectionParameterUpdateRequestView::GetIntervalMin).def("GetIntervalMax", &ConnectionParameterUpdateRequestView::GetIntervalMax).def("GetPeripheralLatency", &ConnectionParameterUpdateRequestView::GetPeripheralLatency).def("GetTimeoutMultiplier", &ConnectionParameterUpdateRequestView::GetTimeoutMultiplier).def("IsValid", &ConnectionParameterUpdateRequestView::IsValid);


py::class_<ConnectionParameterUpdateResponseView, LeControlView>(m, "ConnectionParameterUpdateResponseView").def(py::init([](LeControlView parent) {auto view =ConnectionParameterUpdateResponseView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&ConnectionParameterUpdateResponseView::Create)).def("GetResult", &ConnectionParameterUpdateResponseView::GetResult).def("IsValid", &ConnectionParameterUpdateResponseView::IsValid);


py::class_<LeCreditBasedConnectionRequestView, LeControlView>(m, "LeCreditBasedConnectionRequestView").def(py::init([](LeControlView parent) {auto view =LeCreditBasedConnectionRequestView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&LeCreditBasedConnectionRequestView::Create)).def("GetLePsm", &LeCreditBasedConnectionRequestView::GetLePsm).def("GetSourceCid", &LeCreditBasedConnectionRequestView::GetSourceCid).def("GetMtu", &LeCreditBasedConnectionRequestView::GetMtu).def("GetMps", &LeCreditBasedConnectionRequestView::GetMps).def("GetInitialCredits", &LeCreditBasedConnectionRequestView::GetInitialCredits).def("IsValid", &LeCreditBasedConnectionRequestView::IsValid);


py::class_<LeCreditBasedConnectionResponseView, LeControlView>(m, "LeCreditBasedConnectionResponseView").def(py::init([](LeControlView parent) {auto view =LeCreditBasedConnectionResponseView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&LeCreditBasedConnectionResponseView::Create)).def("GetDestinationCid", &LeCreditBasedConnectionResponseView::GetDestinationCid).def("GetMtu", &LeCreditBasedConnectionResponseView::GetMtu).def("GetMps", &LeCreditBasedConnectionResponseView::GetMps).def("GetInitialCredits", &LeCreditBasedConnectionResponseView::GetInitialCredits).def("GetResult", &LeCreditBasedConnectionResponseView::GetResult).def("IsValid", &LeCreditBasedConnectionResponseView::IsValid);


py::class_<LeFlowControlCreditView, LeControlView>(m, "LeFlowControlCreditView").def(py::init([](LeControlView parent) {auto view =LeFlowControlCreditView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&LeFlowControlCreditView::Create)).def("GetCid", &LeFlowControlCreditView::GetCid).def("GetCredits", &LeFlowControlCreditView::GetCredits).def("IsValid", &LeFlowControlCreditView::IsValid);


py::class_<LeEnhancedCreditBasedConnectionRequestView, LeControlView>(m, "LeEnhancedCreditBasedConnectionRequestView").def(py::init([](LeControlView parent) {auto view =LeEnhancedCreditBasedConnectionRequestView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&LeEnhancedCreditBasedConnectionRequestView::Create)).def("GetSpsm", &LeEnhancedCreditBasedConnectionRequestView::GetSpsm).def("GetMtu", &LeEnhancedCreditBasedConnectionRequestView::GetMtu).def("GetMps", &LeEnhancedCreditBasedConnectionRequestView::GetMps).def("GetInitialCredits", &LeEnhancedCreditBasedConnectionRequestView::GetInitialCredits).def("GetSourceCid", &LeEnhancedCreditBasedConnectionRequestView::GetSourceCid).def("IsValid", &LeEnhancedCreditBasedConnectionRequestView::IsValid);


py::class_<LeEnhancedCreditBasedConnectionResponseView, LeControlView>(m, "LeEnhancedCreditBasedConnectionResponseView").def(py::init([](LeControlView parent) {auto view =LeEnhancedCreditBasedConnectionResponseView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&LeEnhancedCreditBasedConnectionResponseView::Create)).def("GetMtu", &LeEnhancedCreditBasedConnectionResponseView::GetMtu).def("GetMps", &LeEnhancedCreditBasedConnectionResponseView::GetMps).def("GetInitialCredits", &LeEnhancedCreditBasedConnectionResponseView::GetInitialCredits).def("GetResult", &LeEnhancedCreditBasedConnectionResponseView::GetResult).def("GetDestinationCid", &LeEnhancedCreditBasedConnectionResponseView::GetDestinationCid).def("IsValid", &LeEnhancedCreditBasedConnectionResponseView::IsValid);


py::class_<LeEnhancedCreditBasedReconfigureRequestView, LeControlView>(m, "LeEnhancedCreditBasedReconfigureRequestView").def(py::init([](LeControlView parent) {auto view =LeEnhancedCreditBasedReconfigureRequestView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&LeEnhancedCreditBasedReconfigureRequestView::Create)).def("GetMtu", &LeEnhancedCreditBasedReconfigureRequestView::GetMtu).def("GetMps", &LeEnhancedCreditBasedReconfigureRequestView::GetMps).def("GetDestinationCid", &LeEnhancedCreditBasedReconfigureRequestView::GetDestinationCid).def("IsValid", &LeEnhancedCreditBasedReconfigureRequestView::IsValid);


py::class_<LeEnhancedCreditBasedReconfigureResponseView, LeControlView>(m, "LeEnhancedCreditBasedReconfigureResponseView").def(py::init([](LeControlView parent) {auto view =LeEnhancedCreditBasedReconfigureResponseView::Create(std::move(parent));if (!view.IsValid()) { throw std::invalid_argument("Bad packet view"); }return view; })).def(py::init(&LeEnhancedCreditBasedReconfigureResponseView::Create)).def("GetResult", &LeEnhancedCreditBasedReconfigureResponseView::GetResult).def("IsValid", &LeEnhancedCreditBasedReconfigureResponseView::IsValid);


py::class_<BasicFrameBuilder, PacketBuilder<kLittleEndian>, std::shared_ptr<BasicFrameBuilder>>(m, "BasicFrameBuilder").def(py::init([](uint16_t channel_id,std::shared_ptr<BasePacketBuilder> payload){std::unique_ptr<BasePacketBuilder> payload_move_only;std::vector<uint8_t> payload_bytes;payload_bytes.reserve(payload->size());BitInserter payload_bi(payload_bytes);payload->Serialize(payload_bi);payload_move_only = std::make_unique<RawBuilder>(payload_bytes);return BasicFrameBuilder::Create(channel_id,std::move(payload_move_only));})).def("Serialize", [](BasicFrameBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<BasicFrameWithFcsBuilder, PacketBuilder<kLittleEndian>, std::shared_ptr<BasicFrameWithFcsBuilder>>(m, "BasicFrameWithFcsBuilder").def(py::init([](uint16_t channel_id,std::shared_ptr<BasePacketBuilder> payload){std::unique_ptr<BasePacketBuilder> payload_move_only;std::vector<uint8_t> payload_bytes;payload_bytes.reserve(payload->size());BitInserter payload_bi(payload_bytes);payload->Serialize(payload_bi);payload_move_only = std::make_unique<RawBuilder>(payload_bytes);return BasicFrameWithFcsBuilder::Create(channel_id,std::move(payload_move_only));})).def("Serialize", [](BasicFrameWithFcsBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<GroupFrameBuilder, BasicFrameBuilder, std::shared_ptr<GroupFrameBuilder>>(m, "GroupFrameBuilder").def(py::init([](uint16_t psm,std::shared_ptr<BasePacketBuilder> payload){std::unique_ptr<BasePacketBuilder> payload_move_only;std::vector<uint8_t> payload_bytes;payload_bytes.reserve(payload->size());BitInserter payload_bi(payload_bytes);payload->Serialize(payload_bi);payload_move_only = std::make_unique<RawBuilder>(payload_bytes);return GroupFrameBuilder::Create(psm,std::move(payload_move_only));})).def("Serialize", [](GroupFrameBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<StandardFrameBuilder, BasicFrameBuilder, std::shared_ptr<StandardFrameBuilder>>(m, "StandardFrameBuilder").def("Serialize", [](StandardFrameBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<StandardFrameWithFcsBuilder, BasicFrameWithFcsBuilder, std::shared_ptr<StandardFrameWithFcsBuilder>>(m, "StandardFrameWithFcsBuilder").def("Serialize", [](StandardFrameWithFcsBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<StandardSupervisoryFrameBuilder, StandardFrameBuilder, std::shared_ptr<StandardSupervisoryFrameBuilder>>(m, "StandardSupervisoryFrameBuilder").def(py::init([](uint16_t channel_id,SupervisoryFunction s,RetransmissionDisable r,uint8_t req_seq){return StandardSupervisoryFrameBuilder::Create(channel_id,s,r,req_seq);})).def("Serialize", [](StandardSupervisoryFrameBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<StandardSupervisoryFrameWithFcsBuilder, StandardFrameWithFcsBuilder, std::shared_ptr<StandardSupervisoryFrameWithFcsBuilder>>(m, "StandardSupervisoryFrameWithFcsBuilder").def(py::init([](uint16_t channel_id,SupervisoryFunction s,RetransmissionDisable r,uint8_t req_seq){return StandardSupervisoryFrameWithFcsBuilder::Create(channel_id,s,r,req_seq);})).def("Serialize", [](StandardSupervisoryFrameWithFcsBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<StandardInformationFrameBuilder, StandardFrameBuilder, std::shared_ptr<StandardInformationFrameBuilder>>(m, "StandardInformationFrameBuilder").def(py::init([](uint16_t channel_id,uint8_t tx_seq,RetransmissionDisable r,uint8_t req_seq,SegmentationAndReassembly sar,std::shared_ptr<BasePacketBuilder> payload){std::unique_ptr<BasePacketBuilder> payload_move_only;std::vector<uint8_t> payload_bytes;payload_bytes.reserve(payload->size());BitInserter payload_bi(payload_bytes);payload->Serialize(payload_bi);payload_move_only = std::make_unique<RawBuilder>(payload_bytes);return StandardInformationFrameBuilder::Create(channel_id,tx_seq,r,req_seq,sar,std::move(payload_move_only));})).def("Serialize", [](StandardInformationFrameBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<StandardInformationFrameWithFcsBuilder, StandardFrameWithFcsBuilder, std::shared_ptr<StandardInformationFrameWithFcsBuilder>>(m, "StandardInformationFrameWithFcsBuilder").def(py::init([](uint16_t channel_id,uint8_t tx_seq,RetransmissionDisable r,uint8_t req_seq,SegmentationAndReassembly sar,std::shared_ptr<BasePacketBuilder> payload){std::unique_ptr<BasePacketBuilder> payload_move_only;std::vector<uint8_t> payload_bytes;payload_bytes.reserve(payload->size());BitInserter payload_bi(payload_bytes);payload->Serialize(payload_bi);payload_move_only = std::make_unique<RawBuilder>(payload_bytes);return StandardInformationFrameWithFcsBuilder::Create(channel_id,tx_seq,r,req_seq,sar,std::move(payload_move_only));})).def("Serialize", [](StandardInformationFrameWithFcsBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<StandardInformationStartFrameBuilder, StandardInformationFrameBuilder, std::shared_ptr<StandardInformationStartFrameBuilder>>(m, "StandardInformationStartFrameBuilder").def(py::init([](uint16_t channel_id,uint8_t tx_seq,RetransmissionDisable r,uint8_t req_seq,uint16_t l2cap_sdu_length,std::shared_ptr<BasePacketBuilder> payload){std::unique_ptr<BasePacketBuilder> payload_move_only;std::vector<uint8_t> payload_bytes;payload_bytes.reserve(payload->size());BitInserter payload_bi(payload_bytes);payload->Serialize(payload_bi);payload_move_only = std::make_unique<RawBuilder>(payload_bytes);return StandardInformationStartFrameBuilder::Create(channel_id,tx_seq,r,req_seq,l2cap_sdu_length,std::move(payload_move_only));})).def("Serialize", [](StandardInformationStartFrameBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<StandardInformationStartFrameWithFcsBuilder, StandardInformationFrameWithFcsBuilder, std::shared_ptr<StandardInformationStartFrameWithFcsBuilder>>(m, "StandardInformationStartFrameWithFcsBuilder").def(py::init([](uint16_t channel_id,uint8_t tx_seq,RetransmissionDisable r,uint8_t req_seq,uint16_t l2cap_sdu_length,std::shared_ptr<BasePacketBuilder> payload){std::unique_ptr<BasePacketBuilder> payload_move_only;std::vector<uint8_t> payload_bytes;payload_bytes.reserve(payload->size());BitInserter payload_bi(payload_bytes);payload->Serialize(payload_bi);payload_move_only = std::make_unique<RawBuilder>(payload_bytes);return StandardInformationStartFrameWithFcsBuilder::Create(channel_id,tx_seq,r,req_seq,l2cap_sdu_length,std::move(payload_move_only));})).def("Serialize", [](StandardInformationStartFrameWithFcsBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<EnhancedSupervisoryFrameBuilder, StandardFrameBuilder, std::shared_ptr<EnhancedSupervisoryFrameBuilder>>(m, "EnhancedSupervisoryFrameBuilder").def(py::init([](uint16_t channel_id,SupervisoryFunction s,Poll p,Final f,uint8_t req_seq){return EnhancedSupervisoryFrameBuilder::Create(channel_id,s,p,f,req_seq);})).def("Serialize", [](EnhancedSupervisoryFrameBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<EnhancedSupervisoryFrameWithFcsBuilder, StandardFrameWithFcsBuilder, std::shared_ptr<EnhancedSupervisoryFrameWithFcsBuilder>>(m, "EnhancedSupervisoryFrameWithFcsBuilder").def(py::init([](uint16_t channel_id,SupervisoryFunction s,Poll p,Final f,uint8_t req_seq){return EnhancedSupervisoryFrameWithFcsBuilder::Create(channel_id,s,p,f,req_seq);})).def("Serialize", [](EnhancedSupervisoryFrameWithFcsBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<EnhancedInformationFrameBuilder, StandardFrameBuilder, std::shared_ptr<EnhancedInformationFrameBuilder>>(m, "EnhancedInformationFrameBuilder").def(py::init([](uint16_t channel_id,uint8_t tx_seq,Final f,uint8_t req_seq,SegmentationAndReassembly sar,std::shared_ptr<BasePacketBuilder> payload){std::unique_ptr<BasePacketBuilder> payload_move_only;std::vector<uint8_t> payload_bytes;payload_bytes.reserve(payload->size());BitInserter payload_bi(payload_bytes);payload->Serialize(payload_bi);payload_move_only = std::make_unique<RawBuilder>(payload_bytes);return EnhancedInformationFrameBuilder::Create(channel_id,tx_seq,f,req_seq,sar,std::move(payload_move_only));})).def("Serialize", [](EnhancedInformationFrameBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<EnhancedInformationFrameWithFcsBuilder, StandardFrameWithFcsBuilder, std::shared_ptr<EnhancedInformationFrameWithFcsBuilder>>(m, "EnhancedInformationFrameWithFcsBuilder").def(py::init([](uint16_t channel_id,uint8_t tx_seq,Final f,uint8_t req_seq,SegmentationAndReassembly sar,std::shared_ptr<BasePacketBuilder> payload){std::unique_ptr<BasePacketBuilder> payload_move_only;std::vector<uint8_t> payload_bytes;payload_bytes.reserve(payload->size());BitInserter payload_bi(payload_bytes);payload->Serialize(payload_bi);payload_move_only = std::make_unique<RawBuilder>(payload_bytes);return EnhancedInformationFrameWithFcsBuilder::Create(channel_id,tx_seq,f,req_seq,sar,std::move(payload_move_only));})).def("Serialize", [](EnhancedInformationFrameWithFcsBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<EnhancedInformationStartFrameBuilder, EnhancedInformationFrameBuilder, std::shared_ptr<EnhancedInformationStartFrameBuilder>>(m, "EnhancedInformationStartFrameBuilder").def(py::init([](uint16_t channel_id,uint8_t tx_seq,Final f,uint8_t req_seq,uint16_t l2cap_sdu_length,std::shared_ptr<BasePacketBuilder> payload){std::unique_ptr<BasePacketBuilder> payload_move_only;std::vector<uint8_t> payload_bytes;payload_bytes.reserve(payload->size());BitInserter payload_bi(payload_bytes);payload->Serialize(payload_bi);payload_move_only = std::make_unique<RawBuilder>(payload_bytes);return EnhancedInformationStartFrameBuilder::Create(channel_id,tx_seq,f,req_seq,l2cap_sdu_length,std::move(payload_move_only));})).def("Serialize", [](EnhancedInformationStartFrameBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<EnhancedInformationStartFrameWithFcsBuilder, EnhancedInformationFrameWithFcsBuilder, std::shared_ptr<EnhancedInformationStartFrameWithFcsBuilder>>(m, "EnhancedInformationStartFrameWithFcsBuilder").def(py::init([](uint16_t channel_id,uint8_t tx_seq,Final f,uint8_t req_seq,uint16_t l2cap_sdu_length,std::shared_ptr<BasePacketBuilder> payload){std::unique_ptr<BasePacketBuilder> payload_move_only;std::vector<uint8_t> payload_bytes;payload_bytes.reserve(payload->size());BitInserter payload_bi(payload_bytes);payload->Serialize(payload_bi);payload_move_only = std::make_unique<RawBuilder>(payload_bytes);return EnhancedInformationStartFrameWithFcsBuilder::Create(channel_id,tx_seq,f,req_seq,l2cap_sdu_length,std::move(payload_move_only));})).def("Serialize", [](EnhancedInformationStartFrameWithFcsBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<ExtendedSupervisoryFrameBuilder, StandardFrameBuilder, std::shared_ptr<ExtendedSupervisoryFrameBuilder>>(m, "ExtendedSupervisoryFrameBuilder").def(py::init([](uint16_t channel_id,Final f,uint16_t req_seq,SupervisoryFunction s,Poll p){return ExtendedSupervisoryFrameBuilder::Create(channel_id,f,req_seq,s,p);})).def("Serialize", [](ExtendedSupervisoryFrameBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<ExtendedSupervisoryFrameWithFcsBuilder, StandardFrameWithFcsBuilder, std::shared_ptr<ExtendedSupervisoryFrameWithFcsBuilder>>(m, "ExtendedSupervisoryFrameWithFcsBuilder").def(py::init([](uint16_t channel_id,Final f,uint16_t req_seq,SupervisoryFunction s,Poll p){return ExtendedSupervisoryFrameWithFcsBuilder::Create(channel_id,f,req_seq,s,p);})).def("Serialize", [](ExtendedSupervisoryFrameWithFcsBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<ExtendedInformationFrameBuilder, StandardFrameBuilder, std::shared_ptr<ExtendedInformationFrameBuilder>>(m, "ExtendedInformationFrameBuilder").def(py::init([](uint16_t channel_id,Final f,uint16_t req_seq,SegmentationAndReassembly sar,uint16_t tx_seq,std::shared_ptr<BasePacketBuilder> payload){std::unique_ptr<BasePacketBuilder> payload_move_only;std::vector<uint8_t> payload_bytes;payload_bytes.reserve(payload->size());BitInserter payload_bi(payload_bytes);payload->Serialize(payload_bi);payload_move_only = std::make_unique<RawBuilder>(payload_bytes);return ExtendedInformationFrameBuilder::Create(channel_id,f,req_seq,sar,tx_seq,std::move(payload_move_only));})).def("Serialize", [](ExtendedInformationFrameBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<ExtendedInformationFrameWithFcsBuilder, StandardFrameWithFcsBuilder, std::shared_ptr<ExtendedInformationFrameWithFcsBuilder>>(m, "ExtendedInformationFrameWithFcsBuilder").def(py::init([](uint16_t channel_id,Final f,uint16_t req_seq,SegmentationAndReassembly sar,uint16_t tx_seq,std::shared_ptr<BasePacketBuilder> payload){std::unique_ptr<BasePacketBuilder> payload_move_only;std::vector<uint8_t> payload_bytes;payload_bytes.reserve(payload->size());BitInserter payload_bi(payload_bytes);payload->Serialize(payload_bi);payload_move_only = std::make_unique<RawBuilder>(payload_bytes);return ExtendedInformationFrameWithFcsBuilder::Create(channel_id,f,req_seq,sar,tx_seq,std::move(payload_move_only));})).def("Serialize", [](ExtendedInformationFrameWithFcsBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<ExtendedInformationStartFrameBuilder, ExtendedInformationFrameBuilder, std::shared_ptr<ExtendedInformationStartFrameBuilder>>(m, "ExtendedInformationStartFrameBuilder").def(py::init([](uint16_t channel_id,Final f,uint16_t req_seq,uint16_t tx_seq,uint16_t l2cap_sdu_length,std::shared_ptr<BasePacketBuilder> payload){std::unique_ptr<BasePacketBuilder> payload_move_only;std::vector<uint8_t> payload_bytes;payload_bytes.reserve(payload->size());BitInserter payload_bi(payload_bytes);payload->Serialize(payload_bi);payload_move_only = std::make_unique<RawBuilder>(payload_bytes);return ExtendedInformationStartFrameBuilder::Create(channel_id,f,req_seq,tx_seq,l2cap_sdu_length,std::move(payload_move_only));})).def("Serialize", [](ExtendedInformationStartFrameBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<ExtendedInformationStartFrameWithFcsBuilder, ExtendedInformationFrameWithFcsBuilder, std::shared_ptr<ExtendedInformationStartFrameWithFcsBuilder>>(m, "ExtendedInformationStartFrameWithFcsBuilder").def(py::init([](uint16_t channel_id,Final f,uint16_t req_seq,uint16_t tx_seq,uint16_t l2cap_sdu_length,std::shared_ptr<BasePacketBuilder> payload){std::unique_ptr<BasePacketBuilder> payload_move_only;std::vector<uint8_t> payload_bytes;payload_bytes.reserve(payload->size());BitInserter payload_bi(payload_bytes);payload->Serialize(payload_bi);payload_move_only = std::make_unique<RawBuilder>(payload_bytes);return ExtendedInformationStartFrameWithFcsBuilder::Create(channel_id,f,req_seq,tx_seq,l2cap_sdu_length,std::move(payload_move_only));})).def("Serialize", [](ExtendedInformationStartFrameWithFcsBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<FirstLeInformationFrameBuilder, BasicFrameBuilder, std::shared_ptr<FirstLeInformationFrameBuilder>>(m, "FirstLeInformationFrameBuilder").def(py::init([](uint16_t channel_id,uint16_t l2cap_sdu_length,std::shared_ptr<BasePacketBuilder> payload){std::unique_ptr<BasePacketBuilder> payload_move_only;std::vector<uint8_t> payload_bytes;payload_bytes.reserve(payload->size());BitInserter payload_bi(payload_bytes);payload->Serialize(payload_bi);payload_move_only = std::make_unique<RawBuilder>(payload_bytes);return FirstLeInformationFrameBuilder::Create(channel_id,l2cap_sdu_length,std::move(payload_move_only));})).def("Serialize", [](FirstLeInformationFrameBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<ControlFrameBuilder, BasicFrameBuilder, std::shared_ptr<ControlFrameBuilder>>(m, "ControlFrameBuilder").def(py::init([](std::shared_ptr<BasePacketBuilder> payload){std::unique_ptr<BasePacketBuilder> payload_move_only;std::vector<uint8_t> payload_bytes;payload_bytes.reserve(payload->size());BitInserter payload_bi(payload_bytes);payload->Serialize(payload_bi);payload_move_only = std::make_unique<RawBuilder>(payload_bytes);return ControlFrameBuilder::Create(std::move(payload_move_only));})).def("Serialize", [](ControlFrameBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<ControlBuilder, PacketBuilder<kLittleEndian>, std::shared_ptr<ControlBuilder>>(m, "ControlBuilder").def(py::init([](CommandCode code,uint8_t identifier,std::shared_ptr<BasePacketBuilder> payload){std::unique_ptr<BasePacketBuilder> payload_move_only;std::vector<uint8_t> payload_bytes;payload_bytes.reserve(payload->size());BitInserter payload_bi(payload_bytes);payload->Serialize(payload_bi);payload_move_only = std::make_unique<RawBuilder>(payload_bytes);return ControlBuilder::Create(code,identifier,std::move(payload_move_only));})).def("Serialize", [](ControlBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<CommandRejectBuilder, ControlBuilder, std::shared_ptr<CommandRejectBuilder>>(m, "CommandRejectBuilder").def("Serialize", [](CommandRejectBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<CommandRejectNotUnderstoodBuilder, CommandRejectBuilder, std::shared_ptr<CommandRejectNotUnderstoodBuilder>>(m, "CommandRejectNotUnderstoodBuilder").def(py::init([](uint8_t identifier){return CommandRejectNotUnderstoodBuilder::Create(identifier);})).def("Serialize", [](CommandRejectNotUnderstoodBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<CommandRejectMtuExceededBuilder, CommandRejectBuilder, std::shared_ptr<CommandRejectMtuExceededBuilder>>(m, "CommandRejectMtuExceededBuilder").def(py::init([](uint8_t identifier,uint16_t actual_mtu){return CommandRejectMtuExceededBuilder::Create(identifier,actual_mtu);})).def("Serialize", [](CommandRejectMtuExceededBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<CommandRejectInvalidCidBuilder, CommandRejectBuilder, std::shared_ptr<CommandRejectInvalidCidBuilder>>(m, "CommandRejectInvalidCidBuilder").def(py::init([](uint8_t identifier,uint16_t local_channel,uint16_t remote_channel){return CommandRejectInvalidCidBuilder::Create(identifier,local_channel,remote_channel);})).def("Serialize", [](CommandRejectInvalidCidBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<ConnectionRequestBuilder, ControlBuilder, std::shared_ptr<ConnectionRequestBuilder>>(m, "ConnectionRequestBuilder").def(py::init([](uint8_t identifier,uint16_t psm,uint16_t source_cid){return ConnectionRequestBuilder::Create(identifier,psm,source_cid);})).def("Serialize", [](ConnectionRequestBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<ConnectionResponseBuilder, ControlBuilder, std::shared_ptr<ConnectionResponseBuilder>>(m, "ConnectionResponseBuilder").def(py::init([](uint8_t identifier,uint16_t destination_cid,uint16_t source_cid,ConnectionResponseResult result,ConnectionResponseStatus status){return ConnectionResponseBuilder::Create(identifier,destination_cid,source_cid,result,status);})).def("Serialize", [](ConnectionResponseBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<ConfigurationRequestBuilder, ControlBuilder, std::shared_ptr<ConfigurationRequestBuilder>>(m, "ConfigurationRequestBuilder").def(py::init([](uint8_t identifier,uint16_t destination_cid,Continuation continuation,std::vector<std::shared_ptr<ConfigurationOption>> config){std::vector<std::unique_ptr<ConfigurationOption>> config_move_only;for (size_t i = 0; i < config.size(); i++) {auto config_bytes = std::make_shared<std::vector<uint8_t>>();config_bytes->reserve(config[i]->size());BitInserter config_bi(*config_bytes);config[i]->Serialize(config_bi);auto config_view = PacketView<kLittleEndian>(config_bytes);std::unique_ptr<ConfigurationOption> config_reparsed = ParseConfigurationOption(config_view.begin());config_move_only.push_back(std::move(config_reparsed));}return ConfigurationRequestBuilder::Create(identifier,destination_cid,continuation,std::move(config_move_only));})).def("Serialize", [](ConfigurationRequestBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<ConfigurationResponseBuilder, ControlBuilder, std::shared_ptr<ConfigurationResponseBuilder>>(m, "ConfigurationResponseBuilder").def(py::init([](uint8_t identifier,uint16_t source_cid,Continuation continuation,ConfigurationResponseResult result,std::vector<std::shared_ptr<ConfigurationOption>> config){std::vector<std::unique_ptr<ConfigurationOption>> config_move_only;for (size_t i = 0; i < config.size(); i++) {auto config_bytes = std::make_shared<std::vector<uint8_t>>();config_bytes->reserve(config[i]->size());BitInserter config_bi(*config_bytes);config[i]->Serialize(config_bi);auto config_view = PacketView<kLittleEndian>(config_bytes);std::unique_ptr<ConfigurationOption> config_reparsed = ParseConfigurationOption(config_view.begin());config_move_only.push_back(std::move(config_reparsed));}return ConfigurationResponseBuilder::Create(identifier,source_cid,continuation,result,std::move(config_move_only));})).def("Serialize", [](ConfigurationResponseBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<DisconnectionRequestBuilder, ControlBuilder, std::shared_ptr<DisconnectionRequestBuilder>>(m, "DisconnectionRequestBuilder").def(py::init([](uint8_t identifier,uint16_t destination_cid,uint16_t source_cid){return DisconnectionRequestBuilder::Create(identifier,destination_cid,source_cid);})).def("Serialize", [](DisconnectionRequestBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<DisconnectionResponseBuilder, ControlBuilder, std::shared_ptr<DisconnectionResponseBuilder>>(m, "DisconnectionResponseBuilder").def(py::init([](uint8_t identifier,uint16_t destination_cid,uint16_t source_cid){return DisconnectionResponseBuilder::Create(identifier,destination_cid,source_cid);})).def("Serialize", [](DisconnectionResponseBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<EchoRequestBuilder, ControlBuilder, std::shared_ptr<EchoRequestBuilder>>(m, "EchoRequestBuilder").def(py::init([](uint8_t identifier,std::shared_ptr<BasePacketBuilder> payload){std::unique_ptr<BasePacketBuilder> payload_move_only;std::vector<uint8_t> payload_bytes;payload_bytes.reserve(payload->size());BitInserter payload_bi(payload_bytes);payload->Serialize(payload_bi);payload_move_only = std::make_unique<RawBuilder>(payload_bytes);return EchoRequestBuilder::Create(identifier,std::move(payload_move_only));})).def("Serialize", [](EchoRequestBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<EchoResponseBuilder, ControlBuilder, std::shared_ptr<EchoResponseBuilder>>(m, "EchoResponseBuilder").def(py::init([](uint8_t identifier,std::shared_ptr<BasePacketBuilder> payload){std::unique_ptr<BasePacketBuilder> payload_move_only;std::vector<uint8_t> payload_bytes;payload_bytes.reserve(payload->size());BitInserter payload_bi(payload_bytes);payload->Serialize(payload_bi);payload_move_only = std::make_unique<RawBuilder>(payload_bytes);return EchoResponseBuilder::Create(identifier,std::move(payload_move_only));})).def("Serialize", [](EchoResponseBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<InformationRequestBuilder, ControlBuilder, std::shared_ptr<InformationRequestBuilder>>(m, "InformationRequestBuilder").def(py::init([](uint8_t identifier,InformationRequestInfoType info_type){return InformationRequestBuilder::Create(identifier,info_type);})).def("Serialize", [](InformationRequestBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<InformationResponseBuilder, ControlBuilder, std::shared_ptr<InformationResponseBuilder>>(m, "InformationResponseBuilder").def("Serialize", [](InformationResponseBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<InformationResponseConnectionlessMtuBuilder, InformationResponseBuilder, std::shared_ptr<InformationResponseConnectionlessMtuBuilder>>(m, "InformationResponseConnectionlessMtuBuilder").def(py::init([](uint8_t identifier,InformationRequestResult result,uint16_t connectionless_mtu){return InformationResponseConnectionlessMtuBuilder::Create(identifier,result,connectionless_mtu);})).def("Serialize", [](InformationResponseConnectionlessMtuBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<InformationResponseExtendedFeaturesBuilder, InformationResponseBuilder, std::shared_ptr<InformationResponseExtendedFeaturesBuilder>>(m, "InformationResponseExtendedFeaturesBuilder").def(py::init([](uint8_t identifier,InformationRequestResult result,uint8_t flow_control_mode,uint8_t retransmission_mode,uint8_t bi_directional_qoS,uint8_t enhanced_retransmission_mode,uint8_t streaming_mode,uint8_t fcs_option,uint8_t extended_flow_specification_for_br_edr,uint8_t fixed_channels,uint8_t extended_window_size,uint8_t unicast_connectionless_data_reception,uint8_t enhanced_credit_based_flow_control_mode){return InformationResponseExtendedFeaturesBuilder::Create(identifier,result,flow_control_mode,retransmission_mode,bi_directional_qoS,enhanced_retransmission_mode,streaming_mode,fcs_option,extended_flow_specification_for_br_edr,fixed_channels,extended_window_size,unicast_connectionless_data_reception,enhanced_credit_based_flow_control_mode);})).def("Serialize", [](InformationResponseExtendedFeaturesBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<InformationResponseFixedChannelsBuilder, InformationResponseBuilder, std::shared_ptr<InformationResponseFixedChannelsBuilder>>(m, "InformationResponseFixedChannelsBuilder").def(py::init([](uint8_t identifier,InformationRequestResult result,uint64_t fixed_channels){return InformationResponseFixedChannelsBuilder::Create(identifier,result,fixed_channels);})).def("Serialize", [](InformationResponseFixedChannelsBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<CreateChannelRequestBuilder, ControlBuilder, std::shared_ptr<CreateChannelRequestBuilder>>(m, "CreateChannelRequestBuilder").def(py::init([](uint8_t identifier,uint16_t psm,uint16_t source_cid,uint8_t controller_id){return CreateChannelRequestBuilder::Create(identifier,psm,source_cid,controller_id);})).def("Serialize", [](CreateChannelRequestBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<CreateChannelResponseBuilder, ControlBuilder, std::shared_ptr<CreateChannelResponseBuilder>>(m, "CreateChannelResponseBuilder").def(py::init([](uint8_t identifier,uint16_t destination_cid,uint16_t source_cid,CreateChannelResponseResult result,CreateChannelResponseStatus status){return CreateChannelResponseBuilder::Create(identifier,destination_cid,source_cid,result,status);})).def("Serialize", [](CreateChannelResponseBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<MoveChannelRequestBuilder, ControlBuilder, std::shared_ptr<MoveChannelRequestBuilder>>(m, "MoveChannelRequestBuilder").def(py::init([](uint8_t identifier,uint16_t initiator_cid,uint8_t dest_controller_id){return MoveChannelRequestBuilder::Create(identifier,initiator_cid,dest_controller_id);})).def("Serialize", [](MoveChannelRequestBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<MoveChannelResponseBuilder, ControlBuilder, std::shared_ptr<MoveChannelResponseBuilder>>(m, "MoveChannelResponseBuilder").def(py::init([](uint8_t identifier,uint16_t initiator_cid,MoveChannelResponseResult result){return MoveChannelResponseBuilder::Create(identifier,initiator_cid,result);})).def("Serialize", [](MoveChannelResponseBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<MoveChannelConfirmationRequestBuilder, ControlBuilder, std::shared_ptr<MoveChannelConfirmationRequestBuilder>>(m, "MoveChannelConfirmationRequestBuilder").def(py::init([](uint8_t identifier,uint16_t initiator_cid,MoveChannelConfirmationResult result){return MoveChannelConfirmationRequestBuilder::Create(identifier,initiator_cid,result);})).def("Serialize", [](MoveChannelConfirmationRequestBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<MoveChannelConfirmationResponseBuilder, ControlBuilder, std::shared_ptr<MoveChannelConfirmationResponseBuilder>>(m, "MoveChannelConfirmationResponseBuilder").def(py::init([](uint8_t identifier,uint16_t initiator_cid){return MoveChannelConfirmationResponseBuilder::Create(identifier,initiator_cid);})).def("Serialize", [](MoveChannelConfirmationResponseBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<FlowControlCreditBuilder, ControlBuilder, std::shared_ptr<FlowControlCreditBuilder>>(m, "FlowControlCreditBuilder").def(py::init([](uint8_t identifier,uint16_t cid,uint16_t credits){return FlowControlCreditBuilder::Create(identifier,cid,credits);})).def("Serialize", [](FlowControlCreditBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<CreditBasedConnectionRequestBuilder, ControlBuilder, std::shared_ptr<CreditBasedConnectionRequestBuilder>>(m, "CreditBasedConnectionRequestBuilder").def(py::init([](uint8_t identifier,uint16_t spsm,uint16_t mtu,uint16_t mps,uint16_t initial_credits,const std::vector<uint16_t>& source_cid){return CreditBasedConnectionRequestBuilder::Create(identifier,spsm,mtu,mps,initial_credits,source_cid);})).def("Serialize", [](CreditBasedConnectionRequestBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<CreditBasedConnectionResponseBuilder, ControlBuilder, std::shared_ptr<CreditBasedConnectionResponseBuilder>>(m, "CreditBasedConnectionResponseBuilder").def(py::init([](uint8_t identifier,uint16_t mtu,uint16_t mps,uint16_t initial_credits,CreditBasedConnectionResponseResult result,const std::vector<uint16_t>& destination_cid){return CreditBasedConnectionResponseBuilder::Create(identifier,mtu,mps,initial_credits,result,destination_cid);})).def("Serialize", [](CreditBasedConnectionResponseBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<CreditBasedReconfigureRequestBuilder, ControlBuilder, std::shared_ptr<CreditBasedReconfigureRequestBuilder>>(m, "CreditBasedReconfigureRequestBuilder").def(py::init([](uint8_t identifier,uint16_t mtu,uint16_t mps,const std::vector<uint16_t>& destination_cid){return CreditBasedReconfigureRequestBuilder::Create(identifier,mtu,mps,destination_cid);})).def("Serialize", [](CreditBasedReconfigureRequestBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<CreditBasedReconfigureResponseBuilder, ControlBuilder, std::shared_ptr<CreditBasedReconfigureResponseBuilder>>(m, "CreditBasedReconfigureResponseBuilder").def(py::init([](uint8_t identifier,CreditBasedReconfigureResponseResult result){return CreditBasedReconfigureResponseBuilder::Create(identifier,result);})).def("Serialize", [](CreditBasedReconfigureResponseBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<LeControlFrameBuilder, BasicFrameBuilder, std::shared_ptr<LeControlFrameBuilder>>(m, "LeControlFrameBuilder").def(py::init([](std::shared_ptr<BasePacketBuilder> payload){std::unique_ptr<BasePacketBuilder> payload_move_only;std::vector<uint8_t> payload_bytes;payload_bytes.reserve(payload->size());BitInserter payload_bi(payload_bytes);payload->Serialize(payload_bi);payload_move_only = std::make_unique<RawBuilder>(payload_bytes);return LeControlFrameBuilder::Create(std::move(payload_move_only));})).def("Serialize", [](LeControlFrameBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<LeControlBuilder, PacketBuilder<kLittleEndian>, std::shared_ptr<LeControlBuilder>>(m, "LeControlBuilder").def(py::init([](LeCommandCode code,uint8_t identifier,std::shared_ptr<BasePacketBuilder> payload){std::unique_ptr<BasePacketBuilder> payload_move_only;std::vector<uint8_t> payload_bytes;payload_bytes.reserve(payload->size());BitInserter payload_bi(payload_bytes);payload->Serialize(payload_bi);payload_move_only = std::make_unique<RawBuilder>(payload_bytes);return LeControlBuilder::Create(code,identifier,std::move(payload_move_only));})).def("Serialize", [](LeControlBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<LeCommandRejectBuilder, LeControlBuilder, std::shared_ptr<LeCommandRejectBuilder>>(m, "LeCommandRejectBuilder").def(py::init([](uint8_t identifier,CommandRejectReason reason,std::shared_ptr<BasePacketBuilder> payload){std::unique_ptr<BasePacketBuilder> payload_move_only;std::vector<uint8_t> payload_bytes;payload_bytes.reserve(payload->size());BitInserter payload_bi(payload_bytes);payload->Serialize(payload_bi);payload_move_only = std::make_unique<RawBuilder>(payload_bytes);return LeCommandRejectBuilder::Create(identifier,reason,std::move(payload_move_only));})).def("Serialize", [](LeCommandRejectBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<LeCommandRejectNotUnderstoodBuilder, LeCommandRejectBuilder, std::shared_ptr<LeCommandRejectNotUnderstoodBuilder>>(m, "LeCommandRejectNotUnderstoodBuilder").def(py::init([](uint8_t identifier){return LeCommandRejectNotUnderstoodBuilder::Create(identifier);})).def("Serialize", [](LeCommandRejectNotUnderstoodBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<LeCommandRejectMtuExceededBuilder, LeCommandRejectBuilder, std::shared_ptr<LeCommandRejectMtuExceededBuilder>>(m, "LeCommandRejectMtuExceededBuilder").def(py::init([](uint8_t identifier,uint16_t actual_mtu){return LeCommandRejectMtuExceededBuilder::Create(identifier,actual_mtu);})).def("Serialize", [](LeCommandRejectMtuExceededBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<LeCommandRejectInvalidCidBuilder, LeCommandRejectBuilder, std::shared_ptr<LeCommandRejectInvalidCidBuilder>>(m, "LeCommandRejectInvalidCidBuilder").def(py::init([](uint8_t identifier,uint16_t local_channel,uint16_t remote_channel){return LeCommandRejectInvalidCidBuilder::Create(identifier,local_channel,remote_channel);})).def("Serialize", [](LeCommandRejectInvalidCidBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<LeDisconnectionRequestBuilder, LeControlBuilder, std::shared_ptr<LeDisconnectionRequestBuilder>>(m, "LeDisconnectionRequestBuilder").def(py::init([](uint8_t identifier,uint16_t destination_cid,uint16_t source_cid){return LeDisconnectionRequestBuilder::Create(identifier,destination_cid,source_cid);})).def("Serialize", [](LeDisconnectionRequestBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<LeDisconnectionResponseBuilder, LeControlBuilder, std::shared_ptr<LeDisconnectionResponseBuilder>>(m, "LeDisconnectionResponseBuilder").def(py::init([](uint8_t identifier,uint16_t destination_cid,uint16_t source_cid){return LeDisconnectionResponseBuilder::Create(identifier,destination_cid,source_cid);})).def("Serialize", [](LeDisconnectionResponseBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<ConnectionParameterUpdateRequestBuilder, LeControlBuilder, std::shared_ptr<ConnectionParameterUpdateRequestBuilder>>(m, "ConnectionParameterUpdateRequestBuilder").def(py::init([](uint8_t identifier,uint16_t interval_min,uint16_t interval_max,uint16_t peripheral_latency,uint16_t timeout_multiplier){return ConnectionParameterUpdateRequestBuilder::Create(identifier,interval_min,interval_max,peripheral_latency,timeout_multiplier);})).def("Serialize", [](ConnectionParameterUpdateRequestBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<ConnectionParameterUpdateResponseBuilder, LeControlBuilder, std::shared_ptr<ConnectionParameterUpdateResponseBuilder>>(m, "ConnectionParameterUpdateResponseBuilder").def(py::init([](uint8_t identifier,ConnectionParameterUpdateResponseResult result){return ConnectionParameterUpdateResponseBuilder::Create(identifier,result);})).def("Serialize", [](ConnectionParameterUpdateResponseBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<LeCreditBasedConnectionRequestBuilder, LeControlBuilder, std::shared_ptr<LeCreditBasedConnectionRequestBuilder>>(m, "LeCreditBasedConnectionRequestBuilder").def(py::init([](uint8_t identifier,uint16_t le_psm,uint16_t source_cid,uint16_t mtu,uint16_t mps,uint16_t initial_credits){return LeCreditBasedConnectionRequestBuilder::Create(identifier,le_psm,source_cid,mtu,mps,initial_credits);})).def("Serialize", [](LeCreditBasedConnectionRequestBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<LeCreditBasedConnectionResponseBuilder, LeControlBuilder, std::shared_ptr<LeCreditBasedConnectionResponseBuilder>>(m, "LeCreditBasedConnectionResponseBuilder").def(py::init([](uint8_t identifier,uint16_t destination_cid,uint16_t mtu,uint16_t mps,uint16_t initial_credits,LeCreditBasedConnectionResponseResult result){return LeCreditBasedConnectionResponseBuilder::Create(identifier,destination_cid,mtu,mps,initial_credits,result);})).def("Serialize", [](LeCreditBasedConnectionResponseBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<LeFlowControlCreditBuilder, LeControlBuilder, std::shared_ptr<LeFlowControlCreditBuilder>>(m, "LeFlowControlCreditBuilder").def(py::init([](uint8_t identifier,uint16_t cid,uint16_t credits){return LeFlowControlCreditBuilder::Create(identifier,cid,credits);})).def("Serialize", [](LeFlowControlCreditBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<LeEnhancedCreditBasedConnectionRequestBuilder, LeControlBuilder, std::shared_ptr<LeEnhancedCreditBasedConnectionRequestBuilder>>(m, "LeEnhancedCreditBasedConnectionRequestBuilder").def(py::init([](uint8_t identifier,uint16_t spsm,uint16_t mtu,uint16_t mps,uint16_t initial_credits,const std::vector<uint16_t>& source_cid){return LeEnhancedCreditBasedConnectionRequestBuilder::Create(identifier,spsm,mtu,mps,initial_credits,source_cid);})).def("Serialize", [](LeEnhancedCreditBasedConnectionRequestBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<LeEnhancedCreditBasedConnectionResponseBuilder, LeControlBuilder, std::shared_ptr<LeEnhancedCreditBasedConnectionResponseBuilder>>(m, "LeEnhancedCreditBasedConnectionResponseBuilder").def(py::init([](uint8_t identifier,uint16_t mtu,uint16_t mps,uint16_t initial_credits,CreditBasedConnectionResponseResult result,const std::vector<uint16_t>& destination_cid){return LeEnhancedCreditBasedConnectionResponseBuilder::Create(identifier,mtu,mps,initial_credits,result,destination_cid);})).def("Serialize", [](LeEnhancedCreditBasedConnectionResponseBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<LeEnhancedCreditBasedReconfigureRequestBuilder, LeControlBuilder, std::shared_ptr<LeEnhancedCreditBasedReconfigureRequestBuilder>>(m, "LeEnhancedCreditBasedReconfigureRequestBuilder").def(py::init([](uint8_t identifier,uint16_t mtu,uint16_t mps,const std::vector<uint16_t>& destination_cid){return LeEnhancedCreditBasedReconfigureRequestBuilder::Create(identifier,mtu,mps,destination_cid);})).def("Serialize", [](LeEnhancedCreditBasedReconfigureRequestBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


py::class_<LeEnhancedCreditBasedReconfigureResponseBuilder, LeControlBuilder, std::shared_ptr<LeEnhancedCreditBasedReconfigureResponseBuilder>>(m, "LeEnhancedCreditBasedReconfigureResponseBuilder").def(py::init([](uint8_t identifier,CreditBasedReconfigureResponseResult result){return LeEnhancedCreditBasedReconfigureResponseBuilder::Create(identifier,result);})).def("Serialize", [](LeEnhancedCreditBasedReconfigureResponseBuilder& builder){std::vector<uint8_t> bytes;BitInserter bi(bytes);builder.Serialize(bi);return bytes;});


}

}  //namespace l2cap
}  //namespace bluetooth
