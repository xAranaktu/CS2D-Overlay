#pragma once

#include "defines.h"

// 2 methods, 9 functions
struct SmartPhysicsGraphicsDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_SmartPhysicsGraphics_New)(SmartPhysicsGraphics* pThis); // [New at 0x60A667] [0x10] ()i
    int(__cdecl* m_SmartPhysicsGraphics_Delete)(SmartPhysicsGraphics* pThis); // [Delete at 0x60A689] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_DrawObjects)(); // [DrawObjects at 0x60A697] [0x30] ()i
    int(__cdecl* fn_DrawGeomOcclussion)(TGeom* a1); // [DrawGeomOcclussion at 0x60A90B] [0x34] (:TGeom)i
    int(__cdecl* fn_DrawPlatformsLighting)(); // [DrawPlatformsLighting at 0x60AE0A] [0x38] ()i
    int(__cdecl* fn_DrawPlatforms)(); // [DrawPlatforms at 0x60AE28] [0x3C] ()i
    int(__cdecl* fn_wdds)(); // [wdds at 0x60AEF5] [0x40] ()i
    int(__cdecl* fn_RenderGeomDefault)(TGeom* a1, PhysicsUniqueID* a2); // [RenderGeomDefault at 0x60AF03] [0x44] (:TGeom,:PhysicsUniqueID)i
    int(__cdecl* fn_DrawDebug)(); // [DrawDebug at 0x60B136] [0x48] ()i
    int(__cdecl* fn_DrawViewPort)(float a1, float a2, float a3, float a4, int a5, int a6); // [DrawViewPort at 0x60B1C3] [0x4C] (f,f,f,f,i,i)i
    int(__cdecl* fn_RenderGeomLighting)(TGeom* a1, PhysicsUniqueID* a2); // [RenderGeomLighting at 0x60B487] [0x50] (:TGeom,:PhysicsUniqueID)i
};


// 0 members
struct SmartPhysicsGraphics {
    SmartPhysicsGraphicsDecl* decl; // 0x0
    int    refs;  // 0x4
};


