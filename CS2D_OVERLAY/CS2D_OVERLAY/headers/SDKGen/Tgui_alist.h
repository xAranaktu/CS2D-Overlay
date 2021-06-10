#pragma once

#include "defines.h"

// 7 methods, 1 functions
struct Tgui_alistDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 76(0x4C)
    int(__cdecl* m_Tgui_alist_New)(Tgui_alist* pThis); // [New at 0x7124CB] [0x10] ()i
    int(__cdecl* m_Tgui_alist_Delete)(Tgui_alist* pThis); // [Delete at 0x712519] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_alist_draw)(Tgui_alist* pThis); // [draw at 0x7126AC] [0x30] ()i
    int(__cdecl* m_Tgui_alist_Update)(Tgui_alist* pThis); // [Update at 0x71269E] [0x34] ()i
    int(__cdecl* m_Tgui_alist_AutoFit)(Tgui_alist* pThis); // [AutoFit at 0x712EFE] [0x38] ()i
    Tgui_alist*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3, int a4, int a5, void* a6); // [Create at 0x71257F] [0x3C] (:Tgui,i,i,i,i,[]i):Tgui_alist
    int(__cdecl* m_Tgui_alist_centersel)(Tgui_alist* pThis); // [centersel at 0x712DA4] [0x40] ()i
    int(__cdecl* m_Tgui_alist_selid)(Tgui_alist* pThis); // [selid at 0x712E63] [0x44] ()i
};


// Super: 0x88E898
// 4 members
struct Tgui_alist {
    Tgui_alistDecl* decl; // 0x0
    int    refs;  // 0x4
    Tgui_vscr* m_vscr; // 0x3C <type_:Tgui_vscr>
    TList* m_list; // 0x40 <type_:TList>
    BBString* m_sel; // 0x44 <type_$>
    void* m_offset; // 0x48 <type_[]i>
};


