// qmk compile command: qmk compile -kb gmmk/pro -km gmmkjake

/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

enum layers {
    _QWERTY = 0,
    _TARMAK1 = 1,
    _TARMAK2 = 2,
    _TARMAK3 = 3,
    _TARMAK4 = 4,
    _COLEMAK = 5,
    _FUNC = 6,
};

enum keycodes {
  KC_CYCLE_LAYERS = QK_USER,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//      ESC      F1       F2       F3       F4       F5       F6       F7       F8       F9       F10      F11      F12	     Prt           Rotary(Mute)
//      ~        1        2        3        4        5        6        7        8        9        0         -       (=)	     BackSpc           Del
//      Tab      Q        W        E        R        T        Y        U        I        O        P        [        ]        \                 PgUp
//      Caps     A        S        D        F        G        H        J        K        L        ;        "                 Enter             PgDn
//      Sh_L              Z        X        C        V        B        N        M        ,        .        ?                 Sh_R     Up       End
//      Ct_L     Win_L    Alt_L                               SPACE                               Alt_R    FN       Ct_R     Left     Down     Right


    // The FN key by default maps to a momentary toggle to layer 1 to provide access to the RESET key (to put the board into bootloader mode). Without
    // this mapping, you have to open the case to hit the button on the bottom of the PCB (near the USB cable attachment) while plugging in the USB
    // cable to get the board into bootloader mode - definitely not fun when you're working on your QMK builds. Remove this and put it back to KC_RGUI 
    // if that's your preference.
    //
    // To put the keyboard in bootloader mode, use FN+backslash. If you accidentally put it into bootloader, you can just unplug the USB cable and
    // it'll be back to normal when you plug it back in.
    //
    // This keyboard defaults to 6KRO instead of NKRO for compatibility reasons (some KVMs and BIOSes are incompatible with NKRO).
    // Since this is, among other things, a "gaming" keyboard, a key combination to enable NKRO on the fly is provided for convenience.
    // Press Fn+N to toggle between 6KRO and NKRO. This setting is persisted to the EEPROM and thus persists between restarts.
    [_QWERTY] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,          KC_MPLY,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_PGDN,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   TG(_TARMAK1),
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(_FUNC),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_TARMAK1] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,          KC_MPLY,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_J,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_N,    KC_E,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_PGDN,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   _______,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(_FUNC),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_TARMAK2] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,          KC_MPLY,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_R,    KC_J,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_T,    KC_G,    KC_H,    KC_N,    KC_E,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_PGDN,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   _______,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(_FUNC),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_TARMAK3] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,          KC_MPLY,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_J,    KC_B,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
        KC_CAPS, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    KC_H,    KC_N,    KC_E,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_PGDN,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_D,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   _______,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(_FUNC),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_TARMAK4] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,          KC_MPLY,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_U,    KC_I,    KC_Y,    KC_SCLN,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
        KC_CAPS, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    KC_H,    KC_N,    KC_E,    KC_L,    KC_O, KC_QUOT,          KC_ENT,           KC_PGDN,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_D,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   _______,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(_FUNC),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_COLEMAK] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,          KC_MPLY,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
        KC_CAPS, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,          KC_ENT,           KC_PGDN,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_D,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   _______,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(_FUNC),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_FUNC] = LAYOUT(
        _______, KC_MYCM, KC_WHOM, KC_CALC, KC_MSEL, KC_MPRV, KC_MNXT, KC_MPLY, KC_MSTP, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______,          KC_MUTE,
        _______, RGB_TOG, RGB_MODE_PLAIN, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          RGB_MOD,
        _______, _______, RGB_VAI, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,            RGB_RMOD,
        _______, _______, RGB_VAD, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,
        _______,          _______, RGB_HUI, RGB_HUD, _______, _______, NK_ON, _______, _______, _______, _______,          _______, KC_VOLU, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, KC_MPRV, KC_VOLD, KC_MNXT
    )


};

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   switch (keycode) {
//     case KC_CYCLE_LAYERS:
//       if (record->event.pressed) {
//         if (layer_state_is(_QWERTY)) {
//           layer_off(_QWERTY);
//           layer_on(_COLEMAK);
//         } else if (layer_state_is(_COLEMAK)) {
//           layer_off(_COLEMAK);
//           layer_on(_QWERTY);
//         }
//       }
//       return false;
//     default:
//       return true;
//   }
//   return true;
// }

// OLD encoder
// bool encoder_update_user(uint8_t index, bool clockwise) {
//   if (get_mods() & MOD_MASK_CTRL) {  // If a CTRL is being held
//             uint8_t mod_state = get_mods();// Store which mods are held
//             del_mods(MOD_MASK_CTRL);       // Ignore all CTRL keys
//             if (clockwise) {
//                 tap_code16(KC_DOWN);       // TAB DOWN
//             } else {
//                 tap_code16(KC_UP);         // TAB UP
//             }
//             set_mods(mod_state);           // Add back CTRL key(s)

//         } else {                     // If no CTRL is held
//             if (clockwise) {
//                 tap_code16(C(KC_RGHT));   // TAB RIGHT
//             } else {
//                 tap_code16(C(KC_LEFT));   // TAB LEFT
//             }
//         }
//     return true;
// }
// RGB LED layout

// led number, function of the key

//  67, Side led 01    0, ESC      6, F1       12, F2       18, F3       23, F4       28, F5       34, F6       39, F7       44, F8       50, F9       56, F10      61, F11      66, F12      69, Prt       Rotary(Mute)   68, Side led 12
//  70, Side led 02    1, ~        7, 1        13, 2        19, 3        24, 4        29, 5        35, 6        40, 7        45, 8        51, 9        57, 0        62, -_       78, (=+)     85, BackSpc   72, Del        71, Side led 13
//  73, Side led 03    2, Tab      8, Q        14, W        20. E        25, R        30, T        36, Y        41, U        46, I        52, O        58, P        63, [{       89, ]}       93, \|        75, PgUp       74, Side led 14
//  76, Side led 04    3, Caps     9, A        15, S        21, D        26, F        31, G        37, H        42, J        47, K        53, L        59, ;:       64, '"                    96, Enter     86, PgDn       77, Side led 15
//  80, Side led 05    4, Sh_L     10, Z       16, X        22, C        27, V        32, B        38, N        43, M        48, ,<       54, .<       60, /?                    90, Sh_R     94, Up        82, End        81, Side led 16
//  83, Side led 06    5, Ct_L     11,Win_L    17, Alt_L                              33, SPACE                              49, Alt_R    55, FN                    65, Ct_R     95, Left     97, Down      79, Right      84, Side led 17
//  87, Side led 07                                                                                                                                                                                                        88, Side led 18
//  91, Side led 08 

void set_solid_color(uint8_t r, uint8_t g, uint8_t b) {
    uint8_t led_min = 0;
    uint8_t led_max = 92;
    for (uint8_t i = led_min; i <= led_max; i++) {
        RGB_MATRIX_INDICATOR_SET_COLOR(i, r, g, b);
    }
}

// bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
//     if (host_keyboard_led_state().caps_lock) {
//       RGB_MATRIX_INDICATOR_SET_COLOR(3, 255, 255, 255); //capslock key
//       RGB_MATRIX_INDICATOR_SET_COLOR(67, 255, 255, 255); //side led 01
//       RGB_MATRIX_INDICATOR_SET_COLOR(68, 255, 255, 255); //side led 03
//       RGB_MATRIX_INDICATOR_SET_COLOR(70, 255, 255, 255); //side led 02
//       RGB_MATRIX_INDICATOR_SET_COLOR(71, 255, 255, 255); //side led 04
//       RGB_MATRIX_INDICATOR_SET_COLOR(73, 255, 255, 255); //side led 03
//       RGB_MATRIX_INDICATOR_SET_COLOR(74, 255, 255, 255); //side led 04
//       RGB_MATRIX_INDICATOR_SET_COLOR(76, 255, 255, 255); //side led 04
//       RGB_MATRIX_INDICATOR_SET_COLOR(77, 255, 255, 255); //side led 05
//       RGB_MATRIX_INDICATOR_SET_COLOR(80, 255, 255, 255); //side led 05
//       RGB_MATRIX_INDICATOR_SET_COLOR(81, 255, 255, 255); //side led 06
//       RGB_MATRIX_INDICATOR_SET_COLOR(83, 255, 255, 255); //side led 06
//       RGB_MATRIX_INDICATOR_SET_COLOR(84, 255, 255, 255); //side led 07
// 	  RGB_MATRIX_INDICATOR_SET_COLOR(87, 255, 255, 255); //side led 07
//       RGB_MATRIX_INDICATOR_SET_COLOR(88, 255, 255, 255); //side led 07
//       RGB_MATRIX_INDICATOR_SET_COLOR(91, 255, 255, 255); //side led 08
//       RGB_MATRIX_INDICATOR_SET_COLOR(92, 255, 255, 255); //side led 09
//     }

//     // if (IS_HOST_LED_ON(USB_LED_SCROLL_LOCK)) {
// 	  //   RGB_MATRIX_INDICATOR_SET_COLOR(index, R, G, B); 
//     // }   
//     // if (!IS_HOST_LED_ON(USB_LED_NUM_LOCK)) {   // on if NUM lock is OFF
//     //   RGB_MATRIX_INDICATOR_SET_COLOR(index, R, G, B);
//     // }
//     return true;
// }
#define _QWERTY_COLOR_RGB 255, 0, 255
#define _FUNC_COLOR_RGB 0, 10, 255
#define _COLEMAK_COLOR_RGB 0, 255, 255
#define _CAPS_COLOR_RGB 255, 255, 255
bool rgb_matrix_indicators_user(void) {
    if (IS_LAYER_ON(_QWERTY)) {
        rgb_matrix_set_color_all(_QWERTY_COLOR_RGB);
    }
    if (IS_LAYER_ON(_FUNC)) {
        rgb_matrix_set_color_all(_FUNC_COLOR_RGB);
    }
    if (IS_LAYER_ON(_COLEMAK) || IS_LAYER_ON(_TARMAK1) || IS_LAYER_ON(_TARMAK2) || IS_LAYER_ON(_TARMAK3) || IS_LAYER_ON(_TARMAK4)){
        rgb_matrix_set_color_all(_COLEMAK_COLOR_RGB);
    }

    if (host_keyboard_led_state().caps_lock) {
        for (uint8_t i = 0; i < RGB_MATRIX_LED_COUNT; ++i) {
            if (HAS_ANY_FLAGS(g_led_config.flags[i], LED_FLAG_UNDERGLOW)) {
                rgb_matrix_set_color(i, _CAPS_COLOR_RGB);
            }
        }
    }
    return false;
}
void suspend_power_down_user(void) {
    rgb_matrix_set_suspend_state(true);
}

void suspend_wakeup_init_user(void) {
    rgb_matrix_set_suspend_state(false);
}
