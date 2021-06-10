#pragma once

#include "defines.h"

// 8 methods, 0 functions
struct TGridDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 32(0x20)
    int(__cdecl* m_TGrid_New)(TGrid* pThis); // [New at 0x5ED6A0] [0x10] ()i
    int(__cdecl* m_TGrid_Delete)(TGrid* pThis); // [Delete at 0x5ED6F9] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void*(__cdecl* m_TGrid_GetPoints)(TGrid* pThis); // [GetPoints at 0x5ED750] [0x30] ()[]:Vector2
    TGrid*(__cdecl* m_TGrid_Clone)(TGrid* pThis); // [Clone at 0x5ED75F] [0x34] ():TGrid
    void*(__cdecl* m_TGrid__CopyPoints)(TGrid* pThis); // [_CopyPoints at 0x5ED7FB] [0x38] ()[]:Vector2
    void*(__cdecl* m_TGrid__CopyNodes)(TGrid* pThis); // [_CopyNodes at 0x5ED86D] [0x3C] ()[,]f
    int(__cdecl* m_TGrid_ComputeGrid)(TGrid* pThis, TGeom* a1, float a2); // [ComputeGrid at 0x5ED936] [0x40] (:TGeom,f)i
    int(__cdecl* m_TGrid_Intersect)(TGrid* pThis, Vector2* a1, void* a2); // [Intersect at 0x5EDBA8] [0x44] (:Vector2,*:TFeature)i
};


// 6 members
struct TGrid {
    TGridDecl* decl; // 0x0
    int    refs;  // 0x4
    float m__gridCellSize; // 0x8 <type_f>
    float m__gridCellSizeInv; // 0xC <type_f>
    TAABB* m__aabb; // 0x10 <type_:TAABB>
    void* m__nodes; // 0x14 <type_[,]f>
    void* m__points; // 0x18 <type_[]:Vector2>
    Vector2* m__normalTemp; // 0x1C <type_:Vector2>
};


