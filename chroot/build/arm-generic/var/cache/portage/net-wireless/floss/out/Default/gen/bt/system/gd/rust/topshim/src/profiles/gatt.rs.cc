#include "gatt/gatt_shim.h"
#include "gatt/gatt_ble_scanner_shim.h"
#include "gatt/gatt_ble_advertiser_shim.h"
#include <algorithm>
#include <array>
#include <cassert>
#include <cstddef>
#include <cstdint>
#include <initializer_list>
#include <iterator>
#include <memory>
#include <new>
#include <stdexcept>
#include <type_traits>
#include <utility>

namespace rust {
inline namespace cxxbridge1 {
// #include "rust/cxx.h"

#ifndef CXXBRIDGE1_PANIC
#define CXXBRIDGE1_PANIC
template <typename Exception>
void panic [[noreturn]] (const char *msg);
#endif // CXXBRIDGE1_PANIC

namespace {
template <typename T>
class impl;
} // namespace

class Opaque;

template <typename T>
::std::size_t size_of();
template <typename T>
::std::size_t align_of();

#ifndef CXXBRIDGE1_RUST_SLICE
#define CXXBRIDGE1_RUST_SLICE
namespace detail {
template <bool>
struct copy_assignable_if {};

template <>
struct copy_assignable_if<false> {
  copy_assignable_if() noexcept = default;
  copy_assignable_if(const copy_assignable_if &) noexcept = default;
  copy_assignable_if &operator=(const copy_assignable_if &) &noexcept = delete;
  copy_assignable_if &operator=(copy_assignable_if &&) &noexcept = default;
};
} // namespace detail

template <typename T>
class Slice final
    : private detail::copy_assignable_if<std::is_const<T>::value> {
public:
  using value_type = T;

  Slice() noexcept;
  Slice(T *, std::size_t count) noexcept;

  Slice &operator=(const Slice<T> &) &noexcept = default;
  Slice &operator=(Slice<T> &&) &noexcept = default;

  T *data() const noexcept;
  std::size_t size() const noexcept;
  std::size_t length() const noexcept;
  bool empty() const noexcept;

  T &operator[](std::size_t n) const noexcept;
  T &at(std::size_t n) const;
  T &front() const noexcept;
  T &back() const noexcept;

  Slice(const Slice<T> &) noexcept = default;
  ~Slice() noexcept = default;

  class iterator;
  iterator begin() const noexcept;
  iterator end() const noexcept;

  void swap(Slice &) noexcept;

private:
  class uninit;
  Slice(uninit) noexcept;
  friend impl<Slice>;
  friend void sliceInit(void *, const void *, std::size_t) noexcept;
  friend void *slicePtr(const void *) noexcept;
  friend std::size_t sliceLen(const void *) noexcept;

  std::array<std::uintptr_t, 2> repr;
};

template <typename T>
class Slice<T>::iterator final {
public:
  using iterator_category = std::random_access_iterator_tag;
  using value_type = T;
  using difference_type = std::ptrdiff_t;
  using pointer = typename std::add_pointer<T>::type;
  using reference = typename std::add_lvalue_reference<T>::type;

  reference operator*() const noexcept;
  pointer operator->() const noexcept;
  reference operator[](difference_type) const noexcept;

  iterator &operator++() noexcept;
  iterator operator++(int) noexcept;
  iterator &operator--() noexcept;
  iterator operator--(int) noexcept;

  iterator &operator+=(difference_type) noexcept;
  iterator &operator-=(difference_type) noexcept;
  iterator operator+(difference_type) const noexcept;
  iterator operator-(difference_type) const noexcept;
  difference_type operator-(const iterator &) const noexcept;

  bool operator==(const iterator &) const noexcept;
  bool operator!=(const iterator &) const noexcept;
  bool operator<(const iterator &) const noexcept;
  bool operator<=(const iterator &) const noexcept;
  bool operator>(const iterator &) const noexcept;
  bool operator>=(const iterator &) const noexcept;

private:
  friend class Slice;
  void *pos;
  std::size_t stride;
};

template <typename T>
Slice<T>::Slice() noexcept {
  sliceInit(this, reinterpret_cast<void *>(align_of<T>()), 0);
}

template <typename T>
Slice<T>::Slice(T *s, std::size_t count) noexcept {
  assert(s != nullptr || count == 0);
  sliceInit(this,
            s == nullptr && count == 0
                ? reinterpret_cast<void *>(align_of<T>())
                : const_cast<typename std::remove_const<T>::type *>(s),
            count);
}

template <typename T>
T *Slice<T>::data() const noexcept {
  return reinterpret_cast<T *>(slicePtr(this));
}

template <typename T>
std::size_t Slice<T>::size() const noexcept {
  return sliceLen(this);
}

template <typename T>
std::size_t Slice<T>::length() const noexcept {
  return this->size();
}

template <typename T>
bool Slice<T>::empty() const noexcept {
  return this->size() == 0;
}

template <typename T>
T &Slice<T>::operator[](std::size_t n) const noexcept {
  assert(n < this->size());
  auto pos = static_cast<char *>(slicePtr(this)) + size_of<T>() * n;
  return *reinterpret_cast<T *>(pos);
}

template <typename T>
T &Slice<T>::at(std::size_t n) const {
  if (n >= this->size()) {
    panic<std::out_of_range>("rust::Slice index out of range");
  }
  return (*this)[n];
}

template <typename T>
T &Slice<T>::front() const noexcept {
  assert(!this->empty());
  return (*this)[0];
}

template <typename T>
T &Slice<T>::back() const noexcept {
  assert(!this->empty());
  return (*this)[this->size() - 1];
}

template <typename T>
typename Slice<T>::iterator::reference
Slice<T>::iterator::operator*() const noexcept {
  return *static_cast<T *>(this->pos);
}

template <typename T>
typename Slice<T>::iterator::pointer
Slice<T>::iterator::operator->() const noexcept {
  return static_cast<T *>(this->pos);
}

template <typename T>
typename Slice<T>::iterator::reference Slice<T>::iterator::operator[](
    typename Slice<T>::iterator::difference_type n) const noexcept {
  auto pos = static_cast<char *>(this->pos) + this->stride * n;
  return *reinterpret_cast<T *>(pos);
}

template <typename T>
typename Slice<T>::iterator &Slice<T>::iterator::operator++() noexcept {
  this->pos = static_cast<char *>(this->pos) + this->stride;
  return *this;
}

template <typename T>
typename Slice<T>::iterator Slice<T>::iterator::operator++(int) noexcept {
  auto ret = iterator(*this);
  this->pos = static_cast<char *>(this->pos) + this->stride;
  return ret;
}

template <typename T>
typename Slice<T>::iterator &Slice<T>::iterator::operator--() noexcept {
  this->pos = static_cast<char *>(this->pos) - this->stride;
  return *this;
}

template <typename T>
typename Slice<T>::iterator Slice<T>::iterator::operator--(int) noexcept {
  auto ret = iterator(*this);
  this->pos = static_cast<char *>(this->pos) - this->stride;
  return ret;
}

template <typename T>
typename Slice<T>::iterator &Slice<T>::iterator::operator+=(
    typename Slice<T>::iterator::difference_type n) noexcept {
  this->pos = static_cast<char *>(this->pos) + this->stride * n;
  return *this;
}

template <typename T>
typename Slice<T>::iterator &Slice<T>::iterator::operator-=(
    typename Slice<T>::iterator::difference_type n) noexcept {
  this->pos = static_cast<char *>(this->pos) - this->stride * n;
  return *this;
}

template <typename T>
typename Slice<T>::iterator Slice<T>::iterator::operator+(
    typename Slice<T>::iterator::difference_type n) const noexcept {
  auto ret = iterator(*this);
  ret.pos = static_cast<char *>(this->pos) + this->stride * n;
  return ret;
}

template <typename T>
typename Slice<T>::iterator Slice<T>::iterator::operator-(
    typename Slice<T>::iterator::difference_type n) const noexcept {
  auto ret = iterator(*this);
  ret.pos = static_cast<char *>(this->pos) - this->stride * n;
  return ret;
}

template <typename T>
typename Slice<T>::iterator::difference_type
Slice<T>::iterator::operator-(const iterator &other) const noexcept {
  auto diff = std::distance(static_cast<char *>(other.pos),
                            static_cast<char *>(this->pos));
  return diff / this->stride;
}

template <typename T>
bool Slice<T>::iterator::operator==(const iterator &other) const noexcept {
  return this->pos == other.pos;
}

template <typename T>
bool Slice<T>::iterator::operator!=(const iterator &other) const noexcept {
  return this->pos != other.pos;
}

template <typename T>
bool Slice<T>::iterator::operator<(const iterator &other) const noexcept {
  return this->pos < other.pos;
}

template <typename T>
bool Slice<T>::iterator::operator<=(const iterator &other) const noexcept {
  return this->pos <= other.pos;
}

template <typename T>
bool Slice<T>::iterator::operator>(const iterator &other) const noexcept {
  return this->pos > other.pos;
}

template <typename T>
bool Slice<T>::iterator::operator>=(const iterator &other) const noexcept {
  return this->pos >= other.pos;
}

template <typename T>
typename Slice<T>::iterator Slice<T>::begin() const noexcept {
  iterator it;
  it.pos = slicePtr(this);
  it.stride = size_of<T>();
  return it;
}

template <typename T>
typename Slice<T>::iterator Slice<T>::end() const noexcept {
  iterator it = this->begin();
  it.pos = static_cast<char *>(it.pos) + it.stride * this->size();
  return it;
}

template <typename T>
void Slice<T>::swap(Slice &rhs) noexcept {
  std::swap(*this, rhs);
}
#endif // CXXBRIDGE1_RUST_SLICE

#ifndef CXXBRIDGE1_RUST_BITCOPY_T
#define CXXBRIDGE1_RUST_BITCOPY_T
struct unsafe_bitcopy_t final {
  explicit unsafe_bitcopy_t() = default;
};
#endif // CXXBRIDGE1_RUST_BITCOPY_T

#ifndef CXXBRIDGE1_RUST_BITCOPY
#define CXXBRIDGE1_RUST_BITCOPY
constexpr unsafe_bitcopy_t unsafe_bitcopy{};
#endif // CXXBRIDGE1_RUST_BITCOPY

#ifndef CXXBRIDGE1_RUST_VEC
#define CXXBRIDGE1_RUST_VEC
template <typename T>
class Vec final {
public:
  using value_type = T;

  Vec() noexcept;
  Vec(std::initializer_list<T>);
  Vec(const Vec &);
  Vec(Vec &&) noexcept;
  ~Vec() noexcept;

  Vec &operator=(Vec &&) &noexcept;
  Vec &operator=(const Vec &) &;

  std::size_t size() const noexcept;
  bool empty() const noexcept;
  const T *data() const noexcept;
  T *data() noexcept;
  std::size_t capacity() const noexcept;

  const T &operator[](std::size_t n) const noexcept;
  const T &at(std::size_t n) const;
  const T &front() const noexcept;
  const T &back() const noexcept;

  T &operator[](std::size_t n) noexcept;
  T &at(std::size_t n);
  T &front() noexcept;
  T &back() noexcept;

  void reserve(std::size_t new_cap);
  void push_back(const T &value);
  void push_back(T &&value);
  template <typename... Args>
  void emplace_back(Args &&...args);

  using iterator = typename Slice<T>::iterator;
  iterator begin() noexcept;
  iterator end() noexcept;

  using const_iterator = typename Slice<const T>::iterator;
  const_iterator begin() const noexcept;
  const_iterator end() const noexcept;
  const_iterator cbegin() const noexcept;
  const_iterator cend() const noexcept;

  void swap(Vec &) noexcept;

  Vec(unsafe_bitcopy_t, const Vec &) noexcept;

private:
  void reserve_total(std::size_t cap) noexcept;
  void set_len(std::size_t len) noexcept;
  void drop() noexcept;

  friend void swap(Vec &lhs, Vec &rhs) noexcept { lhs.swap(rhs); }

  std::array<std::uintptr_t, 3> repr;
};

template <typename T>
Vec<T>::Vec(std::initializer_list<T> init) : Vec{} {
  this->reserve_total(init.size());
  std::move(init.begin(), init.end(), std::back_inserter(*this));
}

template <typename T>
Vec<T>::Vec(const Vec &other) : Vec() {
  this->reserve_total(other.size());
  std::copy(other.begin(), other.end(), std::back_inserter(*this));
}

template <typename T>
Vec<T>::Vec(Vec &&other) noexcept : repr(other.repr) {
  new (&other) Vec();
}

template <typename T>
Vec<T>::~Vec() noexcept {
  this->drop();
}

template <typename T>
Vec<T> &Vec<T>::operator=(Vec &&other) &noexcept {
  this->drop();
  this->repr = other.repr;
  new (&other) Vec();
  return *this;
}

template <typename T>
Vec<T> &Vec<T>::operator=(const Vec &other) & {
  if (this != &other) {
    this->drop();
    new (this) Vec(other);
  }
  return *this;
}

template <typename T>
bool Vec<T>::empty() const noexcept {
  return this->size() == 0;
}

template <typename T>
T *Vec<T>::data() noexcept {
  return const_cast<T *>(const_cast<const Vec<T> *>(this)->data());
}

template <typename T>
const T &Vec<T>::operator[](std::size_t n) const noexcept {
  assert(n < this->size());
  auto data = reinterpret_cast<const char *>(this->data());
  return *reinterpret_cast<const T *>(data + n * size_of<T>());
}

template <typename T>
const T &Vec<T>::at(std::size_t n) const {
  if (n >= this->size()) {
    panic<std::out_of_range>("rust::Vec index out of range");
  }
  return (*this)[n];
}

template <typename T>
const T &Vec<T>::front() const noexcept {
  assert(!this->empty());
  return (*this)[0];
}

template <typename T>
const T &Vec<T>::back() const noexcept {
  assert(!this->empty());
  return (*this)[this->size() - 1];
}

template <typename T>
T &Vec<T>::operator[](std::size_t n) noexcept {
  assert(n < this->size());
  auto data = reinterpret_cast<char *>(this->data());
  return *reinterpret_cast<T *>(data + n * size_of<T>());
}

template <typename T>
T &Vec<T>::at(std::size_t n) {
  if (n >= this->size()) {
    panic<std::out_of_range>("rust::Vec index out of range");
  }
  return (*this)[n];
}

template <typename T>
T &Vec<T>::front() noexcept {
  assert(!this->empty());
  return (*this)[0];
}

template <typename T>
T &Vec<T>::back() noexcept {
  assert(!this->empty());
  return (*this)[this->size() - 1];
}

template <typename T>
void Vec<T>::reserve(std::size_t new_cap) {
  this->reserve_total(new_cap);
}

template <typename T>
void Vec<T>::push_back(const T &value) {
  this->emplace_back(value);
}

template <typename T>
void Vec<T>::push_back(T &&value) {
  this->emplace_back(std::move(value));
}

template <typename T>
template <typename... Args>
void Vec<T>::emplace_back(Args &&...args) {
  auto size = this->size();
  this->reserve_total(size + 1);
  ::new (reinterpret_cast<T *>(reinterpret_cast<char *>(this->data()) +
                               size * size_of<T>()))
      T(std::forward<Args>(args)...);
  this->set_len(size + 1);
}

template <typename T>
typename Vec<T>::iterator Vec<T>::begin() noexcept {
  return Slice<T>(this->data(), this->size()).begin();
}

template <typename T>
typename Vec<T>::iterator Vec<T>::end() noexcept {
  return Slice<T>(this->data(), this->size()).end();
}

template <typename T>
typename Vec<T>::const_iterator Vec<T>::begin() const noexcept {
  return this->cbegin();
}

template <typename T>
typename Vec<T>::const_iterator Vec<T>::end() const noexcept {
  return this->cend();
}

template <typename T>
typename Vec<T>::const_iterator Vec<T>::cbegin() const noexcept {
  return Slice<const T>(this->data(), this->size()).begin();
}

template <typename T>
typename Vec<T>::const_iterator Vec<T>::cend() const noexcept {
  return Slice<const T>(this->data(), this->size()).end();
}

template <typename T>
void Vec<T>::swap(Vec &rhs) noexcept {
  using std::swap;
  swap(this->repr, rhs.repr);
}

template <typename T>
Vec<T>::Vec(unsafe_bitcopy_t, const Vec &bits) noexcept : repr(bits.repr) {}
#endif // CXXBRIDGE1_RUST_VEC

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

template <typename T>
union ManuallyDrop {
  T value;
  ManuallyDrop(T &&value) : value(::std::move(value)) {}
  ~ManuallyDrop() {}
};

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
      struct RustUuid;
      struct RustAdvertisingTrackInfo;
      struct RustGattFilterParam;
      struct RustApcfCommand;
      struct RustAdvertiseParameters;
      struct RustPeriodicAdvertisingParameters;
      using GattClientIntf = ::bluetooth::topshim::rust::GattClientIntf;
      using BleScannerIntf = ::bluetooth::topshim::rust::BleScannerIntf;
      using BleAdvertiserIntf = ::bluetooth::topshim::rust::BleAdvertiserIntf;
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

#ifndef CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$RustUuid
#define CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$RustUuid
struct RustUuid final {
  ::std::array<::std::uint8_t, 16> uu;

  using IsRelocatable = ::std::true_type;
};
#endif // CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$RustUuid

#ifndef CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$RustAdvertisingTrackInfo
#define CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$RustAdvertisingTrackInfo
struct RustAdvertisingTrackInfo final {
  ::std::uint8_t scanner_id;
  ::std::uint8_t filter_index;
  ::std::uint8_t advertiser_state;
  ::std::uint8_t advertiser_info_present;
  ::bluetooth::topshim::rust::RustRawAddress advertiser_address;
  ::std::uint8_t advertiser_address_type;
  ::std::uint8_t tx_power;
  ::std::int8_t rssi;
  ::std::uint16_t timestamp;
  ::std::uint8_t adv_packet_len;
  ::rust::Vec<::std::uint8_t> adv_packet;
  ::std::uint8_t scan_response_len;
  ::rust::Vec<::std::uint8_t> scan_response;

  using IsRelocatable = ::std::true_type;
};
#endif // CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$RustAdvertisingTrackInfo

#ifndef CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$RustGattFilterParam
#define CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$RustGattFilterParam
struct RustGattFilterParam final {
  ::std::uint16_t feat_seln;
  ::std::uint16_t list_logic_type;
  ::std::uint8_t filt_logic_type;
  ::std::uint8_t rssi_high_thres;
  ::std::uint8_t rssi_low_thres;
  ::std::uint8_t delay_mode;
  ::std::uint16_t found_timeout;
  ::std::uint16_t lost_timeout;
  ::std::uint8_t found_timeout_count;
  ::std::uint16_t num_of_tracking_entries;

  using IsRelocatable = ::std::true_type;
};
#endif // CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$RustGattFilterParam

#ifndef CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$RustApcfCommand
#define CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$RustApcfCommand
struct RustApcfCommand final {
  ::std::uint8_t type_;
  ::bluetooth::topshim::rust::RustRawAddress address;
  ::std::uint8_t addr_type;
  ::bluetooth::topshim::rust::RustUuid uuid;
  ::bluetooth::topshim::rust::RustUuid uuid_mask;
  ::rust::Vec<::std::uint8_t> name;
  ::std::uint16_t company;
  ::std::uint16_t company_mask;
  ::rust::Vec<::std::uint8_t> data;
  ::rust::Vec<::std::uint8_t> data_mask;
  ::std::array<::std::uint8_t, 16> irk;

  using IsRelocatable = ::std::true_type;
};
#endif // CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$RustApcfCommand

#ifndef CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$RustAdvertiseParameters
#define CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$RustAdvertiseParameters
struct RustAdvertiseParameters final {
  ::std::uint16_t advertising_event_properties;
  ::std::uint32_t min_interval;
  ::std::uint32_t max_interval;
  ::std::uint8_t channel_map;
  ::std::int8_t tx_power;
  ::std::uint8_t primary_advertising_phy;
  ::std::uint8_t secondary_advertising_phy;
  ::std::uint8_t scan_request_notification_enable;
  ::std::int8_t own_address_type;

  using IsRelocatable = ::std::true_type;
};
#endif // CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$RustAdvertiseParameters

#ifndef CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$RustPeriodicAdvertisingParameters
#define CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$RustPeriodicAdvertisingParameters
struct RustPeriodicAdvertisingParameters final {
  ::std::uint8_t enable;
  ::std::uint16_t min_interval;
  ::std::uint16_t max_interval;
  ::std::uint16_t periodic_advertising_properties;

  using IsRelocatable = ::std::true_type;
};
#endif // CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$RustPeriodicAdvertisingParameters

extern "C" {
::bluetooth::topshim::rust::GattClientIntf *bluetooth$topshim$rust$cxxbridge1$GetGattClientProfile(const ::std::uint8_t *btif) noexcept {
  ::std::unique_ptr<::bluetooth::topshim::rust::GattClientIntf> (*GetGattClientProfile$)(const ::std::uint8_t *) = ::bluetooth::topshim::rust::GetGattClientProfile;
  return GetGattClientProfile$(btif).release();
}

::std::int32_t bluetooth$topshim$rust$cxxbridge1$GattClientIntf$read_phy(::bluetooth::topshim::rust::GattClientIntf &self, ::std::int32_t client_if, ::bluetooth::topshim::rust::RustRawAddress bt_addr) noexcept {
  ::std::int32_t (::bluetooth::topshim::rust::GattClientIntf::*read_phy$)(::std::int32_t, ::bluetooth::topshim::rust::RustRawAddress) = &::bluetooth::topshim::rust::GattClientIntf::read_phy;
  return (self.*read_phy$)(client_if, bt_addr);
}

void bluetooth$topshim$rust$cxxbridge1$read_phy_callback(::std::int32_t client_if, ::bluetooth::topshim::rust::RustRawAddress addr, ::std::uint8_t tx_phy, ::std::uint8_t rx_phy, ::std::uint8_t status) noexcept;

::bluetooth::topshim::rust::BleScannerIntf *bluetooth$topshim$rust$cxxbridge1$GetBleScannerIntf(const ::std::uint8_t *gatt) noexcept {
  ::std::unique_ptr<::bluetooth::topshim::rust::BleScannerIntf> (*GetBleScannerIntf$)(const ::std::uint8_t *) = ::bluetooth::topshim::rust::GetBleScannerIntf;
  return GetBleScannerIntf$(gatt).release();
}

void bluetooth$topshim$rust$cxxbridge1$BleScannerIntf$RegisterScanner(::bluetooth::topshim::rust::BleScannerIntf &self, ::bluetooth::topshim::rust::RustUuid uuid) noexcept {
  void (::bluetooth::topshim::rust::BleScannerIntf::*RegisterScanner$)(::bluetooth::topshim::rust::RustUuid) = &::bluetooth::topshim::rust::BleScannerIntf::RegisterScanner;
  (self.*RegisterScanner$)(uuid);
}

void bluetooth$topshim$rust$cxxbridge1$BleScannerIntf$Unregister(::bluetooth::topshim::rust::BleScannerIntf &self, ::std::uint8_t scanner_id) noexcept {
  void (::bluetooth::topshim::rust::BleScannerIntf::*Unregister$)(::std::uint8_t) = &::bluetooth::topshim::rust::BleScannerIntf::Unregister;
  (self.*Unregister$)(scanner_id);
}

void bluetooth$topshim$rust$cxxbridge1$BleScannerIntf$Scan(::bluetooth::topshim::rust::BleScannerIntf &self, bool start) noexcept {
  void (::bluetooth::topshim::rust::BleScannerIntf::*Scan$)(bool) = &::bluetooth::topshim::rust::BleScannerIntf::Scan;
  (self.*Scan$)(start);
}

void bluetooth$topshim$rust$cxxbridge1$BleScannerIntf$ScanFilterParamSetup(::bluetooth::topshim::rust::BleScannerIntf &self, ::std::uint8_t scanner_id, ::std::uint8_t action, ::std::uint8_t filter_index, ::bluetooth::topshim::rust::RustGattFilterParam filt_param) noexcept {
  void (::bluetooth::topshim::rust::BleScannerIntf::*ScanFilterParamSetup$)(::std::uint8_t, ::std::uint8_t, ::std::uint8_t, ::bluetooth::topshim::rust::RustGattFilterParam) = &::bluetooth::topshim::rust::BleScannerIntf::ScanFilterParamSetup;
  (self.*ScanFilterParamSetup$)(scanner_id, action, filter_index, filt_param);
}

void bluetooth$topshim$rust$cxxbridge1$BleScannerIntf$ScanFilterAdd(::bluetooth::topshim::rust::BleScannerIntf &self, ::std::uint8_t filter_index, const ::rust::Vec<::bluetooth::topshim::rust::RustApcfCommand> *filters) noexcept {
  void (::bluetooth::topshim::rust::BleScannerIntf::*ScanFilterAdd$)(::std::uint8_t, ::rust::Vec<::bluetooth::topshim::rust::RustApcfCommand>) = &::bluetooth::topshim::rust::BleScannerIntf::ScanFilterAdd;
  (self.*ScanFilterAdd$)(filter_index, ::rust::Vec<::bluetooth::topshim::rust::RustApcfCommand>(::rust::unsafe_bitcopy, *filters));
}

void bluetooth$topshim$rust$cxxbridge1$BleScannerIntf$ScanFilterClear(::bluetooth::topshim::rust::BleScannerIntf &self, ::std::uint8_t filter_index) noexcept {
  void (::bluetooth::topshim::rust::BleScannerIntf::*ScanFilterClear$)(::std::uint8_t) = &::bluetooth::topshim::rust::BleScannerIntf::ScanFilterClear;
  (self.*ScanFilterClear$)(filter_index);
}

void bluetooth$topshim$rust$cxxbridge1$BleScannerIntf$ScanFilterEnable(::bluetooth::topshim::rust::BleScannerIntf &self, bool enable) noexcept {
  void (::bluetooth::topshim::rust::BleScannerIntf::*ScanFilterEnable$)(bool) = &::bluetooth::topshim::rust::BleScannerIntf::ScanFilterEnable;
  (self.*ScanFilterEnable$)(enable);
}

void bluetooth$topshim$rust$cxxbridge1$BleScannerIntf$SetScanParameters(::bluetooth::topshim::rust::BleScannerIntf &self, ::std::uint8_t scanner_id, ::std::uint16_t scan_interval, ::std::uint16_t scan_window) noexcept {
  void (::bluetooth::topshim::rust::BleScannerIntf::*SetScanParameters$)(::std::uint8_t, ::std::uint16_t, ::std::uint16_t) = &::bluetooth::topshim::rust::BleScannerIntf::SetScanParameters;
  (self.*SetScanParameters$)(scanner_id, scan_interval, scan_window);
}

void bluetooth$topshim$rust$cxxbridge1$BleScannerIntf$BatchscanConfigStorage(::bluetooth::topshim::rust::BleScannerIntf &self, ::std::uint8_t scanner_id, ::std::int32_t batch_scan_full_max, ::std::int32_t batch_scan_trunc_max, ::std::int32_t batch_scan_notify_threshold) noexcept {
  void (::bluetooth::topshim::rust::BleScannerIntf::*BatchscanConfigStorage$)(::std::uint8_t, ::std::int32_t, ::std::int32_t, ::std::int32_t) = &::bluetooth::topshim::rust::BleScannerIntf::BatchscanConfigStorage;
  (self.*BatchscanConfigStorage$)(scanner_id, batch_scan_full_max, batch_scan_trunc_max, batch_scan_notify_threshold);
}

void bluetooth$topshim$rust$cxxbridge1$BleScannerIntf$BatchscanEnable(::bluetooth::topshim::rust::BleScannerIntf &self, ::std::int32_t scan_mode, ::std::uint16_t scan_interval, ::std::uint16_t scan_window, ::std::int32_t addr_type, ::std::int32_t discard_rule) noexcept {
  void (::bluetooth::topshim::rust::BleScannerIntf::*BatchscanEnable$)(::std::int32_t, ::std::uint16_t, ::std::uint16_t, ::std::int32_t, ::std::int32_t) = &::bluetooth::topshim::rust::BleScannerIntf::BatchscanEnable;
  (self.*BatchscanEnable$)(scan_mode, scan_interval, scan_window, addr_type, discard_rule);
}

void bluetooth$topshim$rust$cxxbridge1$BleScannerIntf$BatchscanDisable(::bluetooth::topshim::rust::BleScannerIntf &self) noexcept {
  void (::bluetooth::topshim::rust::BleScannerIntf::*BatchscanDisable$)() = &::bluetooth::topshim::rust::BleScannerIntf::BatchscanDisable;
  (self.*BatchscanDisable$)();
}

void bluetooth$topshim$rust$cxxbridge1$BleScannerIntf$BatchscanReadReports(::bluetooth::topshim::rust::BleScannerIntf &self, ::std::uint8_t scanner_id, ::std::int32_t scan_mode) noexcept {
  void (::bluetooth::topshim::rust::BleScannerIntf::*BatchscanReadReports$)(::std::uint8_t, ::std::int32_t) = &::bluetooth::topshim::rust::BleScannerIntf::BatchscanReadReports;
  (self.*BatchscanReadReports$)(scanner_id, scan_mode);
}

void bluetooth$topshim$rust$cxxbridge1$BleScannerIntf$StartSync(::bluetooth::topshim::rust::BleScannerIntf &self, ::std::uint8_t sid, ::bluetooth::topshim::rust::RustRawAddress address, ::std::uint16_t skip, ::std::uint16_t timeout) noexcept {
  void (::bluetooth::topshim::rust::BleScannerIntf::*StartSync$)(::std::uint8_t, ::bluetooth::topshim::rust::RustRawAddress, ::std::uint16_t, ::std::uint16_t) = &::bluetooth::topshim::rust::BleScannerIntf::StartSync;
  (self.*StartSync$)(sid, address, skip, timeout);
}

void bluetooth$topshim$rust$cxxbridge1$BleScannerIntf$StopSync(::bluetooth::topshim::rust::BleScannerIntf &self, ::std::uint16_t handle) noexcept {
  void (::bluetooth::topshim::rust::BleScannerIntf::*StopSync$)(::std::uint16_t) = &::bluetooth::topshim::rust::BleScannerIntf::StopSync;
  (self.*StopSync$)(handle);
}

void bluetooth$topshim$rust$cxxbridge1$BleScannerIntf$CancelCreateSync(::bluetooth::topshim::rust::BleScannerIntf &self, ::std::uint8_t sid, ::bluetooth::topshim::rust::RustRawAddress address) noexcept {
  void (::bluetooth::topshim::rust::BleScannerIntf::*CancelCreateSync$)(::std::uint8_t, ::bluetooth::topshim::rust::RustRawAddress) = &::bluetooth::topshim::rust::BleScannerIntf::CancelCreateSync;
  (self.*CancelCreateSync$)(sid, address);
}

void bluetooth$topshim$rust$cxxbridge1$BleScannerIntf$TransferSync(::bluetooth::topshim::rust::BleScannerIntf &self, ::bluetooth::topshim::rust::RustRawAddress address, ::std::uint16_t service_data, ::std::uint16_t sync_handle) noexcept {
  void (::bluetooth::topshim::rust::BleScannerIntf::*TransferSync$)(::bluetooth::topshim::rust::RustRawAddress, ::std::uint16_t, ::std::uint16_t) = &::bluetooth::topshim::rust::BleScannerIntf::TransferSync;
  (self.*TransferSync$)(address, service_data, sync_handle);
}

void bluetooth$topshim$rust$cxxbridge1$BleScannerIntf$TransferSetInfo(::bluetooth::topshim::rust::BleScannerIntf &self, ::bluetooth::topshim::rust::RustRawAddress address, ::std::uint16_t service_data, ::std::uint8_t adv_handle) noexcept {
  void (::bluetooth::topshim::rust::BleScannerIntf::*TransferSetInfo$)(::bluetooth::topshim::rust::RustRawAddress, ::std::uint16_t, ::std::uint8_t) = &::bluetooth::topshim::rust::BleScannerIntf::TransferSetInfo;
  (self.*TransferSetInfo$)(address, service_data, adv_handle);
}

void bluetooth$topshim$rust$cxxbridge1$BleScannerIntf$SyncTxParameters(::bluetooth::topshim::rust::BleScannerIntf &self, ::bluetooth::topshim::rust::RustRawAddress address, ::std::uint8_t mode, ::std::uint16_t skip, ::std::uint16_t timeout) noexcept {
  void (::bluetooth::topshim::rust::BleScannerIntf::*SyncTxParameters$)(::bluetooth::topshim::rust::RustRawAddress, ::std::uint8_t, ::std::uint16_t, ::std::uint16_t) = &::bluetooth::topshim::rust::BleScannerIntf::SyncTxParameters;
  (self.*SyncTxParameters$)(address, mode, skip, timeout);
}

void bluetooth$topshim$rust$cxxbridge1$BleScannerIntf$RegisterCallbacks(::bluetooth::topshim::rust::BleScannerIntf &self) noexcept {
  void (::bluetooth::topshim::rust::BleScannerIntf::*RegisterCallbacks$)() = &::bluetooth::topshim::rust::BleScannerIntf::RegisterCallbacks;
  (self.*RegisterCallbacks$)();
}

void bluetooth$topshim$rust$cxxbridge1$gdscan_on_scanner_registered(const ::std::int8_t *uuid, ::std::uint8_t scannerId, ::std::uint8_t status) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdscan_on_set_scanner_parameter_complete(::std::uint8_t scannerId, ::std::uint8_t status) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdscan_on_scan_result(::std::uint16_t event_type, ::std::uint8_t addr_type, const ::std::int8_t *addr, ::std::uint8_t primary_phy, ::std::uint8_t secondary_phy, ::std::uint8_t advertising_sid, ::std::int8_t tx_power, ::std::int8_t rssi, ::std::uint16_t periodic_adv_int, const ::std::uint8_t *adv_data_ptr, ::std::size_t adv_data_len) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdscan_on_track_adv_found_lost(::bluetooth::topshim::rust::RustAdvertisingTrackInfo *adv_track_info) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdscan_on_batch_scan_reports(::std::int32_t client_if, ::std::int32_t status, ::std::int32_t report_format, ::std::int32_t num_records, const ::std::uint8_t *data_ptr, ::std::size_t data_len) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdscan_on_batch_scan_threshold_crossed(::std::int32_t client_if) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdscan_register_callback(::bluetooth::topshim::rust::RustUuid uuid, ::std::uint8_t scanner_id, ::std::uint8_t btm_status) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdscan_status_callback(::std::uint8_t scanner_id, ::std::uint8_t btm_status) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdscan_enable_callback(::std::uint8_t action, ::std::uint8_t btm_status) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdscan_filter_param_setup_callback(::std::uint8_t scanner_id, ::std::uint8_t available_space, ::std::uint8_t action, ::std::uint8_t btm_status) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdscan_filter_config_callback(::std::uint8_t filter_index, ::std::uint8_t filter_type, ::std::uint8_t available_space, ::std::uint8_t action, ::std::uint8_t btm_status) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdscan_start_sync_callback(::std::uint8_t status, ::std::uint16_t sync_handle, ::std::uint8_t advertising_sid, ::std::uint8_t addr_type, const ::bluetooth::topshim::rust::RustRawAddress *address, ::std::uint8_t phy, ::std::uint16_t interval) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdscan_sync_report_callback(::std::uint16_t sync_handle, ::std::int8_t tx_power, ::std::int8_t rssi, ::std::uint8_t status, const ::std::uint8_t *data, ::std::size_t len) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdscan_sync_lost_callback(::std::uint16_t sync_handle) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdscan_sync_transfer_callback(::std::uint8_t status, const ::bluetooth::topshim::rust::RustRawAddress *address) noexcept;

::bluetooth::topshim::rust::BleAdvertiserIntf *bluetooth$topshim$rust$cxxbridge1$GetBleAdvertiserIntf(const ::std::uint8_t *gatt) noexcept {
  ::std::unique_ptr<::bluetooth::topshim::rust::BleAdvertiserIntf> (*GetBleAdvertiserIntf$)(const ::std::uint8_t *) = ::bluetooth::topshim::rust::GetBleAdvertiserIntf;
  return GetBleAdvertiserIntf$(gatt).release();
}

void bluetooth$topshim$rust$cxxbridge1$BleAdvertiserIntf$RegisterAdvertiser(::bluetooth::topshim::rust::BleAdvertiserIntf &self) noexcept {
  void (::bluetooth::topshim::rust::BleAdvertiserIntf::*RegisterAdvertiser$)() = &::bluetooth::topshim::rust::BleAdvertiserIntf::RegisterAdvertiser;
  (self.*RegisterAdvertiser$)();
}

void bluetooth$topshim$rust$cxxbridge1$BleAdvertiserIntf$Unregister(::bluetooth::topshim::rust::BleAdvertiserIntf &self, ::std::uint8_t adv_id) noexcept {
  void (::bluetooth::topshim::rust::BleAdvertiserIntf::*Unregister$)(::std::uint8_t) = &::bluetooth::topshim::rust::BleAdvertiserIntf::Unregister;
  (self.*Unregister$)(adv_id);
}

void bluetooth$topshim$rust$cxxbridge1$BleAdvertiserIntf$GetOwnAddress(::bluetooth::topshim::rust::BleAdvertiserIntf &self, ::std::uint8_t adv_id) noexcept {
  void (::bluetooth::topshim::rust::BleAdvertiserIntf::*GetOwnAddress$)(::std::uint8_t) = &::bluetooth::topshim::rust::BleAdvertiserIntf::GetOwnAddress;
  (self.*GetOwnAddress$)(adv_id);
}

void bluetooth$topshim$rust$cxxbridge1$BleAdvertiserIntf$SetParameters(::bluetooth::topshim::rust::BleAdvertiserIntf &self, ::std::uint8_t adv_id, ::bluetooth::topshim::rust::RustAdvertiseParameters params) noexcept {
  void (::bluetooth::topshim::rust::BleAdvertiserIntf::*SetParameters$)(::std::uint8_t, ::bluetooth::topshim::rust::RustAdvertiseParameters) = &::bluetooth::topshim::rust::BleAdvertiserIntf::SetParameters;
  (self.*SetParameters$)(adv_id, params);
}

void bluetooth$topshim$rust$cxxbridge1$BleAdvertiserIntf$SetData(::bluetooth::topshim::rust::BleAdvertiserIntf &self, ::std::uint8_t adv_id, bool set_scan_rsp, const ::rust::Vec<::std::uint8_t> *data) noexcept {
  void (::bluetooth::topshim::rust::BleAdvertiserIntf::*SetData$)(::std::uint8_t, bool, ::rust::Vec<::std::uint8_t>) = &::bluetooth::topshim::rust::BleAdvertiserIntf::SetData;
  (self.*SetData$)(adv_id, set_scan_rsp, ::rust::Vec<::std::uint8_t>(::rust::unsafe_bitcopy, *data));
}

void bluetooth$topshim$rust$cxxbridge1$BleAdvertiserIntf$Enable(::bluetooth::topshim::rust::BleAdvertiserIntf &self, ::std::uint8_t adv_id, bool enable, ::std::uint16_t duration, ::std::uint8_t max_ext_adv_events) noexcept {
  void (::bluetooth::topshim::rust::BleAdvertiserIntf::*Enable$)(::std::uint8_t, bool, ::std::uint16_t, ::std::uint8_t) = &::bluetooth::topshim::rust::BleAdvertiserIntf::Enable;
  (self.*Enable$)(adv_id, enable, duration, max_ext_adv_events);
}

void bluetooth$topshim$rust$cxxbridge1$BleAdvertiserIntf$StartAdvertising(::bluetooth::topshim::rust::BleAdvertiserIntf &self, ::std::uint8_t adv_id, ::bluetooth::topshim::rust::RustAdvertiseParameters params, const ::rust::Vec<::std::uint8_t> *advertise_data, const ::rust::Vec<::std::uint8_t> *scan_response_data, ::std::int32_t timeout_in_sec) noexcept {
  void (::bluetooth::topshim::rust::BleAdvertiserIntf::*StartAdvertising$)(::std::uint8_t, ::bluetooth::topshim::rust::RustAdvertiseParameters, ::rust::Vec<::std::uint8_t>, ::rust::Vec<::std::uint8_t>, ::std::int32_t) = &::bluetooth::topshim::rust::BleAdvertiserIntf::StartAdvertising;
  (self.*StartAdvertising$)(adv_id, params, ::rust::Vec<::std::uint8_t>(::rust::unsafe_bitcopy, *advertise_data), ::rust::Vec<::std::uint8_t>(::rust::unsafe_bitcopy, *scan_response_data), timeout_in_sec);
}

void bluetooth$topshim$rust$cxxbridge1$BleAdvertiserIntf$StartAdvertisingSet(::bluetooth::topshim::rust::BleAdvertiserIntf &self, ::std::int32_t reg_id, ::bluetooth::topshim::rust::RustAdvertiseParameters params, const ::rust::Vec<::std::uint8_t> *advertise_data, const ::rust::Vec<::std::uint8_t> *scan_response_data, ::bluetooth::topshim::rust::RustPeriodicAdvertisingParameters periodic_params, const ::rust::Vec<::std::uint8_t> *periodic_data, ::std::uint16_t duration, ::std::uint8_t max_ext_adv_events) noexcept {
  void (::bluetooth::topshim::rust::BleAdvertiserIntf::*StartAdvertisingSet$)(::std::int32_t, ::bluetooth::topshim::rust::RustAdvertiseParameters, ::rust::Vec<::std::uint8_t>, ::rust::Vec<::std::uint8_t>, ::bluetooth::topshim::rust::RustPeriodicAdvertisingParameters, ::rust::Vec<::std::uint8_t>, ::std::uint16_t, ::std::uint8_t) = &::bluetooth::topshim::rust::BleAdvertiserIntf::StartAdvertisingSet;
  (self.*StartAdvertisingSet$)(reg_id, params, ::rust::Vec<::std::uint8_t>(::rust::unsafe_bitcopy, *advertise_data), ::rust::Vec<::std::uint8_t>(::rust::unsafe_bitcopy, *scan_response_data), periodic_params, ::rust::Vec<::std::uint8_t>(::rust::unsafe_bitcopy, *periodic_data), duration, max_ext_adv_events);
}

void bluetooth$topshim$rust$cxxbridge1$BleAdvertiserIntf$SetPeriodicAdvertisingParameters(::bluetooth::topshim::rust::BleAdvertiserIntf &self, ::std::uint8_t adv_id, ::bluetooth::topshim::rust::RustPeriodicAdvertisingParameters params) noexcept {
  void (::bluetooth::topshim::rust::BleAdvertiserIntf::*SetPeriodicAdvertisingParameters$)(::std::uint8_t, ::bluetooth::topshim::rust::RustPeriodicAdvertisingParameters) = &::bluetooth::topshim::rust::BleAdvertiserIntf::SetPeriodicAdvertisingParameters;
  (self.*SetPeriodicAdvertisingParameters$)(adv_id, params);
}

void bluetooth$topshim$rust$cxxbridge1$BleAdvertiserIntf$SetPeriodicAdvertisingData(::bluetooth::topshim::rust::BleAdvertiserIntf &self, ::std::uint8_t adv_id, const ::rust::Vec<::std::uint8_t> *data) noexcept {
  void (::bluetooth::topshim::rust::BleAdvertiserIntf::*SetPeriodicAdvertisingData$)(::std::uint8_t, ::rust::Vec<::std::uint8_t>) = &::bluetooth::topshim::rust::BleAdvertiserIntf::SetPeriodicAdvertisingData;
  (self.*SetPeriodicAdvertisingData$)(adv_id, ::rust::Vec<::std::uint8_t>(::rust::unsafe_bitcopy, *data));
}

void bluetooth$topshim$rust$cxxbridge1$BleAdvertiserIntf$SetPeriodicAdvertisingEnable(::bluetooth::topshim::rust::BleAdvertiserIntf &self, ::std::uint8_t adv_id, bool enable) noexcept {
  void (::bluetooth::topshim::rust::BleAdvertiserIntf::*SetPeriodicAdvertisingEnable$)(::std::uint8_t, bool) = &::bluetooth::topshim::rust::BleAdvertiserIntf::SetPeriodicAdvertisingEnable;
  (self.*SetPeriodicAdvertisingEnable$)(adv_id, enable);
}

void bluetooth$topshim$rust$cxxbridge1$BleAdvertiserIntf$RegisterCallbacks(::bluetooth::topshim::rust::BleAdvertiserIntf &self) noexcept {
  void (::bluetooth::topshim::rust::BleAdvertiserIntf::*RegisterCallbacks$)() = &::bluetooth::topshim::rust::BleAdvertiserIntf::RegisterCallbacks;
  (self.*RegisterCallbacks$)();
}

void bluetooth$topshim$rust$cxxbridge1$gdadv_on_advertising_set_started(::std::int32_t reg_id, ::std::uint8_t adv_id, ::std::int8_t tx_power, ::std::uint8_t status) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdadv_on_advertising_enabled(::std::uint8_t adv_id, bool enabled, ::std::uint8_t status) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdadv_on_advertising_data_set(::std::uint8_t adv_id, ::std::uint8_t status) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdadv_on_scan_response_data_set(::std::uint8_t adv_id, ::std::uint8_t status) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdadv_on_advertising_parameters_updated(::std::uint8_t adv_id, ::std::int8_t tx_power, ::std::uint8_t status) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdadv_on_periodic_advertising_parameters_updated(::std::uint8_t adv_id, ::std::uint8_t status) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdadv_on_periodic_advertising_data_set(::std::uint8_t adv_id, ::std::uint8_t status) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdadv_on_periodic_advertising_enabled(::std::uint8_t adv_id, bool enabled, ::std::uint8_t status) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdadv_on_own_address_read(::std::uint8_t adv_id, ::std::uint8_t addr_type, const ::bluetooth::topshim::rust::RustRawAddress *address) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdadv_idstatus_callback(::std::uint8_t adv_id, ::std::uint8_t status) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdadv_idtxpowerstatus_callback(::std::uint8_t adv_id, ::std::int8_t tx_power, ::std::uint8_t status) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdadv_parameters_callback(::std::uint8_t adv_id, ::std::uint8_t status, ::std::int8_t tx_power) noexcept;

void bluetooth$topshim$rust$cxxbridge1$gdadv_getaddress_callback(::std::uint8_t adv_id, ::std::uint8_t addr_type, const ::bluetooth::topshim::rust::RustRawAddress *address) noexcept;
} // extern "C"

void read_phy_callback(::std::int32_t client_if, ::bluetooth::topshim::rust::RustRawAddress addr, ::std::uint8_t tx_phy, ::std::uint8_t rx_phy, ::std::uint8_t status) noexcept {
  bluetooth$topshim$rust$cxxbridge1$read_phy_callback(client_if, addr, tx_phy, rx_phy, status);
}

void gdscan_on_scanner_registered(const ::std::int8_t *uuid, ::std::uint8_t scannerId, ::std::uint8_t status) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdscan_on_scanner_registered(uuid, scannerId, status);
}

void gdscan_on_set_scanner_parameter_complete(::std::uint8_t scannerId, ::std::uint8_t status) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdscan_on_set_scanner_parameter_complete(scannerId, status);
}

