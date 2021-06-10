#pragma once

#include "defines.h"

// 5 methods, 1 functions
struct Tgui_replaylistDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 76(0x4C)
    int(__cdecl* m_Tgui_replaylist_New)(Tgui_replaylist* pThis); // [New at 0x732BA6] [0x10] ()i
    int(__cdecl* m_Tgui_replaylist_Delete)(Tgui_replaylist* pThis); // [Delete at 0x732BF4] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_replaylist_draw)(Tgui_replaylist* pThis); // [draw at 0x732D3E] [0x30] ()i
    int(__cdecl* m_Tgui_replaylist_Update)(Tgui_replaylist* pThis); // [Update at 0x732D30] [0x34] ()i
    int(__cdecl* m_Tgui_replaylist_AutoFit)(Tgui_replaylist* pThis); // [AutoFit at 0x733346] [0x38] ()i
    Tgui_replaylist*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3, int a4, int a5); // [Create at 0x732C5A] [0x3C] (:Tgui,i,i,i,i):Tgui_replaylist
};


// Super: 0x88E898
// 4 members
struct Tgui_replaylist {
    Tgui_replaylistDecl* decl; // 0x0
    int    refs;  // 0x4
    Tgui_vscr* m_vscr; // 0x3C <type_:Tgui_vscr>
    Tgui_tab* m_tab; // 0x40 <type_:Tgui_tab>
    TList* m_map; // 0x44 <type_:TList>
    Tgui_replaylistentry* m_sel; // 0x48 <type_:Tgui_replaylistentry>
};


