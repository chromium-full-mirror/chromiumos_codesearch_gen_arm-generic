// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// THIS CODE IS GENERATED.
// Generated with command:
// gen/python/flatbuffer_cpp_binding_generator.py
// --output_dir=/build/arm-generic/var/cache/portage/chromeos-base/cryptohome-dev-utils/out/Default/gen/include/cryptohome/flatbuffer_schemas
// --guard_prefix=CRYPTOHOME_FLATBUFFER_SCHEMAS_STRUCTURES
// --header_include_paths libhwsec/structures/signature_sealed_data.h
// --flatbuffer_header_include_paths cryptohome/flatbuffer_schemas/structures.h
// --flatbuffer_header_include_paths cryptohome/structures_generated.h
// --flatbuffer_header_include_paths
// libhwsec/structures/signature_sealed_data_flatbuffer.h
// --flatbuffer_header_include_paths
// libhwsec-foundation/flatbuffers/basic_objects.h --impl_include_paths
// cryptohome/flatbuffer_schemas/structures.h --impl_include_paths
// cryptohome/flatbuffer_schemas/structures_flatbuffer.h --impl_include_paths
// libhwsec-foundation/flatbuffers/flatbuffer_secure_allocator_bridge.h
// --test_utils_header_include_path cryptohome/flatbuffer_schemas/structures.h
// --test_utils_header_include_path
// libhwsec/structures/signature_sealed_data_test_utils.h
// /build/arm-generic/var/cache/portage/chromeos-base/cryptohome-dev-utils/out/Default/gen/bfbs/structures.bfbs
// --filter_by_namespace cryptohome::structure

#include <stdint.h>
#include <optional>
#include <string>
#include <variant>
#include <vector>

#include <base/logging.h>
#include <brillo/secure_blob.h>
#include <flatbuffers/flatbuffers.h>

#include "cryptohome/flatbuffer_schemas/structures.h"
#include "cryptohome/flatbuffer_schemas/structures_flatbuffer.h"
#include "libhwsec-foundation/flatbuffers/flatbuffer_secure_allocator_bridge.h"

namespace {
[[maybe_unused]] constexpr int kFlatbufferAllocatorInitialSize = 4096;
}  // namespace

namespace cryptohome::structure {

__attribute__((visibility("default"))) std::optional<brillo::Blob>
SignatureChallengeInfo::Serialize() const {
  flatbuffers::FlatBufferBuilder builder;
  auto buffer = hwsec_foundation::ToFlatBuffer<
      ::cryptohome::structure::SignatureChallengeInfo>()(&builder, *this);
  if (buffer.IsNull()) {
    LOG(ERROR) << "SignatureChallengeInfo cannot be serialized.";
    return std::nullopt;
  }
  builder.Finish(buffer);
  uint8_t* buf = builder.GetBufferPointer();
  int size = builder.GetSize();
  return brillo::Blob(buf, buf + size);
}

}  // namespace cryptohome::structure

namespace cryptohome::structure {

// static
__attribute__((visibility("default")))
std::optional<::cryptohome::structure::SignatureChallengeInfo>
SignatureChallengeInfo::Deserialize(const brillo::Blob& blob) {
  flatbuffers::Verifier verifier(blob.data(), blob.size());
  if (!::cryptohome::structure::_serialized_::
          VerifySignatureChallengeInfoBuffer(verifier)) {
    LOG(ERROR) << "SignatureChallengeInfo cannot be deserialized.";
    return std::nullopt;
  }

  const ::cryptohome::structure::_serialized_::SignatureChallengeInfo* object =
      flatbuffers::GetRoot<
          ::cryptohome::structure::_serialized_::SignatureChallengeInfo>(
          blob.data());

  return hwsec_foundation::FromFlatBuffer<
      ::cryptohome::structure::SignatureChallengeInfo>()(object);
}

}  // namespace cryptohome::structure
