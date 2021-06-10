#pragma once

#include "defines.h"

// 54 methods, 2 functions
struct TxmlNodeDecl {
    void* pSuper;  // 0x0 0x8DDD90
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TxmlNode_New)(TxmlNode* pThis); // [New at 0x78C2BC] [0x10] ()i
    int(__cdecl* m_TxmlNode_Delete)(TxmlNode* pThis); // [Delete at 0x78C2DE] [0x14] ()i
    BBString*(__cdecl* m_TxmlNode_toString)(TxmlNode* pThis); // [toString at 0x78C9A1] [0x18] ()$
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
    TxmlBase*(__cdecl* m_TxmlNode_getLastChild)(TxmlNode* pThis, int a1); // [getLastChild at 0x78C96F] [0x4C] (i):TxmlBase
    TxmlBase*(__cdecl* m_TxmlNode_getFirstChild)(TxmlNode* pThis, int a1); // [getFirstChild at 0x78C988] [0x50] (i):TxmlBase
    void* nothing_20; // 0x54
    void* nothing_21; // 0x58
    TxmlNode*(__cdecl* fn__create)(void* a1); // [_create at 0x78C2FE] [0x5C] (*b):TxmlNode
    TxmlNode*(__cdecl* fn_newNode)(BBString* a1, TxmlNs* a2); // [newNode at 0x78C328] [0x60] ($,:TxmlNs):TxmlNode
    BBString*(__cdecl* m_TxmlNode_getContent)(TxmlNode* pThis); // [getContent at 0x78C36B] [0x64] ()$
    int(__cdecl* m_TxmlNode_concatText)(TxmlNode* pThis, BBString* a1); // [concatText at 0x78C382] [0x68] ($)i
    int(__cdecl* m_TxmlNode_isText)(TxmlNode* pThis); // [isText at 0x78C39D] [0x6C] ()i
    int(__cdecl* m_TxmlNode_isBlankNode)(TxmlNode* pThis); // [isBlankNode at 0x78C3B4] [0x70] ()i
    int(__cdecl* m_TxmlNode_setBase)(TxmlNode* pThis, BBString* a1); // [setBase at 0x78C3CB] [0x74] ($)i
    BBString*(__cdecl* m_TxmlNode_getBase)(TxmlNode* pThis); // [getBase at 0x78C3EB] [0x78] ()$
    int(__cdecl* m_TxmlNode_setContent)(TxmlNode* pThis, BBString* a1); // [setContent at 0x78C40E] [0x7C] ($)i
    int(__cdecl* m_TxmlNode_addContent)(TxmlNode* pThis, BBString* a1); // [addContent at 0x78C42E] [0x80] ($)i
    int(__cdecl* m_TxmlNode_setName)(TxmlNode* pThis, BBString* a1); // [setName at 0x78C44E] [0x84] ($)i
    TxmlNode*(__cdecl* m_TxmlNode_textMerge)(TxmlNode* pThis, TxmlNode* a1); // [textMerge at 0x78C46E] [0x88] (:TxmlNode):TxmlNode
    TxmlNode*(__cdecl* m_TxmlNode_addChild)(TxmlNode* pThis, BBString* a1, TxmlNs* a2, BBString* a3); // [addChild at 0x78C49F] [0x8C] ($,:TxmlNs,$):TxmlNode
    TxmlNode*(__cdecl* m_TxmlNode_addTextChild)(TxmlNode* pThis, BBString* a1, TxmlNs* a2, BBString* a3); // [addTextChild at 0x78C4E9] [0x90] ($,:TxmlNs,$):TxmlNode
    TxmlNode*(__cdecl* m_TxmlNode_addChildList)(TxmlNode* pThis, TList* a1); // [addChildList at 0x78C533] [0x94] (:TList):TxmlNode
    TxmlNode*(__cdecl* m_TxmlNode_addNextSibling)(TxmlNode* pThis, TxmlNode* a1); // [addNextSibling at 0x78C5E8] [0x98] (:TxmlNode):TxmlNode
    TxmlNode*(__cdecl* m_TxmlNode_addPreviousSibling)(TxmlNode* pThis, TxmlNode* a1); // [addPreviousSibling at 0x78C60F] [0x9C] (:TxmlNode):TxmlNode
    TxmlNode*(__cdecl* m_TxmlNode_addSibling)(TxmlNode* pThis, TxmlNode* a1); // [addSibling at 0x78C636] [0xA0] (:TxmlNode):TxmlNode
    TxmlAttribute*(__cdecl* m_TxmlNode_addAttribute)(TxmlNode* pThis, BBString* a1, BBString* a2); // [addAttribute at 0x78C65D] [0xA4] ($,$):TxmlAttribute
    TxmlAttribute*(__cdecl* m_TxmlNode_setAttribute)(TxmlNode* pThis, BBString* a1, BBString* a2); // [setAttribute at 0x78C686] [0xA8] ($,$):TxmlAttribute
    TxmlAttribute*(__cdecl* m_TxmlNode_setNsAttribute)(TxmlNode* pThis, TxmlNs* a1, BBString* a2, BBString* a3); // [setNsAttribute at 0x78C6AF] [0xAC] (:TxmlNs,$,$):TxmlAttribute
    int(__cdecl* m_TxmlNode_unsetNsAttribute)(TxmlNode* pThis, TxmlNs* a1, BBString* a2); // [unsetNsAttribute at 0x78C6E0] [0xB0] (:TxmlNs,$)i
    int(__cdecl* m_TxmlNode_unsetAttribute)(TxmlNode* pThis, BBString* a1); // [unsetAttribute at 0x78C701] [0xB4] ($)i
    BBString*(__cdecl* m_TxmlNode_getAttribute)(TxmlNode* pThis, BBString* a1); // [getAttribute at 0x78C71C] [0xB8] ($)$
    BBString*(__cdecl* m_TxmlNode_getNsAttribute)(TxmlNode* pThis, BBString* a1, BBString* a2); // [getNsAttribute at 0x78C737] [0xBC] ($,$)$
    BBString*(__cdecl* m_TxmlNode_getNoNsAttribute)(TxmlNode* pThis, BBString* a1); // [getNoNsAttribute at 0x78C756] [0xC0] ($)$
    TxmlAttribute*(__cdecl* m_TxmlNode_hasNsAttribute)(TxmlNode* pThis, BBString* a1, BBString* a2); // [hasNsAttribute at 0x78C771] [0xC4] ($,$):TxmlAttribute
    TxmlAttribute*(__cdecl* m_TxmlNode_hasAttribute)(TxmlNode* pThis, BBString* a1); // [hasAttribute at 0x78C79A] [0xC8] ($):TxmlAttribute
    BBString*(__cdecl* m_TxmlNode_getNodePath)(TxmlNode* pThis); // [getNodePath at 0x78C7BF] [0xCC] ()$
    TxmlNode*(__cdecl* m_TxmlNode_replaceNode)(TxmlNode* pThis, TxmlNode* a1); // [replaceNode at 0x78C7D6] [0xD0] (:TxmlNode):TxmlNode
    int(__cdecl* m_TxmlNode_setNamespace)(TxmlNode* pThis, TxmlNs* a1); // [setNamespace at 0x78C7FD] [0xD4] (:TxmlNs)i
    int(__cdecl* m_TxmlNode_setSpacePreserve)(TxmlNode* pThis, int a1); // [setSpacePreserve at 0x78C81F] [0xD8] (i)i
    int(__cdecl* m_TxmlNode_getSpacePreserve)(TxmlNode* pThis); // [getSpacePreserve at 0x78C849] [0xDC] ()i
    int(__cdecl* m_TxmlNode_setLanguage)(TxmlNode* pThis, BBString* a1); // [setLanguage at 0x78C860] [0xE0] ($)i
    BBString*(__cdecl* m_TxmlNode_GetLanguage)(TxmlNode* pThis); // [GetLanguage at 0x78C880] [0xE4] ()$
    TxmlNode*(__cdecl* m_TxmlNode_addComment)(TxmlNode* pThis, BBString* a1); // [addComment at 0x78C897] [0xE8] ($):TxmlNode
    TxmlNode*(__cdecl* m_TxmlNode_addCDataBlock)(TxmlNode* pThis, BBString* a1); // [addCDataBlock at 0x78C8D3] [0xEC] ($):TxmlNode
    BBString*(__cdecl* m_TxmlNode_GetText)(TxmlNode* pThis); // [GetText at 0x78C912] [0xF0] ()$
    TxmlNode*(__cdecl* m_TxmlNode_nextNode)(TxmlNode* pThis); // [nextNode at 0x78C929] [0xF4] ():TxmlNode
    TxmlNode*(__cdecl* m_TxmlNode_previousNode)(TxmlNode* pThis); // [previousNode at 0x78C94C] [0xF8] ():TxmlNode
    TxmlNs*(__cdecl* m_TxmlNode_searchNamespace)(TxmlNode* pThis, BBString* a1); // [searchNamespace at 0x78C9E1] [0xFC] ($):TxmlNs
    TxmlNs*(__cdecl* m_TxmlNode_searchNsByHref)(TxmlNode* pThis, BBString* a1); // [searchNsByHref at 0x78CA06] [0x100] ($):TxmlNs
    TxmlNode*(__cdecl* m_TxmlNode_copy)(TxmlNode* pThis, int a1); // [copy at 0x78CA2B] [0x104] (i):TxmlNode
    TxmlNode*(__cdecl* m_TxmlNode_copyToDoc)(TxmlNode* pThis, TxmlDoc* a1, int a2); // [copyToDoc at 0x78CA50] [0x108] (:TxmlDoc,i):TxmlNode
    int(__cdecl* m_TxmlNode_setTreeDoc)(TxmlNode* pThis, TxmlDoc* a1); // [setTreeDoc at 0x78CA7B] [0x10C] (:TxmlDoc)i
    int(__cdecl* m_TxmlNode_XIncludeProcessTree)(TxmlNode* pThis); // [XIncludeProcessTree at 0x78CA9D] [0x110] ()i
    int(__cdecl* m_TxmlNode_XIncludeProcessTreeFlags)(TxmlNode* pThis, int a1); // [XIncludeProcessTreeFlags at 0x78CAB4] [0x114] (i)i
    TxmlNs*(__cdecl* m_TxmlNode_getNamespace)(TxmlNode* pThis); // [getNamespace at 0x78CACF] [0x118] ():TxmlNs
    TList*(__cdecl* m_TxmlNode_getAttributeList)(TxmlNode* pThis); // [getAttributeList at 0x78CAF0] [0x11C] ():TList
    int(__cdecl* m_TxmlNode_unlinkNode)(TxmlNode* pThis); // [unlinkNode at 0x78CB48] [0x120] ()i
    int(__cdecl* m_TxmlNode_freeNode)(TxmlNode* pThis); // [freeNode at 0x78CB64] [0x124] ()i
};


// Super: 0x8DDD90
// 0 members
struct TxmlNode {
    TxmlNodeDecl* decl; // 0x0
    int    refs;  // 0x4
};


