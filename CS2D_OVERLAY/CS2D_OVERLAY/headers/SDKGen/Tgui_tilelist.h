#pragma once

#include "defines.h"

// 6 methods, 1 functions
struct Tgui_tilelistDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 76(0x4C)
    int(__cdecl* m_Tgui_tilelist_New)(Tgui_tilelist* pThis); // [New at 0x72CDF3] [0x10] ()i
    int(__cdecl* m_Tgui_tilelist_Delete)(Tgui_tilelist* pThis); // [Delete at 0x72CE3E] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_tilelist_draw)(Tgui_tilelist* pThis); // [draw at 0x72CF88] [0x30] ()i
    int(__cdecl* m_Tgui_tilelist_Update)(Tgui_tilelist* pThis); // [Update at 0x72CF4A] [0x34] ()i
    int(__cdecl* m_Tgui_tilelist_AutoFit)(Tgui_tilelist* pThis); // [AutoFit at 0x72D5A5] [0x38] ()i
    Tgui_tilelist*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3, int a4, int a5); // [Create at 0x72CE82] [0x3C] (:Tgui,i,i,i,i):Tgui_tilelist
    int(__cdecl* m_Tgui_tilelist_updateHeight)(Tgui_tilelist* pThis, int a1); // [updateHeight at 0x72CF58] [0x40] (i)i
};


// Super: 0x88E898
// 4 members
struct Tgui_tilelist {
    Tgui_tilelistDecl* decl; // 0x0
    int    refs;  // 0x4
    Tgui_vscr* m_vscr; // 0x3C <type_:Tgui_vscr>
    int m_sel; // 0x40 <type_i>
    char m_modifier; // 0x44 <type_b>
    Tmap_d* m_data; // 0x48 <type_:Tmap_d>
};


