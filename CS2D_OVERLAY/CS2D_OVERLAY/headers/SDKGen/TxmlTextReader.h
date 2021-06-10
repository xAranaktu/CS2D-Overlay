#pragma once

#include "defines.h"

// 57 methods, 3 functions
struct TxmlTextReaderDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_TxmlTextReader_New)(TxmlTextReader* pThis); // [New at 0x78DA5B] [0x10] ()i
    int(__cdecl* m_TxmlTextReader_Delete)(TxmlTextReader* pThis); // [Delete at 0x78DA8B] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TxmlTextReader*(__cdecl* fn__create)(void* a1); // [_create at 0x78DAB6] [0x30] (*b):TxmlTextReader
    TxmlTextReader*(__cdecl* fn_fromFile)(BBString* a1, BBString* a2, int a3); // [fromFile at 0x78DAE0] [0x34] ($,$,i):TxmlTextReader
    TxmlTextReader*(__cdecl* fn_fromDoc)(BBString* a1, BBString* a2, BBString* a3, int a4); // [fromDoc at 0x78DBFB] [0x38] ($,$,$,i):TxmlTextReader
    int(__cdecl* m_TxmlTextReader_attributeCount)(TxmlTextReader* pThis); // [attributeCount at 0x78DC50] [0x3C] ()i
    BBString*(__cdecl* m_TxmlTextReader_baseUri)(TxmlTextReader* pThis); // [baseUri at 0x78DC67] [0x40] ()$
    TxmlDoc*(__cdecl* m_TxmlTextReader_currentDoc)(TxmlTextReader* pThis); // [currentDoc at 0x78DC7E] [0x44] ():TxmlDoc
    int(__cdecl* m_TxmlTextReader_free)(TxmlTextReader* pThis); // [free at 0x78DC9F] [0x48] ()i
    int(__cdecl* m_TxmlTextReader_read)(TxmlTextReader* pThis); // [read at 0x78DCBB] [0x4C] ()i
    int(__cdecl* m_TxmlTextReader_readAttributeValue)(TxmlTextReader* pThis); // [readAttributeValue at 0x78DCD2] [0x50] ()i
    BBString*(__cdecl* m_TxmlTextReader_readInnerXml)(TxmlTextReader* pThis); // [readInnerXml at 0x78DCE9] [0x54] ()$
    BBString*(__cdecl* m_TxmlTextReader_readOuterXml)(TxmlTextReader* pThis); // [readOuterXml at 0x78DD00] [0x58] ()$
    int(__cdecl* m_TxmlTextReader_readState)(TxmlTextReader* pThis); // [readState at 0x78DD17] [0x5C] ()i
    BBString*(__cdecl* m_TxmlTextReader_ReadString)(TxmlTextReader* pThis); // [ReadString at 0x78DD2E] [0x60] ()$
    BBString*(__cdecl* m_TxmlTextReader_constName)(TxmlTextReader* pThis); // [constName at 0x78DD45] [0x64] ()$
    BBString*(__cdecl* m_TxmlTextReader_constLocalName)(TxmlTextReader* pThis); // [constLocalName at 0x78DD5C] [0x68] ()$
    BBString*(__cdecl* m_TxmlTextReader_constEncoding)(TxmlTextReader* pThis); // [constEncoding at 0x78DD73] [0x6C] ()$
    BBString*(__cdecl* m_TxmlTextReader_constBaseUri)(TxmlTextReader* pThis); // [constBaseUri at 0x78DD8A] [0x70] ()$
    BBString*(__cdecl* m_TxmlTextReader_constNamespaceUri)(TxmlTextReader* pThis); // [constNamespaceUri at 0x78DDA1] [0x74] ()$
    BBString*(__cdecl* m_TxmlTextReader_constPrefix)(TxmlTextReader* pThis); // [constPrefix at 0x78DDB8] [0x78] ()$
    BBString*(__cdecl* m_TxmlTextReader_constValue)(TxmlTextReader* pThis); // [constValue at 0x78DDCF] [0x7C] ()$
    BBString*(__cdecl* m_TxmlTextReader_constXmlLang)(TxmlTextReader* pThis); // [constXmlLang at 0x78DDE6] [0x80] ()$
    BBString*(__cdecl* m_TxmlTextReader_constXmlVersion)(TxmlTextReader* pThis); // [constXmlVersion at 0x78DDFD] [0x84] ()$
    int(__cdecl* m_TxmlTextReader_depth)(TxmlTextReader* pThis); // [depth at 0x78DE14] [0x88] ()i
    TxmlNode*(__cdecl* m_TxmlTextReader_expand)(TxmlTextReader* pThis); // [expand at 0x78DE2B] [0x8C] ():TxmlNode
    BBString*(__cdecl* m_TxmlTextReader_getAttribute)(TxmlTextReader* pThis, BBString* a1); // [getAttribute at 0x78DE4C] [0x90] ($)$
    BBString*(__cdecl* m_TxmlTextReader_getAttributeByIndex)(TxmlTextReader* pThis, int a1); // [getAttributeByIndex at 0x78DE67] [0x94] (i)$
    BBString*(__cdecl* m_TxmlTextReader_getAttributeByNamespace)(TxmlTextReader* pThis, BBString* a1, BBString* a2); // [getAttributeByNamespace at 0x78DE82] [0x98] ($,$)$
    int(__cdecl* m_TxmlTextReader_getParserColumnNumber)(TxmlTextReader* pThis); // [getParserColumnNumber at 0x78DEA1] [0x9C] ()i
    int(__cdecl* m_TxmlTextReader_getParserLineNumber)(TxmlTextReader* pThis); // [getParserLineNumber at 0x78DEB8] [0xA0] ()i
    int(__cdecl* m_TxmlTextReader_getParserProperty)(TxmlTextReader* pThis, int a1); // [getParserProperty at 0x78DECF] [0xA4] (i)i
    int(__cdecl* m_TxmlTextReader_hasAttributes)(TxmlTextReader* pThis); // [hasAttributes at 0x78DEEA] [0xA8] ()i
    int(__cdecl* m_TxmlTextReader_hasValue)(TxmlTextReader* pThis); // [hasValue at 0x78DF01] [0xAC] ()i
    int(__cdecl* m_TxmlTextReader_isDefault)(TxmlTextReader* pThis); // [isDefault at 0x78DF18] [0xB0] ()i
    int(__cdecl* m_TxmlTextReader_isEmptyElement)(TxmlTextReader* pThis); // [isEmptyElement at 0x78DF2F] [0xB4] ()i
    int(__cdecl* m_TxmlTextReader_isNamespaceDecl)(TxmlTextReader* pThis); // [isNamespaceDecl at 0x78DF46] [0xB8] ()i
    int(__cdecl* m_TxmlTextReader_isValid)(TxmlTextReader* pThis); // [isValid at 0x78DF5D] [0xBC] ()i
    BBString*(__cdecl* m_TxmlTextReader_localName)(TxmlTextReader* pThis); // [localName at 0x78DF74] [0xC0] ()$
    BBString*(__cdecl* m_TxmlTextReader_lookupNamespace)(TxmlTextReader* pThis, BBString* a1); // [lookupNamespace at 0x78DF8B] [0xC4] ($)$
    int(__cdecl* m_TxmlTextReader_moveToAttribute)(TxmlTextReader* pThis, BBString* a1); // [moveToAttribute at 0x78DFA6] [0xC8] ($)i
    int(__cdecl* m_TxmlTextReader_moveToAttributeByIndex)(TxmlTextReader* pThis, int a1); // [moveToAttributeByIndex at 0x78DFC1] [0xCC] (i)i
    int(__cdecl* m_TxmlTextReader_moveToAttributeByNamespace)(TxmlTextReader* pThis, BBString* a1, BBString* a2); // [moveToAttributeByNamespace at 0x78DFDC] [0xD0] ($,$)i
    int(__cdecl* m_TxmlTextReader_moveToElement)(TxmlTextReader* pThis); // [moveToElement at 0x78DFFB] [0xD4] ()i
    int(__cdecl* m_TxmlTextReader_moveToFirstAttribute)(TxmlTextReader* pThis); // [moveToFirstAttribute at 0x78E012] [0xD8] ()i
    int(__cdecl* m_TxmlTextReader_moveToNextAttribute)(TxmlTextReader* pThis); // [moveToNextAttribute at 0x78E029] [0xDC] ()i
    BBString*(__cdecl* m_TxmlTextReader_name)(TxmlTextReader* pThis); // [name at 0x78E040] [0xE0] ()$
    BBString*(__cdecl* m_TxmlTextReader_namespaceUri)(TxmlTextReader* pThis); // [namespaceUri at 0x78E057] [0xE4] ()$
    int(__cdecl* m_TxmlTextReader_nextNode)(TxmlTextReader* pThis); // [nextNode at 0x78E06E] [0xE8] ()i
    int(__cdecl* m_TxmlTextReader_nodeType)(TxmlTextReader* pThis); // [nodeType at 0x78E085] [0xEC] ()i
    int(__cdecl* m_TxmlTextReader_normalization)(TxmlTextReader* pThis); // [normalization at 0x78E09C] [0xF0] ()i
    BBString*(__cdecl* m_TxmlTextReader_prefix)(TxmlTextReader* pThis); // [prefix at 0x78E0B3] [0xF4] ()$
    TxmlNode*(__cdecl* m_TxmlTextReader_preserve)(TxmlTextReader* pThis); // [preserve at 0x78E0CA] [0xF8] ():TxmlNode
    BBString*(__cdecl* m_TxmlTextReader_quoteChar)(TxmlTextReader* pThis); // [quoteChar at 0x78E0EB] [0xFC] ()$
    int(__cdecl* m_TxmlTextReader_relaxNGValidate)(TxmlTextReader* pThis, BBString* a1); // [relaxNGValidate at 0x78E11F] [0x100] ($)i
    int(__cdecl* m_TxmlTextReader_schemaValidate)(TxmlTextReader* pThis, BBString* a1); // [schemaValidate at 0x78E13A] [0x104] ($)i
    int(__cdecl* m_TxmlTextReader_setParserProp)(TxmlTextReader* pThis, int a1, int a2); // [setParserProp at 0x78E155] [0x108] (i,i)i
    int(__cdecl* m_TxmlTextReader_standalone)(TxmlTextReader* pThis); // [standalone at 0x78E174] [0x10C] ()i
    BBString*(__cdecl* m_TxmlTextReader_value)(TxmlTextReader* pThis); // [value at 0x78E18B] [0x110] ()$
    BBString*(__cdecl* m_TxmlTextReader_xmlLang)(TxmlTextReader* pThis); // [xmlLang at 0x78E1A2] [0x114] ()$
};


// 2 members
struct TxmlTextReader {
    TxmlTextReaderDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_xmlTextReaderPtr; // 0x8 <type_*b>
    void* m_docTextPtr; // 0xC <type_*b>
};


