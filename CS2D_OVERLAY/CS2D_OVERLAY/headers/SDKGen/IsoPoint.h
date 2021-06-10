#pragma once

#include "defines.h"

// 2 methods, 1 functions
struct IsoPointDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_IsoPoint_New)(IsoPoint* pThis); // [New at 0x5C5FCF] [0x10] ()i
    int(__cdecl* m_IsoPoint_Delete)(IsoPoint* pThis); // [Delete at 0x5C5FFF] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    IsoPoint*(__cdecl* fn_Create)(int a1, int a2); // [Create at 0x5C600D] [0x30] (i,i):IsoPoint
};


// 2 members
struct IsoPoint {
    IsoPointDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_x; // 0x8 <type_i>
    int m_y; // 0xC <type_i>
};


