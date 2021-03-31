<p align="center">
  <img src="https://prisonarchitect.paradoxwikis.com/images/thumb/7/7f/Prison_Architect_logo.png/300px-Prison_Architect_logo.png">
</p>

---

#### Information

  - #### How to use:
    - Compile the DLL then inject it in Prison Architect with a DLL injector. Make sure you compile it in x32. Make sure to run **Prison Architect.exe** Do not run **Prison Architect64.exe**
  - #### Wiki:
    - Prison Architect Lua Wiki: [Click Here](https://prisonarchitect.paradoxwikis.com/Lua)
    - Prison Architect Lua Wiki(best): [Click Here](https://www.prisonarchitectwiki.com/wiki/Modding_guide)
    - Prison Architect Lua Guide: [Click Here](https://steamcommunity.com/sharedfiles/filedetails/?id=480978426)
  - #### Information:
    - x32
    - Loadstring Execution
    - Command line
  - #### LuaC Functions Using:
    - gettop
    - pcall
    - loadstring
  - #### Language Used:
    - ![C++](https://img.shields.io/badge/-C++-fff?&logo=c%2b%2b&logoColor=00599C)
    - ![C](https://img.shields.io/badge/-C-fff?&logo=c&logoColor=00599C)
    - ![LuaC](https://img.shields.io/badge/-LuaC-fff?&logo=Lua&logoColor=00599C)
  - #### Working on:
	- [ ] 1.05 (going green) [Pack]
	- [X] 1.04 [ALL DLC]

---

#### Script to test the exploit:
```lua
Game.AdviserSay("CEO", "This is a test")
```
```lua
Game.GameOver()	
```

You can start coding your own script if one of those work, I also listed 3 wiki that you can use.

---

- #### Todo:
	- [ ] Add script decompiler
	- [ ] Make a UI
	- [ ] Auto Grab Addy's
	- [ ] Update to the latest version of Prison Architect
	- [x] Lua Execution
---

It does not work on 1.05 (Going Green)[Pack] I got to fix it but if you want you can do it on your own here's the addresses

#### 1.05 [Addresses] (NEW)

|  Function  | Address  | Calling Convention |
| :--------: | :------: | :----------------: |
|   GETTOP   | 0x9917E0 |       CDECL        |
| LOADSTRING | 0x993390 |       CDECL        |
|   PCALL    | 0x991B20 |       CDECL        |

#### 1.04 [Addresses] (OLD)

|  Function  | Address  | Calling Convention |
| :--------: | :------: | :----------------: |
|   GETTOP   | 0x955CA0 |       CDECL        |
| LOADSTRING | 0x957850 |       CDECL        |
|   PCALL    | 0x955FE0 |       CDECL        |

### Current project i'm on:

<p align="center">
  <img src="https://www.prisonarchitect.com/packs/media/start/gg-logo-1d490392.png">
</p>