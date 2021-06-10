#pragma once

#include "defines.h"

// 5 methods, 1 functions
struct TContactListDecl {
    void* pSuper;  // 0x0 0x87372C
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TContactList_New)(TContactList* pThis); // [New at 0x5EFAA6] [0x10] ()i
    int(__cdecl* m_TContactList_Delete)(TContactList* pThis); // [Delete at 0x5EFAC8] [0x14] ()i
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
    int(__cdecl* m_TContactList_IndexOfSafe)(TContactList* pThis, TContact* a1); // [IndexOfSafe at 0x5EFAE8] [0x50] (:TContact)i
    int(__cdecl* m_TContactList_Sort)(TContactList* pThis); // [Sort at 0x5EFB66] [0x54] ()i
    int(__cdecl* m_TContactList_RemoveRange)(TContactList* pThis, int a1, int a2, TContactPool* a3); // [RemoveRange at 0x5EFB8D] [0x58] (i,i,:TContactPool)i
    int(__cdecl* fn_CompareSeparation)(Object* a1, Object* a2); // [CompareSeparation at 0x5EFC30] [0x5C] (:Object,:Object)i
};


// Super: 0x87372C
// 0 members
struct TContactList {
    TContactListDecl* decl; // 0x0
    int    refs;  // 0x4
};


