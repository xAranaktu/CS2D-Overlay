#pragma once

struct GameOffsets {
    DWORD isMatchLive = 0x496DB4;
    DWORD totalRounds = 0x496DBC;
    DWORD ttRounds = 0x496DC0;
    DWORD ctRounds = 0x496DC4;

    DWORD clockMin = 0x496F18;
    DWORD clockSec = 0x496F1C;

    DWORD patchNoFlash = 0x2A33CB;
    DWORD patchNoFow = 0x27CB74;

    DWORD specBase = 0x49736C;
    DWORD specFollow = 0x496FAC;
    DWORD specFollowID = 0x496FB0;
    DWORD tickCount = 0x496BC4;
    DWORD playerBase = 0x496E0C;
    DWORD playerInvalid = 0x3C6BC0;


    DWORD EntityListBase = 0x486330;

    // CPlayer
    DWORD pEntListOff1 = 0x8;
    DWORD pEntListOff2 = 0xC;
    DWORD pEntListOff3 = 0x0;

    // CWeapon
    DWORD wEntListOff1 = 0x2F8;
    DWORD wEntListOff2 = 0x1C0;

    // SpecMode
    DWORD specModeOff1 = 0x19;
} inline gameOffsets;

class CPlayer
{
public:
    char pad_0004[4]; //0x0004
    int32_t playerID; //0x0008
    class CName* ptrCname; //0x000C
    char pad_0010[8]; //0x0010
    int32_t USGN_ID; //0x0018
    char pad_001C[4]; //0x001C
    class CName* ptrUSGN; //0x0020
    class CName* dashdash; //0x0024
    char pad_0028[4]; //0x0028
    class CName* unkCname; //0x002C
    class CName* pLang; //0x0030
    class CName* pLangAbbr; //0x0034
    int32_t ShotsMade; //0x0038
    int32_t ShotsMade2; //0x003C
    char pad_0040[8]; //0x0040
    class CName* steamCname; //0x0048
    class CName* countryAbbr; //0x004C
    char pad_0050[4]; //0x0050
    class N00001DD7* N00000244; //0x0054
    class N00001DFC* unk; //0x0058
    char pad_005C[8]; //0x005C
    float N00000248; //0x0064
    float N00000249; //0x0068
    char pad_006C[4]; //0x006C
    float N0000024B; //0x0070
    char pad_0074[4]; //0x0074
    float N0000024D; //0x0078
    int32_t screenResX; //0x007C
    int32_t screenResY; //0x0080
    char pad_0084[12]; //0x0084
    class N0000238A* N00000253; //0x0090
    char pad_0094[36]; //0x0094
    int32_t isMoving; //0x00B8
    int32_t cursorX; //0x00BC
    int32_t cursorY; //0x00C0
    char pad_00C4[28]; //0x00C4
    class CTimer* unkTimer1; //0x00E0
    class CTimer* unkTimer2; //0x00E4
    char pad_00E8[12]; //0x00E8
    int32_t idleTime; //0x00F4
    char pad_00F8[4]; //0x00F8
    class CTimer* movTimer; //0x00FC
    class CTimer* unkTimer3; //0x0100
    char pad_0104[12]; //0x0104
    class CTimer* unkTimer4; //0x0110
    char pad_0114[80]; //0x0114
    class N000010C9* N000002BA; //0x0164
    char pad_0168[88]; //0x0168
    class CName* unkCname1; //0x01C0
    int32_t teamID; //0x01C4
    char pad_01C8[12]; //0x01C8
    float posX; //0x01D4
    float posY; //0x01D8
    float rot; //0x01DC
    float rot2; //0x01E0
    int32_t tileX; //0x01E4
    int32_t tileY; //0x01E8
    int32_t lastAttackX; //0x01EC
    int32_t lastAttackY; //0x01F0
    class MagicInt* pHP; //0x01F4
    class MagicInt* pMaxHP; //0x01F8
    class MagicInt* pArmor; //0x01FC
    class MagicInt* pMoney; //0x0200
    char pad_0204[4]; //0x0204
    int32_t kills; //0x0208
    float N000002E4; //0x020C
    int32_t assists; //0x0210
    float N000002E6; //0x0214
    int32_t mvps; //0x0218
    int32_t deaths; //0x021C
    float timeSinceDeath; //0x0220
    char pad_0224[8]; //0x0224
    class CName* unkCname2; //0x022C
    char pad_0230[12]; //0x0230
    class N00002468* N000002F0; //0x023C
    char pad_0240[4]; //0x0240
    class CName* nades; //0x0244
    char pad_0248[4]; //0x0248
    class CWeapon* CWeapon; //0x024C
    class MagicInt* N000005F5; //0x0250
    int32_t hasDefuser; //0x0254
    int32_t hasBomb; //0x0258
    char pad_025C[20]; //0x025C
    class CTimer* shootTask; //0x0270
    int32_t shooting; //0x0274
    char pad_0278[4]; //0x0278
    int32_t isReloading; //0x027C
    class CTimer* reloadTask; //0x0280
    char pad_0284[12]; //0x0284
    int32_t bombAction; //0x0290
    class CTimer* BombActionTimer; //0x0294
    class CTimer* unkTimer5; //0x0298
    char pad_029C[20]; //0x029C
    int32_t UnkMov1; //0x02B0
    int32_t UnkMov2; //0x02B4
    float UnkMov3; //0x02B8
    float UnkMov4; //0x02BC
    float UnkMov5; //0x02C0
    int32_t UnkMov6; //0x02C4
    int32_t UnkMov7; //0x02C8
    class MagicInt* unkMagicInt; //0x02CC
    int32_t onlineCursorX; //0x02D0
    int32_t onlineCursorY; //0x02D4
    float onlineCursorDistFromDude; //0x02D8
    int32_t UnkMovX; //0x02DC
    int32_t UnkMovY; //0x02E0
    char pad_02E4[20]; //0x02E4
    class CName* unrealsoftware; //0x02F8
    char pad_02FC[260]; //0x02FC

