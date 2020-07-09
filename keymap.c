#include QMK_KEYBOARD_H
#include "version.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


    /*
     * ,--------------------------------------------------.    ,--------------------------------------------------.
     * |    0   |   1  |   2  |   3  |   4  |   5  |  6   |    |  38  |  39  |  40  |  41  |  42  |  43  |   44   |
     * |--------+------+------+------+------+------+------|    |------+------+------+------+------+------+--------|
     * |    7   |   8  |   9  |  10  |  11  |  12  |  13  |    |  45  |  46  |  47  |  48  |  49  |  50  |   51   |
     * |--------+------+------+------+------+------|      |    |      |------+------+------+------+------+--------|
     * |   14   |  15  |  16  |  17  |  18  |  19  |------|    |------|  52  |  53  |  54  |  55  |  56  |   57   |
     * |--------+------+------+------+------+------|  26  |    |  58  |------+------+------+------+------+--------|
     * |   20   |  21  |  22  |  23  |  24  |  25  |      |    |      |  59  |  60  |  61  |  62  |  63  |   64   |
     * `--------+------+------+------+------+-------------'    `-------------+------+------+------+------+--------'
     *   |  27  |  28  |  29  |  30  |  31  |                                |  65  |  66  |  67  |  68  |  69  |
     *   `----------------------------------'                                `----------------------------------'
     *                                       ,-------------.  ,-------------.
     *                                       |  32  |  33  |  |  70  |  71  |
     *                                ,------+------+------|  |------+------+------.
     *                                |      |      |  34  |  |  72  |      |      |
     *                                |  35  |  36  |------|  |------|  74  |  75  |
     *                                |      |      |  37  |  |  73  |      |      |
     *                                `--------------------'  `--------------------'
     */

[0] = LAYOUT_ergodox_pretty(
      KC_EQL,         KC_1,    KC_2,    KC_3,    KC_4,   KC_5, LCTL(KC_G),      KC_CAPS, KC_6          , KC_7   , KC_8   , KC_9   , KC_0           , KC_MINS        ,
      KC_TAB,         KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,      TG(1),      TG(1)  , KC_Y          , KC_U   , KC_I   , KC_O   , KC_P           , KC_BSLS        ,
      KC_APP,         KC_A,    KC_S,    KC_D,    KC_F,   KC_G,                           KC_H          , KC_J   , KC_K   , KC_L   , LT(2,KC_SCLN)  , LGUI_T(KC_QUOT),
     KC_LSFT, LCTL_T(KC_Z),    KC_X,    KC_C,    KC_V,   KC_B,    KC_LCTL,      KC_RCTL, KC_N          , KC_M   , KC_COMM, KC_DOT , RCTL_T(KC_SLSH), KC_RSFT        ,
LT(1,KC_GRV),      KC_LALT, KC_LGUI, KC_LEFT, KC_RGHT,                                                   KC_UP  , KC_DOWN, KC_LBRC, KC_RBRC        , TG(1)          ,

                                       LCTL(LSFT(KC_C)), LCTL(LSFT(KC_V)),      KC_DEL , LCTL_T(KC_ESC),
                                                               LCTL(KC_V),      KC_LGUI,
                                               KC_SPC, KC_ENT, LCTL(KC_C),      TG(2)  , KC_RALT       , KC_BSPC
),

[1] = LAYOUT_ergodox_pretty(
_______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, _______,      _______, KC_F6  , KC_F7  , KC_F8 , KC_F9 , KC_F10 , KC_F11 ,
_______, KC_EXLM,   KC_AT, KC_LCBR, KC_RCBR, KC_PIPE, _______,      _______, KC_UP  , KC_7   , KC_8  , KC_9  , KC_BSLS, KC_F12 ,
_______, KC_HASH,  KC_DLR, KC_LPRN, KC_RPRN,  KC_GRV,                        KC_DOWN, KC_4   , KC_5  , KC_6  , KC_ASTR, _______,
_______, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, _______,      _______, KC_AMPR, KC_1   , KC_2  , KC_3  , KC_MINS, _______,
_______, _______, _______, _______, _______,                                          KC_0   , KC_DOT, KC_EQL, KC_PLUS, _______,

                                             _______, _______,      _______, _______,
                                                      _______,      _______,
                                    _______, _______, _______,      _______, _______, _______
),

[2] = LAYOUT_ergodox_pretty(
_______, _______, _______, _______, _______, _______, _______,      _______, KC_INS , KC_PSCR, KC_SLCK, KC_PAUS, KC_PGUP, KC_HOME,
_______, _______, _______, KC_MS_U, _______, KC_WH_U, _______,      KC_BRIU, _______, _______, KC_UP  , _______, KC_PGDN, KC_END ,
_______, _______, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D,                        _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, KC_MPLY,
_______, _______, _______, _______, _______, _______, _______,      KC_BRID, _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______,
_______, _______, KC_ACL2, KC_ACL1, KC_ACL0,                                          KC_VOLU, KC_VOLD, KC_MUTE, _______, _______,

                                             _______, _______,      _______, _______,
                                                      _______,      _______,
                                    KC_BTN1, KC_BTN2, _______,      _______, _______, _______
)
};



uint32_t layer_state_set_user(uint32_t state) {
  uint8_t layer = biton32(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
}
