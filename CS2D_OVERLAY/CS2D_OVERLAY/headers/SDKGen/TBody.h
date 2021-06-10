#pragma once

#include "defines.h"

// 64 methods, 1 functions
struct TBodyDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 200(0xC8)
    int(__cdecl* m_TBody_New)(TBody* pThis); // [New at 0x5E88D3] [0x10] ()i
    int(__cdecl* m_TBody_Delete)(TBody* pThis); // [Delete at 0x5E8AF0] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TBody*(__cdecl* fn_CloneBody)(TBody* a1); // [CloneBody at 0x5E8CD3] [0x30] (:TBody):TBody
    int(__cdecl* m_TBody_IsEnabled)(TBody* pThis); // [IsEnabled at 0x5E8D93] [0x34] ()i
    int(__cdecl* m_TBody_SetEnabled)(TBody* pThis, int a1); // [SetEnabled at 0x5E8DA2] [0x38] (i)i
    int(__cdecl* m_TBody_SetMass)(TBody* pThis, float a1); // [SetMass at 0x5E8DB9] [0x3C] (f)i
    float(__cdecl* m_TBody_GetMass)(TBody* pThis); // [GetMass at 0x5E8E0D] [0x40] ()f
    int(__cdecl* m_TBody_SetMomentOfInertia)(TBody* pThis, float a1); // [SetMomentOfInertia at 0x5E8E1C] [0x44] (f)i
    float(__cdecl* m_TBody_GetMomentOfInertia)(TBody* pThis); // [GetMomentOfInertia at 0x5E8E70] [0x48] ()f
    float(__cdecl* m_TBody_GetInverseMomentOfInertia)(TBody* pThis); // [GetInverseMomentOfInertia at 0x5E8E7F] [0x4C] ()f
    int(__cdecl* m_TBody_SetStatic)(TBody* pThis, int a1); // [SetStatic at 0x5E8E8E] [0x50] (i)i
    int(__cdecl* m_TBody_IsStatic)(TBody* pThis); // [IsStatic at 0x5E8ECF] [0x54] ()i
    int(__cdecl* m_TBody_SetLinearDragCoefficient)(TBody* pThis, float a1); // [SetLinearDragCoefficient at 0x5E8EDE] [0x58] (f)i
    float(__cdecl* m_TBody_GetLinearDragCoefficient)(TBody* pThis); // [GetLinearDragCoefficient at 0x5E8EF5] [0x5C] ()f
    int(__cdecl* m_TBody_SetRotationalDragCoefficient)(TBody* pThis, float a1); // [SetRotationalDragCoefficient at 0x5E8F04] [0x60] (f)i
    float(__cdecl* m_TBody_GetRotationalDragCoefficient)(TBody* pThis); // [GetRotationalDragCoefficient at 0x5E8F1B] [0x64] ()f
    int(__cdecl* m_TBody_SetPosition)(TBody* pThis, Vector2* a1); // [SetPosition at 0x5E8F2A] [0x68] (:Vector2)i
    Vector2*(__cdecl* m_TBody_GetPosition)(TBody* pThis); // [GetPosition at 0x5E8F62] [0x6C] ():Vector2
    int(__cdecl* m_TBody_GetRevolutions)(TBody* pThis); // [GetRevolutions at 0x5E8F7A] [0x70] ()i
    int(__cdecl* m_TBody_SetRotation)(TBody* pThis, float a1); // [SetRotation at 0x5E8F89] [0x74] (f)i
    float(__cdecl* m_TBody_GetRotation)(TBody* pThis); // [GetRotation at 0x5E9022] [0x78] ()f
    float(__cdecl* m_TBody_GetTotalRotation)(TBody* pThis); // [GetTotalRotation at 0x5E9031] [0x7C] ()f
    int(__cdecl* m_TBody_SetLinearVelocity)(TBody* pThis, Vector2* a1); // [SetLinearVelocity at 0x5E9040] [0x80] (:Vector2)i
    Vector2*(__cdecl* m_TBody_GetLinearVelocity)(TBody* pThis); // [GetLinearVelocity at 0x5E9066] [0x84] ():Vector2
    int(__cdecl* m_TBody_SetAngularVelocity)(TBody* pThis, float a1); // [SetAngularVelocity at 0x5E907E] [0x88] (f)i
    float(__cdecl* m_TBody_GetAngularVelocity)(TBody* pThis); // [GetAngularVelocity at 0x5E9095] [0x8C] ()f
    Vector2*(__cdecl* m_TBody_GetForce)(TBody* pThis); // [GetForce at 0x5E90A4] [0x90] ():Vector2
    float(__cdecl* m_TBody_GetTorque)(TBody* pThis); // [GetTorque at 0x5E90BC] [0x94] ()f
    int(__cdecl* m_TBody_SetTag)(TBody* pThis, Object* a1); // [SetTag at 0x5E90CB] [0x98] (:Object)i
    Object*(__cdecl* m_TBody_GetTag)(TBody* pThis); // [GetTag at 0x5E90FA] [0x9C] ():Object
    int(__cdecl* m_TBody_SetIgnoreGravity)(TBody* pThis, int a1); // [SetIgnoreGravity at 0x5E9109] [0xA0] (i)i
    int(__cdecl* m_TBody_GetIgnorGravity)(TBody* pThis); // [GetIgnorGravity at 0x5E9120] [0xA4] ()i
    int(__cdecl* m_TBody_ResetDynamics)(TBody* pThis); // [ResetDynamics at 0x5E912F] [0xA8] ()i
    TMatrix*(__cdecl* m_TBody_GetBodyMatrix)(TBody* pThis); // [GetBodyMatrix at 0x5E91DD] [0xAC] ():TMatrix
    int(__cdecl* m_TBody_GetBodyMatrixRef)(TBody* pThis, TMatrix* a1); // [GetBodyMatrixRef at 0x5E922F] [0xB0] (:TMatrix)i
    TMatrix*(__cdecl* m_TBody_GetBodyRotationMatrix)(TBody* pThis); // [GetBodyRotationMatrix at 0x5E9280] [0xB4] ():TMatrix
    int(__cdecl* m_TBody_GetBodyRotationMatrixRef)(TBody* pThis, TMatrix* a1); // [GetBodyRotationMatrixRef at 0x5E92A0] [0xB8] (:TMatrix)i
    Vector2*(__cdecl* m_TBody_GetXVectorInWorldCoordinates)(TBody* pThis); // [GetXVectorInWorldCoordinates at 0x5E92C1] [0xBC] ():Vector2
    Vector2*(__cdecl* m_TBody_GetYVectorInWorldCoordinates)(TBody* pThis); // [GetYVectorInWorldCoordinates at 0x5E9329] [0xC0] ():Vector2
    Vector2*(__cdecl* m_TBody_GetWorldPosition)(TBody* pThis, Vector2* a1); // [GetWorldPosition at 0x5E9391] [0xC4] (:Vector2):Vector2
    int(__cdecl* m_TBody_GetWorldPositionRef)(TBody* pThis, Vector2* a1, Vector2* a2); // [GetWorldPositionRef at 0x5E93DB] [0xC8] (:Vector2,:Vector2)i
    Vector2*(__cdecl* m_TBody_GetLocalPosition)(TBody* pThis, Vector2* a1); // [GetLocalPosition at 0x5E941D] [0xCC] (:Vector2):Vector2
    int(__cdecl* m_TBody_GetLocalPositionRef)(TBody* pThis, Vector2* a1, Vector2* a2); // [GetLocalPositionRef at 0x5E9488] [0xD0] (:Vector2,:Vector2)i
    Vector2*(__cdecl* m_TBody_GetVelocityAtLocalPoint)(TBody* pThis, Vector2* a1); // [GetVelocityAtLocalPoint at 0x5E94E1] [0xD4] (:Vector2):Vector2
    int(__cdecl* m_TBody_GetVelocityAtLocalPointRef)(TBody* pThis, Vector2* a1, Vector2* a2); // [GetVelocityAtLocalPointRef at 0x5E953C] [0xD8] (:Vector2,:Vector2)i
    Vector2*(__cdecl* m_TBody_GetVelocityAtWorldPoint)(TBody* pThis, Vector2* a1, Vector2* a2); // [GetVelocityAtWorldPoint at 0x5E9595] [0xDC] (:Vector2,:Vector2):Vector2
    int(__cdecl* m_TBody_GetVelocityAtWorldPointRef)(TBody* pThis, Vector2* a1, Vector2* a2); // [GetVelocityAtWorldPointRef at 0x5E95C0] [0xE0] (:Vector2,:Vector2)i
    int(__cdecl* m_TBody_GetVelocityAtWorldOffset)(TBody* pThis, Vector2* a1, Vector2* a2); // [GetVelocityAtWorldOffset at 0x5E9601] [0xE4] (:Vector2,:Vector2)i
    int(__cdecl* m_TBody_GetVelocityBiasAtWorldOffset)(TBody* pThis, Vector2* a1, Vector2* a2); // [GetVelocityBiasAtWorldOffset at 0x5E9644] [0xE8] (:Vector2,:Vector2)i
    int(__cdecl* m_TBody_ApplyForce)(TBody* pThis, Vector2* a1); // [ApplyForce at 0x5E9687] [0xEC] (:Vector2)i
    int(__cdecl* m_TBody_ApplyForceAtLocalPoint)(TBody* pThis, Vector2* a1, Vector2* a2); // [ApplyForceAtLocalPoint at 0x5E96BB] [0xF0] (:Vector2,:Vector2)i
    int(__cdecl* m_TBody_ApplyForceAtWorldPoint)(TBody* pThis, Vector2* a1, Vector2* a2); // [ApplyForceAtWorldPoint at 0x5E9741] [0xF4] (:Vector2,:Vector2)i
    int(__cdecl* m_TBody_ClearForce)(TBody* pThis); // [ClearForce at 0x5E97AF] [0xF8] ()i
    int(__cdecl* m_TBody_ApplyTorque)(TBody* pThis, float a1); // [ApplyTorque at 0x5E97D0] [0xFC] (f)i
    int(__cdecl* m_TBody_ClearTorque)(TBody* pThis); // [ClearTorque at 0x5E97EC] [0x100] ()i
    int(__cdecl* m_TBody_ApplyImpulse)(TBody* pThis, Vector2* a1); // [ApplyImpulse at 0x5E9802] [0x104] (:Vector2)i
    int(__cdecl* m_TBody_ApplyImpulses)(TBody* pThis); // [ApplyImpulses at 0x5E986E] [0x108] ()i
    int(__cdecl* m_TBody_ApplyImmediateImpulse)(TBody* pThis, Vector2* a1); // [ApplyImmediateImpulse at 0x5E98A0] [0x10C] (:Vector2)i
    int(__cdecl* m_TBody_ClearImpulse)(TBody* pThis); // [ClearImpulse at 0x5E98FC] [0x110] ()i
    int(__cdecl* m_TBody_ApplyAngularImpulse)(TBody* pThis, float a1); // [ApplyAngularImpulse at 0x5E991D] [0x114] (f)i
    int(__cdecl* m_TBody_ApplyDrag)(TBody* pThis); // [ApplyDrag at 0x5E993E] [0x118] ()i
    int(__cdecl* m_TBody_IntegrateVelocity)(TBody* pThis, float a1); // [IntegrateVelocity at 0x5E99DE] [0x11C] (f)i
    int(__cdecl* m_TBody_IntegratePosition)(TBody* pThis, float a1); // [IntegratePosition at 0x5E9ABE] [0x120] (f)i
    int(__cdecl* m_TBody_ApplyImpulseAtWorldOffset)(TBody* pThis, Vector2* a1, Vector2* a2); // [ApplyImpulseAtWorldOffset at 0x5E9C3B] [0x124] (:Vector2,:Vector2)i
    int(__cdecl* m_TBody_ApplyBiasImpulseAtWorldOffset)(TBody* pThis, Vector2* a1, Vector2* a2); // [ApplyBiasImpulseAtWorldOffset at 0x5E9CB7] [0x128] (:Vector2,:Vector2)i
};


