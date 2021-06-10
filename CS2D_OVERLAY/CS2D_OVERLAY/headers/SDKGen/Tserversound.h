#pragma once

#include "defines.h"

// 2 methods, 4 functions
struct TserversoundDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_Tserversound_New)(Tserversound* pThis); // [New at 0x67121F] [0x10] ()i
    int(__cdecl* m_Tserversound_Delete)(Tserversound* pThis); // [Delete at 0x67125C] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_playServer)(BBString* a1, float a2); // [playServer at 0x671291] [0x30] ($,f)i
    int(__cdecl* fn_cleanup)(); // [cleanup at 0x6713F1] [0x34] ()i
    int(__cdecl* fn_stopAll)(); // [stopAll at 0x67149D] [0x38] ()i
    int(__cdecl* fn_stopServer)(BBString* a1); // [stopServer at 0x671559] [0x3C] ($)i
};


// 3 members
struct Tserversound {
    TserversoundDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_file; // 0x8 <type_$>
    TChannel* m_channel; // 0xC <type_:TChannel>
    float m_vol; // 0x10 <type_f>
};


