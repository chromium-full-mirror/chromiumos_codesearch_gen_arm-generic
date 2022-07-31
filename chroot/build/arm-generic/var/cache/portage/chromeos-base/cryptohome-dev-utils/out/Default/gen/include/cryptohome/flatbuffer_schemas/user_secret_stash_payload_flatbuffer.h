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

#ifndef CRYPTOHOME_FLATBUFFER_SCHEMAS_USER_SECRET_STASH_PAYLOAD_FLATBUFFER_H_
#define CRYPTOHOME_FLATBUFFER_SCHEMAS_USER_SECRET_STASH_PAYLOAD_FLATBUFFER_H_

#include <stdint.h>
#include <optional>
#include <string>
#include <type_traits>
#include <variant>
#include <vector>

#include <brillo/secure_blob.h>
#include <flatbuffers/flatbuffers.h>

#include "cryptohome/user_secret_stash_container_generated.h"
#include "cryptohome/user_secret_stash_payload_generated.h"
#include "libhwsec-foundation/flatbuffers/basic_objects.h"

namespace hwsec_foundation {

template <>
struct ToFlatBuffer<::cryptohome::ResetSecretMapping> {
  using ResultType =
      flatbuffers::Offset<::cryptohome::_serialized_::ResetSecretMapping>;

  ResultType operator()(flatbuffers::FlatBufferBuilder* builder,
                        const ::cryptohome::ResetSecretMapping& object) const {
    auto auth_factor_label =
        ToFlatBuffer<std::string>()(builder, object.auth_factor_label);
    auto reset_secret =
        ToFlatBuffer<brillo::SecureBlob>()(builder, object.reset_secret);

    return ::cryptohome::_serialized_::CreateResetSecretMapping(
        *builder, auth_factor_label, reset_secret);
  }
};

}  // namespace hwsec_foundation

namespace hwsec_foundation {

template <>
struct FromFlatBuffer<::cryptohome::ResetSecretMapping> {
  ::cryptohome::ResetSecretMapping operator()(
      const ::cryptohome::_serialized_::ResetSecretMapping* object) const {
    if (object == nullptr) {
      return ::cryptohome::ResetSecretMapping();
    }
    return ::cryptohome::ResetSecretMapping{
        .auth_factor_label =
            FromFlatBuffer<std::string>()(object->auth_factor_label()),
        .reset_secret =
            FromFlatBuffer<brillo::SecureBlob>()(object->reset_secret()),
    };
  }
};

}  // namespace hwsec_foundation

namespace hwsec_foundation {

template <>
struct ToFlatBuffer<::cryptohome::UserSecretStashPayload> {
  using ResultType =
      flatbuffers::Offset<::cryptohome::_serialized_::UserSecretStashPayload>;

  ResultType operator()(
      flatbuffers::FlatBufferBuilder* builder,
      const ::cryptohome::UserSecretStashPayload& object) const {
    auto fek = ToFlatBuffer<brillo::SecureBlob>()(builder, object.fek);
    auto fnek = ToFlatBuffer<brillo::SecureBlob>()(builder, object.fnek);
    auto fek_salt =
        ToFlatBuffer<brillo::SecureBlob>()(builder, object.fek_salt);
    auto fnek_salt =
        ToFlatBuffer<brillo::SecureBlob>()(builder, object.fnek_salt);
    auto fek_sig = ToFlatBuffer<brillo::SecureBlob>()(builder, object.fek_sig);
    auto fnek_sig =
        ToFlatBuffer<brillo::SecureBlob>()(builder, object.fnek_sig);
    auto chaps_key =
        ToFlatBuffer<brillo::SecureBlob>()(builder, object.chaps_key);
    auto reset_secrets =
        ToFlatBuffer<std::vector<::cryptohome::ResetSecretMapping>>()(
            builder, object.reset_secrets);

    return ::cryptohome::_serialized_::CreateUserSecretStashPayload(
        *builder, fek, fnek, fek_salt, fnek_salt, fek_sig, fnek_sig, chaps_key,
        reset_secrets);
  }
};

}  // namespace hwsec_foundation

namespace hwsec_foundation {

template <>
struct FromFlatBuffer<::cryptohome::UserSecretStashPayload> {
  ::cryptohome::UserSecretStashPayload operator()(
      const ::cryptohome::_serialized_::UserSecretStashPayload* object) const {
    if (object == nullptr) {
      return ::cryptohome::UserSecretStashPayload();
    }
    return ::cryptohome::UserSecretStashPayload{
        .fek = FromFlatBuffer<brillo::SecureBlob>()(object->fek()),
        .fnek = FromFlatBuffer<brillo::SecureBlob>()(object->fnek()),
        .fek_salt = FromFlatBuffer<brillo::SecureBlob>()(object->fek_salt()),
        .fnek_salt = FromFlatBuffer<brillo::SecureBlob>()(object->fnek_salt()),
        .fek_sig = FromFlatBuffer<brillo::SecureBlob>()(object->fek_sig()),
        .fnek_sig = FromFlatBuffer<brillo::SecureBlob>()(object->fnek_sig()),
        .chaps_key = FromFlatBuffer<brillo::SecureBlob>()(object->chaps_key()),
        .reset_secrets =
            FromFlatBuffer<std::vector<::cryptohome::ResetSecretMapping>>()(
                object->reset_secrets()),
    };
  }
};

}  // namespace hwsec_foundation

#endif  // CRYPTOHOME_FLATBUFFER_SCHEMAS_USER_SECRET_STASH_PAYLOAD_FLATBUFFER_H_
