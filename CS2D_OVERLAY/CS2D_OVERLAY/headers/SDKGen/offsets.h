#pragma once

struct GameOffsets {
    DWORD pInvalid = 0x3C7BC0;   // EmptyPtr
    DWORD g_pPlayersEntityList = 0x487330;
    DWORD isMatchLive = 0x497DAC;
    DWORD g_pLocalPlayer = 0x497E04;
    DWORD clockMin = 0x497F10;
    DWORD specFollow = 0x497FA4;
    DWORD specBase = 0x498364;
    DWORD patchNoFlash = 0x2A3441;
    DWORD patchNoFow = 0x27CBF0;

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