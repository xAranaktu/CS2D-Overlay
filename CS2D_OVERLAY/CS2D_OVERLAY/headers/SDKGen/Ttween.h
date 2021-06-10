#pragma once

#include "defines.h"

// 5 methods, 6 functions
struct TtweenDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 68(0x44)
    int(__cdecl* m_Ttween_New)(Ttween* pThis); // [New at 0x66F0DD] [0x10] ()i
    int(__cdecl* m_Ttween_Delete)(Ttween* pThis); // [Delete at 0x66F1FD] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    Ttween*(__cdecl* fn_addtween)(Tdo* a1, char a2, int a3); // [addtween at 0x66F2DC] [0x30] (:Tdo,b,i):Ttween
    int(__cdecl* fn_freetween)(Ttween* a1); // [freetween at 0x66F5C3] [0x34] (:Ttween)i
    int(__cdecl* fn_freehudtext)(int a1); // [freehudtext at 0x66F618] [0x38] (i)i
    int(__cdecl* fn_update)(); // [update at 0x66F697] [0x3C] ()i
    int(__cdecl* m_Ttween_send)(Ttween* pThis, Tudp_con* a1); // [send at 0x6700BB] [0x40] (:Tudp_con)i
    int(__cdecl* m_Ttween_sendDuration)(Ttween* pThis, Tudp_con* a1, int a2); // [sendDuration at 0x670613] [0x44] (:Tudp_con,i)i
    int(__cdecl* fn_receive)(Tudp_p* a1); // [receive at 0x67065E] [0x48] (:Tudp_p)i
    int(__cdecl* fn_readDuration)(Tudp_p* a1); // [readDuration at 0x670D51] [0x4C] (:Tudp_p)i
    int(__cdecl* m_Ttween_copyValuesFrom)(Ttween* pThis, Ttween* a1); // [copyValuesFrom at 0x670D87] [0x50] (:Ttween)i
};


// 16 members
struct Ttween {
    TtweenDecl* decl; // 0x0
    int    refs;  // 0x4
    Tdo* m_do; // 0x8 <type_:Tdo>
    int m_hudtext; // 0xC <type_i>
    char m_sync; // 0x10 <type_b>
    char m_mode; // 0x11 <type_b>
    Ttimer* m_t; // 0x14 <type_:Ttimer>
    int m_duration; // 0x18 <type_i>
    void* m_x; // 0x1C <type_[]f>
    void* m_y; // 0x20 <type_[]f>
    void* m_rot; // 0x24 <type_[]f>
    void* m_alpha; // 0x28 <type_[]f>
    void* m_r; // 0x2C <type_[]b>
    void* m_g; // 0x30 <type_[]b>
    void* m_b; // 0x34 <type_[]b>
    void* m_sx; // 0x38 <type_[]f>
    void* m_sy; // 0x3C <type_[]f>
    void* m_frame; // 0x40 <type_[]b>
};


