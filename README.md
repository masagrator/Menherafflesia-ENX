# Menherafflesia-ENX
`Menherafflesia: Flowering Abyss` (メンヘラフレシア フラワリングアビス) English translation mod for Nintendo Switch

This translation mod is based on PC mods from `ijedi1234` and `Tico Translations` that you can find here:<br>
https://ijedi1234.itch.io/menherafflesia-flowering-abyss-english-patch<br>
https://tico-tl.tumblr.com/post/650061291294277632/menherafflesia

# Installation

Mod is compatible only with version 1.0.0 of game.

Emulators are not supported by me, but it doesn't mean mod won't work with them.

1. Download MeherafflesiaENX.zip from Releases, unpack it.
2. Copy `atmosphere` folder to the root of your sdcard, accepting any popup about overwriting folders
3. Run game

# Making mod manually

Requirements:
- Python 3.10+ (and library: `lzss`)

For plugin compilation you need:
- devkitpro (with `switch-dev` package installed)

To compile plugin, just run `make` inside plugin folder.<br>
To compile script run `sn/Prepare.cmd` on Windows or in bash opened in root of `sn` folder enter lines:
```cmd
python3 InjectTexts.py 
python3 sn_assembler_re.py Patched
```

Copy `01004B30171B8000` folder from `sn` folder to 
```
atmosphere/contents/
```
Copy `subsdk9` and `main.npdm` from `plugin/deploy` folder to
```
atmosphere/contents/01004B30171B8000/exefs
```

Assets are available only from Release page.

# Notes
- Why plugin is necessary:
    - Replacing XTX textures with PNG on the fly
    - Changed Clear Password from Japanese text to English text by also blocking swkbd to use only ASCII characters
    - Translated hardcoded chapter names, notifications, Playing Log texts, settings descriptions, scenario endings names
- Ported translation has some slight changes to better fit into how text is rendered in Regista engine. Fixed also multiple mistranslations from `ijedi1234`'s mod.
- On top of porting original fantranslations I have also:
	- Restored all removed texts affected by censorship
    - Translated all movies
    - Translated textures unique to Switch release
    - Replaced ascii glyphs in original fonts with glyphs rendered with Noto Sans Mono ExtraCondensed Regular and Bold
- Scenario files were altered to not use precalculated animations for chapters names and endings names, instead using message text rendering. Reason is because there was not enough informations about how to decode animation table included with each file representing one text.
- This release is based on `ijedi1234` work which used machine translation (`ijedi1234` never admitted to using it, but by looking at translation quality it shows signs of using chatGPT-like tools). Since I'm good at finding discrepancies in translation when lines are voiced, I have fixed many mistranslations (but because I'm not native English speaker I was using Google Translate to translate Japanese to English, and then I was fixing discrepancies - Google Translate was doing much better job at translation than GPT). I didn't use Tico Translations as base solely because scenario files of original game have completely different layout than Flowering Abyss version (plus there are some differences in scenarios), so it would take much longer time to finish this mod. 

# Thanks to

- `ijedi1234` for making translation mod, this mod is mainly based on this translation (not directly involved with this project)
- `Tico Translations` for translating scenes that in Flowering Abyss version are stored as videos and were not translated in `ijedi1234`'s mod (not directly involved with this project)
