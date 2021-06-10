#pragma once

#include "defines.h"

// 16 methods, 1 functions
struct TFixedAngleSpringDecl {
    void* pSuper;  // 0x0 0x874950
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 44(0x2C)
    int(__cdecl* m_TFixedAngleSpring_New)(TFixedAngleSpring* pThis); // [New at 0x5F13B8] [0x10] ()i
    int(__cdecl* m_TFixedAngleSpring_Delete)(TFixedAngleSpring* pThis); // [Delete at 0x5F140B] [0x14] ()i
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
    int(__cdecl* m_TFixedAngleSpring_Update)(TFixedAngleSpring* pThis, float a1); // [Update at 0x5F15A1] [0x40] (f)i
    TBody*(__cdecl* m_TFixedAngleSpring_GetBody)(TFixedAngleSpring* pThis); // [GetBody at 0x5F143E] [0x44] ():TBody
    int(__cdecl* m_TFixedAngleSpring_SetBody)(TFixedAngleSpring* pThis, TBody* a1); // [SetBody at 0x5F144D] [0x48] (:TBody)i
    float(__cdecl* m_TFixedAngleSpring_GetSpringConstant)(TFixedAngleSpring* pThis); // [GetSpringConstant at 0x5F147C] [0x4C] ()f
    int(__cdecl* m_TFixedAngleSpring_SetSpringConstant)(TFixedAngleSpring* pThis, float a1); // [SetSpringConstant at 0x5F148B] [0x50] (f)i
    float(__cdecl* m_TFixedAngleSpring_GetDampningConstant)(TFixedAngleSpring* pThis); // [GetDampningConstant at 0x5F14A2] [0x54] ()f
    int(__cdecl* m_TFixedAngleSpring_SetDampningConstant)(TFixedAngleSpring* pThis, float a1); // [SetDampningConstant at 0x5F14B1] [0x58] (f)i
    float(__cdecl* m_TFixedAngleSpring_GetTargetAngle)(TFixedAngleSpring* pThis); // [GetTargetAngle at 0x5F14C8] [0x5C] ()f
    int(__cdecl* m_TFixedAngleSpring_SetTargetAngle)(TFixedAngleSpring* pThis, float a1); // [SetTargetAngle at 0x5F14D7] [0x60] (f)i
    float(__cdecl* m_TFixedAngleSpring_GetBreakpoint)(TFixedAngleSpring* pThis); // [GetBreakpoint at 0x5F14EE] [0x64] ()f
    int(__cdecl* m_TFixedAngleSpring_SetBreakpoint)(TFixedAngleSpring* pThis, float a1); // [SetBreakpoint at 0x5F14FD] [0x68] (f)i
    float(__cdecl* m_TFixedAngleSpring_GetMaxTorque)(TFixedAngleSpring* pThis); // [GetMaxTorque at 0x5F1514] [0x6C] ()f
    int(__cdecl* m_TFixedAngleSpring_SetMaxTorque)(TFixedAngleSpring* pThis, float a1); // [SetMaxTorque at 0x5F1523] [0x70] (f)i
    float(__cdecl* m_TFixedAngleSpring_GetSpringError)(TFixedAngleSpring* pThis); // [GetSpringError at 0x5F153A] [0x74] ()f
    TFixedAngleSpring*(__cdecl* fn_Create)(TBody* a1, float a2, float a3); // [Create at 0x5F1549] [0x78] (:TBody,f,f):TFixedAngleSpring
};


// Super: 0x874950
// 7 members
struct TFixedAngleSpring {
    TFixedAngleSpringDecl* decl; // 0x0
    int    refs;  // 0x4
    TBody* m__body; // 0x10 <type_:TBody>
    float m__springConstant; // 0x14 <type_f>
    float m__dampningConstant; // 0x18 <type_f>
    float m__targetAngle; // 0x1C <type_f>
    float m__breakpoint; // 0x20 <type_f>
    float m__maxTorque; // 0x24 <type_f>
    float m__springError; // 0x28 <type_f>
};


