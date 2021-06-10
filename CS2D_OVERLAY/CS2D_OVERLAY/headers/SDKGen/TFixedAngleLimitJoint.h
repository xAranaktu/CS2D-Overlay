#pragma once

#include "defines.h"

// 19 methods, 1 functions
struct TFixedAngleLimitJointDecl {
    void* pSuper;  // 0x0 0x874AA8
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 76(0x4C)
    int(__cdecl* m_TFixedAngleLimitJoint_New)(TFixedAngleLimitJoint* pThis); // [New at 0x5F4F9E] [0x10] ()i
    int(__cdecl* m_TFixedAngleLimitJoint_Delete)(TFixedAngleLimitJoint* pThis); // [Delete at 0x5F5026] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    void* nothing_12; // 0x34
    int(__cdecl* m_TFixedAngleLimitJoint_PreStep)(TFixedAngleLimitJoint* pThis, float a1); // [PreStep at 0x5F51CE] [0x38] (f)i
    int(__cdecl* m_TFixedAngleLimitJoint_Update)(TFixedAngleLimitJoint* pThis); // [Update at 0x5F532F] [0x3C] ()i
    TBody*(__cdecl* m_TFixedAngleLimitJoint_GetBody)(TFixedAngleLimitJoint* pThis); // [GetBody at 0x5F5059] [0x40] ():TBody
    int(__cdecl* m_TFixedAngleLimitJoint_SetBody)(TFixedAngleLimitJoint* pThis, TBody* a1); // [SetBody at 0x5F5068] [0x44] (:TBody)i
    float(__cdecl* m_TFixedAngleLimitJoint_GetBiasFactor)(TFixedAngleLimitJoint* pThis); // [GetBiasFactor at 0x5F5097] [0x48] ()f
    int(__cdecl* m_TFixedAngleLimitJoint_SetBiasFactor)(TFixedAngleLimitJoint* pThis, float a1); // [SetBiasFactor at 0x5F50A6] [0x4C] (f)i
    float(__cdecl* m_TFixedAngleLimitJoint_GetSlop)(TFixedAngleLimitJoint* pThis); // [GetSlop at 0x5F50BD] [0x50] ()f
    int(__cdecl* m_TFixedAngleLimitJoint_SetSlop)(TFixedAngleLimitJoint* pThis, float a1); // [SetSlop at 0x5F50CC] [0x54] (f)i
    float(__cdecl* m_TFixedAngleLimitJoint_GetSoftness)(TFixedAngleLimitJoint* pThis); // [GetSoftness at 0x5F50E3] [0x58] ()f
    int(__cdecl* m_TFixedAngleLimitJoint_SetSoftness)(TFixedAngleLimitJoint* pThis, float a1); // [SetSoftness at 0x5F50F2] [0x5C] (f)i
    float(__cdecl* m_TFixedAngleLimitJoint_GetUpperLimit)(TFixedAngleLimitJoint* pThis); // [GetUpperLimit at 0x5F5109] [0x60] ()f
    int(__cdecl* m_TFixedAngleLimitJoint_SetUpperLimit)(TFixedAngleLimitJoint* pThis, float a1); // [SetUpperLimit at 0x5F5118] [0x64] (f)i
    float(__cdecl* m_TFixedAngleLimitJoint_GetLowerLimit)(TFixedAngleLimitJoint* pThis); // [GetLowerLimit at 0x5F512F] [0x68] ()f
    int(__cdecl* m_TFixedAngleLimitJoint_SetLowerLimit)(TFixedAngleLimitJoint* pThis, float a1); // [SetLowerLimit at 0x5F513E] [0x6C] (f)i
    float(__cdecl* m_TFixedAngleLimitJoint_GetBreakPoint)(TFixedAngleLimitJoint* pThis); // [GetBreakPoint at 0x5F5155] [0x70] ()f
    int(__cdecl* m_TFixedAngleLimitJoint_SetBreakPoint)(TFixedAngleLimitJoint* pThis, float a1); // [SetBreakPoint at 0x5F5164] [0x74] (f)i
    float(__cdecl* m_TFixedAngleLimitJoint_GetJointError)(TFixedAngleLimitJoint* pThis); // [GetJointError at 0x5F517B] [0x78] ()f
    TFixedAngleLimitJoint*(__cdecl* fn_Create)(TBody* a1, float a2, float a3); // [Create at 0x5F518A] [0x7C] (:TBody,f,f):TFixedAngleLimitJoint
};


// Super: 0x874AA8
// 16 members
struct TFixedAngleLimitJoint {
    TFixedAngleLimitJointDecl* decl; // 0x0
    int    refs;  // 0x4
    TBody* m__body; // 0xC <type_:TBody>
    float m__biasFactor; // 0x10 <type_f>
    float m__slop; // 0x14 <type_f>
    float m__softness; // 0x18 <type_f>
    float m__upperLimit; // 0x1C <type_f>
    float m__lowerLimit; // 0x20 <type_f>
    float m__breakpoint; // 0x24 <type_f>
    float m__velocityBias; // 0x28 <type_f>
    float m__accumulatedAngularImpulse; // 0x2C <type_f>
    float m__massFactor; // 0x30 <type_f>
    float m__jointError; // 0x34 <type_f>
    int m__upperLimitViolated; // 0x38 <type_i>
    int m__lowerLimitViolated; // 0x3C <type_i>
    float m__difference; // 0x40 <type_f>
    float m__accumulatedAngularImpulseOld; // 0x44 <type_f>
    float m__angularImpulse; // 0x48 <type_f>
};


