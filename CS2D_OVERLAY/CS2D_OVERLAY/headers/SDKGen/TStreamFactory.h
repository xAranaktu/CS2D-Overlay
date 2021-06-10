#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct TStreamFactoryDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TStreamFactory_New)(TStreamFactory* pThis); // [New at 0x7B4967] [0x10] ()i
    int(__cdecl* m_TStreamFactory_Delete)(TStreamFactory* pThis); // [Delete at 0x7B49CF] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TStream*(__cdecl* m_TStreamFactory_CreateStream)(TStreamFactory* pThis, Object* a1, BBString* a2, BBString* a3, int a4, int a5); // [CreateStream at 0x7B6004] [0x30] (:Object,$,$,i,i):TStream
};


// 1 members
struct TStreamFactory {
    TStreamFactoryDecl* decl; // 0x0
    int    refs;  // 0x4
    TStreamFactory* m__succ; // 0x8 <type_:TStreamFactory>
};


