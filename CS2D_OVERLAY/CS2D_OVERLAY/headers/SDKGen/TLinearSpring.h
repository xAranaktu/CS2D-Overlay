#pragma once

#include "defines.h"

// 20 methods, 1 functions
struct TLinearSpringDecl {
    void* pSuper;  // 0x0 0x874950
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 104(0x68)
    int(__cdecl* m_TLinearSpring_New)(TLinearSpring* pThis); // [New at 0x5F3398] [0x10] ()i
    int(__cdecl* m_TLinearSpring_Delete)(TLinearSpring* pThis); // [Delete at 0x5F3489] [0x14] ()i
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
    int(__cdecl* m_TLinearSpring_Update)(TLinearSpring* pThis, float a1); // [Update at 0x5F37F7] [0x40] (f)i
    TBody*(__cdecl* m_TLinearSpring_GetBody1)(TLinearSpring* pThis); // [GetBody1 at 0x5F3588] [0x44] ():TBody
    int(__cdecl* m_TLinearSpring_SetBody1)(TLinearSpring* pThis, TBody* a1); // [SetBody1 at 0x5F3597] [0x48] (:TBody)i
    TBody*(__cdecl* m_TLinearSpring_GetBody2)(TLinearSpring* pThis); // [GetBody2 at 0x5F35C6] [0x4C] ():TBody
    int(__cdecl* m_TLinearSpring_SetBody2)(TLinearSpring* pThis, TBody* a1); // [SetBody2 at 0x5F35D5] [0x50] (:TBody)i
    Vector2*(__cdecl* m_TLinearSpring_GetAttachPoint1)(TLinearSpring* pThis); // [GetAttachPoint1 at 0x5F3604] [0x54] ():Vector2
    int(__cdecl* m_TLinearSpring_SetAttachPoint1)(TLinearSpring* pThis, Vector2* a1); // [SetAttachPoint1 at 0x5F361C] [0x58] (:Vector2)i
    Vector2*(__cdecl* m_TLinearSpring_GetAttachPoint2)(TLinearSpring* pThis); // [GetAttachPoint2 at 0x5F3642] [0x5C] ():Vector2
    int(__cdecl* m_TLinearSpring_SetAttachPoint2)(TLinearSpring* pThis, Vector2* a1); // [SetAttachPoint2 at 0x5F365A] [0x60] (:Vector2)i
    float(__cdecl* m_TLinearSpring_GetSpringConstant)(TLinearSpring* pThis); // [GetSpringConstant at 0x5F3680] [0x64] ()f
    int(__cdecl* m_TLinearSpring_SetSpringConstant)(TLinearSpring* pThis, float a1); // [SetSpringConstant at 0x5F368F] [0x68] (f)i
    float(__cdecl* m_TLinearSpring_GetDampningConstant)(TLinearSpring* pThis); // [GetDampningConstant at 0x5F36A6] [0x6C] ()f
    int(__cdecl* m_TLinearSpring_SetDampningConstant)(TLinearSpring* pThis, float a1); // [SetDampningConstant at 0x5F36B5] [0x70] (f)i
    float(__cdecl* m_TLinearSpring_GetBreakPoint)(TLinearSpring* pThis); // [GetBreakPoint at 0x5F36CC] [0x74] ()f
    int(__cdecl* m_TLinearSpring_SetBreakPoint)(TLinearSpring* pThis, float a1); // [SetBreakPoint at 0x5F36DB] [0x78] (f)i
    float(__cdecl* m_TLinearSpring_GetSpringError)(TLinearSpring* pThis); // [GetSpringError at 0x5F36F2] [0x7C] ()f
    float(__cdecl* m_TLinearSpring_GetRestLength)(TLinearSpring* pThis); // [GetRestLength at 0x5F3701] [0x80] ()f
    int(__cdecl* m_TLinearSpring_SetRestLength)(TLinearSpring* pThis, float a1); // [SetRestLength at 0x5F3710] [0x84] (f)i
    TLinearSpring*(__cdecl* fn_Create)(TBody* a1, Vector2* a2, TBody* a3, Vector2* a4, float a5, float a6); // [Create at 0x5F3727] [0x88] (:TBody,:Vector2,:TBody,:Vector2,f,f):TLinearSpring
};


// Super: 0x874950
// 22 members
struct TLinearSpring {
    TLinearSpringDecl* decl; // 0x0
    int    refs;  // 0x4
    TBody* m__body1; // 0x10 <type_:TBody>
    TBody* m__body2; // 0x14 <type_:TBody>
    Vector2* m__attachPoint1; // 0x18 <type_:Vector2>
    Vector2* m__attachPoint2; // 0x1C <type_:Vector2>
    float m__springConstant; // 0x20 <type_f>
    float m__dampningConstant; // 0x24 <type_f>
    float m__restLength; // 0x28 <type_f>
    float m__breakpoint; // 0x2C <type_f>
    float m__springError; // 0x30 <type_f>
    Vector2* m__difference; // 0x34 <type_:Vector2>
    Vector2* m__force; // 0x38 <type_:Vector2>
    Vector2* m__worldPoint1; // 0x3C <type_:Vector2>
    Vector2* m__worldPoint2; // 0x40 <type_:Vector2>
    Vector2* m__velocityAtPoint1; // 0x44 <type_:Vector2>
    Vector2* m__velocityAtPoint2; // 0x48 <type_:Vector2>
    Vector2* m__relativeVelocity; // 0x4C <type_:Vector2>
    Vector2* m__differenceNormalized; // 0x50 <type_:Vector2>
    Vector2* m__vectorTemp2; // 0x54 <type_:Vector2>
    float m__dampningForce; // 0x58 <type_f>
    float m__springForce; // 0x5C <type_f>
    float m__epsilon; // 0x60 <type_f>
    float m__temp; // 0x64 <type_f>
};


