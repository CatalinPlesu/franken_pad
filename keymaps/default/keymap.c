#include QMK_KEYBOARD_H
#include "print.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        uprintf("Key pressed: %u at [%u,%u]\n", keycode, record->event.key.row, record->event.key.col);
    } else {
        uprintf("Key released: %u at [%u,%u]\n", keycode, record->event.key.row, record->event.key.col);
    }
    return true;
}

void keyboard_post_init_user(void) {
    debug_enable = true;
    debug_matrix = true;
}
