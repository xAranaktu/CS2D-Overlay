#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct TStreamExceptionDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TStreamException_New)(TStreamException* pThis); // [New at 0x7B3BD5] [0x10] ()i
    int(__cdecl* m_TStreamException_Delete)(TStreamException* pThis); // [Delete at 0x7B3BF7] [0x14] ()i
};


// 0 members
struct TStreamException {
    TStreamExceptionDecl* decl; // 0x0
    int    refs;  // 0x4
};


