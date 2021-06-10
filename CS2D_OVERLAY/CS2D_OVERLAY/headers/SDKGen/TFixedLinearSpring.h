#pragma once

#include "defines.h"

// 18 methods, 1 functions
struct TFixedLinearSpringDecl {
    void* pSuper;  // 0x0 0x874950
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 92(0x5C)
    int(__cdecl* m_TFixedLinearSpring_New)(TFixedLinearSpring* pThis); // [New at 0x5F2EBA] [0x10] ()i
    int(__cdecl* m_TFixedLinearSpring_Delete)(TFixedLinearSpring* pThis); // [Delete at 0x5F2F88] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    void* nothing_12; // 0x34
    void* nothing_13; // 0x38
    void* nothing_14; // 0x3C
    int(__cdecl* m_TFixedLinearSpring_Update)(TFixedLinearSpring* pThis, float a1); // [Update at 0x5F325B] [0x40] (f)i
    TBody*(__cdecl* m_TFixedLinearSpring_GetBody)(TFixedLinearSpring* pThis); // [GetBody at 0x5F3054] [0x44] ():TBody
    int(__cdecl* m_TFixedLinearSpring_SetBody)(TFixedLinearSpring* pThis, TBody* a1); // [SetBody at 0x5F3063] [0x48] (:TBody)i
    float(__cdecl* m_TFixedLinearSpring_GetSpringConstant)(TFixedLinearSpring* pThis); // [GetSpringConstant at 0x5F3092] [0x4C] ()f
    int(__cdecl* m_TFixedLinearSpring_SetSpringConstant)(TFixedLinearSpring* pThis, float a1); // [SetSpringConstant at 0x5F30A1] [0x50] (f)i
    float(__cdecl* m_TFixedLinearSpring_GetDampningConstant)(TFixedLinearSpring* pThis); // [GetDampningConstant at 0x5F30B8] [0x54] ()f
    int(__cdecl* m_TFixedLinearSpring_SetDampningConstant)(TFixedLinearSpring* pThis, float a1); // [SetDampningConstant at 0x5F30C7] [0x58] (f)i
    float(__cdecl* m_TFixedLinearSpring_GetBreakPoint)(TFixedLinearSpring* pThis); // [GetBreakPoint at 0x5F30DE] [0x5C] ()f
    int(__cdecl* m_TFixedLinearSpring_SetBreakPoint)(TFixedLinearSpring* pThis, float a1); // [SetBreakPoint at 0x5F30ED] [0x60] (f)i
    float(__cdecl* m_TFixedLinearSpring_GetSpringError)(TFixedLinearSpring* pThis); // [GetSpringError at 0x5F3104] [0x64] ()f
    Vector2*(__cdecl* m_TFixedLinearSpring_GetBodyAttachPoint)(TFixedLinearSpring* pThis); // [GetBodyAttachPoint at 0x5F3113] [0x68] ():Vector2
    int(__cdecl* m_TFixedLinearSpring_SetBodyAttachPoint)(TFixedLinearSpring* pThis, Vector2* a1); // [SetBodyAttachPoint at 0x5F312B] [0x6C] (:Vector2)i
    Vector2*(__cdecl* m_TFixedLinearSpring_GetWorldAttachPoint)(TFixedLinearSpring* pThis); // [GetWorldAttachPoint at 0x5F3151] [0x70] ():Vector2
    int(__cdecl* m_TFixedLinearSpring_SetWorldAttachPoint)(TFixedLinearSpring* pThis, Vector2* a1); // [SetWorldAttachPoint at 0x5F3169] [0x74] (:Vector2)i
    float(__cdecl* m_TFixedLinearSpring_GetRestLength)(TFixedLinearSpring* pThis); // [GetRestLength at 0x5F318F] [0x78] ()f
    int(__cdecl* m_TFixedLinearSpring_SetRestLength)(TFixedLinearSpring* pThis, float a1); // [SetRestLength at 0x5F319E] [0x7C] (f)i
    TFixedLinearSpring*(__cdecl* fn_Create)(TBody* a1, Vector2* a2, Vector2* a3, float a4, float a5); // [Create at 0x5F31B5] [0x80] (:TBody,:Vector2,:Vector2,f,f):TFixedLinearSpring
};


// Super: 0x874950
// 19 members
struct TFixedLinearSpring {
    TFixedLinearSpringDecl* decl; // 0x0
    int    refs;  // 0x4
    TBody* m__body; // 0x10 <type_:TBody>
    Vector2* m__bodyAttachPoint; // 0x14 <type_:Vector2>
    Vector2* m__worldAttachPoint; // 0x18 <type_:Vector2>
    float m__springConstant; // 0x1C <type_f>
    float m__dampningConstant; // 0x20 <type_f>
    float m__restLength; // 0x24 <type_f>
    float m__breakPoint; // 0x28 <type_f>
    float m__springError; // 0x2C <type_f>
    Vector2* m__difference; // 0x30 <type_:Vector2>
    Vector2* m__bodyWorldPoint; // 0x34 <type_:Vector2>
    Vector2* m__bodyVelocity; // 0x38 <type_:Vector2>
    Vector2* m__vectorTemp1; // 0x3C <type_:Vector2>
    Vector2* m__vectorTemp2; // 0x40 <type_:Vector2>
    Vector2* m__force; // 0x44 <type_:Vector2>
    Vector2* m__differenceNormalized; // 0x48 <type_:Vector2>
    float m__dampningForce; // 0x4C <type_f>
    float m__springForce; // 0x50 <type_f>
    float m__epsilon; // 0x54 <type_f>
    float m__temp; // 0x58 <type_f>
};


