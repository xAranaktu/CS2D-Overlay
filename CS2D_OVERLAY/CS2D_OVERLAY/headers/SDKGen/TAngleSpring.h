#pragma once

#include "defines.h"

// 18 methods, 1 functions
struct TAngleSpringDecl {
    void* pSuper;  // 0x0 0x874950
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 48(0x30)
    int(__cdecl* m_TAngleSpring_New)(TAngleSpring* pThis); // [New at 0x5F56E1] [0x10] ()i
    int(__cdecl* m_TAngleSpring_Delete)(TAngleSpring* pThis); // [Delete at 0x5F573F] [0x14] ()i
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
    int(__cdecl* m_TAngleSpring_Update)(TAngleSpring* pThis, float a1); // [Update at 0x5F59A6] [0x40] (f)i
    TBody*(__cdecl* m_TAngleSpring_GetBody1)(TAngleSpring* pThis); // [GetBody1 at 0x5F5783] [0x44] ():TBody
    int(__cdecl* m_TAngleSpring_SetBody1)(TAngleSpring* pThis, TBody* a1); // [SetBody1 at 0x5F5792] [0x48] (:TBody)i
    TBody*(__cdecl* m_TAngleSpring_GetBody2)(TAngleSpring* pThis); // [GetBody2 at 0x5F57C1] [0x4C] ():TBody
    int(__cdecl* m_TAngleSpring_SetBody2)(TAngleSpring* pThis, TBody* a1); // [SetBody2 at 0x5F57D0] [0x50] (:TBody)i
    float(__cdecl* m_TAngleSpring_GetSpringConstant)(TAngleSpring* pThis); // [GetSpringConstant at 0x5F57FF] [0x54] ()f
    int(__cdecl* m_TAngleSpring_SetSpringConstant)(TAngleSpring* pThis, float a1); // [SetSpringConstant at 0x5F580E] [0x58] (f)i
    float(__cdecl* m_TAngleSpring_GetDampningConstant)(TAngleSpring* pThis); // [GetDampningConstant at 0x5F5825] [0x5C] ()f
    int(__cdecl* m_TAngleSpring_SetDampningConstant)(TAngleSpring* pThis, float a1); // [SetDampningConstant at 0x5F5834] [0x60] (f)i
    float(__cdecl* m_TAngleSpring_GetTargetAngle)(TAngleSpring* pThis); // [GetTargetAngle at 0x5F584B] [0x64] ()f
    int(__cdecl* m_TAngleSpring_SetTargetAngle)(TAngleSpring* pThis, float a1); // [SetTargetAngle at 0x5F585A] [0x68] (f)i
    float(__cdecl* m_TAngleSpring_GetBreakpoint)(TAngleSpring* pThis); // [GetBreakpoint at 0x5F58B9] [0x6C] ()f
    int(__cdecl* m_TAngleSpring_SetBreakpoint)(TAngleSpring* pThis, float a1); // [SetBreakpoint at 0x5F58C8] [0x70] (f)i
    float(__cdecl* m_TAngleSpring_GetMaxTorque)(TAngleSpring* pThis); // [GetMaxTorque at 0x5F58DF] [0x74] ()f
    int(__cdecl* m_TAngleSpring_SetMaxTorque)(TAngleSpring* pThis, float a1); // [SetMaxTorque at 0x5F58EE] [0x78] (f)i
    float(__cdecl* m_TAngleSpring_GetSpringError)(TAngleSpring* pThis); // [GetSpringError at 0x5F5905] [0x7C] ()f
    TAngleSpring*(__cdecl* fn_Create)(TBody* a1, TBody* a2, float a3, float a4); // [Create at 0x5F5914] [0x80] (:TBody,:TBody,f,f):TAngleSpring
};


// Super: 0x874950
// 8 members
struct TAngleSpring {
    TAngleSpringDecl* decl; // 0x0
    int    refs;  // 0x4
    TBody* m__body1; // 0x10 <type_:TBody>
    TBody* m__body2; // 0x14 <type_:TBody>
    float m__springConstant; // 0x18 <type_f>
    float m__dampningConstant; // 0x1C <type_f>
    float m__targetAngle; // 0x20 <type_f>
    float m__breakpoint; // 0x24 <type_f>
    float m__maxTorque; // 0x28 <type_f>
    float m__springError; // 0x2C <type_f>
};


