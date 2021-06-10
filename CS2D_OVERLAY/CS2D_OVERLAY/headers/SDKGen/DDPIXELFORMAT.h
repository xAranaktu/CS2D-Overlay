#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct DDPIXELFORMATDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 40(0x28)
    int(__cdecl* m_DDPIXELFORMAT_New)(DDPIXELFORMAT* pThis); // [New at 0x7A4779] [0x10] ()i
    int(__cdecl* m_DDPIXELFORMAT_Delete)(DDPIXELFORMAT* pThis); // [Delete at 0x7A47D3] [0x14] ()i
};


// 8 members
struct DDPIXELFORMAT {
    DDPIXELFORMATDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_dwSize; // 0x8 <type_i>
    int m_dwFlags; // 0xC <type_i>
    int m_dwFourCC; // 0x10 <type_i>
    int m_BitCount; // 0x14 <type_i>
    int m_BitMask_0; // 0x18 <type_i>
    int m_BitMask_1; // 0x1C <type_i>
    int m_BitMask_2; // 0x20 <type_i>
    int m_BitMask_3; // 0x24 <type_i>
};


