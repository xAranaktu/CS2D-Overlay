#pragma once

#include "defines.h"

// 9 methods, 1 functions
struct TInteractiveAngleJointDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 60(0x3C)
    int(__cdecl* m_TInteractiveAngleJoint_New)(TInteractiveAngleJoint* pThis); // [New at 0x5F5AF6] [0x10] ()i
    int(__cdecl* m_TInteractiveAngleJoint_Delete)(TInteractiveAngleJoint* pThis); // [Delete at 0x5F5B7E] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TRevoluteJoint*(__cdecl* m_TInteractiveAngleJoint_GetRevoluteJoint)(TInteractiveAngleJoint* pThis); // [GetRevoluteJoint at 0x5F5BF7] [0x30] ():TRevoluteJoint
    int(__cdecl* m_TInteractiveAngleJoint_SetRevolutJoint)(TInteractiveAngleJoint* pThis, TRevoluteJoint* a1); // [SetRevolutJoint at 0x5F5C06] [0x34] (:TRevoluteJoint)i
    TAngleJoint*(__cdecl* m_TInteractiveAngleJoint_GetAngleJoint)(TInteractiveAngleJoint* pThis); // [GetAngleJoint at 0x5F5C35] [0x38] ():TAngleJoint
    int(__cdecl* m_TInteractiveAngleJoint_SetAngleJoint)(TInteractiveAngleJoint* pThis, TAngleJoint* a1); // [SetAngleJoint at 0x5F5C44] [0x3C] (:TAngleJoint)i
    TInteractiveAngleJoint*(__cdecl* fn_Create)(float a1, float a2, float a3, float a4, float a5, float a6, float a7, Vector2* a8, TBody* a9, TBody* a10); // [Create at 0x5F5C73] [0x40] (f,f,f,f,f,f,f,:Vector2,:TBody,:TBody):TInteractiveAngleJoint
    int(__cdecl* m_TInteractiveAngleJoint_Load)(TInteractiveAngleJoint* pThis, TPhysicsSimulator* a1); // [Load at 0x5F5D9B] [0x44] (:TPhysicsSimulator)i
    int(__cdecl* m_TInteractiveAngleJoint_Unload)(TInteractiveAngleJoint* pThis, TPhysicsSimulator* a1); // [Unload at 0x5F5DD1] [0x48] (:TPhysicsSimulator)i
    int(__cdecl* m_TInteractiveAngleJoint_CalculateJoint)(TInteractiveAngleJoint* pThis, float a1, float a2); // [CalculateJoint at 0x5F5E07] [0x4C] (f,f)i
};


// 13 members
struct TInteractiveAngleJoint {
    TInteractiveAngleJointDecl* decl; // 0x0
    int    refs;  // 0x4
    float m__angle1; // 0x8 <type_f>
    float m__angle2; // 0xC <type_f>
    float m__angle3; // 0x10 <type_f>
    float m__angle4; // 0x14 <type_f>
    float m__angleMin; // 0x18 <type_f>
    float m__angleMax; // 0x1C <type_f>
    TCircularInterpolator* m__circularInterpolator; // 0x20 <type_:TCircularInterpolator>
    TRevoluteJoint* m__revoluteJoint; // 0x24 <type_:TRevoluteJoint>
    TAngleJoint* m__angleJoint; // 0x28 <type_:TAngleJoint>
    float m__softness; // 0x2C <type_f>
    TBody* m__body1; // 0x30 <type_:TBody>
    TBody* m__body2; // 0x34 <type_:TBody>
    Vector2* m__anchor; // 0x38 <type_:Vector2>
};


