#pragma once
#pragma warning(disable:4091)

// https://gist.github.com/xAranaktu/ba3c461bd35276ace3912e34a3e5bf41

typedef struct TNode;
typedef struct TNodeDecl;
typedef struct TMap;
typedef struct TMapDecl;
typedef struct StatsMap;
typedef struct StatsMapDecl;
typedef struct TLink;
typedef struct TLinkDecl;
typedef struct TList;
typedef struct TListDecl;
typedef struct Ttimer;
typedef struct TtimerDecl;
typedef struct cInt;
typedef struct cIntDecl;
typedef struct Tstats_user;
typedef struct Tstats_userDecl;
typedef struct Titem;
typedef struct TitemDecl;
typedef struct TImage;
typedef struct TImageDecl;
typedef struct TBank;
typedef struct TBankDecl;
typedef struct Tpl;
typedef struct TplDecl;
typedef struct Tpro;
typedef struct TproDecl;
typedef struct TLightSource;
typedef struct TLightSourceDecl;

// TODO Add definitions for
typedef struct Object;
typedef struct Tudp_con;
typedef struct TListEnum;
typedef struct TChannel;

enum TEAM {
    TEAM_SPECTATOR = 0,
    TEAM_TT = 1,
    TEAM_CT = 2
};


#pragma region BRL
// https://github.com/bmx-ng/brl.mod/tree/master/blitz.mod

typedef struct BBDebugDecl BBDebugDecl;
typedef struct BBDebugScope BBDebugScope;

enum DebugeclCodes {
    BBDEBUGDECL_END = 0,
    BBDEBUGDECL_CONST = 1,
    BBDEBUGDECL_LOCAL = 2,
    BBDEBUGDECL_FIELD = 3,
    BBDEBUGDECL_GLOBAL = 4,
    BBDEBUGDECL_VARPARAM = 5,

    BBDEBUGDECL_TYPEMETHOD = 6,
    BBDEBUGDECL_TYPEFUNCTION = 7
};

enum DebugScopeCodes {
    BBDEBUGSCOPE_FUNCTION = 1,
    BBDEBUGSCOPE_USERTYPE = 2,
    BBDEBUGSCOPE_LOCALBLOCK = 3,
    BBDEBUGSCOPE_USERINTERFACE = 4,
    BBDEBUGSCOPE_USERSTRUCT = 5,
    BBDEBUGSCOPE_USERENUM = 6,
};

struct BBDebugDecl {
    unsigned int    kind;  // DebugeclCodes
    const char* name;
    const char* type_tag;
    unsigned int    offset;
};

struct BBDebugScope {
    unsigned int    kind;   // DebugScopeCodes
    const char* name;
    BBDebugDecl     decls;
    // ... 
    // decls until BBDEBUGDECL_END
};

struct BBString {
    void* cls;
    unsigned int    kind;   // DebugScopeCodes (?)
    int length; //0x0008
    wchar_t buf[]; //0x000C
};

#pragma endregion BRL
