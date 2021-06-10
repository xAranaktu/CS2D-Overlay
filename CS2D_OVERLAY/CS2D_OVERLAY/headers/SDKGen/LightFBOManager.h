#pragma once

#include "defines.h"

// 2 methods, 4 functions
struct LightFBOManagerDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_LightFBOManager_New)(LightFBOManager* pThis); // [New at 0x5C371B] [0x10] ()i
    int(__cdecl* m_LightFBOManager_Delete)(LightFBOManager* pThis); // [Delete at 0x5C375D] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    LightFBOManager*(__cdecl* fn_CreateFBO)(int a1, int a2, int a3); // [CreateFBO at 0x5C377F] [0x30] (i,i,i):LightFBOManager
    LightFBOManager*(__cdecl* fn_PullImageFrameBuffer)(int a1, int a2); // [PullImageFrameBuffer at 0x5C37E8] [0x34] (i,i):LightFBOManager
    int(__cdecl* fn_FreeImageFrameBuffer)(LightFBOManager* a1); // [FreeImageFrameBuffer at 0x5C387F] [0x38] (:LightFBOManager)i
    int(__cdecl* fn_GetFree)(); // [GetFree at 0x5C3897] [0x3C] ()i
};


// 4 members
struct LightFBOManager {
    LightFBOManagerDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_Free; // 0x8 <type_i>
    int m_size; // 0xC <type_i>
    int m_id; // 0x10 <type_i>
    SmartImageBuffer* m_fbo; // 0x14 <type_:SmartImageBuffer>
};


