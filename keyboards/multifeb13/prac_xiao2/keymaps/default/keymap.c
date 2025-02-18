// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_number {
    _BASE = 0,
    _LAYER1,    // Fn key
    _LAYER2,    // Center key
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_TAB,         KC_Q,        KC_W,        KC_E,           KC_R,         KC_T,     KC_Y,         KC_U,           KC_I,        KC_O,        KC_P,           KC_GRAVE,
        KC_LEFT_CTRL,   KC_A,        KC_S,        KC_D,           KC_F,         KC_G,     KC_H,         KC_J,           KC_K,        KC_L,        KC_SEMICOLON,   KC_ENTER,
        KC_LEFT_SHIFT,  KC_Z,        KC_X,        KC_C,           KC_V,         KC_B,     KC_N,         KC_M,           KC_COMMA,    KC_DOT,      KC_RIGHT_SHIFT, KC_NO,
        KC_NO,          KC_LEFT_ALT, KC_LEFT_GUI, KC_SPACE,       MO(_LAYER2),  KC_SPACE, KC_LEFT_ALT,  KC_DOWN,        KC_UP,       MO(_LAYER1), KC_BACKSPACE
    ),
    [_LAYER1] = LAYOUT(
        KC_ESC,         KC_F1,       KC_F2,       KC_F3,          KC_F4,        KC_F5,    KC_F6,        KC_F7,           KC_F8,          KC_F9,       KC_F10,         KC_F11,
        KC_LEFT_CTRL,   KC_A,        KC_S,        KC_D,           KC_F,         KC_G,     KC_H,         KC_PRINT_SCREEN, KC_SCROLL_LOCK, KC_PAUSE,    KC_UP,          KC_DELETE,
        KC_LEFT_SHIFT,  KC_Z,        KC_X,        KC_C,           KC_V,         KC_B,     KC_N,         KC_HOME,         KC_PAGE_UP,     KC_LEFT,     KC_RIGHT,       KC_INSERT,
        KC_NO,          KC_LEFT_ALT, KC_LEFT_GUI, KC_SPACE,       KC_NO,        KC_END,   KC_PAGE_DOWN, KC_DOWN,         KC_NO,          KC_NO,       KC_F12
    ),
    [_LAYER2] = LAYOUT(
        KC_ESC,         KC_1,        KC_2,        KC_3,           KC_4,         KC_5,     KC_6,         KC_7,            KC_8,           KC_9,        KC_0,           KC_NO,
        KC_LEFT_CTRL,   KC_A,        KC_S,        KC_D,           KC_F,         KC_G,     KC_H,         KC_PRINT_SCREEN, KC_SCROLL_LOCK, KC_PAUSE,    KC_UP,          KC_DELETE,
        KC_LEFT_SHIFT,  KC_Z,        KC_X,        KC_C,           KC_V,         KC_B,     KC_N,         KC_HOME,         KC_PAGE_UP,     KC_LEFT,     KC_RIGHT,       KC_INSERT,
        KC_NO,          KC_LEFT_ALT, KC_LEFT_GUI, KC_SPACE,       KC_NO,        KC_END,   KC_PAGE_DOWN, KC_DOWN,         KC_NO,          KC_NO,       KC_NO
    )

};
