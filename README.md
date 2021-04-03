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
    - <img alt="x32" src="https://img.shields.io/badge/x32 - DLL-0078D6?style=for-the-badge&color=blue" />
    - <img alt="Loadstring Execution" src="https://img.shields.io/badge/Loadstring Execution-0078D6?style=for-the-badge&color=blue" />
    - <img alt="Command Line" src="https://img.shields.io/badge/Command line- CMD-0078D6?style=for-the-badge&color=blue" />

  - #### LuaC Functions Using:
    - <a href="https://www.lua.org/source/5.1/lapi.c.html#lua_gettop"> <img alt="gettop" src="https://img.shields.io/badge/gettop-%232C2D72.svg?&style=for-the-badge&logo=lua&logoColor=white"/> </a>
    - <a href="https://www.lua.org/source/5.1/lapi.c.html#lua_pcall"> <img alt="pcall" src="https://img.shields.io/badge/pcall-%232C2D72.svg?&style=for-the-badge&logo=lua&logoColor=white"/> </a>
    - <a href="https://www.lua.org/source/5.1/lauxlib.c.html#luaL_loadstring"> <img alt="loadstring" src="https://img.shields.io/badge/loadstring-%232C2D72.svg?&style=for-the-badge&logo=lua&logoColor=white"/> </a>

  - #### Language Used:
    - <a href="https://en.wikipedia.org/wiki/C%2B%2B"> <img alt="C++" src="https://img.shields.io/badge/c++%20-%2300599C.svg?&style=for-the-badge&logo=c%2B%2B&ogoColor=white"/> </a>
    - <a href="https://en.wikipedia.org/wiki/C_(programming_language)"> <img alt="C" src="https://img.shields.io/badge/c%20-%2300599C.svg?&style=for-the-badge&logo=c&logoColor=white"/> </a>
    - <a href="https://en.wikipedia.org/wiki/Lua_(programming_language)"> <img alt="LuaC" src="https://img.shields.io/badge/luac-%232C2D72.svg?&style=for-the-badge&logo=lua&logoColor=white"/> </a>

  - #### Project I'm Working on:
    - <img alt="Going Green" src="https://img.shields.io/badge/1.05 - (Going Green) [Pack]-0078D6?style=for-the-badge&color=red"/>

  - #### Done:
    - <img alt="1.04" src="https://img.shields.io/badge/1.04 - [ALL DLC]-0078D6?style=for-the-badge&color=red"/>

  - #### OS:
    - <a href="https://en.wikipedia.org/wiki/Windows_10"> <img alt="Windows 10" src="https://img.shields.io/badge/Windows-0078D6?style=for-the-badge&logo=windows&logoColor=white" /> </a>

---


#### What does it do?

It uses the game "<b>Lua Engine</b>" to execute lua on it by using the <b>loadstring</b> address.
there are alternative ways that you can do instead of using the games loadstring
to execute <b>Lua</b> into the game. I just chosed the easier way of doing it.


---


#### Script to test the exploit:
```lua
Game.AdviserSay("CEO", "This is a test")
```

```lua
Game.GameOver()
```

You can start coding your own script if one of those work, I also listed <b>3</b> <a href="https://github.com/pwd0kernel/Prison-Architect-Execution#wiki">wiki</a> that you can use.
If you do not know <b>Lua</b> you can go here: <a href="https://www.lua.org/start.html"> <img alt="www.lua.org" src="https://img.shields.io/badge/www.lua.org-%232C2D72.svg?&logo=lua&logoColor=white"/> </a> to learn.

---


- #### Todo:
	- [ ] Add script decompiler (<b>it's done i just haven't released it yet</b>)
	- [ ] Make a UI
	- [ ] Auto Grab Addy's
	- [ ] Update to the latest version of <b>Prison Architect</b> (<b>Working on it</b>)
	- [x] Lua Execution
- #### Done:
  - [x] In game execution
  - [x] Clean Code & easy to understand
  - [x] Command line
  - [x] Detach the <b>DLL</b> from the game
  - [x] Work's on <b>1.04</b>


---


It does not work on <b>1.05</b> (<b>Going Green</b>)[Pack] I got to fix it but if you want you can do it on your own here's the addresses [Might want to change somethings up]. More addresses here: <a href= "https://github.com/pwd0kernel/Prison-Architect-Execution/blob/main/Codes%201.05/Addys.md">Click Here</a>


#### 1.05 Addresses (NEW)

|                                Function                                | Address  | Calling Convention |
| :--------------------------------------------------------------------: | :------: | :----------------: |
|    <a href="https://www.lua.org/source/5.1/lapi.c.html#lua_gettop"> <img alt="gettop" src="https://img.shields.io/badge/gettop-%232C2D72.svg?&style=for-the-badge&logo=lua&logoColor=white"/> </a>     | 0x9917E0 |       CDECL        |
|   <a href="https://www.lua.org/source/5.1/lauxlib.c.html#luaL_loadstring"> <img alt="loadstring" src="https://img.shields.io/badge/loadstring-%232C2D72.svg?&style=for-the-badge&logo=lua&logoColor=white"/> </a>   | 0x993390 |       CDECL        |
| <a href="https://www.lua.org/source/5.1/lapi.c.html#lua_pcall"> <img alt="pcall" src="https://img.shields.io/badge/pcall-%232C2D72.svg?&style=for-the-badge&logo=lua&logoColor=white"/> </a> | 0x991B20 |       CDECL        |

