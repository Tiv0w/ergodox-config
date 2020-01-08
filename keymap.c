#include QMK_KEYBOARD_H
#include "version.h"

enum unicodes_names {
    MY_E_HAT,
    MY_A_HAT,
    MY_E_ACUTE,
    MY_E_GRAVE,
    MY_EURO,
    MY_PI,
    MY_A_GRAVE,
    MY_E_IN_A,
    MY_E_TREMA,
    MY_EPSILON,
    MY_ALPHA,
    MY_A_TREMA,
    MY_LAMBDA,
    MY_C_CEDILLA,
    MY_OMEGA,
    MY_BETA,
    MY_ESZETT,
    MY_Y_HAT,
    MY_U_HAT,
    MY_I_HAT,
    MY_O_HAT,
    MY_GAMMA,
    MY_U_GRAVE,
    MY_I_GRAVE,
    MY_O_GRAVE,
    MY_E_IN_O,
    MY_Y_TREMA,
    MY_U_TREMA,
    MY_I_TREMA,
    MY_O_TREMA,
    MY_PSI,
    MY_THETA,
    MY_MU,
    MY_DELTA,
    MY_SIGMA,
    MY_PHI,
    MY_LEFT_GUILLEMET,
    MY_RIGHT_GUILLEMET,
    MY_C_E_HAT,
    MY_C_A_HAT,
    MY_C_E_ACUTE,
    MY_C_E_GRAVE,
    MY_POUND,
    MY_C_PI,
    MY_C_A_GRAVE,
    MY_C_E_IN_A,
    MY_C_E_TREMA,
    MY_C_EPSILON,
    MY_C_ALPHA,
    MY_C_A_TREMA,
    MY_C_LAMBDA,
    MY_C_C_CEDILLA,
    MY_C_OMEGA,
    MY_C_BETA,
    MY_C_ESZETT,
    MY_C_Y_HAT,
    MY_C_U_HAT,
    MY_C_I_HAT,
    MY_C_O_HAT,
    MY_C_GAMMA,
    MY_C_U_GRAVE,
    MY_C_I_GRAVE,
    MY_C_O_GRAVE,
    MY_C_E_IN_O,
    MY_C_Y_TREMA,
    MY_C_U_TREMA,
    MY_C_I_TREMA,
    MY_C_O_TREMA,
    MY_C_PSI,
    MY_C_THETA,
    MY_C_MU,
    MY_C_DELTA,
    MY_C_SIGMA,
    MY_C_PHI
};

