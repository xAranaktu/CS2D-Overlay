#pragma once

#include "defines.h"

// 6 methods, 1 functions
struct TAABBFluidContainerDecl {
    void* pSuper;  // 0x0 0x87DE60
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_TAABBFluidContainer_New)(TAABBFluidContainer* pThis); // [New at 0x5F9B2D] [0x10] ()i
    int(__cdecl* m_TAABBFluidContainer_Delete)(TAABBFluidContainer* pThis); // [Delete at 0x5F9B5A] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    void* nothing_12; // 0x34
    void* nothing_13; // 0x38
    void* nothing_14; // 0x3C
    void* nothing_15; // 0x40
    int(__cdecl* m_TAABBFluidContainer_Intersect)(TAABBFluidContainer* pThis, TAABB* a1); // [Intersect at 0x5F9C03] [0x44] (:TAABB)i
    int(__cdecl* m_TAABBFluidContainer_Contains)(TAABBFluidContainer* pThis, Vector2* a1); // [Contains at 0x5F9C1F] [0x48] (:Vector2)i
    TAABB*(__cdecl* m_TAABBFluidContainer_GetAABB)(TAABBFluidContainer* pThis); // [GetAABB at 0x5F9B8D] [0x4C] ():TAABB
    int(__cdecl* m_TAABBFluidContainer_SetAABB)(TAABBFluidContainer* pThis, TAABB* a1); // [SetAABB at 0x5F9B9C] [0x50] (:TAABB)i
    TAABBFluidContainer*(__cdecl* fn_Create)(TAABB* a1); // [Create at 0x5F9BCB] [0x54] (:TAABB):TAABBFluidContainer
};


// Super: 0x87DE60
// 1 members
struct TAABBFluidContainer {
    TAABBFluidContainerDecl* decl; // 0x0
    int    refs;  // 0x4
    TAABB* m__aabb; // 0x10 <type_:TAABB>
};


