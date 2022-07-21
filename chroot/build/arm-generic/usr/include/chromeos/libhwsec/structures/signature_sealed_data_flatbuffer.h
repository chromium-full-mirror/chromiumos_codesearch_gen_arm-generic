// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// THIS CODE IS GENERATED.
// Generated with command:
// gen/python/flatbuffer_cpp_binding_generator.py
// --output_dir=/build/arm-generic/var/cache/portage/chromeos-base/libhwsec/out/Default/gen/include/libhwsec/structures
// --guard_prefix=LIBLWSEC_STRUCTURES_SIGNATURE_SEALED_DATA
// --flatbuffer_header_include_paths libhwsec/structures/signature_sealed_data.h
// --flatbuffer_header_include_paths
// libhwsec/structures/signature_sealed_data_generated.h
// --flatbuffer_header_include_paths
// libhwsec-foundation/flatbuffers/basic_objects.h --impl_include_paths
// libhwsec/structures/signature_sealed_data.h --impl_include_paths
// libhwsec/structures/signature_sealed_data_flatbuffer.h --impl_include_paths
// libhwsec-foundation/flatbuffers/flatbuffer_secure_allocator_bridge.h
// --test_utils_header_include_path libhwsec/structures/signature_sealed_data.h
// /build/arm-generic/var/cache/portage/chromeos-base/libhwsec/out/Default/gen/bfbs/signature_sealed_data.bfbs

#ifndef LIBLWSEC_STRUCTURES_SIGNATURE_SEALED_DATA_SIGNATURE_SEALED_DATA_FLATBUFFER_H_
#define LIBLWSEC_STRUCTURES_SIGNATURE_SEALED_DATA_SIGNATURE_SEALED_DATA_FLATBUFFER_H_

#include <stdint.h>
#include <optional>
#include <string>
#include <type_traits>
#include <variant>
#include <vector>

#include <brillo/secure_blob.h>
#include <flatbuffers/flatbuffers.h>

#include "libhwsec-foundation/flatbuffers/basic_objects.h"
#include "libhwsec/structures/signature_sealed_data.h"
#include "libhwsec/structures/signature_sealed_data_generated.h"

namespace hwsec_foundation {

template <>
struct ToFlatBuffer<::hwsec::Tpm2PolicySignedData> {
  using ResultType =
      flatbuffers::Offset<::hwsec::_serialized_::Tpm2PolicySignedData>;

  ResultType operator()(flatbuffers::FlatBufferBuilder* builder,
                        const ::hwsec::Tpm2PolicySignedData& object) const {
    auto public_key_spki_der =
        ToFlatBuffer<brillo::Blob>()(builder, object.public_key_spki_der);
    auto srk_wrapped_secret =
        ToFlatBuffer<brillo::Blob>()(builder, object.srk_wrapped_secret);
    auto scheme =
        ToFlatBuffer<std::optional<int32_t>>()(builder, object.scheme);
    auto hash_alg =
        ToFlatBuffer<std::optional<int32_t>>()(builder, object.hash_alg);
    auto default_pcr_policy_digest =
        ToFlatBuffer<brillo::Blob>()(builder, object.default_pcr_policy_digest);
    auto extended_pcr_policy_digest = ToFlatBuffer<brillo::Blob>()(
        builder, object.extended_pcr_policy_digest);

    return ::hwsec::_serialized_::CreateTpm2PolicySignedData(
        *builder, public_key_spki_der, srk_wrapped_secret, scheme, hash_alg,
        default_pcr_policy_digest, extended_pcr_policy_digest);
  }
};

}  // namespace hwsec_foundation

namespace hwsec_foundation {

template <>
struct FromFlatBuffer<::hwsec::Tpm2PolicySignedData> {
  ::hwsec::Tpm2PolicySignedData operator()(
      const ::hwsec::_serialized_::Tpm2PolicySignedData* object) const {
    if (object == nullptr) {
      return ::hwsec::Tpm2PolicySignedData();
    }
    return ::hwsec::Tpm2PolicySignedData{
        .public_key_spki_der =
            FromFlatBuffer<brillo::Blob>()(object->public_key_spki_der()),
        .srk_wrapped_secret =
            FromFlatBuffer<brillo::Blob>()(object->srk_wrapped_secret()),
        .scheme = FromFlatBuffer<std::optional<int32_t>>()(object->scheme()),
        .hash_alg =
            FromFlatBuffer<std::optional<int32_t>>()(object->hash_alg()),
        .default_pcr_policy_digest =
            FromFlatBuffer<brillo::Blob>()(object->default_pcr_policy_digest()),
        .extended_pcr_policy_digest = FromFlatBuffer<brillo::Blob>()(
            object->extended_pcr_policy_digest()),
    };
  }
};

}  // namespace hwsec_foundation

namespace hwsec_foundation {

template <>
struct ToFlatBuffer<::hwsec::Tpm12CertifiedMigratableKeyData> {
  using ResultType = flatbuffers::Offset<
      ::hwsec::_serialized_::Tpm12CertifiedMigratableKeyData>;

