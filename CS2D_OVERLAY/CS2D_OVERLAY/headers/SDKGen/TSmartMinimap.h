#pragma once

#include "defines.h"

// 2 methods, 16 functions
struct TSmartMinimapDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TSmartMinimap_New)(TSmartMinimap* pThis); // [New at 0x5C938F] [0x10] ()i
    int(__cdecl* m_TSmartMinimap_Delete)(TSmartMinimap* pThis); // [Delete at 0x5C93B1] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Clear)(); // [Clear at 0x5C93BF] [0x30] ()i
    int(__cdecl* fn_Init)(int a1); // [Init at 0x5C940C] [0x34] (i)i
    int(__cdecl* fn_Update)(); // [Update at 0x5C9579] [0x38] ()i
    int(__cdecl* fn_Draw)(int a1); // [Draw at 0x5C9853] [0x3C] (i)i
    int(__cdecl* fn_DrawButton)(int a1, int a2, int a3, int a4); // [DrawButton at 0x5C9E30] [0x40] (i,i,i,i)i
    int(__cdecl* fn_DrawMapMarker)(int a1, int a2); // [DrawMapMarker at 0x5C9FFE] [0x44] (i,i)i
    int(__cdecl* fn_DrawPlayerNames)(int a1, int a2); // [DrawPlayerNames at 0x5CA1BE] [0x48] (i,i)i
    int(__cdecl* fn_DrawBomb)(int a1, int a2); // [DrawBomb at 0x5CA394] [0x4C] (i,i)i
    int(__cdecl* fn_DrawHostages)(int a1, int a2); // [DrawHostages at 0x5CA5B9] [0x50] (i,i)i
    int(__cdecl* fn_DrawPlayers)(int a1, int a2); // [DrawPlayers at 0x5CA6BB] [0x54] (i,i)i
    int(__cdecl* fn_DrawFlags)(float a1, float a2); // [DrawFlags at 0x5CAA62] [0x58] (f,f)i
    int(__cdecl* fn_DrawEntities)(int a1, int a2); // [DrawEntities at 0x5CAB88] [0x5C] (i,i)i
    int(__cdecl* fn_DrawPlayerTrails)(int a1, int a2); // [DrawPlayerTrails at 0x5CAE3A] [0x60] (i,i)i
    int(__cdecl* fn_DrawDeathIcons)(int a1, int a2); // [DrawDeathIcons at 0x5CB10A] [0x64] (i,i)i
    int(__cdecl* fn_DrawBackground)(int a1, int a2, int a3, int a4); // [DrawBackground at 0x5CB28E] [0x68] (i,i,i,i)i
    int(__cdecl* fn_CreateFolder)(); // [CreateFolder at 0x5CB464] [0x6C] ()i
};


// 0 members
struct TSmartMinimap {
    TSmartMinimapDecl* decl; // 0x0
    int    refs;  // 0x4
};


