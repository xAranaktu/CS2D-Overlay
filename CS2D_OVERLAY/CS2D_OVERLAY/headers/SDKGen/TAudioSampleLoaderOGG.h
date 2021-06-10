#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct TAudioSampleLoaderOGGDecl {
    void* pSuper;  // 0x0 0x8E6F34
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TAudioSampleLoaderOGG_New)(TAudioSampleLoaderOGG* pThis); // [New at 0x796FB6] [0x10] ()i
    int(__cdecl* m_TAudioSampleLoaderOGG_Delete)(TAudioSampleLoaderOGG* pThis); // [Delete at 0x796FD8] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TAudioSample*(__cdecl* m_TAudioSampleLoaderOGG_LoadAudioSample)(TAudioSampleLoaderOGG* pThis, TStream* a1); // [LoadAudioSample at 0x796FF8] [0x30] (:TStream):TAudioSample
};


// Super: 0x8E6F34
// 0 members
struct TAudioSampleLoaderOGG {
    TAudioSampleLoaderOGGDecl* decl; // 0x0
    int    refs;  // 0x4
};


