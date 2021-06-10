#pragma once

#include "defines.h"

// 5 methods, 1 functions
struct Tgui_leadlistDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 68(0x44)
    int(__cdecl* m_Tgui_leadlist_New)(Tgui_leadlist* pThis); // [New at 0x72DF33] [0x10] ()i
    int(__cdecl* m_Tgui_leadlist_Delete)(Tgui_leadlist* pThis); // [Delete at 0x72DF67] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_leadlist_draw)(Tgui_leadlist* pThis); // [draw at 0x72E095] [0x30] ()i
    int(__cdecl* m_Tgui_leadlist_Update)(Tgui_leadlist* pThis); // [Update at 0x72E087] [0x34] ()i
    int(__cdecl* m_Tgui_leadlist_AutoFit)(Tgui_leadlist* pThis); // [AutoFit at 0x72EC93] [0x38] ()i
    Tgui_leadlist*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3, int a4, int a5); // [Create at 0x72DF9A] [0x3C] (:Tgui,i,i,i,i):Tgui_leadlist
};


// Super: 0x88E898
// 2 members
struct Tgui_leadlist {
    Tgui_leadlistDecl* decl; // 0x0
    int    refs;  // 0x4
    Tgui_vscr* m_vscr; // 0x3C <type_:Tgui_vscr>
    int m_sel; // 0x40 <type_i>
};


