## CS2D Overlay ##
![alt text](https://i.imgur.com/yfTfI1B.gif)
![alt text](https://i.imgur.com/cJvaVmM.jpg)

---
**Features:**

 - Free look
 - No Flash
 - No Fow
 - X-ray
 - Automatically updating match score
 - Showing damage dealt by each player
---
**Useful hotkeys:**

- **ALT key** - Show/hide overlay
- **INSERT key** - Free look on specmode
- **X key** - X-ray
- **Caps Lock key** - Damage dealt 
- **PAGE UP key** - No fow
- **PAGE Down key** - No flash
- **END key** - Close CS2D immediately
- **F6 key** - Increase Terrorist score by 1
- **F7 key** - Increase Counter-Terrorist score by 1
- **F8 key** - Reset both team score.
- **F9 key** - Show/hide overlay menu.

---
**How to use:**

[![IMAGE ALT TEXT HERE](https://i.imgur.com/MUWMVRn.jpg)](https://www.youtube.com/watch?v=ppSLAltnleA)

1. Install csp_text.ttf font. (You will find it in "fonts" folder, you need to do it only once)
2. Run "Overlay Launcher.exe" (As administrator)
3. Press "Advanced Settings" button and locate "CS2D.exe" on your HDD (you can change resolution and windowed mode if you wish)
4. Press "Start CS2D" button.
5. Enter the server
6. Press "Alt key" to show overlay. **You will able to see overlay only if you are on spectator.**

---
**Settings explanation**

![alt text](https://i.imgur.com/DD4ujRR.png)

- **Team1 & Team2** - Team names that face each other.
- **Transparency** - This option will make health bars transparent. It may have negative impact on fps.
- **Bordered Text** - Check it to draw border around text. It may have negative impact on fps.
- **Update score automatically** - As it says. It will update match score automatically in the bar on the top of the screen.
- **Pattern scan** - This option define how we will hook D3D9 functions. Check it if you have any problems with overlay.

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
**Known Bugs**

- "Transparency" makes health bars disappear completely.
- Damage dealt by HE grenades is not counting as damage dealt by player.

---
**Fixing problems**

If you have any problems write on [github](https://github.com/xAranaktu/CS2D-Overlay/issues) or [in thread on cs2d.net](https://cs2d.net/viewtopic.php?f=871&t=6869)
