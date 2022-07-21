// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// THIS CODE IS GENERATED.
// Generated with command:
// gen/python/flatbuffer_cpp_binding_generator.py
// --output_dir=/build/arm-generic/var/cache/portage/chromeos-base/cryptohome-dev-utils/out/Default/gen/include/cryptohome/flatbuffer_schemas
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
// /build/arm-generic/var/cache/portage/chromeos-base/cryptohome-dev-utils/out/Default/gen/bfbs/auth_block_state.bfbs

#ifndef CRYPTOHOME_FLATBUFFER_SCHEMAS_AUTH_BLOCK_STATE_H_
#define CRYPTOHOME_FLATBUFFER_SCHEMAS_AUTH_BLOCK_STATE_H_

#include <stdint.h>
#include <optional>
#include <string>
#include <variant>
#include <vector>

#include <brillo/secure_blob.h>

namespace cryptohome {

struct TpmBoundToPcrAuthBlockState {
  std::optional<bool> scrypt_derived;
  std::optional<brillo::SecureBlob> salt;
  std::optional<brillo::SecureBlob> tpm_key;
  std::optional<brillo::SecureBlob> extended_tpm_key;
  std::optional<brillo::SecureBlob> tpm_public_key_hash;
};

}  // namespace cryptohome

namespace cryptohome {

struct TpmNotBoundToPcrAuthBlockState {
  std::optional<bool> scrypt_derived;
  std::optional<brillo::SecureBlob> salt;
  std::optional<uint32_t> password_rounds;
  std::optional<brillo::SecureBlob> tpm_key;
  std::optional<brillo::SecureBlob> tpm_public_key_hash;
};

}  // namespace cryptohome

namespace cryptohome {

struct PinWeaverAuthBlockState {
  std::optional<uint64_t> le_label;
  std::optional<brillo::SecureBlob> salt;
  std::optional<brillo::SecureBlob> chaps_iv;
  std::optional<brillo::SecureBlob> fek_iv;
  std::optional<brillo::SecureBlob> reset_salt;
};

}  // namespace cryptohome

namespace cryptohome {

struct LibScryptCompatAuthBlockState {
  std::optional<brillo::SecureBlob> wrapped_keyset;
  std::optional<brillo::SecureBlob> wrapped_chaps_key;
  std::optional<brillo::SecureBlob> wrapped_reset_seed;
  std::optional<brillo::SecureBlob> salt;
};

}  // namespace cryptohome

namespace cryptohome::structure {

enum class ChallengeSignatureAlgorithm : int32_t {
  kRsassaPkcs1V15Sha1 = 1,
  kRsassaPkcs1V15Sha256 = 2,
  kRsassaPkcs1V15Sha384 = 3,
  kRsassaPkcs1V15Sha512 = 4,
};

}  // namespace cryptohome::structure

namespace cryptohome::structure {

struct Tpm2PolicySignedData {
  brillo::Blob public_key_spki_der;
  brillo::Blob srk_wrapped_secret;
  std::optional<int32_t> scheme;
  std::optional<int32_t> hash_alg;
  brillo::Blob default_pcr_policy_digest;
  brillo::Blob extended_pcr_policy_digest;
};

}  // namespace cryptohome::structure

namespace cryptohome::structure {

struct Tpm12CertifiedMigratableKeyData {
  brillo::Blob public_key_spki_der;
  brillo::Blob srk_wrapped_cmk;
  brillo::Blob cmk_pubkey;
  brillo::Blob cmk_wrapped_auth_data;
  brillo::Blob default_pcr_bound_secret;
  brillo::Blob extended_pcr_bound_secret;
};

}  // namespace cryptohome::structure

namespace cryptohome::structure {

using SignatureSealedData =
    std::variant<std::monostate,
                 ::cryptohome::structure::Tpm2PolicySignedData,
                 ::cryptohome::structure::Tpm12CertifiedMigratableKeyData>;

}  // namespace cryptohome::structure

