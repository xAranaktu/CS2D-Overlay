#pragma once

#include "defines.h"

// 3 methods, 3 functions
struct Thud_voiceDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_Thud_voice_New)(Thud_voice* pThis); // [New at 0x74C0D2] [0x10] ()i
    int(__cdecl* m_Thud_voice_Delete)(Thud_voice* pThis); // [Delete at 0x74C10E] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    Thud_voice*(__cdecl* fn_existID)(int a1); // [existID at 0x74C11C] [0x30] (i):Thud_voice
    int(__cdecl* fn_Create)(int a1, int a2, int a3, int a4); // [Create at 0x74C182] [0x34] (i,i,i,i)i
    int(__cdecl* m_Thud_voice_Draw)(Thud_voice* pThis, int a1); // [Draw at 0x74C239] [0x38] (i)i
    int(__cdecl* fn_DrawAll)(); // [DrawAll at 0x74C80A] [0x3C] ()i
};


// 4 members
struct Thud_voice {
    Thud_voiceDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_id; // 0x8 <type_i>
    float m_time; // 0xC <type_f>
    int m_mode; // 0x10 <type_i>
    int m_alive; // 0x14 <type_i>
};


