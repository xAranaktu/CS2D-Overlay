#pragma once

#include "defines.h"

// 2 methods, 1 functions
struct TICMPDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_TICMP_New)(TICMP* pThis); // [New at 0x791B48] [0x10] ()i
    int(__cdecl* m_TICMP_Delete)(TICMP* pThis); // [Delete at 0x791B84] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    short(__cdecl* fn_BuildChecksum)(void* a1, int a2); // [BuildChecksum at 0x791B92] [0x30] (*s,i)s
};


// 5 members
struct TICMP {
    TICMPDecl* decl; // 0x0
    int    refs;  // 0x4
    char m__Type; // 0x8 <type_b>
    char m_Code; // 0x9 <type_b>
    short m_Checksum; // 0xA <type_s>
    short m_ID; // 0xC <type_s>
    short m_Sequence; // 0xE <type_s>
};


