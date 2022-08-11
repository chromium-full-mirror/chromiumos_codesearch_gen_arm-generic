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

#ifndef CRYPTOHOME_FLATBUFFER_SCHEMAS_USER_SECRET_STASH_CONTAINER_H_
#define CRYPTOHOME_FLATBUFFER_SCHEMAS_USER_SECRET_STASH_CONTAINER_H_

#include <stdint.h>
#include <optional>
#include <string>
#include <variant>
#include <vector>

#include <brillo/secure_blob.h>

namespace cryptohome {

enum class UserSecretStashEncryptionAlgorithm : int32_t {
  AES_GCM_256 = 1,
};

}  // namespace cryptohome

namespace cryptohome {

struct UserSecretStashWrappedKeyBlock {
  std::string wrapping_id;
  std::optional<::cryptohome::UserSecretStashEncryptionAlgorithm>
      encryption_algorithm;
  brillo::Blob encrypted_key;
  brillo::Blob iv;
  brillo::Blob gcm_tag;
};

}  // namespace cryptohome

namespace cryptohome {

struct UserSecretStashContainer {
  std::optional<brillo::Blob> Serialize() const;
  static std::optional<UserSecretStashContainer> Deserialize(
      const brillo::Blob&);

  std::optional<::cryptohome::UserSecretStashEncryptionAlgorithm>
      encryption_algorithm;
  brillo::Blob ciphertext;
  brillo::Blob iv;
  brillo::Blob gcm_tag;
  std::vector<::cryptohome::UserSecretStashWrappedKeyBlock> wrapped_key_blocks;
  std::string created_on_os_version;
};

}  // namespace cryptohome

#endif  // CRYPTOHOME_FLATBUFFER_SCHEMAS_USER_SECRET_STASH_CONTAINER_H_
