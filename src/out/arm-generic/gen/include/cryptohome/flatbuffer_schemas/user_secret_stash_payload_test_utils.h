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
// cryptohome/flatbuffer_schemas/basic_objects.h --impl_include_paths
// cryptohome/flatbuffer_schemas/user_secret_stash_container.h
// --impl_include_paths
// cryptohome/flatbuffer_schemas/user_secret_stash_container_flatbuffer.h
// --impl_include_paths
// cryptohome/flatbuffer_schemas/user_secret_stash_payload.h
// --impl_include_paths
// cryptohome/flatbuffer_schemas/user_secret_stash_payload_flatbuffer.h
// --impl_include_paths cryptohome/flatbuffer_secure_allocator_bridge.h
// --test_utils_header_include_path
// cryptohome/flatbuffer_schemas/user_secret_stash.h
// /build/arm-generic/var/cache/portage/chromeos-base/cryptohome/out/Default/gen/bfbs/user_secret_stash_container.bfbs
// /build/arm-generic/var/cache/portage/chromeos-base/cryptohome/out/Default/gen/bfbs/user_secret_stash_payload.bfbs

#ifndef CRYPTOHOME_FLATBUFFER_SCHEMAS_USER_SECRET_STASH_PAYLOAD_TEST_UTILS_H_
#define CRYPTOHOME_FLATBUFFER_SCHEMAS_USER_SECRET_STASH_PAYLOAD_TEST_UTILS_H_

#include "cryptohome/flatbuffer_schemas/user_secret_stash.h"

namespace cryptohome {

inline bool operator==(const ResetSecretMapping& lhs,
                       const ResetSecretMapping& rhs) {
  return true && lhs.auth_factor_label == rhs.auth_factor_label &&
         lhs.reset_secret == rhs.reset_secret;
}
inline bool operator!=(const ResetSecretMapping& lhs,
                       const ResetSecretMapping& rhs) {
  return !(lhs == rhs);
}

}  // namespace cryptohome

namespace cryptohome {

inline bool operator==(const UserSecretStashPayload& lhs,
                       const UserSecretStashPayload& rhs) {
  return true && lhs.fek == rhs.fek && lhs.fnek == rhs.fnek &&
         lhs.fek_salt == rhs.fek_salt && lhs.fnek_salt == rhs.fnek_salt &&
         lhs.fek_sig == rhs.fek_sig && lhs.fnek_sig == rhs.fnek_sig &&
         lhs.chaps_key == rhs.chaps_key &&
         lhs.reset_secrets == rhs.reset_secrets;
}
inline bool operator!=(const UserSecretStashPayload& lhs,
                       const UserSecretStashPayload& rhs) {
  return !(lhs == rhs);
}

}  // namespace cryptohome

#endif  // CRYPTOHOME_FLATBUFFER_SCHEMAS_USER_SECRET_STASH_PAYLOAD_TEST_UTILS_H_
