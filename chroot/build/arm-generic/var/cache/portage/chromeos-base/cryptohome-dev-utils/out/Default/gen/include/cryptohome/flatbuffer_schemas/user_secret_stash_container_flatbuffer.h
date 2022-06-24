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
// /build/arm-generic/var/cache/portage/chromeos-base/cryptohome-dev-utils/out/Default/gen/bfbs/user_secret_stash_container.bfbs
// /build/arm-generic/var/cache/portage/chromeos-base/cryptohome-dev-utils/out/Default/gen/bfbs/user_secret_stash_payload.bfbs

#ifndef CRYPTOHOME_FLATBUFFER_SCHEMAS_USER_SECRET_STASH_CONTAINER_FLATBUFFER_H_
#define CRYPTOHOME_FLATBUFFER_SCHEMAS_USER_SECRET_STASH_CONTAINER_FLATBUFFER_H_

#include <stdint.h>
#include <optional>
#include <string>
#include <type_traits>
#include <variant>
#include <vector>

#include <brillo/secure_blob.h>
#include <flatbuffers/flatbuffers.h>

#include "cryptohome/flatbuffer_schemas/basic_objects.h"
#include "cryptohome/user_secret_stash_container_generated.h"
#include "cryptohome/user_secret_stash_payload_generated.h"

namespace cryptohome {

template <>
struct ToFlatBuffer<::cryptohome::UserSecretStashEncryptionAlgorithm> {
  using ResultType =
      ::cryptohome::_serialized_::UserSecretStashEncryptionAlgorithm;

  ResultType operator()(
      flatbuffers::FlatBufferBuilder* builder,
      ::cryptohome::UserSecretStashEncryptionAlgorithm object) const {
    return static_cast<ResultType>(object);
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct FromFlatBuffer<::cryptohome::UserSecretStashEncryptionAlgorithm> {
  ::cryptohome::UserSecretStashEncryptionAlgorithm operator()(
      ::cryptohome::_serialized_::UserSecretStashEncryptionAlgorithm object)
      const {
    return static_cast<::cryptohome::UserSecretStashEncryptionAlgorithm>(
        object);
  }

  ::cryptohome::UserSecretStashEncryptionAlgorithm operator()(
      std::underlying_type_t<
          ::cryptohome::_serialized_::UserSecretStashEncryptionAlgorithm>
          object) const {
    return static_cast<::cryptohome::UserSecretStashEncryptionAlgorithm>(
        object);
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct ToFlatBuffer<::cryptohome::UserSecretStashWrappedKeyBlock> {
  using ResultType = flatbuffers::Offset<
      ::cryptohome::_serialized_::UserSecretStashWrappedKeyBlock>;

  ResultType operator()(
      flatbuffers::FlatBufferBuilder* builder,
      const ::cryptohome::UserSecretStashWrappedKeyBlock& object) const {
    auto wrapping_id = ToFlatBuffer<std::string>()(builder, object.wrapping_id);
    auto encryption_algorithm = ToFlatBuffer<
        std::optional<::cryptohome::UserSecretStashEncryptionAlgorithm>>()(
        builder, object.encryption_algorithm);
    auto encrypted_key =
        ToFlatBuffer<brillo::Blob>()(builder, object.encrypted_key);
    auto iv = ToFlatBuffer<brillo::Blob>()(builder, object.iv);
    auto gcm_tag = ToFlatBuffer<brillo::Blob>()(builder, object.gcm_tag);

    return ::cryptohome::_serialized_::CreateUserSecretStashWrappedKeyBlock(
        *builder, wrapping_id, encryption_algorithm, encrypted_key, iv,
        gcm_tag);
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct FromFlatBuffer<::cryptohome::UserSecretStashWrappedKeyBlock> {
  ::cryptohome::UserSecretStashWrappedKeyBlock operator()(
      const ::cryptohome::_serialized_::UserSecretStashWrappedKeyBlock* object)
      const {
    if (object == nullptr) {
      return ::cryptohome::UserSecretStashWrappedKeyBlock();
    }
    return ::cryptohome::UserSecretStashWrappedKeyBlock{
        .wrapping_id = FromFlatBuffer<std::string>()(object->wrapping_id()),
        .encryption_algorithm = FromFlatBuffer<
            std::optional<::cryptohome::UserSecretStashEncryptionAlgorithm>>()(
            object->encryption_algorithm()),
        .encrypted_key =
            FromFlatBuffer<brillo::Blob>()(object->encrypted_key()),
        .iv = FromFlatBuffer<brillo::Blob>()(object->iv()),
        .gcm_tag = FromFlatBuffer<brillo::Blob>()(object->gcm_tag()),
    };
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct ToFlatBuffer<::cryptohome::UserSecretStashContainer> {
  using ResultType =
      flatbuffers::Offset<::cryptohome::_serialized_::UserSecretStashContainer>;

  ResultType operator()(
      flatbuffers::FlatBufferBuilder* builder,
      const ::cryptohome::UserSecretStashContainer& object) const {
    auto encryption_algorithm = ToFlatBuffer<
        std::optional<::cryptohome::UserSecretStashEncryptionAlgorithm>>()(
        builder, object.encryption_algorithm);
    auto ciphertext = ToFlatBuffer<brillo::Blob>()(builder, object.ciphertext);
    auto iv = ToFlatBuffer<brillo::Blob>()(builder, object.iv);
    auto gcm_tag = ToFlatBuffer<brillo::Blob>()(builder, object.gcm_tag);
    auto wrapped_key_blocks = ToFlatBuffer<
        std::vector<::cryptohome::UserSecretStashWrappedKeyBlock>>()(
        builder, object.wrapped_key_blocks);
    auto created_on_os_version =
        ToFlatBuffer<std::string>()(builder, object.created_on_os_version);

    return ::cryptohome::_serialized_::CreateUserSecretStashContainer(
        *builder, encryption_algorithm, ciphertext, iv, gcm_tag,
        wrapped_key_blocks, created_on_os_version);
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct FromFlatBuffer<::cryptohome::UserSecretStashContainer> {
  ::cryptohome::UserSecretStashContainer operator()(
      const ::cryptohome::_serialized_::UserSecretStashContainer* object)
      const {
    if (object == nullptr) {
      return ::cryptohome::UserSecretStashContainer();
    }
    return ::cryptohome::UserSecretStashContainer{
        .encryption_algorithm = FromFlatBuffer<
            std::optional<::cryptohome::UserSecretStashEncryptionAlgorithm>>()(
            object->encryption_algorithm()),
        .ciphertext = FromFlatBuffer<brillo::Blob>()(object->ciphertext()),
        .iv = FromFlatBuffer<brillo::Blob>()(object->iv()),
        .gcm_tag = FromFlatBuffer<brillo::Blob>()(object->gcm_tag()),
        .wrapped_key_blocks = FromFlatBuffer<
            std::vector<::cryptohome::UserSecretStashWrappedKeyBlock>>()(
            object->wrapped_key_blocks()),
        .created_on_os_version =
            FromFlatBuffer<std::string>()(object->created_on_os_version()),
    };
  }
};

}  // namespace cryptohome

#endif  // CRYPTOHOME_FLATBUFFER_SCHEMAS_USER_SECRET_STASH_CONTAINER_FLATBUFFER_H_
