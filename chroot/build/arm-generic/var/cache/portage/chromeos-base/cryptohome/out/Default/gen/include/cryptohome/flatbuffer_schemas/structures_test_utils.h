// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// THIS CODE IS GENERATED.
// Generated with command:
// gen/python/flatbuffer_cpp_binding_generator.py
// --output_dir=/build/arm-generic/var/cache/portage/chromeos-base/cryptohome/out/Default/gen/include/cryptohome/flatbuffer_schemas
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
// /build/arm-generic/var/cache/portage/chromeos-base/cryptohome/out/Default/gen/bfbs/structures.bfbs
// --filter_by_namespace cryptohome::structure

#ifndef CRYPTOHOME_FLATBUFFER_SCHEMAS_STRUCTURES_STRUCTURES_TEST_UTILS_H_
#define CRYPTOHOME_FLATBUFFER_SCHEMAS_STRUCTURES_STRUCTURES_TEST_UTILS_H_

#include "cryptohome/flatbuffer_schemas/structures.h"
#include "libhwsec/structures/signature_sealed_data_test_utils.h"

namespace cryptohome::structure {

inline bool operator==(const ChallengePublicKeyInfo& lhs,
                       const ChallengePublicKeyInfo& rhs) {
  return true && lhs.public_key_spki_der == rhs.public_key_spki_der &&
         lhs.signature_algorithm == rhs.signature_algorithm;
}
inline bool operator!=(const ChallengePublicKeyInfo& lhs,
                       const ChallengePublicKeyInfo& rhs) {
  return !(lhs == rhs);
}

}  // namespace cryptohome::structure

namespace cryptohome::structure {

inline bool operator==(const SignatureChallengeInfo& lhs,
                       const SignatureChallengeInfo& rhs) {
  return true && lhs.public_key_spki_der == rhs.public_key_spki_der &&
         lhs.sealed_secret == rhs.sealed_secret && lhs.salt == rhs.salt &&
         lhs.salt_signature_algorithm == rhs.salt_signature_algorithm;
}
inline bool operator!=(const SignatureChallengeInfo& lhs,
                       const SignatureChallengeInfo& rhs) {
  return !(lhs == rhs);
}

}  // namespace cryptohome::structure

#endif  // CRYPTOHOME_FLATBUFFER_SCHEMAS_STRUCTURES_STRUCTURES_TEST_UTILS_H_
