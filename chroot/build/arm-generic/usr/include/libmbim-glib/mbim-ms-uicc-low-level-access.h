
/* GENERATED CODE... DO NOT EDIT */

/* SPDX-License-Identifier: LGPL-2.1-or-later */
/*
 * Copyright (C) 2013 - 2018 Aleksander Morgado <aleksander@aleksander.es>
 */


#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>

#include "mbim-message.h"
#include "mbim-device.h"
#include "mbim-enums.h"
#include "mbim-tlv.h"

#ifndef __LIBMBIM_GLIB_MBIM_MS_UICC_LOW_LEVEL_ACCESS__
#define __LIBMBIM_GLIB_MBIM_MS_UICC_LOW_LEVEL_ACCESS__

G_BEGIN_DECLS

/**
 * SECTION:mbim-ms-uicc-low-level-access
 * @title: Ms Uicc Low Level Access service
 * @short_description: Support for the Ms Uicc Low Level Access service.
 *
 * This section implements support for requests, responses and notifications in the
 * Ms Uicc Low Level Access service.
 */

/*****************************************************************************/
/* Struct: MbimTerminalCapabilityInfo */

/**
 * MbimTerminalCapabilityInfo:
 * @terminal_capability_data_size: size of the terminal_capability_data array.
 * @terminal_capability_data: an array of #guint8 values.
 *
 * A MbimTerminalCapabilityInfo element.
 *
 * Since: 1.26
 */
typedef struct {
    guint32 terminal_capability_data_size;
    guint8 *terminal_capability_data;
} MbimTerminalCapabilityInfo;

/**
 * MbimTerminalCapabilityInfoArray:
 *
 * A NULL-terminated array of MbimTerminalCapabilityInfo elements.
 *
 * Since: 1.26
 */
typedef MbimTerminalCapabilityInfo *MbimTerminalCapabilityInfoArray;
/**
 * mbim_terminal_capability_info_array_free:
 * @array: a #NULL terminated array of #MbimTerminalCapabilityInfo structs.
 *
 * Frees the memory allocated for the array of #MbimTerminalCapabilityInfo structs.
 *
 * Since: 1.26
 */
void mbim_terminal_capability_info_array_free (MbimTerminalCapabilityInfoArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimTerminalCapabilityInfoArray, mbim_terminal_capability_info_array_free)

/*****************************************************************************/
/* Message (Query): MBIM Message MS UICC Low Level Access ATR */

/**
 * mbim_message_ms_uicc_low_level_access_atr_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'ATR' query command in the 'MS UICC Low Level Access' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_uicc_low_level_access_atr_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message MS UICC Low Level Access ATR */

/**
 * mbim_message_ms_uicc_low_level_access_atr_response_parse:
 * @message: the #MbimMessage.
 * @out_atr: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'atr' field is not needed. Free the returned value with g_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'ATR' response command in the 'MS UICC Low Level Access' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_uicc_low_level_access_atr_response_parse (
    const MbimMessage *message,
    gchar **out_atr,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message MS UICC Low Level Access Open Channel */

/**
 * mbim_message_ms_uicc_low_level_access_open_channel_set_new:
 * @app_id_size: (in): size of the app_id array.
 * @app_id: (in)(element-type guint8)(array length=app_id_size): the 'AppId' field, given as an array of #guint8 values.
 * @select_p2_arg: (in): the 'SelectP2Arg' field, given as a #guint32.
 * @channel_group: (in): the 'ChannelGroup' field, given as a #guint32.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Open Channel' set command in the 'MS UICC Low Level Access' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_uicc_low_level_access_open_channel_set_new (
    const guint32 app_id_size,
    const guint8 *app_id,
    guint32 select_p2_arg,
    guint32 channel_group,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message MS UICC Low Level Access Open Channel */

/**
 * mbim_message_ms_uicc_low_level_access_open_channel_response_parse:
 * @message: the #MbimMessage.
 * @out_status: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Status' field is not needed.
 * @out_channel: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Channel' field is not needed.
 * @out_response_size: (out)(optional): return location for the size of the response array.
 * @out_response: (out)(optional)(transfer none)(element-type guint8)(array length=out_response_size): return location for an array of #guint8 values. Do not free the returned value, it is owned by @message.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Open Channel' response command in the 'MS UICC Low Level Access' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_uicc_low_level_access_open_channel_response_parse (
    const MbimMessage *message,
    guint32 *out_status,
    guint32 *out_channel,
    guint32 *out_response_size,
    const guint8 **out_response,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message MS UICC Low Level Access Close Channel */

/**
 * mbim_message_ms_uicc_low_level_access_close_channel_set_new:
 * @channel: (in): the 'Channel' field, given as a #guint32.
 * @channel_group: (in): the 'ChannelGroup' field, given as a #guint32.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Close Channel' set command in the 'MS UICC Low Level Access' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_uicc_low_level_access_close_channel_set_new (
    guint32 channel,
    guint32 channel_group,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message MS UICC Low Level Access Close Channel */

