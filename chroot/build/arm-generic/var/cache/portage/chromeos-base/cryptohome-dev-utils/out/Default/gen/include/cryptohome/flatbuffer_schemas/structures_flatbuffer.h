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

#ifndef CRYPTOHOME_FLATBUFFER_SCHEMAS_STRUCTURES_STRUCTURES_FLATBUFFER_H_
#define CRYPTOHOME_FLATBUFFER_SCHEMAS_STRUCTURES_STRUCTURES_FLATBUFFER_H_

#include <stdint.h>
#include <optional>
#include <string>
#include <type_traits>
#include <variant>
#include <vector>

#include <brillo/secure_blob.h>
#include <flatbuffers/flatbuffers.h>

#include "cryptohome/flatbuffer_schemas/structures.h"
#include "cryptohome/structures_generated.h"
#include "libhwsec-foundation/flatbuffers/basic_objects.h"
#include "libhwsec/structures/signature_sealed_data_flatbuffer.h"

namespace hwsec_foundation {

template <>
struct ToFlatBuffer<::cryptohome::structure::ChallengeSignatureAlgorithm> {
  using ResultType =
      ::cryptohome::structure::_serialized_::ChallengeSignatureAlgorithm;

  ResultType operator()(
      flatbuffers::FlatBufferBuilder* builder,
      ::cryptohome::structure::ChallengeSignatureAlgorithm object) const {
    return static_cast<ResultType>(object);
  }
};

}  // namespace hwsec_foundation

namespace hwsec_foundation {

template <>
struct FromFlatBuffer<::cryptohome::structure::ChallengeSignatureAlgorithm> {
  ::cryptohome::structure::ChallengeSignatureAlgorithm operator()(
      ::cryptohome::structure::_serialized_::ChallengeSignatureAlgorithm object)
      const {
    return static_cast<::cryptohome::structure::ChallengeSignatureAlgorithm>(
        object);
  }

  ::cryptohome::structure::ChallengeSignatureAlgorithm operator()(
      std::underlying_type_t<
          ::cryptohome::structure::_serialized_::ChallengeSignatureAlgorithm>
          object) const {
    return static_cast<::cryptohome::structure::ChallengeSignatureAlgorithm>(
        object);
  }
};

}  // namespace hwsec_foundation

namespace hwsec_foundation {

template <>
struct ToFlatBuffer<::cryptohome::structure::ChallengePublicKeyInfo> {
  using ResultType = flatbuffers::Offset<
      ::cryptohome::structure::_serialized_::ChallengePublicKeyInfo>;

  ResultType operator()(
      flatbuffers::FlatBufferBuilder* builder,
      const ::cryptohome::structure::ChallengePublicKeyInfo& object) const {
    auto public_key_spki_der =
        ToFlatBuffer<brillo::Blob>()(builder, object.public_key_spki_der);
    auto signature_algorithm = ToFlatBuffer<
        std::vector<::cryptohome::structure::ChallengeSignatureAlgorithm>>()(
        builder, object.signature_algorithm);

    return ::cryptohome::structure::_serialized_::CreateChallengePublicKeyInfo(
        *builder, public_key_spki_der, signature_algorithm);
  }
};

}  // namespace hwsec_foundation

namespace hwsec_foundation {

template <>
struct FromFlatBuffer<::cryptohome::structure::ChallengePublicKeyInfo> {
  ::cryptohome::structure::ChallengePublicKeyInfo operator()(
      const ::cryptohome::structure::_serialized_::ChallengePublicKeyInfo*
          object) const {
    if (object == nullptr) {
      return ::cryptohome::structure::ChallengePublicKeyInfo();
    }
    return ::cryptohome::structure::ChallengePublicKeyInfo{
        .public_key_spki_der =
            FromFlatBuffer<brillo::Blob>()(object->public_key_spki_der()),
        .signature_algorithm = FromFlatBuffer<std::vector<
            ::cryptohome::structure::ChallengeSignatureAlgorithm>>()(
            object->signature_algorithm()),
    };
  }
};

}  // namespace hwsec_foundation

namespace hwsec_foundation {

template <>
struct ToFlatBuffer<::cryptohome::structure::SignatureChallengeInfo> {
  using ResultType = flatbuffers::Offset<
      ::cryptohome::structure::_serialized_::SignatureChallengeInfo>;

  ResultType operator()(
      flatbuffers::FlatBufferBuilder* builder,
      const ::cryptohome::structure::SignatureChallengeInfo& object) const {
    auto public_key_spki_der =
        ToFlatBuffer<brillo::Blob>()(builder, object.public_key_spki_der);
    auto sealed_secret_type =
        ToFlatBuffer<::hwsec::SignatureSealedData, IsUnionEnum>()(
            builder, object.sealed_secret);
    auto sealed_secret = ToFlatBuffer<::hwsec::SignatureSealedData>()(
        builder, object.sealed_secret);
    auto salt = ToFlatBuffer<brillo::Blob>()(builder, object.salt);
    auto salt_signature_algorithm = ToFlatBuffer<
        std::optional<::cryptohome::structure::ChallengeSignatureAlgorithm>>()(
        builder, object.salt_signature_algorithm);

    return ::cryptohome::structure::_serialized_::CreateSignatureChallengeInfo(
        *builder, public_key_spki_der, sealed_secret_type, sealed_secret, salt,
        salt_signature_algorithm);
  }
};

}  // namespace hwsec_foundation

namespace hwsec_foundation {

template <>
struct FromFlatBuffer<::cryptohome::structure::SignatureChallengeInfo> {
  ::cryptohome::structure::SignatureChallengeInfo operator()(
      const ::cryptohome::structure::_serialized_::SignatureChallengeInfo*
          object) const {
    if (object == nullptr) {
      return ::cryptohome::structure::SignatureChallengeInfo();
    }
    return ::cryptohome::structure::SignatureChallengeInfo{
        .public_key_spki_der =
            FromFlatBuffer<brillo::Blob>()(object->public_key_spki_der()),
        .sealed_secret = FromFlatBuffer<::hwsec::SignatureSealedData>()(
            object->sealed_secret(), object->sealed_secret_type()),
        .salt = FromFlatBuffer<brillo::Blob>()(object->salt()),
        .salt_signature_algorithm = FromFlatBuffer<std::optional<
            ::cryptohome::structure::ChallengeSignatureAlgorithm>>()(
            object->salt_signature_algorithm()),
    };
  }
};

}  // namespace hwsec_foundation

#endif  // CRYPTOHOME_FLATBUFFER_SCHEMAS_STRUCTURES_STRUCTURES_FLATBUFFER_H_
