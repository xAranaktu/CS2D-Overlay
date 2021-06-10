#pragma once

#include "defines.h"

// 4 methods, 3 functions
struct TxmlBufferDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TxmlBuffer_New)(TxmlBuffer* pThis); // [New at 0x78CB80] [0x10] ()i
    int(__cdecl* m_TxmlBuffer_Delete)(TxmlBuffer* pThis); // [Delete at 0x78CBA9] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TxmlBuffer*(__cdecl* fn__create)(void* a1); // [_create at 0x78CBB7] [0x30] (*b):TxmlBuffer
    TxmlBuffer*(__cdecl* fn_newBuffer)(); // [newBuffer at 0x78CBE1] [0x34] ():TxmlBuffer
    TxmlBuffer*(__cdecl* fn_CreateStatic)(void* a1, int a2); // [CreateStatic at 0x78CBF9] [0x38] (*b,i):TxmlBuffer
    BBString*(__cdecl* m_TxmlBuffer_getContent)(TxmlBuffer* pThis); // [getContent at 0x78CC1C] [0x3C] ()$
    int(__cdecl* m_TxmlBuffer_free)(TxmlBuffer* pThis); // [free at 0x78CC33] [0x40] ()i
};


// 1 members
struct TxmlBuffer {
    TxmlBufferDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_xmlBufferPtr; // 0x8 <type_*b>
};


