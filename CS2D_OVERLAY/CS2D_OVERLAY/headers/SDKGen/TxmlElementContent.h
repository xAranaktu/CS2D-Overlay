#pragma once

#include "defines.h"

// 6 methods, 1 functions
struct TxmlElementContentDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TxmlElementContent_New)(TxmlElementContent* pThis); // [New at 0x78ED6B] [0x10] ()i
    int(__cdecl* m_TxmlElementContent_Delete)(TxmlElementContent* pThis); // [Delete at 0x78ED94] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TxmlElementContent*(__cdecl* fn__create)(void* a1); // [_create at 0x78EDA2] [0x30] (*b):TxmlElementContent
    int(__cdecl* m_TxmlElementContent_getType)(TxmlElementContent* pThis); // [getType at 0x78EDCC] [0x34] ()i
    int(__cdecl* m_TxmlElementContent_getOccur)(TxmlElementContent* pThis); // [getOccur at 0x78EDE3] [0x38] ()i
    BBString*(__cdecl* m_TxmlElementContent_getName)(TxmlElementContent* pThis); // [getName at 0x78EDFA] [0x3C] ()$
    BBString*(__cdecl* m_TxmlElementContent_getPrefix)(TxmlElementContent* pThis); // [getPrefix at 0x78EE11] [0x40] ()$
};


// 1 members
struct TxmlElementContent {
    TxmlElementContentDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_xmlElementContentPtr; // 0x8 <type_*b>
};


