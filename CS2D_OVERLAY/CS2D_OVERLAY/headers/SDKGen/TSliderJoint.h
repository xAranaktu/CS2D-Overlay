#pragma once

#include "defines.h"

// 28 methods, 1 functions
struct TSliderJointDecl {
    void* pSuper;  // 0x0 0x874AA8
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 184(0xB8)
    int(__cdecl* m_TSliderJoint_New)(TSliderJoint* pThis); // [New at 0x5F6CF6] [0x10] ()i
    int(__cdecl* m_TSliderJoint_Delete)(TSliderJoint* pThis); // [Delete at 0x5F6EB3] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    void* nothing_12; // 0x34
    int(__cdecl* m_TSliderJoint_PreStep)(TSliderJoint* pThis, float a1); // [PreStep at 0x5F73A7] [0x38] (f)i
    int(__cdecl* m_TSliderJoint_Update)(TSliderJoint* pThis); // [Update at 0x5F76E6] [0x3C] ()i
    TBody*(__cdecl* m_TSliderJoint_GetBody1)(TSliderJoint* pThis); // [GetBody1 at 0x5F7041] [0x40] ():TBody
    int(__cdecl* m_TSliderJoint_SetBody1)(TSliderJoint* pThis, TBody* a1); // [SetBody1 at 0x5F7050] [0x44] (:TBody)i
    TBody*(__cdecl* m_TSliderJoint_GetBody2)(TSliderJoint* pThis); // [GetBody2 at 0x5F707F] [0x48] ():TBody
    int(__cdecl* m_TSliderJoint_SetBody2)(TSliderJoint* pThis, TBody* a1); // [SetBody2 at 0x5F708E] [0x4C] (:TBody)i
    float(__cdecl* m_TSliderJoint_GetBiasFactor)(TSliderJoint* pThis); // [GetBiasFactor at 0x5F70BD] [0x50] ()f
    int(__cdecl* m_TSliderJoint_SetBiasFactor)(TSliderJoint* pThis, float a1); // [SetBiasFactor at 0x5F70CC] [0x54] (f)i
    float(__cdecl* m_TSliderJoint_GetSoftness)(TSliderJoint* pThis); // [GetSoftness at 0x5F70E3] [0x58] ()f
    int(__cdecl* m_TSliderJoint_SetSoftness)(TSliderJoint* pThis, float a1); // [SetSoftness at 0x5F70F2] [0x5C] (f)i
    float(__cdecl* m_TSliderJoint_GetSlop)(TSliderJoint* pThis); // [GetSlop at 0x5F7109] [0x60] ()f
    int(__cdecl* m_TSliderJoint_SetSlop)(TSliderJoint* pThis, float a1); // [SetSlop at 0x5F7118] [0x64] (f)i
    float(__cdecl* m_TSliderJoint_GetBreakPoint)(TSliderJoint* pThis); // [GetBreakPoint at 0x5F712F] [0x68] ()f
    int(__cdecl* m_TSliderJoint_SetBreakPoint)(TSliderJoint* pThis, float a1); // [SetBreakPoint at 0x5F713E] [0x6C] (f)i
    float(__cdecl* m_TSliderJoint_GetJointError)(TSliderJoint* pThis); // [GetJointError at 0x5F7155] [0x70] ()f
    float(__cdecl* m_TSliderJoint_GetMin)(TSliderJoint* pThis); // [GetMin at 0x5F7164] [0x74] ()f
    int(__cdecl* m_TSliderJoint_SetMin)(TSliderJoint* pThis, float a1); // [SetMin at 0x5F7173] [0x78] (f)i
    float(__cdecl* m_TSliderJoint_GetMax)(TSliderJoint* pThis); // [GetMax at 0x5F718A] [0x7C] ()f
    int(__cdecl* m_TSliderJoint_SetMax)(TSliderJoint* pThis, float a1); // [SetMax at 0x5F7199] [0x80] (f)i
    Vector2*(__cdecl* m_TSliderJoint_GetAnchor1)(TSliderJoint* pThis); // [GetAnchor1 at 0x5F71B0] [0x84] ():Vector2
    int(__cdecl* m_TSliderJoint_SetAnchor1)(TSliderJoint* pThis, Vector2* a1); // [SetAnchor1 at 0x5F71C8] [0x88] (:Vector2)i
    Vector2*(__cdecl* m_TSliderJoint_GetAnchor2)(TSliderJoint* pThis); // [GetAnchor2 at 0x5F7229] [0x8C] ():Vector2
    int(__cdecl* m_TSliderJoint_SetAnchor2)(TSliderJoint* pThis, Vector2* a1); // [SetAnchor2 at 0x5F7241] [0x90] (:Vector2)i
    Vector2*(__cdecl* m_TSliderJoint_GetWorldAnchor1)(TSliderJoint* pThis); // [GetWorldAnchor1 at 0x5F72A2] [0x94] ():Vector2
    Vector2*(__cdecl* m_TSliderJoint_GetWorldAnchor2)(TSliderJoint* pThis); // [GetWorldAnchor2 at 0x5F72BA] [0x98] ():Vector2
    Vector2*(__cdecl* m_TSliderJoint_GetCurrentAnchorPosition)(TSliderJoint* pThis); // [GetCurrentAnchorPosition at 0x5F72D2] [0x9C] ():Vector2
    TSliderJoint*(__cdecl* fn_Create)(TBody* a1, Vector2* a2, TBody* a3, Vector2* a4, float a5, float a6); // [Create at 0x5F7301] [0xA0] (:TBody,:Vector2,:TBody,:Vector2,f,f):TSliderJoint
};


