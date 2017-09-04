#RequireAdmin
#Region ;**** Directives created by AutoIt3Wrapper_GUI ****
#AutoIt3Wrapper_UseX64=n
#EndRegion ;**** Directives created by AutoIt3Wrapper_GUI ****

#include <GUIConstants.au3>

Global Const $SettingsPath = @MyDocumentsDir & "\CS2D_Overlay"
Global Const $fNameOverlaySettings = "\settings.ini"
Global Const $fNameLauncherSettings = "\launcher_settings.ini"
Global Const $fNameLogs = "\log.txt"

$MainGUI = GUICreate("Overlay Launcher", 275, 105, (@DesktopWidth/2) - (275/2), (@DesktopHeight/2) - (105/2))

$ButtonSettings = GUICtrlCreateButton("Settings", 10, 10, 75)
$ButtonAdvencedSettings = GUICtrlCreateButton("Advenced Settings", 95, 10, 105)
$ButtonRunCS2D = GUICtrlCreateButton("Run CS2D", 10, 40, 75)
$ButtonInjectDll = GUICtrlCreateButton("Inject DLL", 95, 40, 105)
GUICtrlSetState($ButtonInjectDll, $GUI_DISABLE)

GUICtrlCreateLabel("Status:", 10, 85, 50, 17)
$label_status = GUICtrlCreateLabel("", 65, 85, 200, 17)

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
		Case $ButtonAdvencedSettings
				GUISetState(@SW_DISABLE, $MainGUI)
				GUISetState(@SW_MINIMIZE, $MainGUI)
				GUI_AdvencedSettings()
				GUISetState(@SW_ENABLE, $MainGUI)
				WinActivate($MainGUI)
		Case $ButtonRunCS2D
			RunCS2D()
		Case $ButtonInjectDll
			InjectOverlay()
	EndSwitch
WEnd




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
		EndSwitch
	WEnd
EndFunc

Func GUI_AdvencedSettings()
	Local $SettingsFullPath = $SettingsPath & $fNameLauncherSettings

	Local $CS2DPath = IniRead($SettingsFullPath, "CS2D", "Path", "")
	Local $Resolution = IniRead($SettingsFullPath, "CS2D", "Resolution", "1920x1080")
	Local $WindowMode = IniRead($SettingsFullPath, "CS2D", "Window_Mode", "fullscreen")

	Local $hGUI2 = GUICreate("Advenced Settings", 250, 200, (@DesktopWidth/2) - (250/2), (@DesktopHeight/2) - (200/2))

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

	Local $Injecting = IniRead($SettingsFullPath, "Injecting", "Injecting", "Auto")
	Local $Delay = IniRead($SettingsFullPath, "Injecting", "Delay", "3s.")

	GUICtrlCreateGroup("Injecting", 10, 110, 210, 70)
	GUICtrlCreateLabel("Injecting:", 15, 130)
	Local $InjectingCombo = GUICtrlCreateCombo("", 90, 126, 105)
	GUICtrlSetData($InjectingCombo, "Auto|Manual", $Injecting)

	GUICtrlCreateLabel("Delay:", 15, 155)
	Local $DelayCombo = GUICtrlCreateCombo("", 90, 151, 105)
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
				$CS2DPath = FileOpenDialog("CS2D", @DesktopDir & "\", "CS2D (CS2D.exe)", 2, "CS2D.exe", $hGUI2)
				IniWrite($SettingsFullPath, "CS2D", "Path", $CS2DPath)
				GUICtrlSetData($CS2DPathInput, $CS2DPath)
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

	Local $DllPath = @ScriptDir & "\CS2DOverlay.dll"
	If Not FileExists($DllPath) Then
		DoLogs("File not found:" & @CRLF & $DllPath)
		MsgBox(16, "CS2D Overlay", "File not found:" & @CRLF & $DllPath)
		Exit
	EndIf

	Local $SettingsFullPath = $SettingsPath & $fNameLauncherSettings

	Local $Delay = IniRead($SettingsFullPath, "Injecting", "Delay", "3s.")
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
