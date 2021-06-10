#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct GUIDDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_GUID_New)(GUID* pThis); // [New at 0x7A50C5] [0x10] ()i
    int(__cdecl* m_GUID_Delete)(GUID* pThis); // [Delete at 0x7A511A] [0x14] ()i
};


// 11 members
struct GUID {
    GUIDDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_data1; // 0x8 <type_i>
    short m_data2; // 0xC <type_s>
    short m_data3; // 0xE <type_s>
    char m_data41; // 0x10 <type_b>
    char m_data42; // 0x11 <type_b>
    char m_data43; // 0x12 <type_b>
    char m_data44; // 0x13 <type_b>
    char m_data45; // 0x14 <type_b>
    char m_data46; // 0x15 <type_b>
    char m_data47; // 0x16 <type_b>
    char m_data48; // 0x17 <type_b>
};


