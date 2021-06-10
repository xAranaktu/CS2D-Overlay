#pragma once

#include "defines.h"

// 3 methods, 3 functions
struct TVoiceChatSendPacketDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 44(0x2C)
    int(__cdecl* m_TVoiceChatSendPacket_New)(TVoiceChatSendPacket* pThis); // [New at 0x687FB0] [0x10] ()i
    int(__cdecl* m_TVoiceChatSendPacket_Delete)(TVoiceChatSendPacket* pThis); // [Delete at 0x688019] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Clear)(); // [Clear at 0x68804E] [0x30] ()i
    int(__cdecl* fn_Create)(TVoiceStream* a1, Tudp_con* a2, int a3, int a4, int a5); // [Create at 0x68806A] [0x34] (:TVoiceStream,:Tudp_con,i,i,i)i
    int(__cdecl* m_TVoiceChatSendPacket_Update)(TVoiceChatSendPacket* pThis); // [Update at 0x6880EE] [0x38] ()i
    int(__cdecl* fn_UpdateAll)(); // [UpdateAll at 0x688307] [0x3C] ()i
};


// 9 members
struct TVoiceChatSendPacket {
    TVoiceChatSendPacketDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_age; // 0x8 <type_i>
    int m_stage; // 0xC <type_i>
    int m_sentBytes; // 0x10 <type_i>
    TVoiceStream* m_voiceRecording; // 0x14 <type_:TVoiceStream>
    int m_startTime; // 0x18 <type_i>
    Tudp_con* m_con; // 0x1C <type_:Tudp_con>
    int m_mode; // 0x20 <type_i>
    int m_player; // 0x24 <type_i>
    int m_alive; // 0x28 <type_i>
};


