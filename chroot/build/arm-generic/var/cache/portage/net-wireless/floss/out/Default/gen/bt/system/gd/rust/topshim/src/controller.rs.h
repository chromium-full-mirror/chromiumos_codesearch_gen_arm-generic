#pragma once
#include "controller/controller_shim.h"
#include <array>
#include <cstdint>
#include <memory>
#include <type_traits>

namespace bluetooth {
  namespace topshim {
    namespace rust {
      struct RustRawAddress;
      using ControllerIntf = ::bluetooth::topshim::rust::ControllerIntf;
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
} // namespace rust
} // namespace topshim
} // namespace bluetooth