    virtual void Function0();
    virtual void Function1();
    virtual void Function2();
    virtual void Function3();
    virtual void Function4();
    virtual void Function5();
    virtual void Function6();
    virtual void Function7();
    virtual void Function8();
    virtual void Function9();
    virtual void Function10();
    virtual void Function11();
    virtual void Function12();
    virtual void Function13();
    virtual void Function14();
    virtual void Function15();
    virtual void Function16();
    virtual void Function17();
    virtual void Function18();
    virtual void Function19();
    virtual void Function20();
    virtual void Function21();
    virtual void Function22();
    virtual void Function23();
    virtual void Function24();
    virtual void Function25();
    virtual void Function26();
    virtual void Function27();
    virtual void Function28();
    virtual void Function29();
    virtual void Function30();
    virtual void Function31();
    virtual void Function32();
    virtual void Function33();
    virtual void Function34();
    virtual void Function35();
    virtual void Function36();
    virtual void Function37();
    virtual void Function38();
    virtual void Function39();
    virtual void Function40();
    virtual void Function41();
    virtual void Function42();
    virtual void Function43();
    virtual void Function44();
    virtual void Function45();
    virtual void Function46();
    virtual void Function47();
    virtual void Function48();
    virtual void Function49();
    virtual void Function50();
    virtual void Function51();
    virtual void Function52();
    virtual void Function53();
    virtual void Function54();
    virtual void Function55();
    virtual void Function56();
    virtual void Function57();
    virtual void Function58();
    virtual void Function59();
    virtual void Function60();
    virtual void Function61();
    virtual void Function62();
    virtual void shoot();
    virtual void Function64();
    virtual void Function65();
    virtual void Function66();
    virtual void Function67();
    virtual void Function68();
    virtual void Function69();
    virtual void Function70();
    virtual void Function71();
    virtual void Function72();
    virtual void Function73();
    virtual void Function74();
    virtual void Function75();
    virtual void Function76();
    virtual void Function77();
    virtual void Function78();
    virtual void Function79();
    virtual void Function80();
    virtual void Function81();
    virtual void Function82();
    virtual void Function83();
    virtual void Function84();
    virtual void Function85();
    virtual void Function86();
    virtual void Function87();
    virtual void Function88();
    virtual void Function89();
    virtual void Function90();
    virtual void Function91();
    virtual void Function92();
    virtual void Function93();
    virtual void Function94();
    virtual void Function95();
    virtual void Function96();
    virtual void Function97();
    virtual void Function98();
    virtual void Function99();
    virtual void Function100();
    virtual void Function101();
    virtual void Function102();
    virtual void Function103();
    virtual void Function104();
    virtual void Function105();

