#pragma once

#include "defines.h"

// 2 methods, 2 functions
struct TAchievementLaserDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TAchievementLaser_New)(TAchievementLaser* pThis); // [New at 0x6126D9] [0x10] ()i
    int(__cdecl* m_TAchievementLaser_Delete)(TAchievementLaser* pThis); // [Delete at 0x6126FB] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_RoundReset)(); // [RoundReset at 0x612709] [0x30] ()i
    int(__cdecl* fn_CountKill)(); // [CountKill at 0x61273F] [0x34] ()i
};


// 0 members
struct TAchievementLaser {
    TAchievementLaserDecl* decl; // 0x0
    int    refs;  // 0x4
};


