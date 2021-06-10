#pragma once

#include "defines.h"

// 8 methods, 2 functions
struct Tirc_serverDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 56(0x38)
    int(__cdecl* m_Tirc_server_New)(Tirc_server* pThis); // [New at 0x78220B] [0x10] ()i
    int(__cdecl* m_Tirc_server_Delete)(Tirc_server* pThis); // [Delete at 0x782291] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    Tirc_server*(__cdecl* fn_connect)(BBString* a1, short a2, BBString* a3); // [connect at 0x78230A] [0x30] ($,s,$):Tirc_server
    int(__cdecl* fn_disconnect)(Tirc_server* a1); // [disconnect at 0x782560] [0x34] (:Tirc_server)i
    int(__cdecl* m_Tirc_server_send)(Tirc_server* pThis, BBString* a1); // [send at 0x7825DB] [0x38] ($)i
    int(__cdecl* m_Tirc_server_say)(Tirc_server* pThis, BBString* a1); // [say at 0x782662] [0x3C] ($)i
    int(__cdecl* m_Tirc_server_get)(Tirc_server* pThis); // [get at 0x782738] [0x40] ()i
    int(__cdecl* m_Tirc_server_analyze)(Tirc_server* pThis, BBString* a1); // [analyze at 0x782FA8] [0x44] ($)i
    int(__cdecl* m_Tirc_server_addchannel)(Tirc_server* pThis, BBString* a1, BBString* a2); // [addchannel at 0x783858] [0x48] ($,$)i
    Tirc_channel*(__cdecl* m_Tirc_server_getchannel)(Tirc_server* pThis, BBString* a1); // [getchannel at 0x7839E9] [0x4C] ($):Tirc_channel
};


// 9 members
struct Tirc_server {
    Tirc_serverDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_address; // 0x8 <type_$>
    BBString* m_name; // 0xC <type_$>
    short m_port; // 0x10 <type_s>
    BBString* m_nick; // 0x14 <type_$>
    TTCPStream* m_stream; // 0x18 <type_:TTCPStream>
    long long m_lastin; // 0x20 <type_l>
    long long m_lastout; // 0x28 <type_l>
    Tirc_msg* m_msg; // 0x30 <type_:Tirc_msg>
    TList* m_channels; // 0x34 <type_:TList>
};


