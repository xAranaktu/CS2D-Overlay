#pragma once

#include "defines.h"

// 3 methods, 1 functions
struct TArbiterPoolDecl {
    void* pSuper;  // 0x0 0x873530
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TArbiterPool_New)(TArbiterPool* pThis); // [New at 0x5E87CC] [0x10] ()i
    int(__cdecl* m_TArbiterPool_Delete)(TArbiterPool* pThis); // [Delete at 0x5E87EE] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    Object*(__cdecl* m_TArbiterPool__CreatePoolItem)(TArbiterPool* pThis); // [_CreatePoolItem at 0x5E8839] [0x34] ():Object
    void* nothing_13; // 0x38
    void* nothing_14; // 0x3C
    TArbiterPool*(__cdecl* fn_Create)(int a1); // [Create at 0x5E880E] [0x40] (i):TArbiterPool
};


// Super: 0x873530
// 0 members
struct TArbiterPool {
    TArbiterPoolDecl* decl; // 0x0
    int    refs;  // 0x4
};


