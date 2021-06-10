#pragma once

#include "defines.h"

// 3 methods, 1 functions
struct TStubDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_TStub_New)(TStub* pThis); // [New at 0x5EFE22] [0x10] ()i
    int(__cdecl* m_TStub_Delete)(TStub* pThis); // [Delete at 0x5EFE5B] [0x14] ()i
    void* nothing_5; // 0x18
    int(__cdecl* m_TStub_Compare)(TStub* pThis, Object* a1); // [Compare at 0x5EFEC1] [0x1C] (:Object)i
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TStub*(__cdecl* fn_Create)(TWrapper* a1, int a2); // [Create at 0x5EFE7D] [0x30] (:TWrapper,i):TStub
};


// 3 members
struct TStub {
    TStubDecl* decl; // 0x0
    int    refs;  // 0x4
    TWrapper* m_wrapper; // 0x8 <type_:TWrapper>
    int m_begin; // 0xC <type_i>
    float m_value; // 0x10 <type_f>
};