// Super: 0x874AA8
// 43 members
struct TSliderJoint {
    TSliderJointDecl* decl; // 0x0
    int    refs;  // 0x4
    TBody* m__body1; // 0xC <type_:TBody>
    TBody* m__body2; // 0x10 <type_:TBody>
    float m__biasFactor; // 0x14 <type_f>
    float m__slop; // 0x18 <type_f>
    float m__softness; // 0x1C <type_f>
    float m__min; // 0x20 <type_f>
    float m__max; // 0x24 <type_f>
    float m__breakpoint; // 0x28 <type_f>
    float m__jointError; // 0x2C <type_f>
    Vector2* m__anchor1; // 0x30 <type_:Vector2>
    Vector2* m__anchor2; // 0x34 <type_:Vector2>
    Vector2* m__worldAnchor1; // 0x38 <type_:Vector2>
    Vector2* m__worldAnchor2; // 0x3C <type_:Vector2>
    int m__upperLimitViolated; // 0x40 <type_i>
    int m__lowerLimitViolated; // 0x44 <type_i>
    Vector2* m__r1; // 0x48 <type_:Vector2>
    Vector2* m__r2; // 0x4C <type_:Vector2>
    float m__velocityBias; // 0x50 <type_f>
    float m__accumulatedImpulse; // 0x54 <type_f>
    Vector2* m__worldAnchorDifferenceNormalized; // 0x58 <type_:Vector2>
    float m__effectiveMass; // 0x5C <type_f>
    Vector2* m__anchor; // 0x60 <type_:Vector2>
    float m__distance; // 0x64 <type_f>
    float m__angularImpulse; // 0x68 <type_f>
    TMatrix* m__body1MatrixTemp; // 0x6C <type_:TMatrix>
    float m__body1InverseMass; // 0x70 <type_f>
    float m__body1InverseMomentOfInertia; // 0x74 <type_f>
    TMatrix* m__body2MatrixTemp; // 0x78 <type_:TMatrix>
    float m__body2InverseMass; // 0x7C <type_f>
    float m__body2InverseMomentOfInertia; // 0x80 <type_f>
    float m__r1cn; // 0x84 <type_f>
    float m__r2cn; // 0x88 <type_f>
    float m__knormal; // 0x8C <type_f>
    Vector2* m__accumulatedImpulseVector; // 0x90 <type_:Vector2>
    Vector2* m__worldAnchorDifference; // 0x94 <type_:Vector2>
    Vector2* m__dv; // 0x98 <type_:Vector2>
    Vector2* m__impulse; // 0x9C <type_:Vector2>
    float m__impulseMagnitude; // 0xA0 <type_f>
    float m__dvNormal; // 0xA4 <type_f>
    Vector2* m__angularVelocityComponent1; // 0xA8 <type_:Vector2>
    Vector2* m__angularVelocityComponent2; // 0xAC <type_:Vector2>
    Vector2* m__velocity1; // 0xB0 <type_:Vector2>
    Vector2* m__velocity2; // 0xB4 <type_:Vector2>
};


