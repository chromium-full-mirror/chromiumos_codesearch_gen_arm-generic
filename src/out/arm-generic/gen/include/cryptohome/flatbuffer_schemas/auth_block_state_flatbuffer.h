// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// THIS CODE IS GENERATED.
// Generated with command:
// gen/python/flatbuffer_cpp_binding_generator.py
// --output_dir=/build/arm-generic/var/cache/portage/chromeos-base/cryptohome/out/Default/gen/include/cryptohome/flatbuffer_schemas
// --guard_prefix=CRYPTOHOME_FLATBUFFER_SCHEMAS
// --flatbuffer_header_include_paths cryptohome/auth_block_state_generated.h
// --flatbuffer_header_include_paths
// cryptohome/flatbuffer_schemas/auth_block_state.h
// --flatbuffer_header_include_paths
// cryptohome/flatbuffer_schemas/basic_objects.h
// --flatbuffer_header_include_paths cryptohome/structures_generated.h
// --impl_include_paths cryptohome/flatbuffer_schemas/auth_block_state.h
// --impl_include_paths
// cryptohome/flatbuffer_schemas/auth_block_state_flatbuffer.h
// --impl_include_paths cryptohome/flatbuffer_secure_allocator_bridge.h
// --test_utils_header_include_path
// cryptohome/flatbuffer_schemas/auth_block_state.h
// /build/arm-generic/var/cache/portage/chromeos-base/cryptohome/out/Default/gen/bfbs/auth_block_state.bfbs

#ifndef CRYPTOHOME_FLATBUFFER_SCHEMAS_AUTH_BLOCK_STATE_FLATBUFFER_H_
#define CRYPTOHOME_FLATBUFFER_SCHEMAS_AUTH_BLOCK_STATE_FLATBUFFER_H_

#include <stdint.h>
#include <optional>
#include <string>
#include <type_traits>
#include <variant>
#include <vector>

#include <brillo/secure_blob.h>
#include <flatbuffers/flatbuffers.h>

#include "cryptohome/auth_block_state_generated.h"
#include "cryptohome/flatbuffer_schemas/auth_block_state.h"
#include "cryptohome/flatbuffer_schemas/basic_objects.h"
#include "cryptohome/structures_generated.h"

namespace cryptohome {

template <>
struct ToFlatBuffer<::cryptohome::TpmBoundToPcrAuthBlockState> {
  using ResultType = flatbuffers::Offset<
      ::cryptohome::_serialized_::TpmBoundToPcrAuthBlockState>;

