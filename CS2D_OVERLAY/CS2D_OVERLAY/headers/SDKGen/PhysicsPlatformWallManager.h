#pragma once

#include "defines.h"

// 5 methods, 1 functions
struct PhysicsPlatformWallManagerDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_PhysicsPlatformWallManager_New)(PhysicsPlatformWallManager* pThis); // [New at 0x60282E] [0x10] ()i
    int(__cdecl* m_PhysicsPlatformWallManager_Delete)(PhysicsPlatformWallManager* pThis); // [Delete at 0x60286E] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    PhysicsPlatformWall*(__cdecl* m_PhysicsPlatformWallManager_GetFree)(PhysicsPlatformWallManager* pThis); // [GetFree at 0x6028A3] [0x30] ():PhysicsPlatformWall
    PhysicsPlatformWall*(__cdecl* m_PhysicsPlatformWallManager_Set)(PhysicsPlatformWallManager* pThis, int a1, int a2, int a3); // [Set at 0x6028FF] [0x34] (i,i,i):PhysicsPlatformWall
    int(__cdecl* m_PhysicsPlatformWallManager_Update)(PhysicsPlatformWallManager* pThis); // [Update at 0x602AC9] [0x38] ()i
    PhysicsPlatformWallManager*(__cdecl* fn_Create)(PhysicsPlatform* a1); // [Create at 0x602C97] [0x3C] (:PhysicsPlatform):PhysicsPlatformWallManager
};


// 2 members
struct PhysicsPlatformWallManager {
    PhysicsPlatformWallManagerDecl* decl; // 0x0
    int    refs;  // 0x4
    PhysicsPlatform* m_platform; // 0x8 <type_:PhysicsPlatform>
    TList* m_mapList; // 0xC <type_:TList>
};


