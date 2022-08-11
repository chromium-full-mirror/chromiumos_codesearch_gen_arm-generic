#pragma once
#include "btav/btav_shim.h"
#include <cstdint>
#include <memory>

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
void avrcp_absolute_volume_enabled(bool enabled) noexcept;

void avrcp_absolute_volume_update(::std::uint8_t volume) noexcept;
} // namespace rust
} // namespace topshim
} // namespace bluetooth
