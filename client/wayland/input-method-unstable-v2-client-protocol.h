/* Generated by wayland-scanner 1.23.0 */

#ifndef INPUT_METHOD_UNSTABLE_V2_CLIENT_PROTOCOL_H
#define INPUT_METHOD_UNSTABLE_V2_CLIENT_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-client.h"

#ifdef  __cplusplus
extern "C" {
#endif

/**
 * @page page_input_method_unstable_v2 The input_method_unstable_v2 protocol
 * Protocol for creating input methods
 *
 * @section page_desc_input_method_unstable_v2 Description
 *
 * This protocol allows applications to act as input methods for compositors.
 *
 * An input method context is used to manage the state of the input method.
 *
 * Text strings are UTF-8 encoded, their indices and lengths are in bytes.
 *
 * This document adheres to the RFC 2119 when using words like "must",
 * "should", "may", etc.
 *
 * Warning! The protocol described in this file is experimental and
 * backward incompatible changes may be made. Backward compatible changes
 * may be added together with the corresponding interface version bump.
 * Backward incompatible changes are done by bumping the version number in
 * the protocol and interface names and resetting the interface version.
 * Once the protocol is to be declared stable, the 'z' prefix and the
 * version number in the protocol and interface names are removed and the
 * interface version number is reset.
 *
 * @section page_ifaces_input_method_unstable_v2 Interfaces
 * - @subpage page_iface_zwp_input_method_v2 - input method
 * - @subpage page_iface_zwp_input_popup_surface_v2 - popup surface
 * - @subpage page_iface_zwp_input_method_keyboard_grab_v2 - keyboard grab
 * - @subpage page_iface_zwp_input_method_manager_v2 - input method manager
 * @section page_copyright_input_method_unstable_v2 Copyright
 * <pre>
 *
 * Copyright © 2008-2011 Kristian Høgsberg
 * Copyright © 2010-2011 Intel Corporation
 * Copyright © 2012-2013 Collabora, Ltd.
 * Copyright © 2012, 2013 Intel Corporation
 * Copyright © 2015, 2016 Jan Arne Petersen
 * Copyright © 2017, 2018 Red Hat, Inc.
 * Copyright © 2018       Purism SPC
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
 * </pre>
 */
struct wl_seat;
struct wl_surface;
struct zwp_input_method_keyboard_grab_v2;
struct zwp_input_method_manager_v2;
struct zwp_input_method_v2;
struct zwp_input_popup_surface_v2;

#ifndef ZWP_INPUT_METHOD_V2_INTERFACE
#define ZWP_INPUT_METHOD_V2_INTERFACE
/**
 * @page page_iface_zwp_input_method_v2 zwp_input_method_v2
 * @section page_iface_zwp_input_method_v2_desc Description
 *
 * An input method object allows for clients to compose text.
 *
 * The objects connects the client to a text input in an application, and
 * lets the client to serve as an input method for a seat.
 *
 * The zwp_input_method_v2 object can occupy two distinct states: active and
 * inactive. In the active state, the object is associated to and
 * communicates with a text input. In the inactive state, there is no
 * associated text input, and the only communication is with the compositor.
 * Initially, the input method is in the inactive state.
 *
 * Requests issued in the inactive state must be accepted by the compositor.
 * Because of the serial mechanism, and the state reset on activate event,
 * they will not have any effect on the state of the next text input.
 *
 * There must be no more than one input method object per seat.
 * @section page_iface_zwp_input_method_v2_api API
 * See @ref iface_zwp_input_method_v2.
 */
/**
 * @defgroup iface_zwp_input_method_v2 The zwp_input_method_v2 interface
 *
 * An input method object allows for clients to compose text.
 *
 * The objects connects the client to a text input in an application, and
 * lets the client to serve as an input method for a seat.
 *
 * The zwp_input_method_v2 object can occupy two distinct states: active and
 * inactive. In the active state, the object is associated to and
 * communicates with a text input. In the inactive state, there is no
 * associated text input, and the only communication is with the compositor.
 * Initially, the input method is in the inactive state.
 *
 * Requests issued in the inactive state must be accepted by the compositor.
 * Because of the serial mechanism, and the state reset on activate event,
 * they will not have any effect on the state of the next text input.
 *
 * There must be no more than one input method object per seat.
 */
extern const struct wl_interface zwp_input_method_v2_interface;
#endif
#ifndef ZWP_INPUT_POPUP_SURFACE_V2_INTERFACE
#define ZWP_INPUT_POPUP_SURFACE_V2_INTERFACE
/**
 * @page page_iface_zwp_input_popup_surface_v2 zwp_input_popup_surface_v2
 * @section page_iface_zwp_input_popup_surface_v2_desc Description
 *
 * This interface marks a surface as a popup for interacting with an input
 * method.
 *
 * The compositor should place it near the active text input area. It must
 * be visible if and only if the input method is in the active state.
 *
 * The client must not destroy the underlying wl_surface while the
 * zwp_input_popup_surface_v2 object exists.
 * @section page_iface_zwp_input_popup_surface_v2_api API
 * See @ref iface_zwp_input_popup_surface_v2.
 */
/**
 * @defgroup iface_zwp_input_popup_surface_v2 The zwp_input_popup_surface_v2 interface
 *
 * This interface marks a surface as a popup for interacting with an input
 * method.
 *
 * The compositor should place it near the active text input area. It must
 * be visible if and only if the input method is in the active state.
 *
 * The client must not destroy the underlying wl_surface while the
 * zwp_input_popup_surface_v2 object exists.
 */
extern const struct wl_interface zwp_input_popup_surface_v2_interface;
#endif
#ifndef ZWP_INPUT_METHOD_KEYBOARD_GRAB_V2_INTERFACE
#define ZWP_INPUT_METHOD_KEYBOARD_GRAB_V2_INTERFACE
/**
 * @page page_iface_zwp_input_method_keyboard_grab_v2 zwp_input_method_keyboard_grab_v2
 * @section page_iface_zwp_input_method_keyboard_grab_v2_desc Description
 *
 * The zwp_input_method_keyboard_grab_v2 interface represents an exclusive
 * grab of the wl_keyboard interface associated with the seat.
 * @section page_iface_zwp_input_method_keyboard_grab_v2_api API
 * See @ref iface_zwp_input_method_keyboard_grab_v2.
 */
/**
 * @defgroup iface_zwp_input_method_keyboard_grab_v2 The zwp_input_method_keyboard_grab_v2 interface
 *
 * The zwp_input_method_keyboard_grab_v2 interface represents an exclusive
 * grab of the wl_keyboard interface associated with the seat.
 */
extern const struct wl_interface zwp_input_method_keyboard_grab_v2_interface;
#endif
#ifndef ZWP_INPUT_METHOD_MANAGER_V2_INTERFACE
#define ZWP_INPUT_METHOD_MANAGER_V2_INTERFACE
/**
 * @page page_iface_zwp_input_method_manager_v2 zwp_input_method_manager_v2
 * @section page_iface_zwp_input_method_manager_v2_desc Description
 *
 * The input method manager allows the client to become the input method on
 * a chosen seat.
 *
 * No more than one input method must be associated with any seat at any
 * given time.
 * @section page_iface_zwp_input_method_manager_v2_api API
 * See @ref iface_zwp_input_method_manager_v2.
 */
/**
 * @defgroup iface_zwp_input_method_manager_v2 The zwp_input_method_manager_v2 interface
 *
 * The input method manager allows the client to become the input method on
 * a chosen seat.
 *
 * No more than one input method must be associated with any seat at any
 * given time.
 */
extern const struct wl_interface zwp_input_method_manager_v2_interface;
#endif

#ifndef ZWP_INPUT_METHOD_V2_ERROR_ENUM
#define ZWP_INPUT_METHOD_V2_ERROR_ENUM
enum zwp_input_method_v2_error {
	/**
	 * wl_surface has another role
	 */
	ZWP_INPUT_METHOD_V2_ERROR_ROLE = 0,
};
#endif /* ZWP_INPUT_METHOD_V2_ERROR_ENUM */

/**
 * @ingroup iface_zwp_input_method_v2
 * @struct zwp_input_method_v2_listener
 */
struct zwp_input_method_v2_listener {
	/**
	 * input method has been requested
	 *
	 * Notification that a text input focused on this seat requested
	 * the input method to be activated.
	 *
	 * This event serves the purpose of providing the compositor with
	 * an active input method.
	 *
	 * This event resets all state associated with previous enable,
	 * disable, surrounding_text, text_change_cause, and content_type
	 * events, as well as the state associated with set_preedit_string,
	 * commit_string, and delete_surrounding_text requests. In
	 * addition, it marks the zwp_input_method_v2 object as active, and
	 * makes any existing zwp_input_popup_surface_v2 objects visible.
	 *
	 * The surrounding_text, and content_type events must follow before
	 * the next done event if the text input supports the respective
	 * functionality.
	 *
	 * State set with this event is double-buffered. It will get
	 * applied on the next zwp_input_method_v2.done event, and stay
	 * valid until changed.
	 */
	void (*activate)(void *data,
			 struct zwp_input_method_v2 *zwp_input_method_v2);
	/**
	 * deactivate event
	 *
	 * Notification that no focused text input currently needs an
	 * active input method on this seat.
	 *
	 * This event marks the zwp_input_method_v2 object as inactive. The
	 * compositor must make all existing zwp_input_popup_surface_v2
	 * objects invisible until the next activate event.
	 *
	 * State set with this event is double-buffered. It will get
	 * applied on the next zwp_input_method_v2.done event, and stay
	 * valid until changed.
	 */
	void (*deactivate)(void *data,
			   struct zwp_input_method_v2 *zwp_input_method_v2);
	/**
	 * surrounding text event
	 *
	 * Updates the surrounding plain text around the cursor,
	 * excluding the preedit text.
	 *
	 * If any preedit text is present, it is replaced with the cursor
	 * for the purpose of this event.
	 *
	 * The argument text is a buffer containing the preedit string, and
	 * must include the cursor position, and the complete selection. It
	 * should contain additional characters before and after these.
	 * There is a maximum length of wayland messages, so text can not
	 * be longer than 4000 bytes.
	 *
	 * cursor is the byte offset of the cursor within the text buffer.
	 *
	 * anchor is the byte offset of the selection anchor within the
	 * text buffer. If there is no selected text, anchor must be the
	 * same as cursor.
	 *
	 * If this event does not arrive before the first done event, the
	 * input method may assume that the text input does not support
	 * this functionality and ignore following surrounding_text events.
	 *
	 * Values set with this event are double-buffered. They will get
	 * applied and set to initial values on the next
	 * zwp_input_method_v2.done event.
	 *
	 * The initial state for affected fields is empty, meaning that the
	 * text input does not support sending surrounding text. If the
	 * empty values get applied, subsequent attempts to change them may
	 * have no effect.
	 */
	void (*surrounding_text)(void *data,
				 struct zwp_input_method_v2 *zwp_input_method_v2,
				 const char *text,
				 uint32_t cursor,
				 uint32_t anchor);
	/**
	 * indicates the cause of surrounding text change
	 *
	 * Tells the input method why the text surrounding the cursor
	 * changed.
	 *
	 * Whenever the client detects an external change in text, cursor,
	 * or anchor position, it must issue this request to the
	 * compositor. This request is intended to give the input method a
	 * chance to update the preedit text in an appropriate way, e.g. by
	 * removing it when the user starts typing with a keyboard.
	 *
	 * cause describes the source of the change.
	 *
	 * The value set with this event is double-buffered. It will get
	 * applied and set to its initial value on the next
	 * zwp_input_method_v2.done event.
	 *
	 * The initial value of cause is input_method.
	 */
	void (*text_change_cause)(void *data,
				  struct zwp_input_method_v2 *zwp_input_method_v2,
				  uint32_t cause);
	/**
	 * content purpose and hint
	 *
	 * Indicates the content type and hint for the current
	 * zwp_input_method_v2 instance.
	 *
	 * Values set with this event are double-buffered. They will get
	 * applied on the next zwp_input_method_v2.done event.
	 *
	 * The initial value for hint is none, and the initial value for
	 * purpose is normal.
	 */
	void (*content_type)(void *data,
			     struct zwp_input_method_v2 *zwp_input_method_v2,
			     uint32_t hint,
			     uint32_t purpose);
	/**
	 * apply state
	 *
	 * Atomically applies state changes recently sent to the client.
	 *
	 * The done event establishes and updates the state of the client,
	 * and must be issued after any changes to apply them.
	 *
	 * Text input state (content purpose, content hint, surrounding
	 * text, and change cause) is conceptually double-buffered within
	 * an input method context.
	 *
	 * Events modify the pending state, as opposed to the current state
	 * in use by the input method. A done event atomically applies all
	 * pending state, replacing the current state. After done, the new
	 * pending state is as documented for each related request.
	 *
	 * Events must be applied in the order of arrival.
	 *
	 * Neither current nor pending state are modified unless noted
	 * otherwise.
	 */
	void (*done)(void *data,
		     struct zwp_input_method_v2 *zwp_input_method_v2);
	/**
	 * input method unavailable
	 *
	 * The input method ceased to be available.
	 *
	 * The compositor must issue this event as the only event on the
	 * object if there was another input_method object associated with
	 * the same seat at the time of its creation.
	 *
	 * The compositor must issue this request when the object is no
	 * longer usable, e.g. due to seat removal.
	 *
	 * The input method context becomes inert and should be destroyed
	 * after deactivation is handled. Any further requests and events
	 * except for the destroy request must be ignored.
	 */
	void (*unavailable)(void *data,
			    struct zwp_input_method_v2 *zwp_input_method_v2);
};

/**
 * @ingroup iface_zwp_input_method_v2
 */
static inline int
zwp_input_method_v2_add_listener(struct zwp_input_method_v2 *zwp_input_method_v2,
				 const struct zwp_input_method_v2_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) zwp_input_method_v2,
				     (void (**)(void)) listener, data);
}

