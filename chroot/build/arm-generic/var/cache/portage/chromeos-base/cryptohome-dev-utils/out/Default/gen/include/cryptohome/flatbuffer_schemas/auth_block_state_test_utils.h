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

#ifndef CRYPTOHOME_FLATBUFFER_SCHEMAS_AUTH_BLOCK_STATE_TEST_UTILS_H_
#define CRYPTOHOME_FLATBUFFER_SCHEMAS_AUTH_BLOCK_STATE_TEST_UTILS_H_

#include "cryptohome/flatbuffer_schemas/auth_block_state.h"

namespace cryptohome {

inline bool operator==(const TpmBoundToPcrAuthBlockState& lhs,
                       const TpmBoundToPcrAuthBlockState& rhs) {
  return true && lhs.scrypt_derived == rhs.scrypt_derived &&
         lhs.salt == rhs.salt && lhs.tpm_key == rhs.tpm_key &&
         lhs.extended_tpm_key == rhs.extended_tpm_key &&
         lhs.tpm_public_key_hash == rhs.tpm_public_key_hash;
}
inline bool operator!=(const TpmBoundToPcrAuthBlockState& lhs,
                       const TpmBoundToPcrAuthBlockState& rhs) {
  return !(lhs == rhs);
}

}  // namespace cryptohome

namespace cryptohome {

inline bool operator==(const TpmNotBoundToPcrAuthBlockState& lhs,
                       const TpmNotBoundToPcrAuthBlockState& rhs) {
  return true && lhs.scrypt_derived == rhs.scrypt_derived &&
         lhs.salt == rhs.salt && lhs.password_rounds == rhs.password_rounds &&
         lhs.tpm_key == rhs.tpm_key &&
         lhs.tpm_public_key_hash == rhs.tpm_public_key_hash;
}
inline bool operator!=(const TpmNotBoundToPcrAuthBlockState& lhs,
                       const TpmNotBoundToPcrAuthBlockState& rhs) {
  return !(lhs == rhs);
}

}  // namespace cryptohome

namespace cryptohome {

inline bool operator==(const PinWeaverAuthBlockState& lhs,
                       const PinWeaverAuthBlockState& rhs) {
  return true && lhs.le_label == rhs.le_label && lhs.salt == rhs.salt &&
         lhs.chaps_iv == rhs.chaps_iv && lhs.fek_iv == rhs.fek_iv &&
         lhs.reset_salt == rhs.reset_salt;
}
inline bool operator!=(const PinWeaverAuthBlockState& lhs,
                       const PinWeaverAuthBlockState& rhs) {
  return !(lhs == rhs);
}

}  // namespace cryptohome

namespace cryptohome {

inline bool operator==(const LibScryptCompatAuthBlockState& lhs,
                       const LibScryptCompatAuthBlockState& rhs) {
  return true && lhs.wrapped_keyset == rhs.wrapped_keyset &&
         lhs.wrapped_chaps_key == rhs.wrapped_chaps_key &&
         lhs.wrapped_reset_seed == rhs.wrapped_reset_seed &&
         lhs.salt == rhs.salt;
}
inline bool operator!=(const LibScryptCompatAuthBlockState& lhs,
                       const LibScryptCompatAuthBlockState& rhs) {
  return !(lhs == rhs);
}

}  // namespace cryptohome

namespace cryptohome::structure {

inline bool operator==(const Tpm2PolicySignedData& lhs,
                       const Tpm2PolicySignedData& rhs) {
  return true && lhs.public_key_spki_der == rhs.public_key_spki_der &&
         lhs.srk_wrapped_secret == rhs.srk_wrapped_secret &&
         lhs.scheme == rhs.scheme && lhs.hash_alg == rhs.hash_alg &&
         lhs.default_pcr_policy_digest == rhs.default_pcr_policy_digest &&
         lhs.extended_pcr_policy_digest == rhs.extended_pcr_policy_digest;
}
inline bool operator!=(const Tpm2PolicySignedData& lhs,
                       const Tpm2PolicySignedData& rhs) {
  return !(lhs == rhs);
}

}  // namespace cryptohome::structure

namespace cryptohome::structure {

inline bool operator==(const Tpm12CertifiedMigratableKeyData& lhs,
                       const Tpm12CertifiedMigratableKeyData& rhs) {
  return true && lhs.public_key_spki_der == rhs.public_key_spki_der &&
         lhs.srk_wrapped_cmk == rhs.srk_wrapped_cmk &&
         lhs.cmk_pubkey == rhs.cmk_pubkey &&
         lhs.cmk_wrapped_auth_data == rhs.cmk_wrapped_auth_data &&
         lhs.default_pcr_bound_secret == rhs.default_pcr_bound_secret &&
         lhs.extended_pcr_bound_secret == rhs.extended_pcr_bound_secret;
}
inline bool operator!=(const Tpm12CertifiedMigratableKeyData& lhs,
                       const Tpm12CertifiedMigratableKeyData& rhs) {
  return !(lhs == rhs);
}

}  // namespace cryptohome::structure

