#pragma once

#include "defines.h"

// 3 methods, 2 functions
struct Tmap_dDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_Tmap_d_New)(Tmap_d* pThis); // [New at 0x6324A4] [0x10] ()i
    int(__cdecl* m_Tmap_d_Delete)(Tmap_d* pThis); // [Delete at 0x6324E5] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tmap_d_reset)(Tmap_d* pThis); // [reset at 0x632507] [0x30] ()i
    int(__cdecl* fn_copy)(Tmap_d* a1, Tmap_d* a2); // [copy at 0x63254C] [0x34] (:Tmap_d,:Tmap_d)i
    int(__cdecl* fn_comp)(Tmap_d* a1, Tmap_d* a2); // [comp at 0x6325D9] [0x38] (:Tmap_d,:Tmap_d)i
};


// 6 members
struct Tmap_d {
    Tmap_dDecl* decl; // 0x0
    int    refs;  // 0x4
    char m_frame; // 0x8 <type_b>
    char m_r; // 0x9 <type_b>
    char m_g; // 0xA <type_b>
    char m_b; // 0xB <type_b>
    char m_overlay; // 0xC <type_b>
    TImage* m_img; // 0x10 <type_:TImage>
};


