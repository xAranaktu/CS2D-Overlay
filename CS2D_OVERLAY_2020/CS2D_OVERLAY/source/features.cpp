#pragma once
#include "dllmain.h"
#include "../headers/features.h"

namespace Features {

    void WriteToMemory(uintptr_t addressToWrite, char* valueToWrite, int byteNum)
    {
        //used to change our file access type, stores the old
        //access type and restores it after memory is written
        unsigned long OldProtection;
        //give that address read and write permissions and store the old permissions at oldProtection
        VirtualProtect((LPVOID)(addressToWrite), byteNum, PAGE_EXECUTE_READWRITE, &OldProtection);

        //write the memory into the program and overwrite previous value
        memcpy((LPVOID)addressToWrite, valueToWrite, byteNum);

        //reset the permissions of the address back to oldProtection after writting memory
        VirtualProtect((LPVOID)(addressToWrite), byteNum, OldProtection, NULL);
    }

    void changeSpecMode(int new_val) {
        DWORD addr = *(DWORD*)(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.specBase);
        
        *(char*)(addr + gameOffsets.specModeOff1) = (char)new_val;
    }

    void changeNoFlash() {
        // 83 C4 0C 68 FF 00 00 00 68 FF 00 00 00 68 FF 00 00 00

        DWORD addr = g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.patchNoFlash;
        if (bNoFlash) {
            // cmp eax,01
            char BytesToPath[] = "\x83\xF8\x01";
            WriteToMemory(addr, BytesToPath, 3);
        }
        else {
            // cmp eax,00
            char BytesToPath[] = "\x83\xF8\x00";
            WriteToMemory(addr, BytesToPath, 3);
        }
    }

    void changeNoFOW() {
        DWORD addr = g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.patchNoFow;
        if (bNoFOW) {
            char BytesToPath[] = "\x0A";
            WriteToMemory(addr, BytesToPath, 1);
        }
        else {
            char BytesToPath[] = "\x00";
            WriteToMemory(addr, BytesToPath, 1);
        }
    }
}