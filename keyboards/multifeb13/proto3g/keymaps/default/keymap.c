// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_number {
    _BASE = 0,
    _FUNC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┐
     * │ 1 │ 2 │
     * ├───┼───┤
     * │ fn│   │
     * └───┴───┘
     */
    [_BASE] = LAYOUT(
        KC_1, KC_2,
        MO(_FUNC)
    ),

    /*
     * ┌───┬───┐
     * │ a │ b │
     * ├───┼───┤
     * │ fn│   │
     * └───┴───┘
     */
    [_FUNC] = LAYOUT(
        KC_A, KC_B,
        KC_0
    )
};

void keyboard_post_init_user(void) {
    // すべてのLEDに同じ設定をする場合はこちらの関数
    // rgblight_sethsv(127, 255, 100) CYAN

    // 1つ1つのLEDに設定をする場合はこちらの関数
    rgblight_sethsv_at(127, 255, 100, 0);   // 1番目のLEDの設定, CYAN
    rgblight_sethsv_at(0, 255, 100, 1);   // 2番目のLEDの設定, RED
}