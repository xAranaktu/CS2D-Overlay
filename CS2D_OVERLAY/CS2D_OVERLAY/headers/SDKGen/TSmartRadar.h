#pragma once

#include "defines.h"

// 2 methods, 27 functions
struct TSmartRadarDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TSmartRadar_New)(TSmartRadar* pThis); // [New at 0x5C6B40] [0x10] ()i
    int(__cdecl* m_TSmartRadar_Delete)(TSmartRadar* pThis); // [Delete at 0x5C6B62] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Clear)(); // [Clear at 0x5C6B70] [0x30] ()i
    int(__cdecl* fn_RemoveBombSpots)(); // [RemoveBombSpots at 0x5C6BA1] [0x34] ()i
    int(__cdecl* fn_RemoveResquePoints)(); // [RemoveResquePoints at 0x5C6BB9] [0x38] ()i
    int(__cdecl* fn_RemoveEscapePoints)(); // [RemoveEscapePoints at 0x5C6BD1] [0x3C] ()i
    int(__cdecl* fn_CreateEscapePoint)(float a1, float a2); // [CreateEscapePoint at 0x5C6BE9] [0x40] (f,f)i
    int(__cdecl* fn_MiniMapExist)(); // [MiniMapExist at 0x5C6C12] [0x44] ()i
    int(__cdecl* fn_EPTileExists)(float a1, float a2); // [EPTileExists at 0x5C6C2B] [0x48] (f,f)i
    int(__cdecl* fn_CreateEPTile)(float a1, float a2); // [CreateEPTile at 0x5C6C94] [0x4C] (f,f)i
    int(__cdecl* fn_CreateResquePoint)(float a1, float a2); // [CreateResquePoint at 0x5C6CF4] [0x50] (f,f)i
    int(__cdecl* fn_RPTileExists)(float a1, float a2); // [RPTileExists at 0x5C6D4E] [0x54] (f,f)i
    int(__cdecl* fn_CreateRPTile)(float a1, float a2); // [CreateRPTile at 0x5C6DB7] [0x58] (f,f)i
    int(__cdecl* fn_CreateBombSpot)(float a1, float a2); // [CreateBombSpot at 0x5C6E17] [0x5C] (f,f)i
    int(__cdecl* fn_BombSpotTileExists)(float a1, float a2); // [BombSpotTileExists at 0x5C6E71] [0x60] (f,f)i
    int(__cdecl* fn_CreateBombSpotTile)(float a1, float a2); // [CreateBombSpotTile at 0x5C6EDA] [0x64] (f,f)i
    int(__cdecl* fn_Init)(); // [Init at 0x5C6F3A] [0x68] ()i
    int(__cdecl* fn_SetSize)(float a1); // [SetSize at 0x5C6F8F] [0x6C] (f)i
    int(__cdecl* fn_SetMinimapScale)(float a1); // [SetMinimapScale at 0x5C7069] [0x70] (f)i
    int(__cdecl* fn_SetMode)(int a1, TImage* a2); // [SetMode at 0x5C70B5] [0x74] (i,:TImage)i
    int(__cdecl* fn_DrawCircleBeep)(float a1, float a2, float a3, float a4); // [DrawCircleBeep at 0x5C7108] [0x78] (f,f,f,f)i
    int(__cdecl* fn_DrawIcon)(float a1, float a2, int a3, int a4, int a5, int a6, int a7); // [DrawIcon at 0x5C7148] [0x7C] (f,f,i,i,i,i,i)i
    int(__cdecl* fn_SetCamera)(float a1, float a2); // [SetCamera at 0x5C71D8] [0x80] (f,f)i
    int(__cdecl* fn_CheckCache)(); // [CheckCache at 0x5C71FA] [0x84] ()i
    int(__cdecl* fn_Update)(); // [Update at 0x5C7597] [0x88] ()i
    int(__cdecl* fn_SetAlphaInMap)(float a1, float a2); // [SetAlphaInMap at 0x5C78EA] [0x8C] (f,f)i
    int(__cdecl* fn_Draw)(float a1, float a2); // [Draw at 0x5C79C0] [0x90] (f,f)i
    int(__cdecl* fn_DrawSmoothLine)(float a1, float a2, float a3, float a4); // [DrawSmoothLine at 0x5C9138] [0x94] (f,f,f,f)i
    int(__cdecl* fn_CreateFolder)(); // [CreateFolder at 0x5C921E] [0x98] ()i
};


// 0 members
struct TSmartRadar {
    TSmartRadarDecl* decl; // 0x0
    int    refs;  // 0x4
};


