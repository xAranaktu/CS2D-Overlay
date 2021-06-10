#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct TPixmapLoaderDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TPixmapLoader_New)(TPixmapLoader* pThis); // [New at 0x7ADA15] [0x10] ()i
    int(__cdecl* m_TPixmapLoader_Delete)(TPixmapLoader* pThis); // [Delete at 0x7ADA7D] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TPixmap*(__cdecl* m_TPixmapLoader_LoadPixmap)(TPixmapLoader* pThis, TStream* a1); // [LoadPixmap at 0x7B6004] [0x30] (:TStream):TPixmap
};


// 1 members
struct TPixmapLoader {
    TPixmapLoaderDecl* decl; // 0x0
    int    refs;  // 0x4
    TPixmapLoader* m__succ; // 0x8 <type_:TPixmapLoader>
};


