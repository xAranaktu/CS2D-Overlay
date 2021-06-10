#pragma once

#include "defines.h"

// 3 methods, 1 functions
struct TArbiterListDecl {
    void* pSuper;  // 0x0 0x87372C
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TArbiterList_New)(TArbiterList* pThis); // [New at 0x5E9EFE] [0x10] ()i
    int(__cdecl* m_TArbiterList_Delete)(TArbiterList* pThis); // [Delete at 0x5E9F20] [0x14] ()i
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
    int(__cdecl* m_TArbiterList_RemoveContactCountEqualsZero)(TArbiterList* pThis, TArbiterPool* a1); // [RemoveContactCountEqualsZero at 0x5E9F40] [0x50] (:TArbiterPool)i
    int(__cdecl* fn_ContactCountEqualsZero)(TArbiter* a1); // [ContactCountEqualsZero at 0x5E9FE1] [0x54] (:TArbiter)i
};


// Super: 0x87372C
// 0 members
struct TArbiterList {
    TArbiterListDecl* decl; // 0x0
    int    refs;  // 0x4
};


