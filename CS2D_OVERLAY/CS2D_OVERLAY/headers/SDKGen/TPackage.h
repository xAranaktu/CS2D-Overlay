#pragma once

#include "defines.h"

// 2 methods, 5 functions
struct TPackageDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_TPackage_New)(TPackage* pThis); // [New at 0x759A8A] [0x10] ()i
    int(__cdecl* m_TPackage_Delete)(TPackage* pThis); // [Delete at 0x759AC2] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_LoadPackages)(); // [LoadPackages at 0x759AF7] [0x30] ()i
    TPackage*(__cdecl* fn_Create)(BBString* a1); // [Create at 0x759B5B] [0x34] ($):TPackage
    int(__cdecl* fn_ImportData)(BBString* a1); // [ImportData at 0x759BA2] [0x38] ($)i
    int(__cdecl* fn_ExportData)(BBString* a1, BBString* a2); // [ExportData at 0x759D1F] [0x3C] ($,$)i
    TBank*(__cdecl* fn_LoadFile)(BBString* a1); // [LoadFile at 0x759EE0] [0x40] ($):TBank
};


// 2 members
struct TPackage {
    TPackageDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_path; // 0x8 <type_$>
    TBank* m_data; // 0xC <type_:TBank>
};


