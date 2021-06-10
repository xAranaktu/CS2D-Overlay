#pragma once

#include "defines.h"

// 11 methods, 16 functions
struct TxmlCatalogDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TxmlCatalog_New)(TxmlCatalog* pThis); // [New at 0x78E225] [0x10] ()i
    int(__cdecl* m_TxmlCatalog_Delete)(TxmlCatalog* pThis); // [Delete at 0x78E24E] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TxmlCatalog*(__cdecl* fn__create)(void* a1); // [_create at 0x78E25C] [0x30] (*b):TxmlCatalog
    TxmlCatalog*(__cdecl* fn_newCatalog)(int a1); // [newCatalog at 0x78E286] [0x34] (i):TxmlCatalog
    TxmlCatalog*(__cdecl* fn_loadCatalog)(BBString* a1); // [loadCatalog at 0x78E2A5] [0x38] ($):TxmlCatalog
    int(__cdecl* fn_loadDefaultCatalg)(BBString* a1); // [loadDefaultCatalg at 0x78E2C4] [0x3C] ($)i
    TxmlCatalog*(__cdecl* fn_loadSGMLSuperCatalog)(BBString* a1); // [loadSGMLSuperCatalog at 0x78E2D9] [0x40] ($):TxmlCatalog
    int(__cdecl* fn_setDefaults)(int a1); // [setDefaults at 0x78E2F8] [0x44] (i)i
    int(__cdecl* fn_getDefaults)(); // [getDefaults at 0x78E312] [0x48] ()i
    int(__cdecl* fn_setDebug)(int a1); // [setDebug at 0x78E320] [0x4C] (i)i
    int(__cdecl* fn_setDefaultPrefer)(int a1); // [setDefaultPrefer at 0x78E335] [0x50] (i)i
    int(__cdecl* fn_addDefault)(BBString* a1, BBString* a2, BBString* a3); // [addDefault at 0x78E34A] [0x54] ($,$,$)i
    int(__cdecl* fn_convertDefault)(); // [convertDefault at 0x78E367] [0x58] ()i
    int(__cdecl* fn_defaultRemove)(BBString* a1); // [defaultRemove at 0x78E375] [0x5C] ($)i
    BBString*(__cdecl* fn_defaultResolve)(BBString* a1, BBString* a2); // [defaultResolve at 0x78E38A] [0x60] ($,$)$
    BBString*(__cdecl* fn_defaultResolvePublic)(BBString* a1); // [defaultResolvePublic at 0x78E3A3] [0x64] ($)$
    BBString*(__cdecl* fn_defaultResolveSystem)(BBString* a1); // [defaultResolveSystem at 0x78E3B8] [0x68] ($)$
    BBString*(__cdecl* fn_defaultResolveURI)(BBString* a1); // [defaultResolveURI at 0x78E3CD] [0x6C] ($)$
    int(__cdecl* m_TxmlCatalog_add)(TxmlCatalog* pThis, BBString* a1, BBString* a2, BBString* a3); // [add at 0x78E3E2] [0x70] ($,$,$)i
    int(__cdecl* m_TxmlCatalog_remove)(TxmlCatalog* pThis, BBString* a1); // [remove at 0x78E407] [0x74] ($)i
    BBString*(__cdecl* m_TxmlCatalog_resolve)(TxmlCatalog* pThis, BBString* a1, BBString* a2); // [resolve at 0x78E422] [0x78] ($,$)$
    BBString*(__cdecl* m_TxmlCatalog_resolvePublic)(TxmlCatalog* pThis, BBString* a1); // [resolvePublic at 0x78E441] [0x7C] ($)$
    BBString*(__cdecl* m_TxmlCatalog_resolveSystem)(TxmlCatalog* pThis, BBString* a1); // [resolveSystem at 0x78E45C] [0x80] ($)$
    int(__cdecl* m_TxmlCatalog_isEmpty)(TxmlCatalog* pThis); // [isEmpty at 0x78E477] [0x84] ()i
    int(__cdecl* m_TxmlCatalog_convertSGML)(TxmlCatalog* pThis); // [convertSGML at 0x78E48E] [0x88] ()i
    int(__cdecl* m_TxmlCatalog_dump)(TxmlCatalog* pThis, int a1); // [dump at 0x78E4A5] [0x8C] (i)i
    int(__cdecl* m_TxmlCatalog_free)(TxmlCatalog* pThis); // [free at 0x78E4C5] [0x90] ()i
};


// 1 members
struct TxmlCatalog {
    TxmlCatalogDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_xmlCatalogPtr; // 0x8 <type_*b>
};


