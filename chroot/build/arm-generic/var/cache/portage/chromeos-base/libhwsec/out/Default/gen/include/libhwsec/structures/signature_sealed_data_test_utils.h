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

#ifndef LIBLWSEC_STRUCTURES_SIGNATURE_SEALED_DATA_SIGNATURE_SEALED_DATA_TEST_UTILS_H_
#define LIBLWSEC_STRUCTURES_SIGNATURE_SEALED_DATA_SIGNATURE_SEALED_DATA_TEST_UTILS_H_

#include "libhwsec/structures/signature_sealed_data.h"

namespace hwsec {

inline bool operator==(const Tpm2PolicyDigest& lhs,
                       const Tpm2PolicyDigest& rhs) {
  return true && lhs.digest == rhs.digest;
}
inline bool operator!=(const Tpm2PolicyDigest& lhs,
                       const Tpm2PolicyDigest& rhs) {
  return !(lhs == rhs);
}

}  // namespace hwsec

namespace hwsec {

inline bool operator==(const Tpm2PolicySignedData& lhs,
                       const Tpm2PolicySignedData& rhs) {
  return true && lhs.public_key_spki_der == rhs.public_key_spki_der &&
         lhs.srk_wrapped_secret == rhs.srk_wrapped_secret &&
         lhs.scheme == rhs.scheme && lhs.hash_alg == rhs.hash_alg &&
         lhs.pcr_policy_digests == rhs.pcr_policy_digests;
}
inline bool operator!=(const Tpm2PolicySignedData& lhs,
                       const Tpm2PolicySignedData& rhs) {
  return !(lhs == rhs);
}

}  // namespace hwsec

namespace hwsec {

inline bool operator==(const Tpm12PcrValue& lhs, const Tpm12PcrValue& rhs) {
  return true && lhs.pcr_index == rhs.pcr_index &&
         lhs.pcr_value == rhs.pcr_value;
}
inline bool operator!=(const Tpm12PcrValue& lhs, const Tpm12PcrValue& rhs) {
  return !(lhs == rhs);
}

}  // namespace hwsec

namespace hwsec {

inline bool operator==(const Tpm12PcrBoundItem& lhs,
                       const Tpm12PcrBoundItem& rhs) {
  return true && lhs.pcr_values == rhs.pcr_values &&
         lhs.bound_secret == rhs.bound_secret;
}
inline bool operator!=(const Tpm12PcrBoundItem& lhs,
                       const Tpm12PcrBoundItem& rhs) {
  return !(lhs == rhs);
}

}  // namespace hwsec

namespace hwsec {

inline bool operator==(const Tpm12CertifiedMigratableKeyData& lhs,
                       const Tpm12CertifiedMigratableKeyData& rhs) {
  return true && lhs.public_key_spki_der == rhs.public_key_spki_der &&
         lhs.srk_wrapped_cmk == rhs.srk_wrapped_cmk &&
         lhs.cmk_pubkey == rhs.cmk_pubkey &&
         lhs.cmk_wrapped_auth_data == rhs.cmk_wrapped_auth_data &&
         lhs.pcr_bound_items == rhs.pcr_bound_items;
}
inline bool operator!=(const Tpm12CertifiedMigratableKeyData& lhs,
                       const Tpm12CertifiedMigratableKeyData& rhs) {
  return !(lhs == rhs);
}

}  // namespace hwsec

#endif  // LIBLWSEC_STRUCTURES_SIGNATURE_SEALED_DATA_SIGNATURE_SEALED_DATA_TEST_UTILS_H_
