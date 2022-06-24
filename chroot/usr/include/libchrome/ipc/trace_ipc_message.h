// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef IPC_TRACE_IPC_MESSAGE_H_
#define IPC_TRACE_IPC_MESSAGE_H_

#include <stdint.h>

#include "base/component_export.h"
#include "base/trace_event/base_tracing.h"
#include "base/tracing_buildflags.h"

#if BUILDFLAG(ENABLE_BASE_TRACING)
#include "third_party/perfetto/protos/perfetto/trace/track_event/chrome_legacy_ipc.pbzero.h"
#endif  // BUILDFLAG(ENABLE_BASE_TRACING)

// When tracing is enabled, emits a trace event with the given category and
// event name and typed arguments for the message's type (message class and line
// number).
#define TRACE_IPC_MESSAGE_SEND(category, name, msg)                          \
  TRACE_EVENT(category, name, [msg](perfetto::libchrome::EventContext ctx) {            \
    IPC::WriteIpcMessageIdAsProtozero(msg->type(),                           \
                                      ctx.event()->set_chrome_legacy_ipc()); \
  });

#if BUILDFLAG(ENABLE_BASE_TRACING)

namespace IPC {

// Converts |message_id| into its message class and line number parts and writes
// them to the protozero message |ChromeLegacyIpc| for trace events.
void COMPONENT_EXPORT(IPC)
    WriteIpcMessageIdAsProtozero(uint32_t message_id,
                                 perfetto::libchrome::protos::pbzero::ChromeLegacyIpc*);

}  // namespace IPC

#endif  // BUILDFLAG(ENABLE_BASE_TRACING)

#endif  // IPC_TRACE_IPC_MESSAGE_H_
