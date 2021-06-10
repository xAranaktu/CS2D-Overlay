#pragma once

#include "defines.h"

// 2 methods, 3 functions
struct TmapPreviewDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TmapPreview_New)(TmapPreview* pThis); // [New at 0x62A985] [0x10] ()i
    int(__cdecl* m_TmapPreview_Delete)(TmapPreview* pThis); // [Delete at 0x62A9A7] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_LoadPreview)(BBString* a1, BBString* a2); // [LoadPreview at 0x62A9B5] [0x30] ($,$)i
    BBString*(__cdecl* fn_GetTileset)(BBString* a1, BBString* a2); // [GetTileset at 0x62AE90] [0x34] ($,$)$
    int(__cdecl* fn_readHeader)(TStream* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7); // [readHeader at 0x62AFC7] [0x38] (:TStream,*i,*i,*i,*$,*$,*[]b)i
};


// 0 members
struct TmapPreview {
    TmapPreviewDecl* decl; // 0x0
    int    refs;  // 0x4
};


