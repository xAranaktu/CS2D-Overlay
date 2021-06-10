#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct ServerInfoObjectDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 84(0x54)
    int(__cdecl* m_ServerInfoObject_New)(ServerInfoObject* pThis); // [New at 0x614FF5] [0x10] ()i
    int(__cdecl* m_ServerInfoObject_Delete)(ServerInfoObject* pThis); // [Delete at 0x6150BA] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_ServerInfoObject_Draw)(ServerInfoObject* pThis, float a1, float a2, float a3, float a4); // [Draw at 0x615122] [0x30] (f,f,f,f)i
};


// 19 members
struct ServerInfoObject {
    ServerInfoObjectDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_objectType; // 0x8 <type_i>
    float m_colorAlpha; // 0xC <type_f>
    int m_colorRed; // 0x10 <type_i>
    int m_colorGreen; // 0x14 <type_i>
    int m_colorBlue; // 0x18 <type_i>
    float m_hoverColorAlpha; // 0x1C <type_f>
    float m_hoverColorRed; // 0x20 <type_f>
    float m_hoverColorGreen; // 0x24 <type_f>
    float m_hoverColorBlue; // 0x28 <type_f>
    int m_align; // 0x2C <type_i>
    BBString* m_url; // 0x30 <type_$>
    int m_size; // 0x34 <type_i>
    BBString* m_text; // 0x38 <type_$>
    int m_width; // 0x3C <type_i>
    int m_height; // 0x40 <type_i>
    BBString* m_path; // 0x44 <type_$>
    TImage* m_image; // 0x48 <type_:TImage>
    ServerInfoImage* m_infoImage; // 0x4C <type_:ServerInfoImage>
    int m_webImage; // 0x50 <type_i>
};


