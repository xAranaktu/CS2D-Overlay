#pragma once

#include "defines.h"

// 10 methods, 16 functions
struct PhysicsObjectDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 100(0x64)
    int(__cdecl* m_PhysicsObject_New)(PhysicsObject* pThis); // [New at 0x5FB9E7] [0x10] ()i
    int(__cdecl* m_PhysicsObject_Delete)(PhysicsObject* pThis); // [Delete at 0x5FBAB5] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_UpdateParenting)(); // [UpdateParenting at 0x5FBB3F] [0x30] ()i
    PhysicsUniqueID*(__cdecl* m_PhysicsObject_GetParent)(PhysicsObject* pThis); // [GetParent at 0x5FBE2A] [0x34] ():PhysicsUniqueID
    float(__cdecl* m_PhysicsObject_GetX)(PhysicsObject* pThis); // [GetX at 0x5FBE77] [0x38] ()f
    float(__cdecl* m_PhysicsObject_GetY)(PhysicsObject* pThis); // [GetY at 0x5FBF0C] [0x3C] ()f
    float(__cdecl* m_PhysicsObject_GetRot)(PhysicsObject* pThis); // [GetRot at 0x5FBFA1] [0x40] ()f
    PhysicsObject*(__cdecl* fn_GetByID)(int a1); // [GetByID at 0x5FBFEC] [0x44] (i):PhysicsObject
    int(__cdecl* m_PhysicsObject_SetParent)(PhysicsObject* pThis, PhysicsUniqueID* a1); // [SetParent at 0x5FC0A6] [0x48] (:PhysicsUniqueID)i
    int(__cdecl* m_PhysicsObject_Disable)(PhysicsObject* pThis); // [Disable at 0x5FC0D5] [0x4C] ()i
    int(__cdecl* m_PhysicsObject_Enable)(PhysicsObject* pThis); // [Enable at 0x5FC192] [0x50] ()i
    PhysicsObject*(__cdecl* fn_GetByIDClient)(int a1); // [GetByIDClient at 0x5FC1D5] [0x54] (i):PhysicsObject
    int(__cdecl* m_PhysicsObject_Init)(PhysicsObject* pThis, Vector2* a1, float a2); // [Init at 0x5FC24B] [0x58] (:Vector2,f)i
    PhysicsObject*(__cdecl* fn_SetClient)(int a1, int a2, int a3, float a4, TVertices* a5, float a6); // [SetClient at 0x5FC3B7] [0x5C] (i,i,i,f,:TVertices,f):PhysicsObject
    PhysicsObject*(__cdecl* fn_CreateClient)(int a1, int a2, int a3, float a4, TVertices* a5); // [CreateClient at 0x5FC476] [0x60] (i,i,i,f,:TVertices):PhysicsObject
    PhysicsObject*(__cdecl* fn_GetDestroyed)(); // [GetDestroyed at 0x5FC635] [0x64] ():PhysicsObject
    PhysicsObject*(__cdecl* fn_SetTileServer)(int a1, int a2, int a3, int a4); // [SetTileServer at 0x5FC694] [0x68] (i,i,i,i):PhysicsObject
    PhysicsObject*(__cdecl* fn_SetRectangleServer)(int a1, int a2, int a3, int a4, int a5); // [SetRectangleServer at 0x5FC7E2] [0x6C] (i,i,i,i,i):PhysicsObject
    PhysicsObject*(__cdecl* fn_SetTireServer)(int a1, int a2, int a3, int a4, int a5); // [SetTireServer at 0x5FC97A] [0x70] (i,i,i,i,i):PhysicsObject
    PhysicsObject*(__cdecl* fn_SetCircleServer)(int a1, int a2, int a3, int a4, int a5); // [SetCircleServer at 0x5FCB19] [0x74] (i,i,i,i,i):PhysicsObject
    PhysicsObject*(__cdecl* fn_SetPolygonServer)(int a1, int a2, int a3, TVertices* a4); // [SetPolygonServer at 0x5FCCCA] [0x78] (i,i,i,:TVertices):PhysicsObject
    PhysicsObject*(__cdecl* fn_CreateTileServer)(int a1, int a2, int a3, int a4); // [CreateTileServer at 0x5FCE20] [0x7C] (i,i,i,i):PhysicsObject
    PhysicsObject*(__cdecl* fn_CreateRectangleServer)(int a1, int a2, int a3, int a4, int a5); // [CreateRectangleServer at 0x5FD004] [0x80] (i,i,i,i,i):PhysicsObject
    PhysicsObject*(__cdecl* fn_CreateTireServer)(int a1, int a2, int a3, int a4, int a5); // [CreateTireServer at 0x5FD230] [0x84] (i,i,i,i,i):PhysicsObject
    PhysicsObject*(__cdecl* fn_CreateCircleServer)(int a1, int a2, int a3, int a4, int a5); // [CreateCircleServer at 0x5FD463] [0x88] (i,i,i,i,i):PhysicsObject
    PhysicsObject*(__cdecl* fn_CreatePolygonServer)(int a1, int a2, int a3, TVertices* a4); // [CreatePolygonServer at 0x5FD659] [0x8C] (i,i,i,:TVertices):PhysicsObject
};


// 23 members
struct PhysicsObject {
    PhysicsObjectDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_id; // 0x8 <type_i>
    PhysicsUniqueID* m_physId; // 0xC <type_:PhysicsUniqueID>
    int m_tile_id; // 0x10 <type_i>
    int m_tire; // 0x14 <type_i>
    float m_tire_animation; // 0x18 <type_f>
    float m_tire_oldx; // 0x1C <type_f>
    float m_tire_oldy; // 0x20 <type_f>
    float m_tire_rotation_offset; // 0x24 <type_f>
    TBody* m_body; // 0x28 <type_:TBody>
    TGeom* m_geom; // 0x2C <type_:TGeom>
    PhysicsUniqueID* m_parent; // 0x30 <type_:PhysicsUniqueID>
    Vector2* m_position; // 0x34 <type_:Vector2>
    float m_rotation; // 0x38 <type_f>
    int m_property; // 0x3C <type_i>
    TGeom* m_parent_geom; // 0x40 <type_:TGeom>
    TBody* m_parent_body; // 0x44 <type_:TBody>
    float m_net_posx; // 0x48 <type_f>
    float m_net_posy; // 0x4C <type_f>
    float m_net_rot; // 0x50 <type_f>
    float m_net_offsetrot; // 0x54 <type_f>
    int m_send_net_pos; // 0x58 <type_i>
    int m_send_net_rot; // 0x5C <type_i>
    int m_send_net_offsetrot; // 0x60 <type_i>
};


