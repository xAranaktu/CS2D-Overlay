#pragma once

#include "defines.h"

// 6 methods, 4 functions
struct PhysicsUniqueIDDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 36(0x24)
    int(__cdecl* m_PhysicsUniqueID_New)(PhysicsUniqueID* pThis); // [New at 0x5FAED4] [0x10] ()i
    int(__cdecl* m_PhysicsUniqueID_Delete)(PhysicsUniqueID* pThis); // [Delete at 0x5FAF33] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_PhysicsUniqueID_SetTexture)(PhysicsUniqueID* pThis, BBString* a1); // [SetTexture at 0x5FAF79] [0x30] ($)i
    PhysicsUniqueID*(__cdecl* fn_GetByID)(int a1); // [GetByID at 0x5FAFD6] [0x34] (i):PhysicsUniqueID
    PhysicsUniqueID*(__cdecl* fn_GetByType)(int a1, int a2); // [GetByType at 0x5FB04F] [0x38] (i,i):PhysicsUniqueID
    BBString*(__cdecl* fn_GetNameByID)(int a1); // [GetNameByID at 0x5FB09F] [0x3C] (i)$
    BBString*(__cdecl* m_PhysicsUniqueID_GetTypeName)(PhysicsUniqueID* pThis); // [GetTypeName at 0x5FB0FA] [0x40] ()$
    PhysicsUniqueID*(__cdecl* fn_GetNew)(int a1, int a2); // [GetNew at 0x5FB158] [0x44] (i,i):PhysicsUniqueID
    TBody*(__cdecl* m_PhysicsUniqueID_GetBody)(PhysicsUniqueID* pThis); // [GetBody at 0x5FB221] [0x48] ():TBody
    TGeom*(__cdecl* m_PhysicsUniqueID_GetGeom)(PhysicsUniqueID* pThis); // [GetGeom at 0x5FB2BF] [0x4C] ():TGeom
};


// 7 members
struct PhysicsUniqueID {
    PhysicsUniqueIDDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_id; // 0x8 <type_i>
    int m_typ; // 0xC <type_i>
    int m_typId; // 0x10 <type_i>
    TImage* m_texture; // 0x14 <type_:TImage>
    BBString* m_textureString; // 0x18 <type_$>
    int m_destroyed; // 0x1C <type_i>
    CollisionEvent* m_collision; // 0x20 <type_:CollisionEvent>
};


