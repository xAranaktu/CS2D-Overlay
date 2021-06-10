#pragma once

#include "defines.h"

// 4 methods, 1 functions
struct TxmlDtdElementDecl {
    void* pSuper;  // 0x0 0x8DDD90
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TxmlDtdElement_New)(TxmlDtdElement* pThis); // [New at 0x78E9BD] [0x10] ()i
    int(__cdecl* m_TxmlDtdElement_Delete)(TxmlDtdElement* pThis); // [Delete at 0x78E9DF] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    void* nothing_12; // 0x34
    void* nothing_13; // 0x38
    void* nothing_14; // 0x3C
    void* nothing_15; // 0x40
    void* nothing_16; // 0x44
    void* nothing_17; // 0x48
    void* nothing_18; // 0x4C
    void* nothing_19; // 0x50
    void* nothing_20; // 0x54
    void* nothing_21; // 0x58
    TxmlDtdElement*(__cdecl* fn__create)(void* a1); // [_create at 0x78E9FF] [0x5C] (*b):TxmlDtdElement
    int(__cdecl* m_TxmlDtdElement_getElementType)(TxmlDtdElement* pThis); // [getElementType at 0x78EA29] [0x60] ()i
    BBString*(__cdecl* m_TxmlDtdElement_getPrefix)(TxmlDtdElement* pThis); // [getPrefix at 0x78EA40] [0x64] ()$
};


// Super: 0x8DDD90
// 0 members
struct TxmlDtdElement {
    TxmlDtdElementDecl* decl; // 0x0
    int    refs;  // 0x4
};


