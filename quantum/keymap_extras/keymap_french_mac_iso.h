// Copyright 2024 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#pragma once
#include "keycodes.h"
// clang-format off

// Aliases
#define MFR_AT   KC_GRV  // @
#define MFR_AMPR KC_1    // &
#define MFR_LEAC KC_2    // é
#define MFR_DQUO KC_3    // "
#define MFR_QUOT KC_4    // '
#define MFR_LPRN KC_5    // (
#define MFR_SECT KC_6    // §
#define MFR_LEGR KC_7    // è
#define MFR_EXLM KC_8    // !
#define MFR_LCCE KC_9    // ç
#define MFR_LAGR KC_0    // à
#define MFR_RPRN KC_MINS // )
#define MFR_MINS KC_EQL  // -
#define MFR_A    KC_Q    // A
#define MFR_Z    KC_W    // Z
#define MFR_E    KC_E    // E
#define MFR_R    KC_R    // R
#define MFR_T    KC_T    // T
#define MFR_Y    KC_Y    // Y
#define MFR_U    KC_U    // U
#define MFR_I    KC_I    // I
#define MFR_O    KC_O    // O
#define MFR_P    KC_P    // P
#define MFR_CIRC KC_LBRC // ^
#define MFR_DLR  KC_RBRC // $
#define MFR_Q    KC_A    // Q
#define MFR_S    KC_S    // S
#define MFR_D    KC_D    // D
#define MFR_F    KC_F    // F
#define MFR_G    KC_G    // G
#define MFR_H    KC_H    // H
#define MFR_J    KC_J    // J
#define MFR_K    KC_K    // K
#define MFR_L    KC_L    // L
#define MFR_M    KC_SCLN // M
#define MFR_LUGR KC_QUOT // ù
#define MFR_GRV  KC_NUHS // `
#define MFR_LABK KC_NUBS // <
#define MFR_W    KC_Z    // W
#define MFR_X    KC_X    // X
#define MFR_C    KC_C    // C
#define MFR_V    KC_V    // V
#define MFR_B    KC_B    // B
#define MFR_N    KC_N    // N
#define MFR_COMM KC_M    // ,
#define MFR_SCLN KC_COMM // ;
#define MFR_COLN KC_DOT  // :
#define MFR_EQL  KC_SLSH // =
#define MFR_HASH S(MFR_AT)   // #
#define MFR_1    S(MFR_AMPR) // 1
#define MFR_2    S(MFR_LEAC) // 2
#define MFR_3    S(MFR_DQUO) // 3
#define MFR_4    S(MFR_QUOT) // 4
#define MFR_5    S(MFR_LPRN) // 5
#define MFR_6    S(MFR_SECT) // 6
#define MFR_7    S(MFR_LEGR) // 7
#define MFR_8    S(MFR_EXLM) // 8
#define MFR_9    S(MFR_LCCE) // 9
#define MFR_0    S(MFR_LAGR) // 0
#define MFR_DEG  S(MFR_RPRN) // °
#define MFR_UNDS S(MFR_MINS) // _
#define MFR_DIAE S(MFR_CIRC) // ¨ (dead)
#define MFR_ASTR S(MFR_DLR)  // *
#define MFR_PERC S(MFR_LUGR) // %
#define MFR_PND  S(MFR_GRV)  // £
#define MFR_RABK S(MFR_LABK) // >
#define MFR_QUES S(MFR_COMM) // ?
#define MFR_DOT  S(MFR_SCLN) // .
#define MFR_SLSH S(MFR_COLN) // /
#define MFR_PLUS S(MFR_EQL)  // +
#define MFR_BULT A(MFR_AT)   // •
#define MFR_APPL A(MFR_AMPR) //  (Apple logo)
#define MFR_LEDI A(MFR_LEAC) // ë
#define MFR_LDQU A(MFR_DQUO) // “
#define MFR_LSQU A(MFR_QUOT) // ‘
#define MFR_LCBR A(MFR_LPRN) // {
#define MFR_PILC A(MFR_SECT) // ¶
#define MFR_LDAQ A(MFR_LEGR) // «
#define MFR_IEXL A(MFR_EXLM) // ¡
#define MFR_CCCE A(MFR_LCCE) // Ç
#define MFR_OSTR A(MFR_LAGR) // Ø
#define MFR_RCBR A(MFR_RPRN) // }
#define MFR_MDSH A(MFR_MINS) // —
#define MFR_AE   A(MFR_A)    // Æ
#define MFR_CACI A(MFR_Z)    // Â
#define MFR_ECIR A(MFR_E)    // Ê
#define MFR_REGD A(MFR_R)    // ®
#define MFR_DAGG A(MFR_T)    // †
#define MFR_CUAC A(MFR_Y)    // Ú
#define MFR_MORD A(MFR_U)    // º
#define MFR_LICI A(MFR_I)    // î
#define MFR_OE   A(MFR_O)    // Œ
#define MFR_PI   A(MFR_P)    // π
#define MFR_OCIR A(MFR_CIRC) // Ô
#define MFR_EURO A(MFR_DLR)  // €
#define MFR_DDAG A(MFR_Q)    // ‡
#define MFR_COGR A(MFR_S)    // Ò
#define MFR_PDIF A(MFR_D)    // ∂
#define MFR_FHK  A(MFR_F)    // ƒ
#define MFR_FI   A(MFR_G)    // ﬁ
#define MFR_CIGR A(MFR_H)    // Ì
#define MFR_CIDI A(MFR_J)    // Ï
#define MFR_CEGR A(MFR_K)    // È
#define MFR_NOT  A(MFR_L)    // ¬
#define MFR_MICR A(MFR_M)    // µ
#define MFR_CUGR A(MFR_LUGR) // Ù
#define MFR_LTEQ A(MFR_LABK) // ≤
#define MFR_LSAQ A(MFR_W)    // ‹
#define MFR_AEQL A(MFR_X)    // ≈
#define MFR_COPY A(MFR_C)    // ©
#define MFR_LOZN A(MFR_V)    // ◊
#define MFR_SS   A(MFR_B)    // ß
#define MFR_TILD A(MFR_N)    // ~ (dead)
#define MFR_INFN A(MFR_COMM) // ∞
#define MFR_ELLP A(MFR_SCLN) // …
#define MFR_DIV  A(MFR_COLN) // ÷
#define MFR_NEQL A(MFR_EQL)  // ≠
#define MFR_CYDI S(A(MFR_AT))   // Ÿ
#define MFR_ACUT S(A(MFR_AMPR)) // ´ (dead)
#define MFR_DLQU S(A(MFR_LEAC)) // „
#define MFR_LBRC S(A(MFR_LPRN)) // [
#define MFR_LARI S(A(MFR_SECT)) // å
#define MFR_RDAQ S(A(MFR_LEGR)) // »
#define MFR_CUCI S(A(MFR_EXLM)) // Û
#define MFR_CAAC S(A(MFR_LCCE)) // Á
#define MFR_RBRC S(A(MFR_RPRN)) // ]
#define MFR_NDSH S(A(MFR_MINS)) // –
#define MFR_CARI S(A(MFR_Z))    // Å
#define MFR_SLQU S(A(MFR_R))    // ‚
#define MFR_TM   S(A(MFR_T))    // ™
#define MFR_FORD S(A(MFR_U))    // ª
#define MFR_LIDI S(A(MFR_I))    // ï
#define MFR_NARP S(A(MFR_P))    // ∏
#define MFR_YEN  S(A(MFR_DLR))  // ¥
#define MFR_OMEG S(A(MFR_Q))    // Ω
#define MFR_NARS S(A(MFR_S))    // ∑
#define MFR_INCR S(A(MFR_D))    // ∆
#define MFR_MDDT S(A(MFR_F))    // ·
#define MFR_FL   S(A(MFR_G))    // ﬂ
#define MFR_CICI S(A(MFR_H))    // Î
#define MFR_CIAC S(A(MFR_J))    // Í
#define MFR_CEDI S(A(MFR_K))    // Ë
#define MFR_PIPE S(A(MFR_L))    // |
#define MFR_COAC S(A(MFR_M))    // Ó
#define MFR_PERM S(A(MFR_LUGR)) // ‰
#define MFR_GTEQ S(A(MFR_LABK)) // ≥
#define MFR_RSAQ S(A(MFR_W))    // ›
#define MFR_FRSL S(A(MFR_X))    // ⁄
#define MFR_CENT S(A(MFR_C))    // ¢
#define MFR_SQRT S(A(MFR_V))    // √
#define MFR_INTG S(A(MFR_B))    // ∫
#define MFR_DLSI S(A(MFR_N))    // ı
#define MFR_IQUE S(A(MFR_COMM)) // ¿
#define MFR_BSLS S(A(MFR_COLN)) // (backslash)
#define MFR_PLMN S(A(MFR_EQL))  // ±
