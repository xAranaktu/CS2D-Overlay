#pragma once

#include "defines.h"

// 3 methods, 17 functions
struct TproDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 72(0x48)
    int(__cdecl* m_Tpro_New)(Tpro* pThis); // [New at 0x673E61] [0x10] ()i
    int(__cdecl* m_Tpro_Delete)(Tpro* pThis); // [Delete at 0x673EEB] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_freeall)(); // [freeall at 0x673F20] [0x30] ()i
    Tpro*(__cdecl* fn_add)(int a1, int a2, int a3); // [add at 0x674046] [0x34] (i,i,i):Tpro
    Tpro*(__cdecl* fn_addground)(int a1, int a2, int a3, int a4, int a5); // [addground at 0x6741E4] [0x38] (i,i,i,i,i):Tpro
    Tpro*(__cdecl* fn_get)(int a1, int a2); // [get at 0x674263] [0x3C] (i,i):Tpro
    int(__cdecl* fn_draw_ground)(int a1); // [draw_ground at 0x67435D] [0x40] (i)i
    int(__cdecl* fn_draw_flying)(); // [draw_flying at 0x676740] [0x44] ()i
    int(__cdecl* fn_draw_flying_shadow)(float a1); // [draw_flying_shadow at 0x67954A] [0x48] (f)i
    int(__cdecl* fn_smokegren_cover)(int a1, int a2); // [smokegren_cover at 0x679845] [0x4C] (i,i)i
    int(__cdecl* fn_remove)(int a1, int a2); // [remove at 0x67990E] [0x50] (i,i)i
    int(__cdecl* fn_kill)(int a1, int a2); // [kill at 0x67A182] [0x54] (i,i)i
    int(__cdecl* fn_killallofplayer)(int a1); // [killallofplayer at 0x67A527] [0x58] (i)i
    int(__cdecl* fn_countgroundnet)(); // [countgroundnet at 0x67A603] [0x5C] ()i
    int(__cdecl* fn_luahook)(int a1, int a2, int a3, int a4, int a5); // [luahook at 0x67A689] [0x60] (i,i,i,i,i)i
    int(__cdecl* fn_luahookimpact)(int a1, int a2, int a3, int a4, int a5, int a6); // [luahookimpact at 0x67A76C] [0x64] (i,i,i,i,i,i)i
    int(__cdecl* fn_spawngroundprojectile)(int a1, int a2, int a3, int a4, int a5, int a6); // [spawngroundprojectile at 0x67A860] [0x68] (i,i,i,i,i,i)i
    int(__cdecl* m_Tpro_groundinit)(Tpro* pThis); // [groundinit at 0x67AA2A] [0x6C] ()i
    int(__cdecl* fn_spawnprojectile)(int a1, int a2, int a3, int a4, int a5, int a6, float a7); // [spawnprojectile at 0x67AB92] [0x70] (i,i,i,i,i,i,f)i
    int(__cdecl* fn_move)(int a1, int a2, float a3, float a4); // [move at 0x67AE5F] [0x74] (i,i,f,f)i
};


// 16 members
struct Tpro {
    TproDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_id; // 0x8 <type_i>
    int m_typ; // 0xC <type_i>
    int m_player; // 0x10 <type_i>
    float m_x; // 0x14 <type_f>
    float m_y; // 0x18 <type_f>
    float m_dir; // 0x1C <type_f>
    float m_rot; // 0x20 <type_f>
    float m_flydist; // 0x24 <type_f>
    float m_time; // 0x28 <type_f>
    int m_dmgtimer; // 0x2C <type_i>
    Ttimer* m_detonate; // 0x30 <type_:Ttimer>
    TLightSource* m_light; // 0x34 <type_:TLightSource>
    float m_movetox; // 0x38 <type_f>
    float m_movetoy; // 0x3C <type_f>
    int m_domove; // 0x40 <type_i>
    int m_startflydist; // 0x44 <type_i>
};