#### 1.04 Addresses (OLD)

|                                Function                                | Address  | Calling Convention |
| :--------------------------------------------------------------------: | :------: | :----------------: |
|    <a href="https://www.lua.org/source/5.1/lapi.c.html#lua_gettop"><img alt="gettop" src="https://img.shields.io/badge/gettop-%232C2D72.svg?&style=for-the-badge&logo=lua&logoColor=white"/></a>     | 0x955CA0 |       CDECL        |
|   <a href="https://www.lua.org/source/5.1/lauxlib.c.html#luaL_loadstring"><img alt="loadstring" src="https://img.shields.io/badge/loadstring-%232C2D72.svg?&style=for-the-badge&logo=lua&logoColor=white"/></a>   | 0x957850 |       CDECL        |
| <a href="https://www.lua.org/source/5.1/lapi.c.html#lua_pcall"><img alt="pcall" src="https://img.shields.io/badge/pcall-%232C2D72.svg?&style=for-the-badge&logo=lua&logoColor=white"/></a> | 0x955FE0 |       CDECL        |

<details Closed>
  <summary>Prison Architect [Going Green] Full Addresses</summary>
      <img alt="Going Green" src="https://img.shields.io/badge/Prison Architect [Going Green Executor] - Soon-0078D6?style=for-the-badge&color=green"/>

##### Some Addresses might be wrong (since its from a dumper)

| Function   | Address  | Calling Convention |
| ---------- | -------- | ------------------ |
| LOADSTRING | 0x993390 | CDECL              |
| LOAD       | 0x995F20 | CDECL              |
| PCALL      | 0x991B20 | CDECL              |
| GETTOP     | 0x9917E0 | CDECL              |
| RAWGETI    | 0x991ED0 | CDECL              |
| PUSHVALUE  | 0x991DF0 | CDECL              |
| CALL       | 0x9913B0 | CDECL              |
| TYPE       | 0x992610 | CDECL              |
| ISSTRING   | 0x991910 | CDECL              |
| REPLACE 	 | 0x992040 | CDECL 			       |
| TOLSTRING  | 0x992490 | CDECL              |
| ISNUMBER   | 0x9918D0 | CDECL              |
| TONUMBER   | 0x992510 | CDECL              |
| PUSHTHREAD | 0x991DC0 | CDECL              |
| INSERT     | 0x991850 | CDECL              |
| SETFENV    | 0x992110 | CDECL              |
| GETSTACK   | 0x994750 | CDECL              |
| GETINFO    | 0x994650 | CDECL              |
| PUSHVFSTRING | 0x991E20 | CDECL            |
| CONCAT     | 0x991460 | CDECL              |
| ERROR      | 0x991560 | CDECL              |
| SETTOP     | 0x992300 | CDECL              |
| SETMETATABLE | 0x992220 | CDECL            |
| GETMETATABLE | 0x991750 | CDECL            |
| PUSHNIL    | 0x991D50 | CDECL              |
| PUSHSTRING | 0x991D50 | CDECL              |
| RAWGET     | 0x991E90 | CDECL              |
| REMOVE     | 0x991FF0 | CDECL              |
| CHECKSTACK | 0x9913F0 | CDECL              |
| XMOVE      | 0x992660 | CDECL              |
| SETLEVEL   | 0x992200 | CDECL              |
| RESUME     | 0x9961C0 | CDECL              |
| NEWTHREAD  | 0x9919D0 | CDECL              |
| ISCFUNCTION  | 0x9918A0 | CDECL            |
| TOUSERDATA | 0x9925E0 | CDECL              |
| GETFIELD   | 0x9916F0 | CDECL              |
| RAWEQUAL   | 0x991E50 | CDECL              |
| PUSHNUMBER | 0x991D30 | CDECL              |
| TOBOOLEAN  | 0x992E20 | CDECL              |
| GETFENV    | 0x9912A0 | CDECL              |
| TOCFUNCTION | 0x53111470 | CDECL           |
| TOTHREAD   | 0x9925C0 | CDECL              |
| TOPOINTER  | 0x992550 | CDECL              |
| TYPENAME   | 0x992640 | CDECL              |
| PUSHINTEGER | 0x992940 | CDECL             |
| CREATETABLE | 0x9914E0 | CDECL             |
| PUSHCCLOSURE | 0x991BB0 | CDECL            |
| NEWUSERDATA | 0x991A10 | CDECL             |
| RAWSET      | 0x991F10 | CDECL             |

</details>

#### Current project working i'm on:
<details Closed>
  <summary>Prison Architect [Going Green Executor]</summary>
    <p align="center">
      <img src="https://www.prisonarchitect.com/packs/media/start/gg-logo-1d490392.png">
      <img alt="Going Green" src="https://img.shields.io/badge/Prison Architect [Going Green Executor] - Soon-0078D6?style=for-the-badge&color=green"/>
    </p>
</details>