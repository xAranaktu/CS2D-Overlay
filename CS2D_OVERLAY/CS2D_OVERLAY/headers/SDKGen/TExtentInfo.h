#pragma once

#include "defines.h"

// 2 methods, 1 functions
struct TExtentInfoDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_TExtentInfo_New)(TExtentInfo* pThis); // [New at 0x5F8B60] [0x10] ()i
    int(__cdecl* m_TExtentInfo_Delete)(TExtentInfo* pThis); // [Delete at 0x5F8BB9] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TExtentInfo*(__cdecl* fn_Create)(TGeom* a1, float a2, float a3); // [Create at 0x5F8C21] [0x30] (:TGeom,f,f):TExtentInfo
};


// 5 members
struct TExtentInfo {
    TExtentInfoDecl* decl; // 0x0
    int    refs;  // 0x4
    TGeom* m__geometry; // 0x8 <type_:TGeom>
    TExtent* m__min; // 0xC <type_:TExtent>
    TExtent* m__max; // 0x10 <type_:TExtent>
    TList* m__overlaps; // 0x14 <type_:TList>
    TList* m__underConsideration; // 0x18 <type_:TList>
};


