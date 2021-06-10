#pragma once

#include "defines.h"

// 2 methods, 9 functions
struct lua_bindDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_lua_bind_New)(lua_bind* pThis); // [New at 0x76C2C1] [0x10] ()i
    int(__cdecl* m_lua_bind_Delete)(lua_bind* pThis); // [Delete at 0x76C2FC] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    BBString*(__cdecl* fn_UnifyKeyName)(BBString* a1); // [UnifyKeyName at 0x76C31E] [0x30] ($)$
    lua_bind*(__cdecl* fn_AddBindString)(BBString* a1); // [AddBindString at 0x76C37D] [0x34] ($):lua_bind
    int(__cdecl* fn_AddBindNumber)(int a1); // [AddBindNumber at 0x76C494] [0x38] (i)i
    int(__cdecl* fn_RemoveBindString)(BBString* a1); // [RemoveBindString at 0x76C52D] [0x3C] ($)i
    int(__cdecl* fn_ServerReceiveHook)(int a1, int a2, int a3); // [ServerReceiveHook at 0x76C5C4] [0x40] (i,i,i)i
    int(__cdecl* fn_UpdateAll)(); // [UpdateAll at 0x76C634] [0x44] ()i
    int(__cdecl* fn_ClientSend)(int a1, int a2); // [ClientSend at 0x76C8F7] [0x48] (i,i)i
    int(__cdecl* fn_HandleServersideInput)(int a1, BBString* a2, int a3); // [HandleServersideInput at 0x76C976] [0x4C] (i,$,i)i
    int(__cdecl* fn_SendBindListToClients)(); // [SendBindListToClients at 0x76CA2C] [0x50] ()i
};


// 3 members
struct lua_bind {
    lua_bindDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_key; // 0x8 <type_i>
    BBString* m_keyname; // 0xC <type_$>
    int m_state; // 0x10 <type_i>
};


