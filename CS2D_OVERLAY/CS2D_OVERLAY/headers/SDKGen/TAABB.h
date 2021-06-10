#pragma once

#include "defines.h"

// 12 methods, 4 functions
struct TAABBDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_TAABB_New)(TAABB* pThis); // [New at 0x5EF0D0] [0x10] ()i
    int(__cdecl* m_TAABB_Delete)(TAABB* pThis); // [Delete at 0x5EF11F] [0x14] ()i
    BBString*(__cdecl* m_TAABB_ToString)(TAABB* pThis); // [ToString at 0x5EF631] [0x18] ()$
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    Vector2*(__cdecl* m_TAABB_GetMin)(TAABB* pThis); // [GetMin at 0x5EF165] [0x30] ():Vector2
    Vector2*(__cdecl* m_TAABB_GetMax)(TAABB* pThis); // [GetMax at 0x5EF17D] [0x34] ():Vector2
    float(__cdecl* m_TAABB_GetWidth)(TAABB* pThis); // [GetWidth at 0x5EF195] [0x38] ()f
    float(__cdecl* m_TAABB_GetHeight)(TAABB* pThis); // [GetHeight at 0x5EF1AD] [0x3C] ()f
    TVertices*(__cdecl* m_TAABB_GetVertices)(TAABB* pThis); // [GetVertices at 0x5EF1C5] [0x40] ():TVertices
    Vector2*(__cdecl* m_TAABB_GetCenter)(TAABB* pThis); // [GetCenter at 0x5EF24A] [0x44] ():Vector2
    float(__cdecl* m_TAABB_GetShortestSide)(TAABB* pThis); // [GetShortestSide at 0x5EF29F] [0x48] ()f
    TAABB*(__cdecl* fn_Create)(Vector2* a1, Vector2* a2); // [Create at 0x5EF2D7] [0x4C] (:Vector2,:Vector2):TAABB
    TAABB*(__cdecl* fn_CreateFromAABB)(TAABB* a1); // [CreateFromAABB at 0x5EF345] [0x50] (:TAABB):TAABB
    TAABB*(__cdecl* fn_CreateFromVertices)(TVertices* a1); // [CreateFromVertices at 0x5EF390] [0x54] (:TVertices):TAABB
    int(__cdecl* m_TAABB_Update)(TAABB* pThis, TVertices* a1); // [Update at 0x5EF3BB] [0x58] (:TVertices)i
    int(__cdecl* m_TAABB_Contains)(TAABB* pThis, Vector2* a1); // [Contains at 0x5EF504] [0x5C] (:Vector2)i
    int(__cdecl* fn_Intersect)(TAABB* a1, TAABB* a2); // [Intersect at 0x5EF597] [0x60] (:TAABB,:TAABB)i
};


// 4 members
struct TAABB {
    TAABBDecl* decl; // 0x0
    int    refs;  // 0x4
    float m__epsilon; // 0x8 <type_f>
    Vector2* m__min; // 0xC <type_:Vector2>
    Vector2* m__max; // 0x10 <type_:Vector2>
    Vector2* m__vertice; // 0x14 <type_:Vector2>
};


