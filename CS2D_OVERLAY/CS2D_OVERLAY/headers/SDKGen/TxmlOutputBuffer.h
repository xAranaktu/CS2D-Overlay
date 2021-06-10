#pragma once

#include "defines.h"

// 2 methods, 3 functions
struct TxmlOutputBufferDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TxmlOutputBuffer_New)(TxmlOutputBuffer* pThis); // [New at 0x78CC4F] [0x10] ()i
    int(__cdecl* m_TxmlOutputBuffer_Delete)(TxmlOutputBuffer* pThis); // [Delete at 0x78CC78] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TxmlOutputBuffer*(__cdecl* fn__create)(void* a1); // [_create at 0x78CC86] [0x30] (*b):TxmlOutputBuffer
    TxmlOutputBuffer*(__cdecl* fn_createBuffer)(TxmlBuffer* a1); // [createBuffer at 0x78CCB0] [0x34] (:TxmlBuffer):TxmlOutputBuffer
    TxmlOutputBuffer*(__cdecl* fn_createIO)(TxmlOutputStreamHandler* a1); // [createIO at 0x78CCD3] [0x38] (:TxmlOutputStreamHandler):TxmlOutputBuffer
};


// 1 members
struct TxmlOutputBuffer {
    TxmlOutputBufferDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m__xmlOutputBufferPtr; // 0x8 <type_*b>
};


