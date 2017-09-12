#RequireAdmin
#Region ;**** Directives created by AutoIt3Wrapper_GUI ****
#AutoIt3Wrapper_Outfile=Overlay Launcher.exe
#AutoIt3Wrapper_UseX64=n
#EndRegion ;**** Directives created by AutoIt3Wrapper_GUI ****

#include <APISysConstants.au3>
#include <WinAPISys.au3>
#include <WinAPIvkeysConstants.au3>
#include <GUIConstants.au3>

Global Const $DefaultDllPath = @ScriptDir & "\CS2DOverlay.dll"
Global Const $SettingsPath = @MyDocumentsDir & "\CS2D_Overlay"
Global Const $fNameOverlaySettings = "\settings.ini"
Global Const $fNameLauncherSettings = "\launcher_settings.ini"
Global Const $fNameLogs = "\log.txt"

$MainGUI = GUICreate("Overlay Launcher", 275, 135, (@DesktopWidth/2) - (275/2), (@DesktopHeight/2) - (105/2))

$ButtonSettings = GUICtrlCreateButton("Settings", 10, 10, 75)
$ButtonAdvancedSettings = GUICtrlCreateButton("Advanced Settings", 95, 10, 105)
$ButtonRunCS2D = GUICtrlCreateButton("Run CS2D", 10, 40, 75)
$ButtonInjectDll = GUICtrlCreateButton("Inject DLL", 95, 40, 105)
$ButtonHotkeys = GUICtrlCreateButton("Hotkeys", 10, 70, 75)
GUICtrlSetState($ButtonHotkeys, $GUI_DISABLE)
GUICtrlSetState($ButtonInjectDll, $GUI_DISABLE)

GUICtrlCreateLabel("Status:", 10, 105, 50, 17)
$label_status = GUICtrlCreateLabel("", 65, 105, 200, 17)

Init()
GUISetState(@SW_SHOW)



While 1
	Switch GUIGetMsg()
		Case $GUI_EVENT_CLOSE
			ExitLoop
		Case $ButtonSettings
				GUISetState(@SW_DISABLE, $MainGUI)
				GUISetState(@SW_MINIMIZE, $MainGUI)
				GUI_Settings()
				GUISetState(@SW_ENABLE, $MainGUI)
				WinActivate($MainGUI)
		Case $ButtonAdvancedSettings
				GUISetState(@SW_DISABLE, $MainGUI)
				GUISetState(@SW_MINIMIZE, $MainGUI)
				GUI_AdvancedSettings()
				GUISetState(@SW_ENABLE, $MainGUI)
				WinActivate($MainGUI)
		Case $ButtonHotkeys
				GUISetState(@SW_DISABLE, $MainGUI)
				GUISetState(@SW_MINIMIZE, $MainGUI)
				GUI_Hotkeys()
				GUISetState(@SW_ENABLE, $MainGUI)
				WinActivate($MainGUI)
		Case $ButtonRunCS2D
			RunCS2D()
		Case $ButtonInjectDll
			InjectOverlay()
	EndSwitch
WEnd

