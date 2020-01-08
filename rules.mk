# MCU name
MCU = atmega32u4

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = halfkay

# Build Options
#   comment out to disable the options.
#
BOOTMAGIC_ENABLE = no  # Virtual DIP switch configuration(+1000)
MOUSEKEY_ENABLE  = yes # Mouse keys(+4700)
EXTRAKEY_ENABLE  = yes # Audio control and System control(+450)
CONSOLE_ENABLE   = no  # Console for debug(+400)
COMMAND_ENABLE   = yes # Commands for debug and configuration
CUSTOM_MATRIX    = yes # Custom matrix file for the ErgoDox EZ
NKRO_ENABLE      = yes # USB Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work

# Can't use both at the same time
UNICODE_ENABLE = no # Unicode
UNICODEMAP_ENABLE = yes # Unicode MAP

# SWAP_HANDS_ENABLE= yes # Allow swapping hands of keyboard
# SLEEP_LED_ENABLE = no
# API_SYSEX_ENABLE = no
RGBLIGHT_ENABLE  = no
# RGBLIGHT_CUSTOM_DRIVER = yes

# RGB_MATRIX_ENABLE = no # enable later
# DEBOUNCE_TYPE = eager_pr

LAYOUTS = ergodox
