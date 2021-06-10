#pragma once

#include "defines.h"

// 3 methods, 3 functions
struct TPosSoundDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 40(0x28)
    int(__cdecl* m_TPosSound_New)(TPosSound* pThis); // [New at 0x67162B] [0x10] ()i
    int(__cdecl* m_TPosSound_Delete)(TPosSound* pThis); // [Delete at 0x671689] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TPosSound*(__cdecl* fn_Create)(BBString* a1, int a2, int a3, float a4, int a5); // [Create at 0x6716BE] [0x30] ($,i,i,f,i):TPosSound
    int(__cdecl* m_TPosSound_remove)(TPosSound* pThis); // [remove at 0x671795] [0x34] ()i
    int(__cdecl* fn_update)(); // [update at 0x6717D5] [0x38] ()i
    int(__cdecl* fn_cleanup)(); // [cleanup at 0x671896] [0x3C] ()i
};


// 8 members
struct TPosSound {
    TPosSoundDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_file; // 0x8 <type_$>
    int m_x; // 0xC <type_i>
    int m_y; // 0x10 <type_i>
    TChannel* m_channel; // 0x14 <type_:TChannel>
    float m_vol; // 0x18 <type_f>
    int m_loop; // 0x1C <type_i>
    float m_rate; // 0x20 <type_f>
    int m_state; // 0x24 <type_i>
};