#define ZWP_INPUT_METHOD_V2_COMMIT_STRING 0
#define ZWP_INPUT_METHOD_V2_SET_PREEDIT_STRING 1
#define ZWP_INPUT_METHOD_V2_DELETE_SURROUNDING_TEXT 2
#define ZWP_INPUT_METHOD_V2_COMMIT 3
#define ZWP_INPUT_METHOD_V2_GET_INPUT_POPUP_SURFACE 4
#define ZWP_INPUT_METHOD_V2_GRAB_KEYBOARD 5
#define ZWP_INPUT_METHOD_V2_DESTROY 6

/**
 * @ingroup iface_zwp_input_method_v2
 */
#define ZWP_INPUT_METHOD_V2_ACTIVATE_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_input_method_v2
 */
#define ZWP_INPUT_METHOD_V2_DEACTIVATE_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_input_method_v2
 */
#define ZWP_INPUT_METHOD_V2_SURROUNDING_TEXT_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_input_method_v2
 */
#define ZWP_INPUT_METHOD_V2_TEXT_CHANGE_CAUSE_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_input_method_v2
 */
#define ZWP_INPUT_METHOD_V2_CONTENT_TYPE_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_input_method_v2
 */
#define ZWP_INPUT_METHOD_V2_DONE_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_input_method_v2
 */
