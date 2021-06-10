#pragma once

#include "defines.h"

// 19 methods, 1 functions
struct TAngleJointDecl {
    void* pSuper;  // 0x0 0x874AA8
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 52(0x34)
    int(__cdecl* m_TAngleJoint_New)(TAngleJoint* pThis); // [New at 0x5F469F] [0x10] ()i
    int(__cdecl* m_TAngleJoint_Delete)(TAngleJoint* pThis); // [Delete at 0x5F470B] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    void* nothing_12; // 0x34
    int(__cdecl* m_TAngleJoint_PreStep)(TAngleJoint* pThis, float a1); // [PreStep at 0x5F48F8] [0x38] (f)i
    int(__cdecl* m_TAngleJoint_Update)(TAngleJoint* pThis); // [Update at 0x5F4972] [0x3C] ()i
    TBody*(__cdecl* m_TAngleJoint_GetBody1)(TAngleJoint* pThis); // [GetBody1 at 0x5F474F] [0x40] ():TBody
    int(__cdecl* m_TAngleJoint_SetBody1)(TAngleJoint* pThis, TBody* a1); // [SetBody1 at 0x5F475E] [0x44] (:TBody)i
    TBody*(__cdecl* m_TAngleJoint_GetBody2)(TAngleJoint* pThis); // [GetBody2 at 0x5F478D] [0x48] ():TBody
    int(__cdecl* m_TAngleJoint_SetBody2)(TAngleJoint* pThis, TBody* a1); // [SetBody2 at 0x5F479C] [0x4C] (:TBody)i
    float(__cdecl* m_TAngleJoint_GetBiasFactor)(TAngleJoint* pThis); // [GetBiasFactor at 0x5F47CB] [0x50] ()f
    int(__cdecl* m_TAngleJoint_SetBiasFactor)(TAngleJoint* pThis, float a1); // [SetBiasFactor at 0x5F47DA] [0x54] (f)i
    float(__cdecl* m_TAngleJoint_GetSoftness)(TAngleJoint* pThis); // [GetSoftness at 0x5F47F1] [0x58] ()f
    int(__cdecl* m_TAngleJoint_SetSoftness)(TAngleJoint* pThis, float a1); // [SetSoftness at 0x5F4800] [0x5C] (f)i
    float(__cdecl* m_TAngleJoint_GetBreakPoint)(TAngleJoint* pThis); // [GetBreakPoint at 0x5F4817] [0x60] ()f
    int(__cdecl* m_TAngleJoint_SetBreakPoint)(TAngleJoint* pThis, float a1); // [SetBreakPoint at 0x5F4826] [0x64] (f)i
    float(__cdecl* m_TAngleJoint_GetJointError)(TAngleJoint* pThis); // [GetJointError at 0x5F483D] [0x68] ()f
    float(__cdecl* m_TAngleJoint_GetTargetAngle)(TAngleJoint* pThis); // [GetTargetAngle at 0x5F484C] [0x6C] ()f
    int(__cdecl* m_TAngleJoint_SetTargetAngle)(TAngleJoint* pThis, float a1); // [SetTargetAngle at 0x5F485B] [0x70] (f)i
    float(__cdecl* m_TAngleJoint_GetMaxImpulse)(TAngleJoint* pThis); // [GetMaxImpulse at 0x5F4872] [0x74] ()f
    int(__cdecl* m_TAngleJoint_SetMaxImpulse)(TAngleJoint* pThis, float a1); // [SetMaxImpulse at 0x5F4881] [0x78] (f)i
    TAngleJoint*(__cdecl* fn_Create)(TBody* a1, TBody* a2, float a3); // [Create at 0x5F4898] [0x7C] (:TBody,:TBody,f):TAngleJoint
};


// Super: 0x874AA8
// 10 members
struct TAngleJoint {
    TAngleJointDecl* decl; // 0x0
    int    refs;  // 0x4
    TBody* m__body1; // 0xC <type_:TBody>
    TBody* m__body2; // 0x10 <type_:TBody>
    float m__biasFactor; // 0x14 <type_f>
    float m__targetAngle; // 0x18 <type_f>
    float m__softness; // 0x1C <type_f>
    float m__maxImpulse; // 0x20 <type_f>
    float m__breakpoint; // 0x24 <type_f>
    float m__massFactor; // 0x28 <type_f>
    float m__jointError; // 0x2C <type_f>
    float m__velocityBias; // 0x30 <type_f>
};


