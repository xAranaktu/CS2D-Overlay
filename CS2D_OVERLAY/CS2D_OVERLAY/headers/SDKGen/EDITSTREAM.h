#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct EDITSTREAMDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_EDITSTREAM_New)(EDITSTREAM* pThis); // [New at 0x7A5E2E] [0x10] ()i
    int(__cdecl* m_EDITSTREAM_Delete)(EDITSTREAM* pThis); // [Delete at 0x7A5E65] [0x14] ()i
};


// 3 members
struct EDITSTREAM {
    EDITSTREAMDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_dwCookie; // 0x8 <type_**b>
    int m_dwError; // 0xC <type_i>
    void* m_pfnCallback; // 0x10 <type_(**b,*b,i,*i)i>
};


