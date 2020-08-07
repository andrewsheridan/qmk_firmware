#include QMK_KEYBOARD_H

/*
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT(KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
        KC_DEL, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
        KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        LSFT_T(KC_LBRC), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_ESC, LT(3,KC_MPLY), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_RBRC),
        LALT_T(KC_GRV), LCTL_T(KC_BSPC), LSFT_T(KC_BSPC), LT(2,KC_ENT), LT(1,KC_SPC), KC_LGUI),

        [1] = LAYOUT(KC_TILD, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
        KC_NO, KC_NO, LCTL(LGUI(KC_LEFT)), LGUI(KC_UP), LCTL(LGUI(KC_RIGHT)), KC_NO, KC_NO, KC_PGUP, KC_UP, KC_PGDN, KC_NO, KC_F12,
        KC_NO, KC_NO, LGUI(KC_LEFT), LGUI(KC_DOWN), LGUI(KC_RGHT), KC_NO, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LCTL(KC_LEFT), KC_NO, LCTL(KC_RGHT), KC_NO, KC_NO, KC_TRNS, KC_TRNS LCTL(KC_BSPC), KC_TRNS, KC_TRNS, KC_TRNS

[2] = LAYOUT(BL_TOGG, RGB_HUD, RGB_HUI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RESET, KC_NO, KC_NO, KC_BTN4, KC_MS_U, KC_BTN5, KC_NO, KC_NO, KC_BTN4, KC_WH_U, KC_BTN5, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO, KC_WH_L, KC_WH_D, KC_WH_R, KC_RSFT, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_RCTL, KC_TRNS, KC_BTN3, KC_MS_L, KC_MS_R, KC_TRNS, KC_TRNS, KC_TRNS

        [3] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MPRV, KC_VOLU, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MRWD, KC_VOLD, KC_MFFD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MUTE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
};
*/

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────────────┬────────────────┬────────────────┬────────────────┬────────────────┬────────────────┐                                          ┌────────────────┬────────────────┬────────────────┬────────────────┬────────────────┬────────────────┐
     KC_EQL,          KC_1,            KC_2,             KC_3,            KC_4,            KC_5,                                                      KC_6,            KC_7,            KC_8,            KC_9,            KC_0,            KC_MINS,
  //├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┤                                          ├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┤
     KC_DEL,          KC_Q,            KC_W,             KC_E,            KC_R,            KC_T,                                                      KC_Y,            KC_U,            KC_I,            KC_O,            KC_P,            KC_BSLS,
  //├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┤                                          ├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┤
     KC_TAB,          KC_A,            KC_S,             KC_D,            KC_F,            KC_G,                                                      KC_H,            KC_J,            KC_K,            KC_L,            KC_SCLN,         KC_QUOT,
  //├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┐        ┌────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┤
     LSFT_T(KC_LBRC), KC_Z,            KC_X,             KC_C,            KC_V,            KC_B,           KC_ESC,                   LT(3,KC_MPLY),   KC_N,            KC_M,            KC_COMM,         KC_DOT,          KC_SLSH,         RSFT_T(KC_RBRC),
  //└────────────────┴────────────────┴────────────────┴────────────────┼────────────────┼────────────────┼────────────────┤        ├────────────────┼────────────────┼────────────────┼────────────────┴────────────────┴────────────────┴────────────────┘
                                                                          LALT_T(KC_GRV), KC_LCTRL,            LSFT_T(KC_BSPC),          LT(2,KC_ENT),    LT(1,KC_SPC),    KC_LGUI
                                                                     // └────────────────┴────────────────┴────────────────┘        └────────────────┴────────────────┴────────────────┘
  ),

  /*
  [1] = LAYOUT(KC_TILD, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
        KC_NO, KC_NO, LCTL(LGUI(KC_LEFT)), LGUI(KC_UP), LCTL(LGUI(KC_RIGHT)), KC_NO, KC_NO, KC_PGUP, KC_UP, KC_PGDN, KC_NO, KC_F12,
        KC_NO, KC_NO, LGUI(KC_LEFT), LGUI(KC_DOWN), LGUI(KC_RGHT), KC_NO, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LCTL(KC_LEFT), KC_NO, LCTL(KC_RGHT), KC_NO, KC_NO, KC_TRNS, KC_TRNS, LCTL(KC_BSPC), KC_TRNS, KC_TRNS, KC_TRNS
  */

  [_LOWER] = LAYOUT(
  //┌────────────────┬────────────────┬────────────────┬────────────────┬────────────────┬────────────────┐                                          ┌────────────────┬────────────────┬────────────────┬────────────────┬────────────────┬────────────────┐
     KC_TILD,          KC_F1,           KC_F2,           KC_F3,          KC_F4,           KC_F5,                                                       KC_F6,           KC_F7,           KC_F8,           KC_F9,           KC_F10,          KC_F11,
  //├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┤                                          ├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┤
     KC_NO,           KC_NO,            LCTL(LGUI(KC_LEFT)),LGUI(KC_UP), LCTL(LGUI(KC_RIGHT)), KC_NO,                                                  KC_NO,           KC_PGUP,         KC_UP,           KC_PGDN,         KC_NO,           KC_F12,
  //├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┤                                          ├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┤
     KC_NO,           KC_NO,           LGUI(KC_LEFT),   LGUI(KC_DOWN),   LGUI(KC_RGHT),   KC_NO,                                                      KC_HOME,          KC_LEFT,         KC_DOWN,         KC_RGHT,         KC_END,          KC_NO,
  //├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┐        ┌────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┤
     KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,                    KC_NO,           KC_NO,            LCTL(KC_LEFT),   KC_NO,           LCTL(KC_RGHT),   KC_NO,           KC_NO,        
  //└────────────────┴────────────────┴────────────────┴────────────────┼────────────────┼────────────────┼────────────────┤        ├────────────────┼────────────────┼────────────────┼────────────────┴────────────────┴────────────────┴────────────────┘
                                                                         KC_TRNS,         KC_LCTRL,        LSFT_T(LCTL(KC_BSPC)),    KC_TRNS,         KC_TRNS,          KC_TRNS
                                                                     // └────────────────┴────────────────┴────────────────┘        └────────────────┴────────────────┴────────────────┘
  ),

  /*
  [2] = LAYOUT(BL_TOGG, RGB_HUD, RGB_HUI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RESET,
  KC_NO, KC_NO, KC_BTN4, KC_MS_U, KC_BTN5, KC_NO, KC_NO, KC_BTN4, KC_WH_U, KC_BTN5, KC_NO, KC_NO,
  KC_NO,  KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO,   KC_NO, KC_WH_L, KC_WH_D, KC_WH_R, KC_RSFT, KC_NO,
  KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_RCTL, KC_TRNS,
  KC_BTN3, KC_MS_L, KC_MS_R, KC_TRNS, KC_TRNS, KC_TRNS
  */


  [_RAISE] = LAYOUT(
  //┌────────────────┬────────────────┬────────────────┬────────────────┬────────────────┬────────────────┐                                          ┌────────────────┬────────────────┬────────────────┬────────────────┬────────────────┬────────────────┐
     BL_TOGG,         RGB_HUD,         RGB_HUI,         KC_NO,           KC_NO,           KC_NO,                                                       KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,
  //├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┤                                          ├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┤
     KC_NO,           KC_NO,           KC_BTN4,         KC_MS_U,         KC_BTN5,         KC_NO,                                                       KC_NO,           KC_BTN4,         KC_WH_U,         KC_BTN5,         KC_NO,           KC_NO,
  //├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┤                                          ├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┤
     KC_NO,           KC_NO,           KC_MS_L,         KC_MS_D,         KC_MS_R,         KC_NO,                                                       KC_HOME,         KC_WH_L,         KC_WH_D,         KC_WH_R,         KC_RSFT,         KC_NO,
  //├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┐        ┌────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┤
     KC_TRNS,         KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,                     KC_NO,           KC_NO,           KC_ACL0,         KC_ACL1,         KC_ACL2,         KC_RCTL,         KC_TRNS,        
  //└────────────────┴────────────────┴────────────────┴────────────────┼────────────────┼────────────────┼────────────────┤        ├────────────────┼────────────────┼────────────────┼────────────────┴────────────────┴────────────────┴────────────────┘
                                                                         KC_BTN3,         KC_BTN1,         KC_BTN2,                   KC_TRNS,         KC_TRNS,         KC_TRNS
                                                                     // └────────────────┴────────────────┴────────────────┘        └────────────────┴────────────────┴────────────────┘
  ),

  /*
  [3] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MPRV, KC_VOLU, KC_MNXT, KC_NO, KC_NO,
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MRWD, KC_VOLD, KC_MFFD, KC_NO, KC_NO,
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MUTE, KC_NO, KC_NO, KC_NO,
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  */

  [_ADJUST] = LAYOUT(
  //┌────────────────┬────────────────┬────────────────┬────────────────┬────────────────┬────────────────┐                                          ┌────────────────┬────────────────┬────────────────┬────────────────┬────────────────┬────────────────┐
     KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,                                                       KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,
  //├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┤                                          ├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┤
     KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,                                                       KC_NO,           KC_MPRV,         KC_VOLU,         KC_MNXT,         KC_NO,           KC_NO,
  //├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┤                                          ├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┤
     KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,                                                       KC_NO,           KC_MRWD,         KC_VOLD,         KC_MFFD,         KC_NO,           KC_NO,
  //├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┐        ┌────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼────────────────┤
     KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,                    KC_NO,           KC_NO,            KC_NO,           KC_MUTE,         KC_NO,           KC_NO,           KC_NO,        
  //└────────────────┴────────────────┴────────────────┴────────────────┼────────────────┼────────────────┼────────────────┤        ├────────────────┼────────────────┼────────────────┼────────────────┴────────────────┴────────────────┴────────────────┘
                                                                         KC_NO,           KC_NO,           KC_NO,                    KC_NO,           KC_NO,            KC_NO
                                                                     // └────────────────┴────────────────┴────────────────┘        └────────────────┴────────────────┴────────────────┘
  )
};

/*
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
}
*/
