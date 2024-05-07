/* Copyright 2020
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

// Sendstring lookup tables for macOS French (AZERTY) layouts

#pragma once

#include "send_string.h"
#include "keymap_french_mac_iso.h"

// clang-format off

const uint8_t ascii_to_shift_lut[16] PROGMEM = {
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),

    KCLUT_ENTRY(0, 0, 0, 1, 0, 1, 0, 0),
    KCLUT_ENTRY(0, 0, 1, 1, 0, 0, 1, 1),
    KCLUT_ENTRY(1, 1, 1, 1, 1, 1, 1, 1),
    KCLUT_ENTRY(1, 1, 0, 0, 0, 0, 1, 1),
    KCLUT_ENTRY(0, 1, 1, 1, 1, 1, 1, 1),
    KCLUT_ENTRY(1, 1, 1, 1, 1, 1, 1, 1),
    KCLUT_ENTRY(1, 1, 1, 1, 1, 1, 1, 1),
    KCLUT_ENTRY(1, 1, 1, 1, 1, 1, 0, 1),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 1, 0, 0, 0)
};

const uint8_t ascii_to_altgr_lut[16] PROGMEM = {
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),

    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 1, 1, 1, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 1, 1, 1, 1, 0)
};

const uint8_t ascii_to_dead_lut[16] PROGMEM = {
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),

    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 1, 0)
};

const uint8_t ascii_to_keycode_lut[128] PROGMEM = {
    // NUL   SOH      STX      ETX      EOT      ENQ      ACK      BEL
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    // BS    TAB      LF       VT       FF       CR       SO       SI
    KC_BSPC, KC_TAB,  KC_ENT,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    // DLE   DC1      DC2      DC3      DC4      NAK      SYN      ETB
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    // CAN   EM       SUB      ESC      FS       GS       RS       US
    XXXXXXX, XXXXXXX, XXXXXXX, KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,

    //       !         "         #         $         %         &         '
    KC_SPC,  MFR_EXLM, MFR_DQUO, MFR_AT,   MFR_DLR,  MFR_LUGR, MFR_AMPR, MFR_QUOT,
    // (     )         *         +         ,         -         .         /
    MFR_LPRN, MFR_RPRN, MFR_DLR,  MFR_EQL,  MFR_COMM, MFR_MINS, MFR_SCLN, MFR_COLN,
    // 0     1         2         3         4         5         6         7
    MFR_LAGR, MFR_AMPR, MFR_LEAC, MFR_DQUO, MFR_QUOT, MFR_LPRN, MFR_SECT, MFR_LEGR,
    // 8     9         :         ;         <         =         >         ?
    MFR_EXLM, MFR_LCCE, MFR_COLN, MFR_SCLN, MFR_LABK, MFR_EQL,  MFR_LABK, MFR_COMM,
    // @     A         B         C         D         E         F         G
    MFR_AT,   MFR_A,    MFR_B,    MFR_C,    MFR_D,    MFR_E,    MFR_F,    MFR_G,
    // H     I         J         K         L         M         N         O
    MFR_H,    MFR_I,    MFR_J,    MFR_K,    MFR_L,    MFR_M,    MFR_N,    MFR_O,
    // P     Q         R         S         T         U         V         W
    MFR_P,    MFR_Q,    MFR_R,    MFR_S,    MFR_T,    MFR_U,    MFR_V,    MFR_W,
    // X     Y         Z         [         \         ]         ^         _
    MFR_X,    MFR_Y,    MFR_Z,    MFR_LPRN, MFR_COLN, MFR_RPRN, MFR_CIRC, MFR_MINS,
    // `     a         b         c         d         e         f         g
    MFR_GRV,  MFR_A,    MFR_B,    MFR_C,    MFR_D,    MFR_E,    MFR_F,    MFR_G,
    // h     i         j         k         l         m         n         o
    MFR_H,    MFR_I,    MFR_J,    MFR_K,    MFR_L,    MFR_M,    MFR_N,    MFR_O,
    // p     q         r         s         t         u         v         w
    MFR_P,    MFR_Q,    MFR_R,    MFR_S,    MFR_T,    MFR_U,    MFR_V,    MFR_W,
    // x     y         z         {         |         }         ~         DEL
    MFR_X,    MFR_Y,    MFR_Z,    MFR_LPRN, MFR_L,    MFR_RPRN, MFR_N,    KC_DEL
};
