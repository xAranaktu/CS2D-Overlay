#pragma once

#include "defines.h"

// 5 methods, 2 functions
struct Tgui_cmDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 64(0x40)
    int(__cdecl* m_Tgui_cm_New)(Tgui_cm* pThis); // [New at 0x7104CB] [0x10] ()i
    int(__cdecl* m_Tgui_cm_Delete)(Tgui_cm* pThis); // [Delete at 0x7104F8] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_cm_draw)(Tgui_cm* pThis); // [draw at 0x7106B9] [0x30] ()i
    int(__cdecl* m_Tgui_cm_Update)(Tgui_cm* pThis); // [Update at 0x7106AB] [0x34] ()i
    int(__cdecl* m_Tgui_cm_AutoFit)(Tgui_cm* pThis); // [AutoFit at 0x710BBC] [0x38] ()i
    Tgui_cm*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3, void* a4); // [Create at 0x71052B] [0x3C] (:Tgui,i,i,[]$):Tgui_cm
    Tgui_cm*(__cdecl* fn_getcm)(); // [getcm at 0x710B4B] [0x40] ():Tgui_cm
};


// Super: 0x88E898
// 1 members
struct Tgui_cm {
    Tgui_cmDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_button; // 0x3C <type_[]$>
};


