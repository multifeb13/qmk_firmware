// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include <math.h>

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
	rgblight_sethsv_at( HSV_BLACK, 0);
	rgblight_sethsv_at( HSV_BLACK, 1);
	rgblight_sethsv_at( HSV_BLACK, 2);
	rgblight_sethsv_at( HSV_BLACK, 3);
}

void matrix_scan_user(void) {
    static int counter = 0;
    static int index = 0;
    static int degree = 0;

    if (counter >= 150){
        counter = 0;
        degree++;

        double radian = degree * (M_PI / 180.0);
        double sin_value = sin(radian);
        unsigned int led_v = 128 * sin_value;

        rgblight_sethsv_at(   0, 255, led_v, (index + 0) % 4);  //HSV_RED
        rgblight_sethsv_at( 170, 255, led_v, (index + 1) % 4);  //HSV_BLUE
        rgblight_sethsv_at(  85, 255, led_v, (index + 2) % 4);  //HSV_GREEN
        rgblight_sethsv_at(  30, 255, led_v, (index + 3) % 4);  //HSV_GOLD(Dark)

        if(degree >= 180){
          degree = 0;
          index = (index + 1) % 4;
        }
    }
    counter++;
}