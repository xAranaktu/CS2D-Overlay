#pragma once

#include "defines.h"

// 53 methods, 5 functions
struct TGeomDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 128(0x80)
    int(__cdecl* m_TGeom_New)(TGeom* pThis); // [New at 0x5EA19C] [0x10] ()i
    int(__cdecl* m_TGeom_Delete)(TGeom* pThis); // [Delete at 0x5EA2E6] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TGeom_GetId)(TGeom* pThis); // [GetId at 0x5EA42B] [0x30] ()i
    TMatrix*(__cdecl* m_TGeom_GetMatrix)(TGeom* pThis); // [GetMatrix at 0x5EA43A] [0x34] ():TMatrix
    int(__cdecl* m_TGeom_SetMatrix)(TGeom* pThis, TMatrix* a1); // [SetMatrix at 0x5EA452] [0x38] (:TMatrix)i
    TMatrix*(__cdecl* m_TGeom_GetMatrixInverse)(TGeom* pThis); // [GetMatrixInverse at 0x5EA498] [0x3C] ():TMatrix
    TAABB*(__cdecl* m_TGeom_GetAABB)(TGeom* pThis); // [GetAABB at 0x5EA4B8] [0x40] ():TAABB
    Vector2*(__cdecl* m_TGeom_GetPosition)(TGeom* pThis); // [GetPosition at 0x5EA4C7] [0x44] ():Vector2
    float(__cdecl* m_TGeom_GetRotation)(TGeom* pThis); // [GetRotation at 0x5EA4DF] [0x48] ()f
    int(__cdecl* m_TGeom_SetCollisionGridCellSize)(TGeom* pThis, float a1); // [SetCollisionGridCellSize at 0x5EA4EE] [0x4C] (f)i
    float(__cdecl* m_TGeom_GetCollisionGridCellSize)(TGeom* pThis); // [GetCollisionGridCellSize at 0x5EA511] [0x50] ()f
    TVertices*(__cdecl* m_TGeom_GetLocalVertices)(TGeom* pThis); // [GetLocalVertices at 0x5EA520] [0x54] ():TVertices
    int(__cdecl* m_TGeom_SetLocalVertices)(TGeom* pThis, TVertices* a1); // [SetLocalVertices at 0x5EA52F] [0x58] (:TVertices)i
    TVertices*(__cdecl* m_TGeom_GetWorldVertices)(TGeom* pThis); // [GetWorldVertices at 0x5EA55E] [0x5C] ():TVertices
    int(__cdecl* m_TGeom_SetWorldVertices)(TGeom* pThis, TVertices* a1); // [SetWorldVertices at 0x5EA56D] [0x60] (:TVertices)i
    int(__cdecl* m_TGeom_GetCollisionGroup)(TGeom* pThis); // [GetCollisionGroup at 0x5EA59C] [0x64] ()i
    int(__cdecl* m_TGeom_SetCollisionGroup)(TGeom* pThis, int a1); // [SetCollisionGroup at 0x5EA5AB] [0x68] (i)i
    int(__cdecl* m_TGeom_SetCollisionEnabled)(TGeom* pThis, int a1); // [SetCollisionEnabled at 0x5EA5C2] [0x6C] (i)i
    int(__cdecl* m_TGeom_GetCollisionEnabled)(TGeom* pThis); // [GetCollisionEnabled at 0x5EA5D9] [0x70] ()i
    int(__cdecl* m_TGeom_SetCollisionResponseEnabled)(TGeom* pThis, int a1); // [SetCollisionResponseEnabled at 0x5EA5E8] [0x74] (i)i
    int(__cdecl* m_TGeom_GetCollisionResponseEnabled)(TGeom* pThis); // [GetCollisionResponseEnabled at 0x5EA5FF] [0x78] ()i
    int(__cdecl* m_TGeom_GetCollisionCategory)(TGeom* pThis); // [GetCollisionCategory at 0x5EA60E] [0x7C] ()i
    int(__cdecl* m_TGeom_SetCollisionCategory)(TGeom* pThis, int a1); // [SetCollisionCategory at 0x5EA61D] [0x80] (i)i
    int(__cdecl* m_TGeom_GetCollidesWith)(TGeom* pThis); // [GetCollidesWith at 0x5EA634] [0x84] ()i
    int(__cdecl* m_TGeom_SetCollidesWith)(TGeom* pThis, int a1); // [SetCollidesWith at 0x5EA643] [0x88] (i)i
    TGrid*(__cdecl* m_TGeom_GetGrid)(TGeom* pThis); // [GetGrid at 0x5EA65A] [0x8C] ():TGrid
    TBody*(__cdecl* m_TGeom_GetBody)(TGeom* pThis); // [GetBody at 0x5EA669] [0x90] ():TBody
    float(__cdecl* m_TGeom_GetRestitutionCoefficient)(TGeom* pThis); // [GetRestitutionCoefficient at 0x5EA678] [0x94] ()f
    int(__cdecl* m_TGeom_SetRestitutionCoefficient)(TGeom* pThis, float a1); // [SetRestitutionCoefficient at 0x5EA687] [0x98] (f)i
    float(__cdecl* m_TGeom_GetFrictionCoefficient)(TGeom* pThis); // [GetFrictionCoefficient at 0x5EA69E] [0x9C] ()f
    int(__cdecl* m_TGeom_SetFrictionCoefficient)(TGeom* pThis, float a1); // [SetFrictionCoefficient at 0x5EA6AD] [0xA0] (f)i
    Object*(__cdecl* m_TGeom_GetTag)(TGeom* pThis); // [GetTag at 0x5EA6C4] [0xA4] ():Object
    int(__cdecl* m_TGeom_SetTag)(TGeom* pThis, Object* a1); // [SetTag at 0x5EA6D3] [0xA8] (:Object)i
    int(__cdecl* m_TGeom_SetVertices)(TGeom* pThis, TVertices* a1); // [SetVertices at 0x5EA702] [0xAC] (:TVertices)i
    int(__cdecl* m_TGeom_SetBody)(TGeom* pThis, TBody* a1); // [SetBody at 0x5EA77D] [0xB0] (:TBody)i
    TGeom*(__cdecl* fn_Create)(TBody* a1, TVertices* a2, float a3, Vector2* a4, float a5); // [Create at 0x5EA7FE] [0xB4] (:TBody,:TVertices,f,:Vector2,f):TGeom
    TGeom*(__cdecl* fn_CreateFromClone)(TBody* a1, TGeom* a2, Vector2* a3, float a4); // [CreateFromClone at 0x5EA84D] [0xB8] (:TBody,:TGeom,:Vector2,f):TGeom
    int(__cdecl* m_TGeom__Construct)(TGeom* pThis, TBody* a1, TVertices* a2, Vector2* a3, float a4, float a5); // [_Construct at 0x5EA899] [0xBC] (:TBody,:TVertices,:Vector2,f,f)i
    int(__cdecl* m_TGeom__ConstructClone)(TGeom* pThis, TBody* a1, TGeom* a2, Vector2* a3, float a4); // [_ConstructClone at 0x5EA939] [0xC0] (:TBody,:TGeom,:Vector2,f)i
    int(__cdecl* fn_GetNextId)(); // [GetNextId at 0x5EA9F7] [0xC4] ()i
    int(__cdecl* m_TGeom_ComputeCollisionGrid)(TGeom* pThis); // [ComputeCollisionGrid at 0x5EAA0C] [0xC8] ()i
    Vector2*(__cdecl* m_TGeom_GetWorldPosition)(TGeom* pThis, Vector2* a1); // [GetWorldPosition at 0x5EAA60] [0xCC] (:Vector2):Vector2
    float(__cdecl* m_TGeom_GetNearestDistance)(TGeom* pThis, Vector2* a1); // [GetNearestDistance at 0x5EAA8D] [0xD0] (:Vector2)f
    TFeature*(__cdecl* m_TGeom_GetNearestFeature)(TGeom* pThis, Vector2* a1, int a2); // [GetNearestFeature at 0x5EAB40] [0xD4] (:Vector2,i):TFeature
    int(__cdecl* m_TGeom_Collide)(TGeom* pThis, Vector2* a1); // [Collide at 0x5EADDB] [0xD8] (:Vector2)i
    int(__cdecl* m_TGeom_CollideWithGeometry)(TGeom* pThis, TGeom* a1); // [CollideWithGeometry at 0x5EAE7C] [0xDC] (:TGeom)i
    int(__cdecl* m_TGeom_Intersect)(TGeom* pThis, Vector2* a1, void* a2); // [Intersect at 0x5EAF5C] [0xE0] (:Vector2,*:TFeature)i
    int(__cdecl* m_TGeom_TransformToLocalCoordinates)(TGeom* pThis, Vector2* a1, Vector2* a2); // [TransformToLocalCoordinates at 0x5EAF7E] [0xE4] (:Vector2,:Vector2)i
    int(__cdecl* m_TGeom_TransformNormalToWorld)(TGeom* pThis, Vector2* a1, void* a2); // [TransformNormalToWorld at 0x5EAFD4] [0xE8] (:Vector2,*:Vector2)i
    int(__cdecl* m_TGeom__Update2)(TGeom* pThis, Vector2* a1, float a2); // [_Update2 at 0x5EAFFA] [0xEC] (:Vector2,f)i
    int(__cdecl* m_TGeom__Update)(TGeom* pThis); // [_Update at 0x5EB0CE] [0xF0] ()i
    int(__cdecl* m_TGeom_OnCollision)(TGeom* pThis, TGeom* a1, TGeom* a2, TContactList* a3); // [OnCollision at 0x5EB1B6] [0xF4] (:TGeom,:TGeom,:TContactList)i
    int(__cdecl* m_TGeom_OnCollisionExit)(TGeom* pThis, TGeom* a1, TGeom* a2); // [OnCollisionExit at 0x5EB260] [0xF8] (:TGeom,:TGeom)i
    int(__cdecl* m_TGeom_AddCollisionEventListener)(TGeom* pThis, Object* a1); // [AddCollisionEventListener at 0x5EB2EE] [0xFC] (:Object)i
    int(__cdecl* m_TGeom_ClearListeners)(TGeom* pThis); // [ClearListeners at 0x5EB30F] [0x100] ()i
    int(__cdecl* m_TGeom_Equals)(TGeom* pThis, Object* a1); // [Equals at 0x5EB32C] [0x104] (:Object)i
    int(__cdecl* fn_LessThan)(TGeom* a1, TGeom* a2); // [LessThan at 0x5EB371] [0x108] (:TGeom,:TGeom)i
    int(__cdecl* fn_MoreThan)(TGeom* a1, TGeom* a2); // [MoreThan at 0x5EB38C] [0x10C] (:TGeom,:TGeom)i
};


