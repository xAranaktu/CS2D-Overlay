#pragma once

#include "defines.h"

// 19 methods, 2 functions
struct TxmlXPathContextDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TxmlXPathContext_New)(TxmlXPathContext* pThis); // [New at 0x78D387] [0x10] ()i
    int(__cdecl* m_TxmlXPathContext_Delete)(TxmlXPathContext* pThis); // [Delete at 0x78D3B0] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TxmlXPathContext*(__cdecl* fn__create)(void* a1); // [_create at 0x78D3BE] [0x30] (*b):TxmlXPathContext
    TxmlXPathContext*(__cdecl* fn_XPointerNewContext)(TxmlDoc* a1, TxmlNode* a2, TxmlNode* a3); // [XPointerNewContext at 0x78D3E8] [0x34] (:TxmlDoc,:TxmlNode,:TxmlNode):TxmlXPathContext
    TxmlXPathObject*(__cdecl* m_TxmlXPathContext_evalExpression)(TxmlXPathContext* pThis, BBString* a1); // [evalExpression at 0x78D47E] [0x38] ($):TxmlXPathObject
    TxmlXPathObject*(__cdecl* m_TxmlXPathContext_eval)(TxmlXPathContext* pThis, BBString* a1); // [eval at 0x78D4A3] [0x3C] ($):TxmlXPathObject
    TxmlDoc*(__cdecl* m_TxmlXPathContext_getDocument)(TxmlXPathContext* pThis); // [getDocument at 0x78D4C8] [0x40] ():TxmlDoc
    TxmlNode*(__cdecl* m_TxmlXPathContext_GetNode)(TxmlXPathContext* pThis); // [GetNode at 0x78D4E9] [0x44] ():TxmlNode
    int(__cdecl* m_TxmlXPathContext_registerNamespace)(TxmlXPathContext* pThis, BBString* a1, BBString* a2); // [registerNamespace at 0x78D50A] [0x48] ($,$)i
    int(__cdecl* m_TxmlXPathContext_evalPredicate)(TxmlXPathContext* pThis, TxmlXPathObject* a1); // [evalPredicate at 0x78D529] [0x4C] (:TxmlXPathObject)i
    TxmlXPathObject*(__cdecl* m_TxmlXPathContext_XPointerEval)(TxmlXPathContext* pThis, BBString* a1); // [XPointerEval at 0x78D553] [0x50] ($):TxmlXPathObject
    int(__cdecl* m_TxmlXPathContext_countDefinedTypes)(TxmlXPathContext* pThis); // [countDefinedTypes at 0x78D578] [0x54] ()i
    int(__cdecl* m_TxmlXPathContext_getMaxTypes)(TxmlXPathContext* pThis); // [getMaxTypes at 0x78D58F] [0x58] ()i
    int(__cdecl* m_TxmlXPathContext_getContextSize)(TxmlXPathContext* pThis); // [getContextSize at 0x78D5A6] [0x5C] ()i
    int(__cdecl* m_TxmlXPathContext_getProximityPosition)(TxmlXPathContext* pThis); // [getProximityPosition at 0x78D5BD] [0x60] ()i
    int(__cdecl* m_TxmlXPathContext_isXPointerContext)(TxmlXPathContext* pThis); // [isXPointerContext at 0x78D5D4] [0x64] ()i
    TxmlNode*(__cdecl* m_TxmlXPathContext_getHere)(TxmlXPathContext* pThis); // [getHere at 0x78D5EB] [0x68] ():TxmlNode
    TxmlNode*(__cdecl* m_TxmlXPathContext_GetOrigin)(TxmlXPathContext* pThis); // [GetOrigin at 0x78D60C] [0x6C] ():TxmlNode
    BBString*(__cdecl* m_TxmlXPathContext_getFunction)(TxmlXPathContext* pThis); // [getFunction at 0x78D62D] [0x70] ()$
    BBString*(__cdecl* m_TxmlXPathContext_getFunctionURI)(TxmlXPathContext* pThis); // [getFunctionURI at 0x78D644] [0x74] ()$
    int(__cdecl* m_TxmlXPathContext_free)(TxmlXPathContext* pThis); // [free at 0x78D65B] [0x78] ()i
};


// 1 members
struct TxmlXPathContext {
    TxmlXPathContextDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_xmlXPathContextPtr; // 0x8 <type_*b>
};


