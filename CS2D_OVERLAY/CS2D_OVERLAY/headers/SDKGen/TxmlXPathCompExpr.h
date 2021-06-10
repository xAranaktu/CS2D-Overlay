#pragma once

#include "defines.h"

// 4 methods, 2 functions
struct TxmlXPathCompExprDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TxmlXPathCompExpr_New)(TxmlXPathCompExpr* pThis); // [New at 0x78EE28] [0x10] ()i
    int(__cdecl* m_TxmlXPathCompExpr_Delete)(TxmlXPathCompExpr* pThis); // [Delete at 0x78EE51] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TxmlXPathCompExpr*(__cdecl* fn__create)(void* a1); // [_create at 0x78EE5F] [0x30] (*b):TxmlXPathCompExpr
    TxmlXPathCompExpr*(__cdecl* fn_Compile)(BBString* a1); // [Compile at 0x78EE89] [0x34] ($):TxmlXPathCompExpr
    TxmlXPathObject*(__cdecl* m_TxmlXPathCompExpr_eval)(TxmlXPathCompExpr* pThis, TxmlXPathContext* a1); // [eval at 0x78EEA8] [0x38] (:TxmlXPathContext):TxmlXPathObject
    int(__cdecl* m_TxmlXPathCompExpr_free)(TxmlXPathCompExpr* pThis); // [free at 0x78EECF] [0x3C] ()i
};


// 1 members
struct TxmlXPathCompExpr {
    TxmlXPathCompExprDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_xmlXPathCompExprPtr; // 0x8 <type_*b>
};


