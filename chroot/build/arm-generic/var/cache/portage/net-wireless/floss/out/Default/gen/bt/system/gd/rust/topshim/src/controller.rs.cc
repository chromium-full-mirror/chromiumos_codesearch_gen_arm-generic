#include "controller/controller_shim.h"
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

extern "C" {
::bluetooth::topshim::rust::ControllerIntf *bluetooth$topshim$rust$cxxbridge1$GetControllerInterface() noexcept {
  ::std::unique_ptr<::bluetooth::topshim::rust::ControllerIntf> (*GetControllerInterface$)() = ::bluetooth::topshim::rust::GetControllerInterface;
  return GetControllerInterface$().release();
}

::bluetooth::topshim::rust::RustRawAddress bluetooth$topshim$rust$cxxbridge1$ControllerIntf$read_local_addr(const ::bluetooth::topshim::rust::ControllerIntf &self) noexcept {
  ::bluetooth::topshim::rust::RustRawAddress (::bluetooth::topshim::rust::ControllerIntf::*read_local_addr$)() const = &::bluetooth::topshim::rust::ControllerIntf::read_local_addr;
  return (self.*read_local_addr$)();
}
} // extern "C"
} // namespace rust
} // namespace topshim
} // namespace bluetooth

extern "C" {
static_assert(::rust::detail::is_complete<::bluetooth::topshim::rust::ControllerIntf>::value, "definition of ControllerIntf is required");
static_assert(sizeof(::std::unique_ptr<::bluetooth::topshim::rust::ControllerIntf>) == sizeof(void *), "");
static_assert(alignof(::std::unique_ptr<::bluetooth::topshim::rust::ControllerIntf>) == alignof(void *), "");
void cxxbridge1$unique_ptr$bluetooth$topshim$rust$ControllerIntf$null(::std::unique_ptr<::bluetooth::topshim::rust::ControllerIntf> *ptr) noexcept {
  ::new (ptr) ::std::unique_ptr<::bluetooth::topshim::rust::ControllerIntf>();
}
void cxxbridge1$unique_ptr$bluetooth$topshim$rust$ControllerIntf$raw(::std::unique_ptr<::bluetooth::topshim::rust::ControllerIntf> *ptr, ::bluetooth::topshim::rust::ControllerIntf *raw) noexcept {
  ::new (ptr) ::std::unique_ptr<::bluetooth::topshim::rust::ControllerIntf>(raw);
}
const ::bluetooth::topshim::rust::ControllerIntf *cxxbridge1$unique_ptr$bluetooth$topshim$rust$ControllerIntf$get(const ::std::unique_ptr<::bluetooth::topshim::rust::ControllerIntf>& ptr) noexcept {
  return ptr.get();
}
::bluetooth::topshim::rust::ControllerIntf *cxxbridge1$unique_ptr$bluetooth$topshim$rust$ControllerIntf$release(::std::unique_ptr<::bluetooth::topshim::rust::ControllerIntf>& ptr) noexcept {
  return ptr.release();
}
void cxxbridge1$unique_ptr$bluetooth$topshim$rust$ControllerIntf$drop(::std::unique_ptr<::bluetooth::topshim::rust::ControllerIntf> *ptr) noexcept {
  ::rust::deleter_if<::rust::detail::is_complete<::bluetooth::topshim::rust::ControllerIntf>::value>{}(ptr);
}
} // extern "C"
