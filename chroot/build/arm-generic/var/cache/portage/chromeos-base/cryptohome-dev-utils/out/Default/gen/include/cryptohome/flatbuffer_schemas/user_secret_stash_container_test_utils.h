// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// THIS CODE IS GENERATED.
// Generated with command:
// gen/python/flatbuffer_cpp_binding_generator.py
// --output_dir=/build/arm-generic/var/cache/portage/chromeos-base/cryptohome-dev-utils/out/Default/gen/include/cryptohome/flatbuffer_schemas
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
// /build/arm-generic/var/cache/portage/chromeos-base/cryptohome-dev-utils/out/Default/gen/bfbs/user_secret_stash_container.bfbs
// /build/arm-generic/var/cache/portage/chromeos-base/cryptohome-dev-utils/out/Default/gen/bfbs/user_secret_stash_payload.bfbs

#ifndef CRYPTOHOME_FLATBUFFER_SCHEMAS_USER_SECRET_STASH_CONTAINER_TEST_UTILS_H_
#define CRYPTOHOME_FLATBUFFER_SCHEMAS_USER_SECRET_STASH_CONTAINER_TEST_UTILS_H_

#include "cryptohome/flatbuffer_schemas/user_secret_stash.h"

namespace cryptohome {

inline bool operator==(const UserSecretStashWrappedKeyBlock& lhs,
                       const UserSecretStashWrappedKeyBlock& rhs) {
  return true && lhs.wrapping_id == rhs.wrapping_id &&
         lhs.encryption_algorithm == rhs.encryption_algorithm &&
         lhs.encrypted_key == rhs.encrypted_key && lhs.iv == rhs.iv &&
         lhs.gcm_tag == rhs.gcm_tag;
}
inline bool operator!=(const UserSecretStashWrappedKeyBlock& lhs,
                       const UserSecretStashWrappedKeyBlock& rhs) {
  return !(lhs == rhs);
}

}  // namespace cryptohome

namespace cryptohome {

inline bool operator==(const UserSecretStashContainer& lhs,
                       const UserSecretStashContainer& rhs) {
  return true && lhs.encryption_algorithm == rhs.encryption_algorithm &&
         lhs.ciphertext == rhs.ciphertext && lhs.iv == rhs.iv &&
         lhs.gcm_tag == rhs.gcm_tag &&
         lhs.wrapped_key_blocks == rhs.wrapped_key_blocks &&
         lhs.created_on_os_version == rhs.created_on_os_version;
}
inline bool operator!=(const UserSecretStashContainer& lhs,
                       const UserSecretStashContainer& rhs) {
  return !(lhs == rhs);
}

}  // namespace cryptohome

#endif  // CRYPTOHOME_FLATBUFFER_SCHEMAS_USER_SECRET_STASH_CONTAINER_TEST_UTILS_H_