void gdscan_on_scan_result(::std::uint16_t event_type, ::std::uint8_t addr_type, const ::std::int8_t *addr, ::std::uint8_t primary_phy, ::std::uint8_t secondary_phy, ::std::uint8_t advertising_sid, ::std::int8_t tx_power, ::std::int8_t rssi, ::std::uint16_t periodic_adv_int, const ::std::uint8_t *adv_data_ptr, ::std::size_t adv_data_len) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdscan_on_scan_result(event_type, addr_type, addr, primary_phy, secondary_phy, advertising_sid, tx_power, rssi, periodic_adv_int, adv_data_ptr, adv_data_len);
}

void gdscan_on_track_adv_found_lost(::bluetooth::topshim::rust::RustAdvertisingTrackInfo adv_track_info) noexcept {
  ::rust::ManuallyDrop<::bluetooth::topshim::rust::RustAdvertisingTrackInfo> adv_track_info$(::std::move(adv_track_info));
  bluetooth$topshim$rust$cxxbridge1$gdscan_on_track_adv_found_lost(&adv_track_info$.value);
}

void gdscan_on_batch_scan_reports(::std::int32_t client_if, ::std::int32_t status, ::std::int32_t report_format, ::std::int32_t num_records, const ::std::uint8_t *data_ptr, ::std::size_t data_len) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdscan_on_batch_scan_reports(client_if, status, report_format, num_records, data_ptr, data_len);
}