// 30 members
struct TGeom {
    TGeomDecl* decl; // 0x0
    int    refs;  // 0x4
    Vector2* m__position; // 0x8 <type_:Vector2>
    float m__rotation; // 0xC <type_f>
    float m__collisionGridCellSize; // 0x10 <type_f>
    Vector2* m__offset; // 0x14 <type_:Vector2>
    float m__rotationOffset; // 0x18 <type_f>
    float m__restitutionCoefficient; // 0x1C <type_f>
    float m__frictionCoefficient; // 0x20 <type_f>
    Object* m__tag; // 0x24 <type_:Object>
    int m__collisionGroup; // 0x28 <type_i>
    int m__collisionEnabled; // 0x2C <type_i>
    int m__collisionResponseEnabled; // 0x30 <type_i>
    int m__collisionCategories; // 0x34 <type_i>
    int m__collidesWith; // 0x38 <type_i>
    int m__id; // 0x3C <type_i>
    TGrid* m__grid; // 0x40 <type_:TGrid>
    TVertices* m__localVertices; // 0x44 <type_:TVertices>
    TVertices* m__worldVertices; // 0x48 <type_:TVertices>
    TMatrix* m__matrix; // 0x4C <type_:TMatrix>
    TMatrix* m__matrixInverse; // 0x50 <type_:TMatrix>
    TAABB* m__aabb; // 0x54 <type_:TAABB>
    TMatrix* m__matrixInverseTemp; // 0x58 <type_:TMatrix>
    TBody* m__body; // 0x5C <type_:TBody>
    int m_isRemoved; // 0x60 <type_i>
    TGeomBodyListener* m__bodyOnChange; // 0x64 <type_:TGeomBodyListener>
    TList* m__collisionEventListeners; // 0x68 <type_:TList>
    Vector2* m__pointVecTemp; // 0x6C <type_:Vector2>
    Vector2* m__vert; // 0x70 <type_:Vector2>
    Vector2* m__newPos; // 0x74 <type_:Vector2>
    Vector2* m__vertice; // 0x78 <type_:Vector2>
    Vector2* m__localVertice; // 0x7C <type_:Vector2>
};


