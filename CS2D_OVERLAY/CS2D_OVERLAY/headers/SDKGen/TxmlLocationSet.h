#pragma once

#include "defines.h"

// 7 methods, 2 functions
struct TxmlLocationSetDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TxmlLocationSet_New)(TxmlLocationSet* pThis); // [New at 0x78E815] [0x10] ()i
    int(__cdecl* m_TxmlLocationSet_Delete)(TxmlLocationSet* pThis); // [Delete at 0x78E83E] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TxmlLocationSet*(__cdecl* fn__create)(void* a1); // [_create at 0x78E84C] [0x30] (*b):TxmlLocationSet
    TxmlLocationSet*(__cdecl* fn_Create)(); // [Create at 0x78E876] [0x34] ():TxmlLocationSet
    int(__cdecl* m_TxmlLocationSet_add)(TxmlLocationSet* pThis, TxmlXPathObject* a1); // [add at 0x78E893] [0x38] (:TxmlXPathObject)i
    int(__cdecl* m_TxmlLocationSet_del)(TxmlLocationSet* pThis, TxmlXPathObject* a1); // [del at 0x78E8B5] [0x3C] (:TxmlXPathObject)i
    TxmlLocationSet*(__cdecl* m_TxmlLocationSet_merge)(TxmlLocationSet* pThis, TxmlLocationSet* a1); // [merge at 0x78E8D7] [0x40] (:TxmlLocationSet):TxmlLocationSet
    int(__cdecl* m_TxmlLocationSet_remove)(TxmlLocationSet* pThis, int a1); // [remove at 0x78E8FE] [0x44] (i)i
    int(__cdecl* m_TxmlLocationSet_free)(TxmlLocationSet* pThis); // [free at 0x78E91E] [0x48] ()i
};


// 1 members
struct TxmlLocationSet {
    TxmlLocationSetDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_xmlLocationSetPtr; // 0x8 <type_*b>
};


