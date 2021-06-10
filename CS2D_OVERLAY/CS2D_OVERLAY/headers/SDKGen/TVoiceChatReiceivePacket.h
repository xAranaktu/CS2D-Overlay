#pragma once

#include "defines.h"

// 2 methods, 5 functions
struct TVoiceChatReiceivePacketDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TVoiceChatReiceivePacket_New)(TVoiceChatReiceivePacket* pThis); // [New at 0x687AC1] [0x10] ()i
    int(__cdecl* m_TVoiceChatReiceivePacket_Delete)(TVoiceChatReiceivePacket* pThis); // [Delete at 0x687AE3] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Init)(int a1); // [Init at 0x687AF1] [0x30] (i)i
    int(__cdecl* fn_Reset)(); // [Reset at 0x687BA5] [0x34] ()i
    int(__cdecl* fn_Update)(int a1); // [Update at 0x687C24] [0x38] (i)i
    TVoiceStream*(__cdecl* fn_Export)(int a1, int a2); // [Export at 0x687DBD] [0x3C] (i,i):TVoiceStream
    TVoiceStream*(__cdecl* fn_Play)(int a1); // [Play at 0x687F25] [0x40] (i):TVoiceStream
};


// 0 members
struct TVoiceChatReiceivePacket {
    TVoiceChatReiceivePacketDecl* decl; // 0x0
    int    refs;  // 0x4
};


