#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct TBodyEventListenerDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TBodyEventListener_New)(TBodyEventListener* pThis); // [New at 0x5F1388] [0x10] ()i
    int(__cdecl* m_TBodyEventListener_Delete)(TBodyEventListener* pThis); // [Delete at 0x5F13AA] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TBodyEventListener_BodyChanged)(TBodyEventListener* pThis, Vector2* a1, float a2); // [BodyChanged at 0x7B6004] [0x30] (:Vector2,f)i
};


// 0 members
struct TBodyEventListener {
    TBodyEventListenerDecl* decl; // 0x0
    int    refs;  // 0x4
};


