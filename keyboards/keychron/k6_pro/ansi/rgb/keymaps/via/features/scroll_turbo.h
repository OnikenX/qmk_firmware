/**
 * @file scroll_turbo.h
 * @brief Scroll Turbo - scroll up and down rapidly
 *
 * Overview
 * --------
 *
 * This library implements a "Scroll Turbo" button that clicks the mouse rapidly,
 * implemented using mouse keys and a periodic callback function:
 *
 *  * Pressing and holding the Scroll Turbo button sends rapid mouse clicks,
 *    about 12 clicks per second.
 *
 *  * Quickly double tapping the Scroll Turbo button "locks" it. Rapid mouse
 *    clicks are sent until the Scroll Turbo button is tapped again.
 *
 * @note Mouse keys and deferred execution must be enabled; in rules.mk set
 * `MOUSEKEY_ENABLE = yes` and `DEFERRED_EXEC_ENABLE = yes`.
 */

#pragma once

#include "quantum.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Handler function for Scroll Turbo.
 *
 * In your keymap, define a custom keycode to use for Scroll Turbo. Then handle
 * Scroll Turbo from your `process_record_user` function by calling
 * `process_scroll_turbo`, passing your custom keycode for the
 * `turbo_click_keycode` arg:
 *
 *     #include "features/scroll_turbo.h"
 *
 *     bool process_record_user(uint16_t keycode, keyrecord_t* record) {
 *       if (!process_scroll_turbo(keycode, record, SCR_TRB)) {
 *         return false;
 *       }
 *       // Your macros ...
 *
 *       return true;
 *     }
 */
bool process_scroll_turbo(uint16_t keycode, keyrecord_t* record,
                               uint16_t turbo_click_keycode);

#ifdef __cplusplus
}
#endif