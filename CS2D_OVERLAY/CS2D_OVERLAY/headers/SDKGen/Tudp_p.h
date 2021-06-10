#pragma once

#include "defines.h"

// 27 methods, 1 functions
struct Tudp_pDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 36(0x24)
    int(__cdecl* m_Tudp_p_New)(Tudp_p* pThis); // [New at 0x78FD93] [0x10] ()i
    int(__cdecl* m_Tudp_p_Delete)(Tudp_p* pThis); // [Delete at 0x78FDEA] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tudp_p_size)(Tudp_p* pThis); // [size at 0x78FE0C] [0x30] ()i
    int(__cdecl* m_Tudp_p_avail)(Tudp_p* pThis); // [avail at 0x78FE34] [0x34] ()i
    Tudp_p*(__cdecl* fn_Create)(); // [Create at 0x78FE51] [0x38] ():Tudp_p
    int(__cdecl* m_Tudp_p_wsys)(Tudp_p* pThis, char a1, short a2); // [wsys at 0x78FE92] [0x3C] (b,s)i
    int(__cdecl* m_Tudp_p_wlastsys)(Tudp_p* pThis, char a1, short a2); // [wlastsys at 0x78FF50] [0x40] (b,s)i
    int(__cdecl* m_Tudp_p_wbyte)(Tudp_p* pThis, char a1); // [wbyte at 0x7900B2] [0x44] (b)i
    int(__cdecl* m_Tudp_p_wshort)(Tudp_p* pThis, short a1); // [wshort at 0x790112] [0x48] (s)i
    int(__cdecl* m_Tudp_p_wint)(Tudp_p* pThis, int a1); // [wint at 0x790173] [0x4C] (i)i
    int(__cdecl* m_Tudp_p_wlong)(Tudp_p* pThis, long long a1); // [wlong at 0x7901C6] [0x50] (l)i
    int(__cdecl* m_Tudp_p_wfloat)(Tudp_p* pThis, float a1); // [wfloat at 0x790228] [0x54] (f)i
    int(__cdecl* m_Tudp_p_wdouble)(Tudp_p* pThis, void* a1); // [wdouble at 0x790278] [0x58] (d)i
    int(__cdecl* m_Tudp_p_wsstr)(Tudp_p* pThis, BBString* a1); // [wsstr at 0x7902D1] [0x5C] ($)i
    int(__cdecl* m_Tudp_p_wstr)(Tudp_p* pThis, BBString* a1); // [wstr at 0x79035A] [0x60] ($)i
    int(__cdecl* m_Tudp_p_wtstr)(Tudp_p* pThis, BBString* a1, char a2); // [wtstr at 0x7903E3] [0x64] ($,b)i
    int(__cdecl* m_Tudp_p_wbank)(Tudp_p* pThis, TBank* a1); // [wbank at 0x79047F] [0x68] (:TBank)i
    char(__cdecl* m_Tudp_p_rbyte)(Tudp_p* pThis); // [rbyte at 0x79051F] [0x6C] ()b
    char(__cdecl* m_Tudp_p_rbytes)(Tudp_p* pThis, int a1); // [rbytes at 0x79057B] [0x70] (i)b
    short(__cdecl* m_Tudp_p_rshort)(Tudp_p* pThis); // [rshort at 0x7905BA] [0x74] ()s
    int(__cdecl* m_Tudp_p_rint)(Tudp_p* pThis); // [rint at 0x790619] [0x78] ()i
    long long(__cdecl* m_Tudp_p_rlong)(Tudp_p* pThis); // [rlong at 0x790663] [0x7C] ()l
    float(__cdecl* m_Tudp_p_rfloat)(Tudp_p* pThis); // [rfloat at 0x7906CD] [0x80] ()f
    void*(__cdecl* m_Tudp_p_rdouble)(Tudp_p* pThis); // [rdouble at 0x790718] [0x84] ()d
    BBString*(__cdecl* m_Tudp_p_rsstr)(Tudp_p* pThis); // [rsstr at 0x79075F] [0x88] ()$
    BBString*(__cdecl* m_Tudp_p_rstr)(Tudp_p* pThis); // [rstr at 0x790861] [0x8C] ()$
    BBString*(__cdecl* m_Tudp_p_rtstr)(Tudp_p* pThis, char a1); // [rtstr at 0x790966] [0x90] (b)$
    TBank*(__cdecl* m_Tudp_p_rbank)(Tudp_p* pThis); // [rbank at 0x7909F6] [0x94] ():TBank
};


// 7 members
struct Tudp_p {
    Tudp_pDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_id; // 0x8 <type_i>
    TBank* m_d; // 0xC <type_:TBank>
    int m_readpos; // 0x10 <type_i>
    int m_done; // 0x14 <type_i>
    int m_rs_timer; // 0x18 <type_i>
    int m_rs_delay; // 0x1C <type_i>
    int m_rs_attempt; // 0x20 <type_i>
};


