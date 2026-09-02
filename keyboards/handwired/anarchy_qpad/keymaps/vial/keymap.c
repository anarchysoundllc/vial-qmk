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
        MI_C1,   MI_D1,
        MI_E1,   MI_F1,
        MI_G1,   MI_A1
    ),
};