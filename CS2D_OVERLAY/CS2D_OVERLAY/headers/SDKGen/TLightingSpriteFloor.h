#pragma once

#include "defines.h"

// 2 methods, 2 functions
struct TLightingSpriteFloorDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TLightingSpriteFloor_New)(TLightingSpriteFloor* pThis); // [New at 0x5DE885] [0x10] ()i
    int(__cdecl* m_TLightingSpriteFloor_Delete)(TLightingSpriteFloor* pThis); // [Delete at 0x5DE8A7] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_DrawSprite)(TImage* a1, float a2, float a3, float a4, float a5, void* a6, float a7, float a8, int a9); // [DrawSprite at 0x5DE8B5] [0x30] (:TImage,f,f,f,f,[]i,f,f,i)i
    int(__cdecl* fn_DrawSprites)(int a1, float a2); // [DrawSprites at 0x5DEA04] [0x34] (i,f)i
};


// 0 members
struct TLightingSpriteFloor {
    TLightingSpriteFloorDecl* decl; // 0x0
    int    refs;  // 0x4
};


