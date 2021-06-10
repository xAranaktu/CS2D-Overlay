#pragma once

#include "defines.h"

// 3 methods, 2 functions
struct Tgui_fxDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 60(0x3C)
    int(__cdecl* m_Tgui_fx_New)(Tgui_fx* pThis); // [New at 0x7353AD] [0x10] ()i
    int(__cdecl* m_Tgui_fx_Delete)(Tgui_fx* pThis); // [Delete at 0x735418] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    Tgui_fx*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3, int a4); // [Create at 0x735426] [0x30] (:Tgui,i,i,i):Tgui_fx
    int(__cdecl* m_Tgui_fx_draw)(Tgui_fx* pThis); // [draw at 0x7355FD] [0x34] ()i
    int(__cdecl* fn_clear)(); // [clear at 0x735E0B] [0x38] ()i
};


// 13 members
struct Tgui_fx {
    Tgui_fxDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_typ; // 0x8 <type_i>
    float m_x; // 0xC <type_f>
    float m_y; // 0x10 <type_f>
    float m_w; // 0x14 <type_f>
    float m_h; // 0x18 <type_f>
    float m_alpha; // 0x1C <type_f>
    int m_r; // 0x20 <type_i>
    int m_g; // 0x24 <type_i>
    int m_b; // 0x28 <type_i>
    float m_xs; // 0x2C <type_f>
    float m_ys; // 0x30 <type_f>
    float m_rot; // 0x34 <type_f>
    float m_rots; // 0x38 <type_f>
};


