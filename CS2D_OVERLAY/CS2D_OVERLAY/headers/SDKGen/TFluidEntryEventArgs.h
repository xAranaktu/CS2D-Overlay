#pragma once

#include "defines.h"

// 2 methods, 1 functions
struct TFluidEntryEventArgsDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_TFluidEntryEventArgs_New)(TFluidEntryEventArgs* pThis); // [New at 0x5FA43C] [0x10] ()i
    int(__cdecl* m_TFluidEntryEventArgs_Delete)(TFluidEntryEventArgs* pThis); // [Delete at 0x5FA477] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TFluidEntryEventArgs*(__cdecl* fn_Create)(TGeom* a1, int a2); // [Create at 0x5FA499] [0x30] (:TGeom,i):TFluidEntryEventArgs
};


// 3 members
struct TFluidEntryEventArgs {
    TFluidEntryEventArgsDecl* decl; // 0x0
    int    refs;  // 0x4
    TGeom* m_geom; // 0x8 <type_:TGeom>
    int m_isEntry; // 0xC <type_i>
    int m_isExit; // 0x10 <type_i>
};


