#pragma once

#include "defines.h"

// 6 methods, 1 functions
struct Tgui_lblDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 60(0x3C)
    int(__cdecl* m_Tgui_lbl_New)(Tgui_lbl* pThis); // [New at 0x708283] [0x10] ()i
    int(__cdecl* m_Tgui_lbl_Delete)(Tgui_lbl* pThis); // [Delete at 0x7082A5] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_lbl_draw)(Tgui_lbl* pThis); // [draw at 0x7083B2] [0x30] ()i
    int(__cdecl* m_Tgui_lbl_Update)(Tgui_lbl* pThis); // [Update at 0x708357] [0x34] ()i
    int(__cdecl* m_Tgui_lbl_AutoFit)(Tgui_lbl* pThis); // [AutoFit at 0x708625] [0x38] ()i
    Tgui_lbl*(__cdecl* fn_Create)(Tgui* a1, BBString* a2, int a3, int a4); // [Create at 0x7082C5] [0x3C] (:Tgui,$,i,i):Tgui_lbl
    int(__cdecl* m_Tgui_lbl_reset)(Tgui_lbl* pThis, BBString* a1, int a2, int a3); // [reset at 0x708365] [0x40] ($,i,i)i
};


// Super: 0x88E898
// 0 members
struct Tgui_lbl {
    Tgui_lblDecl* decl; // 0x0
    int    refs;  // 0x4
};


