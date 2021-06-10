#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct CollisionEventDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_CollisionEvent_New)(CollisionEvent* pThis); // [New at 0x609C3F] [0x10] ()i
    int(__cdecl* m_CollisionEvent_Delete)(CollisionEvent* pThis); // [Delete at 0x609C6C] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    Object*(__cdecl* m_CollisionEvent_SendMessage)(CollisionEvent* pThis, Object* a1, Object* a2); // [SendMessage at 0x609C8E] [0x20] (:Object,:Object):Object
};


// 1 members
struct CollisionEvent {
    CollisionEventDecl* decl; // 0x0
    int    refs;  // 0x4
    PhysicsUniqueID* m_physId; // 0x8 <type_:PhysicsUniqueID>
};