namespace cryptohome::structure {

inline bool operator==(const SignatureChallengeInfo& lhs,
                       const SignatureChallengeInfo& rhs) {
  return true && lhs.public_key_spki_der == rhs.public_key_spki_der &&
         lhs.sealed_secret == rhs.sealed_secret && lhs.salt == rhs.salt &&
         lhs.salt_signature_algorithm == rhs.salt_signature_algorithm;
}
inline bool operator!=(const SignatureChallengeInfo& lhs,
                       const SignatureChallengeInfo& rhs) {
  return !(lhs == rhs);
}

}  // namespace cryptohome::structure

namespace cryptohome {

inline bool operator==(const ChallengeCredentialAuthBlockState& lhs,
                       const ChallengeCredentialAuthBlockState& rhs) {
  return true && lhs.scrypt_state == rhs.scrypt_state &&
         lhs.keyset_challenge_info == rhs.keyset_challenge_info;
}
inline bool operator!=(const ChallengeCredentialAuthBlockState& lhs,
                       const ChallengeCredentialAuthBlockState& rhs) {
  return !(lhs == rhs);
}

}  // namespace cryptohome

namespace cryptohome {

inline bool operator==(const DoubleWrappedCompatAuthBlockState& lhs,
                       const DoubleWrappedCompatAuthBlockState& rhs) {
  return true && lhs.scrypt_state == rhs.scrypt_state &&
         lhs.tpm_state == rhs.tpm_state;
}
inline bool operator!=(const DoubleWrappedCompatAuthBlockState& lhs,
                       const DoubleWrappedCompatAuthBlockState& rhs) {
  return !(lhs == rhs);
}

}  // namespace cryptohome

namespace cryptohome {

inline bool operator==(const CryptohomeRecoveryAuthBlockState& lhs,
                       const CryptohomeRecoveryAuthBlockState& rhs) {
  return true && lhs.hsm_payload == rhs.hsm_payload && lhs.salt == rhs.salt &&
         lhs.encrypted_destination_share == rhs.encrypted_destination_share &&
         lhs.channel_pub_key == rhs.channel_pub_key &&
         lhs.encrypted_channel_priv_key == rhs.encrypted_channel_priv_key &&
         lhs.encrypted_rsa_priv_key == rhs.encrypted_rsa_priv_key;
}
inline bool operator!=(const CryptohomeRecoveryAuthBlockState& lhs,
                       const CryptohomeRecoveryAuthBlockState& rhs) {
  return !(lhs == rhs);
}

}  // namespace cryptohome

namespace cryptohome {

inline bool operator==(const TpmEccAuthBlockState& lhs,
                       const TpmEccAuthBlockState& rhs) {
  return true && lhs.salt == rhs.salt && lhs.vkk_iv == rhs.vkk_iv &&
         lhs.auth_value_rounds == rhs.auth_value_rounds &&
         lhs.sealed_hvkkm == rhs.sealed_hvkkm &&
         lhs.extended_sealed_hvkkm == rhs.extended_sealed_hvkkm &&
         lhs.tpm_public_key_hash == rhs.tpm_public_key_hash &&
         lhs.wrapped_reset_seed == rhs.wrapped_reset_seed;
}
inline bool operator!=(const TpmEccAuthBlockState& lhs,
                       const TpmEccAuthBlockState& rhs) {
  return !(lhs == rhs);
}

}  // namespace cryptohome

namespace cryptohome {

inline bool operator==(const ScryptAuthBlockState& lhs,
                       const ScryptAuthBlockState& rhs) {
  return true && lhs.salt == rhs.salt && lhs.work_factor == rhs.work_factor &&
         lhs.block_size == rhs.block_size &&
         lhs.parallel_factor == rhs.parallel_factor;
}
inline bool operator!=(const ScryptAuthBlockState& lhs,
                       const ScryptAuthBlockState& rhs) {
  return !(lhs == rhs);
}

}  // namespace cryptohome

namespace cryptohome {

inline bool operator==(const RevocationState& lhs, const RevocationState& rhs) {
  return true && lhs.le_label == rhs.le_label;
}
inline bool operator!=(const RevocationState& lhs, const RevocationState& rhs) {
  return !(lhs == rhs);
}

}  // namespace cryptohome

namespace cryptohome {

inline bool operator==(const AuthBlockState& lhs, const AuthBlockState& rhs) {
  return true && lhs.state == rhs.state &&
         lhs.revocation_state == rhs.revocation_state;
}
inline bool operator!=(const AuthBlockState& lhs, const AuthBlockState& rhs) {
  return !(lhs == rhs);
}

}  // namespace cryptohome

namespace cryptohome::structure {

inline bool operator==(const ChallengePublicKeyInfo& lhs,
                       const ChallengePublicKeyInfo& rhs) {
  return true && lhs.public_key_spki_der == rhs.public_key_spki_der &&
         lhs.signature_algorithm == rhs.signature_algorithm;
}
inline bool operator!=(const ChallengePublicKeyInfo& lhs,
                       const ChallengePublicKeyInfo& rhs) {
  return !(lhs == rhs);
}

}  // namespace cryptohome::structure

#endif  // CRYPTOHOME_FLATBUFFER_SCHEMAS_AUTH_BLOCK_STATE_TEST_UTILS_H_
