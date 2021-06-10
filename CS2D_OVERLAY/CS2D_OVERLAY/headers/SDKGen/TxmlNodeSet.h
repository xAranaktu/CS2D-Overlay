#pragma once

#include "defines.h"

// 9 methods, 1 functions
struct TxmlNodeSetDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TxmlNodeSet_New)(TxmlNodeSet* pThis); // [New at 0x78CE7D] [0x10] ()i
    int(__cdecl* m_TxmlNodeSet_Delete)(TxmlNodeSet* pThis); // [Delete at 0x78CEA6] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TxmlNodeSet*(__cdecl* fn__create)(void* a1); // [_create at 0x78CEB4] [0x30] (*b):TxmlNodeSet
    int(__cdecl* m_TxmlNodeSet_getNodeCount)(TxmlNodeSet* pThis); // [getNodeCount at 0x78CEDE] [0x34] ()i
    TList*(__cdecl* m_TxmlNodeSet_getNodeList)(TxmlNodeSet* pThis); // [getNodeList at 0x78CEF5] [0x38] ():TList
    int(__cdecl* m_TxmlNodeSet_castToBoolean)(TxmlNodeSet* pThis); // [castToBoolean at 0x78CF5A] [0x3C] ()i
    void*(__cdecl* m_TxmlNodeSet_castToNumber)(TxmlNodeSet* pThis); // [castToNumber at 0x78CF71] [0x40] ()d
    BBString*(__cdecl* m_TxmlNodeSet_castToString)(TxmlNodeSet* pThis); // [castToString at 0x78CF88] [0x44] ()$
    int(__cdecl* m_TxmlNodeSet_isEmpty)(TxmlNodeSet* pThis); // [isEmpty at 0x78CF9F] [0x48] ()i
    int(__cdecl* m_TxmlNodeSet_free)(TxmlNodeSet* pThis); // [free at 0x78CFBD] [0x4C] ()i
};


// 1 members
struct TxmlNodeSet {
    TxmlNodeSetDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_xmlNodeSetPtr; // 0x8 <type_*b>
};


