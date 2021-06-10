#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct TSocketExceptionDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TSocketException_New)(TSocketException* pThis); // [New at 0x7990AE] [0x10] ()i
    int(__cdecl* m_TSocketException_Delete)(TSocketException* pThis); // [Delete at 0x7990D0] [0x14] ()i
    BBString*(__cdecl* m_TSocketException_ToString)(TSocketException* pThis); // [ToString at 0x7990DE] [0x18] ()$
};


// 0 members
struct TSocketException {
    TSocketExceptionDecl* decl; // 0x0
    int    refs;  // 0x4
};