Func GUI_Hotkeys()
	Local $SettingsFullPath = $SettingsPath & $fNameOverlaySettings

	Local $hGUI2 = GUICreate("Settings", 280, 200, (@DesktopWidth/2) - (280/2), (@DesktopHeight/2) - (200/2))

	Local $Hotkey_ShowOverlay = IniRead($SettingsFullPath, "Hotkeys", "ShowOverlay", "0x12")

	GUICtrlCreateGroup("Hotkeys", 10, 10, 250, 100)
	GUICtrlCreateLabel("Show Overlay:", 15, 35)
	Local $ShowOverlayCombo = GUICtrlCreateCombo("", 90, 31, 155)
	GUICtrlSetData($ShowOverlayCombo, "VK_LBUTTON|VK_RBUTTON|VK_CANCEL|VK_MBUTTON|VK_XBUTTON1|VK_XBUTTON2|VK_BACK|VK_TAB|VK_CLEAR|VK_RETURN|VK_SHIFT|VK_CONTROL|VK_MENU|VK_PAUSE|VK_CAPITAL|VK_KANA|VK_HANGUL|VK_JUNJA|VK_FINAL|VK_HANJA|VK_KANJI|VK_ESCAPE|VK_CONVERT|VK_NONCONVERT|VK_ACCEPT|VK_MODECHANGE|VK_SPACE|VK_PRIOR|VK_NEXT|VK_END|VK_HOME|VK_LEFT|VK_UP|VK_RIGHT|VK_DOWN|VK_SELECT|VK_PRINT|VK_EXECUTE|VK_SNAPSHOT|VK_INSERT|VK_DELETE|VK_HELP|VK_0|VK_1|VK_2|VK_3|VK_4|VK_5|VK_6|VK_7|VK_8|VK_9|VK_A|VK_B|VK_C|VK_D|VK_E|VK_F|VK_G|VK_H|VK_I|VK_J|VK_K|VK_L|VK_M|VK_N|VK_O|VK_P|VK_Q|VK_R|VK_S|VK_T|VK_U|VK_V|VK_W|VK_X|VK_Y|VK_Z|VK_LWIN|VK_RWIN|VK_APPS|VK_SLEEP|VK_NUMPAD0|VK_NUMPAD1|VK_NUMPAD2|VK_NUMPAD3|VK_NUMPAD4|VK_NUMPAD5|VK_NUMPAD6|VK_NUMPAD7|VK_NUMPAD8|VK_NUMPAD9|VK_MULTIPLY|VK_ADD|VK_SEPARATOR|VK_SUBTRACT|VK_DECIMAL|VK_DIVIDE|VK_F1|VK_F2|VK_F3|VK_F4|VK_F5|VK_F6|VK_F7|VK_F8|VK_F9|VK_F10|VK_F11|VK_F12|VK_F13|VK_F14|VK_F15|VK_F16|VK_F17|VK_F18|VK_F19|VK_F20|VK_F21|VK_F22|VK_F23|VK_F24|VK_NUMLOCK|VK_SCROLL|VK_LSHIFT|VK_RSHIFT|VK_LCONTROL|VK_RCONTROL|VK_LMENU|VK_RMENU|VK_BROWSER_BACK|VK_BROWSER_FORWARD|VK_BROWSER_REFRESH|VK_BROWSER_STOP|VK_BROWSER_SEARCH|VK_BROWSER_FAVORITES|VK_BROWSER_HOME|VK_VOLUME_MUTE|VK_VOLUME_DOWN|VK_VOLUME_UP|VK_MEDIA_NEXT_TRACK|VK_MEDIA_PREV_TRACK|VK_MEDIA_STOP|VK_MEDIA_PLAY_PAUSE|VK_LAUNCH_MAIL|VK_LAUNCH_MEDIA_SELECT|VK_LAUNCH_APP1|VK_LAUNCH_APP2|VK_OEM_1|VK_OEM_PLUS|VK_OEM_COMMA|VK_OEM_MINUS|VK_OEM_PERIOD|VK_OEM_2|VK_OEM_3|VK_OEM_4|VK_OEM_5|VK_OEM_6|VK_OEM_7|VK_OEM_8|VK_OEM_102|VK_PROCESSKEY|VK_PACKET|VK_ATTN|VK_CRSEL|VK_EXSEL|VK_EREOF|VK_PLAY|VK_ZOOM|VK_NONAME|VK_PA1|VK_OEM_CLEAR", "VK_MENU")

	GUICtrlCreateLabel("Free Look:", 15, 35)
	Local $FreeLookCombo = GUICtrlCreateCombo("", 90, 31, 155)
	GUICtrlSetData($FreeLookCombo, "VK_LBUTTON|VK_RBUTTON|VK_CANCEL|VK_MBUTTON|VK_XBUTTON1|VK_XBUTTON2|VK_BACK|VK_TAB|VK_CLEAR|VK_RETURN|VK_SHIFT|VK_CONTROL|VK_MENU|VK_PAUSE|VK_CAPITAL|VK_KANA|VK_HANGUL|VK_JUNJA|VK_FINAL|VK_HANJA|VK_KANJI|VK_ESCAPE|VK_CONVERT|VK_NONCONVERT|VK_ACCEPT|VK_MODECHANGE|VK_SPACE|VK_PRIOR|VK_NEXT|VK_END|VK_HOME|VK_LEFT|VK_UP|VK_RIGHT|VK_DOWN|VK_SELECT|VK_PRINT|VK_EXECUTE|VK_SNAPSHOT|VK_INSERT|VK_DELETE|VK_HELP|VK_0|VK_1|VK_2|VK_3|VK_4|VK_5|VK_6|VK_7|VK_8|VK_9|VK_A|VK_B|VK_C|VK_D|VK_E|VK_F|VK_G|VK_H|VK_I|VK_J|VK_K|VK_L|VK_M|VK_N|VK_O|VK_P|VK_Q|VK_R|VK_S|VK_T|VK_U|VK_V|VK_W|VK_X|VK_Y|VK_Z|VK_LWIN|VK_RWIN|VK_APPS|VK_SLEEP|VK_NUMPAD0|VK_NUMPAD1|VK_NUMPAD2|VK_NUMPAD3|VK_NUMPAD4|VK_NUMPAD5|VK_NUMPAD6|VK_NUMPAD7|VK_NUMPAD8|VK_NUMPAD9|VK_MULTIPLY|VK_ADD|VK_SEPARATOR|VK_SUBTRACT|VK_DECIMAL|VK_DIVIDE|VK_F1|VK_F2|VK_F3|VK_F4|VK_F5|VK_F6|VK_F7|VK_F8|VK_F9|VK_F10|VK_F11|VK_F12|VK_F13|VK_F14|VK_F15|VK_F16|VK_F17|VK_F18|VK_F19|VK_F20|VK_F21|VK_F22|VK_F23|VK_F24|VK_NUMLOCK|VK_SCROLL|VK_LSHIFT|VK_RSHIFT|VK_LCONTROL|VK_RCONTROL|VK_LMENU|VK_RMENU|VK_BROWSER_BACK|VK_BROWSER_FORWARD|VK_BROWSER_REFRESH|VK_BROWSER_STOP|VK_BROWSER_SEARCH|VK_BROWSER_FAVORITES|VK_BROWSER_HOME|VK_VOLUME_MUTE|VK_VOLUME_DOWN|VK_VOLUME_UP|VK_MEDIA_NEXT_TRACK|VK_MEDIA_PREV_TRACK|VK_MEDIA_STOP|VK_MEDIA_PLAY_PAUSE|VK_LAUNCH_MAIL|VK_LAUNCH_MEDIA_SELECT|VK_LAUNCH_APP1|VK_LAUNCH_APP2|VK_OEM_1|VK_OEM_PLUS|VK_OEM_COMMA|VK_OEM_MINUS|VK_OEM_PERIOD|VK_OEM_2|VK_OEM_3|VK_OEM_4|VK_OEM_5|VK_OEM_6|VK_OEM_7|VK_OEM_8|VK_OEM_102|VK_PROCESSKEY|VK_PACKET|VK_ATTN|VK_CRSEL|VK_EXSEL|VK_EREOF|VK_PLAY|VK_ZOOM|VK_NONAME|VK_PA1|VK_OEM_CLEAR", "VK_INSERT")
	GUICtrlCreateGroup("", -99, -99, 1, 1) ;close group
	GUISetState()

	While 1

		Switch GUIGetMsg()
			Case $GUI_EVENT_CLOSE
				GUIDelete($hGUI2)
				ExitLoop
		EndSwitch
	WEnd
