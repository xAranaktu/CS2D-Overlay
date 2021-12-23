#pragma once

struct GameOffsets {
    DWORD pInvalid = 0x3CEBC0;   // EmptyPtr

    DWORD scale = 0x4AAAB4;

    DWORD g_pItemsEntityList = 0x49E804;
    DWORD g_pProjectileFlyingEntityList = 0x49EC0C;
    DWORD g_pProjectileGroundEntityList = g_pProjectileFlyingEntityList + 0x4;

    DWORD g_pPlayersEntityList = 0x49A390;
    DWORD screen_width = 0x4AAAD0;
    DWORD cursor_x = 0x4AAD44;
    DWORD isMatchLive = 0x4AAE3C;
    DWORD g_pLocalPlayer = 0x4AAE94;
    DWORD clockMin = 0x4AAFA0;
    DWORD specFollow = 0x4AB034;
    DWORD specBase = 0x4AB3F8;
    DWORD camera_x = 0x4ABDDC;
    DWORD patchNoFlash = 0x2A6E56;
    DWORD patchNoFow = 0x27F0F3 - 0x1;

    DWORD cursor_y = cursor_x + 0x4;
    DWORD screen_height = screen_width + 0x4;
    DWORD camera_y = camera_x + 0x4;

    DWORD totalRounds = isMatchLive + 0x8;
    DWORD ttRounds = totalRounds + 0x4;
    DWORD ctRounds = ttRounds + 0x4;

    DWORD clockSec = clockMin + 0x4;

    DWORD specFollowID = specFollow + 0x4;

    // CPlayer
    DWORD pEntListOff1 = 0x8;
    DWORD pEntListOff2 = 0xC;
    DWORD pEntListOff3 = 0x0;

    // SpecMode
    DWORD specModeOff1 = 0x19;
} inline gameOffsets;