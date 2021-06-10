#pragma once

#include "defines.h"

// 2 methods, 4 functions
struct TDecalDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TDecal_New)(TDecal* pThis); // [New at 0x682F41] [0x10] ()i
    int(__cdecl* m_TDecal_Delete)(TDecal* pThis); // [Delete at 0x682F63] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_clear)(); // [clear at 0x682F71] [0x30] ()i
    int(__cdecl* fn_Init)(int a1, int a2); // [Init at 0x682F96] [0x34] (i,i)i
    int(__cdecl* fn_Add)(Tp* a1, int a2, int a3); // [Add at 0x682FEC] [0x38] (:Tp,i,i)i
    int(__cdecl* fn_Draw)(int a1, int a2, int a3); // [Draw at 0x6830D2] [0x3C] (i,i,i)i
};


// 0 members
struct TDecal {
    TDecalDecl* decl; // 0x0
    int    refs;  // 0x4
};