void gdscan_on_batch_scan_threshold_crossed(::std::int32_t client_if) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdscan_on_batch_scan_threshold_crossed(client_if);
}

void gdscan_register_callback(::bluetooth::topshim::rust::RustUuid uuid, ::std::uint8_t scanner_id, ::std::uint8_t btm_status) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdscan_register_callback(uuid, scanner_id, btm_status);
}

void gdscan_status_callback(::std::uint8_t scanner_id, ::std::uint8_t btm_status) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdscan_status_callback(scanner_id, btm_status);
}

void gdscan_enable_callback(::std::uint8_t action, ::std::uint8_t btm_status) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdscan_enable_callback(action, btm_status);
}

void gdscan_filter_param_setup_callback(::std::uint8_t scanner_id, ::std::uint8_t available_space, ::std::uint8_t action, ::std::uint8_t btm_status) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdscan_filter_param_setup_callback(scanner_id, available_space, action, btm_status);
}

void gdscan_filter_config_callback(::std::uint8_t filter_index, ::std::uint8_t filter_type, ::std::uint8_t available_space, ::std::uint8_t action, ::std::uint8_t btm_status) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdscan_filter_config_callback(filter_index, filter_type, available_space, action, btm_status);
}

void gdscan_start_sync_callback(::std::uint8_t status, ::std::uint16_t sync_handle, ::std::uint8_t advertising_sid, ::std::uint8_t addr_type, const ::bluetooth::topshim::rust::RustRawAddress *address, ::std::uint8_t phy, ::std::uint16_t interval) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdscan_start_sync_callback(status, sync_handle, advertising_sid, addr_type, address, phy, interval);
}