EndFunc


Func GUI_Settings()
	Local $SettingsFullPath = $SettingsPath & $fNameOverlaySettings

	Local $Team1 = IniRead($SettingsFullPath, "Teams", "Team1", "Team1")
	Local $Team2 = IniRead($SettingsFullPath, "Teams", "Team2", "Team2")

	Local $hGUI2 = GUICreate("Settings", 250, 200, (@DesktopWidth/2) - (250/2), (@DesktopHeight/2) - (200/2))

	GUICtrlCreateLabel("Team1:", 15, 15)
	Local $Team1Input = GUICtrlCreateInput($Team1, 60, 11, 135)

	GUICtrlCreateLabel("Team2:", 15, 40)
	Local $Team2Input = GUICtrlCreateInput($Team2, 60, 36, 135)

	Local $TransparencyCB = GUICtrlCreateCheckbox("Transparency", 15, 80, 120, 20)
	If IniRead($SettingsFullPath, "Overlay", "Transparency", "0") == "1" Then GUICtrlSetState($TransparencyCB, $GUI_CHECKED)

	Local $BorderedTextCB = GUICtrlCreateCheckbox("Bordered Text", 15, 100, 120, 20)
	If IniRead($SettingsFullPath, "Overlay", "BorderedText", "0") == "1" Then GUICtrlSetState($BorderedTextCB, $GUI_CHECKED)

	Local $AutoUpdateScoreCB = GUICtrlCreateCheckbox("Update score automatically", 15, 120, 150, 20)
	If IniRead($SettingsFullPath, "Overlay", "AutoUpdateScore", "1") == "1" Then GUICtrlSetState($AutoUpdateScoreCB, $GUI_CHECKED)

	Local $PatternScanCB = GUICtrlCreateCheckbox("Pattern Scan", 15, 140, 150, 20)
	If IniRead($SettingsFullPath, "Overlay", "PatternScan", "0") == "1" Then GUICtrlSetState($PatternScanCB, $GUI_CHECKED)

	GUISetState()

	While 1

		Switch GUIGetMsg()
			Case $GUI_EVENT_CLOSE
				IniWrite($SettingsFullPath, "Teams", "Team1", GUICtrlRead($Team1Input))
				IniWrite($SettingsFullPath, "Teams", "Team2", GUICtrlRead($Team2Input))
				GUIDelete($hGUI2)
				ExitLoop
			Case $TransparencyCB
				If BitAND(GUICtrlRead($TransparencyCB), $GUI_CHECKED) = $GUI_CHECKED Then
					IniWrite($SettingsFullPath, "Overlay", "Transparency", 1)
				Else
					IniWrite($SettingsFullPath, "Overlay", "Transparency", 0)
				EndIf
			Case $BorderedTextCB
				If BitAND(GUICtrlRead($BorderedTextCB), $GUI_CHECKED) = $GUI_CHECKED Then
					IniWrite($SettingsFullPath, "Overlay", "BorderedText", 1)
				Else
					IniWrite($SettingsFullPath, "Overlay", "BorderedText", 0)
				EndIf
			Case $AutoUpdateScoreCB
				If BitAND(GUICtrlRead($AutoUpdateScoreCB), $GUI_CHECKED) = $GUI_CHECKED Then
					IniWrite($SettingsFullPath, "Overlay", "AutoUpdateScore", 1)
				Else
					IniWrite($SettingsFullPath, "Overlay", "AutoUpdateScore", 0)
				EndIf
			Case $PatternScanCB
				If BitAND(GUICtrlRead($PatternScanCB), $GUI_CHECKED) = $GUI_CHECKED Then
					IniWrite($SettingsFullPath, "Overlay", "PatternScan", 1)
				Else
					IniWrite($SettingsFullPath, "Overlay", "PatternScan", 0)
				EndIf
		EndSwitch
	WEnd
