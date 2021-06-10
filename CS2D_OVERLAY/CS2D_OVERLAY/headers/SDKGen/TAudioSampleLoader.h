#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct TAudioSampleLoaderDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TAudioSampleLoader_New)(TAudioSampleLoader* pThis); // [New at 0x797CC1] [0x10] ()i
    int(__cdecl* m_TAudioSampleLoader_Delete)(TAudioSampleLoader* pThis); // [Delete at 0x797D29] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TAudioSample*(__cdecl* m_TAudioSampleLoader_LoadAudioSample)(TAudioSampleLoader* pThis, TStream* a1); // [LoadAudioSample at 0x7B6004] [0x30] (:TStream):TAudioSample
};


// 1 members
struct TAudioSampleLoader {
    TAudioSampleLoaderDecl* decl; // 0x0
    int    refs;  // 0x4
    TAudioSampleLoader* m__succ; // 0x8 <type_:TAudioSampleLoader>
};