#define ZWP_INPUT_METHOD_V2_UNAVAILABLE_SINCE_VERSION 1

/**
 * @ingroup iface_zwp_input_method_v2
 */
#define ZWP_INPUT_METHOD_V2_COMMIT_STRING_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_input_method_v2
 */
#define ZWP_INPUT_METHOD_V2_SET_PREEDIT_STRING_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_input_method_v2
 */
#define ZWP_INPUT_METHOD_V2_DELETE_SURROUNDING_TEXT_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_input_method_v2
 */
#define ZWP_INPUT_METHOD_V2_COMMIT_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_input_method_v2
 */
#define ZWP_INPUT_METHOD_V2_GET_INPUT_POPUP_SURFACE_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_input_method_v2
 */
#define ZWP_INPUT_METHOD_V2_GRAB_KEYBOARD_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_input_method_v2
 */
#define ZWP_INPUT_METHOD_V2_DESTROY_SINCE_VERSION 1

/** @ingroup iface_zwp_input_method_v2 */
static inline void
zwp_input_method_v2_set_user_data(struct zwp_input_method_v2 *zwp_input_method_v2, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zwp_input_method_v2, user_data);
}

/** @ingroup iface_zwp_input_method_v2 */
static inline void *
zwp_input_method_v2_get_user_data(struct zwp_input_method_v2 *zwp_input_method_v2)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zwp_input_method_v2);
}

