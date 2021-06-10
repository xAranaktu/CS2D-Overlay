#pragma once

#include "defines.h"

// 6 methods, 1 functions
struct Tgui_colDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 72(0x48)
    int(__cdecl* m_Tgui_col_New)(Tgui_col* pThis); // [New at 0x70F8AE] [0x10] ()i
    int(__cdecl* m_Tgui_col_Delete)(Tgui_col* pThis); // [Delete at 0x70F8E5] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_col_draw)(Tgui_col* pThis); // [draw at 0x70F9C2] [0x30] ()i
    int(__cdecl* m_Tgui_col_Update)(Tgui_col* pThis); // [Update at 0x70F9B4] [0x34] ()i
    int(__cdecl* m_Tgui_col_AutoFit)(Tgui_col* pThis); // [AutoFit at 0x70FDE9] [0x38] ()i
    Tgui_col*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3, int a4, int a5); // [Create at 0x70F905] [0x3C] (:Tgui,i,i,i,i):Tgui_col
    int(__cdecl* m_Tgui_col_reset)(Tgui_col* pThis, int a1, int a2, int a3, int a4); // [reset at 0x70F980] [0x40] (i,i,i,i)i
};


// Super: 0x88E898
// 3 members
struct Tgui_col {
    Tgui_colDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_r; // 0x3C <type_i>
    int m_g; // 0x40 <type_i>
    int m_b; // 0x44 <type_i>
};


