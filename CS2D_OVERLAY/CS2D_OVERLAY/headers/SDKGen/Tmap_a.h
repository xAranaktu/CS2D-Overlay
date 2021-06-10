#pragma once

#include "defines.h"

// 2 methods, 3 functions
struct Tmap_aDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_Tmap_a_New)(Tmap_a* pThis); // [New at 0x62A102] [0x10] ()i
    int(__cdecl* m_Tmap_a_Delete)(Tmap_a* pThis); // [Delete at 0x62A124] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_rspawns_create)(); // [rspawns_create at 0x62A132] [0x30] ()i
    int(__cdecl* fn_rspawn_setrandom)(Tpl* a1); // [rspawn_setrandom at 0x62A786] [0x34] (:Tpl)i
    int(__cdecl* fn_draw)(TList* a1); // [draw at 0x62A8B3] [0x38] (:TList)i
};


// 0 members
struct Tmap_a {
    Tmap_aDecl* decl; // 0x0
    int    refs;  // 0x4
};


