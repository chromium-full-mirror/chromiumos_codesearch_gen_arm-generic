// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// THIS CODE IS GENERATED.
// Generated with command:
// gen/python/flatbuffer_cpp_binding_generator.py
// --output_dir=/build/arm-generic/var/cache/portage/chromeos-base/cryptohome-dev-utils/out/Default/gen/include/cryptohome/flatbuffer_schemas
// --guard_prefix=CRYPTOHOME_FLATBUFFER_SCHEMAS_AUTH_BLOCK_STATE
// --header_include_paths cryptohome/flatbuffer_schemas/structures.h
// --flatbuffer_header_include_paths cryptohome/auth_block_state_generated.h
// --flatbuffer_header_include_paths
// cryptohome/flatbuffer_schemas/auth_block_state.h
// --flatbuffer_header_include_paths
// cryptohome/flatbuffer_schemas/structures_flatbuffer.h
// --flatbuffer_header_include_paths
// libhwsec-foundation/flatbuffers/basic_objects.h --impl_include_paths
// cryptohome/flatbuffer_schemas/auth_block_state.h --impl_include_paths
// cryptohome/flatbuffer_schemas/auth_block_state_flatbuffer.h
// --impl_include_paths cryptohome/flatbuffer_schemas/structures_flatbuffer.h
// --impl_include_paths
// libhwsec-foundation/flatbuffers/flatbuffer_secure_allocator_bridge.h
// --test_utils_header_include_path
// cryptohome/flatbuffer_schemas/auth_block_state.h
// --test_utils_header_include_path
// cryptohome/flatbuffer_schemas/structures_test_utils.h
// /build/arm-generic/var/cache/portage/chromeos-base/cryptohome-dev-utils/out/Default/gen/bfbs/auth_block_state.bfbs
// --filter_by_namespace cryptohome

#include <stdint.h>
#include <optional>
#include <string>
#include <variant>
#include <vector>

#include <base/logging.h>
#include <brillo/secure_blob.h>
#include <flatbuffers/flatbuffers.h>

#include "cryptohome/flatbuffer_schemas/auth_block_state.h"
#include "cryptohome/flatbuffer_schemas/auth_block_state_flatbuffer.h"
#include "cryptohome/flatbuffer_schemas/structures_flatbuffer.h"
#include "libhwsec-foundation/flatbuffers/flatbuffer_secure_allocator_bridge.h"

namespace {
[[maybe_unused]] constexpr int kFlatbufferAllocatorInitialSize = 4096;
}  // namespace

namespace cryptohome {

__attribute__((visibility("default"))) std::optional<brillo::SecureBlob>
AuthBlockState::Serialize() const {
  hwsec_foundation::FlatbufferSecureAllocatorBridge allocator;
  flatbuffers::FlatBufferBuilder builder(kFlatbufferAllocatorInitialSize,
                                         &allocator);
  auto buffer = hwsec_foundation::ToFlatBuffer<::cryptohome::AuthBlockState>()(
      &builder, *this);
  if (buffer.IsNull()) {
    LOG(ERROR) << "AuthBlockState cannot be serialized.";
    return std::nullopt;
  }
  builder.Finish(buffer);
  uint8_t* buf = builder.GetBufferPointer();
  int size = builder.GetSize();
  return brillo::SecureBlob(buf, buf + size);
}

}  // namespace cryptohome

namespace cryptohome {

// static
__attribute__((visibility("default")))
std::optional<::cryptohome::AuthBlockState>
AuthBlockState::Deserialize(const brillo::SecureBlob& blob) {
  flatbuffers::Verifier verifier(blob.data(), blob.size());
  if (!::cryptohome::_serialized_::VerifyAuthBlockStateBuffer(verifier)) {
    LOG(ERROR) << "AuthBlockState cannot be deserialized.";
    return std::nullopt;
  }

  const ::cryptohome::_serialized_::AuthBlockState* object =
      flatbuffers::GetRoot<::cryptohome::_serialized_::AuthBlockState>(
          blob.data());

  return hwsec_foundation::FromFlatBuffer<::cryptohome::AuthBlockState>()(
      object);
}

}  // namespace cryptohome
