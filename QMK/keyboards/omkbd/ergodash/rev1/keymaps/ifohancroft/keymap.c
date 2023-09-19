#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Default Layer
    * *---------+---------+---------+---------+---------+---------+---------+-----------------------------+---------+---------+---------+---------+---------+---------+---------*
    * | `       | 1       | 2       | 3       | 4       | 5       | -       |                             | =       | 6       | 7       | 8       | 9       | 0       | Del     |
    * |---------+---------+---------+---------+---------+---------+---------+-----------------------------+---------+---------+---------+---------+---------+---------+---------|
    * | Tab     | Q       | W       | E       | R       | T       | [       |                             | ]       | Y       | U       | I       | O       | P       | \       |
    * |---------+---------+---------+---------+---------+---------+---------+-----------------------------+---------+---------+---------+---------+---------+---------+---------|
    * | ESC     | A       | S       | D       | F       | G       | "       |                             | "       | H       | J       | K       | L       | ;       | Enter   |
    * |---------+---------+---------+---------+---------+---------+---------+-----------------------------+---------+---------+---------+---------+---------+---------+---------|
    * | Shift   | Z       | X       | C       | V       | B       |         |                             |         | N       | M       | ,       | .       | /       | Shift   |
    * |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
    * | Ctrl    | Super   | Alt     | MO(2)   |         | MO(1)   | Bkspc   | Space   |         | Space   | Bkspc   | MO(1)   |         | Left    | Down    | Up      | Right   |
    * *---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------*
    */
    LAYOUT_3key_2us(
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_MINS,                                KC_EQL,   KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_DEL,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_LBRC,                                KC_RBRC,  KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSLS,
        KC_ESC,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_QUOT,                                KC_QUOT,  KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_ENT,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                                                       KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
        KC_LCTL,  KC_LGUI,  KC_LALT,  MO(2),              MO(1),    KC_BSPC,  KC_SPC,             KC_SPC,   KC_BSPC,  MO(1),              KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT
    ),

    /* Function Layer
    * *---------+---------+---------+---------+---------+---------+---------+-----------------------------+---------+---------+---------+---------+---------+---------+---------*
    * |         | F1      | F2      | F3      | F4      | F5      | F6      |                             | F7      | F8      | F9      | F10     | F11     | F12     |         |
    * |---------+---------+---------+---------+---------+---------+---------+-----------------------------+---------+---------+---------+---------+---------+---------+---------|
    * |         |         |         |         |         |         |         |                             |         |         |         |         |         |         |         |
    * |---------+---------+---------+---------+---------+---------+---------+-----------------------------+---------+---------+---------+---------+---------+---------+---------|
    * |         |         |         |         |         |         |         |                             |         |         |         |         |         |         |         |
    * |---------+---------+---------+---------+---------+---------+---------+-----------------------------+---------+---------+---------+---------+---------+---------+---------|
    * |         |         |         |         |         |         |         |                             |         |         |         |         |         |         |         |
    * |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
    * |         |         |         |         |         |         |         |         |         |         |         |         |         |         |         |         |         |
    * *---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------*
    */
    LAYOUT_3key_2us(
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,                                  KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,                                                    _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,            _______,  _______,  _______,            _______,  _______,  _______,            _______,  _______,  _______,  _______
    ),

    /* Empty Layer */
    LAYOUT_3key_2us(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,                                                    _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,            _______,  _______,  _______,            _______,  _______,  _______,            _______,  _______,  _______,  _______
    ),

    /* Empty Layer */
    LAYOUT_3key_2us(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,                                                    _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,            _______,  _______,  _______,            _______,  _______,  _______,            _______,  _______,  _______,  _______
    )
};
