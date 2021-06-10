#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct TValueEnumeratorDecl {
    void* pSuper;  // 0x0 0x8E7EA8
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TValueEnumerator_New)(TValueEnumerator* pThis); // [New at 0x79A168] [0x10] ()i
    int(__cdecl* m_TValueEnumerator_Delete)(TValueEnumerator* pThis); // [Delete at 0x79A18A] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    Object*(__cdecl* m_TValueEnumerator_NextObject)(TValueEnumerator* pThis); // [NextObject at 0x79A1AA] [0x34] ():Object
};


// Super: 0x8E7EA8
// 0 members
struct TValueEnumerator {
    TValueEnumeratorDecl* decl; // 0x0
    int    refs;  // 0x4
};


