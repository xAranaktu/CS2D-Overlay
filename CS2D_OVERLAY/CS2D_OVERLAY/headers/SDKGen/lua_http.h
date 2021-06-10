#pragma once

#include "defines.h"

// 3 methods, 2 functions
struct lua_httpDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 36(0x24)
    int(__cdecl* m_lua_http_New)(lua_http* pThis); // [New at 0x76BCBD] [0x10] ()i
    int(__cdecl* m_lua_http_Delete)(lua_http* pThis); // [Delete at 0x76BD1C] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Create)(BBString* a1, BBString* a2, int a3); // [Create at 0x76BD62] [0x30] ($,$,i)i
    int(__cdecl* m_lua_http_update)(lua_http* pThis); // [update at 0x76BDE1] [0x34] ()i
    int(__cdecl* fn_UpdateAll)(); // [UpdateAll at 0x76C22D] [0x38] ()i
};


// 7 members
struct lua_http {
    lua_httpDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_url; // 0x8 <type_$>
    BBString* m_path; // 0xC <type_$>
    int m_id; // 0x10 <type_i>
    TSmartSocket* m_Socket; // 0x14 <type_:TSmartSocket>
    int m_useBank; // 0x18 <type_i>
    int m_age; // 0x1C <type_i>
    int m_stage; // 0x20 <type_i>
};