EndFunc

Func GUI_AdvancedSettings()
	Local $SettingsFullPath = $SettingsPath & $fNameLauncherSettings

	Local $CS2DPath = IniRead($SettingsFullPath, "CS2D", "Path", "")
	Local $Resolution = IniRead($SettingsFullPath, "CS2D", "Resolution", "1920x1080")
	Local $WindowMode = IniRead($SettingsFullPath, "CS2D", "Window_Mode", "fullscreen")

	Local $hGUI2 = GUICreate("Advanced Settings", 250, 300, (@DesktopWidth/2) - (250/2), (@DesktopHeight/2) - (300/2))

	GUICtrlCreateGroup("CS2D", 10, 10, 210, 100)
	GUICtrlCreateLabel("CS2D Path:", 15, 30)
	Local $CS2DPathInput = GUICtrlCreateInput($CS2DPath, 90, 26, 105)
	Local $CS2DPathButton = GUICtrlCreateButton("...", 195, 24)

	GUICtrlCreateLabel("Resolution:", 15, 55)
	Local $ResolutionCombo = GUICtrlCreateCombo("", 90, 51, 105)
	GUICtrlSetData($ResolutionCombo, "1920x1080|1600x900|1366x768|1280x720", $Resolution)

	GUICtrlCreateLabel("Window Mode:", 15, 80)
	Local $WindowModeCombo = GUICtrlCreateCombo("", 90, 76, 105)
	GUICtrlSetData($WindowModeCombo, "windowed|fullscreen", $WindowMode)
	GUICtrlCreateGroup("", -99, -99, 1, 1) ;close group

	Local $DLLPath = IniRead($SettingsFullPath, "Injecting", "DLLPath", @ScriptDir & "\CS2DOverlay.dll")
	If $DLLPath = "" Then
		$DLLPath = $DefaultDllPath
		IniWrite($SettingsFullPath, "Injecting", "DLLPath", $DLLPath)
	EndIf

	Local $Injecting = IniRead($SettingsFullPath, "Injecting", "Injecting", "Auto")
	Local $Delay = IniRead($SettingsFullPath, "Injecting", "Delay", "3s.")

	GUICtrlCreateGroup("Injecting", 10, 110, 210, 110)
	GUICtrlCreateLabel("DLL Path:", 15, 130)
	Local $DLLPathInput = GUICtrlCreateInput($DLLPath, 90, 126, 105)
	Local $DLLPathButton = GUICtrlCreateButton("...", 195, 124)

	GUICtrlCreateLabel("Injecting:", 15, 155)
	Local $InjectingCombo = GUICtrlCreateCombo("", 90, 151, 105)
	GUICtrlSetData($InjectingCombo, "Auto|Manual", $Injecting)

	GUICtrlCreateLabel("Delay:", 15, 180)
	Local $DelayCombo = GUICtrlCreateCombo("", 90, 176, 105)
	GUICtrlSetData($DelayCombo, "0s.|1s.|3s.|5s.|10s.|20s.|30s.|60s.", $Delay)
	GUICtrlCreateGroup("", -99, -99, 1, 1) ;close group

	GUISetState()

	While 1

		Switch GUIGetMsg()
			Case $GUI_EVENT_CLOSE
				IniWrite($SettingsFullPath, "CS2D", "Resolution", GUICtrlRead($ResolutionCombo))
				IniWrite($SettingsFullPath, "CS2D", "Window_Mode", GUICtrlRead($WindowModeCombo))
				IniWrite($SettingsFullPath, "Injecting", "Injecting", GUICtrlRead($InjectingCombo))
				If (GUICtrlRead($InjectingCombo) == "Manual") Then
					GUICtrlSetState($ButtonInjectDll, $GUI_ENABLE)
				Else
					GUICtrlSetState($ButtonInjectDll, $GUI_DISABLE)
				EndIf
				IniWrite($SettingsFullPath, "Injecting", "Delay", GUICtrlRead($DelayCombo))
				GUIDelete($hGUI2)
				ExitLoop
			Case $CS2DPathButton
				$CS2DPath = FileOpenDialog("CS2D", @DesktopDir, "CS2D (CS2D.exe)", 2, "CS2D.exe", $hGUI2)
				IniWrite($SettingsFullPath, "CS2D", "Path", $CS2DPath)
				GUICtrlSetData($CS2DPathInput, $CS2DPath)
			Case $DLLPathButton
				$DLLPath = FileOpenDialog("CS2DOverlay.dll", @ScriptDir, "CS2DOverlay.dll (CS2DOverlay.dll)", 2, "CS2DOverlay.dll", $hGUI2)
				IniWrite($SettingsFullPath, "Injecting", "DLLPath", $DLLPath)
				GUICtrlSetData($DLLPathInput, $DLLPath)
		EndSwitch
	WEnd
