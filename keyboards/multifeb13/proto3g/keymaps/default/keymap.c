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
	rgblight_sethsv_at(   0, 255, 255, 0);  //HSV_RED
	rgblight_sethsv_at( 170, 255, 255, 1);  //HSV_BLUE
	rgblight_sethsv_at(  85, 255, 255, 2);  //HSV_GREEN
	rgblight_sethsv_at(  43, 255, 255, 3);  //HSV_YELLOW
}

void matrix_scan_user(void) {
    static int counter = 0;
    static int index = 0;

    counter++;

    if (counter > 10000) {
        counter = 0;
        index++;

        rgblight_sethsv_at(   0, 255, 255, (index + 0) % 4);
        rgblight_sethsv_at( 170, 255, 255, (index + 1) % 4);
        rgblight_sethsv_at(  85, 255, 255, (index + 2) % 4);
        rgblight_sethsv_at(  43, 255, 255, (index + 3) % 4);
    }
}