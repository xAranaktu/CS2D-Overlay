#pragma once

#include "defines.h"

// 12 methods, 1 functions
struct TxmlBaseDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TxmlBase_New)(TxmlBase* pThis); // [New at 0x78B284] [0x10] ()i
    int(__cdecl* m_TxmlBase_Delete)(TxmlBase* pThis); // [Delete at 0x78B2AD] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TxmlBase*(__cdecl* fn_chooseCreateFromType)(void* a1); // [chooseCreateFromType at 0x78B2BB] [0x30] (*b):TxmlBase
    int(__cdecl* m_TxmlBase_getType)(TxmlBase* pThis); // [getType at 0x78B34E] [0x34] ()i
    BBString*(__cdecl* m_TxmlBase_getName)(TxmlBase* pThis); // [getName at 0x78B365] [0x38] ()$
    TxmlDoc*(__cdecl* m_TxmlBase_getDocument)(TxmlBase* pThis); // [getDocument at 0x78B37C] [0x3C] ():TxmlDoc
    TxmlBase*(__cdecl* m_TxmlBase_nextSibling)(TxmlBase* pThis); // [nextSibling at 0x78B39D] [0x40] ():TxmlBase
    TxmlBase*(__cdecl* m_TxmlBase_previousSibling)(TxmlBase* pThis); // [previousSibling at 0x78B3BF] [0x44] ():TxmlBase
    TList*(__cdecl* m_TxmlBase_getChildren)(TxmlBase* pThis, int a1); // [getChildren at 0x78B3E1] [0x48] (i):TList
    TxmlBase*(__cdecl* m_TxmlBase_getLastChild)(TxmlBase* pThis, int a1); // [getLastChild at 0x78B49C] [0x4C] (i):TxmlBase
    TxmlBase*(__cdecl* m_TxmlBase_getFirstChild)(TxmlBase* pThis, int a1); // [getFirstChild at 0x78B4F7] [0x50] (i):TxmlBase
    TxmlBase*(__cdecl* m_TxmlBase_GetParent)(TxmlBase* pThis); // [GetParent at 0x78B552] [0x54] ():TxmlBase
    int(__cdecl* m_TxmlBase_getLineNumber)(TxmlBase* pThis); // [getLineNumber at 0x78B574] [0x58] ()i
};


// 1 members
struct TxmlBase {
    TxmlBaseDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_basePtr; // 0x8 <type_*b>
};


