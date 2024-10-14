#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      KC_LBRC,        KC_RBRC,        KC_EQUAL,       KC_LPRN,        KC_RPRN,                                        KC_LCBR,        KC_RCBR,        KC_MINUS,       KC_LABK,        KC_RABK,        KC_BSPC,        
    KC_GRAVE,       KC_Q,           KC_W,           KC_F,           KC_P,           KC_G,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_BSLS,        
    KC_DLR,         KC_A,           LT(5,KC_R),     LT(4,KC_S),     LT(3,KC_T),     KC_D,                                           KC_H,           LT(2,KC_N),     LT(1,KC_E),     LT(7,KC_I),     KC_O,           KC_QUOTE,       
    KC_LEFT_ALT,    KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_K,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       LCTL(KC_S),     
                                                    LT(6,KC_SPACE), KC_LEFT_SHIFT,                                  MT(MOD_RGUI, KC_ESCAPE),MT(MOD_LCTL, KC_ENTER)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_MINUS,       KC_EQUAL,                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_ASTR,        KC_SLASH,       KC_7,           KC_8,           KC_9,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MINUS,       KC_4,           KC_5,           KC_6,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_0,           KC_1,           KC_2,           KC_3,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PAGE_UP,     KC_TAB,         KC_UP,          LSFT(KC_TAB),   KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(KC_TAB),   KC_TRANSPARENT, LCTL(LSFT(KC_TAB)),KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_UP),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LSFT(KC_LEFT)),LSFT(KC_DOWN),  LALT(LSFT(KC_RIGHT)),KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(KC_V),     LGUI(KC_C),     LGUI(KC_X),     LGUI(KC_Z),     KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_F)))),KC_TRANSPARENT, KC_TRANSPARENT,                                 LALT(LGUI(LCTL(LSFT(KC_UP)))),LALT(LGUI(LCTL(LSFT(KC_LEFT)))),LALT(LGUI(LCTL(LSFT(KC_ENTER)))),LALT(LGUI(LCTL(LSFT(KC_RIGHT)))),KC_TRANSPARENT, LGUI(LSFT(KC_SPACE)),
    KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_A)))),KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_S)))),LALT(LGUI(LCTL(LSFT(KC_T)))),KC_TRANSPARENT,                                 LALT(LGUI(LCTL(LSFT(KC_DOWN)))),LALT(LGUI(LCTL(LSFT(KC_E)))),LALT(LGUI(LCTL(LSFT(KC_O)))),LALT(LGUI(LCTL(LSFT(KC_I)))),KC_TRANSPARENT, LGUI(LSFT(KC_C)),
    KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_Z)))),KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_C)))),KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_B)))),                                KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_J)))),LALT(LGUI(LCTL(LSFT(KC_L)))),LALT(LGUI(LCTL(LSFT(KC_U)))),KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_TRANSPARENT,                                 KC_TRANSPARENT, RGB_VAD,        RGB_VAI,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F4,          KC_F5,          KC_F6,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_GRAVE,       KC_Q,           KC_W,           KC_F,           KC_P,           KC_G,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_BSLS,        
    MT(MOD_LSFT, KC_BSPC),KC_A,           KC_R,           KC_S,           KC_T,           KC_D,                                           KC_H,           KC_N,           KC_E,           KC_I,           KC_O,           MT(MOD_RSFT, KC_QUOTE),
    KC_LEFT_ALT,    KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_K,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_CTRL,  
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const uint16_t PROGMEM combo0[] = { LT(6,KC_SPACE), KC_LEFT_SHIFT, MT(MOD_RGUI, KC_ESCAPE), MT(MOD_LCTL, KC_ENTER), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TG(8)),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {253,253,235}, {83,218,204}, {83,218,204}, {83,218,204}, {83,218,204}, {83,218,204}, {83,218,204}, {130,56,209}, {130,56,209}, {130,56,209}, {130,56,209}, {130,56,209}, {83,218,204}, {130,56,209}, {220,255,255}, {219,255,255}, {220,255,255}, {130,56,209}, {130,56,209}, {130,56,209}, {130,56,209}, {130,56,209}, {130,56,209}, {130,56,209}, {219,255,255}, {130,56,209}, {83,218,204}, {83,218,204}, {83,218,204}, {83,218,204}, {83,218,204}, {253,255,237}, {130,56,209}, {130,56,209}, {130,56,209}, {130,56,209}, {83,218,204}, {83,218,204}, {130,56,209}, {219,255,255}, {219,255,255}, {219,255,255}, {130,56,209}, {83,218,204}, {130,56,209}, {130,56,209}, {83,218,204}, {83,218,204}, {83,218,204}, {194,218,204}, {253,255,237}, {130,56,209} },

    [1] = { {0,0,0}, {79,77,197}, {79,77,197}, {79,77,197}, {79,77,197}, {79,77,197}, {83,218,204}, {83,218,204}, {83,218,204}, {83,218,204}, {83,218,204}, {83,218,204}, {83,218,204}, {83,218,204}, {83,218,204}, {83,218,204}, {83,218,204}, {83,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {79,77,197}, {79,77,197}, {79,77,197}, {79,77,197}, {79,77,197}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {79,77,197}, {79,77,197}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {79,77,197}, {0,0,0}, {0,0,0}, {79,77,197}, {79,77,197}, {79,77,197}, {79,77,197}, {0,0,0}, {0,0,0} },

    [2] = { {253,255,237}, {0,0,0}, {0,0,0}, {83,218,204}, {83,218,204}, {83,218,204}, {83,218,204}, {83,218,204}, {219,255,255}, {219,255,255}, {219,255,255}, {0,0,0}, {83,218,204}, {83,218,204}, {219,255,255}, {219,255,255}, {219,255,255}, {0,0,0}, {0,0,0}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {253,255,237}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {194,218,204}, {130,56,209}, {83,218,204}, {130,56,209}, {0,0,0}, {0,0,0}, {194,218,204}, {83,218,204}, {83,218,204}, {83,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {130,56,209}, {0,0,0}, {130,56,209}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {44,130,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {44,130,255}, {44,130,255}, {44,130,255}, {0,0,0}, {0,0,0}, {0,0,0}, {139,222,217}, {139,222,217}, {139,222,217}, {139,222,217}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {253,255,237}, {130,56,209}, {130,56,209}, {0,0,0}, {0,0,0}, {0,0,0}, {79,218,204}, {79,218,204}, {79,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {189,255,238}, {0,0,0}, {0,0,0}, {0,0,0}, {189,255,238}, {0,0,0}, {189,255,238}, {189,255,238}, {0,0,0}, {0,0,0}, {189,255,238}, {0,0,0}, {194,218,204}, {0,0,0}, {189,255,238}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {189,255,238}, {189,255,238}, {189,255,238}, {189,255,238}, {0,0,0}, {26,195,255}, {194,218,204}, {189,255,238}, {189,255,238}, {189,255,238}, {0,0,0}, {26,195,255}, {0,0,0}, {189,255,238}, {189,255,238}, {189,255,238}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {0,0,0}, {0,0,0}, {89,164,253}, {89,164,253}, {89,164,253}, {0,0,0}, {0,0,0}, {0,0,0}, {89,164,253}, {89,164,253}, {89,164,253}, {0,0,0}, {0,0,0}, {0,0,0}, {89,164,253}, {89,164,253}, {89,164,253}, {0,0,0}, {0,0,0}, {0,0,0}, {89,164,253}, {89,164,253}, {89,164,253}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {219,255,255}, {219,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {130,56,209}, {130,56,209}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {253,253,235}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {44,144,255}, {139,221,215}, {139,221,215}, {253,253,235}, {139,221,215}, {44,144,255}, {44,144,255}, {44,144,255}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215}, {139,221,215} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}



