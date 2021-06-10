#pragma once

#include "defines.h"

// 2 methods, 1 functions
struct TServerDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 44(0x2C)
    int(__cdecl* m_TServer_New)(TServer* pThis); // [New at 0x60F0F2] [0x10] ()i
    int(__cdecl* m_TServer_Delete)(TServer* pThis); // [Delete at 0x60F167] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TServer*(__cdecl* fn_Create)(BBString* a1, int a2, int a3, BBString* a4, int a5, int a6, int a7, int a8); // [Create at 0x60F1AD] [0x30] ($,i,i,$,i,i,i,i):TServer
};


// 9 members
struct TServer {
    TServerDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_name; // 0x8 <type_$>
    int m_ip; // 0xC <type_i>
    int m_port; // 0x10 <type_i>
    BBString* m_map; // 0x14 <type_$>
    int m_playersCount; // 0x18 <type_i>
    int m_state; // 0x1C <type_i>
    int m_time; // 0x20 <type_i>
    int m_maxplayers; // 0x24 <type_i>
    TList* m_playerslist; // 0x28 <type_:TList>
};


