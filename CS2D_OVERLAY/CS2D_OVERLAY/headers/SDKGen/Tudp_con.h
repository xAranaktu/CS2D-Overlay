#pragma once

#include "defines.h"

// 7 methods, 3 functions
struct Tudp_conDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 72(0x48)
    int(__cdecl* m_Tudp_con_New)(Tudp_con* pThis); // [New at 0x78F11C] [0x10] ()i
    int(__cdecl* m_Tudp_con_Delete)(Tudp_con* pThis); // [Delete at 0x78F1BD] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    Tudp_con*(__cdecl* fn_Create)(int a1, int a2); // [Create at 0x78F214] [0x30] (i,i):Tudp_con
    int(__cdecl* fn_free)(Tudp_con* a1); // [free at 0x78F2C1] [0x34] (:Tudp_con)i
    int(__cdecl* m_Tudp_con_reset)(Tudp_con* pThis, int a1, int a2); // [reset at 0x78F43C] [0x38] (i,i)i
    Tudp_con*(__cdecl* fn_get)(int a1, int a2, int a3); // [get at 0x78F5B1] [0x3C] (i,i,i):Tudp_con
    Tudp_p*(__cdecl* m_Tudp_con_Createpacket)(Tudp_con* pThis, int a1, int a2); // [Createpacket at 0x78F652] [0x40] (i,i):Tudp_p
    Tudp_p*(__cdecl* m_Tudp_con_inbuffer)(Tudp_con* pThis, int a1, TBank* a2, int a3); // [inbuffer at 0x78F762] [0x44] (i,:TBank,i):Tudp_p
    int(__cdecl* m_Tudp_con_clearoutbuffer)(Tudp_con* pThis, int a1); // [clearoutbuffer at 0x78FB20] [0x48] (i)i
    int(__cdecl* m_Tudp_con_sendnow)(Tudp_con* pThis, Tudp_p* a1); // [sendnow at 0x78FC1F] [0x4C] (:Tudp_p)i
};


// 16 members
struct Tudp_con {
    Tudp_conDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_sessionid; // 0x8 <type_i>
    int m_ip; // 0xC <type_i>
    short m_port; // 0x10 <type_s>
    TList* m_in; // 0x14 <type_:TList>
    int m_in_id; // 0x18 <type_i>
    TList* m_out; // 0x1C <type_:TList>
    int m_out_id; // 0x20 <type_i>
    Tudp_p* m_lp; // 0x24 <type_:Tudp_p>
    int m_timeout; // 0x28 <type_i>
    int m_timeoutr; // 0x2C <type_i>
    int m_kill; // 0x30 <type_i>
    int m_error; // 0x34 <type_i>
    int m_isReliable; // 0x38 <type_i>
    int m_up; // 0x3C <type_i>
    int m_down; // 0x40 <type_i>
    TList* m_tmp; // 0x44 <type_:TList>
};


