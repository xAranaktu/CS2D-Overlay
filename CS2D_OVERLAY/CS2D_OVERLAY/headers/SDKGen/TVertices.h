#pragma once

#include "defines.h"

// 28 methods, 4 functions
struct TVerticesDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 36(0x24)
    int(__cdecl* m_TVertices_New)(TVertices* pThis); // [New at 0x5EDE08] [0x10] ()i
    int(__cdecl* m_TVertices_Delete)(TVertices* pThis); // [Delete at 0x5EDE7D] [0x14] ()i
    BBString*(__cdecl* m_TVertices_ToString)(TVertices* pThis); // [ToString at 0x5EF056] [0x18] ()$
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void*(__cdecl* m_TVertices_GetVerticesArray)(TVertices* pThis); // [GetVerticesArray at 0x5EDF07] [0x30] ()[]:Vector2
    TVertices*(__cdecl* fn_Create)(void* a1); // [Create at 0x5EDF79] [0x34] ([]:Vector2):TVertices
    TVertices*(__cdecl* fn_CreateFromVertices)(TVertices* a1); // [CreateFromVertices at 0x5EDFC6] [0x38] (:TVertices):TVertices
    TVertices*(__cdecl* fn_CreateRectangle)(float a1, float a2); // [CreateRectangle at 0x5EE019] [0x3C] (f,f):TVertices
    TVertices*(__cdecl* fn_CreateCircle)(float a1, int a2); // [CreateCircle at 0x5EE32D] [0x40] (f,i):TVertices
    int(__cdecl* m_TVertices_Add)(TVertices* pThis, Vector2* a1); // [Add at 0x5EE41E] [0x44] (:Vector2)i
    int(__cdecl* m_TVertices_Clear)(TVertices* pThis); // [Clear at 0x5EE511] [0x48] ()i
    int(__cdecl* m_TVertices_NextIndex)(TVertices* pThis, int a1); // [NextIndex at 0x5EE592] [0x4C] (i)i
    int(__cdecl* m_TVertices_Reverse)(TVertices* pThis); // [Reverse at 0x5EE5B8] [0x50] ()i
    int(__cdecl* m_TVertices_Count)(TVertices* pThis); // [Count at 0x5EE644] [0x54] ()i
    int(__cdecl* m_TVertices_PreviousIndex)(TVertices* pThis, int a1); // [PreviousIndex at 0x5EE656] [0x58] (i)i
    Vector2*(__cdecl* m_TVertices_GetEdge)(TVertices* pThis, int a1); // [GetEdge at 0x5EE678] [0x5C] (i):Vector2
    int(__cdecl* m_TVertices_GetEdgeRef)(TVertices* pThis, int a1, Vector2* a2); // [GetEdgeRef at 0x5EE6F3] [0x60] (i,:Vector2)i
    Vector2*(__cdecl* m_TVertices_GetEdgeMidPoint)(TVertices* pThis, int a1); // [GetEdgeMidPoint at 0x5EE76C] [0x64] (i):Vector2
    int(__cdecl* m_TVertices_GetEdgetMidPointRef)(TVertices* pThis, int a1, Vector2* a2); // [GetEdgetMidPointRef at 0x5EE7DE] [0x68] (i,:Vector2)i
    Vector2*(__cdecl* m_TVertices_GetEdgeNormal)(TVertices* pThis, int a1); // [GetEdgeNormal at 0x5EE84E] [0x6C] (i):Vector2
    int(__cdecl* m_TVertices_GetEdgeNormalRef)(TVertices* pThis, int a1, Vector2* a2); // [GetEdgeNormalRef at 0x5EE8A1] [0x70] (i,:Vector2)i
    Vector2*(__cdecl* m_TVertices_GetVertexNormal)(TVertices* pThis, int a1); // [GetVertexNormal at 0x5EE8F0] [0x74] (i):Vector2
    int(__cdecl* m_TVertices_GetVertexNormalRef)(TVertices* pThis, int a1, Vector2* a2); // [GetVertexNormalRef at 0x5EE954] [0x78] (i,:Vector2)i
    float(__cdecl* m_TVertices_GetShortestEdge)(TVertices* pThis); // [GetShortestEdge at 0x5EE9BA] [0x7C] ()f
    int(__cdecl* m_TVertices_SubDivideEdges)(TVertices* pThis, float a1); // [SubDivideEdges at 0x5EEA2F] [0x80] (f)i
    int(__cdecl* m_TVertices_ForceCounterClockWiseOrder)(TVertices* pThis); // [ForceCounterClockWiseOrder at 0x5EEBAB] [0x84] ()i
    float(__cdecl* m_TVertices__GetSignedArea)(TVertices* pThis); // [_GetSignedArea at 0x5EEBE7] [0x88] ()f
    float(__cdecl* m_TVertices_GetArea)(TVertices* pThis); // [GetArea at 0x5EEC58] [0x8C] ()f
    Vector2*(__cdecl* m_TVertices_GetCentroid)(TVertices* pThis); // [GetCentroid at 0x5EECD7] [0x90] ():Vector2
    Vector2*(__cdecl* m_TVertices_GetCentroidByArea)(TVertices* pThis, float a1); // [GetCentroidByArea at 0x5EED03] [0x94] (f):Vector2
    float(__cdecl* m_TVertices_GetMomentOfInertia)(TVertices* pThis); // [GetMomentOfInertia at 0x5EEDF6] [0x98] ()f
    int(__cdecl* m_TVertices_ProjectToAxis)(TVertices* pThis, Vector2* a1, void* a2, void* a3); // [ProjectToAxis at 0x5EEF67] [0x9C] (:Vector2,*f,*f)i
    int(__cdecl* m_TVertices_Translate)(TVertices* pThis, Vector2* a1); // [Translate at 0x5EF00E] [0xA0] (:Vector2)i
};


// 7 members
struct TVertices {
    TVerticesDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m__vecArray; // 0x8 <type_[]:Vector2>
    Vector2* m__vectorTemp1; // 0xC <type_:Vector2>
    Vector2* m__vectorTemp2; // 0x10 <type_:Vector2>
    Vector2* m__vectorTemp3; // 0x14 <type_:Vector2>
    Vector2* m__vectorTemp4; // 0x18 <type_:Vector2>
    Vector2* m__vectorTemp5; // 0x1C <type_:Vector2>
    Vector2* m__res; // 0x20 <type_:Vector2>
};