EndFunc

Func Init()
	Local $SettingsFullPath = $SettingsPath & $fNameLauncherSettings

	Local $Injecting = IniRead($SettingsFullPath, "Injecting", "Injecting", "Auto")

	If ($Injecting == "Auto") Then
		GUICtrlSetData($label_status, "Waiting for CS2D.exe")
		AdlibRegister("InjectOverlay", 1000)
	Else
		GUICtrlSetState($ButtonInjectDll, $GUI_ENABLE)
		GUICtrlSetData($label_status, "Run CS2D and Inject DLL")
	EndIf

	If Not FileExists($SettingsPath & $fNameOverlaySettings) Then CreateSettings($SettingsPath)
EndFunc

Func RunCS2D()
	Local $SettingsFullPath = $SettingsPath & $fNameLauncherSettings

	Local $CS2DPath = IniRead($SettingsFullPath, "CS2D", "Path", "NoPathDefined")
	Local $Resolution = StringSplit(IniRead($SettingsFullPath, "CS2D", "Resolution", "1920x1080"), "x")
	Local $WindowMode = IniRead($SettingsFullPath, "CS2D", "Window_Mode", "fullscreen")

	If Not FileExists($CS2DPath) Then
		DoLogs("File not exists (CS2D.exe)" & @CRLF & $CS2DPath)
		MsgBox(16, "CS2D Overlay", "File not exists (CS2D.exe)" & @CRLF & $CS2DPath)
		Return
	EndIf

	If $WindowMode == "fullscreen" Then $WindowMode = "full"

	Local $params = "-nointro -32bit -dx -" & $WindowMode & " -w " & $Resolution[1] & " -h " & $Resolution[2]

	DoLogs("Running CS2D.exe with following params: [PATH=" & $CS2DPath & "] [Params: " & $params & "]")
	ShellExecute($CS2DPath, $params)

