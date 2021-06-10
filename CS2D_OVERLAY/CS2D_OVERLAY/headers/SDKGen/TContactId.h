#pragma once

#include "defines.h"

// 9 methods, 1 functions
struct TContactIdDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_TContactId_New)(TContactId* pThis); // [New at 0x5EFCA6] [0x10] ()i
    int(__cdecl* m_TContactId_Delete)(TContactId* pThis); // [Delete at 0x5EFCDD] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TContactId_GetGeom1Index)(TContactId* pThis); // [GetGeom1Index at 0x5EFCEB] [0x30] ()i
    int(__cdecl* m_TContactId_SetGeom1Index)(TContactId* pThis, int a1); // [SetGeom1Index at 0x5EFCFA] [0x34] (i)i
    int(__cdecl* m_TContactId_GetGeom2Index)(TContactId* pThis); // [GetGeom2Index at 0x5EFD11] [0x38] ()i
    int(__cdecl* m_TContactId_SetGeom2Index)(TContactId* pThis, int a1); // [SetGeom2Index at 0x5EFD20] [0x3C] (i)i
    TContactId*(__cdecl* fn_Create)(int a1, int a2, int a3); // [Create at 0x5EFD37] [0x40] (i,i,i):TContactId
    int(__cdecl* m_TContactId_Equals)(TContactId* pThis, Object* a1); // [Equals at 0x5EFD65] [0x44] (:Object)i
    TContactId*(__cdecl* m_TContactId_Clone)(TContactId* pThis); // [Clone at 0x5EFDDF] [0x48] ():TContactId
    int(__cdecl* m_TContactId_CopyTo)(TContactId* pThis, TContactId* a1); // [CopyTo at 0x5EFDFC] [0x4C] (:TContactId)i
};


// 3 members
struct TContactId {
    TContactIdDecl* decl; // 0x0
    int    refs;  // 0x4
    int m__geometryAIndex; // 0x8 <type_i>
    int m__geometryAVertex; // 0xC <type_i>
    int m__geometryBIndex; // 0x10 <type_i>
};


