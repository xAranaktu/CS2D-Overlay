#pragma once

#include "defines.h"

// 6 methods, 0 functions
struct TPoolDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TPool_New)(TPool* pThis); // [New at 0x5E9FFF] [0x10] ()i
    int(__cdecl* m_TPool_Delete)(TPool* pThis); // [Delete at 0x5EA04C] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TPool_InitPool)(TPool* pThis, int a1); // [InitPool at 0x5EA06E] [0x30] (i)i
    Object*(__cdecl* m_TPool__CreatePoolItem)(TPool* pThis); // [_CreatePoolItem at 0x7B6004] [0x34] ():Object
    Object*(__cdecl* m_TPool_Fetch)(TPool* pThis); // [Fetch at 0x5EA0B5] [0x38] ():Object
    int(__cdecl* m_TPool_Free)(TPool* pThis, Object* a1); // [Free at 0x5EA0EB] [0x3C] (:Object)i
};


// 1 members
struct TPool {
    TPoolDecl* decl; // 0x0
    int    refs;  // 0x4
    TList* m__stack; // 0x8 <type_:TList>
};


