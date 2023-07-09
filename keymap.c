#include QMK_KEYBOARD_H
#include "version.h"


// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ergodox_pretty(
        KC_NO,      KC_MINS,    KC_W,       KC_E,       KC_R,       KC_T,       KC_NO,              KC_NO,      KC_Y,       KC_U,       KC_I,       KC_O,       KC_BSLS,    KC_NO,
        KC_TAB,     KC_Q,       KC_S,       KC_D,       KC_F,       KC_G,       KC_NO,              KC_NO,      KC_H,       KC_J,       KC_K,       KC_L,       KC_P,       KC_NO,
        KC_NO,      KC_A,       KC_Z,       KC_X,       KC_C,       KC_V,                                       KC_N,       KC_M,       KC_COMM,    KC_DOT,     RSFT_T(KC_SCLN),KC_ENT,
        KC_NO,      KC_B,       KC_NO,      KC_LGUI,    KC_LALT,    LCTL_T(KC_SPC),LT(2,KC_ENT),    LT(1,KC_ESC),RSFT_T(KC_BSPC),KC_RALT,KC_RGUI,   KC_NO,      KC_SLSH,    KC_NO,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,                                                              KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
                                                                    KC_NO,      KC_NO,              KC_NO,      KC_NO,
                                                                                KC_NO,              KC_NO,
                                                        KC_NO,     KC_NO,       KC_NO,              KC_NO,      KC_NO,      KC_NO
    ),
	[1] = LAYOUT_ergodox_pretty(
        KC_NO,      KC_AT,      KC_LPRN,    KC_UNDS,    KC_MINS,    KC_RPRN,    KC_NO,              KC_NO,      KC_LBRC,    KC_LCBR,    KC_RCBR,    KC_RBRC,    KC_PERC,    KC_NO,
        KC_TAB,     KC_DLR,     KC_2,       KC_3,       KC_4,       KC_5,       KC_NO,              KC_NO,      KC_6,       KC_7,       KC_8,       KC_9,       KC_CIRC,    KC_NO,
        KC_LSFT,    LSFT_T(KC_1),KC_EQL,    KC_DQUO,    KC_QUOT,    KC_GRV,                                     KC_EXLM,    KC_AMPR,    KC_ASTR,    KC_GT,      KC_0,       KC_RSFT,
        KC_NO,      KC_PLUS,    KC_NO,      KC_LGUI,    KC_LALT,    LCTL_T(KC_SPC),LT(2,KC_ENT),    KC_NO,      KC_NO,      KC_RALT,    KC_RGUI,    KC_NO,      KC_HASH,    KC_NO,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,                                                              KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
                                                                    KC_NO,      KC_NO,              KC_NO,      KC_NO,
                                                                                KC_NO,              KC_NO,
                                                        KC_NO,      KC_NO,      KC_NO,              KC_NO,      KC_NO,      KC_NO
    ),
	[2] = LAYOUT_ergodox_pretty(
        KC_NO,      KC_NO,      RALT(KC_Q), RALT(KC_Y), RALT(KC_P), RALT(KC_S), KC_NO,              KC_NO,      KC_NO,      KC_TAB,     KC_ESC,     KC_ENT,     KC_NO,      KC_NO,
        KC_NO,      KC_END,     KC_NO,      KC_NO,      KC_NO,      KC_DEL,     KC_NO,              KC_NO,      KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    KC_HOME,    KC_NO,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,                                      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_NO,      KC_NO,      KC_NO,      KC_LGUI,    KC_LALT,    KC_NO,      KC_NO,              LT(1,KC_ESC),RSFT_T(KC_BSPC),KC_RALT,KC_RGUI,   KC_NO,      KC_NO,      KC_NO,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,                                                              KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
                                                                    KC_NO,      KC_NO,              KC_NO,      KC_NO,
                                                                                KC_NO,              KC_NO,
                                                        KC_NO,     KC_NO,       KC_NO,              KC_NO,      KC_NO,      KC_NO
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
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RSFT_T(KC_BSPC):
            // Immediately select the hold action when another key is pressed.
            return true;
        case LT(1, KC_ESC):
            // Immediately select the hold action when another key is pressed.
            return true;
        case LT(2, KC_ENT):
            // Immediately select the hold action when another key is pressed.
            return true;
        default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
}

