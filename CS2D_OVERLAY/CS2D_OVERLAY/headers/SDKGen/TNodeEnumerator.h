#pragma once

#include "defines.h"

// 4 methods, 0 functions
struct TNodeEnumeratorDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TNodeEnumerator_New)(TNodeEnumerator* pThis); // [New at 0x79A043] [0x10] ()i
    int(__cdecl* m_TNodeEnumerator_Delete)(TNodeEnumerator* pThis); // [Delete at 0x79A070] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TNodeEnumerator_HasNext)(TNodeEnumerator* pThis); // [HasNext at 0x79A092] [0x30] ()i
    Object*(__cdecl* m_TNodeEnumerator_NextObject)(TNodeEnumerator* pThis); // [NextObject at 0x79A0AD] [0x34] ():Object
};


// 1 members
struct TNodeEnumerator {
    TNodeEnumeratorDecl* decl; // 0x0
    int    refs;  // 0x4
    TNode* m__node; // 0x8 <type_:TNode>
};


