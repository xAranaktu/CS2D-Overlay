#pragma once

#include "defines.h"

// 5 methods, 2 functions
struct TxmlXIncludeCtxtDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TxmlXIncludeCtxt_New)(TxmlXIncludeCtxt* pThis); // [New at 0x78E4E1] [0x10] ()i
    int(__cdecl* m_TxmlXIncludeCtxt_Delete)(TxmlXIncludeCtxt* pThis); // [Delete at 0x78E50A] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TxmlXIncludeCtxt*(__cdecl* fn__create)(void* a1); // [_create at 0x78E518] [0x30] (*b):TxmlXIncludeCtxt
    TxmlXIncludeCtxt*(__cdecl* fn_newContext)(TxmlDoc* a1); // [newContext at 0x78E542] [0x34] (:TxmlDoc):TxmlXIncludeCtxt
    int(__cdecl* m_TxmlXIncludeCtxt_processNode)(TxmlXIncludeCtxt* pThis, TxmlNode* a1); // [processNode at 0x78E563] [0x38] (:TxmlNode)i
    int(__cdecl* m_TxmlXIncludeCtxt_setFlags)(TxmlXIncludeCtxt* pThis, int a1); // [setFlags at 0x78E580] [0x3C] (i)i
    int(__cdecl* m_TxmlXIncludeCtxt_free)(TxmlXIncludeCtxt* pThis); // [free at 0x78E59B] [0x40] ()i
};


// 1 members
struct TxmlXIncludeCtxt {
    TxmlXIncludeCtxtDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_xmlXIncludeCtxtPtr; // 0x8 <type_*b>
};


