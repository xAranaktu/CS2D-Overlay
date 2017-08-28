#RequireAdmin
#Region ;**** Directives created by AutoIt3Wrapper_GUI ****
#AutoIt3Wrapper_Outfile=Overlay Launcher.exe
#AutoIt3Wrapper_UseX64=n
#EndRegion ;**** Directives created by AutoIt3Wrapper_GUI ****

#include <GUIConstants.au3>

AdlibRegister("InjectOverlay", 2000)

GUICreate("Overlay Launcher", 275, 65)
GUISetBkColor(0xFFFFFF)
GUICtrlCreateLabel("Status:", 10, 10, 50, 17)
$label_status = GUICtrlCreateLabel("Waiting for CS2D.exe", 65, 10, 200, 17)
GUISetState(@SW_SHOW)

While 1
	Switch GUIGetMsg()
		Case $GUI_EVENT_CLOSE
			ExitLoop

	EndSwitch
WEnd


Func InjectOverlay()
	Local $PID = ProcessExists("CS2D.exe")
	If Not $PID Then Return

	Local $DllPath = @ScriptDir & "\CS2DOverlay.dll"
	If Not FileExists($DllPath) Then
		MsgBox(16, "CS2D Overlay", "File not found:" & @CRLF & $DllPath)
		Exit
	EndIf

	GUICtrlSetData($label_status, "Injecting CS2DOverlay.dll")
	_InjectDll($PID, $DllPath)
	If Not @error Then
		GUICtrlSetData($label_status, "CS2DOverlay.dll INJECTED!")
		Sleep(3000)
		Exit
	Else
		MsgBox(16, "CS2D Overlay", "Error during injection:" & @CRLF & @error)
		Exit
	EndIf
EndFunc

;=================================================================================================
; Function:            _InjectDll($ProcessId, $DllPath)
; Description:        Injects a .dll into a running program.
; Return Value(s):    On Success - Returns true
;                    On Failure - Returns false
;                    @Error - 0 = No error.
;                             1 = Invalid ProcessId.
;                             2 = File does not exist.
;                             3 = File is not a .dll (invalid file).
;                             4 = Failed to open 'Advapi32.dll'.
;                             5 = Failed to get the full path.
;                             6 = Failed to open the process.
;                             7 = Failed to call 'GetModuleHandle'.
;                             8 = Failed to call 'GetProcAddress'.
;                             9 = Failed to call 'VirtualAllocEx'.
;                             10 = Failed to write the memory.
;                             11 = Failed to create the 'RemoteThread'.
; Author(s):        KillerDeluxe
;=================================================================================================

Func _InjectDll($ProcessId, $DllPath)
	If $ProcessId == 0 Then Return SetError(1, "", False)
	If Not (FileExists($DllPath)) Then Return SetError(2, "", False)
	If Not (StringRight($DllPath, 4) == ".dll") Then Return SetError(3, "", False)

	$Kernel32 = DllOpen("kernel32.dll")
	If @error Then Return SetError(4, "", False)

	$DLL_Path = DllStructCreate("char[255]")
	DllCall($Kernel32, "DWORD", "GetFullPathNameA", "str", $DllPath, "DWORD", 255, "ptr", DllStructGetPtr($DLL_Path), "int", 0)
	If @error Then Return SetError(5, "", False)

	$hProcess = DllCall($Kernel32, "DWORD", "OpenProcess", "DWORD", 0x1F0FFF, "int", 0, "DWORD", $ProcessId)
	If @error Then Return SetError(6, "", False)

	$hModule = DllCall($Kernel32, "DWORD", "GetModuleHandleA", "str", "kernel32.dll")
	If @error Then Return SetError(7, "", False)

	$lpStartAddress = DllCall($Kernel32, "DWORD", "GetProcAddress", "DWORD", $hModule[0], "str", "LoadLibraryA")
	If @error Then Return SetError(8, "", False)

	$lpParameter = DllCall($Kernel32, "DWORD", "VirtualAllocEx", "int", $hProcess[0], "int", 0, "ULONG_PTR", DllStructGetSize($DLL_Path), "DWORD", 0x3000, "int", 4)
	If @error Then Return SetError(9, "", False)

	DllCall("kernel32.dll", "BOOL", "WriteProcessMemory", "int", $hProcess[0], "DWORD", $lpParameter[0], "str", DllStructGetData($DLL_Path, 1), "ULONG_PTR", DllStructGetSize($DLL_Path), "int", 0)
	If @error Then Return SetError(10, "", False)

	$hThread = DllCall($Kernel32, "int", "CreateRemoteThread", "DWORD", $hProcess[0], "int", 0, "int", 0, "DWORD", $lpStartAddress[0], "DWORD", $lpParameter[0], "int", 0, "int", 0)
	If @error Then Return SetError(11, "", False)

	DllCall($Kernel32, "BOOL", "CloseHandle", "DWORD", $hProcess[0])
	DllClose($Kernel32)

	Return SetError(0, "", True)
EndFunc   ;==>_InjectDll
