// Automatic generation of D-Bus interface mock proxies for:
//  - org.bluez.Adapter1
//  - org.bluez.AdminPolicyStatus1
//  - org.bluez.Battery1
//  - org.bluez.Device1
//  - org.bluez.LEAdvertisingManager1
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DIAGNOSTICS_OUT_DEFAULT_GEN_INCLUDE_DIAGNOSTICS_DBUS_BINDINGS_BLUETOOTH_DBUS_PROXY_MOCKS_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DIAGNOSTICS_OUT_DEFAULT_GEN_INCLUDE_DIAGNOSTICS_DBUS_BINDINGS_BLUETOOTH_DBUS_PROXY_MOCKS_H
#include <string>
#include <vector>

#include <base/callback_forward.h>
#include <base/logging.h>
#include <brillo/any.h>
#include <brillo/errors/error.h>
#include <brillo/variant_dictionary.h>
#include <gmock/gmock.h>

#include "diagnostics/dbus_bindings/bluetooth/dbus-proxies.h"

namespace org {
namespace bluez {

// Mock object for Adapter1ProxyInterface.
class Adapter1ProxyMock : public Adapter1ProxyInterface {
 public:
  Adapter1ProxyMock() = default;
  Adapter1ProxyMock(const Adapter1ProxyMock&) = delete;
  Adapter1ProxyMock& operator=(const Adapter1ProxyMock&) = delete;

  MOCK_CONST_METHOD0(address, const std::string&());
  MOCK_CONST_METHOD0(name, const std::string&());
  MOCK_CONST_METHOD0(powered, bool());
  MOCK_CONST_METHOD0(discoverable, bool());
  MOCK_CONST_METHOD0(discovering, bool());
  MOCK_CONST_METHOD0(uuids, const std::vector<std::string>&());
  MOCK_CONST_METHOD0(modalias, const std::string&());
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
  MOCK_METHOD1(SetPropertyChangedCallback,
               void(const base::RepeatingCallback<void(Adapter1ProxyInterface*, const std::string&)>&));
};
}  // namespace bluez
}  // namespace org

namespace org {
namespace bluez {

// Mock object for AdminPolicyStatus1ProxyInterface.
class AdminPolicyStatus1ProxyMock : public AdminPolicyStatus1ProxyInterface {
 public:
  AdminPolicyStatus1ProxyMock() = default;
  AdminPolicyStatus1ProxyMock(const AdminPolicyStatus1ProxyMock&) = delete;
  AdminPolicyStatus1ProxyMock& operator=(const AdminPolicyStatus1ProxyMock&) = delete;

  MOCK_CONST_METHOD0(service_allow_list, const std::vector<std::string>&());
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
  MOCK_METHOD1(SetPropertyChangedCallback,
               void(const base::RepeatingCallback<void(AdminPolicyStatus1ProxyInterface*, const std::string&)>&));
};
}  // namespace bluez
}  // namespace org

namespace org {
namespace bluez {

// Mock object for Battery1ProxyInterface.
class Battery1ProxyMock : public Battery1ProxyInterface {
 public:
  Battery1ProxyMock() = default;
  Battery1ProxyMock(const Battery1ProxyMock&) = delete;
  Battery1ProxyMock& operator=(const Battery1ProxyMock&) = delete;

  MOCK_CONST_METHOD0(percentage, uint8_t());
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
  MOCK_METHOD1(SetPropertyChangedCallback,
               void(const base::RepeatingCallback<void(Battery1ProxyInterface*, const std::string&)>&));
};
}  // namespace bluez
}  // namespace org

namespace org {
namespace bluez {

// Mock object for Device1ProxyInterface.
class Device1ProxyMock : public Device1ProxyInterface {
 public:
  Device1ProxyMock() = default;
  Device1ProxyMock(const Device1ProxyMock&) = delete;
  Device1ProxyMock& operator=(const Device1ProxyMock&) = delete;

  MOCK_CONST_METHOD0(address, const std::string&());
  MOCK_CONST_METHOD0(name, const std::string&());
  MOCK_CONST_METHOD0(type, const std::string&());
  MOCK_CONST_METHOD0(appearance, uint16_t());
  MOCK_CONST_METHOD0(modalias, const std::string&());
  MOCK_CONST_METHOD0(rssi, int16_t());
  MOCK_CONST_METHOD0(mtu, uint16_t());
  MOCK_CONST_METHOD0(uuids, const std::vector<std::string>&());
  MOCK_CONST_METHOD0(connected, bool());
  MOCK_CONST_METHOD0(adapter, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
  MOCK_METHOD1(SetPropertyChangedCallback,
               void(const base::RepeatingCallback<void(Device1ProxyInterface*, const std::string&)>&));
};
}  // namespace bluez
}  // namespace org

namespace org {
namespace bluez {

// Mock object for LEAdvertisingManager1ProxyInterface.
class LEAdvertisingManager1ProxyMock : public LEAdvertisingManager1ProxyInterface {
 public:
  LEAdvertisingManager1ProxyMock() = default;
  LEAdvertisingManager1ProxyMock(const LEAdvertisingManager1ProxyMock&) = delete;
  LEAdvertisingManager1ProxyMock& operator=(const LEAdvertisingManager1ProxyMock&) = delete;

  MOCK_CONST_METHOD0(supported_capabilities, const brillo::VariantDictionary&());
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
  MOCK_METHOD1(SetPropertyChangedCallback,
               void(const base::RepeatingCallback<void(LEAdvertisingManager1ProxyInterface*, const std::string&)>&));
};
}  // namespace bluez
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_DIAGNOSTICS_OUT_DEFAULT_GEN_INCLUDE_DIAGNOSTICS_DBUS_BINDINGS_BLUETOOTH_DBUS_PROXY_MOCKS_H
