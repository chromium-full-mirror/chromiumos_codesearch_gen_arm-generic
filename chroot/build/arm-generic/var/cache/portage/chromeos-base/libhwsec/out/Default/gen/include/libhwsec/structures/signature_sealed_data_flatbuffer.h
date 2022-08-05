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
struct ToFlatBuffer<::hwsec::Tpm2PolicyDigest> {
  using ResultType =
      flatbuffers::Offset<::hwsec::_serialized_::Tpm2PolicyDigest>;

  ResultType operator()(flatbuffers::FlatBufferBuilder* builder,
                        const ::hwsec::Tpm2PolicyDigest& object) const {
    auto digest = ToFlatBuffer<brillo::Blob>()(builder, object.digest);

    return ::hwsec::_serialized_::CreateTpm2PolicyDigest(*builder, digest);
  }
};

}  // namespace hwsec_foundation

namespace hwsec_foundation {

template <>
struct FromFlatBuffer<::hwsec::Tpm2PolicyDigest> {
  ::hwsec::Tpm2PolicyDigest operator()(
      const ::hwsec::_serialized_::Tpm2PolicyDigest* object) const {
    if (object == nullptr) {
      return ::hwsec::Tpm2PolicyDigest();
    }
    return ::hwsec::Tpm2PolicyDigest{
        .digest = FromFlatBuffer<brillo::Blob>()(object->digest()),
    };
  }
};

}  // namespace hwsec_foundation

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
    auto pcr_policy_digests =
        ToFlatBuffer<std::vector<::hwsec::Tpm2PolicyDigest>>()(
            builder, object.pcr_policy_digests);

    return ::hwsec::_serialized_::CreateTpm2PolicySignedData(
        *builder, public_key_spki_der, srk_wrapped_secret, scheme, hash_alg,
        pcr_policy_digests);
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
        .pcr_policy_digests =
            FromFlatBuffer<std::vector<::hwsec::Tpm2PolicyDigest>>()(
                object->pcr_policy_digests()),
    };
  }
};

}  // namespace hwsec_foundation

namespace hwsec_foundation {

template <>
struct ToFlatBuffer<::hwsec::Tpm12PcrValue> {
  using ResultType = flatbuffers::Offset<::hwsec::_serialized_::Tpm12PcrValue>;

  ResultType operator()(flatbuffers::FlatBufferBuilder* builder,
                        const ::hwsec::Tpm12PcrValue& object) const {
    auto pcr_index =
        ToFlatBuffer<std::optional<uint32_t>>()(builder, object.pcr_index);
    auto pcr_value = ToFlatBuffer<brillo::Blob>()(builder, object.pcr_value);

    return ::hwsec::_serialized_::CreateTpm12PcrValue(*builder, pcr_index,
                                                      pcr_value);
  }
};

}  // namespace hwsec_foundation

namespace hwsec_foundation {

template <>
struct FromFlatBuffer<::hwsec::Tpm12PcrValue> {
  ::hwsec::Tpm12PcrValue operator()(
      const ::hwsec::_serialized_::Tpm12PcrValue* object) const {
    if (object == nullptr) {
      return ::hwsec::Tpm12PcrValue();
    }
    return ::hwsec::Tpm12PcrValue{
        .pcr_index =
            FromFlatBuffer<std::optional<uint32_t>>()(object->pcr_index()),
        .pcr_value = FromFlatBuffer<brillo::Blob>()(object->pcr_value()),
    };
  }
};

}  // namespace hwsec_foundation

namespace hwsec_foundation {

template <>
struct ToFlatBuffer<::hwsec::Tpm12PcrBoundItem> {
  using ResultType =
      flatbuffers::Offset<::hwsec::_serialized_::Tpm12PcrBoundItem>;

  ResultType operator()(flatbuffers::FlatBufferBuilder* builder,
                        const ::hwsec::Tpm12PcrBoundItem& object) const {
    auto pcr_values = ToFlatBuffer<std::vector<::hwsec::Tpm12PcrValue>>()(
        builder, object.pcr_values);
    auto bound_secret =
        ToFlatBuffer<brillo::Blob>()(builder, object.bound_secret);

    return ::hwsec::_serialized_::CreateTpm12PcrBoundItem(*builder, pcr_values,
                                                          bound_secret);
  }
};

}  // namespace hwsec_foundation

namespace hwsec_foundation {

template <>
struct FromFlatBuffer<::hwsec::Tpm12PcrBoundItem> {
  ::hwsec::Tpm12PcrBoundItem operator()(
      const ::hwsec::_serialized_::Tpm12PcrBoundItem* object) const {
    if (object == nullptr) {
      return ::hwsec::Tpm12PcrBoundItem();
    }
    return ::hwsec::Tpm12PcrBoundItem{
        .pcr_values = FromFlatBuffer<std::vector<::hwsec::Tpm12PcrValue>>()(
            object->pcr_values()),
        .bound_secret = FromFlatBuffer<brillo::Blob>()(object->bound_secret()),
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
    auto pcr_bound_items =
        ToFlatBuffer<std::vector<::hwsec::Tpm12PcrBoundItem>>()(
            builder, object.pcr_bound_items);

    return ::hwsec::_serialized_::CreateTpm12CertifiedMigratableKeyData(
        *builder, public_key_spki_der, srk_wrapped_cmk, cmk_pubkey,
        cmk_wrapped_auth_data, pcr_bound_items);
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
        .pcr_bound_items =
            FromFlatBuffer<std::vector<::hwsec::Tpm12PcrBoundItem>>()(
                object->pcr_bound_items()),
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
