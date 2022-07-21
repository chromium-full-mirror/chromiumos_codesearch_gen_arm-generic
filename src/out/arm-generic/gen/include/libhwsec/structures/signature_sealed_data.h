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

#ifndef LIBLWSEC_STRUCTURES_SIGNATURE_SEALED_DATA_SIGNATURE_SEALED_DATA_H_
#define LIBLWSEC_STRUCTURES_SIGNATURE_SEALED_DATA_SIGNATURE_SEALED_DATA_H_

#include <stdint.h>
#include <optional>
#include <string>
#include <variant>
#include <vector>

#include <brillo/secure_blob.h>

namespace hwsec {

struct Tpm2PolicySignedData {
  brillo::Blob public_key_spki_der;
  brillo::Blob srk_wrapped_secret;
  std::optional<int32_t> scheme;
  std::optional<int32_t> hash_alg;
  brillo::Blob default_pcr_policy_digest;
  brillo::Blob extended_pcr_policy_digest;
};

}  // namespace hwsec

namespace hwsec {

struct Tpm12CertifiedMigratableKeyData {
  brillo::Blob public_key_spki_der;
  brillo::Blob srk_wrapped_cmk;
  brillo::Blob cmk_pubkey;
  brillo::Blob cmk_wrapped_auth_data;
  brillo::Blob default_pcr_bound_secret;
  brillo::Blob extended_pcr_bound_secret;
};

}  // namespace hwsec

namespace hwsec {

using SignatureSealedData =
    std::variant<std::monostate,
                 ::hwsec::Tpm2PolicySignedData,
                 ::hwsec::Tpm12CertifiedMigratableKeyData>;

}  // namespace hwsec

#endif  // LIBLWSEC_STRUCTURES_SIGNATURE_SEALED_DATA_SIGNATURE_SEALED_DATA_H_
