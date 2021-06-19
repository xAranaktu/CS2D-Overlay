## CS2D Overlay ##
![alt text](https://i.imgur.com/iWYpiAM.jpeg)

---
**Features:**

 - Displays player hp, armor, weapon, money, KDA
 - Specmode change (Nothing, Everything, Team Only)
 - No Flash
 - No Fow
 - Automatically updating match score

---
**hotkeys:**

- **F6 key** - Increase Terrorist score by 1
- **F7 key** - Increase Counter-Terrorist score by 1
- **F8 key** - Reset both team score.
- **F9 key** - Show/hide overlay menu.
- **ALT key** - Show/hide overlay
- **END key** - Eject the CS2D_Overlay.dll from the game process.

---
**How to use:**

1. Make sure the "Overlay Launcher.exe" and the "CS2D_OVERLAY.dll" files aren't blocked by your antivirus. I recommend to add whole CS2D Overlay folder to exclusions.
2. Run "Overlay Launcher.exe" (As administrator)
3. Run the game
4. Enter the server
5. Press "Alt key" to show overlay. **You will able to see overlay only if you are on spectator.**

---
**Advanced Settings explanation**

![alt text](https://i.imgur.com/dxJqDQN.png)

- CS2D - It's simply a copy of the same settings that are available in "CS2D Launcher"
	- **CS2D Path** - Location of your CS2D.exe on HDD.
	- **Resolution** - CS2D window resolution.
	- **Window Mode** - Run CS2D in window or in fullscreen mode.

- Injecting
	- **Dll Path** - Location of your CS2DOverlay.dll on HDD.
	- **Injecting** - Auto will inject CS2DOverlay.dll automatically to cs2d.exe process. Manual means that you will need to press "Inject dll" button to inject overlay. :P
	- **Delay** - Injection delay. We don't want to inject .dll before game loads D3D9 functions.

---
**Fixing problems**

If you have any problems write on [github](https://github.com/xAranaktu/CS2D-Overlay/issues)

---
**Credits**

In this project I've used some parts of the code from this repo -> [DrNseven/Warframe](https://github.com/DrNseven/Warframe)
