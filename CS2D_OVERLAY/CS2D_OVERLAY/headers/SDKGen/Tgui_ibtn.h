#pragma once

#include "defines.h"

// 5 methods, 1 functions
struct Tgui_ibtnDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 68(0x44)
    int(__cdecl* m_Tgui_ibtn_New)(Tgui_ibtn* pThis); // [New at 0x70931F] [0x10] ()i
    int(__cdecl* m_Tgui_ibtn_Delete)(Tgui_ibtn* pThis); // [Delete at 0x70934F] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_ibtn_draw)(Tgui_ibtn* pThis); // [draw at 0x70941C] [0x30] ()i
    int(__cdecl* m_Tgui_ibtn_Update)(Tgui_ibtn* pThis); // [Update at 0x70940E] [0x34] ()i
    int(__cdecl* m_Tgui_ibtn_AutoFit)(Tgui_ibtn* pThis); // [AutoFit at 0x709935] [0x38] ()i
    Tgui_ibtn*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3, int a4, BBString* a5); // [Create at 0x70936F] [0x3C] (:Tgui,i,i,i,$):Tgui_ibtn
};


// Super: 0x88E898
// 2 members
struct Tgui_ibtn {
    Tgui_ibtnDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_frame; // 0x3C <type_i>
    int m_sel; // 0x40 <type_i>
};


