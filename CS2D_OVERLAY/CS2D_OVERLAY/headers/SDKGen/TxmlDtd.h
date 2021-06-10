#pragma once

#include "defines.h"

// 11 methods, 1 functions
struct TxmlDtdDecl {
    void* pSuper;  // 0x0 0x8DDD90
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TxmlDtd_New)(TxmlDtd* pThis); // [New at 0x78D677] [0x10] ()i
    int(__cdecl* m_TxmlDtd_Delete)(TxmlDtd* pThis); // [Delete at 0x78D699] [0x14] ()i
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
    TxmlDtd*(__cdecl* fn__create)(void* a1); // [_create at 0x78D6B9] [0x5C] (*b):TxmlDtd
    BBString*(__cdecl* m_TxmlDtd_getExternalID)(TxmlDtd* pThis); // [getExternalID at 0x78D6E3] [0x60] ()$
    BBString*(__cdecl* m_TxmlDtd_getSystemID)(TxmlDtd* pThis); // [getSystemID at 0x78D6FA] [0x64] ()$
    TxmlDtd*(__cdecl* m_TxmlDtd_copyDtd)(TxmlDtd* pThis); // [copyDtd at 0x78D711] [0x68] ():TxmlDtd
    TxmlDtdAttribute*(__cdecl* m_TxmlDtd_getAttrDesc)(TxmlDtd* pThis, BBString* a1, BBString* a2); // [getAttrDesc at 0x78D732] [0x6C] ($,$):TxmlDtdAttribute
    TxmlDtdElement*(__cdecl* m_TxmlDtd_getElementDesc)(TxmlDtd* pThis, BBString* a1); // [getElementDesc at 0x78D75B] [0x70] ($):TxmlDtdElement
    TxmlNotation*(__cdecl* m_TxmlDtd_getNotationDesc)(TxmlDtd* pThis, BBString* a1); // [getNotationDesc at 0x78D780] [0x74] ($):TxmlNotation
    TxmlDtdAttribute*(__cdecl* m_TxmlDtd_getQAttrDesc)(TxmlDtd* pThis, BBString* a1, BBString* a2, BBString* a3); // [getQAttrDesc at 0x78D7A5] [0x78] ($,$,$):TxmlDtdAttribute
    TxmlDtdElement*(__cdecl* m_TxmlDtd_getQElementDesc)(TxmlDtd* pThis, BBString* a1, BBString* a2); // [getQElementDesc at 0x78D7D4] [0x7C] ($,$):TxmlDtdElement
    int(__cdecl* m_TxmlDtd_free)(TxmlDtd* pThis); // [free at 0x78D7FD] [0x80] ()i
};


// Super: 0x8DDD90
// 0 members
struct TxmlDtd {
    TxmlDtdDecl* decl; // 0x0
    int    refs;  // 0x4
};


