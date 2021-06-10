#pragma once

#include "defines.h"

// 12 methods, 12 functions
struct PhysicsPlatformDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 68(0x44)
    int(__cdecl* m_PhysicsPlatform_New)(PhysicsPlatform* pThis); // [New at 0x60130D] [0x10] ()i
    int(__cdecl* m_PhysicsPlatform_Delete)(PhysicsPlatform* pThis); // [Delete at 0x6013A6] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    PhysicsPlatform*(__cdecl* fn_GetByID)(int a1); // [GetByID at 0x60141F] [0x30] (i):PhysicsPlatform
    PhysicsPlatform*(__cdecl* fn_GetByIDClient)(int a1); // [GetByIDClient at 0x6014D9] [0x34] (i):PhysicsPlatform
    int(__cdecl* m_PhysicsPlatform_GetOffsetX)(PhysicsPlatform* pThis); // [GetOffsetX at 0x60154F] [0x38] ()i
    int(__cdecl* m_PhysicsPlatform_GetOffsetY)(PhysicsPlatform* pThis); // [GetOffsetY at 0x601564] [0x3C] ()i
    Vector2*(__cdecl* m_PhysicsPlatform_GetOffsetVector2)(PhysicsPlatform* pThis); // [GetOffsetVector2 at 0x601579] [0x40] ():Vector2
    int(__cdecl* m_PhysicsPlatform_Disable)(PhysicsPlatform* pThis); // [Disable at 0x6015BF] [0x44] ()i
    int(__cdecl* m_PhysicsPlatform_Enable)(PhysicsPlatform* pThis); // [Enable at 0x6016BD] [0x48] ()i
    int(__cdecl* m_PhysicsPlatform_TransformPointToWorldSpace)(PhysicsPlatform* pThis, void* a1, float a2); // [TransformPointToWorldSpace at 0x6016EC] [0x4C] (*:Vector2,f)i
    int(__cdecl* m_PhysicsPlatform_TransformPointToLocalSpace)(PhysicsPlatform* pThis, void* a1, float a2); // [TransformPointToLocalSpace at 0x6017B5] [0x50] (*:Vector2,f)i
    int(__cdecl* m_PhysicsPlatform_TransformVectorToWorldSpace)(PhysicsPlatform* pThis, void* a1); // [TransformVectorToWorldSpace at 0x60187E] [0x54] (*:Vector2)i
    int(__cdecl* m_PhysicsPlatform_TransformVectorToLocalSpace)(PhysicsPlatform* pThis, void* a1); // [TransformVectorToLocalSpace at 0x60190C] [0x58] (*:Vector2)i
    int(__cdecl* fn_UpdateAll)(); // [UpdateAll at 0x60199A] [0x5C] ()i
    PhysicsPlatform*(__cdecl* fn_GetDestroyed)(); // [GetDestroyed at 0x601D23] [0x60] ():PhysicsPlatform
    int(__cdecl* m_PhysicsPlatform_Init)(PhysicsPlatform* pThis, Vector2* a1, float a2); // [Init at 0x601D82] [0x64] (:Vector2,f)i
    PhysicsPlatform*(__cdecl* fn_SetClient)(int a1, int a2, int a3, float a4, TVertices* a5, float a6); // [SetClient at 0x601E76] [0x68] (i,i,i,f,:TVertices,f):PhysicsPlatform
    PhysicsPlatform*(__cdecl* fn_CreateClient)(int a1, int a2, int a3, float a4, TVertices* a5); // [CreateClient at 0x601F35] [0x6C] (i,i,i,f,:TVertices):PhysicsPlatform
    PhysicsPlatform*(__cdecl* fn_SetCircleServer)(int a1, int a2, float a3, int a4, int a5); // [SetCircleServer at 0x60209F] [0x70] (i,i,f,i,i):PhysicsPlatform
    PhysicsPlatform*(__cdecl* fn_SetPolygonServer)(int a1, int a2, float a3, TVertices* a4); // [SetPolygonServer at 0x6021B1] [0x74] (i,i,f,:TVertices):PhysicsPlatform
    PhysicsPlatform*(__cdecl* fn_SetRectangleServer)(int a1, int a2, float a3, int a4, int a5); // [SetRectangleServer at 0x60228B] [0x78] (i,i,f,i,i):PhysicsPlatform
    PhysicsPlatform*(__cdecl* fn_CreateRectangle)(int a1, int a2, float a3, int a4, int a5); // [CreateRectangle at 0x602388] [0x7C] (i,i,f,i,i):PhysicsPlatform
    PhysicsPlatform*(__cdecl* fn_CreateCircle)(int a1, int a2, float a3, int a4, int a5); // [CreateCircle at 0x60252F] [0x80] (i,i,f,i,i):PhysicsPlatform
    PhysicsPlatform*(__cdecl* fn_CreatePolygon)(int a1, int a2, float a3, TVertices* a4); // [CreatePolygon at 0x6026BB] [0x84] (i,i,f,:TVertices):PhysicsPlatform
};


// 15 members
struct PhysicsPlatform {
    PhysicsPlatformDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_id; // 0x8 <type_i>
    PhysicsUniqueID* m_physId; // 0xC <type_:PhysicsUniqueID>
    TItem* m_item; // 0x10 <type_:TItem>
    TBody* m_body; // 0x14 <type_:TBody>
    TGeom* m_geom; // 0x18 <type_:TGeom>
    PhysicsPlatformWallManager* m_wallManager; // 0x1C <type_:PhysicsPlatformWallManager>
    int m_send_net_posblock; // 0x20 <type_i>
    int m_send_net_pospixel; // 0x24 <type_i>
    int m_send_net_rot; // 0x28 <type_i>
    float m_net_posx; // 0x2C <type_f>
    float m_net_posy; // 0x30 <type_f>
    float m_net_posblockx; // 0x34 <type_f>
    float m_net_posblocky; // 0x38 <type_f>
    float m_net_rot; // 0x3C <type_f>
    TPosSound* m_sfx; // 0x40 <type_:TPosSound>
};


