#include "btav/btav_shim.h"
#include "btav_sink/btav_sink_shim.h"
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
      struct A2dpCodecConfig;
      struct RustPresentationPosition;
      using A2dpIntf = ::bluetooth::topshim::rust::A2dpIntf;
      using A2dpSinkIntf = ::bluetooth::topshim::rust::A2dpSinkIntf;
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

#ifndef CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$A2dpCodecConfig
#define CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$A2dpCodecConfig
struct A2dpCodecConfig final {
  ::std::int32_t codec_type;
  ::std::int32_t codec_priority;
  ::std::int32_t sample_rate;
  ::std::int32_t bits_per_sample;
  ::std::int32_t channel_mode;
  ::std::int64_t codec_specific_1;
  ::std::int64_t codec_specific_2;
  ::std::int64_t codec_specific_3;
  ::std::int64_t codec_specific_4;

  using IsRelocatable = ::std::true_type;
};
#endif // CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$A2dpCodecConfig

#ifndef CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$RustPresentationPosition
#define CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$RustPresentationPosition
struct RustPresentationPosition final {
  ::std::uint64_t remote_delay_report_ns;
  ::std::uint64_t total_bytes_read;
  ::std::int64_t data_position_sec;
  ::std::int32_t data_position_nsec;

  using IsRelocatable = ::std::true_type;
};
#endif // CXXBRIDGE1_STRUCT_bluetooth$topshim$rust$RustPresentationPosition

