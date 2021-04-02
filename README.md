<p align="center">
  <img src="https://prisonarchitect.paradoxwikis.com/images/thumb/7/7f/Prison_Architect_logo.png/300px-Prison_Architect_logo.png">
</p>
<p align="center">
  <a href="https://github.com/pwd0kernel/Prison-Architect-Execution">
    <img alt="GitHub" src="https://img.shields.io/badge/github%20-%23121011.svg?&style=for-the-badge&logo=github&logoColor=white"/>
  </a>
  <a href="https://en.wikipedia.org/wiki/Windows_10">
    <img alt="Windows 10" src="https://img.shields.io/badge/Windows 10/8/7-0078D6?style=for-the-badge&logo=windows&logoColor=white" />
  </a>
  <a href="https://gitlab.com/pwd0kernel/Prison-Architect-Execution">
  <img alt="GitLab" src="https://img.shields.io/badge/gitlab%20-%23181717.svg?&style=for-the-badge&logo=gitlab&logoColor=white"/>
  </a>
</p>

---
#### Information
  - #### How to use:
    - Compile the DLL then inject it in <b>Prison Architect</b> with a DLL injector. Make sure you compile it in <b>x32</b>. Make sure to run  <a href="https://en.wikipedia.org/wiki/Windows_10"> <img alt="Windows 10" src="https://img.shields.io/badge/Prison Architect.exe-0078D6?&logo=windows&logoColor=white&color=darkgreen" /> </a> Do not run <a href="https://en.wikipedia.org/wiki/Windows_10"> <img alt="Windows 10" src="https://img.shields.io/badge/Prison Architect64.exe-0078D6?&logo=windows&logoColor=white&color=darkred" /> </a>
  - #### Wiki:
    - <a href="https://prisonarchitect.paradoxwikis.com/Lua"> <img alt="paradoxwikis" src="https://img.shields.io/badge/paradoxwikis-%232C2D72.svg?&style=for-the-badge&logo=lua&logoColor=white&color=orange"/> </a>
    - <a href="https://www.prisonarchitectwiki.com/wiki/Modding_guide"> <img alt="prisonarchitectwiki" src="https://img.shields.io/badge/prisonarchitectwiki-%232C2D72.svg?&style=for-the-badge&logo=lua&logoColor=white&color=orange"/>
    - <a href="https://steamcommunity.com/sharedfiles/filedetails/?id=480978426"> <img alt="steamcommunity" src="https://img.shields.io/badge/steamcommunity-%232C2D72.svg?&style=for-the-badge&logo=lua&logoColor=white&color=orange"/>
  - #### Information:
    - <img alt="x32" src="https://img.shields.io/badge/x32-0078D6?style=for-the-badge&color=blue" />
    - <img alt="Loadstring Execution" src="https://img.shields.io/badge/Loadstring Execution-0078D6?style=for-the-badge&color=blue" />
    - <img alt="Command Line" src="https://img.shields.io/badge/Command line-0078D6?style=for-the-badge&color=blue" />
  - #### LuaC Functions Using:
    - <a href="https://www.lua.org/source/5.1/lapi.c.html#lua_gettop"> <img alt="gettop" src="https://img.shields.io/badge/gettop-%232C2D72.svg?&style=for-the-badge&logo=lua&logoColor=white"/> </a>
    - <a href="https://www.lua.org/source/5.1/lapi.c.html#lua_pcall"> <img alt="pcall" src="https://img.shields.io/badge/pcall-%232C2D72.svg?&style=for-the-badge&logo=lua&logoColor=white"/> </a>
    - <a href="https://www.lua.org/source/5.1/lauxlib.c.html#luaL_loadstring"> <img alt="loadstring" src="https://img.shields.io/badge/loadstring-%232C2D72.svg?&style=for-the-badge&logo=lua&logoColor=white"/> </a>
  - #### Language Used:
    - <a href="https://en.wikipedia.org/wiki/C%2B%2B"> <img alt="C++" src="https://img.shields.io/badge/c++%20-%2300599C.svg?&style=for-the-badge&logo=c%2B%2B&ogoColor=white"/> </a>
    - <a href="https://en.wikipedia.org/wiki/C_(programming_language)"> <img alt="C" src="https://img.shields.io/badge/c%20-%2300599C.svg?&style=for-the-badge&logo=c&logoColor=white"/> </a>
    - <a href="https://en.wikipedia.org/wiki/Lua_(programming_language)"> <img alt="LuaC" src="https://img.shields.io/badge/luac-%232C2D72.svg?&style=for-the-badge&logo=lua&logoColor=white"/> </a>
  - #### Working on:
    - <img alt="Going Green" src="https://img.shields.io/badge/1.05 (Going Green) [Pack]-%232C2D72.svg?&style=for-the-badge&color=red"/>
  - #### Done:
    - <img alt="1.04" src="https://img.shields.io/badge/1.04 [ALL DLC]-%232C2D72.svg?&style=for-the-badge&color=red"/>
  - #### OS:
    - <a href="https://en.wikipedia.org/wiki/Windows_10"> <img alt="Windows 10" src="https://img.shields.io/badge/Windows-0078D6?style=for-the-badge&logo=windows&logoColor=white" /> </a>

