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
        KC_1, KC_2
    )
};

void matrix_init_user(void) {
	rgblight_setrgb_at( 25,   0,   0, 0);
	rgblight_setrgb_at(  0,  25,   0, 1);
	rgblight_setrgb_at(  0,   0,  25, 2);
	rgblight_setrgb_at( 48,  33,   2, 3);
}

void matrix_scan_user(void) {
    static int counter = 0;
    static int index = 0;

    counter++;

    if (counter > 10000) {
        counter = 0;
        index++;

        rgblight_setrgb_at( 25,   0,   0, (index + 0) % 4);
        rgblight_setrgb_at(  0,  25,   0, (index + 1) % 4);
        rgblight_setrgb_at(  0,   0,  25, (index + 2) % 4);
        rgblight_setrgb_at( 48,  33,   2, (index + 3) % 4);

    }
}