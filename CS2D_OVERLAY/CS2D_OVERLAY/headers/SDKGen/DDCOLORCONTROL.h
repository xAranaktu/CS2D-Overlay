#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct DDCOLORCONTROLDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 48(0x30)
    int(__cdecl* m_DDCOLORCONTROL_New)(DDCOLORCONTROL* pThis); // [New at 0x7A357B] [0x10] ()i
    int(__cdecl* m_DDCOLORCONTROL_Delete)(DDCOLORCONTROL* pThis); // [Delete at 0x7A35E3] [0x14] ()i
};


// 10 members
struct DDCOLORCONTROL {
    DDCOLORCONTROLDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_dwSize; // 0x8 <type_i>
    int m_dwFlags; // 0xC <type_i>
    int m_lBrightness; // 0x10 <type_i>
    int m_lContrast; // 0x14 <type_i>
    int m_lHue; // 0x18 <type_i>
    int m_lSaturation; // 0x1C <type_i>
    int m_lSharpness; // 0x20 <type_i>
    int m_lGamma; // 0x24 <type_i>
    int m_lColorEnable; // 0x28 <type_i>
    int m_dwReserved1; // 0x2C <type_i>
};


