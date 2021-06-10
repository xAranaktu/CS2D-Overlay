#pragma once

#include "defines.h"

// 2 methods, 5 functions
struct ServerInfoXMLDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_ServerInfoXML_New)(ServerInfoXML* pThis); // [New at 0x613267] [0x10] ()i
    int(__cdecl* m_ServerInfoXML_Delete)(ServerInfoXML* pThis); // [Delete at 0x613289] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Draw)(float a1, float a2, float a3, float a4, float a5, Tgui_svinfo* a6); // [Draw at 0x613297] [0x30] (f,f,f,f,f,:Tgui_svinfo)i
    int(__cdecl* fn_GetHeight)(float a1, float a2, float a3, float a4); // [GetHeight at 0x613B3B] [0x34] (f,f,f,f)i
    int(__cdecl* fn_Load)(BBString* a1, TList* a2); // [Load at 0x613C01] [0x38] ($,:TList)i
    int(__cdecl* fn_WriteCache)(TList* a1); // [WriteCache at 0x614D41] [0x3C] (:TList)i
    int(__cdecl* fn_CreateFolder)(BBString* a1); // [CreateFolder at 0x614E02] [0x40] ($)i
};


// 0 members
struct ServerInfoXML {
    ServerInfoXMLDecl* decl; // 0x0
    int    refs;  // 0x4
};


