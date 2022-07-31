// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// THIS CODE IS GENERATED.
// Generated with command:
// gen/python/flatbuffer_cpp_binding_generator.py
// --output_dir=/build/arm-generic/var/cache/portage/chromeos-base/cryptohome-dev-utils/out/Default/gen/include/cryptohome/flatbuffer_schemas
// --guard_prefix=CRYPTOHOME_FLATBUFFER_SCHEMAS_AUTH_BLOCK_STATE
// --header_include_paths cryptohome/flatbuffer_schemas/structures.h
// --flatbuffer_header_include_paths cryptohome/auth_block_state_generated.h
// --flatbuffer_header_include_paths
// cryptohome/flatbuffer_schemas/auth_block_state.h
// --flatbuffer_header_include_paths
// cryptohome/flatbuffer_schemas/structures_flatbuffer.h
// --flatbuffer_header_include_paths
// libhwsec-foundation/flatbuffers/basic_objects.h --impl_include_paths
// cryptohome/flatbuffer_schemas/auth_block_state.h --impl_include_paths
// cryptohome/flatbuffer_schemas/auth_block_state_flatbuffer.h
// --impl_include_paths cryptohome/flatbuffer_schemas/structures_flatbuffer.h
// --impl_include_paths
// libhwsec-foundation/flatbuffers/flatbuffer_secure_allocator_bridge.h
// --test_utils_header_include_path
// cryptohome/flatbuffer_schemas/auth_block_state.h
// --test_utils_header_include_path
// cryptohome/flatbuffer_schemas/structures_test_utils.h
// /build/arm-generic/var/cache/portage/chromeos-base/cryptohome-dev-utils/out/Default/gen/bfbs/auth_block_state.bfbs
// --filter_by_namespace cryptohome

#ifndef CRYPTOHOME_FLATBUFFER_SCHEMAS_AUTH_BLOCK_STATE_AUTH_BLOCK_STATE_H_
#define CRYPTOHOME_FLATBUFFER_SCHEMAS_AUTH_BLOCK_STATE_AUTH_BLOCK_STATE_H_

#include <stdint.h>
#include <optional>
#include <string>
#include <variant>
#include <vector>

#include <brillo/secure_blob.h>

#include "cryptohome/flatbuffer_schemas/structures.h"

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

#endif  // CRYPTOHOME_FLATBUFFER_SCHEMAS_AUTH_BLOCK_STATE_AUTH_BLOCK_STATE_H_
