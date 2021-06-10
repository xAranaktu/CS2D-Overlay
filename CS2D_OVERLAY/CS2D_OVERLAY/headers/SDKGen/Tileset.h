#pragma once

#include "defines.h"

// 2 methods, 2 functions
struct TilesetDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_Tileset_New)(Tileset* pThis); // [New at 0x62653E] [0x10] ()i
    int(__cdecl* m_Tileset_Delete)(Tileset* pThis); // [Delete at 0x626560] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_DrawTile)(int a1, float a2, float a3); // [DrawTile at 0x62656E] [0x30] (i,f,f)i
    int(__cdecl* fn_ResetAnimationArray)(); // [ResetAnimationArray at 0x6265ED] [0x34] ()i
};


// 0 members
struct Tileset {
    TilesetDecl* decl; // 0x0
    int    refs;  // 0x4
};


