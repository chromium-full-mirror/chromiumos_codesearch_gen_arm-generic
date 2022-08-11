#include "btav/btav_shim.h"
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
      using AvrcpIntf = ::bluetooth::topshim::rust::AvrcpIntf;
    }
  }
}

namespace bluetooth {
namespace topshim {
namespace rust {
extern "C" {
::bluetooth::topshim::rust::AvrcpIntf *bluetooth$topshim$rust$cxxbridge1$GetAvrcpProfile(const ::std::uint8_t *btif) noexcept {
  ::std::unique_ptr<::bluetooth::topshim::rust::AvrcpIntf> (*GetAvrcpProfile$)(const ::std::uint8_t *) = ::bluetooth::topshim::rust::GetAvrcpProfile;
  return GetAvrcpProfile$(btif).release();
}

void bluetooth$topshim$rust$cxxbridge1$AvrcpIntf$init(::bluetooth::topshim::rust::AvrcpIntf &self) noexcept {
  void (::bluetooth::topshim::rust::AvrcpIntf::*init$)() = &::bluetooth::topshim::rust::AvrcpIntf::init;
  (self.*init$)();
}

void bluetooth$topshim$rust$cxxbridge1$AvrcpIntf$cleanup(::bluetooth::topshim::rust::AvrcpIntf &self) noexcept {
  void (::bluetooth::topshim::rust::AvrcpIntf::*cleanup$)() = &::bluetooth::topshim::rust::AvrcpIntf::cleanup;
  (self.*cleanup$)();
}

void bluetooth$topshim$rust$cxxbridge1$AvrcpIntf$set_volume(::bluetooth::topshim::rust::AvrcpIntf &self, ::std::int8_t volume) noexcept {
  void (::bluetooth::topshim::rust::AvrcpIntf::*set_volume$)(::std::int8_t) = &::bluetooth::topshim::rust::AvrcpIntf::set_volume;
  (self.*set_volume$)(volume);
}

void bluetooth$topshim$rust$cxxbridge1$avrcp_absolute_volume_enabled(bool enabled) noexcept;

void bluetooth$topshim$rust$cxxbridge1$avrcp_absolute_volume_update(::std::uint8_t volume) noexcept;
} // extern "C"

void avrcp_absolute_volume_enabled(bool enabled) noexcept {
  bluetooth$topshim$rust$cxxbridge1$avrcp_absolute_volume_enabled(enabled);
}

void avrcp_absolute_volume_update(::std::uint8_t volume) noexcept {
  bluetooth$topshim$rust$cxxbridge1$avrcp_absolute_volume_update(volume);
}
} // namespace rust
} // namespace topshim
} // namespace bluetooth

extern "C" {
static_assert(::rust::detail::is_complete<::bluetooth::topshim::rust::AvrcpIntf>::value, "definition of AvrcpIntf is required");
static_assert(sizeof(::std::unique_ptr<::bluetooth::topshim::rust::AvrcpIntf>) == sizeof(void *), "");
static_assert(alignof(::std::unique_ptr<::bluetooth::topshim::rust::AvrcpIntf>) == alignof(void *), "");
void cxxbridge1$unique_ptr$bluetooth$topshim$rust$AvrcpIntf$null(::std::unique_ptr<::bluetooth::topshim::rust::AvrcpIntf> *ptr) noexcept {
  ::new (ptr) ::std::unique_ptr<::bluetooth::topshim::rust::AvrcpIntf>();
}
void cxxbridge1$unique_ptr$bluetooth$topshim$rust$AvrcpIntf$raw(::std::unique_ptr<::bluetooth::topshim::rust::AvrcpIntf> *ptr, ::bluetooth::topshim::rust::AvrcpIntf *raw) noexcept {
  ::new (ptr) ::std::unique_ptr<::bluetooth::topshim::rust::AvrcpIntf>(raw);
}
const ::bluetooth::topshim::rust::AvrcpIntf *cxxbridge1$unique_ptr$bluetooth$topshim$rust$AvrcpIntf$get(const ::std::unique_ptr<::bluetooth::topshim::rust::AvrcpIntf>& ptr) noexcept {
  return ptr.get();
}
::bluetooth::topshim::rust::AvrcpIntf *cxxbridge1$unique_ptr$bluetooth$topshim$rust$AvrcpIntf$release(::std::unique_ptr<::bluetooth::topshim::rust::AvrcpIntf>& ptr) noexcept {
  return ptr.release();
}
void cxxbridge1$unique_ptr$bluetooth$topshim$rust$AvrcpIntf$drop(::std::unique_ptr<::bluetooth::topshim::rust::AvrcpIntf> *ptr) noexcept {
  ::rust::deleter_if<::rust::detail::is_complete<::bluetooth::topshim::rust::AvrcpIntf>::value>{}(ptr);
}
} // extern "C"
