#pragma once

#include "defines.h"

// 2 methods, 1 functions
struct TExtentDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_TExtent_New)(TExtent* pThis); // [New at 0x5F8ABB] [0x10] ()i
    int(__cdecl* m_TExtent_Delete)(TExtent* pThis); // [Delete at 0x5F8AF4] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TExtent*(__cdecl* fn_Create)(TExtentInfo* a1, float a2, int a3); // [Create at 0x5F8B16] [0x30] (:TExtentInfo,f,i):TExtent
};


// 3 members
struct TExtent {
    TExtentDecl* decl; // 0x0
    int    refs;  // 0x4
    int m__isMin; // 0x8 <type_i>
    float m__value; // 0xC <type_f>
    TExtentInfo* m__info; // 0x10 <type_:TExtentInfo>
};


