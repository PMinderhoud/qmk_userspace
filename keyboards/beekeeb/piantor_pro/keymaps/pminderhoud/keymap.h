#pragma once
#include QMK_KEYBOARD_H

// Enums
enum layers {
    BASE,
    NIGHT,
    LESSWOOD,
    DIACRIT,
    SYM,
    NAV,
    FUNC,
    ADJUST,
    VSTUDIO,
    MOUSE,
    GAME
};

enum custom_keycodes {
    PK_ISNOT = SAFE_RANGE,
    CAMELCSE,    // thisIsASample
    PASCLCSE,    // ThisIsASample
    CAPSWORD,    // THIS is a sample
    CONSTCSE,    // THIS_IS_A_SAMPLE
    PK_ZEROX,
    PK_DZERO,
    PK_TZERO,
    PK_SMHAP,
    PK_SMSAD,
    PK_LAMBDA,
    PK_LAMBDABLK,
    PK_HASH,
    PK_JO,
    PK_JOU,
    PK_WIJ
};

enum unicode_names {
  U_EURO_,
  U_SS_LOWER,
  U_SS_UPPER,
  U_NTIL_LOWER,
  U_NTIL_UPPER,
  U_CCED_LOWER,
  U_CCED_UPPER,
  U_IQUE_SYM,
  U_A_TREMA_L,
  U_A_TREMA_U,
  U_A_AIGU_L,
  U_A_AIGU_U,
  U_A_GRAVE_L,
  U_A_GRAVE_U,
  U_A_CIRC_L,
  U_A_CIRC_U,
  U_E_TREMA_L,
  U_E_TREMA_U,
  U_E_AIGU_L,
  U_E_AIGU_U,
  U_E_GRAVE_L,
  U_E_GRAVE_U,
  U_E_CIRC_L,
  U_E_CIRC_U,
  U_I_TREMA_L,
  U_I_TREMA_U,
  U_I_AIGU_L,
  U_I_AIGU_U,
  U_I_CIRC_L,
  U_I_CIRC_U,
  U_I_GRAVE_L,
  U_I_GRAVE_U,
  U_O_TREMA_L,
  U_O_TREMA_U,
  U_O_AIGU_L,
  U_O_AIGU_U,
  U_O_CIRC_L,
  U_O_CIRC_U,
  U_O_GRAVE_L,
  U_O_GRAVE_U,
  U_U_TREMA_L,
  U_U_TREMA_U,
  U_U_AIGU_L,
  U_U_AIGU_U,
  U_U_CIRC_L,
  U_U_CIRC_U,
  U_U_GRAVE_L,
  U_U_GRAVE_U,
};

// Define the tap dance states
enum {
    TD_Q = 0,
    TD_Y,
};


// Home row mods for Base (Recurva) layer.
#define HOME_S LGUI_T(KC_S)
#define HOME_N LALT_T(KC_N)
#define HOME_T LCTL_T(KC_T)
#define HOME_C LSFT_T(KC_C)
#define HOME_H RSFT_T(KC_H)
#define HOME_E RCTL_T(KC_E)
#define HOME_A RALT_T(KC_A)
#define HOME_I RGUI_T(KC_I)

// Night
#define HOMEN_N LGUI_T(KC_N)
#define HOMEN_S LALT_T(KC_S)
#define HOMEN_H LCTL_T(KC_H)
#define HOMEN_T LSFT_T(KC_T)
#define HOMEN_C RSFT_T(KC_C)
#define HOMEN_E RALT_T(KC_E)
#define HOMEN_A RCTL_T(KC_A)

// Lesswood layer home keys
#define LWHOME_C LGUI_T(KC_C)
#define LWHOME_I LALT_T(KC_I)
#define LWHOME_A LCTL_T(KC_A)
#define LWHOME_E LSFT_T(KC_E)
#define LWHOME_H RSFT_T(KC_H)
#define LWHOME_T RALT_T(KC_T)
#define LWHOME_N RCTL_T(KC_N)
#define LWHOME_S RGUI_T(KC_S)

// Diaritic layer home keys
#define DHOME_C LSFT_T(U_CCED)
#define DHOME_O RSFT_T(U_OTREM)

// Symbol layer home keys
#define SHOME_EX LGUI_T(KC_EXLM)
#define SHOME_LT LALT_T(KC_LABK)
#define SHOME_GT LCTL_T(KC_RABK)
#define SHOME_EQ LSFT_T(KC_EQL)

// navigation layer home keys
#define NHOME_CZ LGUI_T(C(KC_Z))
#define NHOME_CX LALT_T(C(KC_X))
#define NHOME_CC LCTL_T(C(KC_C))
#define NHOME_CV LSFT_T(C(KC_V))

