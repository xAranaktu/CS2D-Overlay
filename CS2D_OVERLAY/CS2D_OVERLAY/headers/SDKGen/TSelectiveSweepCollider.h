#pragma once

#include "defines.h"

// 11 methods, 3 functions
struct TSelectiveSweepColliderDecl {
    void* pSuper;  // 0x0 0x87530C
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_TSelectiveSweepCollider_New)(TSelectiveSweepCollider* pThis); // [New at 0x5EB46C] [0x10] ()i
    int(__cdecl* m_TSelectiveSweepCollider_Delete)(TSelectiveSweepCollider* pThis); // [Delete at 0x5EB4C5] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TSelectiveSweepCollider_ProcessRemovedGeoms)(TSelectiveSweepCollider* pThis); // [ProcessRemovedGeoms at 0x5EB66C] [0x30] ()i
    int(__cdecl* m_TSelectiveSweepCollider_Add)(TSelectiveSweepCollider* pThis, TGeom* a1); // [Add at 0x5EB592] [0x34] (:TGeom)i
    int(__cdecl* m_TSelectiveSweepCollider_Update)(TSelectiveSweepCollider* pThis); // [Update at 0x5EB8DF] [0x38] ()i
    TSelectiveSweepCollider*(__cdecl* fn_Create)(TPhysicsSimulator* a1); // [Create at 0x5EB53C] [0x3C] (:TPhysicsSimulator):TSelectiveSweepCollider
    int(__cdecl* m_TSelectiveSweepCollider_Clear)(TSelectiveSweepCollider* pThis); // [Clear at 0x5EB5D4] [0x40] ()i
    int(__cdecl* fn_WrapperIsRemoved)(TWrapper* a1); // [WrapperIsRemoved at 0x5EB645] [0x44] (:TWrapper)i
    int(__cdecl* fn_StubIsRemoved)(TStub* a1); // [StubIsRemoved at 0x5EB657] [0x48] (:TStub)i
    int(__cdecl* m_TSelectiveSweepCollider__RemoveStubAtIndex)(TSelectiveSweepCollider* pThis, void* a1, int a2); // [_RemoveStubAtIndex at 0x5EB772] [0x4C] (*[]:TStub,i)i
    int(__cdecl* m_TSelectiveSweepCollider_InternalUpdate)(TSelectiveSweepCollider* pThis); // [InternalUpdate at 0x5EB7DC] [0x50] ()i
    int(__cdecl* m_TSelectiveSweepCollider__ShouldDoX)(TSelectiveSweepCollider* pThis); // [_ShouldDoX at 0x5EB85B] [0x54] ()i
    int(__cdecl* m_TSelectiveSweepCollider__DetectInternal)(TSelectiveSweepCollider* pThis, int a1); // [_DetectInternal at 0x5EB910] [0x58] (i)i
    int(__cdecl* m_TSelectiveSweepCollider__OnCollision)(TSelectiveSweepCollider* pThis, TGeom* a1, TGeom* a2); // [_OnCollision at 0x5EBA72] [0x5C] (:TGeom,:TGeom)i
};


// Super: 0x87530C
// 5 members
struct TSelectiveSweepCollider {
    TSelectiveSweepColliderDecl* decl; // 0x0
    int    refs;  // 0x4
    TPhysicsSimulator* m__physicsSimulator; // 0x8 <type_:TPhysicsSimulator>
    TList* m__wrappers; // 0xC <type_:TList>
    void* m__xStubArray; // 0x10 <type_[]:TStub>
    void* m__yStubArray; // 0x14 <type_[]:TStub>
    TList* m__currentBodies; // 0x18 <type_:TList>
};


