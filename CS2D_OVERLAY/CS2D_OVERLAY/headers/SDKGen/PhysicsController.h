#pragma once

#include "defines.h"

// 10 methods, 9 functions
struct PhysicsControllerDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 88(0x58)
    int(__cdecl* m_PhysicsController_New)(PhysicsController* pThis); // [New at 0x5FFB6A] [0x10] ()i
    int(__cdecl* m_PhysicsController_Delete)(PhysicsController* pThis); // [Delete at 0x5FFC4E] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    PhysicsController*(__cdecl* fn_GetByID)(int a1); // [GetByID at 0x5FFCC7] [0x30] (i):PhysicsController
    PhysicsController*(__cdecl* fn_GetByIDClient)(int a1); // [GetByIDClient at 0x5FFD81] [0x34] (i):PhysicsController
    PhysicsUniqueID*(__cdecl* m_PhysicsController_GetParent)(PhysicsController* pThis); // [GetParent at 0x5FFDF7] [0x38] ():PhysicsUniqueID
    float(__cdecl* m_PhysicsController_GetX)(PhysicsController* pThis); // [GetX at 0x5FFE44] [0x3C] ()f
    float(__cdecl* m_PhysicsController_GetY)(PhysicsController* pThis); // [GetY at 0x5FFED9] [0x40] ()f
    int(__cdecl* m_PhysicsController_SetParent)(PhysicsController* pThis, PhysicsUniqueID* a1); // [SetParent at 0x5FFF6E] [0x44] (:PhysicsUniqueID)i
    int(__cdecl* m_PhysicsController_ApplyForce)(PhysicsController* pThis, int a1, int a2, int a3, int a4); // [ApplyForce at 0x5FFF9D] [0x48] (i,i,i,i)i
    int(__cdecl* fn_UseUpdate)(int a1); // [UseUpdate at 0x60072C] [0x4C] (i)i
    int(__cdecl* fn_UpdateInput)(); // [UpdateInput at 0x600934] [0x50] ()i
    int(__cdecl* fn_UpdateAll)(); // [UpdateAll at 0x600A72] [0x54] ()i
    int(__cdecl* m_PhysicsController_Disable)(PhysicsController* pThis); // [Disable at 0x600EF5] [0x58] ()i
    int(__cdecl* m_PhysicsController_Enable)(PhysicsController* pThis); // [Enable at 0x600F8D] [0x5C] ()i
    PhysicsController*(__cdecl* fn_GetDestroyed)(); // [GetDestroyed at 0x600FA8] [0x60] ():PhysicsController
    int(__cdecl* m_PhysicsController_Init)(PhysicsController* pThis, Vector2* a1, int a2, PhysicsUniqueID* a3, int a4); // [Init at 0x60101F] [0x64] (:Vector2,i,:PhysicsUniqueID,i)i
    PhysicsController*(__cdecl* fn_SetClient)(int a1, int a2, int a3, int a4); // [SetClient at 0x6010FF] [0x68] (i,i,i,i):PhysicsController
    PhysicsController*(__cdecl* fn_SetServer)(int a1, int a2, int a3, PhysicsUniqueID* a4, int a5); // [SetServer at 0x60118F] [0x6C] (i,i,i,:PhysicsUniqueID,i):PhysicsController
    PhysicsController*(__cdecl* fn_Create)(int a1, int a2, int a3, int a4, PhysicsUniqueID* a5, int a6); // [Create at 0x601216] [0x70] (i,i,i,i,:PhysicsUniqueID,i):PhysicsController
};


// 20 members
struct PhysicsController {
    PhysicsControllerDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_id; // 0x8 <type_i>
    PhysicsUniqueID* m_physId; // 0xC <type_:PhysicsUniqueID>
    int m_moveTyp; // 0x10 <type_i>
    Vector2* m_position; // 0x14 <type_:Vector2>
    float m_radius; // 0x18 <type_f>
    PhysicsUniqueID* m_physObject; // 0x1C <type_:PhysicsUniqueID>
    int m_playerId; // 0x20 <type_i>
    PhysicsUniqueID* m_parent; // 0x24 <type_:PhysicsUniqueID>
    float m_force_up; // 0x28 <type_f>
    float m_force_down; // 0x2C <type_f>
    float m_force_left; // 0x30 <type_f>
    float m_force_right; // 0x34 <type_f>
    float m_force_front_up; // 0x38 <type_f>
    float m_force_front_down; // 0x3C <type_f>
    int m_force_rear_up; // 0x40 <type_i>
    int m_force_rear_down; // 0x44 <type_i>
    float m_steeringAngle; // 0x48 <type_f>
    float m_steeringSensitivity; // 0x4C <type_f>
    TList* m_vehicle_wheels_front; // 0x50 <type_:TList>
    TList* m_vehicle_wheels_rear; // 0x54 <type_:TList>
};