  ResultType operator()(
      flatbuffers::FlatBufferBuilder* builder,
      const ::hwsec::Tpm12CertifiedMigratableKeyData& object) const {
    auto public_key_spki_der =
        ToFlatBuffer<brillo::Blob>()(builder, object.public_key_spki_der);
    auto srk_wrapped_cmk =
        ToFlatBuffer<brillo::Blob>()(builder, object.srk_wrapped_cmk);
    auto cmk_pubkey = ToFlatBuffer<brillo::Blob>()(builder, object.cmk_pubkey);
    auto cmk_wrapped_auth_data =
        ToFlatBuffer<brillo::Blob>()(builder, object.cmk_wrapped_auth_data);
    auto default_pcr_bound_secret =
        ToFlatBuffer<brillo::Blob>()(builder, object.default_pcr_bound_secret);
    auto extended_pcr_bound_secret =
        ToFlatBuffer<brillo::Blob>()(builder, object.extended_pcr_bound_secret);

    return ::hwsec::_serialized_::CreateTpm12CertifiedMigratableKeyData(
        *builder, public_key_spki_der, srk_wrapped_cmk, cmk_pubkey,
        cmk_wrapped_auth_data, default_pcr_bound_secret,
        extended_pcr_bound_secret);
  }
};

}  // namespace hwsec_foundation

namespace hwsec_foundation {

template <>
struct FromFlatBuffer<::hwsec::Tpm12CertifiedMigratableKeyData> {
  ::hwsec::Tpm12CertifiedMigratableKeyData operator()(
      const ::hwsec::_serialized_::Tpm12CertifiedMigratableKeyData* object)
      const {
    if (object == nullptr) {
      return ::hwsec::Tpm12CertifiedMigratableKeyData();
    }
    return ::hwsec::Tpm12CertifiedMigratableKeyData{
        .public_key_spki_der =
            FromFlatBuffer<brillo::Blob>()(object->public_key_spki_der()),
        .srk_wrapped_cmk =
            FromFlatBuffer<brillo::Blob>()(object->srk_wrapped_cmk()),
        .cmk_pubkey = FromFlatBuffer<brillo::Blob>()(object->cmk_pubkey()),
        .cmk_wrapped_auth_data =
            FromFlatBuffer<brillo::Blob>()(object->cmk_wrapped_auth_data()),
        .default_pcr_bound_secret =
            FromFlatBuffer<brillo::Blob>()(object->default_pcr_bound_secret()),
        .extended_pcr_bound_secret =
            FromFlatBuffer<brillo::Blob>()(object->extended_pcr_bound_secret()),
    };
  }
};

}  // namespace hwsec_foundation

namespace hwsec_foundation {

template <>
struct ToFlatBuffer<::hwsec::SignatureSealedData, IsUnionEnum> {
  using ResultType = ::hwsec::_serialized_::SignatureSealedData;

  ResultType operator()(flatbuffers::FlatBufferBuilder* builder,
                        const ::hwsec::SignatureSealedData& object) const {
    return std::visit(
        [](const auto& arg) -> ::hwsec::_serialized_::SignatureSealedData {
          using T = std::decay_t<decltype(arg)>;
          if constexpr (std::is_same_v<T, std::monostate>)
            return ::hwsec::_serialized_::SignatureSealedData::NONE;
          else if constexpr (std::is_same_v<T, ::hwsec::Tpm2PolicySignedData>)
            return ::hwsec::_serialized_::SignatureSealedData::
                Tpm2PolicySignedData;
          else if constexpr (std::is_same_v<
                                 T, ::hwsec::Tpm12CertifiedMigratableKeyData>)
            return ::hwsec::_serialized_::SignatureSealedData::
                Tpm12CertifiedMigratableKeyData;
        },
        object);
  }
};

}  // namespace hwsec_foundation

namespace hwsec_foundation {

template <>
struct FromFlatBuffer<::hwsec::SignatureSealedData> {
  ::hwsec::SignatureSealedData operator()(
      const void* object,
      ::hwsec::_serialized_::SignatureSealedData type) const {
    if (object == nullptr) {
      return std::monostate();
    }
    switch (type) {
      case ::hwsec::_serialized_::SignatureSealedData::NONE: {
        return std::monostate();
      }
      case ::hwsec::_serialized_::SignatureSealedData::Tpm2PolicySignedData: {
        return FromFlatBuffer<::hwsec::Tpm2PolicySignedData>()(
            static_cast<const ::hwsec::_serialized_::Tpm2PolicySignedData*>(
                object));
      }
      case ::hwsec::_serialized_::SignatureSealedData::
          Tpm12CertifiedMigratableKeyData: {
        return FromFlatBuffer<::hwsec::Tpm12CertifiedMigratableKeyData>()(
            static_cast<
                const ::hwsec::_serialized_::Tpm12CertifiedMigratableKeyData*>(
                object));
      }
    }
  }
};

}  // namespace hwsec_foundation

#endif  // LIBLWSEC_STRUCTURES_SIGNATURE_SEALED_DATA_SIGNATURE_SEALED_DATA_FLATBUFFER_H_
