// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┐
     * │ 1 │ 2 │ 
     * ├───┼───┤
     * │ 3 │ 4 │
     * ├───┼───┤
     * │ 5 │ 6 │
     * ├───┼───┼
     */
    [0] = LAYOUT(
        QK_MIDI_NOTE_C_1,   QK_MIDI_NOTE_D_1,
        QK_MIDI_NOTE_E_1,   QK_MIDI_NOTE_F_1,
        QK_MIDI_NOTE_G_1,   QK_MIDI_NOTE_A_1
    ),
};