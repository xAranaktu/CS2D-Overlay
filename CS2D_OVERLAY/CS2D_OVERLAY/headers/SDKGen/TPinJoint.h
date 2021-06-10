#pragma once

#include "defines.h"

// 23 methods, 1 functions
struct TPinJointDecl {
    void* pSuper;  // 0x0 0x874AA8
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 160(0xA0)
    int(__cdecl* m_TPinJoint_New)(TPinJoint* pThis); // [New at 0x5F6323] [0x10] ()i
    int(__cdecl* m_TPinJoint_Delete)(TPinJoint* pThis); // [Delete at 0x5F64A1] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    void* nothing_12; // 0x34
    int(__cdecl* m_TPinJoint_PreStep)(TPinJoint* pThis, float a1); // [PreStep at 0x5F690F] [0x38] (f)i
    int(__cdecl* m_TPinJoint_Update)(TPinJoint* pThis); // [Update at 0x5F6B4A] [0x3C] ()i
    TBody*(__cdecl* m_TPinJoint_GetBody1)(TPinJoint* pThis); // [GetBody1 at 0x5F6618] [0x40] ():TBody
    int(__cdecl* m_TPinJoint_SetBody1)(TPinJoint* pThis, TBody* a1); // [SetBody1 at 0x5F6627] [0x44] (:TBody)i
    TBody*(__cdecl* m_TPinJoint_GetBody2)(TPinJoint* pThis); // [GetBody2 at 0x5F6656] [0x48] ():TBody
    int(__cdecl* m_TPinJoint_SetBody2)(TPinJoint* pThis, TBody* a1); // [SetBody2 at 0x5F6665] [0x4C] (:TBody)i
    float(__cdecl* m_TPinJoint_GetBiasFactor)(TPinJoint* pThis); // [GetBiasFactor at 0x5F6694] [0x50] ()f
    int(__cdecl* m_TPinJoint_SetBiasFactor)(TPinJoint* pThis, float a1); // [SetBiasFactor at 0x5F66A3] [0x54] (f)i
    float(__cdecl* m_TPinJoint_GetSoftness)(TPinJoint* pThis); // [GetSoftness at 0x5F66BA] [0x58] ()f
    int(__cdecl* m_TPinJoint_SetSoftness)(TPinJoint* pThis, float a1); // [SetSoftness at 0x5F66C9] [0x5C] (f)i
    float(__cdecl* m_TPinJoint_GetBreakPoint)(TPinJoint* pThis); // [GetBreakPoint at 0x5F66E0] [0x60] ()f
    int(__cdecl* m_TPinJoint_SetBreakPoint)(TPinJoint* pThis, float a1); // [SetBreakPoint at 0x5F66EF] [0x64] (f)i
    float(__cdecl* m_TPinJoint_GetJointError)(TPinJoint* pThis); // [GetJointError at 0x5F6706] [0x68] ()f
    float(__cdecl* m_TPinJoint_GetTargetDistance)(TPinJoint* pThis); // [GetTargetDistance at 0x5F6715] [0x6C] ()f
    int(__cdecl* m_TPinJoint_SetTargetDistance)(TPinJoint* pThis, float a1); // [SetTargetDistance at 0x5F6724] [0x70] (f)i
    Vector2*(__cdecl* m_TPinJoint_GetAnchor1)(TPinJoint* pThis); // [GetAnchor1 at 0x5F673B] [0x74] ():Vector2
    int(__cdecl* m_TPinJoint_SetAnchor1)(TPinJoint* pThis, Vector2* a1); // [SetAnchor1 at 0x5F6753] [0x78] (:Vector2)i
    Vector2*(__cdecl* m_TPinJoint_GetAnchor2)(TPinJoint* pThis); // [GetAnchor2 at 0x5F67B4] [0x7C] ():Vector2
    int(__cdecl* m_TPinJoint_SetAnchor2)(TPinJoint* pThis, Vector2* a1); // [SetAnchor2 at 0x5F67CC] [0x80] (:Vector2)i
    Vector2*(__cdecl* m_TPinJoint_GetWorldAnchor1)(TPinJoint* pThis); // [GetWorldAnchor1 at 0x5F682D] [0x84] ():Vector2
    Vector2*(__cdecl* m_TPinJoint_GetWorldAnchor2)(TPinJoint* pThis); // [GetWorldAnchor2 at 0x5F6845] [0x88] ():Vector2
    TPinJoint*(__cdecl* fn_Create)(TBody* a1, Vector2* a2, TBody* a3, Vector2* a4); // [Create at 0x5F685D] [0x8C] (:TBody,:Vector2,:TBody,:Vector2):TPinJoint
};


// Super: 0x874AA8
// 37 members
struct TPinJoint {
    TPinJointDecl* decl; // 0x0
    int    refs;  // 0x4
    TBody* m__body1; // 0xC <type_:TBody>
    TBody* m__body2; // 0x10 <type_:TBody>
    float m__biasFactor; // 0x14 <type_f>
    float m__softness; // 0x18 <type_f>
    float m__targetDistance; // 0x1C <type_f>
    float m__breakpoint; // 0x20 <type_f>
    float m__jointError; // 0x24 <type_f>
    Vector2* m__anchor1; // 0x28 <type_:Vector2>
    Vector2* m__anchor2; // 0x2C <type_:Vector2>
    Vector2* m__worldAnchor1; // 0x30 <type_:Vector2>
    Vector2* m__worldAnchor2; // 0x34 <type_:Vector2>
    Vector2* m__r1; // 0x38 <type_:Vector2>
    Vector2* m__r2; // 0x3C <type_:Vector2>
    float m__velocityBias; // 0x40 <type_f>
    float m__accumulatedImpulse; // 0x44 <type_f>
    Vector2* m__worldAnchorDifferenceNormalized; // 0x48 <type_:Vector2>
    float m__effectiveMass; // 0x4C <type_f>
    float m__angularImpulse; // 0x50 <type_f>
    TMatrix* m__body1MatrixTemp; // 0x54 <type_:TMatrix>
    float m__body1InverseMass; // 0x58 <type_f>
    float m__body1InverseMomentOfInertia; // 0x5C <type_f>
    TMatrix* m__body2MatrixTemp; // 0x60 <type_:TMatrix>
    float m__body2InverseMass; // 0x64 <type_f>
    float m__body2InverseMomentOfInertia; // 0x68 <type_f>
    float m__r1cn; // 0x6C <type_f>
    float m__r2cn; // 0x70 <type_f>
    float m__kNormal; // 0x74 <type_f>
    Vector2* m__accumulatedImpulseVector; // 0x78 <type_:Vector2>
    Vector2* m__worldAnchorDifference; // 0x7C <type_:Vector2>
    Vector2* m__dv; // 0x80 <type_:Vector2>
    Vector2* m__impulse; // 0x84 <type_:Vector2>
    float m__impulseMagnitude; // 0x88 <type_f>
    float m__dvNormal; // 0x8C <type_f>
    Vector2* m__angularVelocityComponent1; // 0x90 <type_:Vector2>
    Vector2* m__angularVelocityComponent2; // 0x94 <type_:Vector2>
    Vector2* m__velocity1; // 0x98 <type_:Vector2>
    Vector2* m__velocity2; // 0x9C <type_:Vector2>
};


