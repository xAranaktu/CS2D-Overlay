#pragma once

#include "defines.h"

// 2 methods, 1 functions
struct TCollisionEventArgsDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_TCollisionEventArgs_New)(TCollisionEventArgs* pThis); // [New at 0x5FADCA] [0x10] ()i
    int(__cdecl* m_TCollisionEventArgs_Delete)(TCollisionEventArgs* pThis); // [Delete at 0x5FAE14] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TCollisionEventArg*(__cdecl* fn_Create)(TGeom* a1, TGeom* a2, TContactList* a3, int a4); // [Create at 0x5FAE5A] [0x30] (:TGeom,:TGeom,:TContactList,i):TCollisionEventArg
};


// 4 members
struct TCollisionEventArgs {
    TCollisionEventArgsDecl* decl; // 0x0
    int    refs;  // 0x4
    TGeom* m_geom1; // 0x8 <type_:TGeom>
    TGeom* m_geom2; // 0xC <type_:TGeom>
    TContactList* m_contactList; // 0x10 <type_:TContactList>
    int m_isExiting; // 0x14 <type_i>
};