static inline uint32_t
zwp_input_method_v2_get_version(struct zwp_input_method_v2 *zwp_input_method_v2)
{
	return wl_proxy_get_version((struct wl_proxy *) zwp_input_method_v2);
}

/**
 * @ingroup iface_zwp_input_method_v2
 *
 * Send the commit string text for insertion to the application.
 *
 * Inserts a string at current cursor position (see commit event
 * sequence). The string to commit could be either just a single character
 * after a key press or the result of some composing.
 *
 * The argument text is a buffer containing the string to insert. There is
 * a maximum length of wayland messages, so text can not be longer than
 * 4000 bytes.
 *
 * Values set with this event are double-buffered. They must be applied
 * and reset to initial on the next zwp_text_input_v3.commit request.
 *
 * The initial value of text is an empty string.
 */
static inline void
zwp_input_method_v2_commit_string(struct zwp_input_method_v2 *zwp_input_method_v2, const char *text)
{
	wl_proxy_marshal_flags((struct wl_proxy *) zwp_input_method_v2,
			 ZWP_INPUT_METHOD_V2_COMMIT_STRING, NULL, wl_proxy_get_version((struct wl_proxy *) zwp_input_method_v2), 0, text);
}

/**
 * @ingroup iface_zwp_input_method_v2
 *
 * Send the pre-edit string text to the application text input.
 *
 * Place a new composing text (pre-edit) at the current cursor position.
 * Any previously set composing text must be removed. Any previously
 * existing selected text must be removed. The cursor is moved to a new
 * position within the preedit string.
 *
 * The argument text is a buffer containing the preedit string. There is
 * a maximum length of wayland messages, so text can not be longer than
 * 4000 bytes.
 *
 * The arguments cursor_begin and cursor_end are counted in bytes relative
 * to the beginning of the submitted string buffer. Cursor should be
 * hidden by the text input when both are equal to -1.
 *
 * cursor_begin indicates the beginning of the cursor. cursor_end
 * indicates the end of the cursor. It may be equal or different than
 * cursor_begin.
 *
 * Values set with this event are double-buffered. They must be applied on
 * the next zwp_input_method_v2.commit event.
 *
 * The initial value of text is an empty string. The initial value of
 * cursor_begin, and cursor_end are both 0.
 */
