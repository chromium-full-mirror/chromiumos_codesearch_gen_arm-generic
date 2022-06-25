// Automatic generation of D-Bus interface mock proxies for:
//  - org.chromium.PermissionBroker
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_PERMISSION_BROKER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_PERMISSION_BROKER_DBUS_PROXY_MOCKS_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_PERMISSION_BROKER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_PERMISSION_BROKER_DBUS_PROXY_MOCKS_H
#include <string>
#include <vector>

#include <base/callback_forward.h>
#include <base/logging.h>
#include <brillo/any.h>
#include <brillo/errors/error.h>
#include <brillo/variant_dictionary.h>
#include <gmock/gmock.h>

#include "permission_broker/dbus-proxies.h"

namespace org {
namespace chromium {

// Mock object for PermissionBrokerProxyInterface.
class PermissionBrokerProxyMock : public PermissionBrokerProxyInterface {
 public:
  PermissionBrokerProxyMock() = default;
  PermissionBrokerProxyMock(const PermissionBrokerProxyMock&) = delete;
  PermissionBrokerProxyMock& operator=(const PermissionBrokerProxyMock&) = delete;

  MOCK_METHOD4(CheckPathAccess,
               bool(const std::string& /*in_path*/,
                    bool* /*out_allowed*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(CheckPathAccessAsync,
               void(const std::string& /*in_path*/,
                    base::OnceCallback<void(bool /*allowed*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(OpenPath,
               bool(const std::string& /*in_path*/,
                    base::ScopedFD* /*out_fd*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(OpenPathAsync,
               void(const std::string& /*in_path*/,
                    base::OnceCallback<void(const base::ScopedFD& /*fd*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(ClaimDevicePath,
               bool(const std::string& /*in_path*/,
                    uint32_t /*in_drop_privileges_mask*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_lifeline_fd*/,
                    base::ScopedFD* /*out_fd*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(ClaimDevicePathAsync,
               void(const std::string& /*in_path*/,
                    uint32_t /*in_drop_privileges_mask*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_lifeline_fd*/,
                    base::OnceCallback<void(const base::ScopedFD& /*fd*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD7(OpenPathAndRegisterClient,
               bool(const std::string& /*in_path*/,
                    uint32_t /*in_drop_privileges_mask*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_lifeline_fd*/,
                    base::ScopedFD* /*out_fd*/,
                    std::string* /*out_client_id*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(OpenPathAndRegisterClientAsync,
               void(const std::string& /*in_path*/,
                    uint32_t /*in_drop_privileges_mask*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_lifeline_fd*/,
                    base::OnceCallback<void(const base::ScopedFD& /*fd*/, const std::string& /*client_id*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(DetachInterface,
               bool(const std::string& /*in_client_id*/,
                    uint8_t /*in_iface_num*/,
                    bool* /*out_success*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(DetachInterfaceAsync,
               void(const std::string& /*in_client_id*/,
                    uint8_t /*in_iface_num*/,
                    base::OnceCallback<void(bool /*success*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(ReattachInterface,
               bool(const std::string& /*in_client_id*/,
                    uint8_t /*in_iface_num*/,
                    bool* /*out_success*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(ReattachInterfaceAsync,
               void(const std::string& /*in_client_id*/,
                    uint8_t /*in_iface_num*/,
                    base::OnceCallback<void(bool /*success*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(PowerCycleUsbPorts,
               bool(uint16_t /*in_vid*/,
                    uint16_t /*in_pid*/,
                    int64_t /*in_delay*/,
                    bool* /*out_success*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(PowerCycleUsbPortsAsync,
               void(uint16_t /*in_vid*/,
                    uint16_t /*in_pid*/,
                    int64_t /*in_delay*/,
                    base::OnceCallback<void(bool /*success*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(RequestTcpPortAccess,
               bool(uint16_t /*in_port*/,
                    const std::string& /*in_interface*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_lifeline_fd*/,
                    bool* /*out_allowed*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(RequestTcpPortAccessAsync,
               void(uint16_t /*in_port*/,
                    const std::string& /*in_interface*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_lifeline_fd*/,
                    base::OnceCallback<void(bool /*allowed*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(RequestUdpPortAccess,
               bool(uint16_t /*in_port*/,
                    const std::string& /*in_interface*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_lifeline_fd*/,
                    bool* /*out_allowed*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(RequestUdpPortAccessAsync,
               void(uint16_t /*in_port*/,
                    const std::string& /*in_interface*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_lifeline_fd*/,
                    base::OnceCallback<void(bool /*allowed*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(RequestLoopbackTcpPortLockdown,
               bool(uint16_t /*in_port*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_lifeline_fd*/,
                    bool* /*out_allowed*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(RequestLoopbackTcpPortLockdownAsync,
               void(uint16_t /*in_port*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_lifeline_fd*/,
                    base::OnceCallback<void(bool /*allowed*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(ReleaseTcpPort,
               bool(uint16_t /*in_port*/,
                    const std::string& /*in_interface*/,
                    bool* /*out_success*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(ReleaseTcpPortAsync,
               void(uint16_t /*in_port*/,
                    const std::string& /*in_interface*/,
                    base::OnceCallback<void(bool /*success*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(ReleaseUdpPort,
               bool(uint16_t /*in_port*/,
                    const std::string& /*in_interface*/,
                    bool* /*out_success*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(ReleaseUdpPortAsync,
               void(uint16_t /*in_port*/,
                    const std::string& /*in_interface*/,
                    base::OnceCallback<void(bool /*success*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ReleaseLoopbackTcpPort,
               bool(uint16_t /*in_port*/,
                    bool* /*out_allowed*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(ReleaseLoopbackTcpPortAsync,
               void(uint16_t /*in_port*/,
                    base::OnceCallback<void(bool /*allowed*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD8(RequestTcpPortForward,
               bool(uint16_t /*in_port*/,
                    const std::string& /*in_interface*/,
                    const std::string& /*in_dst_ip*/,
                    uint16_t /*in_dst_port*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_lifeline_fd*/,
                    bool* /*out_allowed*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD8(RequestTcpPortForwardAsync,
               void(uint16_t /*in_port*/,
                    const std::string& /*in_interface*/,
                    const std::string& /*in_dst_ip*/,
                    uint16_t /*in_dst_port*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_lifeline_fd*/,
                    base::OnceCallback<void(bool /*allowed*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD8(RequestUdpPortForward,
               bool(uint16_t /*in_port*/,
                    const std::string& /*in_interface*/,
                    const std::string& /*in_dst_ip*/,
                    uint16_t /*in_dst_port*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_lifeline_fd*/,
                    bool* /*out_allowed*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD8(RequestUdpPortForwardAsync,
               void(uint16_t /*in_port*/,
                    const std::string& /*in_interface*/,
                    const std::string& /*in_dst_ip*/,
                    uint16_t /*in_dst_port*/,
                    const brillo::dbus_utils::FileDescriptor& /*in_lifeline_fd*/,
                    base::OnceCallback<void(bool /*allowed*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(ReleaseTcpPortForward,
               bool(uint16_t /*in_port*/,
                    const std::string& /*in_interface*/,
                    bool* /*out_success*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(ReleaseTcpPortForwardAsync,
               void(uint16_t /*in_port*/,
                    const std::string& /*in_interface*/,
                    base::OnceCallback<void(bool /*success*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(ReleaseUdpPortForward,
               bool(uint16_t /*in_port*/,
                    const std::string& /*in_interface*/,
                    bool* /*out_success*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD5(ReleaseUdpPortForwardAsync,
               void(uint16_t /*in_port*/,
                    const std::string& /*in_interface*/,
                    base::OnceCallback<void(bool /*success*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_PERMISSION_BROKER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_PERMISSION_BROKER_DBUS_PROXY_MOCKS_H
