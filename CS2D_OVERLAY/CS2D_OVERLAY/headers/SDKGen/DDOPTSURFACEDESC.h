#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct DDOPTSURFACEDESCDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 56(0x38)
    int(__cdecl* m_DDOPTSURFACEDESC_New)(DDOPTSURFACEDESC* pThis); // [New at 0x7A34F7] [0x10] ()i
    int(__cdecl* m_DDOPTSURFACEDESC_Delete)(DDOPTSURFACEDESC* pThis); // [Delete at 0x7A356D] [0x14] ()i
};


// 12 members
struct DDOPTSURFACEDESC {
    DDOPTSURFACEDESCDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_dwSize; // 0x8 <type_i>
    int m_dwFlags; // 0xC <type_i>
    int m_ddSCaps_0; // 0x10 <type_i>
    int m_ddsCaps_1; // 0x14 <type_i>
    int m_ddsCaps_2; // 0x18 <type_i>
    int m_ddsCaps_3; // 0x1C <type_i>
    int m_ddOSCaps; // 0x20 <type_i>
    int m_guid_0; // 0x24 <type_i>
    int m_guid_1; // 0x28 <type_i>
    int m_guid_2; // 0x2C <type_i>
    int m_guid_3; // 0x30 <type_i>
    int m_dwCompressionRatio; // 0x34 <type_i>
};


