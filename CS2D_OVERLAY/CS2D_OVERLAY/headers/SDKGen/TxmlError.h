#pragma once

#include "defines.h"

// 11 methods, 1 functions
struct TxmlErrorDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TxmlError_New)(TxmlError* pThis); // [New at 0x78D819] [0x10] ()i
    int(__cdecl* m_TxmlError_Delete)(TxmlError* pThis); // [Delete at 0x78D842] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TxmlError*(__cdecl* fn__create)(void* a1); // [_create at 0x78D850] [0x30] (*b):TxmlError
    int(__cdecl* m_TxmlError_getErrorDomain)(TxmlError* pThis); // [getErrorDomain at 0x78D87A] [0x34] ()i
    int(__cdecl* m_TxmlError_getErrorCode)(TxmlError* pThis); // [getErrorCode at 0x78D891] [0x38] ()i
    BBString*(__cdecl* m_TxmlError_getErrorMessage)(TxmlError* pThis); // [getErrorMessage at 0x78D8A8] [0x3C] ()$
    int(__cdecl* m_TxmlError_getErrorLevel)(TxmlError* pThis); // [getErrorLevel at 0x78D8BF] [0x40] ()i
    BBString*(__cdecl* m_TxmlError_getFilename)(TxmlError* pThis); // [getFilename at 0x78D8D6] [0x44] ()$
    int(__cdecl* m_TxmlError_getLine)(TxmlError* pThis); // [getLine at 0x78D8ED] [0x48] ()i
    void*(__cdecl* m_TxmlError_getExtraText)(TxmlError* pThis); // [getExtraText at 0x78D904] [0x4C] ()[]$
    int(__cdecl* m_TxmlError_getColumn)(TxmlError* pThis); // [getColumn at 0x78DA23] [0x50] ()i
    TxmlNode*(__cdecl* m_TxmlError_getErrorNode)(TxmlError* pThis); // [getErrorNode at 0x78DA3A] [0x54] ():TxmlNode
};


// 1 members
struct TxmlError {
    TxmlErrorDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_xmlErrorPtr; // 0x8 <type_*b>
};


