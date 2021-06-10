#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct TPixmapLoaderJPGDecl {
    void* pSuper;  // 0x0 0x8FA264
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TPixmapLoaderJPG_New)(TPixmapLoaderJPG* pThis); // [New at 0x79BBB1] [0x10] ()i
    int(__cdecl* m_TPixmapLoaderJPG_Delete)(TPixmapLoaderJPG* pThis); // [Delete at 0x79BBD3] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TPixmap*(__cdecl* m_TPixmapLoaderJPG_LoadPixmap)(TPixmapLoaderJPG* pThis, TStream* a1); // [LoadPixmap at 0x79BBF3] [0x30] (:TStream):TPixmap
};


// Super: 0x8FA264
// 0 members
struct TPixmapLoaderJPG {
    TPixmapLoaderJPGDecl* decl; // 0x0
    int    refs;  // 0x4
};


