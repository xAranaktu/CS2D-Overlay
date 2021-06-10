local names_arr = {}

function array_has_value (tab, val)
    for index, value in ipairs(tab) do
        if value == val then
            return true
        end
    end

    return false
end

function get_decl_addr(debug_scope_addr_as_str)
    local memscan = createMemScan()
    local foundlist = createFoundList(memscan)
    local start = 0x0
    local stop = 0xFFFFFFFF

    memscan.firstScan(
      soExactValue, vtDword, rtRounded,
      debug_scope_addr_as_str, nil, start, stop, "",
      fsmAligned, "4", true, false, false, false
    )
    memscan.waitTillDone()
    foundlist.initialize()
    memscan.Destroy()

    local n_results = foundlist.GetCount()
    assert(n_results > 0, string.format("No results for %s", debug_scope_addr_as_str))

    local found_addr = tonumber(foundlist[0], 16)
    foundlist.deinitialize()

    return found_addr - 8
end

function get_DebugScope_addr(_addr)
    local addr = _addr - 4

    local y = readInteger(addr-8)
    if (y == 2) then
      return addr - 8
    end

    -- while (true) do
    --     local b = readBytes(addr)
    --     if (b == 0x90 and ) then
    --        if (readInteger(addr+1) == 2) then
    --          return addr + 1
    --        end
    --     end
    --
    --     addr = addr - 1
    -- end

    while (true) do
        if (readInteger(addr) == 2) then
            return addr
        end
        addr = addr - 8
    end
end

local x = getAddressList().getMemoryRecordByDescription("Clss")
local n = x.count
local i = 0

while (i < n) do
    local p_clear_addr = x.Child[i].CurrentAddress
    local debug_scope = readPointer(p_clear_addr+4) --get_DebugScope_addr(p_clear_addr)
    local decl_addr = p_clear_addr-4
    local class_name = readString(readPointer(debug_scope + 4))

    assert(not array_has_value(names_arr, class_name), string.format("Duplicated: %s", class_name))
    table.insert(names_arr, class_name)
    
    -- print(string.format('set_name(0x%X, "%sDecl");', decl_addr, class_name))
    -- print(string.format('set_name(0x%X, "DebugScope_%s");', debug_scope, class_name))
    -- local decl_addr = get_decl_addr(string.format("%X", result))

    print(string.format("0x%X, -- %s", decl_addr, class_name))

    i = i + 1
end

print("Done")