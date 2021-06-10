#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct TAdapterInfoDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_TAdapterInfo_New)(TAdapterInfo* pThis); // [New at 0x791CB9] [0x10] ()i
    int(__cdecl* m_TAdapterInfo_Delete)(TAdapterInfo* pThis); // [Delete at 0x791D10] [0x14] ()i
};


// 5 members
struct TAdapterInfo {
    TAdapterInfoDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_Device; // 0x8 <type_$>
    void* m_MAC; // 0xC <type_[]b>
    int m_Address; // 0x10 <type_i>
    int m_Broadcast; // 0x14 <type_i>
    int m_Netmask; // 0x18 <type_i>
};


