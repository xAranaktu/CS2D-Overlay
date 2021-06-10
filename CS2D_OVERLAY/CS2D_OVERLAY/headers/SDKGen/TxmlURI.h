#pragma once

#include "defines.h"

// 14 methods, 10 functions
struct TxmlURIDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TxmlURI_New)(TxmlURI* pThis); // [New at 0x78E5B7] [0x10] ()i
    int(__cdecl* m_TxmlURI_Delete)(TxmlURI* pThis); // [Delete at 0x78E5E0] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TxmlURI*(__cdecl* fn__create)(void* a1); // [_create at 0x78E5EE] [0x30] (*b):TxmlURI
    TxmlURI*(__cdecl* fn_createURI)(); // [createURI at 0x78E618] [0x34] ():TxmlURI
    TxmlURI*(__cdecl* fn_parseURI)(BBString* a1); // [parseURI at 0x78E630] [0x38] ($):TxmlURI
    TxmlURI*(__cdecl* fn_parseURIRaw)(BBString* a1, int a2); // [parseURIRaw at 0x78E64F] [0x3C] ($,i):TxmlURI
    BBString*(__cdecl* fn_buildURI)(BBString* a1, BBString* a2); // [buildURI at 0x78E672] [0x40] ($,$)$
    BBString*(__cdecl* fn_canonicPath)(BBString* a1); // [canonicPath at 0x78E68B] [0x44] ($)$
    BBString*(__cdecl* fn_normalizeURIPath)(BBString* a1); // [normalizeURIPath at 0x78E6A0] [0x48] ($)$
    BBString*(__cdecl* fn_URIEscape)(BBString* a1); // [URIEscape at 0x78E6B5] [0x4C] ($)$
    BBString*(__cdecl* fn_URIEscapeString)(BBString* a1, BBString* a2); // [URIEscapeString at 0x78E6CA] [0x50] ($,$)$
    BBString*(__cdecl* fn_URIUnescapeString)(BBString* a1); // [URIUnescapeString at 0x78E6E3] [0x54] ($)$
    int(__cdecl* m_TxmlURI_parseURIReference)(TxmlURI* pThis, BBString* a1); // [parseURIReference at 0x78E6F8] [0x58] ($)i
    BBString*(__cdecl* m_TxmlURI_saveURI)(TxmlURI* pThis); // [saveURI at 0x78E713] [0x5C] ()$
    BBString*(__cdecl* m_TxmlURI_getScheme)(TxmlURI* pThis); // [getScheme at 0x78E72A] [0x60] ()$
    BBString*(__cdecl* m_TxmlURI_getOpaque)(TxmlURI* pThis); // [getOpaque at 0x78E741] [0x64] ()$
    BBString*(__cdecl* m_TxmlURI_getAuthority)(TxmlURI* pThis); // [getAuthority at 0x78E758] [0x68] ()$
    BBString*(__cdecl* m_TxmlURI_getServer)(TxmlURI* pThis); // [getServer at 0x78E76F] [0x6C] ()$
    BBString*(__cdecl* m_TxmlURI_getUser)(TxmlURI* pThis); // [getUser at 0x78E786] [0x70] ()$
    int(__cdecl* m_TxmlURI_getPort)(TxmlURI* pThis); // [getPort at 0x78E79D] [0x74] ()i
    BBString*(__cdecl* m_TxmlURI_GetPath)(TxmlURI* pThis); // [GetPath at 0x78E7B4] [0x78] ()$
    BBString*(__cdecl* m_TxmlURI_getQuery)(TxmlURI* pThis); // [getQuery at 0x78E7CB] [0x7C] ()$
    BBString*(__cdecl* m_TxmlURI_getFragment)(TxmlURI* pThis); // [getFragment at 0x78E7E2] [0x80] ()$
    int(__cdecl* m_TxmlURI_free)(TxmlURI* pThis); // [free at 0x78E7F9] [0x84] ()i
};


// 1 members
struct TxmlURI {
    TxmlURIDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_xmlURIPtr; // 0x8 <type_*b>
};


