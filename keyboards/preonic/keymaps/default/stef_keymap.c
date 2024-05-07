/* Copyright 2015-2021 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */

#include QMK_KEYBOARD_H

#include "os_detection.h"

#include "keymap_french.h"
#include "keymap_french_mac_iso.h"
#include "sendstring_french_mac_iso.h"

// char OS = '';

enum preonic_layers { _BASE, _MAC, _WIN, _NUMBERS, _ALTGR, _LOWER, _RAISE, _BOTH, _TJRPLUS };

enum preonic_keycodes { AZERTY = SAFE_RANGE, LOWER, RAISE, _APP_Arc, _APP_Beeper, _APP_Postman, _APP_Spotify, _APP_VSC };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* _AZERTY
     * ,-----------------------------------------------------------------------------------.
     * |Esc   |   &  |   é  |   "  |   '  |   (  |   §  |   è  |   !  |   ç  |   à  | Bksp |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |Tab   |   A  |   Z  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |     ^|
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |@ +NUM|   Q  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   M  |     ù|
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |LShift|   W  |   X  |   C  |   V  |   B  |   N  |  ,   |   ;  |   :  |   =  |ENT+Sh|
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |LCtrl |LCtrl | Alt  | CMD  |Lower |    Space    | Raise| AltGr|      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [_BASE] = LAYOUT_preonic_grid(KC_ESC, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_BSPC, KC_TAB, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, MO(_NUMBERS), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_LSFT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, SFT_T(KC_ENT), KC_LCTL, _______, _______, _______, LOWER, KC_SPC, KC_SPC, RAISE, MO(_ALTGR), _______, _______, _______),

    /* BASE MAC
     * ,-----------------------------------------------------------------------------------.
     * |Esc   |   &  |   é  |   "  |   '  |   (  |   §  |   è  |   !  |   ç  |   à  | Bksp |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |Tab   |   A  |   Z  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |     ^|
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |@ +NUM|   Q  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   M  |     ù|
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |LShift|   W  |   X  |   C  |   V  |   B  |   N  |  ,   |   ;  |   :  |   =  |ENT+Sh|
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |LCtrl |LCtrl | Alt  | CMD  |Lower |    Space    | Raise| AltGr|      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [_MAC] = LAYOUT_preonic_grid(_______, MFR_AMPR, MFR_LEAC, MFR_DQUO, MFR_QUOT, MFR_LPRN, MFR_SECT, MFR_LEGR, MFR_EXLM, MFR_LCCE, MFR_LAGR, _______, _______, MFR_A, MFR_Z, MFR_E, MFR_R, MFR_T, MFR_Y, MFR_U, MFR_I, MFR_O, MFR_P, MFR_CIRC, _______, MFR_Q, MFR_S, MFR_D, MFR_F, MFR_G, MFR_H, MFR_J, MFR_K, MFR_L, MFR_M, KC_QUOT, _______, MFR_W, MFR_X, MFR_C, MFR_V, MFR_B, MFR_N, MFR_COMM, MFR_SCLN, MFR_COLN, MFR_EQL, _______, _______, _______, KC_LALT, KC_LGUI, _______, _______, _______, _______, _______, _______, _______, _______),

    /* BASE WINDOWS
     * ,-----------------------------------------------------------------------------------.
     * |Esc   |   &  |   é  |   "  |   '  |   (  |   -  |   è  |   _  |   ç  |   à  | Bksp |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |Tab   |   A  |   Z  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |     ^|
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |@ +NUM|   Q  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   M  |     ù|
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |LShift|   W  |   X  |   C  |   V  |   B  |   N  |  ,   |   ;  |   :  |   =  |ENT+Sh|
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |LCtrl |LCtrl | Win  | Alt  |Lower |    Space    | Raise| AltGr|      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [_WIN] = LAYOUT_preonic_grid(_______, WFR_AMPR, WFR_EACU, WFR_DQUO, WFR_QUOT, WFR_LPRN, WFR_MINS, WFR_EGRV, WFR_UNDS, WFR_CCED, WFR_AGRV, _______, _______, WFR_A, WFR_Z, WFR_E, WFR_R, WFR_T, WFR_Y, WFR_U, WFR_I, WFR_O, WFR_P, WFR_CIRC, _______, WFR_Q, WFR_S, WFR_D, WFR_F, WFR_G, WFR_H, WFR_J, WFR_K, WFR_L, WFR_M, KC_QUOT, _______, WFR_W, WFR_X, WFR_C, WFR_V, WFR_B, WFR_N, WFR_COMM, WFR_SCLN, WFR_COLN, WFR_EQL, _______, _______, _______, KC_LGUI, KC_LALT, _______, _______, _______, _______, _______, _______, _______, _______),

    /* ARROW + NUMBERS
     * ,-----------------------------------------------------------------------------------.
     * |Esc   |      |      |      |      |      |      |      |      |   /  |   *  | Bksp |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |Tab   | HOME |   ↑  |  END |      |      |      |      |   7  |   8  |   9  |   -  |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |@ +NUM|   ←  |   ↓  |   →  |      |      |      |      |   4  |   5  |   6  |   +  |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |LShift|      |      |      |      |      |      |      |   1  |   2  |   3  | Enter|
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |LCtrl |LCtrl | Alt  | CMD  |Lower |    Space    | Raise|   0  |  ,   |  .   |      |
     * `-----------------------------------------------------------------------------------'
     */
    [_NUMBERS] = LAYOUT_preonic_grid(_______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MFR_SLSH, MFR_ASTR, _______, _______, LGUI(KC_LEFT), KC_UP, LGUI(KC_RIGHT), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MFR_7, MFR_8, MFR_9, MFR_MINS, _______, KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MFR_4, MFR_5, MFR_6, MFR_PLUS, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MFR_1, MFR_2, MFR_3, _______, _______, _______, _______, _______, LOWER, KC_ENTER, KC_SPC, RAISE, MFR_0, MFR_COMM, MFR_DOT, XXXXXXX),

    /* ALTGR
     * ,-----------------------------------------------------------------------------------.
     * |      |      |      |   #  |      |      |      |      |      |      |   @  |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |   €  |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [_ALTGR] = LAYOUT_preonic_grid(XXXXXXX, XXXXXXX, XXXXXXX, MFR_HASH, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MFR_LABK, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MFR_EURO, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LOWER, XXXXXXX, XXXXXXX, RAISE, MO(_ALTGR), XXXXXXX, XXXXXXX, _______),

    /* LOWER
     * ,-----------------------------------------------------------------------------------.
     * |      |      |      |      |      |      |      |      |   (  |   )  |   —  |   Del|
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |   {  |   }  |   _  |   $  |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |  F16 |  F17 |  F18 |  F19 |      |      |   [  |   ]  |      |   `  |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |LShift|   <  |      |      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      | Next | Vol- | Vol+ | Play |
     * `-----------------------------------------------------------------------------------'
     */
    [_LOWER] = LAYOUT_preonic_grid(XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MFR_LPRN, MFR_RPRN, MFR_MINS, KC_DEL, XXXXXXX, LCTL(KC_DOWN), LCTL(KC_UP), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MFR_LCBR, MFR_RCBR, MFR_UNDS, MFR_DLR, XXXXXXX, LCTL(KC_LEFT), KC_F16, LCTL(KC_RIGHT), XXXXXXX, XXXXXXX, KC_F18, KC_F19, MFR_LBRC, MFR_RBRC, XXXXXXX, MFR_GRV, KC_LSFT, KC_GRV, KC_F17, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LOWER, KC_SPC, KC_SPC, RAISE, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY),

    /* RAISE
     * ,-----------------------------------------------------------------------------------.
     * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      | MvUp |2Edito|      |2Termi|      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |MvLeft|      |MvRigh|      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      | Next | Vol- | Vol+ | Play |
     * `-----------------------------------------------------------------------------------'
     */
    [_RAISE] = LAYOUT_preonic_grid(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, XXXXXXX, XXXXXXX, LGUI(LCTL(LALT(KC_UP))), LGUI(LCTL(LALT(MFR_Y))), XXXXXXX, LGUI(LCTL(LALT(MFR_T))), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LGUI(LCTL(LALT(KC_LEFT))), XXXXXXX, LGUI(LCTL(LALT(KC_RIGHT))), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LOWER, KC_SPC, KC_SPC, RAISE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),
    /* BOTH (LOWER + RAISE)
     * ,-----------------------------------------------------------------------------------.
     * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |APArc |      |      |      |      |      |      |      |      |APPost|      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |APspot|      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |APvsc |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      | LOWER|      |      |RAISE |      |      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [_BOTH] = LAYOUT_preonic_grid(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, MO(_TJRPLUS), _APP_Arc, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _APP_Postman, XXXXXXX, XXXXXXX, XXXXXXX, _APP_Spotify, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _APP_VSC, _APP_Beeper, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LOWER, XXXXXXX, XXXXXXX, RAISE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),
    /* TJRPLUS (LOWER + RAISE + TAB)
     * ,-----------------------------------------------------------------------------------.
     * |      |      |      |      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |l_TJR+|      |      |      |      |      |      |      |      |      |      | Debug|
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      | Reset|
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      | LOWER|      |      |RAISE |      |      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [_TJRPLUS] = LAYOUT_preonic_grid(XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MO(_TJRPLUS), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, DB_TOGG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LOWER, XXXXXXX, XXXXXXX, RAISE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX)};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case AZERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_MAC);
            }
            return false;
            break;
        case LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _BOTH);
            } else {
                layer_off(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _BOTH);
            }
            return false;
            break;
        case RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _BOTH);
            } else {
                layer_off(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _BOTH);
            }
            return false;
            break;
        case _APP_Arc:
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI(" ") SS_DELAY(50) "Arc\n");
            }
            return false;
            break;
        case _APP_Beeper:
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI(" ") SS_DELAY(50) "Beeper\n");
            }
            return false;
            break;
        case _APP_Postman:
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI(" ") SS_DELAY(50) "Postman\n");
            }
            return false;
            break;
        case _APP_Spotify:
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI(" ") SS_DELAY(50) "Spotify\n");
            }
            return false;
            break;
        case _APP_VSC:
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI(" ") SS_DELAY(50) "VSC\n");
            }
            return false;
            break;
    }
    return true;
};

bool process_detected_host_os_kb(os_variant_t detected_os) {
    if (!process_detected_host_os_user(detected_os)) {
        return false;
    }
    switch (detected_os) {
        case OS_IOS:
            break;
        case OS_MACOS:
            set_single_persistent_default_layer(_AZERTY_MAC);
            break;
        case OS_WINDOWS:
            set_single_persistent_default_layer(_AZERTY_WIN);
            break;
        case OS_LINUX:
            break;
        case OS_UNSURE:
            break;
    }
    return true;
}