// 48 members
struct TBody {
    TBodyDecl* decl; // 0x0
    int    refs;  // 0x4
    PhysicsUniqueID* m_physId; // 0x8 <type_:PhysicsUniqueID>
    float m__mass; // 0xC <type_f>
    float m__inverseMass; // 0x10 <type_f>
    float m__inverseMomentOfInertia; // 0x14 <type_f>
    Vector2* m__position; // 0x18 <type_:Vector2>
    float m__rotation; // 0x1C <type_f>
    float m__totalRotation; // 0x20 <type_f>
    Vector2* m__linearVelocity; // 0x24 <type_:Vector2>
    float m__angularVelocity; // 0x28 <type_f>
    Vector2* m__linearVelocityBias; // 0x2C <type_:Vector2>
    float m__angularVelocityBias; // 0x30 <type_f>
    Vector2* m__force; // 0x34 <type_:Vector2>
    Vector2* m__impulse; // 0x38 <type_:Vector2>
    int m__ignoreGravity; // 0x3C <type_i>
    int m__isStatic; // 0x40 <type_i>
    int m__enabled; // 0x44 <type_i>
    float m__momentOfInertia; // 0x48 <type_f>
    int m__revolutions; // 0x4C <type_i>
    Vector2* m__previousPosition; // 0x50 <type_:Vector2>
    float m__previousRotation; // 0x54 <type_f>
    Vector2* m__previousLinearVelocity; // 0x58 <type_:Vector2>
    float m__previousAngularVelocity; // 0x5C <type_f>
    float m__torque; // 0x60 <type_f>
    float m__linearDragCoefficient; // 0x64 <type_f>
    float m__rotationalDragCoefficient; // 0x68 <type_f>
    Object* m__tag; // 0x6C <type_:Object>
    int m__id; // 0x70 <type_i>
    TBodyEventHandler* m_updateHandler; // 0x74 <type_:TBodyEventHandler>
    TMatrix* m__translationMatrixTemp; // 0x78 <type_:TMatrix>
    TMatrix* m__rotationMatrixTemp; // 0x7C <type_:TMatrix>
    TMatrix* m__bodyMatrixTemp; // 0x80 <type_:TMatrix>
    Vector2* m__worldPositionTemp; // 0x84 <type_:Vector2>
    Vector2* m__localPositionTemp; // 0x88 <type_:Vector2>
    Vector2* m__tempVelocity; // 0x8C <type_:Vector2>
    Vector2* m__r1; // 0x90 <type_:Vector2>
    Vector2* m__velocityTemp; // 0x94 <type_:Vector2>
    Vector2* m__diff; // 0x98 <type_:Vector2>
    float m__speed; // 0x9C <type_f>
    float m__rotationalDrag; // 0xA0 <type_f>
    Vector2* m__dragDirection; // 0xA4 <type_:Vector2>
    Vector2* m__linearDrag; // 0xA8 <type_:Vector2>
    Vector2* m__dv; // 0xAC <type_:Vector2>
    Vector2* m__acceleration; // 0xB0 <type_:Vector2>
    float m__dw; // 0xB4 <type_f>
    Vector2* m__dp; // 0xB8 <type_:Vector2>
    float m__rotationChange; // 0xBC <type_f>
    Vector2* m__bodyLinearvelocity; // 0xC0 <type_:Vector2>
    float m__bodyAngularVelocity; // 0xC4 <type_f>
};


