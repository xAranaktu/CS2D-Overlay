#pragma once

#include "defines.h"

// 45 methods, 9 functions
struct TxmlDocDecl {
    void* pSuper;  // 0x0 0x8DDD90
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_TxmlDoc_New)(TxmlDoc* pThis); // [New at 0x78B58B] [0x10] ()i
    int(__cdecl* m_TxmlDoc_Delete)(TxmlDoc* pThis); // [Delete at 0x78B5B8] [0x14] ()i
    BBString*(__cdecl* m_TxmlDoc_ToString)(TxmlDoc* pThis); // [ToString at 0x78BE24] [0x18] ()$
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    void* nothing_12; // 0x34
    void* nothing_13; // 0x38
    void* nothing_14; // 0x3C
    void* nothing_15; // 0x40
    void* nothing_16; // 0x44
    void* nothing_17; // 0x48
    void* nothing_18; // 0x4C
    void* nothing_19; // 0x50
    void* nothing_20; // 0x54
    void* nothing_21; // 0x58
    TxmlDoc*(__cdecl* fn_newDoc)(BBString* a1); // [newDoc at 0x78B5EB] [0x5C] ($):TxmlDoc
    TxmlDoc*(__cdecl* fn_parseFile)(BBString* a1); // [parseFile at 0x78B61E] [0x60] ($):TxmlDoc
    TxmlDoc*(__cdecl* fn_parseDoc)(BBString* a1); // [parseDoc at 0x78B6E1] [0x64] ($):TxmlDoc
    TxmlDoc*(__cdecl* fn_ReadFile)(BBString* a1, BBString* a2, int a3); // [ReadFile at 0x78B732] [0x68] ($,$,i):TxmlDoc
    TxmlDoc*(__cdecl* fn_ReadDoc)(Object* a1, BBString* a2, BBString* a3, int a4); // [ReadDoc at 0x78B855] [0x6C] (:Object,$,$,i):TxmlDoc
    int(__cdecl* fn__xmlInputReadCallback)(Object* a1, void* a2, int a3); // [_xmlInputReadCallback at 0x78BA3C] [0x70] (:Object,*b,i)i
    int(__cdecl* fn__xmlInputCloseCallback)(Object* a1); // [_xmlInputCloseCallback at 0x78BA6E] [0x74] (:Object)i
    TxmlDoc*(__cdecl* fn_parseCatalogFile)(BBString* a1); // [parseCatalogFile at 0x78BA7C] [0x78] ($):TxmlDoc
    TxmlDoc*(__cdecl* fn__create)(void* a1); // [_create at 0x78BA9B] [0x7C] (*b):TxmlDoc
    BBString*(__cdecl* m_TxmlDoc_getURL)(TxmlDoc* pThis); // [getURL at 0x78BAC5] [0x80] ()$
    TxmlNode*(__cdecl* m_TxmlDoc_getRootElement)(TxmlDoc* pThis); // [getRootElement at 0x78BADC] [0x84] ():TxmlNode
    TxmlNode*(__cdecl* m_TxmlDoc_setRootElement)(TxmlDoc* pThis, TxmlNode* a1); // [setRootElement at 0x78BAFD] [0x88] (:TxmlNode):TxmlNode
    int(__cdecl* m_TxmlDoc_free)(TxmlDoc* pThis); // [free at 0x78BB24] [0x8C] ()i
    BBString*(__cdecl* m_TxmlDoc_getVersion)(TxmlDoc* pThis); // [getVersion at 0x78BB40] [0x90] ()$
    BBString*(__cdecl* m_TxmlDoc_getEncoding)(TxmlDoc* pThis); // [getEncoding at 0x78BB57] [0x94] ()$
    int(__cdecl* m_TxmlDoc_setEncoding)(TxmlDoc* pThis, BBString* a1); // [setEncoding at 0x78BB6E] [0x98] ($)i
    int(__cdecl* m_TxmlDoc_isStandalone)(TxmlDoc* pThis); // [isStandalone at 0x78BB8E] [0x9C] ()i
    int(__cdecl* m_TxmlDoc_setStandalone)(TxmlDoc* pThis, int a1); // [setStandalone at 0x78BBA5] [0xA0] (i)i
    TxmlNode*(__cdecl* m_TxmlDoc_addProcessingInstruction)(TxmlDoc* pThis, BBString* a1, BBString* a2); // [addProcessingInstruction at 0x78BBC5] [0xA4] ($,$):TxmlNode
    TxmlAttribute*(__cdecl* m_TxmlDoc_addProperty)(TxmlDoc* pThis, BBString* a1, BBString* a2); // [addProperty at 0x78BBEE] [0xA8] ($,$):TxmlAttribute
    int(__cdecl* m_TxmlDoc_setCompressMode)(TxmlDoc* pThis, int a1); // [setCompressMode at 0x78BC17] [0xAC] (i)i
    int(__cdecl* m_TxmlDoc_getCompressMode)(TxmlDoc* pThis); // [getCompressMode at 0x78BC4F] [0xB0] ()i
    int(__cdecl* m_TxmlDoc_saveFile)(TxmlDoc* pThis, Object* a1, int a2, BBString* a3); // [saveFile at 0x78BC66] [0xB4] (:Object,i,$)i
    int(__cdecl* m_TxmlDoc_saveFormatFile)(TxmlDoc* pThis, Object* a1, int a2, BBString* a3, int a4); // [saveFormatFile at 0x78BD44] [0xB8] (:Object,i,$,i)i
    BBString*(__cdecl* m_TxmlDoc_ToStringFormat)(TxmlDoc* pThis, int a1); // [ToStringFormat at 0x78BE75] [0xBC] (i)$
    TxmlXPathContext*(__cdecl* m_TxmlDoc_newXPathContext)(TxmlDoc* pThis); // [newXPathContext at 0x78BECA] [0xC0] ():TxmlXPathContext
    BBString*(__cdecl* m_TxmlDoc_encodeEntities)(TxmlDoc* pThis, BBString* a1); // [encodeEntities at 0x78BEEB] [0xC4] ($)$
    TxmlDtd*(__cdecl* m_TxmlDoc_createInternalSubset)(TxmlDoc* pThis, BBString* a1, BBString* a2, BBString* a3); // [createInternalSubset at 0x78BF07] [0xC8] ($,$,$):TxmlDtd
    TxmlDtd*(__cdecl* m_TxmlDoc_getInternalSubset)(TxmlDoc* pThis); // [getInternalSubset at 0x78BF36] [0xCC] ():TxmlDtd
    TxmlDtd*(__cdecl* m_TxmlDoc_createExternalSubset)(TxmlDoc* pThis, BBString* a1, BBString* a2, BBString* a3); // [createExternalSubset at 0x78BF57] [0xD0] ($,$,$):TxmlDtd
    long long(__cdecl* m_TxmlDoc_XPathOrderElements)(TxmlDoc* pThis); // [XPathOrderElements at 0x78BF86] [0xD4] ()l
    TxmlDoc*(__cdecl* m_TxmlDoc_copy)(TxmlDoc* pThis, int a1); // [copy at 0x78BFCE] [0xD8] (i):TxmlDoc
    TxmlEntity*(__cdecl* m_TxmlDoc_addDocEntity)(TxmlDoc* pThis, BBString* a1, int a2, BBString* a3, BBString* a4, BBString* a5); // [addDocEntity at 0x78BFF3] [0xDC] ($,i,$,$,$):TxmlEntity
    TxmlEntity*(__cdecl* m_TxmlDoc_addDtdEntity)(TxmlDoc* pThis, BBString* a1, int a2, BBString* a3, BBString* a4, BBString* a5); // [addDtdEntity at 0x78C02E] [0xE0] ($,i,$,$,$):TxmlEntity
    BBString*(__cdecl* m_TxmlDoc_encodeEntitiesReentrant)(TxmlDoc* pThis, BBString* a1); // [encodeEntitiesReentrant at 0x78C069] [0xE4] ($)$
    BBString*(__cdecl* m_TxmlDoc_encodeSpecialChars)(TxmlDoc* pThis, BBString* a1); // [encodeSpecialChars at 0x78C084] [0xE8] ($)$
    TxmlEntity*(__cdecl* m_TxmlDoc_getDocEntity)(TxmlDoc* pThis, BBString* a1); // [getDocEntity at 0x78C09F] [0xEC] ($):TxmlEntity
    TxmlEntity*(__cdecl* m_TxmlDoc_getDtdEntity)(TxmlDoc* pThis, BBString* a1); // [getDtdEntity at 0x78C0C4] [0xF0] ($):TxmlEntity
    TxmlEntity*(__cdecl* m_TxmlDoc_getParameterEntity)(TxmlDoc* pThis, BBString* a1); // [getParameterEntity at 0x78C0E9] [0xF4] ($):TxmlEntity
    int(__cdecl* m_TxmlDoc_XIncludeProcess)(TxmlDoc* pThis); // [XIncludeProcess at 0x78C10E] [0xF8] ()i
    int(__cdecl* m_TxmlDoc_XIncludeProcessFlags)(TxmlDoc* pThis, int a1); // [XIncludeProcessFlags at 0x78C125] [0xFC] (i)i
    TxmlAttribute*(__cdecl* m_TxmlDoc_getID)(TxmlDoc* pThis, BBString* a1); // [getID at 0x78C140] [0x100] ($):TxmlAttribute
    int(__cdecl* m_TxmlDoc_isID)(TxmlDoc* pThis, TxmlNode* a1, TxmlAttribute* a2); // [isID at 0x78C165] [0x104] (:TxmlNode,:TxmlAttribute)i
    int(__cdecl* m_TxmlDoc_isRef)(TxmlDoc* pThis, TxmlNode* a1, TxmlAttribute* a2); // [isRef at 0x78C188] [0x108] (:TxmlNode,:TxmlAttribute)i
    int(__cdecl* m_TxmlDoc_isMixedElement)(TxmlDoc* pThis, BBString* a1); // [isMixedElement at 0x78C1AB] [0x10C] ($)i
    int(__cdecl* m_TxmlDoc_removeID)(TxmlDoc* pThis, TxmlAttribute* a1); // [removeID at 0x78C1C6] [0x110] (:TxmlAttribute)i
    int(__cdecl* m_TxmlDoc_removeRef)(TxmlDoc* pThis, TxmlAttribute* a1); // [removeRef at 0x78C1E3] [0x114] (:TxmlAttribute)i
    TxmlElementContent*(__cdecl* m_TxmlDoc_newDocElementContent)(TxmlDoc* pThis, BBString* a1, int a2); // [newDocElementContent at 0x78C200] [0x118] ($,i):TxmlElementContent
    int(__cdecl* m_TxmlDoc_freeDocElementContent)(TxmlDoc* pThis, TxmlElementContent* a1); // [freeDocElementContent at 0x78C229] [0x11C] (:TxmlElementContent)i
    BBString*(__cdecl* m_TxmlDoc_contextNormalizeAttributeValue)(TxmlDoc* pThis, TxmlNode* a1, BBString* a2, BBString* a3, TxmlValidCtxt* a4); // [contextNormalizeAttributeValue at 0x78C24B] [0x120] (:TxmlNode,$,$,:TxmlValidCtxt)$
    BBString*(__cdecl* m_TxmlDoc_normalizeAttributeValue)(TxmlDoc* pThis, TxmlNode* a1, BBString* a2, BBString* a3); // [normalizeAttributeValue at 0x78C295] [0x124] (:TxmlNode,$,$)$
};


// Super: 0x8DDD90
// 1 members
struct TxmlDoc {
    TxmlDocDecl* decl; // 0x0
    int    refs;  // 0x4
    TStream* m__readStream; // 0xC <type_:TStream>
};


