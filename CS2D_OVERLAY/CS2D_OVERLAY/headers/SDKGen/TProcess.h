#pragma once

#include "defines.h"

// 5 methods, 3 functions
struct TProcessDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_TProcess_New)(TProcess* pThis); // [New at 0x78A9C0] [0x10] ()i
    int(__cdecl* m_TProcess_Delete)(TProcess* pThis); // [Delete at 0x78AA0A] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TProcess_Status)(TProcess* pThis); // [Status at 0x78AA50] [0x30] ()i
    int(__cdecl* m_TProcess_Close)(TProcess* pThis); // [Close at 0x78AA87] [0x34] ()i
    int(__cdecl* m_TProcess_Terminate)(TProcess* pThis); // [Terminate at 0x78AAFE] [0x38] ()i
    TProcess*(__cdecl* fn_Create)(BBString* a1, int a2); // [Create at 0x78AB29] [0x3C] ($,i):TProcess
    int(__cdecl* fn_FlushZombies)(); // [FlushZombies at 0x78AC51] [0x40] ()i
    int(__cdecl* fn_TerminateAll)(); // [TerminateAll at 0x78AD1E] [0x44] ()i
};


// 4 members
struct TProcess {
    TProcessDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_name; // 0x8 <type_$>
    int m_handle; // 0xC <type_i>
    TPipeStream* m_pipe; // 0x10 <type_:TPipeStream>
    TPipeStream* m_err; // 0x14 <type_:TPipeStream>
};


