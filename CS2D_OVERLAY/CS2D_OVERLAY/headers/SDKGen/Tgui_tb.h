#pragma once

#include "defines.h"

// 13 methods, 4 functions
struct Tgui_tbDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 84(0x54)
    int(__cdecl* m_Tgui_tb_New)(Tgui_tb* pThis); // [New at 0x70CB56] [0x10] ()i
    int(__cdecl* m_Tgui_tb_Delete)(Tgui_tb* pThis); // [Delete at 0x70CBB2] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_tb_draw)(Tgui_tb* pThis); // [draw at 0x70D31C] [0x30] ()i
    int(__cdecl* m_Tgui_tb_update)(Tgui_tb* pThis); // [update at 0x70CCBB] [0x34] ()i
    int(__cdecl* m_Tgui_tb_AutoFit)(Tgui_tb* pThis); // [AutoFit at 0x70DF83] [0x38] ()i
    Tgui_tb*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3, int a4, int a5); // [Create at 0x70CBF6] [0x3C] (:Tgui,i,i,i,i):Tgui_tb
    void*(__cdecl* fn_get_color_segments)(BBString* a1); // [get_color_segments at 0x70CCEC] [0x40] ($)[]$
    int(__cdecl* m_Tgui_tb_draw_segments)(Tgui_tb* pThis, BBString* a1, int a2, int a3, int a4); // [draw_segments at 0x70CE15] [0x44] ($,i,i,i)i
    int(__cdecl* m_Tgui_tb_addline)(Tgui_tb* pThis, BBString* a1); // [addline at 0x70D817] [0x48] ($)i
    int(__cdecl* m_Tgui_tb_add)(Tgui_tb* pThis, BBString* a1); // [add at 0x70DA7A] [0x4C] ($)i
    int(__cdecl* m_Tgui_tb_loadfile)(Tgui_tb* pThis, BBString* a1, int a2); // [loadfile at 0x70DB09] [0x50] ($,i)i
    int(__cdecl* m_Tgui_tb_clear)(Tgui_tb* pThis); // [clear at 0x70DB88] [0x54] ()i
    int(__cdecl* m_Tgui_tb_size)(Tgui_tb* pThis); // [size at 0x70DBFB] [0x58] ()i
    int(__cdecl* m_Tgui_tb_chars)(Tgui_tb* pThis); // [chars at 0x70DC13] [0x5C] ()i
    int(__cdecl* m_Tgui_tb_scrollto)(Tgui_tb* pThis, BBString* a1); // [scrollto at 0x70DC74] [0x60] ($)i
    int(__cdecl* fn_copyline)(Tgui_tb* a1); // [copyline at 0x70DD1C] [0x64] (:Tgui_tb)i
    int(__cdecl* fn_copyall)(Tgui_tb* a1); // [copyall at 0x70DE8B] [0x68] (:Tgui_tb)i
};


// Super: 0x88E898
// 6 members
struct Tgui_tb {
    Tgui_tbDecl* decl; // 0x0
    int    refs;  // 0x4
    Tgui_vscr* m_vscr; // 0x3C <type_:Tgui_vscr>
    int m_border; // 0x40 <type_i>
    TList* m_lines; // 0x44 <type_:TList>
    int m_small; // 0x48 <type_i>
    int m_links; // 0x4C <type_i>
    int m_textsize; // 0x50 <type_i>
};


