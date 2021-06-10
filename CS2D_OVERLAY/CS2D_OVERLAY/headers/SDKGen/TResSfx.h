#pragma once

#include "defines.h"

// 5 methods, 4 functions
struct TResSfxDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_TResSfx_New)(TResSfx* pThis); // [New at 0x651CA6] [0x10] ()i
    int(__cdecl* m_TResSfx_Delete)(TResSfx* pThis); // [Delete at 0x651CF0] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TresSfx*(__cdecl* fn_Init)(BBString* a1); // [Init at 0x651D36] [0x30] ($):TresSfx
    int(__cdecl* m_TResSfx_LoadData)(TResSfx* pThis); // [LoadData at 0x651D7D] [0x34] ()i
    int(__cdecl* m_TResSfx_ClearData)(TResSfx* pThis); // [ClearData at 0x651EC9] [0x38] ()i
    int(__cdecl* m_TResSfx_LoadNeeded)(TResSfx* pThis); // [LoadNeeded at 0x651F1D] [0x3C] ()i
    int(__cdecl* fn_LoadNeededAll)(); // [LoadNeededAll at 0x651F9A] [0x40] ()i
    int(__cdecl* fn_LoadAll)(); // [LoadAll at 0x652003] [0x44] ()i
    int(__cdecl* fn_ClearAll)(); // [ClearAll at 0x652073] [0x48] ()i
};


// 4 members
struct TResSfx {
    TResSfxDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_path; // 0x8 <type_$>
    BBString* m_sourcePath; // 0xC <type_$>
    TSound* m_r; // 0x10 <type_:TSound>
    int m_isLoaded; // 0x14 <type_i>
};


