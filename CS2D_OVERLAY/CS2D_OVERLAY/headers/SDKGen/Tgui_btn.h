#pragma once

#include "defines.h"

// 5 methods, 1 functions
struct Tgui_btnDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 68(0x44)
    int(__cdecl* m_Tgui_btn_New)(Tgui_btn* pThis); // [New at 0x708A24] [0x10] ()i
    int(__cdecl* m_Tgui_btn_Delete)(Tgui_btn* pThis); // [Delete at 0x708A54] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_btn_draw)(Tgui_btn* pThis); // [draw at 0x708B26] [0x30] ()i
    int(__cdecl* m_Tgui_btn_Update)(Tgui_btn* pThis); // [Update at 0x708B18] [0x34] ()i
    int(__cdecl* m_Tgui_btn_AutoFit)(Tgui_btn* pThis); // [AutoFit at 0x709311] [0x38] ()i
    Tgui_btn*(__cdecl* fn_Create)(Tgui* a1, BBString* a2, int a3, int a4, int a5, int a6, int a7); // [Create at 0x708A74] [0x3C] (:Tgui,$,i,i,i,i,i):Tgui_btn
};


// Super: 0x88E898
// 2 members
struct Tgui_btn {
    Tgui_btnDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_progress; // 0x3C <type_i>
    int m_hotkey; // 0x40 <type_i>
};


