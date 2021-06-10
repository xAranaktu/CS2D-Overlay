#pragma once

#include "defines.h"

// 5 methods, 1 functions
struct TxmlAttributeDecl {
    void* pSuper;  // 0x0 0x8DDD90
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TxmlAttribute_New)(TxmlAttribute* pThis); // [New at 0x78CDC2] [0x10] ()i
    int(__cdecl* m_TxmlAttribute_Delete)(TxmlAttribute* pThis); // [Delete at 0x78CDE4] [0x14] ()i
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
    TxmlAttribute*(__cdecl* fn__create)(void* a1); // [_create at 0x78CE04] [0x5C] (*b):TxmlAttribute
    BBString*(__cdecl* m_TxmlAttribute_getValue)(TxmlAttribute* pThis); // [getValue at 0x78CE2E] [0x60] ()$
    int(__cdecl* m_TxmlAttribute_getAttributeType)(TxmlAttribute* pThis); // [getAttributeType at 0x78CE45] [0x64] ()i
    TxmlNs*(__cdecl* m_TxmlAttribute_getNameSpace)(TxmlAttribute* pThis); // [getNameSpace at 0x78CE5C] [0x68] ():TxmlNs
};


// Super: 0x8DDD90
// 0 members
struct TxmlAttribute {
    TxmlAttributeDecl* decl; // 0x0
    int    refs;  // 0x4
};


