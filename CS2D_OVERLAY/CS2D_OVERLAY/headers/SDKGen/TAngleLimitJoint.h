#pragma once

#include "defines.h"

// 21 methods, 1 functions
struct TAngleLimitJointDecl {
    void* pSuper;  // 0x0 0x874AA8
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 80(0x50)
    int(__cdecl* m_TAngleLimitJoint_New)(TAngleLimitJoint* pThis); // [New at 0x5F4A85] [0x10] ()i
    int(__cdecl* m_TAngleLimitJoint_Delete)(TAngleLimitJoint* pThis); // [Delete at 0x5F4B18] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    void* nothing_12; // 0x34
    int(__cdecl* m_TAngleLimitJoint_PreStep)(TAngleLimitJoint* pThis, float a1); // [PreStep at 0x5F4D31] [0x38] (f)i
    int(__cdecl* m_TAngleLimitJoint_Update)(TAngleLimitJoint* pThis); // [Update at 0x5F4EB0] [0x3C] ()i
    TBody*(__cdecl* m_TAngleLimitJoint_GetBody1)(TAngleLimitJoint* pThis); // [GetBody1 at 0x5F4B5C] [0x40] ():TBody
    int(__cdecl* m_TAngleLimitJoint_SetBody1)(TAngleLimitJoint* pThis, TBody* a1); // [SetBody1 at 0x5F4B6B] [0x44] (:TBody)i
    TBody*(__cdecl* m_TAngleLimitJoint_GetBody2)(TAngleLimitJoint* pThis); // [GetBody2 at 0x5F4B9A] [0x48] ():TBody
    int(__cdecl* m_TAngleLimitJoint_SetBody2)(TAngleLimitJoint* pThis, TBody* a1); // [SetBody2 at 0x5F4BA9] [0x4C] (:TBody)i
    float(__cdecl* m_TAngleLimitJoint_GetBiasFactor)(TAngleLimitJoint* pThis); // [GetBiasFactor at 0x5F4BD8] [0x50] ()f
    int(__cdecl* m_TAngleLimitJoint_SetBiasFactor)(TAngleLimitJoint* pThis, float a1); // [SetBiasFactor at 0x5F4BE7] [0x54] (f)i
    float(__cdecl* m_TAngleLimitJoint_GetSlop)(TAngleLimitJoint* pThis); // [GetSlop at 0x5F4BFE] [0x58] ()f
    int(__cdecl* m_TAngleLimitJoint_SetSlop)(TAngleLimitJoint* pThis, float a1); // [SetSlop at 0x5F4C0D] [0x5C] (f)i
    float(__cdecl* m_TAngleLimitJoint_GetSoftness)(TAngleLimitJoint* pThis); // [GetSoftness at 0x5F4C24] [0x60] ()f
    int(__cdecl* m_TAngleLimitJoint_SetSoftness)(TAngleLimitJoint* pThis, float a1); // [SetSoftness at 0x5F4C33] [0x64] (f)i
    float(__cdecl* m_TAngleLimitJoint_GetUpperLimit)(TAngleLimitJoint* pThis); // [GetUpperLimit at 0x5F4C4A] [0x68] ()f
    int(__cdecl* m_TAngleLimitJoint_SetUpperLimit)(TAngleLimitJoint* pThis, float a1); // [SetUpperLimit at 0x5F4C59] [0x6C] (f)i
    float(__cdecl* m_TAngleLimitJoint_GetLowerLimit)(TAngleLimitJoint* pThis); // [GetLowerLimit at 0x5F4C70] [0x70] ()f
    int(__cdecl* m_TAngleLimitJoint_SetLowerLimit)(TAngleLimitJoint* pThis, float a1); // [SetLowerLimit at 0x5F4C7F] [0x74] (f)i
    float(__cdecl* m_TAngleLimitJoint_GetBreakPoint)(TAngleLimitJoint* pThis); // [GetBreakPoint at 0x5F4C96] [0x78] ()f
    int(__cdecl* m_TAngleLimitJoint_SetBreakPoint)(TAngleLimitJoint* pThis, float a1); // [SetBreakPoint at 0x5F4CA5] [0x7C] (f)i
    float(__cdecl* m_TAngleLimitJoint_GetJointError)(TAngleLimitJoint* pThis); // [GetJointError at 0x5F4CBC] [0x80] ()f
    TAngleLimitJoint*(__cdecl* fn_Create)(TBody* a1, TBody* a2, float a3, float a4); // [Create at 0x5F4CCB] [0x84] (:TBody,:TBody,f,f):TAngleLimitJoint
};


// Super: 0x874AA8
// 17 members
struct TAngleLimitJoint {
    TAngleLimitJointDecl* decl; // 0x0
    int    refs;  // 0x4
    TBody* m__body1; // 0xC <type_:TBody>
    TBody* m__body2; // 0x10 <type_:TBody>
    float m__biasFactor; // 0x14 <type_f>
    float m__slop; // 0x18 <type_f>
    float m__softness; // 0x1C <type_f>
    float m__upperLimit; // 0x20 <type_f>
    float m__lowerLimit; // 0x24 <type_f>
    float m__breakPoint; // 0x28 <type_f>
    float m__velocityBias; // 0x2C <type_f>
    float m__accumulatedAngularImpulse; // 0x30 <type_f>
    float m__massFactor; // 0x34 <type_f>
    float m__jointError; // 0x38 <type_f>
    int m__upperLimitViolated; // 0x3C <type_i>
    int m__lowerLimitViolated; // 0x40 <type_i>
    float m__difference; // 0x44 <type_f>
    float m__accumulatedAngularImpulseOld; // 0x48 <type_f>
    float m__angularImpulse; // 0x4C <type_f>
};


