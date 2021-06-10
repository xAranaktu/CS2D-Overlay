#pragma once

#include "defines.h"

// 3 methods, 1 functions
struct TRuntimeExceptionDecl {
    void* pSuper;  // 0x0 0x8FD578
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TRuntimeException_New)(TRuntimeException* pThis); // [New at 0x7B5F39] [0x10] ()i
    int(__cdecl* m_TRuntimeException_Delete)(TRuntimeException* pThis); // [Delete at 0x7B5F66] [0x14] ()i
    BBString*(__cdecl* m_TRuntimeException_ToString)(TRuntimeException* pThis); // [ToString at 0x7B5F99] [0x18] ()$
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TRuntimeException*(__cdecl* fn_Create)(BBString* a1); // [Create at 0x7B5FA8] [0x30] ($):TRuntimeException
};


// Super: 0x8FD578
// 1 members
struct TRuntimeException {
    TRuntimeExceptionDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_error; // 0x8 <type_$>
};