const uint32_t PROGMEM unicode_map[] = {
    [MY_E_HAT]           = 0xEA,   // ê
    [MY_A_HAT]           = 0xE2,   // â
    [MY_E_ACUTE]         = 0xE9,   // é
    [MY_E_GRAVE]         = 0xE8,   // è
    [MY_EURO]            = 0x20AC, // €
    [MY_PI]              = 0x3C0,  // π
    [MY_A_GRAVE]         = 0xE0,   // à
    [MY_E_IN_A]          = 0xE6,   // æ
    [MY_E_TREMA]         = 0xEB,   // ë
    [MY_EPSILON]         = 0x3B5,  // ε
    [MY_ALPHA]           = 0x3B1,  // α
    [MY_A_TREMA]         = 0xE4,   // ä
    [MY_LAMBDA]          = 0x3BB,  // λ
    [MY_C_CEDILLA]       = 0xE7,   // ç
    [MY_OMEGA]           = 0x3C9,  // ω
    [MY_BETA]            = 0x3B2,  // β
    [MY_ESZETT]          = 0xDF,   // ß
    [MY_Y_HAT]           = 0x177,  // ŷ
    [MY_U_HAT]           = 0xFB,   // û
    [MY_I_HAT]           = 0xEE,   // î
    [MY_O_HAT]           = 0xF4,   // ô
    [MY_GAMMA]           = 0x3B3,  // γ
    [MY_U_GRAVE]         = 0xF9,   // ù
    [MY_I_GRAVE]         = 0xEC,   // ì
    [MY_O_GRAVE]         = 0xF2,   // ò
    [MY_E_IN_O]          = 0x153,  // œ
    [MY_Y_TREMA]         = 0xFF,   // ÿ
    [MY_U_TREMA]         = 0xFC,   // ü
    [MY_I_TREMA]         = 0xEF,   // ï
    [MY_O_TREMA]         = 0xF6,   // ö
    [MY_PSI]             = 0x3C8,  // ψ
    [MY_THETA]           = 0x3B8,  // θ
    [MY_MU]              = 0xB5,   // µ
    [MY_DELTA]           = 0x3B4,  // δ
    [MY_SIGMA]           = 0x3C3,  // σ
    [MY_PHI]             = 0x3C6,  // φ
    [MY_LEFT_GUILLEMET]  = 0xAB,   // «
    [MY_RIGHT_GUILLEMET] = 0xBB,   // »
    [MY_C_E_HAT]         = 0xCA,   // Ê
    [MY_C_A_HAT]         = 0xC2,   // Â
    [MY_C_E_ACUTE]       = 0xC9,   // É
    [MY_C_E_GRAVE]       = 0xC8,   // È
    [MY_POUND]           = 0xA3,   // £
    [MY_C_PI]            = 0x3A0,  // Π
    [MY_C_A_GRAVE]       = 0xC0,   // À
    [MY_C_E_IN_A]        = 0xC6,   // Æ
    [MY_C_E_TREMA]       = 0xCB,   // Ë
    [MY_C_EPSILON]       = 0x45,   // E
    [MY_C_ALPHA]         = 0x41,   // A
    [MY_C_A_TREMA]       = 0xC4,   // Ä
    [MY_C_LAMBDA]        = 0x39B,  // Λ
    [MY_C_C_CEDILLA]     = 0xC7,   // Ç
    [MY_C_OMEGA]         = 0x3A9,  // Ω
    [MY_C_BETA]          = 0x42,   // B
    [MY_C_ESZETT]        = 0x1E9E, // ẞ
    [MY_C_Y_HAT]         = 0x176,  // Ŷ
    [MY_C_U_HAT]         = 0xDB,   // Û
    [MY_C_I_HAT]         = 0xCE,   // Î
    [MY_C_O_HAT]         = 0xD4,   // Ô
    [MY_C_GAMMA]         = 0x393,  // Γ
    [MY_C_U_GRAVE]       = 0xD9,   // Ù
    [MY_C_I_GRAVE]       = 0xCC,   // Ì
    [MY_C_O_GRAVE]       = 0xD2,   // Ò
    [MY_C_E_IN_O]        = 0x152,  // Œ
    [MY_C_Y_TREMA]       = 0x178,  // Ÿ
    [MY_C_U_TREMA]       = 0xDC,   // Ü
    [MY_C_I_TREMA]       = 0xCF,   // Ï
    [MY_C_O_TREMA]       = 0xD6,   // Ö
    [MY_C_PSI]           = 0x3A8,  // Ψ
    [MY_C_THETA]         = 0x398,  // Θ
    [MY_C_MU]            = 0x4D,   // M
    [MY_C_DELTA]         = 0x394,  // Δ
    [MY_C_SIGMA]         = 0x3A3,  // Σ
    [MY_C_PHI]           = 0x3A6,  // Φ
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ergodox(KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5, LCTL(KC_G), KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, TG(1), LALT_T(KC_APP), KC_A, KC_S, KC_D, KC_F, KC_G, KC_LSFT, LCTL_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_RCTL, LT(1,KC_GRV), KC_QUOT, LALT(KC_LSFT), KC_LEFT, KC_RGHT, LCTL(LSFT(KC_C)), LCTL(LSFT(KC_V)), LCTL(KC_V), KC_SPC, KC_ENT, LCTL(KC_C), KC_CAPS, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, TG(1), KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_H, KC_J, KC_K, KC_L, LT(2,KC_SCLN), LGUI_T(KC_QUOT), KC_RALT, KC_N, KC_M, KC_COMM, KC_DOT, RCTL_T(KC_SLSH), KC_RSFT, KC_UP, KC_DOWN, KC_LBRC, KC_RBRC, TG(1), RALT_T(KC_DEL), LCTL_T(KC_ESC), KC_LGUI, TG(3), TG(2), KC_BSPC),
	[1] = LAYOUT_ergodox(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRNS, KC_TRNS, KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_PIPE, KC_TRNS, KC_TRNS, KC_HASH, KC_DLR, KC_LPRN, KC_RPRN, KC_GRV, KC_TRNS, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_TRNS, KC_UP, KC_7, KC_8, KC_9, KC_ASTR, KC_F12, KC_DOWN, KC_4, KC_5, KC_6, KC_PLUS, KC_TRNS, KC_TRNS, KC_AMPR, KC_1, KC_2, KC_3, KC_BSLS, KC_TRNS, KC_0, KC_DOT, KC_MINS, KC_EQL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_ergodox(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_U, KC_TRNS, KC_WH_U, KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_ACL0, KC_ACL1, KC_ACL2, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN2, KC_TRNS, KC_TRNS, KC_INS, KC_PSCR, KC_SLCK, KC_PAUS, KC_PGUP, KC_HOME, KC_BRIU, KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_PGDN, KC_END, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_MPLY, KC_BRID, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS, KC_VOLU, KC_VOLD, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT_ergodox(KC_NO, KC_NO, KC_NO, XP(MY_E_HAT, MY_C_E_HAT), KC_NO, KC_NO, KC_NO, KC_NO, XP(MY_A_HAT, MY_C_A_HAT), XP(MY_E_ACUTE, MY_C_E_ACUTE), XP(MY_E_GRAVE, MY_C_E_GRAVE), XP(MY_EURO, MY_POUND), XP(MY_PI, MY_C_PI), KC_NO, KC_TRNS, XP(MY_A_GRAVE, MY_C_A_GRAVE), XP(MY_E_IN_A, MY_C_E_IN_A), XP(MY_E_TREMA, MY_C_E_TREMA), XP(MY_EPSILON, MY_C_EPSILON), XP(MY_ALPHA, MY_C_ALPHA), KC_TRNS, XP(MY_A_TREMA, MY_C_A_TREMA), XP(MY_LAMBDA, MY_C_LAMBDA), XP(MY_C_CEDILLA, MY_C_C_CEDILLA), XP(MY_OMEGA, MY_C_OMEGA), XP(MY_BETA, MY_C_BETA), KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, XP(MY_ESZETT, MY_C_ESZETT), KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, KC_ENT, KC_TRNS, KC_NO, XP(MY_Y_HAT, MY_C_Y_HAT), XP(MY_U_HAT, MY_C_U_HAT), XP(MY_I_HAT, MY_C_I_HAT), XP(MY_O_HAT, MY_C_O_HAT), KC_NO, KC_NO, KC_NO, XP(MY_GAMMA, MY_C_GAMMA), XP(MY_U_GRAVE, MY_C_U_GRAVE), XP(MY_I_GRAVE, MY_C_I_GRAVE), XP(MY_O_GRAVE, MY_C_O_GRAVE), XP(MY_E_IN_O, MY_C_E_IN_O), KC_NO, XP(MY_Y_TREMA, MY_C_Y_TREMA), XP(MY_U_TREMA, MY_C_U_TREMA), XP(MY_I_TREMA, MY_C_I_TREMA), XP(MY_O_TREMA, MY_C_O_TREMA), XP(MY_PSI, MY_C_PSI), KC_NO, KC_NO, XP(MY_THETA, MY_C_THETA), XP(MY_MU, MY_C_MU), XP(MY_DELTA, MY_C_DELTA), XP(MY_SIGMA, MY_C_SIGMA), XP(MY_PHI, MY_C_PHI), KC_TRNS, X(MY_LEFT_GUILLEMET), X(MY_RIGHT_GUILLEMET), KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LCTL(LSFT(KC_U)), KC_TRNS)
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


/* void eeconfig_init_user(void) { */
/*     set_unicode_input_mode(UC_LNX); */
/*     // */
/*     // This is operating system specific. */
/*     // */
/*     //   UC_OSX: MacOS Unicode Hex Input support. Works only up to 0xFFFF. */
/*     //   Disabled by default.      To enable: go to System Preferences -> */
/*     //   Keyboard -> Input Sources, and enable Unicode Hex. */
/*     // */
/*     //   UC_OSX_RALT: Same as UC_OSX, but sends the Right Alt key for unicode */
/*     //   input */
/*     // */
/*     //   UC_LNX: Unicode input method under Linux. Works up to 0xFFFFF. */
/*     //   Should work almost anywhere on ibus enabled distros. Without ibus, */
/*     //   this works under GTK apps, but rarely anywhere else. */
/*     // */
/*     //   UC_WIN: (not recommended) Windows built-in Unicode input. To enable: */
/*     //   create registry key under */
/*     //   HKEY_CURRENT_USER\Control Panel\Input Method\EnableHexNumpad of type */
/*     //   REG_SZ called EnableHexNumpad, set its value to 1, and reboot. This */
/*     //   method is not recommended because of reliability and compatibility */
/*     //   issue, use WinCompose method below instead. */
/*     //   UC_WINC: Windows Unicode input using WinCompose. Requires WinCompose. */
/*     //   Works reliably under many (all?) variations of Windows */
/* } */
