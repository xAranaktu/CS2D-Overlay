#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct TSocketStreamFactoryDecl {
    void* pSuper;  // 0x0 0x8FCA2C
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TSocketStreamFactory_New)(TSocketStreamFactory* pThis); // [New at 0x798C77] [0x10] ()i
    int(__cdecl* m_TSocketStreamFactory_Delete)(TSocketStreamFactory* pThis); // [Delete at 0x798C99] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TSocketStream*(__cdecl* m_TSocketStreamFactory_CreateStream)(TSocketStreamFactory* pThis, Object* a1, BBString* a2, BBString* a3, int a4, int a5); // [CreateStream at 0x798CB9] [0x30] (:Object,$,$,i,i):TSocketStream
};


// Super: 0x8FCA2C
// 0 members
struct TSocketStreamFactory {
    TSocketStreamFactoryDecl* decl; // 0x0
    int    refs;  // 0x4
};