extern "C" {
::bluetooth::topshim::rust::A2dpIntf *bluetooth$topshim$rust$cxxbridge1$GetA2dpProfile(const ::std::uint8_t *btif) noexcept {
  ::std::unique_ptr<::bluetooth::topshim::rust::A2dpIntf> (*GetA2dpProfile$)(const ::std::uint8_t *) = ::bluetooth::topshim::rust::GetA2dpProfile;
  return GetA2dpProfile$(btif).release();
}

::std::int32_t bluetooth$topshim$rust$cxxbridge1$A2dpIntf$init(const ::bluetooth::topshim::rust::A2dpIntf &self) noexcept {
  ::std::int32_t (::bluetooth::topshim::rust::A2dpIntf::*init$)() const = &::bluetooth::topshim::rust::A2dpIntf::init;
  return (self.*init$)();
}

::std::int32_t bluetooth$topshim$rust$cxxbridge1$A2dpIntf$connect(const ::bluetooth::topshim::rust::A2dpIntf &self, ::bluetooth::topshim::rust::RustRawAddress bt_addr) noexcept {
  ::std::int32_t (::bluetooth::topshim::rust::A2dpIntf::*connect$)(::bluetooth::topshim::rust::RustRawAddress) const = &::bluetooth::topshim::rust::A2dpIntf::connect;
  return (self.*connect$)(bt_addr);
}

::std::int32_t bluetooth$topshim$rust$cxxbridge1$A2dpIntf$disconnect(const ::bluetooth::topshim::rust::A2dpIntf &self, ::bluetooth::topshim::rust::RustRawAddress bt_addr) noexcept {
  ::std::int32_t (::bluetooth::topshim::rust::A2dpIntf::*disconnect$)(::bluetooth::topshim::rust::RustRawAddress) const = &::bluetooth::topshim::rust::A2dpIntf::disconnect;
  return (self.*disconnect$)(bt_addr);
}

::std::int32_t bluetooth$topshim$rust$cxxbridge1$A2dpIntf$set_silence_device(const ::bluetooth::topshim::rust::A2dpIntf &self, ::bluetooth::topshim::rust::RustRawAddress bt_addr, bool silent) noexcept {
  ::std::int32_t (::bluetooth::topshim::rust::A2dpIntf::*set_silence_device$)(::bluetooth::topshim::rust::RustRawAddress, bool) const = &::bluetooth::topshim::rust::A2dpIntf::set_silence_device;
  return (self.*set_silence_device$)(bt_addr, silent);
}

::std::int32_t bluetooth$topshim$rust$cxxbridge1$A2dpIntf$set_active_device(const ::bluetooth::topshim::rust::A2dpIntf &self, ::bluetooth::topshim::rust::RustRawAddress bt_addr) noexcept {
  ::std::int32_t (::bluetooth::topshim::rust::A2dpIntf::*set_active_device$)(::bluetooth::topshim::rust::RustRawAddress) const = &::bluetooth::topshim::rust::A2dpIntf::set_active_device;
  return (self.*set_active_device$)(bt_addr);
}

::std::int32_t bluetooth$topshim$rust$cxxbridge1$A2dpIntf$config_codec(const ::bluetooth::topshim::rust::A2dpIntf &self, ::bluetooth::topshim::rust::RustRawAddress bt_addr, const ::rust::Vec<::bluetooth::topshim::rust::A2dpCodecConfig> *codec_preferences) noexcept {
  ::std::int32_t (::bluetooth::topshim::rust::A2dpIntf::*config_codec$)(::bluetooth::topshim::rust::RustRawAddress, ::rust::Vec<::bluetooth::topshim::rust::A2dpCodecConfig>) const = &::bluetooth::topshim::rust::A2dpIntf::config_codec;
  return (self.*config_codec$)(bt_addr, ::rust::Vec<::bluetooth::topshim::rust::A2dpCodecConfig>(::rust::unsafe_bitcopy, *codec_preferences));
}

bool bluetooth$topshim$rust$cxxbridge1$A2dpIntf$set_audio_config(const ::bluetooth::topshim::rust::A2dpIntf &self, ::bluetooth::topshim::rust::A2dpCodecConfig config) noexcept {
  bool (::bluetooth::topshim::rust::A2dpIntf::*set_audio_config$)(::bluetooth::topshim::rust::A2dpCodecConfig) const = &::bluetooth::topshim::rust::A2dpIntf::set_audio_config;
  return (self.*set_audio_config$)(config);
}

bool bluetooth$topshim$rust$cxxbridge1$A2dpIntf$start_audio_request(const ::bluetooth::topshim::rust::A2dpIntf &self) noexcept {
  bool (::bluetooth::topshim::rust::A2dpIntf::*start_audio_request$)() const = &::bluetooth::topshim::rust::A2dpIntf::start_audio_request;
  return (self.*start_audio_request$)();
}

bool bluetooth$topshim$rust$cxxbridge1$A2dpIntf$stop_audio_request(const ::bluetooth::topshim::rust::A2dpIntf &self) noexcept {
  bool (::bluetooth::topshim::rust::A2dpIntf::*stop_audio_request$)() const = &::bluetooth::topshim::rust::A2dpIntf::stop_audio_request;
  return (self.*stop_audio_request$)();
}

void bluetooth$topshim$rust$cxxbridge1$A2dpIntf$cleanup(const ::bluetooth::topshim::rust::A2dpIntf &self) noexcept {
  void (::bluetooth::topshim::rust::A2dpIntf::*cleanup$)() const = &::bluetooth::topshim::rust::A2dpIntf::cleanup;
  (self.*cleanup$)();
}

::bluetooth::topshim::rust::RustPresentationPosition bluetooth$topshim$rust$cxxbridge1$A2dpIntf$get_presentation_position(const ::bluetooth::topshim::rust::A2dpIntf &self) noexcept {
  ::bluetooth::topshim::rust::RustPresentationPosition (::bluetooth::topshim::rust::A2dpIntf::*get_presentation_position$)() const = &::bluetooth::topshim::rust::A2dpIntf::get_presentation_position;
  return (self.*get_presentation_position$)();
}

::bluetooth::topshim::rust::A2dpSinkIntf *bluetooth$topshim$rust$cxxbridge1$GetA2dpSinkProfile(const ::std::uint8_t *btif) noexcept {
  ::std::unique_ptr<::bluetooth::topshim::rust::A2dpSinkIntf> (*GetA2dpSinkProfile$)(const ::std::uint8_t *) = ::bluetooth::topshim::rust::GetA2dpSinkProfile;
  return GetA2dpSinkProfile$(btif).release();
}

::std::int32_t bluetooth$topshim$rust$cxxbridge1$A2dpSinkIntf$init(const ::bluetooth::topshim::rust::A2dpSinkIntf &self) noexcept {
  ::std::int32_t (::bluetooth::topshim::rust::A2dpSinkIntf::*init$)() const = &::bluetooth::topshim::rust::A2dpSinkIntf::init;
  return (self.*init$)();
}

::std::int32_t bluetooth$topshim$rust$cxxbridge1$A2dpSinkIntf$connect(const ::bluetooth::topshim::rust::A2dpSinkIntf &self, ::bluetooth::topshim::rust::RustRawAddress bt_addr) noexcept {
  ::std::int32_t (::bluetooth::topshim::rust::A2dpSinkIntf::*connect$)(::bluetooth::topshim::rust::RustRawAddress) const = &::bluetooth::topshim::rust::A2dpSinkIntf::connect;
  return (self.*connect$)(bt_addr);
}

::std::int32_t bluetooth$topshim$rust$cxxbridge1$A2dpSinkIntf$disconnect(const ::bluetooth::topshim::rust::A2dpSinkIntf &self, ::bluetooth::topshim::rust::RustRawAddress bt_addr) noexcept {
  ::std::int32_t (::bluetooth::topshim::rust::A2dpSinkIntf::*disconnect$)(::bluetooth::topshim::rust::RustRawAddress) const = &::bluetooth::topshim::rust::A2dpSinkIntf::disconnect;
  return (self.*disconnect$)(bt_addr);
}

::std::int32_t bluetooth$topshim$rust$cxxbridge1$A2dpSinkIntf$set_active_device(const ::bluetooth::topshim::rust::A2dpSinkIntf &self, ::bluetooth::topshim::rust::RustRawAddress bt_addr) noexcept {
  ::std::int32_t (::bluetooth::topshim::rust::A2dpSinkIntf::*set_active_device$)(::bluetooth::topshim::rust::RustRawAddress) const = &::bluetooth::topshim::rust::A2dpSinkIntf::set_active_device;
  return (self.*set_active_device$)(bt_addr);
}

void bluetooth$topshim$rust$cxxbridge1$A2dpSinkIntf$cleanup(const ::bluetooth::topshim::rust::A2dpSinkIntf &self) noexcept {
  void (::bluetooth::topshim::rust::A2dpSinkIntf::*cleanup$)() const = &::bluetooth::topshim::rust::A2dpSinkIntf::cleanup;
  (self.*cleanup$)();
}

void bluetooth$topshim$rust$cxxbridge1$connection_state_callback(::bluetooth::topshim::rust::RustRawAddress addr, ::std::uint32_t state) noexcept;

void bluetooth$topshim$rust$cxxbridge1$audio_state_callback(::bluetooth::topshim::rust::RustRawAddress addr, ::std::uint32_t state) noexcept;

void bluetooth$topshim$rust$cxxbridge1$audio_config_callback(::bluetooth::topshim::rust::RustRawAddress addr, ::bluetooth::topshim::rust::A2dpCodecConfig codec_config, ::rust::Vec<::bluetooth::topshim::rust::A2dpCodecConfig> *codecs_local_capabilities, ::rust::Vec<::bluetooth::topshim::rust::A2dpCodecConfig> *codecs_selectable_capabilities) noexcept;

void bluetooth$topshim$rust$cxxbridge1$mandatory_codec_preferred_callback(::bluetooth::topshim::rust::RustRawAddress addr) noexcept;
} // extern "C"