static inline void
zwp_input_method_v2_set_preedit_string(struct zwp_input_method_v2 *zwp_input_method_v2, const char *text, int32_t cursor_begin, int32_t cursor_end)
{
	wl_proxy_marshal_flags((struct wl_proxy *) zwp_input_method_v2,
			 ZWP_INPUT_METHOD_V2_SET_PREEDIT_STRING, NULL, wl_proxy_get_version((struct wl_proxy *) zwp_input_method_v2), 0, text, cursor_begin, cursor_end);
}

/**
 * @ingroup iface_zwp_input_method_v2
 *
 * Remove the surrounding text.
 *
 * before_length and after_length are the number of bytes before and after
 * the current cursor index (excluding the preedit text) to delete.
 *
 * If any preedit text is present, it is replaced with the cursor for the
 * purpose of this event. In effect before_length is counted from the
 * beginning of preedit text, and after_length from its end (see commit
 * event sequence).
 *
 * Values set with this event are double-buffered. They must be applied
 * and reset to initial on the next zwp_input_method_v2.commit request.
 *
 * The initial values of both before_length and after_length are 0.
 */
static inline void
zwp_input_method_v2_delete_surrounding_text(struct zwp_input_method_v2 *zwp_input_method_v2, uint32_t before_length, uint32_t after_length)
{
	wl_proxy_marshal_flags((struct wl_proxy *) zwp_input_method_v2,
			 ZWP_INPUT_METHOD_V2_DELETE_SURROUNDING_TEXT, NULL, wl_proxy_get_version((struct wl_proxy *) zwp_input_method_v2), 0, before_length, after_length);
}

/**
 * @ingroup iface_zwp_input_method_v2
 *
 * Apply state changes from commit_string, set_preedit_string and
 * delete_surrounding_text requests.
 *
 * The state relating to these events is double-buffered, and each one
 * modifies the pending state. This request replaces the current state
 * with the pending state.
 *
 * The connected text input is expected to proceed by evaluating the
 * changes in the following order:
 *
 * 1. Replace existing preedit string with the cursor.
 * 2. Delete requested surrounding text.
 * 3. Insert commit string with the cursor at its end.
 * 4. Calculate surrounding text to send.
 * 5. Insert new preedit text in cursor position.
 * 6. Place cursor inside preedit text.
 *
 * The serial number reflects the last state of the zwp_input_method_v2
 * object known to the client. The value of the serial argument must be
 * equal to the number of done events already issued by that object. When
 * the compositor receives a commit request with a serial different than
 * the number of past done events, it must proceed as normal, except it
 * should not change the current state of the zwp_input_method_v2 object.
 */
static inline void
zwp_input_method_v2_commit(struct zwp_input_method_v2 *zwp_input_method_v2, uint32_t serial)
{
	wl_proxy_marshal_flags((struct wl_proxy *) zwp_input_method_v2,
			 ZWP_INPUT_METHOD_V2_COMMIT, NULL, wl_proxy_get_version((struct wl_proxy *) zwp_input_method_v2), 0, serial);
}

/**
 * @ingroup iface_zwp_input_method_v2
 *
 * Creates a new zwp_input_popup_surface_v2 object wrapping a given
 * surface.
 *
 * The surface gets assigned the "input_popup" role. If the surface
 * already has an assigned role, the compositor must issue a protocol
 * error.
 */
static inline struct zwp_input_popup_surface_v2 *
zwp_input_method_v2_get_input_popup_surface(struct zwp_input_method_v2 *zwp_input_method_v2, struct wl_surface *surface)
{
	struct wl_proxy *id;

	id = wl_proxy_marshal_flags((struct wl_proxy *) zwp_input_method_v2,
			 ZWP_INPUT_METHOD_V2_GET_INPUT_POPUP_SURFACE, &zwp_input_popup_surface_v2_interface, wl_proxy_get_version((struct wl_proxy *) zwp_input_method_v2), 0, NULL, surface);

	return (struct zwp_input_popup_surface_v2 *) id;
}

