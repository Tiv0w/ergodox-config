#include QMK_KEYBOARD_H
#include "version.h"

enum unicode_names {
    BANG,
    IRONY,
    SNEK
};

const uint32_t PROGMEM unicode_map[] = {
    [BANG]  = 0x203D,  // ‽
    [IRONY] = 0x2E2E,  // ⸮
    [SNEK]  = 0x1F40D, // 🐍
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ergodox(KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5, LCTL(KC_G), KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, TG(1), LALT_T(KC_APP), KC_A, KC_S, KC_D, KC_F, KC_G, KC_LSFT, LCTL_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_GRV, LT(1,KC_GRV), KC_QUOT, LALT(KC_LSFT), KC_LEFT, KC_RGHT, MEH(KC_O), MEH(KC_P), LCTL(KC_V), KC_SPC, KC_ENT, LCTL(KC_C), KC_CAPS, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, TG(1), KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_H, KC_J, KC_K, KC_L, LT(2,KC_SCLN), LGUI_T(KC_QUOT), KC_RCTL, KC_N, KC_M, KC_COMM, KC_DOT, RCTL_T(KC_SLSH), KC_RSFT, KC_UP, KC_DOWN, KC_LBRC, KC_RBRC, TG(1), RALT_T(KC_DEL), LCTL_T(KC_ESC), KC_LGUI, TG(3), TG(2), KC_BSPC),
	[1] = LAYOUT_ergodox(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRNS, KC_TRNS, KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_PIPE, KC_TRNS, KC_TRNS, KC_HASH, KC_DLR, KC_LPRN, KC_RPRN, KC_GRV, KC_TRNS, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_TRNS, KC_UP, KC_7, KC_8, KC_9, KC_ASTR, KC_F12, KC_DOWN, KC_4, KC_5, KC_6, KC_PLUS, KC_TRNS, KC_TRNS, KC_AMPR, KC_1, KC_2, KC_3, KC_BSLS, KC_TRNS, KC_0, KC_DOT, KC_MINS, KC_EQL, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO),
	[2] = LAYOUT_ergodox(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_U, KC_TRNS, KC_WH_U, KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_ACL0, KC_ACL1, KC_ACL2, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN2, KC_TRNS, KC_TRNS, KC_INS, KC_PSCR, KC_SLCK, KC_PAUS, KC_PGUP, KC_HOME, KC_BRIU, KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_PGDN, KC_END, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_MPLY, KC_BRID, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS, KC_VOLU, KC_VOLD, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_WBAK),
	[3] = LAYOUT_ergodox(KC_NO, KC_NO, KC_NO, ê, KC_NO, KC_NO, KC_NO, KC_NO, â, é, è, €, π, KC_NO, KC_NO, à, æ, ë, ε, α, MO(4), ä, λ, ç, ω, β, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, ß, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, ŷ, û, î, ô, KC_NO, KC_NO, KC_NO, γ, ù, ì, ò, œ, KC_NO, ÿ, ü, ï, ö, ψ, KC_NO, KC_NO, θ, µ, δ, σ, φ, MO(4), «, », KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO),
	[4] = LAYOUT_ergodox(KC_NO, KC_NO, KC_NO, Ê, KC_NO, KC_NO, KC_NO, KC_NO, Â, É, È, £, Π, KC_NO, KC_NO, À, Æ, Ë, E, A, KC_TRNS, Ä, Λ, Ç, Ω, B, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, Ŷ, Û, Î, Ô, KC_NO, KC_NO, KC_NO, Γ, Ù, Ì, Ò, Œ, KC_NO, Ÿ, Ü, Ï, Ö, Ψ, KC_NO, KC_NO, Θ, M, Δ, Σ, Φ, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
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