void gdscan_sync_report_callback(::std::uint16_t sync_handle, ::std::int8_t tx_power, ::std::int8_t rssi, ::std::uint8_t status, const ::std::uint8_t *data, ::std::size_t len) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdscan_sync_report_callback(sync_handle, tx_power, rssi, status, data, len);
}

void gdscan_sync_lost_callback(::std::uint16_t sync_handle) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdscan_sync_lost_callback(sync_handle);
}

void gdscan_sync_transfer_callback(::std::uint8_t status, const ::bluetooth::topshim::rust::RustRawAddress *address) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdscan_sync_transfer_callback(status, address);
}

void gdadv_on_advertising_set_started(::std::int32_t reg_id, ::std::uint8_t adv_id, ::std::int8_t tx_power, ::std::uint8_t status) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdadv_on_advertising_set_started(reg_id, adv_id, tx_power, status);
}

void gdadv_on_advertising_enabled(::std::uint8_t adv_id, bool enabled, ::std::uint8_t status) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdadv_on_advertising_enabled(adv_id, enabled, status);
}

void gdadv_on_advertising_data_set(::std::uint8_t adv_id, ::std::uint8_t status) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdadv_on_advertising_data_set(adv_id, status);
}

void gdadv_on_scan_response_data_set(::std::uint8_t adv_id, ::std::uint8_t status) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdadv_on_scan_response_data_set(adv_id, status);
}

