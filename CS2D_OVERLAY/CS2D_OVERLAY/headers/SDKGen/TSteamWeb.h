#pragma once

#include "defines.h"

// 3 methods, 4 functions
struct TSteamWebDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 32(0x20)
    int(__cdecl* m_TSteamWeb_New)(TSteamWeb* pThis); // [New at 0x610FCA] [0x10] ()i
    int(__cdecl* m_TSteamWeb_Delete)(TSteamWeb* pThis); // [Delete at 0x61102A] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_CreateRequest)(BBString* a1, BBString* a2, BBString* a3); // [CreateRequest at 0x611092] [0x30] ($,$,$)i
    int(__cdecl* fn_CreateSteamIDRequest)(BBString* a1, BBString* a2, BBString* a3); // [CreateSteamIDRequest at 0x61112A] [0x34] ($,$,$)i
    int(__cdecl* fn_CreateSteamIDsRequest)(BBString* a1, BBString* a2, BBString* a3); // [CreateSteamIDsRequest at 0x6111FE] [0x38] ($,$,$)i
    int(__cdecl* fn_Update)(); // [Update at 0x6112D2] [0x3C] ()i
    int(__cdecl* m_TSteamWeb_UpdateRequest)(TSteamWeb* pThis); // [UpdateRequest at 0x61132F] [0x40] ()i
};


// 6 members
struct TSteamWeb {
    TSteamWebDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_requestString; // 0x8 <type_$>
    int m_stage; // 0xC <type_i>
    BBString* m_interface; // 0x10 <type_$>
    BBString* m_m; // 0x14 <type_$>
    BBString* m_params; // 0x18 <type_$>
    TSmartSocket* m_socket; // 0x1C <type_:TSmartSocket>
};


