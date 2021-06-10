#pragma once

#include "defines.h"

// 5 methods, 1 functions
struct TxmlNotationDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TxmlNotation_New)(TxmlNotation* pThis); // [New at 0x78EA57] [0x10] ()i
    int(__cdecl* m_TxmlNotation_Delete)(TxmlNotation* pThis); // [Delete at 0x78EA80] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TxmlNotation*(__cdecl* fn__create)(void* a1); // [_create at 0x78EA8E] [0x30] (*b):TxmlNotation
    BBString*(__cdecl* m_TxmlNotation_getName)(TxmlNotation* pThis); // [getName at 0x78EAB8] [0x34] ()$
    BBString*(__cdecl* m_TxmlNotation_getPublicID)(TxmlNotation* pThis); // [getPublicID at 0x78EACF] [0x38] ()$
    BBString*(__cdecl* m_TxmlNotation_getSystemID)(TxmlNotation* pThis); // [getSystemID at 0x78EAE6] [0x3C] ()$
};


// 1 members
struct TxmlNotation {
    TxmlNotationDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_xmlNotationPtr; // 0x8 <type_*b>
};


