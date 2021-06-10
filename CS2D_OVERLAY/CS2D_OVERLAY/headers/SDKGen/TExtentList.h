#pragma once

#include "defines.h"

// 6 methods, 2 functions
struct TExtentListDecl {
    void* pSuper;  // 0x0 0x87372C
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_TExtentList_New)(TExtentList* pThis); // [New at 0x5F8CE5] [0x10] ()i
    int(__cdecl* m_TExtentList_Delete)(TExtentList* pThis); // [Delete at 0x5F8D12] [0x14] ()i
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
    TExtentList*(__cdecl* fn_Create)(TSweepAndPruneCollider* a1); // [Create at 0x5F8D45] [0x50] (:TSweepAndPruneCollider):TExtentList
    int(__cdecl* m_TExtentList_InsertIntoSortedList)(TExtentList* pThis, TExtent* a1); // [InsertIntoSortedList at 0x5F8D7D] [0x54] (:TExtent)i
    int(__cdecl* m_TExtentList_IncrementalInsertExtent)(TExtentList* pThis, TExtentInfo* a1); // [IncrementalInsertExtent at 0x5F8E83] [0x58] (:TExtentInfo)i
    int(__cdecl* m_TExtentList_Sort)(TExtentList* pThis); // [Sort at 0x5F912E] [0x5C] ()i
    int(__cdecl* fn_CompareExtents)(Object* a1, Object* a2); // [CompareExtents at 0x5F9155] [0x60] (:Object,:Object)i
    int(__cdecl* m_TExtentList_IncrementalSort)(TExtentList* pThis); // [IncrementalSort at 0x5F919A] [0x64] ()i
};


// Super: 0x87372C
// 1 members
struct TExtentList {
    TExtentListDecl* decl; // 0x0
    int    refs;  // 0x4
    TSweepAndPruneCollider* m__owner; // 0xC <type_:TSweepAndPruneCollider>
};


