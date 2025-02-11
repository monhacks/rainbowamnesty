#ifndef GUARD_STARTER_CHOOSE_H
#define GUARD_STARTER_CHOOSE_H

extern const u16 gBirchBagGrass_Pal[];
extern const u32 gBirchBagTilemap[];
extern const u32 gBirchGrassTilemap[];
extern const u32 gBirchBagGrass_Gfx[];
extern const u32 gPokeballSelection_Gfx[];

extern const u16 gBirchBagGrass_Pal_Original[];
extern const u32 gBirchBagTilemap_Original[];
extern const u32 gBirchGrassTilemap_Original[];
extern const u32 gBirchBagGrass_Gfx_Original[];

extern const u16 gBirchBagGrass_Pal_Psyduck[];
extern const u32 gBirchBagTilemap_Psyduck[];
extern const u32 gBirchGrassTilemap_Psyduck[];
extern const u32 gBirchBagGrass_Gfx_Psyduck[];

u16 GetStarterPokemon(u16 chosenStarterId);
void CB2_ChooseStarter(void);

#endif // GUARD_STARTER_CHOOSE_H
