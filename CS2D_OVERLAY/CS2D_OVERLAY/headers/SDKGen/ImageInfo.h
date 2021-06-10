#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct ImageInfoDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_ImageInfo_New)(ImageInfo* pThis); // [New at 0x5B60B5] [0x10] ()i
    int(__cdecl* m_ImageInfo_Delete)(ImageInfo* pThis); // [Delete at 0x5B60F7] [0x14] ()i
};


// 4 members
struct ImageInfo {
    ImageInfoDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_width; // 0x8 <type_i>
    int m_height; // 0xC <type_i>
    int m_colors; // 0x10 <type_i>
    BBString* m_info; // 0x14 <type_$>
};


