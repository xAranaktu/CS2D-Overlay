#pragma once

#include "defines.h"

// 5 methods, 0 functions
struct IFluidContainerDecl {
    void* pSuper;  // 0x0 0x874950
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_IFluidContainer_New)(IFluidContainer* pThis); // [New at 0x5F9ADD] [0x10] ()i
    int(__cdecl* m_IFluidContainer_Delete)(IFluidContainer* pThis); // [Delete at 0x5F9AFF] [0x14] ()i
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
    int(__cdecl* m_IFluidContainer_Update)(IFluidContainer* pThis, float a1); // [Update at 0x5F9B1F] [0x40] (f)i
    int(__cdecl* m_IFluidContainer_Intersect)(IFluidContainer* pThis, TAABB* a1); // [Intersect at 0x7B6004] [0x44] (:TAABB)i
    int(__cdecl* m_IFluidContainer_Contains)(IFluidContainer* pThis, Vector2* a1); // [Contains at 0x7B6004] [0x48] (:Vector2)i
};


// Super: 0x874950
// 0 members
struct IFluidContainer {
    IFluidContainerDecl* decl; // 0x0
    int    refs;  // 0x4
};


