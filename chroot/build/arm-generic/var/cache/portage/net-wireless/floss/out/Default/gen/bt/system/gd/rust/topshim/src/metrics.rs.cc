#include "metrics/metrics_shim.h"
#include <cstdint>

namespace bluetooth {
namespace topshim {
namespace rust {
extern "C" {
void bluetooth$topshim$rust$cxxbridge1$adapter_state_changed(::std::uint32_t state) noexcept {
  void (*adapter_state_changed$)(::std::uint32_t) = ::bluetooth::topshim::rust::adapter_state_changed;
  adapter_state_changed$(state);
}
} // extern "C"
} // namespace rust
} // namespace topshim
} // namespace bluetooth