void gdadv_on_advertising_parameters_updated(::std::uint8_t adv_id, ::std::int8_t tx_power, ::std::uint8_t status) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdadv_on_advertising_parameters_updated(adv_id, tx_power, status);
}

void gdadv_on_periodic_advertising_parameters_updated(::std::uint8_t adv_id, ::std::uint8_t status) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdadv_on_periodic_advertising_parameters_updated(adv_id, status);
}

void gdadv_on_periodic_advertising_data_set(::std::uint8_t adv_id, ::std::uint8_t status) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdadv_on_periodic_advertising_data_set(adv_id, status);
}

void gdadv_on_periodic_advertising_enabled(::std::uint8_t adv_id, bool enabled, ::std::uint8_t status) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdadv_on_periodic_advertising_enabled(adv_id, enabled, status);
}

void gdadv_on_own_address_read(::std::uint8_t adv_id, ::std::uint8_t addr_type, const ::bluetooth::topshim::rust::RustRawAddress *address) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdadv_on_own_address_read(adv_id, addr_type, address);
}

void gdadv_idstatus_callback(::std::uint8_t adv_id, ::std::uint8_t status) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdadv_idstatus_callback(adv_id, status);
}

void gdadv_idtxpowerstatus_callback(::std::uint8_t adv_id, ::std::int8_t tx_power, ::std::uint8_t status) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdadv_idtxpowerstatus_callback(adv_id, tx_power, status);
}