---
#### What does it do?
It uses the game lua engine to execute lua on it by using the loadstring address.
there are alternative ways that you can do instreal of using the games loadstring
to execute lua into the game. I just chosed the easier way of doing it.

---
#### Script to test the exploit:
```lua
Game.AdviserSay("CEO", "This is a test")
```
```lua
Game.GameOver()	
```
You can start coding your own script if one of those work, I also listed 3 <a href="https://github.com/pwd0kernel/Prison-Architect-Execution#wiki">wiki</a> that you can use.
If you do not know Lua you can go here: <a href="https://www.lua.org/start.html"> <img alt="www.lua.org" src="https://img.shields.io/badge/www.lua.org-%232C2D72.svg?&logo=lua&logoColor=white"/> </a> to learn.

---
- #### Todo:
	- [ ] Add script decompiler
	- [ ] Make a UI
	- [ ] Auto Grab Addy's
	- [ ] Update to the latest version of <b>Prison Architect</b> (<b>Working on it</b>)
	- [x] Lua Execution
- #### Done:
  - [x] In game execution
  - [x] Clean Code & easy to understand
  - [x] Command line
  - [x] Detach the dll from the game
  - [x] Work's on <b>1.04</b>
---
It does not work on <b>1.05</b> (<b>Going Green</b>)[Pack] I got to fix it but if you want you can do it on your own here's the addresses [Might want to change somethings up]
#### 1.05 [Addresses] (NEW)
|                                Function                                | Address  | Calling Convention |
| :--------------------------------------------------------------------: | :------: | :----------------: |
|    <a href="https://www.lua.org/source/5.1/lapi.c.html#lua_gettop"> <img alt="gettop" src="https://img.shields.io/badge/gettop-%232C2D72.svg?&style=for-the-badge&logo=lua&logoColor=white"/> </a>     | 0x9917E0 |       CDECL        |
|   <a href="https://www.lua.org/source/5.1/lauxlib.c.html#luaL_loadstring"> <img alt="loadstring" src="https://img.shields.io/badge/loadstring-%232C2D72.svg?&style=for-the-badge&logo=lua&logoColor=white"/> </a>   | 0x993390 |       CDECL        |
| <a href="https://www.lua.org/source/5.1/lapi.c.html#lua_pcall"> <img alt="pcall" src="https://img.shields.io/badge/pcall-%232C2D72.svg?&style=for-the-badge&logo=lua&logoColor=white"/> </a> | 0x991B20 |       CDECL        |

#### 1.04 [Addresses] (OLD)
|                                Function                                | Address  | Calling Convention |
| :--------------------------------------------------------------------: | :------: | :----------------: |
|    <a href="https://www.lua.org/source/5.1/lapi.c.html#lua_gettop"> <img alt="gettop" src="https://img.shields.io/badge/gettop-%232C2D72.svg?&style=for-the-badge&logo=lua&logoColor=white"/> </a>     | 0x955CA0 |       CDECL        |
|   <a href="https://www.lua.org/source/5.1/lauxlib.c.html#luaL_loadstring"> <img alt="loadstring" src="https://img.shields.io/badge/loadstring-%232C2D72.svg?&style=for-the-badge&logo=lua&logoColor=white"/> </a>   | 0x957850 |       CDECL        |
| <a href="https://www.lua.org/source/5.1/lapi.c.html#lua_pcall"> <img alt="pcall" src="https://img.shields.io/badge/pcall-%232C2D72.svg?&style=for-the-badge&logo=lua&logoColor=white"/> </a> | 0x955FE0 |       CDECL        |

#### Current project i'm on:
<p align="center">
  <img src="https://www.prisonarchitect.com/packs/media/start/gg-logo-1d490392.png">
</p>