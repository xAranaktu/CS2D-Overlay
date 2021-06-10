#pragma once

#include "defines.h"

// 2 methods, 2 functions
struct ServerInfoImageDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_ServerInfoImage_New)(ServerInfoImage* pThis); // [New at 0x615295] [0x10] ()i
    int(__cdecl* m_ServerInfoImage_Delete)(ServerInfoImage* pThis); // [Delete at 0x6152DF] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    ServerInfoImage*(__cdecl* fn_Get)(BBString* a1, int a2); // [Get at 0x615325] [0x30] ($,i):ServerInfoImage
    int(__cdecl* fn_UpdateAll)(); // [UpdateAll at 0x61545E] [0x34] ()i
};


// 4 members
struct ServerInfoImage {
    ServerInfoImageDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_path; // 0x8 <type_$>
    TImage* m_image; // 0xC <type_:TImage>
    GetImageProcess* m_process; // 0x10 <type_:GetImageProcess>
    int m_tries; // 0x14 <type_i>
};