/**
 * mbim_message_ms_uicc_low_level_access_close_channel_response_parse:
 * @message: the #MbimMessage.
 * @out_status: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Status' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Close Channel' response command in the 'MS UICC Low Level Access' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_uicc_low_level_access_close_channel_response_parse (
    const MbimMessage *message,
    guint32 *out_status,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message MS UICC Low Level Access APDU */

/**
 * mbim_message_ms_uicc_low_level_access_apdu_set_new:
 * @channel: (in): the 'Channel' field, given as a #guint32.
 * @secure_messaging: (in): the 'SecureMessaging' field, given as a #MbimUiccSecureMessaging.
 * @class_byte_type: (in): the 'ClassByteType' field, given as a #MbimUiccClassByteType.
 * @command_size: (in): size of the command array.
 * @command: (in)(element-type guint8)(array length=command_size): the 'Command' field, given as an array of #guint8 values.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'APDU' set command in the 'MS UICC Low Level Access' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_uicc_low_level_access_apdu_set_new (
    guint32 channel,
    MbimUiccSecureMessaging secure_messaging,
    MbimUiccClassByteType class_byte_type,
    const guint32 command_size,
    const guint8 *command,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message MS UICC Low Level Access APDU */

/**
 * mbim_message_ms_uicc_low_level_access_apdu_response_parse:
 * @message: the #MbimMessage.
 * @out_status: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Status' field is not needed.
 * @out_response_size: (out)(optional): return location for the size of the response array.
 * @out_response: (out)(optional)(transfer none)(element-type guint8)(array length=out_response_size): return location for an array of #guint8 values. Do not free the returned value, it is owned by @message.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'APDU' response command in the 'MS UICC Low Level Access' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_uicc_low_level_access_apdu_response_parse (
    const MbimMessage *message,
    guint32 *out_status,
    guint32 *out_response_size,
    const guint8 **out_response,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message MS UICC Low Level Access Terminal Capability */

/**
 * mbim_message_ms_uicc_low_level_access_terminal_capability_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Terminal Capability' query command in the 'MS UICC Low Level Access' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_uicc_low_level_access_terminal_capability_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message MS UICC Low Level Access Terminal Capability */

/**
 * mbim_message_ms_uicc_low_level_access_terminal_capability_set_new:
 * @terminal_capability_count: (in): the 'TerminalCapabilityCount' field, given as a #guint32.
 * @terminal_capability: (in)(array zero-terminated=1)(element-type MbimTerminalCapabilityInfo): the 'TerminalCapability' field, given as an array of #MbimTerminalCapabilityInfo items.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Terminal Capability' set command in the 'MS UICC Low Level Access' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_uicc_low_level_access_terminal_capability_set_new (
    guint32 terminal_capability_count,
    const MbimTerminalCapabilityInfo *const *terminal_capability,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message MS UICC Low Level Access Terminal Capability */

/**
 * mbim_message_ms_uicc_low_level_access_terminal_capability_response_parse:
 * @message: the #MbimMessage.
 * @out_terminal_capability_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'TerminalCapabilityCount' field is not needed.
 * @out_terminal_capability: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimTerminalCapabilityInfo): return location for a newly allocated array of #MbimTerminalCapabilityInfo items, or %NULL if the 'TerminalCapability' field is not needed. Free the returned value with mbim_terminal_capability_info_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Terminal Capability' response command in the 'MS UICC Low Level Access' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_uicc_low_level_access_terminal_capability_response_parse (
    const MbimMessage *message,
    guint32 *out_terminal_capability_count,
    MbimTerminalCapabilityInfoArray **out_terminal_capability,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message MS UICC Low Level Access Reset */

/**
 * mbim_message_ms_uicc_low_level_access_reset_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Reset' query command in the 'MS UICC Low Level Access' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_uicc_low_level_access_reset_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message MS UICC Low Level Access Reset */

/**
 * mbim_message_ms_uicc_low_level_access_reset_set_new:
 * @pass_through_action: (in): the 'PassThroughAction' field, given as a #MbimUiccPassThroughAction.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Reset' set command in the 'MS UICC Low Level Access' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_uicc_low_level_access_reset_set_new (
    MbimUiccPassThroughAction pass_through_action,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message MS UICC Low Level Access Reset */

/**
 * mbim_message_ms_uicc_low_level_access_reset_response_parse:
 * @message: the #MbimMessage.
 * @out_pass_through_status: (out)(optional)(transfer none): return location for a #MbimUiccPassThroughStatus, or %NULL if the 'PassThroughStatus' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Reset' response command in the 'MS UICC Low Level Access' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_uicc_low_level_access_reset_response_parse (
    const MbimMessage *message,
    MbimUiccPassThroughStatus *out_pass_through_status,
    GError **error);

/*****************************************************************************/
/* Service helpers for printable fields */

#if defined (LIBMBIM_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *
__mbim_message_ms_uicc_low_level_access_get_printable_fields (
    const MbimMessage *message,
    const gchar *line_prefix,
    GError **error);

#endif

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_MS_UICC_LOW_LEVEL_ACCESS__ */
