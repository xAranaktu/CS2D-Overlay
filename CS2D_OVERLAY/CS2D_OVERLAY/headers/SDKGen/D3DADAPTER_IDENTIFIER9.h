#pragma once

#include "defines.h"

// 5 methods, 0 functions
struct D3DADAPTER_IDENTIFIER9Decl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 1108(0x454)
    int(__cdecl* m_D3DADAPTER_IDENTIFIER9_New)(D3DADAPTER_IDENTIFIER9* pThis); // [New at 0x7A2576] [0x10] ()i
    int(__cdecl* m_D3DADAPTER_IDENTIFIER9_Delete)(D3DADAPTER_IDENTIFIER9* pThis); // [Delete at 0x7A2FFC] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    BBString*(__cdecl* m_D3DADAPTER_IDENTIFIER9_Driver)(D3DADAPTER_IDENTIFIER9* pThis); // [Driver at 0x7A300A] [0x30] ()$
    BBString*(__cdecl* m_D3DADAPTER_IDENTIFIER9_Description)(D3DADAPTER_IDENTIFIER9* pThis); // [Description at 0x7A3022] [0x34] ()$
    BBString*(__cdecl* m_D3DADAPTER_IDENTIFIER9_DeviceName)(D3DADAPTER_IDENTIFIER9* pThis); // [DeviceName at 0x7A303D] [0x38] ()$
};


