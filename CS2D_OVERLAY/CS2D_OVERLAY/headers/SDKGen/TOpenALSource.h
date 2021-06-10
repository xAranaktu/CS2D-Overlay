#pragma once

#include "defines.h"

// 6 methods, 0 functions
struct TOpenALSourceDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_TOpenALSource_New)(TOpenALSource* pThis); // [New at 0x793570] [0x10] ()i
    int(__cdecl* m_TOpenALSource_Delete)(TOpenALSource* pThis); // [Delete at 0x7935BD] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TOpenALSource_Playing)(TOpenALSource* pThis); // [Playing at 0x7935F2] [0x30] ()i
    int(__cdecl* m_TOpenALSource_Paused)(TOpenALSource* pThis); // [Paused at 0x79362B] [0x34] ()i
    int(__cdecl* m_TOpenALSource_Active)(TOpenALSource* pThis); // [Active at 0x793677] [0x38] ()i
    int(__cdecl* m_TOpenALSource_LogState)(TOpenALSource* pThis); // [LogState at 0x7936D6] [0x3C] ()i
};


// 5 members
struct TOpenALSource {
    TOpenALSourceDecl* decl; // 0x0
    int    refs;  // 0x4
    TOpenALSource* m__succ; // 0x8 <type_:TOpenALSource>
    int m__id; // 0xC <type_i>
    int m__seq; // 0x10 <type_i>
    TOpenALSound* m__sound; // 0x14 <type_:TOpenALSound>
    int m__avail; // 0x18 <type_i>
};


