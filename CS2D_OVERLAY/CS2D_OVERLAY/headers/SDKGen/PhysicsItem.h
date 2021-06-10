#pragma once

#include "defines.h"

// 5 methods, 4 functions
struct PhysicsItemDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_PhysicsItem_New)(PhysicsItem* pThis); // [New at 0x5FE4C0] [0x10] ()i
    int(__cdecl* m_PhysicsItem_Delete)(PhysicsItem* pThis); // [Delete at 0x5FE515] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    PhysicsItem*(__cdecl* fn_GetByID)(int a1); // [GetByID at 0x5FE56C] [0x30] (i):PhysicsItem
    int(__cdecl* m_PhysicsItem_Disable)(PhysicsItem* pThis); // [Disable at 0x5FE5F3] [0x34] ()i
    int(__cdecl* m_PhysicsItem_Enable)(PhysicsItem* pThis); // [Enable at 0x5FE699] [0x38] ()i
    int(__cdecl* fn_Set)(titem* a1, int a2, int a3); // [Set at 0x5FE6C8] [0x3C] (:titem,i,i)i
    int(__cdecl* fn_UpdateAll)(); // [UpdateAll at 0x5FE775] [0x40] ()i
    int(__cdecl* m_PhysicsItem_Init)(PhysicsItem* pThis, Vector2* a1); // [Init at 0x5FE8EA] [0x44] (:Vector2)i
    PhysicsItem*(__cdecl* fn_Create)(titem* a1, int a2, int a3); // [Create at 0x5FE98C] [0x48] (:titem,i,i):PhysicsItem
};


// 5 members
struct PhysicsItem {
    PhysicsItemDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_id; // 0x8 <type_i>
    PhysicsUniqueID* m_physId; // 0xC <type_:PhysicsUniqueID>
    titem* m_item; // 0x10 <type_:titem>
    TBody* m_body; // 0x14 <type_:TBody>
    TGeom* m_geom; // 0x18 <type_:TGeom>
};


