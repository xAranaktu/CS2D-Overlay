#pragma once

#include "defines.h"

// 3 methods, 1 functions
struct TGeomBodyListenerDecl {
    void* pSuper;  // 0x0 0x876040
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TGeomBodyListener_New)(TGeomBodyListener* pThis); // [New at 0x5EB3A7] [0x10] ()i
    int(__cdecl* m_TGeomBodyListener_Delete)(TGeomBodyListener* pThis); // [Delete at 0x5EB3D4] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TGeomBodyListener_BodyChanged)(TGeomBodyListener* pThis, Vector2* a1, float a2); // [BodyChanged at 0x5EB43F] [0x30] (:Vector2,f)i
    TGeomBodyListener*(__cdecl* fn_Create)(TGeom* a1); // [Create at 0x5EB407] [0x34] (:TGeom):TGeomBodyListener
};


// Super: 0x876040
// 1 members
struct TGeomBodyListener {
    TGeomBodyListenerDecl* decl; // 0x0
    int    refs;  // 0x4
    TGeom* m__geom; // 0x8 <type_:TGeom>
};