  ResultType operator()(
      flatbuffers::FlatBufferBuilder* builder,
      const ::cryptohome::TpmBoundToPcrAuthBlockState& object) const {
    auto scrypt_derived =
        ToFlatBuffer<std::optional<bool>>()(builder, object.scrypt_derived);
    auto salt =
        ToFlatBuffer<std::optional<brillo::SecureBlob>>()(builder, object.salt);
    auto tpm_key = ToFlatBuffer<std::optional<brillo::SecureBlob>>()(
        builder, object.tpm_key);
    auto extended_tpm_key = ToFlatBuffer<std::optional<brillo::SecureBlob>>()(
        builder, object.extended_tpm_key);
    auto tpm_public_key_hash =
        ToFlatBuffer<std::optional<brillo::SecureBlob>>()(
            builder, object.tpm_public_key_hash);

    return ::cryptohome::_serialized_::CreateTpmBoundToPcrAuthBlockState(
        *builder, scrypt_derived, salt, tpm_key, extended_tpm_key,
        tpm_public_key_hash);
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct FromFlatBuffer<::cryptohome::TpmBoundToPcrAuthBlockState> {
  ::cryptohome::TpmBoundToPcrAuthBlockState operator()(
      const ::cryptohome::_serialized_::TpmBoundToPcrAuthBlockState* object)
      const {
    if (object == nullptr) {
      return ::cryptohome::TpmBoundToPcrAuthBlockState();
    }
    return ::cryptohome::TpmBoundToPcrAuthBlockState{
        .scrypt_derived =
            FromFlatBuffer<std::optional<bool>>()(object->scrypt_derived()),
        .salt =
            FromFlatBuffer<std::optional<brillo::SecureBlob>>()(object->salt()),
        .tpm_key = FromFlatBuffer<std::optional<brillo::SecureBlob>>()(
            object->tpm_key()),
        .extended_tpm_key = FromFlatBuffer<std::optional<brillo::SecureBlob>>()(
            object->extended_tpm_key()),
        .tpm_public_key_hash =
            FromFlatBuffer<std::optional<brillo::SecureBlob>>()(
                object->tpm_public_key_hash()),
    };
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct ToFlatBuffer<::cryptohome::TpmNotBoundToPcrAuthBlockState> {
  using ResultType = flatbuffers::Offset<
      ::cryptohome::_serialized_::TpmNotBoundToPcrAuthBlockState>;

  ResultType operator()(
      flatbuffers::FlatBufferBuilder* builder,
      const ::cryptohome::TpmNotBoundToPcrAuthBlockState& object) const {
    auto scrypt_derived =
        ToFlatBuffer<std::optional<bool>>()(builder, object.scrypt_derived);
    auto salt =
        ToFlatBuffer<std::optional<brillo::SecureBlob>>()(builder, object.salt);
    auto password_rounds = ToFlatBuffer<std::optional<uint32_t>>()(
        builder, object.password_rounds);
    auto tpm_key = ToFlatBuffer<std::optional<brillo::SecureBlob>>()(
        builder, object.tpm_key);
    auto tpm_public_key_hash =
        ToFlatBuffer<std::optional<brillo::SecureBlob>>()(
            builder, object.tpm_public_key_hash);

    return ::cryptohome::_serialized_::CreateTpmNotBoundToPcrAuthBlockState(
        *builder, scrypt_derived, salt, password_rounds, tpm_key,
        tpm_public_key_hash);
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct FromFlatBuffer<::cryptohome::TpmNotBoundToPcrAuthBlockState> {
  ::cryptohome::TpmNotBoundToPcrAuthBlockState operator()(
      const ::cryptohome::_serialized_::TpmNotBoundToPcrAuthBlockState* object)
      const {
    if (object == nullptr) {
      return ::cryptohome::TpmNotBoundToPcrAuthBlockState();
    }
    return ::cryptohome::TpmNotBoundToPcrAuthBlockState{
        .scrypt_derived =
            FromFlatBuffer<std::optional<bool>>()(object->scrypt_derived()),
        .salt =
            FromFlatBuffer<std::optional<brillo::SecureBlob>>()(object->salt()),
        .password_rounds = FromFlatBuffer<std::optional<uint32_t>>()(
            object->password_rounds()),
        .tpm_key = FromFlatBuffer<std::optional<brillo::SecureBlob>>()(
            object->tpm_key()),
        .tpm_public_key_hash =
            FromFlatBuffer<std::optional<brillo::SecureBlob>>()(
                object->tpm_public_key_hash()),
    };
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct ToFlatBuffer<::cryptohome::PinWeaverAuthBlockState> {
  using ResultType =
      flatbuffers::Offset<::cryptohome::_serialized_::PinWeaverAuthBlockState>;

  ResultType operator()(
      flatbuffers::FlatBufferBuilder* builder,
      const ::cryptohome::PinWeaverAuthBlockState& object) const {
    auto le_label =
        ToFlatBuffer<std::optional<uint64_t>>()(builder, object.le_label);
    auto salt =
        ToFlatBuffer<std::optional<brillo::SecureBlob>>()(builder, object.salt);
    auto chaps_iv = ToFlatBuffer<std::optional<brillo::SecureBlob>>()(
        builder, object.chaps_iv);
    auto fek_iv = ToFlatBuffer<std::optional<brillo::SecureBlob>>()(
        builder, object.fek_iv);
    auto reset_salt = ToFlatBuffer<std::optional<brillo::SecureBlob>>()(
        builder, object.reset_salt);

    return ::cryptohome::_serialized_::CreatePinWeaverAuthBlockState(
        *builder, le_label, salt, chaps_iv, fek_iv, reset_salt);
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct FromFlatBuffer<::cryptohome::PinWeaverAuthBlockState> {
  ::cryptohome::PinWeaverAuthBlockState operator()(
      const ::cryptohome::_serialized_::PinWeaverAuthBlockState* object) const {
    if (object == nullptr) {
      return ::cryptohome::PinWeaverAuthBlockState();
    }
    return ::cryptohome::PinWeaverAuthBlockState{
        .le_label =
            FromFlatBuffer<std::optional<uint64_t>>()(object->le_label()),
        .salt =
            FromFlatBuffer<std::optional<brillo::SecureBlob>>()(object->salt()),
        .chaps_iv = FromFlatBuffer<std::optional<brillo::SecureBlob>>()(
            object->chaps_iv()),
        .fek_iv = FromFlatBuffer<std::optional<brillo::SecureBlob>>()(
            object->fek_iv()),
        .reset_salt = FromFlatBuffer<std::optional<brillo::SecureBlob>>()(
            object->reset_salt()),
    };
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct ToFlatBuffer<::cryptohome::LibScryptCompatAuthBlockState> {
  using ResultType = flatbuffers::Offset<
      ::cryptohome::_serialized_::LibScryptCompatAuthBlockState>;

  ResultType operator()(
      flatbuffers::FlatBufferBuilder* builder,
      const ::cryptohome::LibScryptCompatAuthBlockState& object) const {
    auto wrapped_keyset = ToFlatBuffer<std::optional<brillo::SecureBlob>>()(
        builder, object.wrapped_keyset);
    auto wrapped_chaps_key = ToFlatBuffer<std::optional<brillo::SecureBlob>>()(
        builder, object.wrapped_chaps_key);
    auto wrapped_reset_seed = ToFlatBuffer<std::optional<brillo::SecureBlob>>()(
        builder, object.wrapped_reset_seed);
    auto salt =
        ToFlatBuffer<std::optional<brillo::SecureBlob>>()(builder, object.salt);

    return ::cryptohome::_serialized_::CreateLibScryptCompatAuthBlockState(
        *builder, wrapped_keyset, wrapped_chaps_key, wrapped_reset_seed, salt);
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct FromFlatBuffer<::cryptohome::LibScryptCompatAuthBlockState> {
  ::cryptohome::LibScryptCompatAuthBlockState operator()(
      const ::cryptohome::_serialized_::LibScryptCompatAuthBlockState* object)
      const {
    if (object == nullptr) {
      return ::cryptohome::LibScryptCompatAuthBlockState();
    }
    return ::cryptohome::LibScryptCompatAuthBlockState{
        .wrapped_keyset = FromFlatBuffer<std::optional<brillo::SecureBlob>>()(
            object->wrapped_keyset()),
        .wrapped_chaps_key =
            FromFlatBuffer<std::optional<brillo::SecureBlob>>()(
                object->wrapped_chaps_key()),
        .wrapped_reset_seed =
            FromFlatBuffer<std::optional<brillo::SecureBlob>>()(
                object->wrapped_reset_seed()),
        .salt =
            FromFlatBuffer<std::optional<brillo::SecureBlob>>()(object->salt()),
    };
  }
};

}  // namespace cryptohome

namespace cryptohome {

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

}  // namespace cryptohome

namespace cryptohome {

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

}  // namespace cryptohome

namespace cryptohome {

template <>
struct ToFlatBuffer<::cryptohome::structure::Tpm2PolicySignedData> {
  using ResultType = flatbuffers::Offset<
      ::cryptohome::structure::_serialized_::Tpm2PolicySignedData>;

  ResultType operator()(
      flatbuffers::FlatBufferBuilder* builder,
      const ::cryptohome::structure::Tpm2PolicySignedData& object) const {
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

    return ::cryptohome::structure::_serialized_::CreateTpm2PolicySignedData(
        *builder, public_key_spki_der, srk_wrapped_secret, scheme, hash_alg,
        default_pcr_policy_digest, extended_pcr_policy_digest);
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct FromFlatBuffer<::cryptohome::structure::Tpm2PolicySignedData> {
  ::cryptohome::structure::Tpm2PolicySignedData operator()(
      const ::cryptohome::structure::_serialized_::Tpm2PolicySignedData* object)
      const {
    if (object == nullptr) {
      return ::cryptohome::structure::Tpm2PolicySignedData();
    }
    return ::cryptohome::structure::Tpm2PolicySignedData{
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

}  // namespace cryptohome

namespace cryptohome {

template <>
struct ToFlatBuffer<::cryptohome::structure::Tpm12CertifiedMigratableKeyData> {
  using ResultType = flatbuffers::Offset<
      ::cryptohome::structure::_serialized_::Tpm12CertifiedMigratableKeyData>;

  ResultType operator()(
      flatbuffers::FlatBufferBuilder* builder,
      const ::cryptohome::structure::Tpm12CertifiedMigratableKeyData& object)
      const {
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

    return ::cryptohome::structure::_serialized_::
        CreateTpm12CertifiedMigratableKeyData(
            *builder, public_key_spki_der, srk_wrapped_cmk, cmk_pubkey,
            cmk_wrapped_auth_data, default_pcr_bound_secret,
            extended_pcr_bound_secret);
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct FromFlatBuffer<
    ::cryptohome::structure::Tpm12CertifiedMigratableKeyData> {
  ::cryptohome::structure::Tpm12CertifiedMigratableKeyData operator()(
      const ::cryptohome::structure::_serialized_::
          Tpm12CertifiedMigratableKeyData* object) const {
    if (object == nullptr) {
      return ::cryptohome::structure::Tpm12CertifiedMigratableKeyData();
    }
    return ::cryptohome::structure::Tpm12CertifiedMigratableKeyData{
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

}  // namespace cryptohome

namespace cryptohome {

template <>
struct ToFlatBuffer<::cryptohome::structure::SignatureSealedData, IsUnionEnum> {
  using ResultType = ::cryptohome::structure::_serialized_::SignatureSealedData;

  ResultType operator()(
      flatbuffers::FlatBufferBuilder* builder,
      const ::cryptohome::structure::SignatureSealedData& object) const {
    return std::visit(
        [](const auto& arg)
            -> ::cryptohome::structure::_serialized_::SignatureSealedData {
          using T = std::decay_t<decltype(arg)>;
          if constexpr (std::is_same_v<T, std::monostate>)
            return ::cryptohome::structure::_serialized_::SignatureSealedData::
                NONE;
          else if constexpr (std::is_same_v<
                                 T,
                                 ::cryptohome::structure::Tpm2PolicySignedData>)
            return ::cryptohome::structure::_serialized_::SignatureSealedData::
                Tpm2PolicySignedData;
          else if constexpr (std::is_same_v<
                                 T, ::cryptohome::structure::
                                        Tpm12CertifiedMigratableKeyData>)
            return ::cryptohome::structure::_serialized_::SignatureSealedData::
                Tpm12CertifiedMigratableKeyData;
        },
        object);
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct FromFlatBuffer<::cryptohome::structure::SignatureSealedData> {
  ::cryptohome::structure::SignatureSealedData operator()(
      const void* object,
      ::cryptohome::structure::_serialized_::SignatureSealedData type) const {
    if (object == nullptr) {
      return std::monostate();
    }
    switch (type) {
      case ::cryptohome::structure::_serialized_::SignatureSealedData::NONE: {
        return std::monostate();
      }
      case ::cryptohome::structure::_serialized_::SignatureSealedData::
          Tpm2PolicySignedData: {
        return FromFlatBuffer<::cryptohome::structure::Tpm2PolicySignedData>()(
            static_cast<const ::cryptohome::structure::_serialized_::
                            Tpm2PolicySignedData*>(object));
      }
      case ::cryptohome::structure::_serialized_::SignatureSealedData::
          Tpm12CertifiedMigratableKeyData: {
        return FromFlatBuffer<
            ::cryptohome::structure::Tpm12CertifiedMigratableKeyData>()(
            static_cast<const ::cryptohome::structure::_serialized_::
                            Tpm12CertifiedMigratableKeyData*>(object));
      }
    }
  }
};

}  // namespace cryptohome

namespace cryptohome {

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
        ToFlatBuffer<::cryptohome::structure::SignatureSealedData,
                     IsUnionEnum>()(builder, object.sealed_secret);
    auto sealed_secret =
        ToFlatBuffer<::cryptohome::structure::SignatureSealedData>()(
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

}  // namespace cryptohome

namespace cryptohome {

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
        .sealed_secret =
            FromFlatBuffer<::cryptohome::structure::SignatureSealedData>()(
                object->sealed_secret(), object->sealed_secret_type()),
        .salt = FromFlatBuffer<brillo::Blob>()(object->salt()),
        .salt_signature_algorithm = FromFlatBuffer<std::optional<
            ::cryptohome::structure::ChallengeSignatureAlgorithm>>()(
            object->salt_signature_algorithm()),
    };
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct ToFlatBuffer<::cryptohome::ChallengeCredentialAuthBlockState> {
  using ResultType = flatbuffers::Offset<
      ::cryptohome::_serialized_::ChallengeCredentialAuthBlockState>;

  ResultType operator()(
      flatbuffers::FlatBufferBuilder* builder,
      const ::cryptohome::ChallengeCredentialAuthBlockState& object) const {
    auto scrypt_state =
        ToFlatBuffer<::cryptohome::LibScryptCompatAuthBlockState>()(
            builder, object.scrypt_state);
    auto keyset_challenge_info = ToFlatBuffer<
        std::optional<::cryptohome::structure::SignatureChallengeInfo>>()(
        builder, object.keyset_challenge_info);

    return ::cryptohome::_serialized_::CreateChallengeCredentialAuthBlockState(
        *builder, scrypt_state, keyset_challenge_info);
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct FromFlatBuffer<::cryptohome::ChallengeCredentialAuthBlockState> {
  ::cryptohome::ChallengeCredentialAuthBlockState operator()(
      const ::cryptohome::_serialized_::ChallengeCredentialAuthBlockState*
          object) const {
    if (object == nullptr) {
      return ::cryptohome::ChallengeCredentialAuthBlockState();
    }
    return ::cryptohome::ChallengeCredentialAuthBlockState{
        .scrypt_state =
            FromFlatBuffer<::cryptohome::LibScryptCompatAuthBlockState>()(
                object->scrypt_state()),
        .keyset_challenge_info = FromFlatBuffer<
            std::optional<::cryptohome::structure::SignatureChallengeInfo>>()(
            object->keyset_challenge_info()),
    };
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct ToFlatBuffer<::cryptohome::DoubleWrappedCompatAuthBlockState> {
  using ResultType = flatbuffers::Offset<
      ::cryptohome::_serialized_::DoubleWrappedCompatAuthBlockState>;

  ResultType operator()(
      flatbuffers::FlatBufferBuilder* builder,
      const ::cryptohome::DoubleWrappedCompatAuthBlockState& object) const {
    auto scrypt_state =
        ToFlatBuffer<::cryptohome::LibScryptCompatAuthBlockState>()(
            builder, object.scrypt_state);
    auto tpm_state =
        ToFlatBuffer<::cryptohome::TpmNotBoundToPcrAuthBlockState>()(
            builder, object.tpm_state);

    return ::cryptohome::_serialized_::CreateDoubleWrappedCompatAuthBlockState(
        *builder, scrypt_state, tpm_state);
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct FromFlatBuffer<::cryptohome::DoubleWrappedCompatAuthBlockState> {
  ::cryptohome::DoubleWrappedCompatAuthBlockState operator()(
      const ::cryptohome::_serialized_::DoubleWrappedCompatAuthBlockState*
          object) const {
    if (object == nullptr) {
      return ::cryptohome::DoubleWrappedCompatAuthBlockState();
    }
    return ::cryptohome::DoubleWrappedCompatAuthBlockState{
        .scrypt_state =
            FromFlatBuffer<::cryptohome::LibScryptCompatAuthBlockState>()(
                object->scrypt_state()),
        .tpm_state =
            FromFlatBuffer<::cryptohome::TpmNotBoundToPcrAuthBlockState>()(
                object->tpm_state()),
    };
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct ToFlatBuffer<::cryptohome::CryptohomeRecoveryAuthBlockState> {
  using ResultType = flatbuffers::Offset<
      ::cryptohome::_serialized_::CryptohomeRecoveryAuthBlockState>;

  ResultType operator()(
      flatbuffers::FlatBufferBuilder* builder,
      const ::cryptohome::CryptohomeRecoveryAuthBlockState& object) const {
    auto hsm_payload =
        ToFlatBuffer<brillo::SecureBlob>()(builder, object.hsm_payload);
    auto salt = ToFlatBuffer<brillo::SecureBlob>()(builder, object.salt);
    auto encrypted_destination_share = ToFlatBuffer<brillo::SecureBlob>()(
        builder, object.encrypted_destination_share);
    auto channel_pub_key =
        ToFlatBuffer<brillo::SecureBlob>()(builder, object.channel_pub_key);
    auto encrypted_channel_priv_key = ToFlatBuffer<brillo::SecureBlob>()(
        builder, object.encrypted_channel_priv_key);
    auto encrypted_rsa_priv_key = ToFlatBuffer<brillo::SecureBlob>()(
        builder, object.encrypted_rsa_priv_key);

    return ::cryptohome::_serialized_::CreateCryptohomeRecoveryAuthBlockState(
        *builder, hsm_payload, salt, encrypted_destination_share,
        channel_pub_key, encrypted_channel_priv_key, encrypted_rsa_priv_key);
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct FromFlatBuffer<::cryptohome::CryptohomeRecoveryAuthBlockState> {
  ::cryptohome::CryptohomeRecoveryAuthBlockState operator()(
      const ::cryptohome::_serialized_::CryptohomeRecoveryAuthBlockState*
          object) const {
    if (object == nullptr) {
      return ::cryptohome::CryptohomeRecoveryAuthBlockState();
    }
    return ::cryptohome::CryptohomeRecoveryAuthBlockState{
        .hsm_payload =
            FromFlatBuffer<brillo::SecureBlob>()(object->hsm_payload()),
        .salt = FromFlatBuffer<brillo::SecureBlob>()(object->salt()),
        .encrypted_destination_share = FromFlatBuffer<brillo::SecureBlob>()(
            object->encrypted_destination_share()),
        .channel_pub_key =
            FromFlatBuffer<brillo::SecureBlob>()(object->channel_pub_key()),
        .encrypted_channel_priv_key = FromFlatBuffer<brillo::SecureBlob>()(
            object->encrypted_channel_priv_key()),
        .encrypted_rsa_priv_key = FromFlatBuffer<brillo::SecureBlob>()(
            object->encrypted_rsa_priv_key()),
    };
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct ToFlatBuffer<::cryptohome::TpmEccAuthBlockState> {
  using ResultType =
      flatbuffers::Offset<::cryptohome::_serialized_::TpmEccAuthBlockState>;

  ResultType operator()(
      flatbuffers::FlatBufferBuilder* builder,
      const ::cryptohome::TpmEccAuthBlockState& object) const {
    auto salt =
        ToFlatBuffer<std::optional<brillo::SecureBlob>>()(builder, object.salt);
    auto vkk_iv = ToFlatBuffer<std::optional<brillo::SecureBlob>>()(
        builder, object.vkk_iv);
    auto auth_value_rounds = ToFlatBuffer<std::optional<uint32_t>>()(
        builder, object.auth_value_rounds);
    auto sealed_hvkkm = ToFlatBuffer<std::optional<brillo::SecureBlob>>()(
        builder, object.sealed_hvkkm);
    auto extended_sealed_hvkkm =
        ToFlatBuffer<std::optional<brillo::SecureBlob>>()(
            builder, object.extended_sealed_hvkkm);
    auto tpm_public_key_hash =
        ToFlatBuffer<std::optional<brillo::SecureBlob>>()(
            builder, object.tpm_public_key_hash);
    auto wrapped_reset_seed = ToFlatBuffer<std::optional<brillo::SecureBlob>>()(
        builder, object.wrapped_reset_seed);

    return ::cryptohome::_serialized_::CreateTpmEccAuthBlockState(
        *builder, salt, vkk_iv, auth_value_rounds, sealed_hvkkm,
        extended_sealed_hvkkm, tpm_public_key_hash, wrapped_reset_seed);
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct FromFlatBuffer<::cryptohome::TpmEccAuthBlockState> {
  ::cryptohome::TpmEccAuthBlockState operator()(
      const ::cryptohome::_serialized_::TpmEccAuthBlockState* object) const {
    if (object == nullptr) {
      return ::cryptohome::TpmEccAuthBlockState();
    }
    return ::cryptohome::TpmEccAuthBlockState{
        .salt =
            FromFlatBuffer<std::optional<brillo::SecureBlob>>()(object->salt()),
        .vkk_iv = FromFlatBuffer<std::optional<brillo::SecureBlob>>()(
            object->vkk_iv()),
        .auth_value_rounds = FromFlatBuffer<std::optional<uint32_t>>()(
            object->auth_value_rounds()),
        .sealed_hvkkm = FromFlatBuffer<std::optional<brillo::SecureBlob>>()(
            object->sealed_hvkkm()),
        .extended_sealed_hvkkm =
            FromFlatBuffer<std::optional<brillo::SecureBlob>>()(
                object->extended_sealed_hvkkm()),
        .tpm_public_key_hash =
            FromFlatBuffer<std::optional<brillo::SecureBlob>>()(
                object->tpm_public_key_hash()),
        .wrapped_reset_seed =
            FromFlatBuffer<std::optional<brillo::SecureBlob>>()(
                object->wrapped_reset_seed()),
    };
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct ToFlatBuffer<::cryptohome::ScryptAuthBlockState> {
  using ResultType =
      flatbuffers::Offset<::cryptohome::_serialized_::ScryptAuthBlockState>;

  ResultType operator()(
      flatbuffers::FlatBufferBuilder* builder,
      const ::cryptohome::ScryptAuthBlockState& object) const {
    auto salt =
        ToFlatBuffer<std::optional<brillo::SecureBlob>>()(builder, object.salt);
    auto work_factor =
        ToFlatBuffer<std::optional<int32_t>>()(builder, object.work_factor);
    auto block_size =
        ToFlatBuffer<std::optional<uint32_t>>()(builder, object.block_size);
    auto parallel_factor = ToFlatBuffer<std::optional<uint32_t>>()(
        builder, object.parallel_factor);

    return ::cryptohome::_serialized_::CreateScryptAuthBlockState(
        *builder, salt, work_factor, block_size, parallel_factor);
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct FromFlatBuffer<::cryptohome::ScryptAuthBlockState> {
  ::cryptohome::ScryptAuthBlockState operator()(
      const ::cryptohome::_serialized_::ScryptAuthBlockState* object) const {
    if (object == nullptr) {
      return ::cryptohome::ScryptAuthBlockState();
    }
    return ::cryptohome::ScryptAuthBlockState{
        .salt =
            FromFlatBuffer<std::optional<brillo::SecureBlob>>()(object->salt()),
        .work_factor =
            FromFlatBuffer<std::optional<int32_t>>()(object->work_factor()),
        .block_size =
            FromFlatBuffer<std::optional<uint32_t>>()(object->block_size()),
        .parallel_factor = FromFlatBuffer<std::optional<uint32_t>>()(
            object->parallel_factor()),
    };
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct ToFlatBuffer<::cryptohome::AuthBlockStateUnion, IsUnionEnum> {
  using ResultType = ::cryptohome::_serialized_::AuthBlockStateUnion;

  ResultType operator()(flatbuffers::FlatBufferBuilder* builder,
                        const ::cryptohome::AuthBlockStateUnion& object) const {
    return std::visit(
        [](const auto& arg) -> ::cryptohome::_serialized_::AuthBlockStateUnion {
          using T = std::decay_t<decltype(arg)>;
          if constexpr (std::is_same_v<T, std::monostate>)
            return ::cryptohome::_serialized_::AuthBlockStateUnion::NONE;
          else if constexpr (std::is_same_v<
                                 T, ::cryptohome::TpmBoundToPcrAuthBlockState>)
            return ::cryptohome::_serialized_::AuthBlockStateUnion::
                TpmBoundToPcrAuthBlockState;
          else if constexpr (std::is_same_v<
                                 T,
                                 ::cryptohome::TpmNotBoundToPcrAuthBlockState>)
            return ::cryptohome::_serialized_::AuthBlockStateUnion::
                TpmNotBoundToPcrAuthBlockState;
          else if constexpr (std::is_same_v<
                                 T, ::cryptohome::PinWeaverAuthBlockState>)
            return ::cryptohome::_serialized_::AuthBlockStateUnion::
                PinWeaverAuthBlockState;
          else if constexpr (std::is_same_v<
                                 T,
                                 ::cryptohome::LibScryptCompatAuthBlockState>)
            return ::cryptohome::_serialized_::AuthBlockStateUnion::
                LibScryptCompatAuthBlockState;
          else if constexpr (std::is_same_v<
                                 T, ::cryptohome::
                                        ChallengeCredentialAuthBlockState>)
            return ::cryptohome::_serialized_::AuthBlockStateUnion::
                ChallengeCredentialAuthBlockState;
          else if constexpr (std::is_same_v<
                                 T, ::cryptohome::
                                        DoubleWrappedCompatAuthBlockState>)
            return ::cryptohome::_serialized_::AuthBlockStateUnion::
                DoubleWrappedCompatAuthBlockState;
          else if constexpr (
              std::is_same_v<T, ::cryptohome::CryptohomeRecoveryAuthBlockState>)
            return ::cryptohome::_serialized_::AuthBlockStateUnion::
                CryptohomeRecoveryAuthBlockState;
          else if constexpr (std::is_same_v<T,
                                            ::cryptohome::TpmEccAuthBlockState>)
            return ::cryptohome::_serialized_::AuthBlockStateUnion::
                TpmEccAuthBlockState;
          else if constexpr (std::is_same_v<T,
                                            ::cryptohome::ScryptAuthBlockState>)
            return ::cryptohome::_serialized_::AuthBlockStateUnion::
                ScryptAuthBlockState;
        },
        object);
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct FromFlatBuffer<::cryptohome::AuthBlockStateUnion> {
  ::cryptohome::AuthBlockStateUnion operator()(
      const void* object,
      ::cryptohome::_serialized_::AuthBlockStateUnion type) const {
    if (object == nullptr) {
      return std::monostate();
    }
    switch (type) {
      case ::cryptohome::_serialized_::AuthBlockStateUnion::NONE: {
        return std::monostate();
      }
      case ::cryptohome::_serialized_::AuthBlockStateUnion::
          TpmBoundToPcrAuthBlockState: {
        return FromFlatBuffer<::cryptohome::TpmBoundToPcrAuthBlockState>()(
            static_cast<
                const ::cryptohome::_serialized_::TpmBoundToPcrAuthBlockState*>(
                object));
      }
      case ::cryptohome::_serialized_::AuthBlockStateUnion::
          TpmNotBoundToPcrAuthBlockState: {
        return FromFlatBuffer<::cryptohome::TpmNotBoundToPcrAuthBlockState>()(
            static_cast<const ::cryptohome::_serialized_::
                            TpmNotBoundToPcrAuthBlockState*>(object));
      }
      case ::cryptohome::_serialized_::AuthBlockStateUnion::
          PinWeaverAuthBlockState: {
        return FromFlatBuffer<::cryptohome::PinWeaverAuthBlockState>()(
            static_cast<
                const ::cryptohome::_serialized_::PinWeaverAuthBlockState*>(
                object));
      }
      case ::cryptohome::_serialized_::AuthBlockStateUnion::
          LibScryptCompatAuthBlockState: {
        return FromFlatBuffer<::cryptohome::LibScryptCompatAuthBlockState>()(
            static_cast<const ::cryptohome::_serialized_::
                            LibScryptCompatAuthBlockState*>(object));
      }
      case ::cryptohome::_serialized_::AuthBlockStateUnion::
          ChallengeCredentialAuthBlockState: {
        return FromFlatBuffer<
            ::cryptohome::ChallengeCredentialAuthBlockState>()(
            static_cast<const ::cryptohome::_serialized_::
                            ChallengeCredentialAuthBlockState*>(object));
      }
      case ::cryptohome::_serialized_::AuthBlockStateUnion::
          DoubleWrappedCompatAuthBlockState: {
        return FromFlatBuffer<
            ::cryptohome::DoubleWrappedCompatAuthBlockState>()(
            static_cast<const ::cryptohome::_serialized_::
                            DoubleWrappedCompatAuthBlockState*>(object));
      }
      case ::cryptohome::_serialized_::AuthBlockStateUnion::
          CryptohomeRecoveryAuthBlockState: {
        return FromFlatBuffer<::cryptohome::CryptohomeRecoveryAuthBlockState>()(
            static_cast<const ::cryptohome::_serialized_::
                            CryptohomeRecoveryAuthBlockState*>(object));
      }
      case ::cryptohome::_serialized_::AuthBlockStateUnion::
          TpmEccAuthBlockState: {
        return FromFlatBuffer<::cryptohome::TpmEccAuthBlockState>()(
            static_cast<
                const ::cryptohome::_serialized_::TpmEccAuthBlockState*>(
                object));
      }
      case ::cryptohome::_serialized_::AuthBlockStateUnion::
          ScryptAuthBlockState: {
        return FromFlatBuffer<::cryptohome::ScryptAuthBlockState>()(
            static_cast<
                const ::cryptohome::_serialized_::ScryptAuthBlockState*>(
                object));
      }
    }
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct ToFlatBuffer<::cryptohome::RevocationState> {
  using ResultType =
      flatbuffers::Offset<::cryptohome::_serialized_::RevocationState>;

  ResultType operator()(flatbuffers::FlatBufferBuilder* builder,
                        const ::cryptohome::RevocationState& object) const {
    auto le_label =
        ToFlatBuffer<std::optional<uint64_t>>()(builder, object.le_label);

    return ::cryptohome::_serialized_::CreateRevocationState(*builder,
                                                             le_label);
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct FromFlatBuffer<::cryptohome::RevocationState> {
  ::cryptohome::RevocationState operator()(
      const ::cryptohome::_serialized_::RevocationState* object) const {
    if (object == nullptr) {
      return ::cryptohome::RevocationState();
    }
    return ::cryptohome::RevocationState{
        .le_label =
            FromFlatBuffer<std::optional<uint64_t>>()(object->le_label()),
    };
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct ToFlatBuffer<::cryptohome::AuthBlockState> {
  using ResultType =
      flatbuffers::Offset<::cryptohome::_serialized_::AuthBlockState>;

  ResultType operator()(flatbuffers::FlatBufferBuilder* builder,
                        const ::cryptohome::AuthBlockState& object) const {
    auto state_type =
        ToFlatBuffer<::cryptohome::AuthBlockStateUnion, IsUnionEnum>()(
            builder, object.state);
    auto state = ToFlatBuffer<::cryptohome::AuthBlockStateUnion>()(
        builder, object.state);
    auto revocation_state =
        ToFlatBuffer<std::optional<::cryptohome::RevocationState>>()(
            builder, object.revocation_state);

    return ::cryptohome::_serialized_::CreateAuthBlockState(
        *builder, state_type, state, revocation_state);
  }
};

}  // namespace cryptohome

namespace cryptohome {

template <>
struct FromFlatBuffer<::cryptohome::AuthBlockState> {
  ::cryptohome::AuthBlockState operator()(
      const ::cryptohome::_serialized_::AuthBlockState* object) const {
    if (object == nullptr) {
      return ::cryptohome::AuthBlockState();
    }
    return ::cryptohome::AuthBlockState{
        .state = FromFlatBuffer<::cryptohome::AuthBlockStateUnion>()(
            object->state(), object->state_type()),
        .revocation_state =
            FromFlatBuffer<std::optional<::cryptohome::RevocationState>>()(
                object->revocation_state()),
    };
  }
};

}  // namespace cryptohome

namespace cryptohome {

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

}  // namespace cryptohome

namespace cryptohome {

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

}  // namespace cryptohome

#endif  // CRYPTOHOME_FLATBUFFER_SCHEMAS_AUTH_BLOCK_STATE_FLATBUFFER_H_
