// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_number {
    _BASE = 0,
    _FUNC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_ESCAPE,     KC_2, KC_4, KC_6, KC_8,     KC_0,            KC_EQUAL,         KC_NO,
        KC_TAB,        KC_W, KC_R, KC_Y, KC_I,     KC_P,            KC_RIGHT_BRACKET, KC_NO,
        KC_LEFT_CTRL,  KC_S, KC_F, KC_H, KC_K,     KC_SEMICOLON,    KC_ENTER,         KC_BACKSPACE,
        KC_LEFT_SHIFT, KC_X, KC_V, KC_N, KC_COMMA, KC_SLASH,        MO(_FUNC),        KC_SPACE,
        KC_1,          KC_3, KC_5, KC_7, KC_9,     KC_MINUS,        KC_BACKSLASH,     KC_GRAVE,
        KC_Q,          KC_E, KC_T, KC_U, KC_O,     KC_LEFT_BRACKET, KC_NO,            KC_NO,
        KC_A,          KC_D, KC_G, KC_J, KC_L,     KC_QUOTE,        KC_LEFT_GUI,      KC_LEFT_ALT,
        KC_Z,          KC_C, KC_B, KC_M, KC_DOT,   KC_RIGHT_SHIFT,  KC_RIGHT_GUI,     KC_RIGHT_ALT
    ),
    [_FUNC] = LAYOUT(
        KC_ESCAPE,     KC_2, KC_4, KC_6, KC_8,     KC_0,            KC_EQUAL,         KC_NO,
        KC_TAB,        KC_W, KC_R, KC_Y, KC_I,     KC_P,            KC_RIGHT_BRACKET, KC_NO,
        KC_LEFT_CTRL,  KC_S, KC_F, KC_H, KC_K,     KC_SEMICOLON,    KC_ENTER,         KC_BACKSPACE,
        KC_LEFT_SHIFT, KC_X, KC_V, KC_N, KC_COMMA, KC_SLASH,        MO(_FUNC),        KC_SPACE,
        KC_1,          KC_3, KC_5, KC_7, KC_9,     KC_MINUS,        KC_BACKSLASH,     KC_GRAVE,
        KC_Q,          KC_E, KC_T, KC_U, KC_O,     KC_LEFT_BRACKET, KC_NO,            KC_NO,
        KC_A,          KC_D, KC_G, KC_J, KC_L,     KC_QUOTE,        KC_LEFT_GUI,      KC_LEFT_ALT,
        KC_Z,          KC_C, KC_B, KC_M, KC_DOT,   KC_RIGHT_SHIFT,  KC_RIGHT_GUI,     KC_RIGHT_ALT
    )
};
