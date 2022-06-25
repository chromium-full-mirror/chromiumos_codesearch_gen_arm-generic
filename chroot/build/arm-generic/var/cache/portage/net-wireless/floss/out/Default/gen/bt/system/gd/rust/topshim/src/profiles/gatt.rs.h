#pragma once
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

void read_phy_callback(::std::int32_t client_if, ::bluetooth::topshim::rust::RustRawAddress addr, ::std::uint8_t tx_phy, ::std::uint8_t rx_phy, ::std::uint8_t status) noexcept;

void gdscan_on_scanner_registered(const ::std::int8_t *uuid, ::std::uint8_t scannerId, ::std::uint8_t status) noexcept;

void gdscan_on_set_scanner_parameter_complete(::std::uint8_t scannerId, ::std::uint8_t status) noexcept;

void gdscan_on_scan_result(::std::uint16_t event_type, ::std::uint8_t addr_type, const ::std::int8_t *addr, ::std::uint8_t primary_phy, ::std::uint8_t secondary_phy, ::std::uint8_t advertising_sid, ::std::int8_t tx_power, ::std::int8_t rssi, ::std::uint16_t periodic_adv_int, const ::std::uint8_t *adv_data_ptr, ::std::size_t adv_data_len) noexcept;

void gdscan_on_track_adv_found_lost(::bluetooth::topshim::rust::RustAdvertisingTrackInfo adv_track_info) noexcept;

void gdscan_on_batch_scan_reports(::std::int32_t client_if, ::std::int32_t status, ::std::int32_t report_format, ::std::int32_t num_records, const ::std::uint8_t *data_ptr, ::std::size_t data_len) noexcept;

void gdscan_on_batch_scan_threshold_crossed(::std::int32_t client_if) noexcept;

void gdscan_register_callback(::bluetooth::topshim::rust::RustUuid uuid, ::std::uint8_t scanner_id, ::std::uint8_t btm_status) noexcept;

void gdscan_status_callback(::std::uint8_t scanner_id, ::std::uint8_t btm_status) noexcept;

void gdscan_enable_callback(::std::uint8_t action, ::std::uint8_t btm_status) noexcept;

void gdscan_filter_param_setup_callback(::std::uint8_t scanner_id, ::std::uint8_t available_space, ::std::uint8_t action, ::std::uint8_t btm_status) noexcept;

void gdscan_filter_config_callback(::std::uint8_t filter_index, ::std::uint8_t filter_type, ::std::uint8_t available_space, ::std::uint8_t action, ::std::uint8_t btm_status) noexcept;

void gdscan_start_sync_callback(::std::uint8_t status, ::std::uint16_t sync_handle, ::std::uint8_t advertising_sid, ::std::uint8_t addr_type, const ::bluetooth::topshim::rust::RustRawAddress *address, ::std::uint8_t phy, ::std::uint16_t interval) noexcept;

void gdscan_sync_report_callback(::std::uint16_t sync_handle, ::std::int8_t tx_power, ::std::int8_t rssi, ::std::uint8_t status, const ::std::uint8_t *data, ::std::size_t len) noexcept;

void gdscan_sync_lost_callback(::std::uint16_t sync_handle) noexcept;

void gdscan_sync_transfer_callback(::std::uint8_t status, const ::bluetooth::topshim::rust::RustRawAddress *address) noexcept;

void gdadv_on_advertising_set_started(::std::int32_t reg_id, ::std::uint8_t adv_id, ::std::int8_t tx_power, ::std::uint8_t status) noexcept;

void gdadv_on_advertising_enabled(::std::uint8_t adv_id, bool enabled, ::std::uint8_t status) noexcept;

void gdadv_on_advertising_data_set(::std::uint8_t adv_id, ::std::uint8_t status) noexcept;

void gdadv_on_scan_response_data_set(::std::uint8_t adv_id, ::std::uint8_t status) noexcept;

void gdadv_on_advertising_parameters_updated(::std::uint8_t adv_id, ::std::int8_t tx_power, ::std::uint8_t status) noexcept;

void gdadv_on_periodic_advertising_parameters_updated(::std::uint8_t adv_id, ::std::uint8_t status) noexcept;

void gdadv_on_periodic_advertising_data_set(::std::uint8_t adv_id, ::std::uint8_t status) noexcept;

void gdadv_on_periodic_advertising_enabled(::std::uint8_t adv_id, bool enabled, ::std::uint8_t status) noexcept;

void gdadv_on_own_address_read(::std::uint8_t adv_id, ::std::uint8_t addr_type, const ::bluetooth::topshim::rust::RustRawAddress *address) noexcept;

void gdadv_idstatus_callback(::std::uint8_t adv_id, ::std::uint8_t status) noexcept;

void gdadv_idtxpowerstatus_callback(::std::uint8_t adv_id, ::std::int8_t tx_power, ::std::uint8_t status) noexcept;

void gdadv_parameters_callback(::std::uint8_t adv_id, ::std::uint8_t status, ::std::int8_t tx_power) noexcept;

void gdadv_getaddress_callback(::std::uint8_t adv_id, ::std::uint8_t addr_type, const ::bluetooth::topshim::rust::RustRawAddress *address) noexcept;
} // namespace rust
} // namespace topshim
} // namespace bluetooth
