#pragma once

#include "defines.h"

// 6 methods, 1 functions
struct TxmlNsDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TxmlNs_New)(TxmlNs* pThis); // [New at 0x78CD00] [0x10] ()i
    int(__cdecl* m_TxmlNs_Delete)(TxmlNs* pThis); // [Delete at 0x78CD29] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TxmlNs*(__cdecl* fn__create)(void* a1); // [_create at 0x78CD37] [0x30] (*b):TxmlNs
    int(__cdecl* m_TxmlNs_getType)(TxmlNs* pThis); // [getType at 0x78CD61] [0x34] ()i
    BBString*(__cdecl* m_TxmlNs_getHref)(TxmlNs* pThis); // [getHref at 0x78CD78] [0x38] ()$
    BBString*(__cdecl* m_TxmlNs_getPrefix)(TxmlNs* pThis); // [getPrefix at 0x78CD8F] [0x3C] ()$
    int(__cdecl* m_TxmlNs_free)(TxmlNs* pThis); // [free at 0x78CDA6] [0x40] ()i
};


// 1 members
struct TxmlNs {
    TxmlNsDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_xmlNsPtr; // 0x8 <type_*b>
};


