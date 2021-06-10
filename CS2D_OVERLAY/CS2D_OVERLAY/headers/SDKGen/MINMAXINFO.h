#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct MINMAXINFODecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 48(0x30)
    int(__cdecl* m_MINMAXINFO_New)(MINMAXINFO* pThis); // [New at 0x7A4E6D] [0x10] ()i
    int(__cdecl* m_MINMAXINFO_Delete)(MINMAXINFO* pThis); // [Delete at 0x7A4ED5] [0x14] ()i
};


// 10 members
struct MINMAXINFO {
    MINMAXINFODecl* decl; // 0x0
    int    refs;  // 0x4
    int m_reserved0; // 0x8 <type_i>
    int m_reserved1; // 0xC <type_i>
    int m_maxw; // 0x10 <type_i>
    int m_maxh; // 0x14 <type_i>
    int m_maxx; // 0x18 <type_i>
    int m_maxy; // 0x1C <type_i>
    int m_minw; // 0x20 <type_i>
    int m_minh; // 0x24 <type_i>
    int m_minx; // 0x28 <type_i>
    int m_miny; // 0x2C <type_i>
};


