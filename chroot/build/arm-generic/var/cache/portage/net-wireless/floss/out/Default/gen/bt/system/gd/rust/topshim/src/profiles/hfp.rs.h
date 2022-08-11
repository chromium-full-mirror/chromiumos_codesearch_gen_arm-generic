#pragma once
#include "hfp/hfp_shim.h"
#include <array>
#include <cstdint>
#include <memory>
#include <type_traits>

namespace bluetooth {
  namespace topshim {
    namespace rust {
      struct RustRawAddress;
      using HfpIntf = ::bluetooth::topshim::rust::HfpIntf;
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

void hfp_connection_state_callback(::std::uint32_t state, ::bluetooth::topshim::rust::RustRawAddress addr) noexcept;

void hfp_audio_state_callback(::std::uint32_t state, ::bluetooth::topshim::rust::RustRawAddress addr) noexcept;

void hfp_volume_update_callback(::std::uint8_t volume, ::bluetooth::topshim::rust::RustRawAddress addr) noexcept;
} // namespace rust
} // namespace topshim
} // namespace bluetooth
