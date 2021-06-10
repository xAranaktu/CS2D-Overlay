#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct TSockAddrDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_TSockAddr_New)(TSockAddr* pThis); // [New at 0x791AF7] [0x10] ()i
    int(__cdecl* m_TSockAddr_Delete)(TSockAddr* pThis); // [Delete at 0x791B3A] [0x14] ()i
};


// 4 members
struct TSockAddr {
    TSockAddrDecl* decl; // 0x0
    int    refs;  // 0x4
    short m_SinFamily; // 0x8 <type_s>
    short m_SinPort; // 0xA <type_s>
    int m_SinAddr; // 0xC <type_i>
    long long m_SinZero; // 0x10 <type_l>
};