EndFunc

Func CreateSettings($f)
    If DirGetSize($f) <= -1 Then
		DirCreate($f)
    EndIf

	IniWrite($f & $fNameOverlaySettings, "Teams", "Team1", "")
	IniWrite($f & $fNameOverlaySettings, "Teams", "Team2", "")
	IniWrite($f & $fNameOverlaySettings, "Overlay", "Transparency", "0")
	IniWrite($f & $fNameOverlaySettings, "Overlay", "BorderedText", "0")
	IniWrite($f & $fNameOverlaySettings, "Overlay", "AutoUpdateScore", "1")

	IniWrite($f & $fNameLauncherSettings, "CS2D", "Path", "NoPathDefined")
	IniWrite($f & $fNameLauncherSettings, "CS2D", "Resolution", "1920x1080")
	IniWrite($f & $fNameLauncherSettings, "CS2D", "Window_Mode", "fullscreen")
	IniWrite($f & $fNameLauncherSettings, "Injecting", "Injecting", "Auto")
	IniWrite($f & $fNameLauncherSettings, "Injecting", "Delay", "3s.")
EndFunc


Func InjectOverlay()
	Local $PID = ProcessExists("CS2D.exe")
	If Not $PID Then Return

	Local $DllPath = IniRead($SettingsPath & $fNameLauncherSettings, "Injecting", "DLLPath", @ScriptDir & "\CS2DOverlay.dll")
	If Not FileExists($DllPath) Then
		DoLogs("File not found:" & @CRLF & $DllPath)
		MsgBox(16, "CS2D Overlay", "File not found:" & @CRLF & $DllPath)
		Exit
	EndIf

	Local $Delay = IniRead($SettingsPath & $fNameLauncherSettings, "Injecting", "Delay", "3s.")
	GUICtrlSetData($label_status, "Injecting CS2DOverlay.dll within " & $Delay)

	Sleep(Int(StringTrimRight($Delay, 2)) * 1000)
	_InjectDll($PID, $DllPath)
	If Not @error Then
		GUICtrlSetData($label_status, "CS2DOverlay.dll INJECTED!")
		Sleep(1500)
		Exit
	Else
		DoLogs("Error during injection:" & @CRLF & @error)
		MsgBox(16, "CS2D Overlay", "Error during injection:" & @CRLF & @error)
		Exit
	EndIf
EndFunc

Func DoLogs($text)
	Local $LogFile = $SettingsPath & $fNameLogs
	FileOpen($LogFile)
	FileWriteLine($LogFile, "[Launcher] " & $text)
	FileClose($LogFile)
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
