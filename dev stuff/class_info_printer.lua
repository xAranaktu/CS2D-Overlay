-- Cheat Engine LUA Class Info Printer for CS2D

-- Your pClass
-- tpl: 0x888F2C
-- cInt: 0x86E45C
-- TList: 0x8FAFF4
-- TLink: 0x8FAB9C
-- TItem: 0x88BB28

local pClass = 0x88BB28

-- shit code below

local DebugeclCodes = {
    "BBDEBUGDECL_END",
    "BBDEBUGDECL_CONST",
    "BBDEBUGDECL_LOCAL",
    "BBDEBUGDECL_FIELD",
    "BBDEBUGDECL_GLOBAL",
    "BBDEBUGDECL_VARPARAM",
    "BBDEBUGDECL_TYPEMETHOD",
    "BBDEBUGDECL_TYPEFUNCTION"
}

local DebugScopeCodes = {
    "BBDEBUGSCOPE_FUNCTION",
    "BBDEBUGSCOPE_USERTYPE",
    "BBDEBUGSCOPE_LOCALBLOCK",
    "BBDEBUGSCOPE_USERINTERFACE",
    "BBDEBUGSCOPE_USERSTRUCT",
    "BBDEBUGSCOPE_USERENUM"
}

function convert_type_tag(type_tag)
-- const char *bbVoidTypeTag="?";
-- const char *bbByteTypeTag="b";
-- const char *bbShortTypeTag="s";
-- const char *bbIntTypeTag="i";
-- const char *bbUIntTypeTag="u";
-- const char *bbLongTypeTag="l";
-- const char *bbULongTypeTag="y";
-- const char *bbSizetTypeTag="z";
-- const char *bbFloatTypeTag="f";
-- const char *bbDoubleTypeTag="d";
-- const char *bbStringTypeTag="$";
-- const char *bbObjectTypeTag=":Object";
-- const char *bbBytePtrTypeTag="*b";

    local type_tags = {
        ["$"] = "BBString*",
        ["i"] = "int",
        ["l"] = "long long",
        ["f"] = "float"
    }
    
    local result = type_tags[type_tag]
    if result == nil then
        if (type_tag:sub(1,1) == ":") then
            result = type_tag:sub(2)
            result = string.format("%s*", result)
        end
    end

    return result or "void*"
end

function get_class_name(class_addr)
    local pTypeInfos = ReadPointer(pClass+0x8)
    local addr = pTypeInfos + 0x4
    return ReadString(ReadPointer(addr))
end

function print_members(class_addr)
    local pTypeInfos = ReadPointer(pClass+0x8)
    
    local addr = pTypeInfos + 0x8
    
    local _typeid = ReadInteger(addr)
    if _typeid == 0 then 
        print("no members?")
        return
    end
    print("\n\nmembers:")
    print("ClassDecl* pClassDecl; // 0x0");
    print("unsigned int    kind;  // 0x4 DebugeclCodes (?)");
    
    
    
    local i = 0
    local sz = 0x10
    
    local mName = ""
    local mType = ""
    local mOffset = 0
    for i=1, 999 do
        _typeid = ReadInteger(addr)
        if _typeid == 0 then return end

        if _typeid == 3 then
            mName = ReadString(ReadPointer(addr + 0x4))
            mType = ReadString(ReadPointer(addr + 0x8))
            mOffset = ReadInteger(addr + 0xC)
            
            print(string.format(
                "%s m_%s; // 0x%X <type_%s>",
                convert_type_tag(mType),
                mName,
                mOffset,
                mType
            ))
            
        end
        addr = addr + sz
    end
end

function print_functions(class_addr)
    local pTypeInfos = ReadPointer(pClass+0x8)
    
    local addr = pTypeInfos + 0x8
    
    local _typeid = ReadInteger(addr)
    if _typeid == 0 then 
        print("no functions?")
        return
    end
    print("\n\nfunctions:")
    local i = 0
    local sz = 0x10
    
    local fnAddr = 0
    for i=1, 999 do
        _typeid = ReadInteger(addr)
        if _typeid == 0 then return end

        if (_typeid == 6) or (_typeid == 7) then
            mOffset = ReadInteger(addr + 0xC)
            
            fnAddr = ReadPointer(class_addr + mOffset)
            mName = ReadString(ReadPointer(addr + 0x4))
            mType = ReadString(ReadPointer(addr + 0x8))
            
            
            print(string.format(
                "[%s] [0x%X] %s %s",
                DebugeclCodes[_typeid+1],
                fnAddr,
                mType,
                mName
            ))
            
        end
        addr = addr + sz
    end
end

function print_unknowns(class_addr)
    local pTypeInfos = ReadPointer(pClass+0x8)
    
    local addr = pTypeInfos + 0x8
    
    local _typeid = ReadInteger(addr)
    if _typeid == 0 then 
        print("no unknowns?")
        return
    end
    print("\n\nUnknowns:")
    local i = 0
    local sz = 0x10

    for i=1, 999 do
        _typeid = ReadInteger(addr)
        if _typeid == 0 then return end
        
        if not ((_typeid == 3) or (_typeid == 6) or (_typeid == 7)) then
            print(string.format(
                "[%d]",
                DebugeclCodes[_typeid+1]
            ))
        end

        addr = addr + sz
    end
end

print("===============================================\n\n")

print(string.format(
    "pSuper 0x%X, fnFree: 0x%X", 
    ReadPointer(pClass), 
    ReadPointer(pClass+0x4)
))

print(string.format(
    "class name: %s (size: 0x%X)",
    get_class_name(pClass),
    ReadInteger(pClass+0xC)
))

print_members(pClass)
print_functions(pClass)
print_unknowns(pClass)

print("\n\n===============================================")