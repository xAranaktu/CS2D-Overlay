#pragma once

#include "defines.h"

// 13 methods, 4 functions
struct Tgui_svinfoDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 88(0x58)
    int(__cdecl* m_Tgui_svinfo_New)(Tgui_svinfo* pThis); // [New at 0x72F290] [0x10] ()i
    int(__cdecl* m_Tgui_svinfo_Delete)(Tgui_svinfo* pThis); // [Delete at 0x72F2F1] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_svinfo_draw)(Tgui_svinfo* pThis); // [draw at 0x72FB19] [0x30] ()i
    int(__cdecl* m_Tgui_svinfo_update)(Tgui_svinfo* pThis); // [update at 0x72F3FA] [0x34] ()i
    int(__cdecl* m_Tgui_svinfo_AutoFit)(Tgui_svinfo* pThis); // [AutoFit at 0x730757] [0x38] ()i
    Tgui_svinfo*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3, int a4, int a5); // [Create at 0x72F335] [0x3C] (:Tgui,i,i,i,i):Tgui_svinfo
    void*(__cdecl* fn_get_color_segments)(BBString* a1); // [get_color_segments at 0x72F4E9] [0x40] ($)[]$
    int(__cdecl* m_Tgui_svinfo_draw_segments)(Tgui_svinfo* pThis, BBString* a1, int a2, int a3, int a4); // [draw_segments at 0x72F612] [0x44] ($,i,i,i)i
    int(__cdecl* m_Tgui_svinfo_addline)(Tgui_svinfo* pThis, BBString* a1); // [addline at 0x72FF8B] [0x48] ($)i
    int(__cdecl* m_Tgui_svinfo_add)(Tgui_svinfo* pThis, BBString* a1); // [add at 0x7301EE] [0x4C] ($)i
    int(__cdecl* m_Tgui_svinfo_loadfile)(Tgui_svinfo* pThis, BBString* a1, int a2); // [loadfile at 0x73027D] [0x50] ($,i)i
    int(__cdecl* m_Tgui_svinfo_clear)(Tgui_svinfo* pThis); // [clear at 0x73034E] [0x54] ()i
    int(__cdecl* m_Tgui_svinfo_size)(Tgui_svinfo* pThis); // [size at 0x7303CF] [0x58] ()i
    int(__cdecl* m_Tgui_svinfo_chars)(Tgui_svinfo* pThis); // [chars at 0x7303E7] [0x5C] ()i
    int(__cdecl* m_Tgui_svinfo_scrollto)(Tgui_svinfo* pThis, BBString* a1); // [scrollto at 0x730448] [0x60] ($)i
    int(__cdecl* fn_copyline)(Tgui_tb* a1); // [copyline at 0x7304F0] [0x64] (:Tgui_tb)i
    int(__cdecl* fn_copyall)(Tgui_tb* a1); // [copyall at 0x73065F] [0x68] (:Tgui_tb)i
};


// Super: 0x88E898
// 7 members
struct Tgui_svinfo {
    Tgui_svinfoDecl* decl; // 0x0
    int    refs;  // 0x4
    Tgui_vscr* m_vscr; // 0x3C <type_:Tgui_vscr>
    int m_border; // 0x40 <type_i>
    TList* m_lines; // 0x44 <type_:TList>
    int m_small; // 0x48 <type_i>
    int m_links; // 0x4C <type_i>
    int m_textsize; // 0x50 <type_i>
    float m_scr; // 0x54 <type_f>
};