// 275 members
struct D3DADAPTER_IDENTIFIER9 {
    D3DADAPTER_IDENTIFIER9Decl* decl; // 0x0
    int    refs;  // 0x4
    int m_Driver0; // 0x8 <type_i>
    int m_Driver1; // 0xC <type_i>
    int m_Driver2; // 0x10 <type_i>
    int m_Driver3; // 0x14 <type_i>
    int m_Driver4; // 0x18 <type_i>
    int m_Driver5; // 0x1C <type_i>
    int m_Driver6; // 0x20 <type_i>
    int m_Driver7; // 0x24 <type_i>
    int m_Driver8; // 0x28 <type_i>
    int m_Driver9; // 0x2C <type_i>
    int m_Driver10; // 0x30 <type_i>
    int m_Driver11; // 0x34 <type_i>
    int m_Driver12; // 0x38 <type_i>
    int m_Driver13; // 0x3C <type_i>
    int m_Driver14; // 0x40 <type_i>
    int m_Driver15; // 0x44 <type_i>
    int m_Driver16; // 0x48 <type_i>
    int m_Driver17; // 0x4C <type_i>
    int m_Driver18; // 0x50 <type_i>
    int m_Driver19; // 0x54 <type_i>
    int m_Driver20; // 0x58 <type_i>
    int m_Driver21; // 0x5C <type_i>
    int m_Driver22; // 0x60 <type_i>
    int m_Driver23; // 0x64 <type_i>
    int m_Driver24; // 0x68 <type_i>
    int m_Driver25; // 0x6C <type_i>
    int m_Driver26; // 0x70 <type_i>
    int m_Driver27; // 0x74 <type_i>
    int m_Driver28; // 0x78 <type_i>
    int m_Driver29; // 0x7C <type_i>
    int m_Driver30; // 0x80 <type_i>
    int m_Driver31; // 0x84 <type_i>
    int m_Driver32; // 0x88 <type_i>
    int m_Driver33; // 0x8C <type_i>
    int m_Driver34; // 0x90 <type_i>
    int m_Driver35; // 0x94 <type_i>
    int m_Driver36; // 0x98 <type_i>
    int m_Driver37; // 0x9C <type_i>
    int m_Driver38; // 0xA0 <type_i>
    int m_Driver39; // 0xA4 <type_i>
    int m_Driver40; // 0xA8 <type_i>
    int m_Driver41; // 0xAC <type_i>
    int m_Driver42; // 0xB0 <type_i>
    int m_Driver43; // 0xB4 <type_i>
    int m_Driver44; // 0xB8 <type_i>
    int m_Driver45; // 0xBC <type_i>
    int m_Driver46; // 0xC0 <type_i>
    int m_Driver47; // 0xC4 <type_i>
    int m_Driver48; // 0xC8 <type_i>
    int m_Driver49; // 0xCC <type_i>
    int m_Driver50; // 0xD0 <type_i>
    int m_Driver51; // 0xD4 <type_i>
    int m_Driver52; // 0xD8 <type_i>
    int m_Driver53; // 0xDC <type_i>
    int m_Driver54; // 0xE0 <type_i>
    int m_Driver55; // 0xE4 <type_i>
    int m_Driver56; // 0xE8 <type_i>
    int m_Driver57; // 0xEC <type_i>
    int m_Driver58; // 0xF0 <type_i>
    int m_Driver59; // 0xF4 <type_i>
    int m_Driver60; // 0xF8 <type_i>
    int m_Driver61; // 0xFC <type_i>
    int m_Driver62; // 0x100 <type_i>
    int m_Driver63; // 0x104 <type_i>
    int m_Driver64; // 0x108 <type_i>
    int m_Driver65; // 0x10C <type_i>
    int m_Driver66; // 0x110 <type_i>
    int m_Driver67; // 0x114 <type_i>
    int m_Driver68; // 0x118 <type_i>
    int m_Driver69; // 0x11C <type_i>
    int m_Driver70; // 0x120 <type_i>
    int m_Driver71; // 0x124 <type_i>
    int m_Driver72; // 0x128 <type_i>
    int m_Driver73; // 0x12C <type_i>
    int m_Driver74; // 0x130 <type_i>
    int m_Driver75; // 0x134 <type_i>
    int m_Driver76; // 0x138 <type_i>
    int m_Driver77; // 0x13C <type_i>
    int m_Driver78; // 0x140 <type_i>
    int m_Driver79; // 0x144 <type_i>
    int m_Driver80; // 0x148 <type_i>
    int m_Driver81; // 0x14C <type_i>
    int m_Driver82; // 0x150 <type_i>
    int m_Driver83; // 0x154 <type_i>
    int m_Driver84; // 0x158 <type_i>
    int m_Driver85; // 0x15C <type_i>
    int m_Driver86; // 0x160 <type_i>
    int m_Driver87; // 0x164 <type_i>
    int m_Driver88; // 0x168 <type_i>
    int m_Driver89; // 0x16C <type_i>
    int m_Driver90; // 0x170 <type_i>
    int m_Driver91; // 0x174 <type_i>
    int m_Driver92; // 0x178 <type_i>
    int m_Driver93; // 0x17C <type_i>
    int m_Driver94; // 0x180 <type_i>
    int m_Driver95; // 0x184 <type_i>
    int m_Driver96; // 0x188 <type_i>
    int m_Driver97; // 0x18C <type_i>
    int m_Driver98; // 0x190 <type_i>
    int m_Driver99; // 0x194 <type_i>
    int m_Driver100; // 0x198 <type_i>
    int m_Driver101; // 0x19C <type_i>
    int m_Driver102; // 0x1A0 <type_i>
    int m_Driver103; // 0x1A4 <type_i>
    int m_Driver104; // 0x1A8 <type_i>
    int m_Driver105; // 0x1AC <type_i>
    int m_Driver106; // 0x1B0 <type_i>
    int m_Driver107; // 0x1B4 <type_i>
    int m_Driver108; // 0x1B8 <type_i>
    int m_Driver109; // 0x1BC <type_i>
    int m_Driver110; // 0x1C0 <type_i>
    int m_Driver111; // 0x1C4 <type_i>
    int m_Driver112; // 0x1C8 <type_i>
    int m_Driver113; // 0x1CC <type_i>
    int m_Driver114; // 0x1D0 <type_i>
    int m_Driver115; // 0x1D4 <type_i>
    int m_Driver116; // 0x1D8 <type_i>
    int m_Driver117; // 0x1DC <type_i>
    int m_Driver118; // 0x1E0 <type_i>
    int m_Driver119; // 0x1E4 <type_i>
    int m_Driver120; // 0x1E8 <type_i>
    int m_Driver121; // 0x1EC <type_i>
    int m_Driver122; // 0x1F0 <type_i>
    int m_Driver123; // 0x1F4 <type_i>
    int m_Driver124; // 0x1F8 <type_i>
    int m_Driver125; // 0x1FC <type_i>
    int m_Driver126; // 0x200 <type_i>
    int m_Driver127; // 0x204 <type_i>
    int m_Description0; // 0x208 <type_i>
    int m_Description1; // 0x20C <type_i>
    int m_Description2; // 0x210 <type_i>
    int m_Description3; // 0x214 <type_i>
    int m_Description4; // 0x218 <type_i>
    int m_Description5; // 0x21C <type_i>
    int m_Description6; // 0x220 <type_i>
    int m_Description7; // 0x224 <type_i>
    int m_Description8; // 0x228 <type_i>
    int m_Description9; // 0x22C <type_i>
    int m_Description10; // 0x230 <type_i>
    int m_Description11; // 0x234 <type_i>
    int m_Description12; // 0x238 <type_i>
    int m_Description13; // 0x23C <type_i>
    int m_Description14; // 0x240 <type_i>
    int m_Description15; // 0x244 <type_i>
    int m_Description16; // 0x248 <type_i>
    int m_Description17; // 0x24C <type_i>
    int m_Description18; // 0x250 <type_i>
    int m_Description19; // 0x254 <type_i>
    int m_Description20; // 0x258 <type_i>
    int m_Description21; // 0x25C <type_i>
    int m_Description22; // 0x260 <type_i>
    int m_Description23; // 0x264 <type_i>
    int m_Description24; // 0x268 <type_i>
    int m_Description25; // 0x26C <type_i>
    int m_Description26; // 0x270 <type_i>
    int m_Description27; // 0x274 <type_i>
    int m_Description28; // 0x278 <type_i>
    int m_Description29; // 0x27C <type_i>
    int m_Description30; // 0x280 <type_i>
    int m_Description31; // 0x284 <type_i>
    int m_Description32; // 0x288 <type_i>
    int m_Description33; // 0x28C <type_i>
    int m_Description34; // 0x290 <type_i>
    int m_Description35; // 0x294 <type_i>
    int m_Description36; // 0x298 <type_i>
    int m_Description37; // 0x29C <type_i>
    int m_Description38; // 0x2A0 <type_i>
    int m_Description39; // 0x2A4 <type_i>
    int m_Description40; // 0x2A8 <type_i>
    int m_Description41; // 0x2AC <type_i>
    int m_Description42; // 0x2B0 <type_i>
    int m_Description43; // 0x2B4 <type_i>
    int m_Description44; // 0x2B8 <type_i>
    int m_Description45; // 0x2BC <type_i>
    int m_Description46; // 0x2C0 <type_i>
    int m_Description47; // 0x2C4 <type_i>
    int m_Description48; // 0x2C8 <type_i>
    int m_Description49; // 0x2CC <type_i>
    int m_Description50; // 0x2D0 <type_i>
    int m_Description51; // 0x2D4 <type_i>
    int m_Description52; // 0x2D8 <type_i>
    int m_Description53; // 0x2DC <type_i>
    int m_Description54; // 0x2E0 <type_i>
    int m_Description55; // 0x2E4 <type_i>
    int m_Description56; // 0x2E8 <type_i>
    int m_Description57; // 0x2EC <type_i>
    int m_Description58; // 0x2F0 <type_i>
    int m_Description59; // 0x2F4 <type_i>
    int m_Description60; // 0x2F8 <type_i>
    int m_Description61; // 0x2FC <type_i>
    int m_Description62; // 0x300 <type_i>
    int m_Description63; // 0x304 <type_i>
    int m_Description64; // 0x308 <type_i>
    int m_Description65; // 0x30C <type_i>
    int m_Description66; // 0x310 <type_i>
    int m_Description67; // 0x314 <type_i>
    int m_Description68; // 0x318 <type_i>
    int m_Description69; // 0x31C <type_i>
};