// UNICODE
#define U_SS UP(U_SS_LOWER, U_SS_UPPER)
// ñ and Ñ keycode.
#define U_NTIL UP(U_NTIL_LOWER, U_NTIL_UPPER)
// ç and Ç keycode.
#define U_CCED UP(U_CCED_LOWER, U_CCED_UPPER)
#define U_ATREM UP(U_A_TREMA_L, U_A_TREMA_U)
#define U_AAIGU UP(U_A_AIGU_L, U_A_AIGU_U)
#define U_AGRAV UP(U_A_GRAVE_L, U_A_GRAVE_U)
#define U_ACIRC UP(U_A_CIRC_L, U_A_CIRC_U)
#define U_ETREM UP(U_E_TREMA_L, U_E_TREMA_U)
#define U_EAIGU UP(U_E_AIGU_L, U_E_AIGU_U)
#define U_EGRAV UP(U_E_GRAVE_L, U_E_GRAVE_U)
#define U_ECIRC UP(U_E_CIRC_L, U_E_CIRC_U)
#define U_ITREM UP(U_I_TREMA_L, U_I_TREMA_U)
#define U_IAIGU UP(U_I_AIGU_L, U_I_AIGU_U)
#define U_ICIRC UP(U_I_CIRC_L, U_I_CIRC_U)
#define U_IGRAV UP(U_I_GRAVE_L, U_I_GRAVE_U)
#define U_OTREM UP(U_O_TREMA_L, U_O_TREMA_U)
#define U_OAIGU UP(U_O_AIGU_L, U_O_AIGU_U)
#define U_OCIRC UP(U_O_CIRC_L, U_O_CIRC_U)
#define U_OGRAV UP(U_O_GRAVE_L, U_O_GRAVE_U)
#define U_UTREM UP(U_U_TREMA_L, U_U_TREMA_U)
#define U_UAIGU UP(U_U_AIGU_L, U_U_AIGU_U)
#define U_UCIRC UP(U_U_CIRC_L, U_U_CIRC_U)
#define U_UGRAV UP(U_U_GRAVE_L, U_U_GRAVE_U)
#define U_EURO  UM(U_EURO_)

// LAYER KEYS
#define L_SP_NAV LT(NAV,KC_SPC)
#define L_R_NAV LT(NAV,KC_R)
#define L_R_SYM LT(SYM,KC_R)
#define L_BS_SYM LT(SYM,KC_BACKSPACE)
#define L_SP_SYM LT(SYM,KC_SPC)
#define L_EN_SYM LT(SYM,KC_ENT)
#define L_EN_FNC LT(FUNC,KC_ENT)
#define L_RA_DIA LT(DIACRIT,KC_RALT)
#define L_TB_FNC LT(FUNC,KC_TAB)
#define L_DL_FNC LT(FUNC,KC_DEL)
#define L_TB_DIA LT(DIACRIT,KC_TAB)
#define L_ES_VST LT(MOUSE,KC_ESC)
#define L_BS_VST LT(VSTUDIO,KC_BACKSPACE)
#define L_EN_VST LT(VSTUDIO,KC_ENT)

#define SK_NWDSK G(C(KC_D))     // New desktop
#define SK_CLDSK G(C(KC_F4))     // Close desktop
#define SK_PRDSK G(C(KC_LEFT))     // Previous desktop
#define SK_NXDSK G(C(KC_RIGHT))     // Next desktop

#define VS_DEBUG  KC_F5
#define VS_STPDBG S(KC_F)
#define VS_STOVER KC_F10
#define VS_STINTO KC_F11
#define VS_STOUT  S(KC_F11)
#define VS_BRKPT  KC_F9
#define VS_FORMAT S(A(KC_F))
#define VS_SEARCH S(C(KC_F))

#define VS_GODEF KC_F12
#define VS_PKDEF A(KC_F12)
#define VS_GOFILE C(KC_P)
#define VS_COMMND C(S(KC_P))
#define VS_GOIMPL C(KC_F12)
#define VS_GOREF S(KC_F12)
#define VS_NXERRF A(KC_F8)
#define VS_NXERRS KC_F8
#define VS_PRERRF S(A(KC_F8))
#define VS_PRERRS S(KC_F8)
#define VS_GOLINE C(KC_G)

#define VS_GOALL  C(KC_T)
#define VS_QACT  C(KC_DOT)
#define VS_ISENSE  C(KC_SPACE)
#define VS_SHOWPARAM C(S(KC_SPACE))
#define VS_COPILOT A(KC_SLASH)

#define TM_MUTE C(S(KC_M))
