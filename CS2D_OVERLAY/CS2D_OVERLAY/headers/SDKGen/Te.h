#pragma once

#include "defines.h"

// 6 methods, 13 functions
struct TeDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 68(0x44)
    int(__cdecl* m_Te_New)(Te* pThis); // [New at 0x6440B8] [0x10] ()i
    int(__cdecl* m_Te_Delete)(Te* pThis); // [Delete at 0x644173] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_freeall)(); // [freeall at 0x64420E] [0x30] ()i
    int(__cdecl* fn_free)(int a1, int a2); // [free at 0x6442BA] [0x34] (i,i)i
    int(__cdecl* m_Te_freelight)(Te* pThis); // [freelight at 0x644615] [0x38] ()i
    Te*(__cdecl* fn_copy)(Te* a1); // [copy at 0x6446ED] [0x3C] (:Te):Te
    Te*(__cdecl* fn_add)(); // [add at 0x6447E7] [0x40] ():Te
    Te*(__cdecl* fn_get)(int a1, int a2); // [get at 0x644812] [0x44] (i,i):Te
    int(__cdecl* fn_count)(int a1); // [count at 0x644899] [0x48] (i)i
    int(__cdecl* fn_updatelevels)(); // [updatelevels at 0x64491C] [0x4C] ()i
    int(__cdecl* fn_draw)(int a1, int a2, int a3, int a4); // [draw at 0x644A82] [0x50] (i,i,i,i)i
    int(__cdecl* fn_update)(int a1, int a2); // [update at 0x64B865] [0x54] (i,i)i
    int(__cdecl* fn_drawineditor)(int a1, int a2, int a3); // [drawineditor at 0x64CA95] [0x58] (i,i,i)i
    Te*(__cdecl* fn_getbypos)(int a1, int a2); // [getbypos at 0x64D887] [0x5C] (i,i):Te
    int(__cdecl* m_Te_setup)(Te* pThis, int a1); // [setup at 0x64D90E] [0x60] (i)i
    int(__cdecl* fn_inzone)(int a1, int a2, int a3); // [inzone at 0x64E0B4] [0x64] (i,i,i)i
    Te*(__cdecl* fn_getrandom)(int a1, int a2, int a3); // [getrandom at 0x64E489] [0x68] (i,i,i):Te
    int(__cdecl* m_Te_triggerentities)(Te* pThis, int a1); // [triggerentities at 0x64E5B7] [0x6C] (i)i
    int(__cdecl* m_Te_arrange)(Te* pThis, int a1); // [arrange at 0x64E7A8] [0x70] (i)i
};


// 15 members
struct Te {
    TeDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_name; // 0x8 <type_$>
    int m_typ; // 0xC <type_i>
    int m_x; // 0x10 <type_i>
    int m_y; // 0x14 <type_i>
    BBString* m_trigger; // 0x18 <type_$>
    int m_state; // 0x1C <type_i>
    void* m_ints; // 0x20 <type_[]i>
    void* m_strs; // 0x24 <type_[]$>
    Tres* m_res; // 0x28 <type_:Tres>
    float m_rot; // 0x2C <type_f>
    TChannel* m_chan; // 0x30 <type_:TChannel>
    Ttimer* m_timer; // 0x34 <type_:Ttimer>
    int m_ai; // 0x38 <type_i>
    Object* m_light; // 0x3C <type_:Object>
    float m_age; // 0x40 <type_f>
};


