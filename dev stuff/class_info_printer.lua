-- Cheat Engine LUA Class Info Printer for CS2D

-- Your pClass
-- tpl: 0x888F2C
-- cInt: 0x86E45C
-- TList: 0x8FAFF4
-- TLink: 0x8FAB9C
-- TItem: 0x88BB28

-- local pClass = 0x888F2C

-- shit code below

local generated_classes = {}

local DebugeclCodes = {
    "BBDEBUGDECL_END",              -- 0
    "BBDEBUGDECL_CONST",            -- 1
    "BBDEBUGDECL_LOCAL",
    "BBDEBUGDECL_FIELD",
    "BBDEBUGDECL_GLOBAL",
    "BBDEBUGDECL_VARPARAM",
    "BBDEBUGDECL_TYPEMETHOD",
    "BBDEBUGDECL_TYPEFUNCTION"
}

local DebugScopeCodes = {
    "BBDEBUGSCOPE_FUNCTION",        -- 0
    "BBDEBUGSCOPE_USERTYPE",        -- 1
    "BBDEBUGSCOPE_LOCALBLOCK",
    "BBDEBUGSCOPE_USERINTERFACE",
    "BBDEBUGSCOPE_USERSTRUCT",
    "BBDEBUGSCOPE_USERENUM"
}

function array_has_value (tab, val)
    for index, value in ipairs(tab) do
        if value == val then
            return true
        end
    end

    return false
end


function tablelength(T)
  local count = 0
  for _ in pairs(T) do count = count + 1 end
  return count
end


function split(s, delimiter)
    local result = {};
    for match in (s..delimiter):gmatch("(.-)"..delimiter) do
        table.insert(result, match);
    end
    return result;
end

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

