#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct TOutOfDataExceptionDecl {
    void* pSuper;  // 0x0 0x8FD578
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TOutOfDataException_New)(TOutOfDataException* pThis); // [New at 0x7B5EE9] [0x10] ()i
    int(__cdecl* m_TOutOfDataException_Delete)(TOutOfDataException* pThis); // [Delete at 0x7B5F0B] [0x14] ()i
    BBString*(__cdecl* m_TOutOfDataException_ToString)(TOutOfDataException* pThis); // [ToString at 0x7B5F2B] [0x18] ()$
};


// Super: 0x8FD578
// 0 members
struct TOutOfDataException {
    TOutOfDataExceptionDecl* decl; // 0x0
    int    refs;  // 0x4
};


