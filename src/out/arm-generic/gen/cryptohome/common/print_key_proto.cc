// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// THIS CODE IS GENERATED.
// Generated with command:
// ../../../../../../../tmp/portage/chromeos-base/cryptohome-9999/work/cryptohome-9999/platform2/libhwsec-foundation/utility/proto_print.py
// --package-dir cryptohome --subdir common --proto-include
// cryptohome/proto_bindings --output-dir
// /build/arm-generic/var/cache/portage/chromeos-base/cryptohome/out/Default/gen/cryptohome/common
// /build/arm-generic/usr/include/chromeos/dbus/cryptohome/auth_factor.proto
// /build/arm-generic/usr/include/chromeos/dbus/cryptohome/fido.proto
// /build/arm-generic/usr/include/chromeos/dbus/cryptohome/key.proto
// /build/arm-generic/usr/include/chromeos/dbus/cryptohome/rpc.proto
// /build/arm-generic/usr/include/chromeos/dbus/cryptohome/UserDataAuth.proto

#include "cryptohome/common/print_key_proto.h"

#include <inttypes.h>

#include <string>

#include <base/strings/string_number_conversions.h>
#include <base/strings/stringprintf.h>

namespace cryptohome {

std::string GetProtoDebugString(ChallengeSignatureAlgorithm value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(ChallengeSignatureAlgorithm value,
                                          int indent_size) {
  if (value == CHALLENGE_RSASSA_PKCS1_V1_5_SHA1) {
    return "CHALLENGE_RSASSA_PKCS1_V1_5_SHA1";
  }
  if (value == CHALLENGE_RSASSA_PKCS1_V1_5_SHA256) {
    return "CHALLENGE_RSASSA_PKCS1_V1_5_SHA256";
  }
  if (value == CHALLENGE_RSASSA_PKCS1_V1_5_SHA384) {
    return "CHALLENGE_RSASSA_PKCS1_V1_5_SHA384";
  }
  if (value == CHALLENGE_RSASSA_PKCS1_V1_5_SHA512) {
    return "CHALLENGE_RSASSA_PKCS1_V1_5_SHA512";
  }
  return "<unknown>";
}

std::string GetProtoDebugString(KeyData_KeyType value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(KeyData_KeyType value,
                                          int indent_size) {
  if (value == KeyData_KeyType_KEY_TYPE_PASSWORD) {
    return "KeyData_KeyType_KEY_TYPE_PASSWORD";
  }
  if (value == KeyData_KeyType_KEY_TYPE_CHALLENGE_RESPONSE) {
    return "KeyData_KeyType_KEY_TYPE_CHALLENGE_RESPONSE";
  }
  if (value == KeyData_KeyType_KEY_TYPE_FINGERPRINT) {
    return "KeyData_KeyType_KEY_TYPE_FINGERPRINT";
  }
  if (value == KeyData_KeyType_KEY_TYPE_KIOSK) {
    return "KeyData_KeyType_KEY_TYPE_KIOSK";
  }
  return "<unknown>";
}

std::string GetProtoDebugString(const KeyPrivileges& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const KeyPrivileges& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_add()) {
    output += indent + "  add: ";
    base::StringAppendF(&output, "%s", value.add() ? "true" : "false");
    output += "\n";
  }
  if (value.has_remove()) {
    output += indent + "  remove: ";
    base::StringAppendF(&output, "%s", value.remove() ? "true" : "false");
    output += "\n";
  }
  if (value.has_update()) {
    output += indent + "  update: ";
    base::StringAppendF(&output, "%s", value.update() ? "true" : "false");
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const KeyProviderData::Entry& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const KeyProviderData::Entry& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_name()) {
    output += indent + "  name: ";
    base::StringAppendF(&output, "%s", value.name().c_str());
    output += "\n";
  }
  if (value.has_number()) {
    output += indent + "  number: ";
    base::StringAppendF(&output, "%" PRId64, value.number());
    output += "\n";
  }
  if (value.has_bytes()) {
    output += indent + "  bytes: ";
    base::StringAppendF(
        &output, "%s",
        base::HexEncode(value.bytes().data(), value.bytes().size()).c_str());
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const KeyProviderData& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const KeyProviderData& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  output += indent + "  entry: {";
  for (int i = 0; i < value.entry_size(); ++i) {
    if (i > 0) {
      base::StringAppendF(&output, ", ");
    }
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.entry(i), indent_size + 2).c_str());
  }
  output += "}\n";
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const ChallengePublicKeyInfo& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const ChallengePublicKeyInfo& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_public_key_spki_der()) {
    output += indent + "  public_key_spki_der: ";
    base::StringAppendF(&output, "%s",
                        base::HexEncode(value.public_key_spki_der().data(),
                                        value.public_key_spki_der().size())
                            .c_str());
    output += "\n";
  }
  output += indent + "  signature_algorithm: {";
  for (int i = 0; i < value.signature_algorithm_size(); ++i) {
    if (i > 0) {
      base::StringAppendF(&output, ", ");
    }
    base::StringAppendF(&output, "%s",
                        GetProtoDebugStringWithIndent(
                            value.signature_algorithm(i), indent_size + 2)
                            .c_str());
  }
  output += "}\n";
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const KeyPolicy& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const KeyPolicy& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_low_entropy_credential()) {
    output += indent + "  low_entropy_credential: ";
    base::StringAppendF(&output, "%s",
                        value.low_entropy_credential() ? "true" : "false");
    output += "\n";
  }
  if (value.has_auth_locked()) {
    output += indent + "  auth_locked: ";
    base::StringAppendF(&output, "%s", value.auth_locked() ? "true" : "false");
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const KeyData& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const KeyData& value,
                                          int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_type()) {
    output += indent + "  type: ";
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.type(), indent_size + 2).c_str());
    output += "\n";
  }
  if (value.has_label()) {
    output += indent + "  label: ";
    base::StringAppendF(&output, "%s", value.label().c_str());
    output += "\n";
  }
  if (value.has_privileges()) {
    output += indent + "  privileges: ";
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.privileges(), indent_size + 2)
            .c_str());
    output += "\n";
  }
  if (value.has_revision()) {
    output += indent + "  revision: ";
    base::StringAppendF(&output, "%" PRId64, value.revision());
    output += "\n";
  }
  if (value.has_provider_data()) {
    output += indent + "  provider_data: ";
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.provider_data(), indent_size + 2)
            .c_str());
    output += "\n";
  }
  output += indent + "  challenge_response_key: {";
  for (int i = 0; i < value.challenge_response_key_size(); ++i) {
    if (i > 0) {
      base::StringAppendF(&output, ", ");
    }
    base::StringAppendF(&output, "%s",
                        GetProtoDebugStringWithIndent(
                            value.challenge_response_key(i), indent_size + 2)
                            .c_str());
  }
  output += "}\n";
  if (value.has_policy()) {
    output += indent + "  policy: ";
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.policy(), indent_size + 2).c_str());
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

std::string GetProtoDebugString(const Key& value) {
  return GetProtoDebugStringWithIndent(value, 0);
}

std::string GetProtoDebugStringWithIndent(const Key& value, int indent_size) {
  std::string indent(indent_size, ' ');
  std::string output =
      base::StringPrintf("[%s] {\n", value.GetTypeName().c_str());

  if (value.has_data()) {
    output += indent + "  data: ";
    base::StringAppendF(
        &output, "%s",
        GetProtoDebugStringWithIndent(value.data(), indent_size + 2).c_str());
    output += "\n";
  }
  if (value.has_secret()) {
    output += indent + "  secret: ";
    base::StringAppendF(
        &output, "%s",
        base::HexEncode(value.secret().data(), value.secret().size()).c_str());
    output += "\n";
  }
  output += indent + "}\n";
  return output;
}

}  // namespace cryptohome
