#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct VARIANTDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_VARIANT_New)(VARIANT* pThis); // [New at 0x7A5128] [0x10] ()i
    int(__cdecl* m_VARIANT_Delete)(VARIANT* pThis); // [Delete at 0x7A5170] [0x14] ()i
};


// 5 members
struct VARIANT {
    VARIANTDecl* decl; // 0x0
    int    refs;  // 0x4
    short m_vt; // 0x8 <type_s>
    short m_res1; // 0xA <type_s>
    short m_res2; // 0xC <type_s>
    short m_res3; // 0xE <type_s>
    long long m_data; // 0x10 <type_l>
};


