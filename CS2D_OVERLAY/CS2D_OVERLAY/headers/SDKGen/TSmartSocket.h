#pragma once

#include "defines.h"

// 8 methods, 2 functions
struct TSmartSocketDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 68(0x44)
    int(__cdecl* m_TSmartSocket_New)(TSmartSocket* pThis); // [New at 0x785F78] [0x10] ()i
    int(__cdecl* m_TSmartSocket_Delete)(TSmartSocket* pThis); // [Delete at 0x78601F] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TSmartSocket*(__cdecl* fn_Create)(BBString* a1, BBString* a2, int a3); // [Create at 0x7860A9] [0x30] ($,$,i):TSmartSocket
    BBString*(__cdecl* m_TSmartSocket_GetResult)(TSmartSocket* pThis); // [GetResult at 0x78611F] [0x34] ()$
    TBank*(__cdecl* m_TSmartSocket_GetResultBank)(TSmartSocket* pThis); // [GetResultBank at 0x78612E] [0x38] ():TBank
    int(__cdecl* m_TSmartSocket_GetState)(TSmartSocket* pThis); // [GetState at 0x78613D] [0x3C] ()i
    int(__cdecl* m_TSmartSocket_Update)(TSmartSocket* pThis); // [Update at 0x786159] [0x40] ()i
    int(__cdecl* m_TSmartSocket_UpdateSocket)(TSmartSocket* pThis); // [UpdateSocket at 0x7861F2] [0x44] ()i
    int(__cdecl* m_TSmartSocket_CloseConnection)(TSmartSocket* pThis); // [CloseConnection at 0x7866EC] [0x48] ()i
    int(__cdecl* fn_UpdateAll)(); // [UpdateAll at 0x786762] [0x4C] ()i
};


// 15 members
struct TSmartSocket {
    TSmartSocketDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_result; // 0x8 <type_$>
    int m_completed; // 0xC <type_i>
    int m_stage; // 0x10 <type_i>
    TSocket* m_Socket; // 0x14 <type_:TSocket>
    TSocketStream* m_Stream; // 0x18 <type_:TSocketStream>
    BBString* m_Line; // 0x1C <type_$>
    int m_ContentLength; // 0x20 <type_i>
    BBString* m_URL; // 0x24 <type_$>
    BBString* m_Path; // 0x28 <type_$>
    int m_StreamLoop; // 0x2C <type_i>
    TBank* m_Bank; // 0x30 <type_:TBank>
    int m_UseBank; // 0x34 <type_i>
    int m_Offset; // 0x38 <type_i>
    int m_age; // 0x3C <type_i>
    int m_ignoreEmptyResults; // 0x40 <type_i>
};


