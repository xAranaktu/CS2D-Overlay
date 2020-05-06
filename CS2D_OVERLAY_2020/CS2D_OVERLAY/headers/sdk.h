#pragma once

struct GameOffsets {
    DWORD playerBase = 0x496E0C;
    DWORD pEntListOff1 = 0x200;
    DWORD pEntListOff2 = 0x80;
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
    char pad_0024[20]; //0x0024
    int32_t ShotsMade; //0x0038
    int32_t ShotsMade2; //0x003C
    char pad_0040[36]; //0x0040
    float N00000248; //0x0064
    float N00000249; //0x0068
    char pad_006C[4]; //0x006C
    float N0000024B; //0x0070
    char pad_0074[4]; //0x0074
    float N0000024D; //0x0078
    int32_t screenResX; //0x007C
    int32_t screenResY; //0x0080
    char pad_0084[56]; //0x0084
    int32_t cursorX; //0x00BC
    int32_t cursorY; //0x00C0
    char pad_00C4[256]; //0x00C4
    int32_t teamID; //0x01C4
    char pad_01C8[12]; //0x01C8
    float posX; //0x01D4
    float posY; //0x01D8
    float rot; //0x01DC
    float rot2; //0x01E0
    int32_t tileX; //0x01E4
    int32_t tileY; //0x01E8
    char pad_01EC[8]; //0x01EC
    class MagicInt* pHP; //0x01F4
    class MagicInt* pMaxHP; //0x01F8
    class MagicInt* pArmor; //0x01FC
    class MagicInt* pMoney; //0x0200
    char pad_0204[4]; //0x0204
    int32_t kills; //0x0208
    char pad_020C[4]; //0x020C
    int32_t assists; //0x0210
    char pad_0214[4]; //0x0214
    int32_t mvps; //0x0218
    int32_t deaths; //0x021C
    char pad_0220[44]; //0x0220
    class CWeapon* CWeapon; //0x024C
    char pad_0250[2288]; //0x0250

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
}; //Size: 0x0404

class CName
{
public:
    char pad_0000[8]; //0x0000
    int32_t NicknameLen; //0x0008
    wchar_t Nickname[10]; //0x000C
    char pad_0020[52]; //0x0020
}; //Size: 0x0054

class PlayerEntityList
{
public:
    char pad_0000[8]; //0x0000
    class CPlayer* ptrPlayer; //0x0008
    class PlayerEntityList* nextEntity; //0x000C
    class PlayerEntityList* prevEntity; //0x0010
    char pad_0014[4]; //0x0014

    static PlayerEntityList* GetFirst() {
        DWORD addr = *(DWORD*)(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.playerBase);

        addr = *(DWORD*)(addr + gameOffsets.pEntListOff1);
        return reinterpret_cast<PlayerEntityList*>(addr + gameOffsets.pEntListOff2);
    }
}; //Size: 0x0018

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