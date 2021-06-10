#pragma once

#include "defines.h"

// 5 methods, 3 functions
struct TLightingStripeDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 56(0x38)
    int(__cdecl* m_TLightingStripe_New)(TLightingStripe* pThis); // [New at 0x5DA47A] [0x10] ()i
    int(__cdecl* m_TLightingStripe_Delete)(TLightingStripe* pThis); // [Delete at 0x5DA4E6] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TLightingStripe_ChangeState)(TLightingStripe* pThis, int a1); // [ChangeState at 0x5DA4F4] [0x30] (i)i
    int(__cdecl* m_TLightingStripe_Remove)(TLightingStripe* pThis); // [Remove at 0x5DA50B] [0x34] ()i
    int(__cdecl* m_TLightingStripe_ReInit)(TLightingStripe* pThis, int a1, int a2, int a3, int a4, int a5, int a6, void* a7, int a8, float a9); // [ReInit at 0x5DA52B] [0x38] (i,i,i,i,i,i,[]i,i,f)i
    TLightingStripe*(__cdecl* fn_CreateStripe)(int a1, int a2, int a3, int a4, int a5, int a6, void* a7, int a8, float a9); // [CreateStripe at 0x5DA5A2] [0x3C] (i,i,i,i,i,i,[]i,i,f):TLightingStripe
    int(__cdecl* fn_DrawStripesLight)(float a1); // [DrawStripesLight at 0x5DA600] [0x40] (f)i
    int(__cdecl* fn_DrawStripesLightColor)(); // [DrawStripesLightColor at 0x5DAA17] [0x44] ()i
};


// 12 members
struct TLightingStripe {
    TLightingStripeDecl* decl; // 0x0
    int    refs;  // 0x4
    float m_x; // 0x8 <type_f>
    float m_y; // 0xC <type_f>
    float m_w; // 0x10 <type_f>
    float m_h; // 0x14 <type_f>
    int m_rot; // 0x18 <type_i>
    float m_Alpha; // 0x1C <type_f>
    int m_ColorR; // 0x20 <type_i>
    int m_ColorG; // 0x24 <type_i>
    int m_ColorB; // 0x28 <type_i>
    int m_Day; // 0x2C <type_i>
    int m_State; // 0x30 <type_i>
    int m_Height; // 0x34 <type_i>
};


