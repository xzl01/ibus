/* Generated by wayland-scanner 1.16.92 */

/*
 * Copyright © 2012, 2013 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include <stdlib.h>
#include <stdint.h>
#include "wayland-util.h"

extern const struct wl_interface wl_keyboard_interface;
extern const struct wl_interface wl_output_interface;
extern const struct wl_interface wl_surface_interface;
extern const struct wl_interface zwp_input_method_context_v1_interface;
extern const struct wl_interface zwp_input_panel_surface_v1_interface;

static const struct wl_interface *types[] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	&wl_keyboard_interface,
	&zwp_input_method_context_v1_interface,
	&zwp_input_method_context_v1_interface,
	&zwp_input_panel_surface_v1_interface,
	&wl_surface_interface,
	&wl_output_interface,
	NULL,
};

static const struct wl_message zwp_input_method_context_v1_requests[] = {
	{ "destroy", "", types + 0 },
	{ "commit_string", "us", types + 0 },
	{ "preedit_string", "uss", types + 0 },
	{ "preedit_styling", "uuu", types + 0 },
	{ "preedit_cursor", "i", types + 0 },
	{ "delete_surrounding_text", "iu", types + 0 },
	{ "cursor_position", "ii", types + 0 },
	{ "modifiers_map", "a", types + 0 },
	{ "keysym", "uuuuu", types + 0 },
	{ "grab_keyboard", "n", types + 5 },
	{ "key", "uuuu", types + 0 },
	{ "modifiers", "uuuuu", types + 0 },
	{ "language", "us", types + 0 },
	{ "text_direction", "uu", types + 0 },
};

static const struct wl_message zwp_input_method_context_v1_events[] = {
	{ "surrounding_text", "suu", types + 0 },
	{ "reset", "", types + 0 },
	{ "content_type", "uu", types + 0 },
	{ "invoke_action", "uu", types + 0 },
	{ "commit_state", "u", types + 0 },
	{ "preferred_language", "s", types + 0 },
};

WL_EXPORT const struct wl_interface zwp_input_method_context_v1_interface = {
	"zwp_input_method_context_v1", 1,
	14, zwp_input_method_context_v1_requests,
	6, zwp_input_method_context_v1_events,
};

static const struct wl_message zwp_input_method_v1_events[] = {
	{ "activate", "n", types + 6 },
	{ "deactivate", "o", types + 7 },
};

WL_EXPORT const struct wl_interface zwp_input_method_v1_interface = {
	"zwp_input_method_v1", 1,
	0, NULL,
	2, zwp_input_method_v1_events,
};

static const struct wl_message zwp_input_panel_v1_requests[] = {
	{ "get_input_panel_surface", "no", types + 8 },
};

WL_EXPORT const struct wl_interface zwp_input_panel_v1_interface = {
	"zwp_input_panel_v1", 1,
	1, zwp_input_panel_v1_requests,
	0, NULL,
};

static const struct wl_message zwp_input_panel_surface_v1_requests[] = {
	{ "set_toplevel", "ou", types + 10 },
	{ "set_overlay_panel", "", types + 0 },
};

WL_EXPORT const struct wl_interface zwp_input_panel_surface_v1_interface = {
	"zwp_input_panel_surface_v1", 1,
	2, zwp_input_panel_surface_v1_requests,
	0, NULL,
};

