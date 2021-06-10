#pragma once

#include "defines.h"

// 4 methods, 4 functions
struct GetImageProcessDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 32(0x20)
    int(__cdecl* m_GetImageProcess_New)(GetImageProcess* pThis); // [New at 0x615505] [0x10] ()i
    int(__cdecl* m_GetImageProcess_Delete)(GetImageProcess* pThis); // [Delete at 0x615565] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    GetImageProcess*(__cdecl* fn_Create)(BBString* a1, ServerInfoImage* a2); // [Create at 0x6155CD] [0x30] ($,:ServerInfoImage):GetImageProcess
    int(__cdecl* fn_GetCount)(); // [GetCount at 0x61563D] [0x34] ()i
    int(__cdecl* m_GetImageProcess_Update)(GetImageProcess* pThis); // [Update at 0x615654] [0x38] ()i
    int(__cdecl* fn_debug_msg)(BBString* a1); // [debug_msg at 0x6156CF] [0x3C] ($)i
    int(__cdecl* m_GetImageProcess_UpdateStage)(GetImageProcess* pThis); // [UpdateStage at 0x6156F2] [0x40] ()i
    int(__cdecl* fn_UpdateAll)(); // [UpdateAll at 0x61592A] [0x44] ()i
};


// 6 members
struct GetImageProcess {
    GetImageProcessDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_stage; // 0x8 <type_i>
    TSmartSocket* m_Socket; // 0xC <type_:TSmartSocket>
    TStream* m_file; // 0x10 <type_:TStream>
    BBString* m_URL; // 0x14 <type_$>
    BBString* m_CacheURL; // 0x18 <type_$>
    ServerInfoImage* m_infoImage; // 0x1C <type_:ServerInfoImage>
};