    static CPlayer* GetLocalPlayer() {
        DWORD pLocalPlayer = *(DWORD*)(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.playerBase);
        return reinterpret_cast<CPlayer*>(pLocalPlayer);
    }

    static bool is_valid(DWORD addr) {
        return !(addr == g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.playerInvalid);
    }

    static std::string getKDA(CPlayer* pPlayer) {
        std::string result = std::to_string(pPlayer->kills) + "/" + std::to_string(pPlayer->deaths) + "/" + std::to_string(pPlayer->assists);
        return result;
    }
}; //Size: 0x0C40

class CWeapon
{
public:
    char pad_0000[12]; //0x0000
    int32_t WeaponID; //0x000C
    int32_t PlayerID; //0x0010
    int32_t Ammo; //0x0014
    int32_t AmmoIn; //0x0018
    int32_t Mode; //0x001C
    char pad_0020[996]; //0x0020

    static std::string getAmmo(CWeapon* pWeapon) {
        if (
            pWeapon->WeaponID == 51 ||
            pWeapon->WeaponID == 52 ||
            pWeapon->WeaponID == 53 ||
            pWeapon->WeaponID == 54
            ) {
            // Grenade
            return std::to_string(pWeapon->AmmoIn);
        }
        else if (
            pWeapon->WeaponID == 50 ||
            pWeapon->WeaponID == 55
            ) {
            // Knife / Bomb
            return "";
        }
        else {
            // Gun
            return std::to_string(pWeapon->AmmoIn) + "/" + std::to_string(pWeapon->Ammo);
        }
    }
}; //Size: 0x0404

class CName
{
public:
    char pad_0000[8]; //0x0000
    int32_t NicknameLen; //0x0008
    wchar_t Nickname[10]; //0x000C
    char pad_0020[52]; //0x0020
}; //Size: 0x0054

class CTimer
{
public:
    char pad_0000[8]; //0x0000
    uint32_t task_end; //0x0008
    char pad_000C[4]; //0x000C
}; //Size: 0x0010

class PlayerEntityList
{
public:
    char pad_0000[8]; //0x0000
    class CPlayer* ptrPlayer; //0x0008
    class PlayerEntityList* nextEntity; //0x000C
    class PlayerEntityList* prevEntity; //0x0010
    char pad_0014[4]; //0x0014

    static PlayerEntityList* GetFirst() {
        DWORD addr = *(DWORD*)(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.EntityListBase);

        addr = *(DWORD*)(addr + gameOffsets.pEntListOff1);
        addr = *(DWORD*)(addr + gameOffsets.pEntListOff2);
        return reinterpret_cast<PlayerEntityList*>(addr + gameOffsets.pEntListOff3);
    }
}; //Size: 0x0018

class WeaponEntityList
{
public:
    char pad_0000[8]; //0x0000
    class CWeapon* ptrWeapon; //0x0008
    class WeaponEntityList* nextEntity; //0x000C
    class WeaponEntityList* prevEntity; //0x0010
    char pad_0014[20]; //0x0014

    static WeaponEntityList* GetFirst() {
        DWORD addr = *(DWORD*)(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.EntityListBase);

        addr = *(DWORD*)(addr + gameOffsets.wEntListOff1);

        WeaponEntityList* ent = reinterpret_cast<WeaponEntityList*>(addr + gameOffsets.pEntListOff2);

        ent = ent->nextEntity;
        return ent;
    }
}; //Size: 0x0028

class MagicInt
{
public:
    char pad_0000[8]; //0x0000
    int32_t a; //0x0008
    int32_t b; //0x000C

    int getValue() {
        return a + b;
    }
}; //Size: 0x0010