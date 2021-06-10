#pragma once

#include "defines.h"

// 2 methods, 6 functions
struct TtilefxDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 44(0x2C)
    int(__cdecl* m_Ttilefx_New)(Ttilefx* pThis); // [New at 0x627842] [0x10] ()i
    int(__cdecl* m_Ttilefx_Delete)(Ttilefx* pThis); // [Delete at 0x6278AF] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_freeall)(); // [freeall at 0x6278F5] [0x30] ()i
    int(__cdecl* fn_ini)(); // [ini at 0x627A28] [0x34] ()i
    int(__cdecl* fn_canCreateNewTileFXFromEntity)(Te* a1); // [canCreateNewTileFXFromEntity at 0x627B0C] [0x38] (:Te)i
    int(__cdecl* fn_CreateAnimationTileFX)(Te* a1); // [CreateAnimationTileFX at 0x627CAF] [0x3C] (:Te)i
    int(__cdecl* fn_CreateTileFX)(Te* a1); // [CreateTileFX at 0x627E2B] [0x40] (:Te)i
    int(__cdecl* fn_update)(); // [update at 0x628A39] [0x44] ()i
};


// 9 members
struct Ttilefx {
    TtilefxDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_typ; // 0x8 <type_i>
    int m_f; // 0xC <type_i>
    int m_f_start; // 0x10 <type_i>
    int m_f_end; // 0x14 <type_i>
    int m_f_current; // 0x18 <type_i>
    Ttimer* m_timer; // 0x1C <type_:Ttimer>
    int m_speed; // 0x20 <type_i>
    TImage* m_original; // 0x24 <type_:TImage>
    void* m_gfx; // 0x28 <type_[]:TImage>
};


