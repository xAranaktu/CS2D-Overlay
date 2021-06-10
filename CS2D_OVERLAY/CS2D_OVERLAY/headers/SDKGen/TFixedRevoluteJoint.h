#pragma once

#include "defines.h"

// 17 methods, 1 functions
struct TFixedRevoluteJointDecl {
    void* pSuper;  // 0x0 0x874AA8
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 124(0x7C)
    int(__cdecl* m_TFixedRevoluteJoint_New)(TFixedRevoluteJoint* pThis); // [New at 0x5F0B2F] [0x10] ()i
    int(__cdecl* m_TFixedRevoluteJoint_Delete)(TFixedRevoluteJoint* pThis); // [Delete at 0x5F0C74] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    void* nothing_12; // 0x34
    int(__cdecl* m_TFixedRevoluteJoint_PreStep)(TFixedRevoluteJoint* pThis, float a1); // [PreStep at 0x5F0FB2] [0x38] (f)i
    int(__cdecl* m_TFixedRevoluteJoint_Update)(TFixedRevoluteJoint* pThis); // [Update at 0x5F1226] [0x3C] ()i
    TBody*(__cdecl* m_TFixedRevoluteJoint_GetBody)(TFixedRevoluteJoint* pThis); // [GetBody at 0x5F0DEA] [0x40] ():TBody
    int(__cdecl* m_TFixedRevoluteJoint_SetBody)(TFixedRevoluteJoint* pThis, TBody* a1); // [SetBody at 0x5F0DF9] [0x44] (:TBody)i
    float(__cdecl* m_TFixedRevoluteJoint_GetSoftness)(TFixedRevoluteJoint* pThis); // [GetSoftness at 0x5F0E28] [0x48] ()f
    int(__cdecl* m_TFixedRevoluteJoint_SetSoftness)(TFixedRevoluteJoint* pThis, float a1); // [SetSoftness at 0x5F0E37] [0x4C] (f)i
    float(__cdecl* m_TFixedRevoluteJoint_GetBreakPoint)(TFixedRevoluteJoint* pThis); // [GetBreakPoint at 0x5F0E4E] [0x50] ()f
    int(__cdecl* m_TFixedRevoluteJoint_SetBreakPoint)(TFixedRevoluteJoint* pThis, float a1); // [SetBreakPoint at 0x5F0E5D] [0x54] (f)i
    float(__cdecl* m_TFixedRevoluteJoint_GetMaxImpulse)(TFixedRevoluteJoint* pThis); // [GetMaxImpulse at 0x5F0E74] [0x58] ()f
    int(__cdecl* m_TFixedRevoluteJoint_SetMaxImpulse)(TFixedRevoluteJoint* pThis, float a1); // [SetMaxImpulse at 0x5F0E83] [0x5C] (f)i
    float(__cdecl* m_TFixedRevoluteJoint_GetJointError)(TFixedRevoluteJoint* pThis); // [GetJointError at 0x5F0E9A] [0x60] ()f
    int(__cdecl* m_TFixedRevoluteJoint_SetAnchor)(TFixedRevoluteJoint* pThis, Vector2* a1); // [SetAnchor at 0x5F0EA9] [0x64] (:Vector2)i
    Vector2*(__cdecl* m_TFixedRevoluteJoint_GetAnchor)(TFixedRevoluteJoint* pThis); // [GetAnchor at 0x5F0EDB] [0x68] ():Vector2
    int(__cdecl* m_TFixedRevoluteJoint__SetAnchor)(TFixedRevoluteJoint* pThis, Vector2* a1); // [_SetAnchor at 0x5F0EF3] [0x6C] (:Vector2)i
    TFixedRevoluteJoint*(__cdecl* fn_Create)(TBody* a1, Vector2* a2); // [Create at 0x5F0F46] [0x70] (:TBody,:Vector2):TFixedRevoluteJoint
    int(__cdecl* m_TFixedRevoluteJoint_MatrixInvert2D)(TFixedRevoluteJoint* pThis, TMatrix* a1, TMatrix* a2); // [MatrixInvert2D at 0x5F11B6] [0x74] (:TMatrix,:TMatrix)i
};


// Super: 0x874AA8
// 28 members
struct TFixedRevoluteJoint {
    TFixedRevoluteJointDecl* decl; // 0x0
    int    refs;  // 0x4
    TBody* m__body; // 0xC <type_:TBody>
    float m__biasfactor; // 0x10 <type_f>
    float m__softness; // 0x14 <type_f>
    float m__breakpoint; // 0x18 <type_f>
    float m__maxImpulse; // 0x1C <type_f>
    float m__jointError; // 0x20 <type_f>
    Vector2* m__localAnchor; // 0x24 <type_:Vector2>
    Vector2* m__anchor; // 0x28 <type_:Vector2>
    Vector2* m__r1; // 0x2C <type_:Vector2>
    TMatrix* m__matrix; // 0x30 <type_:TMatrix>
    Vector2* m__velocityBias; // 0x34 <type_:Vector2>
    Vector2* m__accumulatedImpulse; // 0x38 <type_:Vector2>
    float m__floatTemp1; // 0x3C <type_f>
    Vector2* m__vectorTemp1; // 0x40 <type_:Vector2>
    Vector2* m__vectorTemp2; // 0x44 <type_:Vector2>
    Vector2* m__vectorTemp3; // 0x48 <type_:Vector2>
    Vector2* m__vectorTemp4; // 0x4C <type_:Vector2>
    Vector2* m__vectorTemp5; // 0x50 <type_:Vector2>
    TMatrix* m__K; // 0x54 <type_:TMatrix>
    TMatrix* m__K1; // 0x58 <type_:TMatrix>
    TMatrix* m__K2; // 0x5C <type_:TMatrix>
    TMatrix* m__bodyMatrixTemp; // 0x60 <type_:TMatrix>
    float m__bodyInverseMass; // 0x64 <type_f>
    float m__bodyInverseMomentOfInertia; // 0x68 <type_f>
    TMatrix* m__B; // 0x6C <type_:TMatrix>
    Vector2* m__dv; // 0x70 <type_:Vector2>
    Vector2* m__dvBias; // 0x74 <type_:Vector2>
    Vector2* m__impulse; // 0x78 <type_:Vector2>
};


