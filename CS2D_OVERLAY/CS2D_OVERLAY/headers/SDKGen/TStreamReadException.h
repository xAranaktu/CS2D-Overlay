#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct TStreamReadExceptionDecl {
    void* pSuper;  // 0x0 0x8FBDA8
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TStreamReadException_New)(TStreamReadException* pThis); // [New at 0x7B3C05] [0x10] ()i
    int(__cdecl* m_TStreamReadException_Delete)(TStreamReadException* pThis); // [Delete at 0x7B3C27] [0x14] ()i
    BBString*(__cdecl* m_TStreamReadException_ToString)(TStreamReadException* pThis); // [ToString at 0x7B3C47] [0x18] ()$
};


// Super: 0x8FBDA8
// 0 members
struct TStreamReadException {
    TStreamReadExceptionDecl* decl; // 0x0
    int    refs;  // 0x4
};


