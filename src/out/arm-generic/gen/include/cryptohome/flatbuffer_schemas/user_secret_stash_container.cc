// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// THIS CODE IS GENERATED.
// Generated with command:
// gen/python/flatbuffer_cpp_binding_generator.py
// --output_dir=/build/arm-generic/var/cache/portage/chromeos-base/cryptohome/out/Default/gen/include/cryptohome/flatbuffer_schemas
// --guard_prefix=CRYPTOHOME_FLATBUFFER_SCHEMAS
// --flatbuffer_header_include_paths
// cryptohome/user_secret_stash_container_generated.h
// --flatbuffer_header_include_paths
// cryptohome/user_secret_stash_payload_generated.h
// --flatbuffer_header_include_paths
// libhwsec-foundation/flatbuffers/basic_objects.h --impl_include_paths
// cryptohome/flatbuffer_schemas/user_secret_stash_container.h
// --impl_include_paths
// cryptohome/flatbuffer_schemas/user_secret_stash_container_flatbuffer.h
// --impl_include_paths
// cryptohome/flatbuffer_schemas/user_secret_stash_payload.h
// --impl_include_paths
// cryptohome/flatbuffer_schemas/user_secret_stash_payload_flatbuffer.h
// --impl_include_paths
// libhwsec-foundation/flatbuffers/flatbuffer_secure_allocator_bridge.h
// --test_utils_header_include_path
// cryptohome/flatbuffer_schemas/user_secret_stash.h
// /build/arm-generic/var/cache/portage/chromeos-base/cryptohome/out/Default/gen/bfbs/user_secret_stash_container.bfbs
// /build/arm-generic/var/cache/portage/chromeos-base/cryptohome/out/Default/gen/bfbs/user_secret_stash_payload.bfbs

#include <stdint.h>
#include <optional>
#include <string>
#include <variant>
#include <vector>

#include <base/logging.h>
#include <brillo/secure_blob.h>
#include <flatbuffers/flatbuffers.h>

#include "cryptohome/flatbuffer_schemas/user_secret_stash_container.h"
#include "cryptohome/flatbuffer_schemas/user_secret_stash_container_flatbuffer.h"
#include "cryptohome/flatbuffer_schemas/user_secret_stash_payload.h"
#include "cryptohome/flatbuffer_schemas/user_secret_stash_payload_flatbuffer.h"
#include "libhwsec-foundation/flatbuffers/flatbuffer_secure_allocator_bridge.h"

namespace {
[[maybe_unused]] constexpr int kFlatbufferAllocatorInitialSize = 4096;
}  // namespace

namespace cryptohome {

__attribute__((visibility("default"))) std::optional<brillo::Blob>
UserSecretStashContainer::Serialize() const {
  flatbuffers::FlatBufferBuilder builder;
  auto buffer =
      hwsec_foundation::ToFlatBuffer<::cryptohome::UserSecretStashContainer>()(
          &builder, *this);
  if (buffer.IsNull()) {
    LOG(ERROR) << "UserSecretStashContainer cannot be serialized.";
    return std::nullopt;
  }
  builder.Finish(buffer);
  uint8_t* buf = builder.GetBufferPointer();
  int size = builder.GetSize();
  return brillo::Blob(buf, buf + size);
}

}  // namespace cryptohome

namespace cryptohome {

// static
__attribute__((visibility("default")))
std::optional<::cryptohome::UserSecretStashContainer>
UserSecretStashContainer::Deserialize(const brillo::Blob& blob) {
  flatbuffers::Verifier verifier(blob.data(), blob.size());
  if (!::cryptohome::_serialized_::VerifyUserSecretStashContainerBuffer(
          verifier)) {
    LOG(ERROR) << "UserSecretStashContainer cannot be deserialized.";
    return std::nullopt;
  }

  const ::cryptohome::_serialized_::UserSecretStashContainer* object =
      flatbuffers::GetRoot<
          ::cryptohome::_serialized_::UserSecretStashContainer>(blob.data());

  return hwsec_foundation::FromFlatBuffer<
      ::cryptohome::UserSecretStashContainer>()(object);
}

}  // namespace cryptohome
