#pragma once

#include "defines.h"

// 2 methods, 3 functions
struct TModFileCounterDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TModFileCounter_New)(TModFileCounter* pThis); // [New at 0x625368] [0x10] ()i
    int(__cdecl* m_TModFileCounter_Delete)(TModFileCounter* pThis); // [Delete at 0x62538A] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_GetModFileCount)(); // [GetModFileCount at 0x625398] [0x30] ()i
    int(__cdecl* fn_GetModFileCountFromList)(TList* a1); // [GetModFileCountFromList at 0x62541D] [0x34] (:TList)i
    int(__cdecl* fn_CountFilesInDir)(BBString* a1); // [CountFilesInDir at 0x62549F] [0x38] ($)i
};


// 0 members
struct TModFileCounter {
    TModFileCounterDecl* decl; // 0x0
    int    refs;  // 0x4
};


