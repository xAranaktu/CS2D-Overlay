#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct rpolyDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 60(0x3C)
    int(__cdecl* m_rpoly_New)(rpoly* pThis); // [New at 0x7AA954] [0x10] ()i
    int(__cdecl* m_rpoly_Delete)(rpoly* pThis); // [Delete at 0x7AA9E9] [0x14] ()i
};


// 13 members
struct rpoly {
    rpolyDecl* decl; // 0x0
    int    refs;  // 0x4
    TPixmap* m_texture; // 0x8 <type_:TPixmap>
    void* m_data; // 0xC <type_[]f>
    int m_channels; // 0x10 <type_i>
    int m_count; // 0x14 <type_i>
    int m_size; // 0x18 <type_i>
    void* m_ldat; // 0x1C <type_[]f>
    void* m_ladd; // 0x20 <type_[]f>
    void* m_rdat; // 0x24 <type_[]f>
    void* m_radd; // 0x28 <type_[]f>
    int m_Left; // 0x2C <type_i>
    int m_Right; // 0x30 <type_i>
    int m_top; // 0x34 <type_i>
    int m_state; // 0x38 <type_i>
};


