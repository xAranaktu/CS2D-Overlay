#pragma once

#include "defines.h"

// 6 methods, 2 functions
struct Tgui_inDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 68(0x44)
    int(__cdecl* m_Tgui_in_New)(Tgui_in* pThis); // [New at 0x709943] [0x10] ()i
    int(__cdecl* m_Tgui_in_Delete)(Tgui_in* pThis); // [Delete at 0x709977] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_in_draw)(Tgui_in* pThis); // [draw at 0x709A88] [0x30] ()i
    int(__cdecl* m_Tgui_in_Update)(Tgui_in* pThis); // [Update at 0x709A7A] [0x34] ()i
    int(__cdecl* m_Tgui_in_AutoFit)(Tgui_in* pThis); // [AutoFit at 0x70B614] [0x38] ()i
    Tgui_in*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3, int a4, int a5, BBString* a6); // [Create at 0x7099AA] [0x3C] (:Tgui,i,i,i,i,$):Tgui_in
    int(__cdecl* m_Tgui_in_reset)(Tgui_in* pThis, int a1, int a2, int a3, int a4); // [reset at 0x709A46] [0x40] (i,i,i,i)i
    int(__cdecl* fn_tab)(Tgui_win* a1); // [tab at 0x70B3DB] [0x44] (:Tgui_win)i
};


// Super: 0x88E898
// 2 members
struct Tgui_in {
    Tgui_inDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_txt; // 0x3C <type_$>
    int m_pw; // 0x40 <type_i>
};


