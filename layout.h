int layer0[44] = {
    KEY_Q,   KEY_W,   KEY_E,             KEY_R,               KEY_T,         KEY_0,              KEY_Y,     KEY_U,           KEY_I,     KEY_O,      KEY_P,
    KEY_A,   KEY_S,   KEY_D,             KEY_F,               KEY_G,         KEY_0,              KEY_H,     KEY_J,           KEY_K,     KEY_L,      KEY_SEMICOLON,
    KEY_Z,   KEY_X,   KEY_C,             KEY_V,               KEY_B,         KEYBOARD_LEFT_CTRL, KEY_N,     KEY_M,           KEY_COMMA, KEY_PERIOD, KEY_SLASH,
    KEY_TAB, KEY_ESC, KEYBOARD_LEFT_GUI, KEYBOARD_LEFT_SHIFT, KEY_BACKSPACE, KEYBOARD_LEFT_ALT,  KEY_SPACE, PRE_FUNCTION(1), KEY_MINUS, KEY_QUOTE,  KEY_ENTER };

int layer1[44] = {
    SHIFT(KEY_1), KEY_HOME, KEY_UP,            KEY_END,             SHIFT(KEY_BACKSLASH), KEY_0,              KEY_PAGE_UP,      KEY_7,           KEY_8,            KEY_9, 0,
    SHIFT(KEY_3), KEY_LEFT, KEY_DOWN,          KEY_RIGHT,           KEY_EQUAL,            KEY_0,              KEY_PAGE_DOWN,    KEY_4,           KEY_5,            KEY_6, SHIFT(KEY_8),
    SHIFT(KEY_5), 0,        0,                 0,                   0,                    KEYBOARD_LEFT_CTRL, SHIFT(KEY_TILDE), KEY_1,           KEY_2,            KEY_3, KEY_BACKSLASH,
    SHIFT(KEY_7), KEY_ESC,  KEYBOARD_LEFT_GUI, KEYBOARD_LEFT_SHIFT, KEY_DELETE,           KEYBOARD_LEFT_ALT,  KEY_SPACE,        PRE_FUNCTION(1), SHIFT(KEY_EQUAL), KEY_0, KEY_ENTER };

#include "layer2.h"

int *layers[] = {layer0, layer1, layer2, layer3};

#include "layout_common.h"
