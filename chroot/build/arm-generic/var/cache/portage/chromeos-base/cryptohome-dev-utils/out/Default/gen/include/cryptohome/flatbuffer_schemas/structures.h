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

#ifndef CRYPTOHOME_FLATBUFFER_SCHEMAS_STRUCTURES_STRUCTURES_H_
#define CRYPTOHOME_FLATBUFFER_SCHEMAS_STRUCTURES_STRUCTURES_H_

#include <stdint.h>
#include <optional>
#include <string>
#include <variant>
#include <vector>

#include <brillo/secure_blob.h>

#include "libhwsec/structures/signature_sealed_data.h"

namespace cryptohome::structure {

enum class ChallengeSignatureAlgorithm : int32_t {
  kRsassaPkcs1V15Sha1 = 1,
  kRsassaPkcs1V15Sha256 = 2,
  kRsassaPkcs1V15Sha384 = 3,
  kRsassaPkcs1V15Sha512 = 4,
};

}  // namespace cryptohome::structure

namespace cryptohome::structure {

struct ChallengePublicKeyInfo {
  brillo::Blob public_key_spki_der;
  std::vector<::cryptohome::structure::ChallengeSignatureAlgorithm>
      signature_algorithm;
};

}  // namespace cryptohome::structure

namespace cryptohome::structure {

struct SignatureChallengeInfo {
  std::optional<brillo::Blob> Serialize() const;
  static std::optional<SignatureChallengeInfo> Deserialize(const brillo::Blob&);

  brillo::Blob public_key_spki_der;
  ::hwsec::SignatureSealedData sealed_secret;
  brillo::Blob salt;
  std::optional<::cryptohome::structure::ChallengeSignatureAlgorithm>
      salt_signature_algorithm;
};

}  // namespace cryptohome::structure

#endif  // CRYPTOHOME_FLATBUFFER_SCHEMAS_STRUCTURES_STRUCTURES_H_