void connection_state_callback(::bluetooth::topshim::rust::RustRawAddress addr, ::std::uint32_t state) noexcept {
  bluetooth$topshim$rust$cxxbridge1$connection_state_callback(addr, state);
}

void audio_state_callback(::bluetooth::topshim::rust::RustRawAddress addr, ::std::uint32_t state) noexcept {
  bluetooth$topshim$rust$cxxbridge1$audio_state_callback(addr, state);
}

void audio_config_callback(::bluetooth::topshim::rust::RustRawAddress addr, ::bluetooth::topshim::rust::A2dpCodecConfig codec_config, ::rust::Vec<::bluetooth::topshim::rust::A2dpCodecConfig> codecs_local_capabilities, ::rust::Vec<::bluetooth::topshim::rust::A2dpCodecConfig> codecs_selectable_capabilities) noexcept {
  ::rust::ManuallyDrop<::rust::Vec<::bluetooth::topshim::rust::A2dpCodecConfig>> codecs_local_capabilities$(::std::move(codecs_local_capabilities));
  ::rust::ManuallyDrop<::rust::Vec<::bluetooth::topshim::rust::A2dpCodecConfig>> codecs_selectable_capabilities$(::std::move(codecs_selectable_capabilities));
  bluetooth$topshim$rust$cxxbridge1$audio_config_callback(addr, codec_config, &codecs_local_capabilities$.value, &codecs_selectable_capabilities$.value);
}

