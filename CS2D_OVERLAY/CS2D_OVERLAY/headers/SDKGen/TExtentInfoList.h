#pragma once

#include "defines.h"

// 3 methods, 1 functions
struct TExtentInfoListDecl {
    void* pSuper;  // 0x0 0x87372C
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_TExtentInfoList_New)(TExtentInfoList* pThis); // [New at 0x5F95CC] [0x10] ()i
    int(__cdecl* m_TExtentInfoList_Delete)(TExtentInfoList* pThis); // [Delete at 0x5F95F9] [0x14] ()i
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
    TExtentInfoList*(__cdecl* fn_Create)(TSweepAndPruneCollider* a1); // [Create at 0x5F962C] [0x50] (:TSweepAndPruneCollider):TExtentInfoList
    int(__cdecl* m_TExtentInfoList_MoveUnderConsiderationToOverlaps)(TExtentInfoList* pThis); // [MoveUnderConsiderationToOverlaps at 0x5F9664] [0x54] ()i
};


// Super: 0x87372C
// 1 members
struct TExtentInfoList {
    TExtentInfoListDecl* decl; // 0x0
    int    refs;  // 0x4
    TSweepAndPruneCollider* m__owner; // 0xC <type_:TSweepAndPruneCollider>
};


