#include "keystore/fake_bt_keystore.h"
#include <cstddef>
#include <memory>
#include <new>
#include <type_traits>
#include <utility>

namespace rust {
inline namespace cxxbridge1 {
// #include "rust/cxx.h"

#ifndef CXXBRIDGE1_RUST_OPAQUE
#define CXXBRIDGE1_RUST_OPAQUE
class Opaque {
public:
  Opaque() = delete;
  Opaque(const Opaque &) = delete;
  ~Opaque() = delete;
};
#endif // CXXBRIDGE1_RUST_OPAQUE

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

#ifndef CXXBRIDGE1_LAYOUT
#define CXXBRIDGE1_LAYOUT
class layout {
  template <typename T>
  friend std::size_t size_of();
  template <typename T>
  friend std::size_t align_of();
  template <typename T>
  static typename std::enable_if<std::is_base_of<Opaque, T>::value,
                                 std::size_t>::type
  do_size_of() {
    return T::layout::size();
  }
  template <typename T>
  static typename std::enable_if<!std::is_base_of<Opaque, T>::value,
                                 std::size_t>::type
  do_size_of() {
    return sizeof(T);
  }
  template <typename T>
  static
      typename std::enable_if<detail::is_complete<T>::value, std::size_t>::type
      size_of() {
    return do_size_of<T>();
  }
  template <typename T>
  static typename std::enable_if<std::is_base_of<Opaque, T>::value,
                                 std::size_t>::type
  do_align_of() {
    return T::layout::align();
  }
  template <typename T>
  static typename std::enable_if<!std::is_base_of<Opaque, T>::value,
                                 std::size_t>::type
  do_align_of() {
    return alignof(T);
  }
  template <typename T>
  static
      typename std::enable_if<detail::is_complete<T>::value, std::size_t>::type
      align_of() {
    return do_align_of<T>();
  }
};

template <typename T>
std::size_t size_of() {
  return layout::size_of<T>();
}

template <typename T>
std::size_t align_of() {
  return layout::align_of<T>();
}
#endif // CXXBRIDGE1_LAYOUT

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
  namespace fake_bluetooth_keystore {
    struct ParameterProvider;
    using BluetoothKeystoreInterface = ::bluetooth::fake_bluetooth_keystore::BluetoothKeystoreInterface;
  }
}

namespace bluetooth {
namespace fake_bluetooth_keystore {
#ifndef CXXBRIDGE1_STRUCT_bluetooth$fake_bluetooth_keystore$ParameterProvider
#define CXXBRIDGE1_STRUCT_bluetooth$fake_bluetooth_keystore$ParameterProvider
struct ParameterProvider final : public ::rust::Opaque {
  ~ParameterProvider() = delete;

private:
  friend ::rust::layout;
  struct layout {
    static ::std::size_t size() noexcept;
    static ::std::size_t align() noexcept;
  };
};
#endif // CXXBRIDGE1_STRUCT_bluetooth$fake_bluetooth_keystore$ParameterProvider

extern "C" {
::std::size_t bluetooth$fake_bluetooth_keystore$cxxbridge1$ParameterProvider$operator$sizeof() noexcept;
::std::size_t bluetooth$fake_bluetooth_keystore$cxxbridge1$ParameterProvider$operator$alignof() noexcept;

::bluetooth::fake_bluetooth_keystore::BluetoothKeystoreInterface *bluetooth$fake_bluetooth_keystore$cxxbridge1$new_bt_keystore_interface() noexcept {
  ::std::unique_ptr<::bluetooth::fake_bluetooth_keystore::BluetoothKeystoreInterface> (*new_bt_keystore_interface$)() = ::bluetooth::fake_bluetooth_keystore::new_bt_keystore_interface;
  return new_bt_keystore_interface$().release();
}
} // extern "C"

::std::size_t ParameterProvider::layout::size() noexcept {
  return bluetooth$fake_bluetooth_keystore$cxxbridge1$ParameterProvider$operator$sizeof();
}

::std::size_t ParameterProvider::layout::align() noexcept {
  return bluetooth$fake_bluetooth_keystore$cxxbridge1$ParameterProvider$operator$alignof();
}
} // namespace fake_bluetooth_keystore
} // namespace bluetooth

extern "C" {
static_assert(::rust::detail::is_complete<::bluetooth::fake_bluetooth_keystore::BluetoothKeystoreInterface>::value, "definition of BluetoothKeystoreInterface is required");
static_assert(sizeof(::std::unique_ptr<::bluetooth::fake_bluetooth_keystore::BluetoothKeystoreInterface>) == sizeof(void *), "");
static_assert(alignof(::std::unique_ptr<::bluetooth::fake_bluetooth_keystore::BluetoothKeystoreInterface>) == alignof(void *), "");
void cxxbridge1$unique_ptr$bluetooth$fake_bluetooth_keystore$BluetoothKeystoreInterface$null(::std::unique_ptr<::bluetooth::fake_bluetooth_keystore::BluetoothKeystoreInterface> *ptr) noexcept {
  ::new (ptr) ::std::unique_ptr<::bluetooth::fake_bluetooth_keystore::BluetoothKeystoreInterface>();
}
void cxxbridge1$unique_ptr$bluetooth$fake_bluetooth_keystore$BluetoothKeystoreInterface$raw(::std::unique_ptr<::bluetooth::fake_bluetooth_keystore::BluetoothKeystoreInterface> *ptr, ::bluetooth::fake_bluetooth_keystore::BluetoothKeystoreInterface *raw) noexcept {
  ::new (ptr) ::std::unique_ptr<::bluetooth::fake_bluetooth_keystore::BluetoothKeystoreInterface>(raw);
}
const ::bluetooth::fake_bluetooth_keystore::BluetoothKeystoreInterface *cxxbridge1$unique_ptr$bluetooth$fake_bluetooth_keystore$BluetoothKeystoreInterface$get(const ::std::unique_ptr<::bluetooth::fake_bluetooth_keystore::BluetoothKeystoreInterface>& ptr) noexcept {
  return ptr.get();
}
::bluetooth::fake_bluetooth_keystore::BluetoothKeystoreInterface *cxxbridge1$unique_ptr$bluetooth$fake_bluetooth_keystore$BluetoothKeystoreInterface$release(::std::unique_ptr<::bluetooth::fake_bluetooth_keystore::BluetoothKeystoreInterface>& ptr) noexcept {
  return ptr.release();
}
void cxxbridge1$unique_ptr$bluetooth$fake_bluetooth_keystore$BluetoothKeystoreInterface$drop(::std::unique_ptr<::bluetooth::fake_bluetooth_keystore::BluetoothKeystoreInterface> *ptr) noexcept {
  ::rust::deleter_if<::rust::detail::is_complete<::bluetooth::fake_bluetooth_keystore::BluetoothKeystoreInterface>::value>{}(ptr);
}
} // extern "C"
