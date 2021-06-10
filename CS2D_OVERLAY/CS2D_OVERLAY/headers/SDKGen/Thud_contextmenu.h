#pragma once

#include "defines.h"

// 2 methods, 6 functions
struct Thud_contextmenuDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_Thud_contextmenu_New)(Thud_contextmenu* pThis); // [New at 0x741DF5] [0x10] ()i
    int(__cdecl* m_Thud_contextmenu_Delete)(Thud_contextmenu* pThis); // [Delete at 0x741E17] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_OpenMenuPlayer)(tpl* a1); // [OpenMenuPlayer at 0x741E25] [0x30] (:tpl)i
    int(__cdecl* fn_OpenMenuTeam)(BBString* a1); // [OpenMenuTeam at 0x742297] [0x34] ($)i
    int(__cdecl* fn_close)(); // [close at 0x74257B] [0x38] ()i
    int(__cdecl* fn_draw)(); // [draw at 0x742593] [0x3C] ()i
    int(__cdecl* fn_ParsePlayerEvent)(BBString* a1); // [ParsePlayerEvent at 0x742D3A] [0x40] ($)i
    int(__cdecl* fn_ParseTeamEvent)(BBString* a1); // [ParseTeamEvent at 0x743483] [0x44] ($)i
};


// 0 members
struct Thud_contextmenu {
    Thud_contextmenuDecl* decl; // 0x0
    int    refs;  // 0x4
};