function convert_typedef(_type)
    local result = {
        ["params"] = "",
        ["return"] = ""
    }

    local splited = split(_type, "%)")
    local params = string.format("%s)", splited[1])
    local _returns = splited[2]:sub(1, #splited[2] - 1)
    
    if params == "()" then
        result["params"] = ""
    else
        local no_parentheses = params:sub(1, #params - 1)
        no_parentheses = no_parentheses:sub(2)
        
        local params_splited = split(no_parentheses, ",")

        for i=1, #params_splited do
            result["params"] = result["params"] .. string.format(
                "%s a%d, ",
                convert_type_tag(params_splited[i]),
                i
            )
        end
        local x = result["params"]
        result["params"] = x:sub(1, #x - 2)
        
    end
    
    --print(_type)
    --print(params)
    
    
    
    result["return"] = convert_type_tag(_returns)
    return result
end

function get_class_name(class_addr)
    local pTypeInfos = ReadPointer(class_addr+0x8)
    if pTypeInfos then
        local addr = pTypeInfos + 0x4
        return ReadString(ReadPointer(addr))
    else 
        return "Empty"
    end
end

function get_pBBDebugScope(class_addr)
    return ReadPointer(class_addr+0x8)
end

function add_member(class_inst, addr, members)
    local mName = ReadString(ReadPointer(addr + 0x4))
    local mType = ReadString(ReadPointer(addr + 0x8))
    local mOffset = ReadInteger(addr + 0xC)
    
    if members[mOffset] ~= nil then
        print(string.format(
            "Duplicated member? at %d [0x%X]",
            mOffset, mOffset
        ))
    end

    if mType:sub(1,1) == ":" and class_inst > 0 then
        local sub_inst = ReadPointer(class_inst+mOffset)
        if sub_inst > 0 then
            local sub_inst_class = ReadPointer(sub_inst)
            if sub_inst_class > 0 and not array_has_value(generated_classes, ReadPointer(sub_inst)) then
                table.insert(generated_classes, sub_inst_class)
                gen_sdk(get_class(sub_inst, 0))
            end
        end
    end

    members[mOffset] = string.format(
        "%s m_%s; // 0x%X <type_%s>",
        convert_type_tag(mType),
        mName,
        mOffset,
        mType
    )

end

function add_type_method(class_inst, pThis, addr, type_methods, cls_name)
    -- typedef void(__cdecl* _test)();
    -- first param = this

    local mOffset = ReadInteger(addr + 0xC)
    local fnAddr = ReadPointer(pThis + mOffset)
    local mName = ReadString(ReadPointer(addr + 0x4))
    local mType = ReadString(ReadPointer(addr + 0x8))
    
    local _typedef = convert_typedef(mType)
    
    local s_params = string.format(
        "(%s* pThis)",
        cls_name
    )

    if #_typedef["params"] > 0 then
        s_params = string.format(
            "(%s* pThis, %s)",
            cls_name,
            _typedef["params"]
        )
    end
    
    if type_methods[mOffset] ~= nil then
        print(string.format(
            "Duplicated type_method? at %d [0x%X]",
            mOffset, mOffset
        ))
    end
    
    type_methods[mOffset] = string.format(
        "%s(__cdecl* m_%s_%s)%s; // [%s at 0x%X] [0x%X] %s",
        _typedef["return"],
        cls_name,
        mName,
        s_params,
        mName,
        fnAddr,
        mOffset,
        mType
    )
end
function add_type_functions(class_inst, pThis, addr, type_functions)
    local mOffset = ReadInteger(addr + 0xC)
    local fnAddr = ReadPointer(pThis + mOffset)
    local mName = ReadString(ReadPointer(addr + 0x4))
    local mType = ReadString(ReadPointer(addr + 0x8))
    
    local _typedef = convert_typedef(mType)
    
    local s_params = "()"

    if #_typedef["params"] > 0 then
        s_params = string.format(
            "(%s)",
            _typedef["params"]
        )
    end
    
    if type_functions[mOffset] ~= nil then
        print(string.format(
            "Duplicated type_functions? at %d [0x%X]",
            mOffset, mOffset
        ))
    end
    
    type_functions[mOffset] = string.format(
        "%s(__cdecl* fn_%s)%s; // [%s at 0x%X] [0x%X] %s",
        _typedef["return"],
        mName,
        s_params,
        mName,
        fnAddr,
        mOffset,
        mType
    )
end

function get_class(class_inst, class_addr)
    if class_inst then
        class_addr = ReadPointer(class_inst)
    end

    local result = {}
    local cls_name = get_class_name(class_addr)
    local super_class = ReadPointer(class_addr) or 0
    
    result["name"] = cls_name
    result["super"] = string.format("0x%X", super_class)
    result["has_super"] = (ReadPointer(super_class) or 0) > 0
    result["free"] = string.format("0x%X", ReadPointer(class_addr+0x4))
    result["size"] = ReadInteger(class_addr+0xC)
    result["members"] = {}
    result["type_methods"] = {}
    result["type_functions"] = {}
    
    
    local pBBDebugScope = get_pBBDebugScope(class_addr)
    local BBDebugDeclStart = pBBDebugScope + 0x8

    if ReadInteger(BBDebugDeclStart) == 0 then 
        print(string.format(
            "No decls for %s",
            cls_name
        ))
        
        return result
    end
    
    local decl_sz = 0x10
    local DebugeclCode = 0
    for i=1, 9999 do
        DebugeclCode = ReadInteger(BBDebugDeclStart)
        if DebugeclCode == 0 then 
            return result 
        end
        
        if DebugeclCode == 1 or DebugeclCode == 3 then
            add_member(class_inst, BBDebugDeclStart, result["members"])
        elseif DebugeclCode == 6 then
            add_type_method(class_inst,class_addr, BBDebugDeclStart, result["type_methods"], cls_name)
        elseif DebugeclCode == 7 then
            add_type_functions(class_inst, class_addr, BBDebugDeclStart, result["type_functions"])
        else
            print(string.format(
                "TODO: Handle DebugeclCode %d, 0x%X",
                DebugeclCode,
                BBDebugDeclStart
            ))
        end

        BBDebugDeclStart = BBDebugDeclStart + decl_sz
    end
    
    return result
end

function gen_sdk(cls)
    local fpath = string.format("SDKGen/%s.h", cls["name"])
    local fo, err = io.open(fpath, "w+")

    local n_methods = tablelength(cls["type_methods"])
    local n_functions = tablelength(cls["type_functions"])
    local n_members = tablelength(cls["members"])
    local n_methods_and_funcs = n_methods + n_functions
    
    print(string.format(
        "typedef struct %s;",
        cls["name"]
    ))
    print(string.format(
        "typedef struct %sDecl;",
        cls["name"]
    ))

    fo:write(string.format(
        '#pragma once\n\n#include "defines.h"\n\n// %d methods, %d functions\n',
        n_methods, n_functions
    ))
    fo:write(string.format(
        "struct %sDecl {\n",
        cls["name"]
    ))
    
    fo:write(string.format(
        "    void* pSuper;  // 0x0 0x%X\n",
        cls["super"]
    ))
    fo:write(string.format(
        "    void* pFree;  // 0x4 0x%X\n",
        cls["free"]
    ))
    fo:write("    BBDebugScope* pDebugScope; // 0x8\n")
    fo:write(string.format(
        "    size_t sz; //0xC %d(0x%X)\n",
        cls["size"], cls["size"]
    ))
    
    local can_continue = true
    local step = 0x4
    local offset = 0xC + step
    while (can_continue) do
        local method = cls["type_methods"][offset]
        local func = cls["type_functions"][offset]
        
        if method then
            fo:write(string.format(
                "    %s\n",
                method
            ))
            n_methods_and_funcs = n_methods_and_funcs - 1
        elseif func then
            fo:write(string.format(
                "    %s\n",
                func
            ))
            n_methods_and_funcs = n_methods_and_funcs - 1
        else
            fo:write(string.format(
                "    void* nothing_%d; // 0x%X\n",
                (offset/step)-1,
                offset
            ))
        end
        
        can_continue = n_methods_and_funcs > 0
        offset = offset + step
    end

    fo:write("};\n\n\n")
    if cls["has_super"] then
        fo:write(string.format(
            "// Super: %s\n",
            cls["super"]
        ))
    end
    
    fo:write(string.format(
        "// %d members\n",
        n_members
    ))
    fo:write(string.format(
        "struct %s {\n",
        cls["name"]
    ))
    
    fo:write(string.format(
        "    %sDecl* decl; // 0x0\n",
        cls["name"]
    ))
    fo:write("    unsigned int    kind;  // 0x4 DebugeclCodes (?)\n")
    
    can_continue = true
    step = 0x4
    offset = 0x4 + step
    while (can_continue) do
        local member = cls["members"][offset]
        
        if member then
            fo:write(string.format(
                "    %s\n",
                member
            ))
            n_members = n_members - 1
        end
        
        can_continue = n_members > 0
        offset = offset + step
    end
    
    fo:write("};\n\n\n")
    io.close(fo)
    
end
local to_gen_inst = 0x06053320-- ReadPointer(0x897E04)
generated_classes = {ReadPointer(to_gen_inst)}
gen_sdk(get_class(to_gen_inst, 0))
print("Done")
