#include QMK_KEYBOARD_H
#include "version.h"


// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ergodox_pretty(
        KC_NO,      KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_NO,              KC_NO,      KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_NO,
        KC_NO,      KC_NO,      KC_W,       KC_E,       KC_R,       KC_T,       KC_NO,              KC_ENT,     KC_Y,       KC_U,       KC_I,       KC_O,       KC_BSLS,    KC_NO,
        KC_TAB,     KC_Q,       KC_S,       KC_D,       KC_F,       KC_G,                                       KC_H,       KC_J,       KC_K,       KC_L,       KC_P,       KC_NO,
        KC_LSFT,    LSFT_T(KC_A),KC_X,      KC_C,       KC_V,       KC_B,       KC_NO,              KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT,     RSFT_T(KC_SCLN),KC_RSFT,
        KC_NO,      KC_Z,       KC_NO,      KC_LGUI,    KC_LALT,                                                            KC_RALT,    KC_RGUI,    KC_NO,      KC_SLSH,    KC_NO,
                                                                    KC_NO,      KC_NO,              KC_NO,      KC_NO,
                                                                                KC_NO,              KC_DEL,
                                                        KC_SPC,     LCTL_T(KC_ENT),KC_NO,           KC_DEL,     LT(2,KC_ESC),LT(1,KC_BSPC)
    ),
	[1] = LAYOUT_ergodox_pretty(
        KC_NO,      KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_NO,              KC_NO,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,
        KC_NO,      KC_EQL,     KC_LPRN,    KC_UNDS,    KC_MINS,    KC_RPRN,    KC_NUHS,            KC_NO,      KC_LBRC,    KC_LCBR,    KC_RCBR,    KC_RBRC,    KC_HASH,    KC_F12,
        KC_TAB,     KC_DLR,     KC_2,       KC_3,       KC_4,       KC_5,                                       KC_6,       KC_7,       KC_8,       KC_9,       KC_CIRC,    KC_NO,
        KC_LSFT,    LSFT_T(KC_1),KC_GRV,    KC_DQUO,    KC_QUOT,    KC_AT,      KC_TILD,            KC_NO,      KC_EXLM,    KC_AMPR,    KC_ASTR,    KC_PLUS,    RSFT_T(KC_0),KC_RSFT,
        KC_NO,      KC_PERC,    KC_NO,      KC_LGUI,    KC_LALT,                                                            KC_NO,      KC_NO,      KC_NO,      KC_PIPE,    KC_NO,
                                                                    KC_NO,      KC_NO,              KC_NO,      KC_NO,
                                                                                KC_NO,              KC_NO,
                                                        KC_SPC,     LCTL_T(KC_ENT),KC_NO,           KC_NO,      KC_TRNS,    KC_TRNS
    ),
	[2] = LAYOUT_ergodox_pretty(
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,              KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_NO,      KC_NO,      RALT(KC_Q), RALT(KC_Y), RALT(KC_P), RALT(KC_S), KC_NO,              KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_NO,      KC_END,     KC_TAB,     KC_ESC,     KC_ENT,     KC_DEL,                                     KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    KC_HOME,    KC_NO,
        KC_LSFT,    KC_LSFT,    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,              KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_RSFT,    KC_RSFT,
        KC_NO,      KC_NO,      KC_NO,      KC_LGUI,    KC_LALT,                                                            KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
                                                                    KC_NO,      KC_NO,              KC_NO,      KC_NO,
                                                                                KC_NO,              KC_NO,
                                                        KC_SPC,     LCTL_T(KC_ENT),KC_NO,           KC_NO,      KC_TRNS,    KC_NO
    )
};
// clang-format on

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
        }
    }
    return true;
}

// Runs just one time when the keyboard initializes.
void keyboard_post_init_user(void) {
};

// Runs whenever there is a layer state change.
//layer_state_t layer_state_set_user(layer_state_t state) {
//    ergodox_board_led_off();
//    ergodox_right_led_1_off();
//    ergodox_right_led_2_off();
//    ergodox_right_led_3_off();
//
//    uint8_t layer = get_highest_layer(state);
//    switch (layer) {
//        case 0:
//            break;
//        case 1:
//            ergodox_right_led_1_on();
//            break;
//        case 2:
//            ergodox_right_led_2_on();
//            break;
//        case 3:
//            ergodox_right_led_3_on();
//            break;
//        case 4:
//            ergodox_right_led_1_on();
//            ergodox_right_led_2_on();
//            break;
//        case 5:
//            ergodox_right_led_1_on();
//            ergodox_right_led_3_on();
//            break;
//        case 6:
//            ergodox_right_led_2_on();
//            ergodox_right_led_3_on();
//            break;
//        case 7:
//            ergodox_right_led_1_on();
//            ergodox_right_led_2_on();
//            ergodox_right_led_3_on();
//            break;
//        default:
//            break;
//    }
//
//    return state;
//};
