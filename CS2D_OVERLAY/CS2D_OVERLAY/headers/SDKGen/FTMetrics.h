#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct FTMetricsDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 48(0x30)
    int(__cdecl* m_FTMetrics_New)(FTMetrics* pThis); // [New at 0x79B7A8] [0x10] ()i
    int(__cdecl* m_FTMetrics_Delete)(FTMetrics* pThis); // [Delete at 0x79B815] [0x14] ()i
};


// 11 members
struct FTMetrics {
    FTMetricsDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_mface; // 0x8 <type_i>
    int m_mgeneric0; // 0xC <type_i>
    int m_mgeneric1; // 0x10 <type_i>
    short m_xppem; // 0x14 <type_s>
    short m_yppem; // 0x16 <type_s>
    int m_xscale; // 0x18 <type_i>
    int m_yscale; // 0x1C <type_i>
    int m_ascend; // 0x20 <type_i>
    int m_descend; // 0x24 <type_i>
    int m_height; // 0x28 <type_i>
    int m_max_advance; // 0x2C <type_i>
};


