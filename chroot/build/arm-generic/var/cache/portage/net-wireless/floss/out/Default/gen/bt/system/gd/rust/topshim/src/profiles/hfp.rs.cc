#include "hfp/hfp_shim.h"
#include <array>
#include <cstddef>
#include <cstdint>
#include <memory>
#include <new>
#include <type_traits>
#include <utility>

namespace rust {
inline namespace cxxbridge1 {
// #include "rust/cxx.h"

#ifndef CXXBRIDGE1_IS_COMPLETE
#define CXXBRIDGE1_IS_COMPLETE
namespace detail {
namespace {
template <typename T, typename = std::size_t>
struct is_complete : std::false_type {};
template <typename T>
struct is_complete<T, decltype(sizeof(T))> : std::true_type {};
} // namespace
} // namespace detail
#endif // CXXBRIDGE1_IS_COMPLETE

namespace {
template <bool> struct deleter_if {
  template <typename T> void operator()(T *) {}
};

template <> struct deleter_if<true> {
  template <typename T> void operator()(T *ptr) { ptr->~T(); }
};
} // namespace
} // namespace cxxbridge1
} // namespace rust

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

extern "C" {
::bluetooth::topshim::rust::HfpIntf *bluetooth$topshim$rust$cxxbridge1$GetHfpProfile(const ::std::uint8_t *btif) noexcept {
  ::std::unique_ptr<::bluetooth::topshim::rust::HfpIntf> (*GetHfpProfile$)(const ::std::uint8_t *) = ::bluetooth::topshim::rust::GetHfpProfile;
  return GetHfpProfile$(btif).release();
}

::std::int32_t bluetooth$topshim$rust$cxxbridge1$HfpIntf$init(::bluetooth::topshim::rust::HfpIntf &self) noexcept {
  ::std::int32_t (::bluetooth::topshim::rust::HfpIntf::*init$)() = &::bluetooth::topshim::rust::HfpIntf::init;
  return (self.*init$)();
}

::std::int32_t bluetooth$topshim$rust$cxxbridge1$HfpIntf$connect(::bluetooth::topshim::rust::HfpIntf &self, ::bluetooth::topshim::rust::RustRawAddress bt_addr) noexcept {
  ::std::int32_t (::bluetooth::topshim::rust::HfpIntf::*connect$)(::bluetooth::topshim::rust::RustRawAddress) = &::bluetooth::topshim::rust::HfpIntf::connect;
  return (self.*connect$)(bt_addr);
}

::std::int32_t bluetooth$topshim$rust$cxxbridge1$HfpIntf$connect_audio(::bluetooth::topshim::rust::HfpIntf &self, ::bluetooth::topshim::rust::RustRawAddress bt_addr) noexcept {
  ::std::int32_t (::bluetooth::topshim::rust::HfpIntf::*connect_audio$)(::bluetooth::topshim::rust::RustRawAddress) = &::bluetooth::topshim::rust::HfpIntf::connect_audio;
  return (self.*connect_audio$)(bt_addr);
}

::std::int32_t bluetooth$topshim$rust$cxxbridge1$HfpIntf$set_volume(::bluetooth::topshim::rust::HfpIntf &self, ::std::int8_t volume, ::bluetooth::topshim::rust::RustRawAddress bt_addr) noexcept {
  ::std::int32_t (::bluetooth::topshim::rust::HfpIntf::*set_volume$)(::std::int8_t, ::bluetooth::topshim::rust::RustRawAddress) = &::bluetooth::topshim::rust::HfpIntf::set_volume;
  return (self.*set_volume$)(volume, bt_addr);
}

::std::int32_t bluetooth$topshim$rust$cxxbridge1$HfpIntf$disconnect(::bluetooth::topshim::rust::HfpIntf &self, ::bluetooth::topshim::rust::RustRawAddress bt_addr) noexcept {
  ::std::int32_t (::bluetooth::topshim::rust::HfpIntf::*disconnect$)(::bluetooth::topshim::rust::RustRawAddress) = &::bluetooth::topshim::rust::HfpIntf::disconnect;
  return (self.*disconnect$)(bt_addr);
}

::std::int32_t bluetooth$topshim$rust$cxxbridge1$HfpIntf$disconnect_audio(::bluetooth::topshim::rust::HfpIntf &self, ::bluetooth::topshim::rust::RustRawAddress bt_addr) noexcept {
  ::std::int32_t (::bluetooth::topshim::rust::HfpIntf::*disconnect_audio$)(::bluetooth::topshim::rust::RustRawAddress) = &::bluetooth::topshim::rust::HfpIntf::disconnect_audio;
  return (self.*disconnect_audio$)(bt_addr);
}

bool bluetooth$topshim$rust$cxxbridge1$HfpIntf$get_wbs_supported(::bluetooth::topshim::rust::HfpIntf &self) noexcept {
  bool (::bluetooth::topshim::rust::HfpIntf::*get_wbs_supported$)() = &::bluetooth::topshim::rust::HfpIntf::get_wbs_supported;
  return (self.*get_wbs_supported$)();
}

void bluetooth$topshim$rust$cxxbridge1$HfpIntf$cleanup(::bluetooth::topshim::rust::HfpIntf &self) noexcept {
  void (::bluetooth::topshim::rust::HfpIntf::*cleanup$)() = &::bluetooth::topshim::rust::HfpIntf::cleanup;
  (self.*cleanup$)();
}

void bluetooth$topshim$rust$cxxbridge1$hfp_connection_state_callback(::std::uint32_t state, ::bluetooth::topshim::rust::RustRawAddress addr) noexcept;

void bluetooth$topshim$rust$cxxbridge1$hfp_audio_state_callback(::std::uint32_t state, ::bluetooth::topshim::rust::RustRawAddress addr) noexcept;

void bluetooth$topshim$rust$cxxbridge1$hfp_volume_update_callback(::std::uint8_t volume, ::bluetooth::topshim::rust::RustRawAddress addr) noexcept;
} // extern "C"