/**
 * @ingroup iface_zwp_input_method_v2
 *
 * Allow an input method to receive hardware keyboard input and process
 * key events to generate text events (with pre-edit) over the wire. This
 * allows input methods which compose multiple key events for inputting
 * text like it is done for CJK languages.
 *
 * The compositor should send all keyboard events on the seat to the grab
 * holder via the returned wl_keyboard object. Nevertheless, the
 * compositor may decide not to forward any particular event. The
 * compositor must not further process any event after it has been
 * forwarded to the grab holder.
 *
 * Releasing the resulting wl_keyboard object releases the grab.
 */
static inline struct zwp_input_method_keyboard_grab_v2 *
zwp_input_method_v2_grab_keyboard(struct zwp_input_method_v2 *zwp_input_method_v2)
{
	struct wl_proxy *keyboard;

	keyboard = wl_proxy_marshal_flags((struct wl_proxy *) zwp_input_method_v2,
			 ZWP_INPUT_METHOD_V2_GRAB_KEYBOARD, &zwp_input_method_keyboard_grab_v2_interface, wl_proxy_get_version((struct wl_proxy *) zwp_input_method_v2), 0, NULL);

	return (struct zwp_input_method_keyboard_grab_v2 *) keyboard;
}

/**
 * @ingroup iface_zwp_input_method_v2
 *
 * Destroys the zwp_text_input_v2 object and any associated child
 * objects, i.e. zwp_input_popup_surface_v2 and
 * zwp_input_method_keyboard_grab_v2.
 */
static inline void
zwp_input_method_v2_destroy(struct zwp_input_method_v2 *zwp_input_method_v2)
{
	wl_proxy_marshal_flags((struct wl_proxy *) zwp_input_method_v2,
			 ZWP_INPUT_METHOD_V2_DESTROY, NULL, wl_proxy_get_version((struct wl_proxy *) zwp_input_method_v2), WL_MARSHAL_FLAG_DESTROY);
}

/**
 * @ingroup iface_zwp_input_popup_surface_v2
 * @struct zwp_input_popup_surface_v2_listener
 */
struct zwp_input_popup_surface_v2_listener {
	/**
	 * set text input area position
	 *
	 * Notify about the position of the area of the text input
	 * expressed as a rectangle in surface local coordinates.
	 *
	 * This is a hint to the input method telling it the relative
	 * position of the text being entered.
	 */
	void (*text_input_rectangle)(void *data,
				     struct zwp_input_popup_surface_v2 *zwp_input_popup_surface_v2,
				     int32_t x,
				     int32_t y,
				     int32_t width,
				     int32_t height);
};

/**
 * @ingroup iface_zwp_input_popup_surface_v2
 */
static inline int
zwp_input_popup_surface_v2_add_listener(struct zwp_input_popup_surface_v2 *zwp_input_popup_surface_v2,
					const struct zwp_input_popup_surface_v2_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) zwp_input_popup_surface_v2,
				     (void (**)(void)) listener, data);
}

#define ZWP_INPUT_POPUP_SURFACE_V2_DESTROY 0

/**
 * @ingroup iface_zwp_input_popup_surface_v2
 */
#define ZWP_INPUT_POPUP_SURFACE_V2_TEXT_INPUT_RECTANGLE_SINCE_VERSION 1

/**
 * @ingroup iface_zwp_input_popup_surface_v2
 */
#define ZWP_INPUT_POPUP_SURFACE_V2_DESTROY_SINCE_VERSION 1

/** @ingroup iface_zwp_input_popup_surface_v2 */
static inline void
zwp_input_popup_surface_v2_set_user_data(struct zwp_input_popup_surface_v2 *zwp_input_popup_surface_v2, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zwp_input_popup_surface_v2, user_data);
}

/** @ingroup iface_zwp_input_popup_surface_v2 */
static inline void *
zwp_input_popup_surface_v2_get_user_data(struct zwp_input_popup_surface_v2 *zwp_input_popup_surface_v2)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zwp_input_popup_surface_v2);
}

static inline uint32_t
zwp_input_popup_surface_v2_get_version(struct zwp_input_popup_surface_v2 *zwp_input_popup_surface_v2)
{
	return wl_proxy_get_version((struct wl_proxy *) zwp_input_popup_surface_v2);
}

/**
 * @ingroup iface_zwp_input_popup_surface_v2
 */
static inline void
zwp_input_popup_surface_v2_destroy(struct zwp_input_popup_surface_v2 *zwp_input_popup_surface_v2)
{
	wl_proxy_marshal_flags((struct wl_proxy *) zwp_input_popup_surface_v2,
			 ZWP_INPUT_POPUP_SURFACE_V2_DESTROY, NULL, wl_proxy_get_version((struct wl_proxy *) zwp_input_popup_surface_v2), WL_MARSHAL_FLAG_DESTROY);
}