void mandatory_codec_preferred_callback(::bluetooth::topshim::rust::RustRawAddress addr) noexcept {
  bluetooth$topshim$rust$cxxbridge1$mandatory_codec_preferred_callback(addr);
}
} // namespace rust
} // namespace topshim
} // namespace bluetooth

extern "C" {
static_assert(::rust::detail::is_complete<::bluetooth::topshim::rust::A2dpIntf>::value, "definition of A2dpIntf is required");
static_assert(sizeof(::std::unique_ptr<::bluetooth::topshim::rust::A2dpIntf>) == sizeof(void *), "");
static_assert(alignof(::std::unique_ptr<::bluetooth::topshim::rust::A2dpIntf>) == alignof(void *), "");
void cxxbridge1$unique_ptr$bluetooth$topshim$rust$A2dpIntf$null(::std::unique_ptr<::bluetooth::topshim::rust::A2dpIntf> *ptr) noexcept {
  ::new (ptr) ::std::unique_ptr<::bluetooth::topshim::rust::A2dpIntf>();
}
void cxxbridge1$unique_ptr$bluetooth$topshim$rust$A2dpIntf$raw(::std::unique_ptr<::bluetooth::topshim::rust::A2dpIntf> *ptr, ::bluetooth::topshim::rust::A2dpIntf *raw) noexcept {
  ::new (ptr) ::std::unique_ptr<::bluetooth::topshim::rust::A2dpIntf>(raw);
}
const ::bluetooth::topshim::rust::A2dpIntf *cxxbridge1$unique_ptr$bluetooth$topshim$rust$A2dpIntf$get(const ::std::unique_ptr<::bluetooth::topshim::rust::A2dpIntf>& ptr) noexcept {
  return ptr.get();
}
::bluetooth::topshim::rust::A2dpIntf *cxxbridge1$unique_ptr$bluetooth$topshim$rust$A2dpIntf$release(::std::unique_ptr<::bluetooth::topshim::rust::A2dpIntf>& ptr) noexcept {
  return ptr.release();
}
void cxxbridge1$unique_ptr$bluetooth$topshim$rust$A2dpIntf$drop(::std::unique_ptr<::bluetooth::topshim::rust::A2dpIntf> *ptr) noexcept {
  ::rust::deleter_if<::rust::detail::is_complete<::bluetooth::topshim::rust::A2dpIntf>::value>{}(ptr);
}

void cxxbridge1$rust_vec$bluetooth$topshim$rust$A2dpCodecConfig$new(const ::rust::Vec<::bluetooth::topshim::rust::A2dpCodecConfig> *ptr) noexcept;
void cxxbridge1$rust_vec$bluetooth$topshim$rust$A2dpCodecConfig$drop(::rust::Vec<::bluetooth::topshim::rust::A2dpCodecConfig> *ptr) noexcept;
::std::size_t cxxbridge1$rust_vec$bluetooth$topshim$rust$A2dpCodecConfig$len(const ::rust::Vec<::bluetooth::topshim::rust::A2dpCodecConfig> *ptr) noexcept;
::std::size_t cxxbridge1$rust_vec$bluetooth$topshim$rust$A2dpCodecConfig$capacity(const ::rust::Vec<::bluetooth::topshim::rust::A2dpCodecConfig> *ptr) noexcept;
const ::bluetooth::topshim::rust::A2dpCodecConfig *cxxbridge1$rust_vec$bluetooth$topshim$rust$A2dpCodecConfig$data(const ::rust::Vec<::bluetooth::topshim::rust::A2dpCodecConfig> *ptr) noexcept;
void cxxbridge1$rust_vec$bluetooth$topshim$rust$A2dpCodecConfig$reserve_total(::rust::Vec<::bluetooth::topshim::rust::A2dpCodecConfig> *ptr, ::std::size_t cap) noexcept;
void cxxbridge1$rust_vec$bluetooth$topshim$rust$A2dpCodecConfig$set_len(::rust::Vec<::bluetooth::topshim::rust::A2dpCodecConfig> *ptr, ::std::size_t len) noexcept;

static_assert(::rust::detail::is_complete<::bluetooth::topshim::rust::A2dpSinkIntf>::value, "definition of A2dpSinkIntf is required");
static_assert(sizeof(::std::unique_ptr<::bluetooth::topshim::rust::A2dpSinkIntf>) == sizeof(void *), "");
static_assert(alignof(::std::unique_ptr<::bluetooth::topshim::rust::A2dpSinkIntf>) == alignof(void *), "");
void cxxbridge1$unique_ptr$bluetooth$topshim$rust$A2dpSinkIntf$null(::std::unique_ptr<::bluetooth::topshim::rust::A2dpSinkIntf> *ptr) noexcept {
  ::new (ptr) ::std::unique_ptr<::bluetooth::topshim::rust::A2dpSinkIntf>();
}
void cxxbridge1$unique_ptr$bluetooth$topshim$rust$A2dpSinkIntf$raw(::std::unique_ptr<::bluetooth::topshim::rust::A2dpSinkIntf> *ptr, ::bluetooth::topshim::rust::A2dpSinkIntf *raw) noexcept {
  ::new (ptr) ::std::unique_ptr<::bluetooth::topshim::rust::A2dpSinkIntf>(raw);
}
const ::bluetooth::topshim::rust::A2dpSinkIntf *cxxbridge1$unique_ptr$bluetooth$topshim$rust$A2dpSinkIntf$get(const ::std::unique_ptr<::bluetooth::topshim::rust::A2dpSinkIntf>& ptr) noexcept {
  return ptr.get();
}
::bluetooth::topshim::rust::A2dpSinkIntf *cxxbridge1$unique_ptr$bluetooth$topshim$rust$A2dpSinkIntf$release(::std::unique_ptr<::bluetooth::topshim::rust::A2dpSinkIntf>& ptr) noexcept {
  return ptr.release();
}
void cxxbridge1$unique_ptr$bluetooth$topshim$rust$A2dpSinkIntf$drop(::std::unique_ptr<::bluetooth::topshim::rust::A2dpSinkIntf> *ptr) noexcept {
  ::rust::deleter_if<::rust::detail::is_complete<::bluetooth::topshim::rust::A2dpSinkIntf>::value>{}(ptr);
}
} // extern "C"

