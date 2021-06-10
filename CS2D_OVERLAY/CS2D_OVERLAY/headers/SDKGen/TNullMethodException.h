#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct TNullMethodExceptionDecl {
    void* pSuper;  // 0x0 0x8FD578
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TNullMethodException_New)(TNullMethodException* pThis); // [New at 0x7B5DF9] [0x10] ()i
    int(__cdecl* m_TNullMethodException_Delete)(TNullMethodException* pThis); // [Delete at 0x7B5E1B] [0x14] ()i
    BBString*(__cdecl* m_TNullMethodException_ToString)(TNullMethodException* pThis); // [ToString at 0x7B5E3B] [0x18] ()$
};


// Super: 0x8FD578
// 0 members
struct TNullMethodException {
    TNullMethodExceptionDecl* decl; // 0x0
    int    refs;  // 0x4
};


