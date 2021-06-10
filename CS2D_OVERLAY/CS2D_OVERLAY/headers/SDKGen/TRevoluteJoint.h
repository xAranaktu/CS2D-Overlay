#pragma once

#include "defines.h"

// 20 methods, 1 functions
struct TRevoluteJointDecl {
    void* pSuper;  // 0x0 0x874AA8
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 152(0x98)
    int(__cdecl* m_TRevoluteJoint_New)(TRevoluteJoint* pThis); // [New at 0x5F39A0] [0x10] ()i
    int(__cdecl* m_TRevoluteJoint_Delete)(TRevoluteJoint* pThis); // [Delete at 0x5F3B3F] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    void* nothing_12; // 0x34
    int(__cdecl* m_TRevoluteJoint_PreStep)(TRevoluteJoint* pThis, float a1); // [PreStep at 0x5F3FC8] [0x38] (f)i
    int(__cdecl* m_TRevoluteJoint_Update)(TRevoluteJoint* pThis); // [Update at 0x5F432A] [0x3C] ()i
    TBody*(__cdecl* m_TRevoluteJoint_GetBody1)(TRevoluteJoint* pThis); // [GetBody1 at 0x5F3D27] [0x40] ():TBody
    int(__cdecl* m_TRevoluteJoint_SetBody1)(TRevoluteJoint* pThis, TBody* a1); // [SetBody1 at 0x5F3D36] [0x44] (:TBody)i
    TBody*(__cdecl* m_TRevoluteJoint_GetBody2)(TRevoluteJoint* pThis); // [GetBody2 at 0x5F3D65] [0x48] ():TBody
    int(__cdecl* m_TRevoluteJoint_SetBody2)(TRevoluteJoint* pThis, TBody* a1); // [SetBody2 at 0x5F3D74] [0x4C] (:TBody)i
    float(__cdecl* m_TRevoluteJoint_GetBiasFactor)(TRevoluteJoint* pThis); // [GetBiasFactor at 0x5F3DA3] [0x50] ()f
    int(__cdecl* m_TRevoluteJoint_SetBiasFactor)(TRevoluteJoint* pThis, float a1); // [SetBiasFactor at 0x5F3DB2] [0x54] (f)i
    float(__cdecl* m_TRevoluteJoint_GetSoftness)(TRevoluteJoint* pThis); // [GetSoftness at 0x5F3DC9] [0x58] ()f
    int(__cdecl* m_TRevoluteJoint_SetSoftness)(TRevoluteJoint* pThis, float a1); // [SetSoftness at 0x5F3DD8] [0x5C] (f)i
    float(__cdecl* m_TRevoluteJoint_GetBreakPoint)(TRevoluteJoint* pThis); // [GetBreakPoint at 0x5F3DEF] [0x60] ()f
    int(__cdecl* m_TRevoluteJoint_SetBreakPoint)(TRevoluteJoint* pThis, float a1); // [SetBreakPoint at 0x5F3DFE] [0x64] (f)i
    float(__cdecl* m_TRevoluteJoint_GetJointError)(TRevoluteJoint* pThis); // [GetJointError at 0x5F3E15] [0x68] ()f
    int(__cdecl* m_TRevoluteJoint_SetAnchor)(TRevoluteJoint* pThis, Vector2* a1); // [SetAnchor at 0x5F3E24] [0x6C] (:Vector2)i
    Vector2*(__cdecl* m_TRevoluteJoint_GetAnchor)(TRevoluteJoint* pThis); // [GetAnchor at 0x5F3E76] [0x70] ():Vector2
    Vector2*(__cdecl* m_TRevoluteJoint_GetCurrentAnchor)(TRevoluteJoint* pThis); // [GetCurrentAnchor at 0x5F3E8E] [0x74] ():Vector2
    int(__cdecl* m_TRevoluteJoint_SetInitialAnchor)(TRevoluteJoint* pThis, Vector2* a1); // [SetInitialAnchor at 0x5F3EBD] [0x78] (:Vector2)i
    TRevoluteJoint*(__cdecl* fn_Create)(TBody* a1, TBody* a2, Vector2* a3); // [Create at 0x5F3F25] [0x7C] (:TBody,:TBody,:Vector2):TRevoluteJoint
    int(__cdecl* m_TRevoluteJoint_MatrixInvert2D)(TRevoluteJoint* pThis, TMatrix* a1, TMatrix* a2); // [MatrixInvert2D at 0x5F42AB] [0x80] (:TMatrix,:TMatrix)i
};


// Super: 0x874AA8
// 35 members
struct TRevoluteJoint {
    TRevoluteJointDecl* decl; // 0x0
    int    refs;  // 0x4
    TBody* m__body1; // 0xC <type_:TBody>
    TBody* m__body2; // 0x10 <type_:TBody>
    float m__biasFactor; // 0x14 <type_f>
    float m__softness; // 0x18 <type_f>
    float m__breakpoint; // 0x1C <type_f>
    float m__jointError; // 0x20 <type_f>
    TMatrix* m__matrix; // 0x24 <type_:TMatrix>
    Vector2* m__anchor; // 0x28 <type_:Vector2>
    Vector2* m__localAnchor1; // 0x2C <type_:Vector2>
    Vector2* m__localAnchor2; // 0x30 <type_:Vector2>
    Vector2* m__r1; // 0x34 <type_:Vector2>
    Vector2* m__r2; // 0x38 <type_:Vector2>
    Vector2* m__velocityBias; // 0x3C <type_:Vector2>
    Vector2* m__accumulatedImpulse; // 0x40 <type_:Vector2>
    Vector2* m__currentAnchor; // 0x44 <type_:Vector2>
    float m__floatTemp1; // 0x48 <type_f>
    Vector2* m__vectorTemp1; // 0x4C <type_:Vector2>
    Vector2* m__vectorTemp2; // 0x50 <type_:Vector2>
    Vector2* m__vectorTemp3; // 0x54 <type_:Vector2>
    Vector2* m__vectorTemp4; // 0x58 <type_:Vector2>
    Vector2* m__vectorTemp5; // 0x5C <type_:Vector2>
    TMatrix* m__K; // 0x60 <type_:TMatrix>
    TMatrix* m__K1; // 0x64 <type_:TMatrix>
    TMatrix* m__K2; // 0x68 <type_:TMatrix>
    TMatrix* m__K3; // 0x6C <type_:TMatrix>
    TMatrix* m__body1MatrixTemp; // 0x70 <type_:TMatrix>
    float m__body1InverseMass; // 0x74 <type_f>
    float m__body1InverseMomentOfInertia; // 0x78 <type_f>
    TMatrix* m__body2MatrixTemp; // 0x7C <type_:TMatrix>
    float m__body2InverseMass; // 0x80 <type_f>
    float m__body2InverseMomentOfInertia; // 0x84 <type_f>
    TMatrix* m__B; // 0x88 <type_:TMatrix>
    Vector2* m__dv; // 0x8C <type_:Vector2>
    Vector2* m__dvBias; // 0x90 <type_:Vector2>
    Vector2* m__impulse; // 0x94 <type_:Vector2>
};