/**
 * @ingroup iface_zwp_input_method_keyboard_grab_v2
 * @struct zwp_input_method_keyboard_grab_v2_listener
 */
struct zwp_input_method_keyboard_grab_v2_listener {
	/**
	 * keyboard mapping
	 *
	 * This event provides a file descriptor to the client which can
	 * be memory-mapped to provide a keyboard mapping description.
	 * @param format keymap format
	 * @param fd keymap file descriptor
	 * @param size keymap size, in bytes
	 */
	void (*keymap)(void *data,
		       struct zwp_input_method_keyboard_grab_v2 *zwp_input_method_keyboard_grab_v2,
		       uint32_t format,
		       int32_t fd,
		       uint32_t size);
	/**
	 * key event
	 *
	 * A key was pressed or released. The time argument is a
	 * timestamp with millisecond granularity, with an undefined base.
	 * @param serial serial number of the key event
	 * @param time timestamp with millisecond granularity
	 * @param key key that produced the event
	 * @param state physical state of the key
	 */
	void (*key)(void *data,
		    struct zwp_input_method_keyboard_grab_v2 *zwp_input_method_keyboard_grab_v2,
		    uint32_t serial,
		    uint32_t time,
		    uint32_t key,
		    uint32_t state);
	/**
	 * modifier and group state
	 *
	 * Notifies clients that the modifier and/or group state has
	 * changed, and it should update its local state.
	 * @param serial serial number of the modifiers event
	 * @param mods_depressed depressed modifiers
	 * @param mods_latched latched modifiers
	 * @param mods_locked locked modifiers
	 * @param group keyboard layout
	 */
	void (*modifiers)(void *data,
			  struct zwp_input_method_keyboard_grab_v2 *zwp_input_method_keyboard_grab_v2,
			  uint32_t serial,
			  uint32_t mods_depressed,
			  uint32_t mods_latched,
			  uint32_t mods_locked,
			  uint32_t group);
	/**
	 * repeat rate and delay
	 *
	 * Informs the client about the keyboard's repeat rate and delay.
	 *
	 * This event is sent as soon as the
	 * zwp_input_method_keyboard_grab_v2 object has been created, and
	 * is guaranteed to be received by the client before any key press
	 * event.
	 *
	 * Negative values for either rate or delay are illegal. A rate of
	 * zero will disable any repeating (regardless of the value of
	 * delay).
	 *
	 * This event can be sent later on as well with a new value if
	 * necessary, so clients should continue listening for the event
	 * past the creation of zwp_input_method_keyboard_grab_v2.
	 * @param rate the rate of repeating keys in characters per second
	 * @param delay delay in milliseconds since key down until repeating starts
	 */
	void (*repeat_info)(void *data,
			    struct zwp_input_method_keyboard_grab_v2 *zwp_input_method_keyboard_grab_v2,
			    int32_t rate,
			    int32_t delay);
};

/**
 * @ingroup iface_zwp_input_method_keyboard_grab_v2
 */
static inline int
zwp_input_method_keyboard_grab_v2_add_listener(struct zwp_input_method_keyboard_grab_v2 *zwp_input_method_keyboard_grab_v2,
					       const struct zwp_input_method_keyboard_grab_v2_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) zwp_input_method_keyboard_grab_v2,
				     (void (**)(void)) listener, data);
}

#define ZWP_INPUT_METHOD_KEYBOARD_GRAB_V2_RELEASE 0

/**
 * @ingroup iface_zwp_input_method_keyboard_grab_v2
 */
#define ZWP_INPUT_METHOD_KEYBOARD_GRAB_V2_KEYMAP_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_input_method_keyboard_grab_v2
 */
#define ZWP_INPUT_METHOD_KEYBOARD_GRAB_V2_KEY_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_input_method_keyboard_grab_v2
 */
#define ZWP_INPUT_METHOD_KEYBOARD_GRAB_V2_MODIFIERS_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_input_method_keyboard_grab_v2
 */
#define ZWP_INPUT_METHOD_KEYBOARD_GRAB_V2_REPEAT_INFO_SINCE_VERSION 1

/**
 * @ingroup iface_zwp_input_method_keyboard_grab_v2
 */
#define ZWP_INPUT_METHOD_KEYBOARD_GRAB_V2_RELEASE_SINCE_VERSION 1

/** @ingroup iface_zwp_input_method_keyboard_grab_v2 */
static inline void
zwp_input_method_keyboard_grab_v2_set_user_data(struct zwp_input_method_keyboard_grab_v2 *zwp_input_method_keyboard_grab_v2, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zwp_input_method_keyboard_grab_v2, user_data);
}