void gdadv_parameters_callback(::std::uint8_t adv_id, ::std::uint8_t status, ::std::int8_t tx_power) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdadv_parameters_callback(adv_id, status, tx_power);
}

void gdadv_getaddress_callback(::std::uint8_t adv_id, ::std::uint8_t addr_type, const ::bluetooth::topshim::rust::RustRawAddress *address) noexcept {
  bluetooth$topshim$rust$cxxbridge1$gdadv_getaddress_callback(adv_id, addr_type, address);
}
} // namespace rust
} // namespace topshim
} // namespace bluetooth

extern "C" {
static_assert(::rust::detail::is_complete<::bluetooth::topshim::rust::GattClientIntf>::value, "definition of GattClientIntf is required");
static_assert(sizeof(::std::unique_ptr<::bluetooth::topshim::rust::GattClientIntf>) == sizeof(void *), "");
static_assert(alignof(::std::unique_ptr<::bluetooth::topshim::rust::GattClientIntf>) == alignof(void *), "");
void cxxbridge1$unique_ptr$bluetooth$topshim$rust$GattClientIntf$null(::std::unique_ptr<::bluetooth::topshim::rust::GattClientIntf> *ptr) noexcept {
  ::new (ptr) ::std::unique_ptr<::bluetooth::topshim::rust::GattClientIntf>();
}
void cxxbridge1$unique_ptr$bluetooth$topshim$rust$GattClientIntf$raw(::std::unique_ptr<::bluetooth::topshim::rust::GattClientIntf> *ptr, ::bluetooth::topshim::rust::GattClientIntf *raw) noexcept {
  ::new (ptr) ::std::unique_ptr<::bluetooth::topshim::rust::GattClientIntf>(raw);
}
const ::bluetooth::topshim::rust::GattClientIntf *cxxbridge1$unique_ptr$bluetooth$topshim$rust$GattClientIntf$get(const ::std::unique_ptr<::bluetooth::topshim::rust::GattClientIntf>& ptr) noexcept {
  return ptr.get();
}
::bluetooth::topshim::rust::GattClientIntf *cxxbridge1$unique_ptr$bluetooth$topshim$rust$GattClientIntf$release(::std::unique_ptr<::bluetooth::topshim::rust::GattClientIntf>& ptr) noexcept {
  return ptr.release();
}
void cxxbridge1$unique_ptr$bluetooth$topshim$rust$GattClientIntf$drop(::std::unique_ptr<::bluetooth::topshim::rust::GattClientIntf> *ptr) noexcept {
  ::rust::deleter_if<::rust::detail::is_complete<::bluetooth::topshim::rust::GattClientIntf>::value>{}(ptr);
}

static_assert(::rust::detail::is_complete<::bluetooth::topshim::rust::BleScannerIntf>::value, "definition of BleScannerIntf is required");
static_assert(sizeof(::std::unique_ptr<::bluetooth::topshim::rust::BleScannerIntf>) == sizeof(void *), "");
static_assert(alignof(::std::unique_ptr<::bluetooth::topshim::rust::BleScannerIntf>) == alignof(void *), "");
void cxxbridge1$unique_ptr$bluetooth$topshim$rust$BleScannerIntf$null(::std::unique_ptr<::bluetooth::topshim::rust::BleScannerIntf> *ptr) noexcept {
  ::new (ptr) ::std::unique_ptr<::bluetooth::topshim::rust::BleScannerIntf>();
}
void cxxbridge1$unique_ptr$bluetooth$topshim$rust$BleScannerIntf$raw(::std::unique_ptr<::bluetooth::topshim::rust::BleScannerIntf> *ptr, ::bluetooth::topshim::rust::BleScannerIntf *raw) noexcept {
  ::new (ptr) ::std::unique_ptr<::bluetooth::topshim::rust::BleScannerIntf>(raw);
}
const ::bluetooth::topshim::rust::BleScannerIntf *cxxbridge1$unique_ptr$bluetooth$topshim$rust$BleScannerIntf$get(const ::std::unique_ptr<::bluetooth::topshim::rust::BleScannerIntf>& ptr) noexcept {
  return ptr.get();
}
::bluetooth::topshim::rust::BleScannerIntf *cxxbridge1$unique_ptr$bluetooth$topshim$rust$BleScannerIntf$release(::std::unique_ptr<::bluetooth::topshim::rust::BleScannerIntf>& ptr) noexcept {
  return ptr.release();
}
void cxxbridge1$unique_ptr$bluetooth$topshim$rust$BleScannerIntf$drop(::std::unique_ptr<::bluetooth::topshim::rust::BleScannerIntf> *ptr) noexcept {
  ::rust::deleter_if<::rust::detail::is_complete<::bluetooth::topshim::rust::BleScannerIntf>::value>{}(ptr);
}

void cxxbridge1$rust_vec$bluetooth$topshim$rust$RustApcfCommand$new(const ::rust::Vec<::bluetooth::topshim::rust::RustApcfCommand> *ptr) noexcept;
void cxxbridge1$rust_vec$bluetooth$topshim$rust$RustApcfCommand$drop(::rust::Vec<::bluetooth::topshim::rust::RustApcfCommand> *ptr) noexcept;
::std::size_t cxxbridge1$rust_vec$bluetooth$topshim$rust$RustApcfCommand$len(const ::rust::Vec<::bluetooth::topshim::rust::RustApcfCommand> *ptr) noexcept;
::std::size_t cxxbridge1$rust_vec$bluetooth$topshim$rust$RustApcfCommand$capacity(const ::rust::Vec<::bluetooth::topshim::rust::RustApcfCommand> *ptr) noexcept;
const ::bluetooth::topshim::rust::RustApcfCommand *cxxbridge1$rust_vec$bluetooth$topshim$rust$RustApcfCommand$data(const ::rust::Vec<::bluetooth::topshim::rust::RustApcfCommand> *ptr) noexcept;
void cxxbridge1$rust_vec$bluetooth$topshim$rust$RustApcfCommand$reserve_total(::rust::Vec<::bluetooth::topshim::rust::RustApcfCommand> *ptr, ::std::size_t cap) noexcept;
void cxxbridge1$rust_vec$bluetooth$topshim$rust$RustApcfCommand$set_len(::rust::Vec<::bluetooth::topshim::rust::RustApcfCommand> *ptr, ::std::size_t len) noexcept;

static_assert(::rust::detail::is_complete<::bluetooth::topshim::rust::BleAdvertiserIntf>::value, "definition of BleAdvertiserIntf is required");
static_assert(sizeof(::std::unique_ptr<::bluetooth::topshim::rust::BleAdvertiserIntf>) == sizeof(void *), "");
static_assert(alignof(::std::unique_ptr<::bluetooth::topshim::rust::BleAdvertiserIntf>) == alignof(void *), "");
void cxxbridge1$unique_ptr$bluetooth$topshim$rust$BleAdvertiserIntf$null(::std::unique_ptr<::bluetooth::topshim::rust::BleAdvertiserIntf> *ptr) noexcept {
  ::new (ptr) ::std::unique_ptr<::bluetooth::topshim::rust::BleAdvertiserIntf>();
}
void cxxbridge1$unique_ptr$bluetooth$topshim$rust$BleAdvertiserIntf$raw(::std::unique_ptr<::bluetooth::topshim::rust::BleAdvertiserIntf> *ptr, ::bluetooth::topshim::rust::BleAdvertiserIntf *raw) noexcept {
  ::new (ptr) ::std::unique_ptr<::bluetooth::topshim::rust::BleAdvertiserIntf>(raw);
}
const ::bluetooth::topshim::rust::BleAdvertiserIntf *cxxbridge1$unique_ptr$bluetooth$topshim$rust$BleAdvertiserIntf$get(const ::std::unique_ptr<::bluetooth::topshim::rust::BleAdvertiserIntf>& ptr) noexcept {
  return ptr.get();
}
::bluetooth::topshim::rust::BleAdvertiserIntf *cxxbridge1$unique_ptr$bluetooth$topshim$rust$BleAdvertiserIntf$release(::std::unique_ptr<::bluetooth::topshim::rust::BleAdvertiserIntf>& ptr) noexcept {
  return ptr.release();
}
void cxxbridge1$unique_ptr$bluetooth$topshim$rust$BleAdvertiserIntf$drop(::std::unique_ptr<::bluetooth::topshim::rust::BleAdvertiserIntf> *ptr) noexcept {
  ::rust::deleter_if<::rust::detail::is_complete<::bluetooth::topshim::rust::BleAdvertiserIntf>::value>{}(ptr);
}
} // extern "C"

