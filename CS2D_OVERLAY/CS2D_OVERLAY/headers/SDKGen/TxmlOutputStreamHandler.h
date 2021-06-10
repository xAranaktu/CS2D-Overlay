#pragma once

#include "defines.h"

// 5 methods, 2 functions
struct TxmlOutputStreamHandlerDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_TxmlOutputStreamHandler_New)(TxmlOutputStreamHandler* pThis); // [New at 0x78EF2D] [0x10] ()i
    int(__cdecl* m_TxmlOutputStreamHandler_Delete)(TxmlOutputStreamHandler* pThis); // [Delete at 0x78EF61] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TxmlOutputStreamHandler*(__cdecl* m_TxmlOutputStreamHandler_Create)(TxmlOutputStreamHandler* pThis, TStream* a1, int a2); // [Create at 0x78EF83] [0x30] (:TStream,i):TxmlOutputStreamHandler
    int(__cdecl* fn__writeCallback)(TxmlOutputStreamHandler* a1, void* a2, int a3); // [_writeCallback at 0x78EFB9] [0x34] (:TxmlOutputStreamHandler,*b,i)i
    int(__cdecl* m_TxmlOutputStreamHandler_writeCallback)(TxmlOutputStreamHandler* pThis, void* a1, int a2); // [writeCallback at 0x78EFD6] [0x38] (*b,i)i
    int(__cdecl* fn__closeCallback)(TxmlOutputStreamHandler* a1); // [_closeCallback at 0x78EFF6] [0x3C] (:TxmlOutputStreamHandler)i
    int(__cdecl* m_TxmlOutputStreamHandler_closeCallback)(TxmlOutputStreamHandler* pThis); // [closeCallback at 0x78F00B] [0x40] ()i
};


// 2 members
struct TxmlOutputStreamHandler {
    TxmlOutputStreamHandlerDecl* decl; // 0x0
    int    refs;  // 0x4
    TStream* m_stream; // 0x8 <type_:TStream>
    int m_autoClose; // 0xC <type_i>
};