namespace rust {
inline namespace cxxbridge1 {
template <>
Vec<::bluetooth::topshim::rust::A2dpCodecConfig>::Vec() noexcept {
  cxxbridge1$rust_vec$bluetooth$topshim$rust$A2dpCodecConfig$new(this);
}
template <>
void Vec<::bluetooth::topshim::rust::A2dpCodecConfig>::drop() noexcept {
  return cxxbridge1$rust_vec$bluetooth$topshim$rust$A2dpCodecConfig$drop(this);
}
template <>
::std::size_t Vec<::bluetooth::topshim::rust::A2dpCodecConfig>::size() const noexcept {
  return cxxbridge1$rust_vec$bluetooth$topshim$rust$A2dpCodecConfig$len(this);
}
template <>
::std::size_t Vec<::bluetooth::topshim::rust::A2dpCodecConfig>::capacity() const noexcept {
  return cxxbridge1$rust_vec$bluetooth$topshim$rust$A2dpCodecConfig$capacity(this);
}
template <>
const ::bluetooth::topshim::rust::A2dpCodecConfig *Vec<::bluetooth::topshim::rust::A2dpCodecConfig>::data() const noexcept {
  return cxxbridge1$rust_vec$bluetooth$topshim$rust$A2dpCodecConfig$data(this);
}
template <>
void Vec<::bluetooth::topshim::rust::A2dpCodecConfig>::reserve_total(::std::size_t cap) noexcept {
  return cxxbridge1$rust_vec$bluetooth$topshim$rust$A2dpCodecConfig$reserve_total(this, cap);
}
template <>
void Vec<::bluetooth::topshim::rust::A2dpCodecConfig>::set_len(::std::size_t len) noexcept {
  return cxxbridge1$rust_vec$bluetooth$topshim$rust$A2dpCodecConfig$set_len(this, len);
}
} // namespace cxxbridge1
} // namespace rust