void hfp_connection_state_callback(::std::uint32_t state, ::bluetooth::topshim::rust::RustRawAddress addr) noexcept {
  bluetooth$topshim$rust$cxxbridge1$hfp_connection_state_callback(state, addr);
}

void hfp_audio_state_callback(::std::uint32_t state, ::bluetooth::topshim::rust::RustRawAddress addr) noexcept {
  bluetooth$topshim$rust$cxxbridge1$hfp_audio_state_callback(state, addr);
}

void hfp_volume_update_callback(::std::uint8_t volume, ::bluetooth::topshim::rust::RustRawAddress addr) noexcept {
  bluetooth$topshim$rust$cxxbridge1$hfp_volume_update_callback(volume, addr);
}
} // namespace rust
} // namespace topshim
} // namespace bluetooth

extern "C" {
static_assert(::rust::detail::is_complete<::bluetooth::topshim::rust::HfpIntf>::value, "definition of HfpIntf is required");
static_assert(sizeof(::std::unique_ptr<::bluetooth::topshim::rust::HfpIntf>) == sizeof(void *), "");
static_assert(alignof(::std::unique_ptr<::bluetooth::topshim::rust::HfpIntf>) == alignof(void *), "");
void cxxbridge1$unique_ptr$bluetooth$topshim$rust$HfpIntf$null(::std::unique_ptr<::bluetooth::topshim::rust::HfpIntf> *ptr) noexcept {
  ::new (ptr) ::std::unique_ptr<::bluetooth::topshim::rust::HfpIntf>();
}
void cxxbridge1$unique_ptr$bluetooth$topshim$rust$HfpIntf$raw(::std::unique_ptr<::bluetooth::topshim::rust::HfpIntf> *ptr, ::bluetooth::topshim::rust::HfpIntf *raw) noexcept {
  ::new (ptr) ::std::unique_ptr<::bluetooth::topshim::rust::HfpIntf>(raw);
}
const ::bluetooth::topshim::rust::HfpIntf *cxxbridge1$unique_ptr$bluetooth$topshim$rust$HfpIntf$get(const ::std::unique_ptr<::bluetooth::topshim::rust::HfpIntf>& ptr) noexcept {
  return ptr.get();
}
::bluetooth::topshim::rust::HfpIntf *cxxbridge1$unique_ptr$bluetooth$topshim$rust$HfpIntf$release(::std::unique_ptr<::bluetooth::topshim::rust::HfpIntf>& ptr) noexcept {
  return ptr.release();
}
void cxxbridge1$unique_ptr$bluetooth$topshim$rust$HfpIntf$drop(::std::unique_ptr<::bluetooth::topshim::rust::HfpIntf> *ptr) noexcept {
  ::rust::deleter_if<::rust::detail::is_complete<::bluetooth::topshim::rust::HfpIntf>::value>{}(ptr);
}
} // extern "C"
