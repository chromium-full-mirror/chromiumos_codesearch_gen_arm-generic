/*
 * Copyright 2021 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#include "common/embed_file_toc_test_files_toc.h"

namespace cros {

const char embed_file_toc_cc[] = R"cc_embed_data(/*
 * Copyright 2021 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#include "common/embed_file_toc.h"

#include <utility>

namespace cros {

EmbeddedFileEntry::EmbeddedFileEntry(const char* content, size_t length)
    : content_(content), length_(length) {}

EmbeddedFileToc::EmbeddedFileToc(std::map<std::string, EmbeddedFileEntry> toc)
    : toc_(std::move(toc)) {}

base::span<const char> EmbeddedFileToc::Get(const std::string& key) const {
  auto iter = toc_.find(key);
  if (iter == toc_.end()) {
    return {};
  }
  return iter->second.content();
}

}  // namespace cros
)cc_embed_data";

const char embed_file_toc_h[] = R"cc_embed_data(/*
 * Copyright 2021 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef CAMERA_COMMON_EMBED_FILE_TOC_H_
#define CAMERA_COMMON_EMBED_FILE_TOC_H_

#include <map>
#include <string>

#include <base/containers/span.h>

#include "cros-camera/export.h"

namespace cros {

// A class the stores the entry metadata for a embedded file.
class CROS_CAMERA_EXPORT EmbeddedFileEntry {
 public:
  EmbeddedFileEntry(const char* content, size_t length);
  ~EmbeddedFileEntry() = default;

  base::span<const char> content() const { return {content_, length_}; }

 private:
  const char* content_;
  const size_t length_;
};

// A class that provides a table of contents for a set of embedded files.
class CROS_CAMERA_EXPORT EmbeddedFileToc {
 public:
  explicit EmbeddedFileToc(std::map<std::string, EmbeddedFileEntry> toc);
  ~EmbeddedFileToc() = default;

  base::span<const char> Get(const std::string& key) const;

 private:
  std::map<std::string, EmbeddedFileEntry> toc_;
};

}  // namespace cros

#endif  // CAMERA_COMMON_EMBED_FILE_TOC_H_
)cc_embed_data";

cros::EmbeddedFileToc GetEmbedFileTocTestFilesToc() {
  std::map<std::string, cros::EmbeddedFileEntry> toc;

  toc.insert(
      {"embed_file_toc.cc",
       cros::EmbeddedFileEntry(embed_file_toc_cc, sizeof(embed_file_toc_cc))});
  toc.insert(
      {"embed_file_toc.h",
       cros::EmbeddedFileEntry(embed_file_toc_h, sizeof(embed_file_toc_h))});
  return cros::EmbeddedFileToc(std::move(toc));
}

} // namespace cros
