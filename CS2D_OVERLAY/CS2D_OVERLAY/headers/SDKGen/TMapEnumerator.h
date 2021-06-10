#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct TMapEnumeratorDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TMapEnumerator_New)(TMapEnumerator* pThis); // [New at 0x79A1E7] [0x10] ()i
    int(__cdecl* m_TMapEnumerator_Delete)(TMapEnumerator* pThis); // [Delete at 0x79A214] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TNodeEnumerator*(__cdecl* m_TMapEnumerator_ObjectEnumerator)(TMapEnumerator* pThis); // [ObjectEnumerator at 0x79A236] [0x30] ():TNodeEnumerator
};


// 1 members
struct TMapEnumerator {
    TMapEnumeratorDecl* decl; // 0x0
    int    refs;  // 0x4
    TNodeEnumerator* m__enumerator; // 0x8 <type_:TNodeEnumerator>
};


