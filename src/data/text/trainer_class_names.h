const u8 gTrainerClassNames[][27] = { // Long enough to fit "Team Rainbow Rocket Leader"
    [TRAINER_CLASS_PKMN_TRAINER_1] = _("Pokémon Trainer"),
    [TRAINER_CLASS_PKMN_TRAINER_2] = _("Pokémon Trainer"),
    [TRAINER_CLASS_HIKER] = _("Hiker"),
    [TRAINER_CLASS_TEAM_AQUA] = _("Team Aqua"),
    [TRAINER_CLASS_PKMN_BREEDER] = _("Pokémon Breeder"),
    [TRAINER_CLASS_COOLTRAINER] = _("Ace Trainer"),
    [TRAINER_CLASS_BIRD_KEEPER] = _("Bird Keeper"),
    [TRAINER_CLASS_COLLECTOR] = _("Collector"),
    [TRAINER_CLASS_SWIMMER_M] = _("Swimmer"),
    [TRAINER_CLASS_TEAM_MAGMA] = _("Team Magma"),
    [TRAINER_CLASS_EXPERT] = _("Expert"),
    [TRAINER_CLASS_AQUA_ADMIN] = _("Team Aqua Admin"),
    [TRAINER_CLASS_BLACK_BELT] = _("Black Belt"),
    [TRAINER_CLASS_AQUA_LEADER] = _("Team Aqua Leader"),
    [TRAINER_CLASS_HEX_MANIAC] = _("Hex Maniax"),
    [TRAINER_CLASS_AROMA_LADY] = _("Aroma Lady"),
    [TRAINER_CLASS_RUIN_MANIAC] = _("Ruin Maniac"),
    [TRAINER_CLASS_INTERVIEWER] = _("Interviewer"),
    [TRAINER_CLASS_TUBER_F] = _("Tuber"),
    [TRAINER_CLASS_TUBER_M] = _("Tuber"),
    [TRAINER_CLASS_LADY] = _("Lady"),
    [TRAINER_CLASS_BEAUTY] = _("Beauty"),
    [TRAINER_CLASS_RICH_BOY] = _("Rich Boy"),
    [TRAINER_CLASS_POKEMANIAC] = _("Poké Maniac"),
    [TRAINER_CLASS_GUITARIST] = _("Guitarist"),
    [TRAINER_CLASS_KINDLER] = _("Kindler"),
    [TRAINER_CLASS_CAMPER] = _("Camper"),
    [TRAINER_CLASS_PICNICKER] = _("Picnicker"),
    [TRAINER_CLASS_BUG_MANIAC] = _("Bug Maniac"),
    [TRAINER_CLASS_PSYCHIC] = _("Psychic"),
    [TRAINER_CLASS_GENTLEMAN] = _("Gentleman"),
    [TRAINER_CLASS_ELITE_FOUR] = _("Elite Four"),
    [TRAINER_CLASS_LEADER] = _("Leader"),
    [TRAINER_CLASS_SCHOOL_KID] = _("School Kid"),
    [TRAINER_CLASS_SR_AND_JR] = _("Senpai and Kohai"),
    [TRAINER_CLASS_WINSTRATE] = _("Winstrate"),
    [TRAINER_CLASS_POKEFAN] = _("Poké Fan"),
    [TRAINER_CLASS_YOUNGSTER] = _("Youngster"),
    [TRAINER_CLASS_CHAMPION] = _("Champion"),
    [TRAINER_CLASS_FISHERMAN] = _("Fisherman"),
    [TRAINER_CLASS_TRIATHLETE] = _("Triathlete"),
    [TRAINER_CLASS_DRAGON_TAMER] = _("Dragon Tamer"),
    [TRAINER_CLASS_NINJA_BOY] = _("Ninja Boy"),
    [TRAINER_CLASS_BATTLE_GIRL] = _("Battle Girl"),
    [TRAINER_CLASS_PARASOL_LADY] = _("Parasol Lady"),
    [TRAINER_CLASS_SWIMMER_F] = _("Swimmer"),
    [TRAINER_CLASS_TWINS] = _("Twins"),
    [TRAINER_CLASS_SAILOR] = _("Sailor"),
    [TRAINER_CLASS_COOLTRAINER_2] = _("Ace Trainer"),
    [TRAINER_CLASS_MAGMA_ADMIN] = _("Team Magma Admin"),
    [TRAINER_CLASS_RIVAL] = _("Pokémon Trainer"),
    [TRAINER_CLASS_BUG_CATCHER] = _("Bug Catcher"),
    [TRAINER_CLASS_PKMN_RANGER] = _("Pokémon Ranger"),
    [TRAINER_CLASS_MAGMA_LEADER] = _("Team Magma Leader"),
    [TRAINER_CLASS_LASS] = _("Lass"),
    [TRAINER_CLASS_YOUNG_COUPLE] = _("Young Couple"),
    [TRAINER_CLASS_OLD_COUPLE] = _("Old Couple"),
    [TRAINER_CLASS_SIS_AND_BRO] = _("Sister and Brother"),
    [TRAINER_CLASS_SALON_MAIDEN] = _("Salon Maiden"),
    [TRAINER_CLASS_DOME_ACE] = _("Dome Ace"),
    [TRAINER_CLASS_PALACE_MAVEN] = _("Palace Maven"),
    [TRAINER_CLASS_ARENA_TYCOON] = _("Arena Tycoon"),
    [TRAINER_CLASS_FACTORY_HEAD] = _("Factory Head"),
    [TRAINER_CLASS_PIKE_QUEEN] = _("Pike Queen"),
    [TRAINER_CLASS_PYRAMID_KING] = _("Pyramid King"),
    [TRAINER_CLASS_RS_PROTAG] = _("Pokémon Trainer"),

    // TRANSITION TESTS START
    [TRAINER_CLASS_TRANSITION_01] = _("Battle Club Trainer"),
    [TRAINER_CLASS_TRANSITION_02] = _("Battle Club Coach"),
    [TRAINER_CLASS_TRANSITION_03] = _("Team Rocket"),
    [TRAINER_CLASS_TRANSITION_04] = _("Silph Co."),
    [TRAINER_CLASS_TRANSITION_05] = _("Team Magma"),
    [TRAINER_CLASS_TRANSITION_06] = _("Team Aqua"),
    [TRAINER_CLASS_TRANSITION_07] = _("Team Galactic"),
    [TRAINER_CLASS_TRANSITION_08] = _("Team Plasma"),
    [TRAINER_CLASS_TRANSITION_09] = _("Team Flare"),
    [TRAINER_CLASS_TRANSITION_10] = _("Team Skull"),
    [TRAINER_CLASS_TRANSITION_11] = _("Aether Foundation"),
    [TRAINER_CLASS_TRANSITION_12] = _("Team Rainbow Rocket"),
    [TRAINER_CLASS_TRANSITION_13] = _("Team Yell"),
    [TRAINER_CLASS_TRANSITION_14] = _("Macro Cosmos's"),
    [TRAINER_CLASS_TRANSITION_15] = _("Macro Cosmos's"),
    [TRAINER_CLASS_TRANSITION_16] = _("Galaxy Expedition Team"),
    [TRAINER_CLASS_TRANSITION_17] = _("Team Star"),
    [TRAINER_CLASS_TRANSITION_18] = _("Team Break"),
    [TRAINER_CLASS_TRANSITION_19] = _("Amnesty Institute"),
    [TRAINER_CLASS_TRANSITION_20] = _("Gym Trainer"),
    [TRAINER_CLASS_TRANSITION_21] = _("Gym Leader"),
    [TRAINER_CLASS_TRANSITION_22] = _("Champion"),
    [TRAINER_CLASS_TRANSITION_23] = _("Hoopa"),
    [TRAINER_CLASS_TRANSITION_24] = _("Transition Tester No."),
    [TRAINER_CLASS_TRANSITION_25] = _("Transition Tester No."),
    [TRAINER_CLASS_TRANSITION_26] = _("Transition Tester No."),
    [TRAINER_CLASS_TRANSITION_27] = _("Transition Tester No."),
    [TRAINER_CLASS_TRANSITION_28] = _("Transition Tester No."),
    [TRAINER_CLASS_TRANSITION_29] = _("Transition Tester No."),
    [TRAINER_CLASS_TRANSITION_30] = _("Transition Tester No."),
    [TRAINER_CLASS_TRANSITION_31] = _("Transition Tester No."),
    [TRAINER_CLASS_TRANSITION_32] = _("Transition Tester No."),
    [TRAINER_CLASS_TRANSITION_33] = _("Transition Tester No."),
    [TRAINER_CLASS_TRANSITION_34] = _("Transition Tester No."),
    [TRAINER_CLASS_TRANSITION_35] = _("Transition Tester No."),
    [TRAINER_CLASS_TRANSITION_36] = _("Transition Tester No."),
    [TRAINER_CLASS_TRANSITION_37] = _("Transition Tester No.")
    // TRANSITION TESTS END
};
