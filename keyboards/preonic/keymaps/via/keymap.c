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

#include "keymap_french_mac_iso.h"
#include "sendstring_french_mac_iso.h"

// char OS = '';

enum preonic_layers {
    _AZERTY_MAC,
    // _AZERTY_WIN,
    _NUMBERS,
    // _ALTGR,
    _LOWER,
    _RAISE,
    // _BOTH,
    // _TJRPLUS
};

enum preonic_keycodes {
    AZERTY = SAFE_RANGE,
    LOWER,
    RAISE,
    // _APP_Arc,
    // _APP_Beeper,
    // _APP_Postman,
    // _APP_Spotify,
    // _APP_VSC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

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
[_AZERTY_MAC] = LAYOUT_preonic_grid(
    KC_ESC,       FR_AMPR, FR_LEAC, FR_DQUO, FR_QUOT, FR_LPRN, FR_SECT, FR_LEGR, FR_EXLM,    FR_LCCE, FR_LAGR, KC_BSPC,
    KC_TAB,       FR_A,    FR_Z,    FR_E,    FR_R,    FR_T,    FR_Y,    FR_U,    FR_I,       FR_O,    FR_P,    FR_CIRC,
    MO(_NUMBERS), FR_Q,    FR_S,    FR_D,    FR_F,    FR_G,    FR_H,    FR_J,    FR_K,       FR_L,    FR_M,    KC_QUOT,
    KC_LSFT,      FR_W,    FR_X,    FR_C,    FR_V,    FR_B,    FR_N,    FR_COMM, FR_SCLN,    FR_COLN, FR_EQL,  SFT_T(KC_ENT),
    KC_LCTL,      KC_LCTL, KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),

// /* BASE WINDOWS
//  * ,-----------------------------------------------------------------------------------.
//  * |Esc   |   &  |   é  |   "  |   '  |   (  |   §  |   è  |   !  |   ç  |   à  | Bksp |
//  * |------+------+------+------+------+------+------+------+------+------+------+------|
//  * |Tab   |   A  |   Z  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |     ^|
//  * |------+------+------+------+------+------+------+------+------+------+------+------|
//  * |@ +NUM|   Q  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   M  |     ù|
//  * |------+------+------+------+------+------+------+------+------+------+------+------|
//  * |LShift|   W  |   X  |   C  |   V  |   B  |   N  |  ,   |   ;  |   :  |   =  |ENT+Sh|
//  * |------+------+------+------+------+------+------+------+------+------+------+------|
//  * |LCtrl |LCtrl | Win  | Alt  |Lower |    Space    | Raise| AltGr|      |      |      |
//  * `-----------------------------------------------------------------------------------'
//  */
// [_AZERTY_WIN] = LAYOUT_preonic_grid(
//     KC_ESC,       FR_AMPR, FR_LEAC, FR_DQUO, FR_QUOT, FR_LPRN, FR_SECT, FR_LEGR, FR_EXLM,    FR_LCCE, FR_LAGR, KC_BSPC,
//     KC_TAB,       FR_A,    FR_Z,    FR_E,    FR_R,    FR_T,    FR_Y,    FR_U,    FR_I,       FR_O,    FR_P,    FR_CIRC,
//     MO(_NUMBERS), FR_Q,    FR_S,    FR_D,    FR_F,    FR_G,    FR_H,    FR_J,    FR_K,       FR_L,    FR_M,    KC_QUOT,
//     KC_LSFT,      FR_W,    FR_X,    FR_C,    FR_V,    FR_B,    FR_N,    FR_COMM, FR_SCLN,    FR_COLN, FR_EQL,  SFT_T(KC_ENT),
//     KC_LCTL,      KC_LCTL, KC_LGUI, KC_LALT, LOWER,   KC_SPC,  KC_SPC,  RAISE,   MO(_ALTGR), XXXXXXX, XXXXXXX, XXXXXXX
// ),

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
[_NUMBERS] = LAYOUT_preonic_grid(
    _______, XXXXXXX,       XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, FR_SLSH, FR_ASTR, _______,
    _______, LGUI(KC_LEFT), KC_UP,   LGUI(KC_RIGHT), XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, FR_7,    FR_8,    FR_9,    FR_MINS,
    _______, KC_LEFT,       KC_DOWN, KC_RIGHT,       XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, FR_4,    FR_5,    FR_6,    FR_PLUS,
    _______, XXXXXXX,       XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, FR_1,    FR_2,    FR_3,    _______,
    _______, _______,       _______, _______,        LOWER,   KC_ENTER,  KC_SPC,  RAISE,   FR_0,    FR_COMM, FR_DOT,  XXXXXXX
),

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
// [_ALTGR] = LAYOUT_preonic_grid(
//     XXXXXXX, XXXXXXX, XXXXXXX, FR_HASH, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, FR_LABK, XXXXXXX,
//     XXXXXXX, XXXXXXX, XXXXXXX, FR_EURO, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX,
//     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX,
//     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX,
//     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LOWER,   XXXXXXX, XXXXXXX, RAISE,   MO(_ALTGR), XXXXXXX, XXXXXXX, XXXXXXX
// ),

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
[_LOWER] = LAYOUT_preonic_grid(
  XXXXXXX, XXXXXXX,       XXXXXXX,     XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, FR_LPRN, FR_RPRN, FR_MINS, KC_DEL,
  XXXXXXX, LCTL(KC_DOWN), LCTL(KC_UP), XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, FR_LCBR, FR_RCBR, FR_UNDS, FR_DLR,
  XXXXXXX, LCTL(KC_LEFT), KC_F16,      LCTL(KC_RIGHT), XXXXXXX, XXXXXXX, KC_F18,  KC_F19,  FR_LBRC, FR_RBRC, XXXXXXX, FR_GRV,
  KC_LSFT, KC_GRV,        KC_F17,      XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX,       XXXXXXX,     XXXXXXX,        LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
),

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
[_RAISE] = LAYOUT_preonic_grid(
    KC_GRV,  KC_1,                      KC_2,                    KC_3,                       KC_4,    KC_5,                   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    XXXXXXX, XXXXXXX,                   LGUI(LCTL(LALT(KC_UP))), LGUI(LCTL(LALT(FR_Y))),     XXXXXXX, LGUI(LCTL(LALT(FR_T))), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
    XXXXXXX, LGUI(LCTL(LALT(KC_LEFT))), XXXXXXX,                 LGUI(LCTL(LALT(KC_RIGHT))), XXXXXXX, XXXXXXX,                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_LSFT, XXXXXXX,                   XXXXXXX,                 XXXXXXX,                    XXXXXXX, XXXXXXX,                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX,                   XXXXXXX,                 XXXXXXX,                    LOWER,   KC_SPC,                 KC_SPC,  RAISE,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),
// /* BOTH (LOWER + RAISE)
//  * ,-----------------------------------------------------------------------------------.
//  * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
//  * |------+------+------+------+------+------+------+------+------+------+------+------|
//  * |      |APArc |      |      |      |      |      |      |      |      |APPost|      |
//  * |------+------+------+------+------+------+------+------+------+------+------+------|
//  * |      |      |APspot|      |      |      |      |      |      |      |      |      |
//  * |------+------+------+------+------+------+------+------+------+------+------+------|
//  * |      |      |      |      |APvsc |      |      |      |      |      |      |      |
//  * |------+------+------+------+------+------+------+------+------+------+------+------|
//  * |      |      |      |      | LOWER|      |      |RAISE |      |      |      |      |
//  * `-----------------------------------------------------------------------------------'
//  */
// [_BOTH] = LAYOUT_preonic_grid(
//   KC_F1,        KC_F2,    KC_F3,        KC_F4,   KC_F5,    KC_F6,       KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,       KC_F12,
//   MO(_TJRPLUS), _APP_Arc, XXXXXXX,      XXXXXXX, XXXXXXX,  XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _APP_Postman, XXXXXXX,
//   XXXXXXX,      XXXXXXX,  _APP_Spotify, XXXXXXX, XXXXXXX,  XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX,
//   XXXXXXX,      XXXXXXX,  XXXXXXX,      XXXXXXX, _APP_VSC, _APP_Beeper, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX,
//   XXXXXXX,      XXXXXXX,  XXXXXXX,      XXXXXXX, LOWER,    XXXXXXX,     XXXXXXX, RAISE,   XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX
// ),
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
// [_TJRPLUS] = LAYOUT_preonic_grid(
//   XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//   MO(_TJRPLUS), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
//   XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, DB_TOGG,
//   XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//   XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, LOWER,   XXXXXXX, XXXXXXX, RAISE,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
// )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case AZERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_AZERTY_MAC);
            }
            return false;
            break;
        case LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
                // update_tri_layer(_LOWER, _RAISE/*, _BOTH)*/;
            } else {
                layer_off(_LOWER);
                // update_tri_layer(_LOWER, _RAISE, _BOTH);
            }
            return false;
            break;
        case RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
                // update_tri_layer(_LOWER, _RAISE, _BOTH);
            } else {
                layer_off(_RAISE);
                // update_tri_layer(_LOWER, _RAISE, _BOTH);
            }
            return false;
            break;
        // case _APP_Arc:
        //     if (record->event.pressed) {
        //         SEND_STRING(SS_LGUI(" ") SS_DELAY(50) "Arc\n");
        //     }
        //     return false;
        //     break;
        // case _APP_Beeper:
        //     if (record->event.pressed) {
        //         SEND_STRING(SS_LGUI(" ") SS_DELAY(50) "Beeper\n");
        //     }
        //     return false;
        //     break;
        // case _APP_Postman:
        //     if (record->event.pressed) {
        //         SEND_STRING(SS_LGUI(" ") SS_DELAY(50) "Postman\n");
        //     }
        //     return false;
        //     break;
        // case _APP_Spotify:
        //     if (record->event.pressed) {
        //         SEND_STRING(SS_LGUI(" ") SS_DELAY(50) "Spotify\n");
        //     }
        //     return false;
        //     break;
        // case _APP_VSC:
        //     if (record->event.pressed) {
        //         SEND_STRING(SS_LGUI(" ") SS_DELAY(50) "VSC\n");
        //     }
        //     return false;
        //     break;
    }
    return true;
};