namespace cryptohome::structure {

struct SignatureChallengeInfo {
  std::optional<brillo::Blob> Serialize() const;
  static std::optional<SignatureChallengeInfo> Deserialize(const brillo::Blob&);

  brillo::Blob public_key_spki_der;
  ::cryptohome::structure::SignatureSealedData sealed_secret;
  brillo::Blob salt;
  std::optional<::cryptohome::structure::ChallengeSignatureAlgorithm>
      salt_signature_algorithm;
};

}  // namespace cryptohome::structure

namespace cryptohome {

struct ChallengeCredentialAuthBlockState {
  ::cryptohome::LibScryptCompatAuthBlockState scrypt_state;
  std::optional<::cryptohome::structure::SignatureChallengeInfo>
      keyset_challenge_info;
};

}  // namespace cryptohome

namespace cryptohome {

struct DoubleWrappedCompatAuthBlockState {
  ::cryptohome::LibScryptCompatAuthBlockState scrypt_state;
  ::cryptohome::TpmNotBoundToPcrAuthBlockState tpm_state;
};

}  // namespace cryptohome

namespace cryptohome {

struct CryptohomeRecoveryAuthBlockState {
  brillo::SecureBlob hsm_payload;
  brillo::SecureBlob salt;
  brillo::SecureBlob encrypted_destination_share;
  brillo::SecureBlob channel_pub_key;
  brillo::SecureBlob encrypted_channel_priv_key;
  brillo::SecureBlob encrypted_rsa_priv_key;
};

}  // namespace cryptohome

namespace cryptohome {

struct TpmEccAuthBlockState {
  std::optional<brillo::SecureBlob> salt;
  std::optional<brillo::SecureBlob> vkk_iv;
  std::optional<uint32_t> auth_value_rounds;
  std::optional<brillo::SecureBlob> sealed_hvkkm;
  std::optional<brillo::SecureBlob> extended_sealed_hvkkm;
  std::optional<brillo::SecureBlob> tpm_public_key_hash;
  std::optional<brillo::SecureBlob> wrapped_reset_seed;
};

}  // namespace cryptohome

namespace cryptohome {

struct ScryptAuthBlockState {
  std::optional<brillo::SecureBlob> salt;
  std::optional<int32_t> work_factor;
  std::optional<uint32_t> block_size;
  std::optional<uint32_t> parallel_factor;
};

}  // namespace cryptohome

namespace cryptohome {

using AuthBlockStateUnion =
    std::variant<std::monostate,
                 ::cryptohome::TpmBoundToPcrAuthBlockState,
                 ::cryptohome::TpmNotBoundToPcrAuthBlockState,
                 ::cryptohome::PinWeaverAuthBlockState,
                 ::cryptohome::LibScryptCompatAuthBlockState,
                 ::cryptohome::ChallengeCredentialAuthBlockState,
                 ::cryptohome::DoubleWrappedCompatAuthBlockState,
                 ::cryptohome::CryptohomeRecoveryAuthBlockState,
                 ::cryptohome::TpmEccAuthBlockState,
                 ::cryptohome::ScryptAuthBlockState>;

}  // namespace cryptohome

namespace cryptohome {

struct RevocationState {
  std::optional<uint64_t> le_label;
};

}  // namespace cryptohome

namespace cryptohome {

struct AuthBlockState {
  std::optional<brillo::SecureBlob> Serialize() const;
  static std::optional<AuthBlockState> Deserialize(const brillo::SecureBlob&);

  ::cryptohome::AuthBlockStateUnion state;
  std::optional<::cryptohome::RevocationState> revocation_state;
};

}  // namespace cryptohome

namespace cryptohome::structure {

struct ChallengePublicKeyInfo {
  brillo::Blob public_key_spki_der;
  std::vector<::cryptohome::structure::ChallengeSignatureAlgorithm>
      signature_algorithm;
};

}  // namespace cryptohome::structure

#endif  // CRYPTOHOME_FLATBUFFER_SCHEMAS_AUTH_BLOCK_STATE_H_
