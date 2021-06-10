#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct TPixmapLoaderPNGDecl {
    void* pSuper;  // 0x0 0x8FA264
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TPixmapLoaderPNG_New)(TPixmapLoaderPNG* pThis); // [New at 0x79C3C9] [0x10] ()i
    int(__cdecl* m_TPixmapLoaderPNG_Delete)(TPixmapLoaderPNG* pThis); // [Delete at 0x79C3EB] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TPixmap*(__cdecl* m_TPixmapLoaderPNG_LoadPixmap)(TPixmapLoaderPNG* pThis, TStream* a1); // [LoadPixmap at 0x79C40B] [0x30] (:TStream):TPixmap
};


// Super: 0x8FA264
// 0 members
struct TPixmapLoaderPNG {
    TPixmapLoaderPNGDecl* decl; // 0x0
    int    refs;  // 0x4
};


