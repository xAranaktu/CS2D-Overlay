#pragma once

#include "defines.h"

// 2 methods, 41 functions
struct TSmartLightingDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TSmartLighting_New)(TSmartLighting* pThis); // [New at 0x5E1226] [0x10] ()i
    int(__cdecl* m_TSmartLighting_Delete)(TSmartLighting* pThis); // [Delete at 0x5E1248] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_SetToningInitColor)(int a1, int a2); // [SetToningInitColor at 0x5E1256] [0x30] (i,i)i
    int(__cdecl* fn_GetToningColor)(int a1, void* a2, void* a3, void* a4); // [GetToningColor at 0x5E1292] [0x34] (i,*i,*i,*i)i
    float(__cdecl* fn_GetShadowRotation)(); // [GetShadowRotation at 0x5E130A] [0x38] ()f
    float(__cdecl* fn_GetShadowSunRotation)(); // [GetShadowSunRotation at 0x5E1339] [0x3C] ()f
    int(__cdecl* fn_ResetFBO)(); // [ResetFBO at 0x5E1368] [0x40] ()i
    int(__cdecl* fn_ClearFBO)(); // [ClearFBO at 0x5E1414] [0x44] ()i
    int(__cdecl* fn_SetCustomScreen)(int a1, int a2); // [SetCustomScreen at 0x5E149A] [0x48] (i,i)i
    int(__cdecl* fn_SetTileHeight)(int a1, float a2); // [SetTileHeight at 0x5E14DC] [0x4C] (i,f)i
    int(__cdecl* fn_DrawSpriteLight)(TImage* a1, float a2, float a3, float a4, float a5, void* a6, int a7, float a8, int a9); // [DrawSpriteLight at 0x5E14F9] [0x50] (:TImage,f,f,f,f,[]i,i,f,i)i
    int(__cdecl* fn_DrawSpriteLightFloor)(TImage* a1, float a2, float a3, float a4, float a5, void* a6, int a7, float a8, int a9); // [DrawSpriteLightFloor at 0x5E155D] [0x54] (:TImage,f,f,f,f,[]i,i,f,i)i
    int(__cdecl* fn_GlobalInit)(); // [GlobalInit at 0x5E15DD] [0x58] ()i
    int(__cdecl* fn_InitMap)(int a1, int a2); // [InitMap at 0x5E165C] [0x5C] (i,i)i
    int(__cdecl* fn_SetTile)(int a1, int a2, int a3, int a4); // [SetTile at 0x5E16F9] [0x60] (i,i,i,i)i
    int(__cdecl* fn_SetCamera)(float a1, float a2); // [SetCamera at 0x5E18EE] [0x64] (f,f)i
    int(__cdecl* fn_SetQuality)(int a1); // [SetQuality at 0x5E1910] [0x68] (i)i
    int(__cdecl* fn_SetSunAngle)(float a1); // [SetSunAngle at 0x5E1B03] [0x6C] (f)i
    int(__cdecl* fn_SetTime)(float a1); // [SetTime at 0x5E1B1A] [0x70] (f)i
    int(__cdecl* fn_SetTimeInit)(float a1); // [SetTimeInit at 0x5E1B4B] [0x74] (f)i
    int(__cdecl* fn_SetTimeClock)(int a1, int a2); // [SetTimeClock at 0x5E1B88] [0x78] (i,i)i
    int(__cdecl* fn_SetGlobalBrightness)(int a1); // [SetGlobalBrightness at 0x5E1BE5] [0x7C] (i)i
    int(__cdecl* fn_SetNightColor)(int a1, int a2, int a3); // [SetNightColor at 0x5E1BFB] [0x80] (i,i,i)i
    TLightSource*(__cdecl* fn_CreateLight)(int a1, int a2, float a3, void* a4, int a5, float a6, int a7, int a8); // [CreateLight at 0x5E1C23] [0x84] (i,i,f,[]i,i,f,i,i):TLightSource
    TLightingRoom*(__cdecl* fn_CreateRoom)(int a1, int a2, int a3, int a4, int a5, void* a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13); // [CreateRoom at 0x5E1C65] [0x88] (i,i,i,i,i,[]i,i,i,i,i,i,i,i):TLightingRoom
    TLightingStripe*(__cdecl* fn_CreateStripe)(int a1, int a2, int a3, int a4, int a5, int a6, void* a7, int a8, float a9); // [CreateStripe at 0x5E1CB8] [0x8C] (i,i,i,i,i,i,[]i,i,f):TLightingStripe
    int(__cdecl* fn_ClearEverything)(); // [ClearEverything at 0x5E1CF7] [0x90] ()i
    int(__cdecl* fn_DrawLayer1)(); // [DrawLayer1 at 0x5E1D44] [0x94] ()i
    int(__cdecl* fn_DrawLayer2)(); // [DrawLayer2 at 0x5E1DA7] [0x98] ()i
    int(__cdecl* fn_Update)(); // [Update at 0x5E1E11] [0x9C] ()i
    int(__cdecl* fn_DrawTilesFloor)(); // [DrawTilesFloor at 0x5E1F19] [0xA0] ()i
    int(__cdecl* fn_GetTileHeight)(int a1, int a2); // [GetTileHeight at 0x5E3A6B] [0xA4] (i,i)i
    int(__cdecl* fn_GetT)(int a1, int a2); // [GetT at 0x5E3A9F] [0xA8] (i,i)i
    int(__cdecl* fn_GetTileMap)(int a1, int a2); // [GetTileMap at 0x5E3B0A] [0xAC] (i,i)i
    int(__cdecl* fn_GetTile)(int a1, int a2); // [GetTile at 0x5E3B9C] [0xB0] (i,i)i
    int(__cdecl* fn_GetTileUnWalkable)(int a1, int a2); // [GetTileUnWalkable at 0x5E3C07] [0xB4] (i,i)i
    int(__cdecl* fn_InMap)(int a1, int a2); // [InMap at 0x5E3C7D] [0xB8] (i,i)i
    int(__cdecl* fn_GetTileWall)(int a1, int a2); // [GetTileWall at 0x5E3CCE] [0xBC] (i,i)i
    int(__cdecl* fn_GetRoom)(int a1, int a2); // [GetRoom at 0x5E3D44] [0xC0] (i,i)i
    int(__cdecl* fn_GetNightColor)(); // [GetNightColor at 0x5E3DBA] [0xC4] ()i
    int(__cdecl* fn_DrawToning)(); // [DrawToning at 0x5E3E5E] [0xC8] ()i
    int(__cdecl* fn_GenerateMainBuffer)(); // [GenerateMainBuffer at 0x5E3F7F] [0xCC] ()i
    int(__cdecl* fn_GenerateDayBuffer)(); // [GenerateDayBuffer at 0x5E4146] [0xD0] ()i
};


// 0 members
struct TSmartLighting {
    TSmartLightingDecl* decl; // 0x0
    int    refs;  // 0x4
};