namespace rust {
inline namespace cxxbridge1 {
template <>
Vec<::bluetooth::topshim::rust::RustApcfCommand>::Vec() noexcept {
  cxxbridge1$rust_vec$bluetooth$topshim$rust$RustApcfCommand$new(this);
}
template <>
void Vec<::bluetooth::topshim::rust::RustApcfCommand>::drop() noexcept {
  return cxxbridge1$rust_vec$bluetooth$topshim$rust$RustApcfCommand$drop(this);
}
template <>
::std::size_t Vec<::bluetooth::topshim::rust::RustApcfCommand>::size() const noexcept {
  return cxxbridge1$rust_vec$bluetooth$topshim$rust$RustApcfCommand$len(this);
}
template <>
::std::size_t Vec<::bluetooth::topshim::rust::RustApcfCommand>::capacity() const noexcept {
  return cxxbridge1$rust_vec$bluetooth$topshim$rust$RustApcfCommand$capacity(this);
}
template <>
const ::bluetooth::topshim::rust::RustApcfCommand *Vec<::bluetooth::topshim::rust::RustApcfCommand>::data() const noexcept {
  return cxxbridge1$rust_vec$bluetooth$topshim$rust$RustApcfCommand$data(this);
}
template <>
void Vec<::bluetooth::topshim::rust::RustApcfCommand>::reserve_total(::std::size_t cap) noexcept {
  return cxxbridge1$rust_vec$bluetooth$topshim$rust$RustApcfCommand$reserve_total(this, cap);
}
template <>
void Vec<::bluetooth::topshim::rust::RustApcfCommand>::set_len(::std::size_t len) noexcept {
  return cxxbridge1$rust_vec$bluetooth$topshim$rust$RustApcfCommand$set_len(this, len);
}
} // namespace cxxbridge1
} // namespace rust
