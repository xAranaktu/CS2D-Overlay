#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct TStreamWriteExceptionDecl {
    void* pSuper;  // 0x0 0x8FBDA8
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TStreamWriteException_New)(TStreamWriteException* pThis); // [New at 0x7B3C55] [0x10] ()i
    int(__cdecl* m_TStreamWriteException_Delete)(TStreamWriteException* pThis); // [Delete at 0x7B3C77] [0x14] ()i
    BBString*(__cdecl* m_TStreamWriteException_ToString)(TStreamWriteException* pThis); // [ToString at 0x7B3C97] [0x18] ()$
};


// Super: 0x8FBDA8
// 0 members
struct TStreamWriteException {
    TStreamWriteExceptionDecl* decl; // 0x0
    int    refs;  // 0x4
};


