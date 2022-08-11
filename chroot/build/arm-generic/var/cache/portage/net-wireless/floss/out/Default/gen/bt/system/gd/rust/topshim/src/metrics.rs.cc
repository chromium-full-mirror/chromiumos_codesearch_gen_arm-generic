#include "metrics/metrics_shim.h"
#include <array>
#include <cstdint>
#include <type_traits>

namespace bluetooth {
  namespace topshim {
    namespace rust {
      struct RustRawAddress;
    }
  }
}

namespace bluetooth {
namespace topshim {
namespace rust {
#ifndef CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$RustRawAddress
#define CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$RustRawAddress
struct RustRawAddress final {
  ::std::array<::std::uint8_t, 6> address;

  using IsRelocatable = ::std::true_type;
};
#endif // CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$RustRawAddress

extern "C" {
void bluetooth$topshim$rust$cxxbridge1$adapter_state_changed(::std::uint32_t state) noexcept {
  void (*adapter_state_changed$)(::std::uint32_t) = ::bluetooth::topshim::rust::adapter_state_changed;
  adapter_state_changed$(state);
}

void bluetooth$topshim$rust$cxxbridge1$bond_create_attempt(::bluetooth::topshim::rust::RustRawAddress bt_addr, ::std::uint32_t device_type) noexcept {
  void (*bond_create_attempt$)(::bluetooth::topshim::rust::RustRawAddress, ::std::uint32_t) = ::bluetooth::topshim::rust::bond_create_attempt;
  bond_create_attempt$(bt_addr, device_type);
}

void bluetooth$topshim$rust$cxxbridge1$bond_state_changed(::bluetooth::topshim::rust::RustRawAddress bt_addr, ::std::uint32_t device_type, ::std::uint32_t status, ::std::uint32_t bond_state, ::std::int32_t fail_reason) noexcept {
  void (*bond_state_changed$)(::bluetooth::topshim::rust::RustRawAddress, ::std::uint32_t, ::std::uint32_t, ::std::uint32_t, ::std::int32_t) = ::bluetooth::topshim::rust::bond_state_changed;
  bond_state_changed$(bt_addr, device_type, status, bond_state, fail_reason);
}
} // extern "C"
} // namespace rust
} // namespace topshim
} // namespace bluetooth
