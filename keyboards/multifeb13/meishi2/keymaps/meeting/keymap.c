/* Copyright 2019 Biacco42
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
#include QMK_KEYBOARD_H

enum layer_number {
  _TEAMS = 0,
  _ZOOM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_TEAMS] = LAYOUT( /* for Teams */
    //LCTL(KC_Z),  LCTL(KC_X),  LCTL(KC_C), LCTL(KC_V)
    RCS(KC_M),		/* Teams : Toggle mute = Ctrl + Shift + M */
    LCTL(KC_SPC),	/* Teams : Mute off temporary = Ctrl + Space */
    KC_NO,	      /* Nothing */
    MO(_ZOOM)     /* Layer to _ZOOM */
  ),

  [_ZOOM] = LAYOUT( /* for ZOOM */
    //LCTL(KC_Z),  LCTL(KC_X),  LCTL(KC_C), LCTL(KC_V)
    LALT(KC_A),	  /* ZOOM  : Toggle mute = Alt + A */
    KC_SPC,	      /* ZOOM  : Mute off temporary = Space */
    KC_NO,	      /* Nothing */
    KC_NO 	      /* Nothing */
  )
};
