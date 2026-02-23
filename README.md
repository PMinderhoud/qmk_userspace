# QMK Userspace

This is a template repository which allows for an external set of QMK keymaps to be defined and compiled. This is useful for users who want to maintain their own keymaps without having to fork the [main QMK repository](https://github.com/qmk/qmk_firmware). You must still fork the main QMK repository if writing firmware for a *new* keyboard.

## Howto configure your build targets

1. Run the normal `qmk setup` procedure if you haven't already done so -- see [QMK Docs](https://docs.qmk.fm/#/newbs) for details.
1. Fork this repository
1. Clone your fork to your local machine
1. Enable userspace in QMK config using `qmk config user.overlay_dir="$(realpath qmk_userspace)"`
1. Add a new keymap for your board using `qmk new-keymap`
    * This will create a new keymap in the `keyboards` directory, in the same location that would normally be used in the main QMK repository. For example, if you wanted to add a keymap for the Planck, it will be created in `keyboards/planck/keymaps/<your keymap name>`
    * You can also create a new keymap using `qmk new-keymap -kb <your_keyboard> -km <your_keymap>`
    * Alternatively, add your keymap manually by placing it in the location specified above.
    * `layouts/<layout name>/<your keymap name>/keymap.*` is also supported if you prefer the layout system
1. Add your keymap(s) to the build by running `qmk userspace-add -kb <your_keyboard> -km <your_keymap>`
    * This will automatically update your `qmk.json` file
    * Corresponding `qmk userspace-remove -kb <your_keyboard> -km <your_keymap>` will delete it
    * Listing the build targets can be done with `qmk userspace-list`
1. Commit your changes

## Howto build with GitHub

1. In the GitHub Actions tab, enable workflows
1. Push your changes above to your forked GitHub repository
1. Look at the GitHub Actions for a new actions run
1. Wait for the actions run to complete
1. Inspect the Releases tab on your repository for the latest firmware build

## Howto build locally

1. Run the normal `qmk setup` procedure if you haven't already done so -- see [QMK Docs](https://docs.qmk.fm/#/newbs) for details.
1. Fork this repository
1. Clone your fork to your local machine
1. `cd` into this repository's clone directory
1. Set global userspace path: `qmk config user.overlay_dir="$(realpath .)"` -- you MUST be located in the cloned userspace location for this to work correctly
    * This will be automatically detected if you've `cd`ed into your userspace repository, but the above makes your userspace available regardless of your shell location.
1. Compile normally: `qmk compile -kb your_keyboard -km your_keymap` or `make your_keyboard:your_keymap`

Alternatively, if you configured your build targets above, you can use `qmk userspace-compile` to build all of your userspace targets at once.

## Extra info

If you wish to point GitHub actions to a different repository, a different branch, or even a different keymap name, you can modify `.github/workflows/build_binaries.yml` to suit your needs.

To override the `build` job, you can change the following parameters to use a different QMK repository or branch:
```
    with:
      qmk_repo: qmk/qmk_firmware
      qmk_ref: master
```

If you wish to manually manage `qmk_firmware` using git within the userspace repository, you can add `qmk_firmware` as a submodule in the userspace directory instead. GitHub Actions will automatically use the submodule at the pinned revision if it exists, otherwise it will use the default latest revision of `qmk_firmware` from the main repository.

This can also be used to control which fork is used, though only upstream `qmk_firmware` will have support for external userspace until other manufacturers update their forks.

1. (First time only) `git submodule add https://github.com/qmk/qmk_firmware.git`
1. (To update) `git submodule update --init --recursive`
1. Commit your changes to your userspace repository


---

## pminderhoud keymap (beekeeb/piantor_pro)

### Compile command
```powershell
& "C:\QMK_MSYS\usr\bin\bash.exe" -l -c 'export MSYSTEM=MINGW64 && export PATH=/mingw64/bin:$PATH && cd /c/src/github/qmk_userspace && qmk compile -kb beekeeb/piantor_pro -km pminderhoud'
```

### Primary typing layer
**LESSWOOD** (layer 2)  a modified variant of Enthium V13, optimised for Dutch while keeping English typing efficient.
Reference: https://cyanophage.github.io/playground.html?layout=jyou%3Dxldpz*ciae-khtnsw%27%2C.%3B%2Fqmgfv%5Crb&mode=ergo&lan=dutch&thumb=r

### Finger map (LESSWOOD)

```
Left hand:
  Pinky stretch : `      B      \
  Pinky         : W      C(GUI) '
  Ring          : Y(TD)  I(Alt) ,
  Middle        : O      A(Ctl) J
  Index         : U      E(Sft) .      (= - / are index stretch)

Right hand:
  Index         : L      H(Sft) M      (Q K ; are index stretch)
  Middle        : D      T(Alt) G
  Ring          : P      N(Ctl) F
  Pinky         : V      S(GUI) Z
  Pinky stretch : [mute] X      [enter]

Thumbs (left)  : Enter/VST  Space/NAV  Tab/DIA
Thumbs (right) : BS/VST     R/SYM      Del/FNC
```

TD_Y: single tap = Y, double tap = IJ

### All layers

Home row mod notation: key^modifier (G=GUI, A=Alt, C=Ctrl, S=Shift)

**BASE (Recurva)**
```
 ---    F     R     D     P     V   |  QU    M     U     O     Y    MUTE
  `    S^G   N^A   T^C   C^S    B   |   .   H^S   E^C   A^A   I^G   /
  ⇧    Z     X     K     G     W   |   J    L     ;     '     ,     \
              ESC/Mouse SPC/Nav TAB/Dia | ENT/VS  BS/Sym DEL/Fn
```

**NIGHT**
```
 ESC   B     F     L     K    QU   |   P    G     O     U     .    MUTE
  `   N^G   S^A   H^C   T^S    M   |   Y   C^S   A^C   E^A   I^G  ENT
  ⇧    X     V     J     D     Z   |   '    W     ;     '     ,     \
                 ⇧  R/Nav TAB/Dia  |  BS/VS SPC/Sym DEL/Fn
```

**LESSWOOD** *(primary Dutch/English layer)*
```
  `    W    Y/IJ   O     U     =   |  QU    L     D     P     V    MUTE
  B   C^G   I^A   A^C   E^S    -   |   K   H^S   T^A   N^C   S^G   X
  \    '     ,     J     .     /   |   ;    M     G     F     Z    ENT
              ENT/VS  SPC/Nav TAB/Dia | BS/VS   R/Sym  DEL/Fn
```

**DIACRIT** *(hold TAB)*
```
 LCK   ---   :-(   :-)   €    ---  |   u`   o`   e`   a`   i`   ---
 ---    ß     ñ     ç     ⇧   ---  |   ü    ö    ë    ä    ï    ---
 ---   ---   ---   ---   ---   ---  |   ú    ó    é    á    í    ---
                   ---   ---   ---  |  ---  ---  ---
```
Circumflex accents (â ê î ô û) via combo: trema + aigu on diacrit layer.

**SYM** *(hold BS or R)*
```
 LCK   %     +     -     $     {   |   }    7     8     9     @     :
  `    !     <     >    =^S    (   |   )    1     2     3     0     ?
  ~    ^     *     /     _     [   |   ]    4     5     6     .    ---
                   &    ---    |   |  ---  ---   ---
```

**NAV** *(hold SPC)*
```
 LCK  PrvDsk NwDsk ClDsk NxDsk SelWd | Win+Tab C+← Sf+F10  F11  C+→   F12
 PrtSc  GUI   ALT   CTL   SFT  C+A  | PrtSc   ←    ↓    ↑    →    F8
 C+Y   C+Z   C+X   C+C   C+V   W+V  | WebSch Home PgDn  PgUp  End  S+C+\
                   ---   ---   ---  |  ENT   ---   ---
```

**FUNC** *(hold DEL)*
```
 LCK  CONST CAMEL PASCAL CAPS CAPS | DM_Stop  F9   F10   F11   F12  ADJUST
 ---   GUI   ALT   CTL   SFT  DM1  | DM_Rec1  F5    F6    F7    F8   ---
 ---  W+C+2 W+C+3 W+C+4 W+S+~ DM2 | DM_Rec2  F1    F2    F3    F4   ---
                  ADJUST ---   ---  |  ---   ---   ---
```

**VSTUDIO** *(hold ENT or BS)*
```
 LCK  Format PrvErr Brkpt  Debug StpDbg | ---  GoFile  GoDef  PkDef  ---   ---
 ---  Search NxErr StepIn StpOvr StpOut | GoAll  Cmd  GoImpl ShowPrm ---   ---
 ---   ---    ---    ---    ---    ---  | ---  GoLine  GoRef   ---    ---   ---
               QckAct  IntelliS  Copilot | QckAct IntelliS Copilot
```

**MOUSE** *(hold ESC — BASE only)*
```
 LCK   ---   ---   ---   ---   ---  | WhlUp  Btns    ↑   DblClk Fast  ---
 ---   GUI   ALT   CTL   SFT   ---  | WhlDn   ←      ↓     →   Slow  ---
 ---   ---   ---   ---   ---   ---  |  Rel   Hold  Btn1  Btn2  Btn3   ---
                   ---   ---   ---  |  ---   ---   ---
```

**ADJUST** *(hold F12 on FUNC)*
```
BOOT   ---   ---   ---   ---   ---  |  ---    ---    ---       ---     ---  ---
 ---   ---   ---   ---   ---   ---  |  ---   BASE  NIGHT  LESSWOOD   GAME  ---
 ---   ---   ---   ---   ---   ---  |  ---    ---    ---       ---     ---  ---
                   ---   ---   ---  |  ---   ---   ---
```

**GAME**
```
 ESC   1     2     3     4     5   |   6     7     8     9     0    BASE
  `   TAB    Q     W     E     R   |   Y     U     I     O     P    BSPC
 CTL  SFT    A     S     D     F   |   H     J     K     L     ;    ENT
              ALT   SPC    G       |   T     B    SFT
```

### Known issues / design notes
- **R (6.4% Dutch) is on the right middle thumb**  largest remaining weakness. Almost every Dutch word contains R (*er, voor, door, meer, over, naar*). Swapping R with Y (ring top) would fix this; Y costs almost nothing in Dutch (0.035%).
- **J-O is a same-finger bigram** (both left middle)  mitigated by the Y+O combo below.

### Combos (LESSWOOD-specific)

| Keys | Output | Purpose |
|---|---|---|
| `,` + `J` | `:` | ring + middle bottom, same position as BASE (X+K) |
| `J` + `.` | `?` | middle + index bottom, same position as BASE (K+G) |
| `Y` + `O` | `jo` / `Jo` | Fixes J-O same-finger bigram; common Dutch prefix (*jong, jou, jouw*) |
| `Y` + `O` + `U` | `jou` / `Jou` | Dutch "you" (object form), very common |
| `W` + `Y` | `wij` / `Wij` | Dutch "we/us" (subject form), very common |

All combos respect shift state for capitalisation.