/** @ingroup iface_zwp_input_method_keyboard_grab_v2 */
static inline void *
zwp_input_method_keyboard_grab_v2_get_user_data(struct zwp_input_method_keyboard_grab_v2 *zwp_input_method_keyboard_grab_v2)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zwp_input_method_keyboard_grab_v2);
}

static inline uint32_t
zwp_input_method_keyboard_grab_v2_get_version(struct zwp_input_method_keyboard_grab_v2 *zwp_input_method_keyboard_grab_v2)
{
	return wl_proxy_get_version((struct wl_proxy *) zwp_input_method_keyboard_grab_v2);
}

/** @ingroup iface_zwp_input_method_keyboard_grab_v2 */
static inline void
zwp_input_method_keyboard_grab_v2_destroy(struct zwp_input_method_keyboard_grab_v2 *zwp_input_method_keyboard_grab_v2)
{
	wl_proxy_destroy((struct wl_proxy *) zwp_input_method_keyboard_grab_v2);
}

/**
 * @ingroup iface_zwp_input_method_keyboard_grab_v2
 */
static inline void
zwp_input_method_keyboard_grab_v2_release(struct zwp_input_method_keyboard_grab_v2 *zwp_input_method_keyboard_grab_v2)
{
	wl_proxy_marshal_flags((struct wl_proxy *) zwp_input_method_keyboard_grab_v2,
			 ZWP_INPUT_METHOD_KEYBOARD_GRAB_V2_RELEASE, NULL, wl_proxy_get_version((struct wl_proxy *) zwp_input_method_keyboard_grab_v2), WL_MARSHAL_FLAG_DESTROY);
}

#define ZWP_INPUT_METHOD_MANAGER_V2_GET_INPUT_METHOD 0
#define ZWP_INPUT_METHOD_MANAGER_V2_DESTROY 1


/**
 * @ingroup iface_zwp_input_method_manager_v2
 */
#define ZWP_INPUT_METHOD_MANAGER_V2_GET_INPUT_METHOD_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_input_method_manager_v2
 */
#define ZWP_INPUT_METHOD_MANAGER_V2_DESTROY_SINCE_VERSION 1

/** @ingroup iface_zwp_input_method_manager_v2 */
static inline void
zwp_input_method_manager_v2_set_user_data(struct zwp_input_method_manager_v2 *zwp_input_method_manager_v2, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zwp_input_method_manager_v2, user_data);
}

/** @ingroup iface_zwp_input_method_manager_v2 */
static inline void *
zwp_input_method_manager_v2_get_user_data(struct zwp_input_method_manager_v2 *zwp_input_method_manager_v2)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zwp_input_method_manager_v2);
}

static inline uint32_t
zwp_input_method_manager_v2_get_version(struct zwp_input_method_manager_v2 *zwp_input_method_manager_v2)
{
	return wl_proxy_get_version((struct wl_proxy *) zwp_input_method_manager_v2);
}

/**
 * @ingroup iface_zwp_input_method_manager_v2
 *
 * Request a new input zwp_input_method_v2 object associated with a given
 * seat.
 */
static inline struct zwp_input_method_v2 *
zwp_input_method_manager_v2_get_input_method(struct zwp_input_method_manager_v2 *zwp_input_method_manager_v2, struct wl_seat *seat)
{
	struct wl_proxy *input_method;

	input_method = wl_proxy_marshal_flags((struct wl_proxy *) zwp_input_method_manager_v2,
			 ZWP_INPUT_METHOD_MANAGER_V2_GET_INPUT_METHOD, &zwp_input_method_v2_interface, wl_proxy_get_version((struct wl_proxy *) zwp_input_method_manager_v2), 0, seat, NULL);

	return (struct zwp_input_method_v2 *) input_method;
}

/**
 * @ingroup iface_zwp_input_method_manager_v2
 *
 * Destroys the zwp_input_method_manager_v2 object.
 *
 * The zwp_input_method_v2 objects originating from it remain valid.
 */
static inline void
zwp_input_method_manager_v2_destroy(struct zwp_input_method_manager_v2 *zwp_input_method_manager_v2)
{
	wl_proxy_marshal_flags((struct wl_proxy *) zwp_input_method_manager_v2,
			 ZWP_INPUT_METHOD_MANAGER_V2_DESTROY, NULL, wl_proxy_get_version((struct wl_proxy *) zwp_input_method_manager_v2), WL_MARSHAL_FLAG_DESTROY);
}

#ifdef  __cplusplus
}
#endif

#endif
