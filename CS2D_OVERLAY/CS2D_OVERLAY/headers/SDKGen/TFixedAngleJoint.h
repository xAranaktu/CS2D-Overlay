#pragma once

#include "defines.h"

// 17 methods, 1 functions
struct TFixedAngleJointDecl {
    void* pSuper;  // 0x0 0x874AA8
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 48(0x30)
    int(__cdecl* m_TFixedAngleJoint_New)(TFixedAngleJoint* pThis); // [New at 0x5F53FE] [0x10] ()i
    int(__cdecl* m_TFixedAngleJoint_Delete)(TFixedAngleJoint* pThis); // [Delete at 0x5F545F] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    void* nothing_12; // 0x34
    int(__cdecl* m_TFixedAngleJoint_PreStep)(TFixedAngleJoint* pThis, float a1); // [PreStep at 0x5F55DB] [0x38] (f)i
    int(__cdecl* m_TFixedAngleJoint_Update)(TFixedAngleJoint* pThis); // [Update at 0x5F5647] [0x3C] ()i
    TBody*(__cdecl* m_TFixedAngleJoint_GetBody)(TFixedAngleJoint* pThis); // [GetBody at 0x5F5492] [0x40] ():TBody
    int(__cdecl* m_TFixedAngleJoint_SetBody)(TFixedAngleJoint* pThis, TBody* a1); // [SetBody at 0x5F54A1] [0x44] (:TBody)i
    float(__cdecl* m_TFixedAngleJoint_GetBiasFactor)(TFixedAngleJoint* pThis); // [GetBiasFactor at 0x5F54D0] [0x48] ()f
    int(__cdecl* m_TFixedAngleJoint_SetBiasFactor)(TFixedAngleJoint* pThis, float a1); // [SetBiasFactor at 0x5F54DF] [0x4C] (f)i
    float(__cdecl* m_TFixedAngleJoint_GetSoftness)(TFixedAngleJoint* pThis); // [GetSoftness at 0x5F54F6] [0x50] ()f
    int(__cdecl* m_TFixedAngleJoint_SetSoftness)(TFixedAngleJoint* pThis, float a1); // [SetSoftness at 0x5F5505] [0x54] (f)i
    float(__cdecl* m_TFixedAngleJoint_GetBreakPoint)(TFixedAngleJoint* pThis); // [GetBreakPoint at 0x5F551C] [0x58] ()f
    int(__cdecl* m_TFixedAngleJoint_SetBreakPoint)(TFixedAngleJoint* pThis, float a1); // [SetBreakPoint at 0x5F552B] [0x5C] (f)i
    float(__cdecl* m_TFixedAngleJoint_GetJointError)(TFixedAngleJoint* pThis); // [GetJointError at 0x5F5542] [0x60] ()f
    float(__cdecl* m_TFixedAngleJoint_GetTargetAngle)(TFixedAngleJoint* pThis); // [GetTargetAngle at 0x5F5551] [0x64] ()f
    int(__cdecl* m_TFixedAngleJoint_SetTargetAngle)(TFixedAngleJoint* pThis, float a1); // [SetTargetAngle at 0x5F5560] [0x68] (f)i
    float(__cdecl* m_TFixedAngleJoint_GetMaxImpulse)(TFixedAngleJoint* pThis); // [GetMaxImpulse at 0x5F5577] [0x6C] ()f
    int(__cdecl* m_TFixedAngleJoint_SetMaxImpulse)(TFixedAngleJoint* pThis, float a1); // [SetMaxImpulse at 0x5F5586] [0x70] (f)i
    TFixedAngleJoint*(__cdecl* fn_Create)(TBody* a1, float a2); // [Create at 0x5F559D] [0x74] (:TBody,f):TFixedAngleJoint
};


// Super: 0x874AA8
// 9 members
struct TFixedAngleJoint {
    TFixedAngleJointDecl* decl; // 0x0
    int    refs;  // 0x4
    TBody* m__body; // 0xC <type_:TBody>
    float m__biasFactor; // 0x10 <type_f>
    float m__targetAngle; // 0x14 <type_f>
    float m__softness; // 0x18 <type_f>
    float m__maxImpulse; // 0x1C <type_f>
    float m__breakpoint; // 0x20 <type_f>
    float m__massFactor; // 0x24 <type_f>
    float m__jointError; // 0x28 <type_f>
    float m__velocityBias; // 0x2C <type_f>
};


