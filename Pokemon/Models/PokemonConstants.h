//
//  PokemonConstants.h
//  Pokemon
//
//  Created by Kaijie Yu on 2/18/12.
//  Copyright (c) 2012 Kjuly. All rights reserved.
//

#pragma mark - Pokemon

///
// Pokemon Type
//
typedef enum {
  kPokemonTypeNormal   = 1,
  kPokemonTypeFire,
  kPokemonTypeWater,
  kPokemonTypeElectric,
  kPokemonTypeGrass,
  kPokemonTypeIce,
  kPokemonTypeFighting,
  kPokemonTypePoison,
  kPokemonTypeGround,
  kPokemonTypeFlying,
  kPokemonTypePsychic,
  kPokemonTypeBug,
  kPokemonTypeRock,
  kPokemonTypeGhost,
  kPokemonTypeDragon,
  kPokemonTypeDark,
  kPokemonTypeSteel
}PokemonType;

///
// Pokemon Species
//
typedef enum {
  kPokemonSpeciesAbundant = 1,
  kPokemonSpeciesAcorn,
  kPokemonSpeciesAlpha,
  kPokemonSpeciesAngler,
  kPokemonSpeciesAnteater,
  kPokemonSpeciesAntPit,
  kPokemonSpeciesAquaMouse,
  kPokemonSpeciesAquaRabbit,
  kPokemonSpeciesArmor,
  kPokemonSpeciesArmorBird,
  kPokemonSpeciesArmThrust,
  kPokemonSpeciesAstralBody,
  kPokemonSpeciesAtrocious,
  kPokemonSpeciesAttaching,
  kPokemonSpeciesAura,
  kPokemonSpeciesAurora,
  kPokemonSpeciesAvianoid,
  kPokemonSpeciesAxeJaw,
  kPokemonSpeciesBagworm,
  kPokemonSpeciesBallRoll,
  kPokemonSpeciesBallWhale,
  kPokemonSpeciesBall,
  kPokemonSpeciesBalloon,
  kPokemonSpeciesBarnacle,
  kPokemonSpeciesBarrier,
  kPokemonSpeciesBashBuffalo,
  kPokemonSpeciesBat,
  kPokemonSpeciesBeak,
  kPokemonSpeciesBeaver,
  kPokemonSpeciesBeckon,
  kPokemonSpeciesBeehive,
  kPokemonSpeciesBell,
  kPokemonSpeciesBigBoss,
  kPokemonSpeciesBigEater,
  kPokemonSpeciesBigHearted,
  kPokemonSpeciesBigHorn,
  kPokemonSpeciesBigJaw,
  kPokemonSpeciesBigVoice,
  kPokemonSpeciesBird,
  kPokemonSpeciesBite,
  kPokemonSpeciesBivalve,
  kPokemonSpeciesBlade,
  kPokemonSpeciesBlast,
  kPokemonSpeciesBlaze,
  kPokemonSpeciesBlazing,
  kPokemonSpeciesBlimp,
  kPokemonSpeciesBlossom,
  kPokemonSpeciesBoltStrike,
  kPokemonSpeciesBoneKeeper,
  kPokemonSpeciesBoneVulture,
  kPokemonSpeciesBonsai,
  kPokemonSpeciesBounce,
  kPokemonSpeciesBoundary,
  kPokemonSpeciesBouquet,
  kPokemonSpeciesBrain,
  kPokemonSpeciesBright,
  kPokemonSpeciesBronze,
  kPokemonSpeciesBronzeBell,
  kPokemonSpeciesBrutal,
  kPokemonSpeciesBubbleJet,
  kPokemonSpeciesBud,
  kPokemonSpeciesBugCatcher,
  kPokemonSpeciesBulb,
  kPokemonSpeciesButterfly,
  kPokemonSpeciesCactus,
  kPokemonSpeciesCandle,
  kPokemonSpeciesCarefree,
  kPokemonSpeciesCaring,
  kPokemonSpeciesCatFerret,
  kPokemonSpeciesCatty,
  kPokemonSpeciesCavalry,
  kPokemonSpeciesCave,
  kPokemonSpeciesCavern,
  kPokemonSpeciesCell,
  kPokemonSpeciesCentipede,
  kPokemonSpeciesCerebral,
  kPokemonSpeciesCheering,
  kPokemonSpeciesCherry,
  kPokemonSpeciesChick,
  kPokemonSpeciesChimp,
  kPokemonSpeciesChinchilla,
  kPokemonSpeciesClamping,
  kPokemonSpeciesClap,
  kPokemonSpeciesClassyCat,
  kPokemonSpeciesClayDoll,
  kPokemonSpeciesClearWing,
  kPokemonSpeciesCoal,
  kPokemonSpeciesCobra,
  kPokemonSpeciesCoconut,
  kPokemonSpeciesCocoon,
  kPokemonSpeciesCoffin,
  kPokemonSpeciesColorSwap,
  kPokemonSpeciesColossal,
  kPokemonSpeciesColt,
  kPokemonSpeciesCompass,
  kPokemonSpeciesCompressed,
  kPokemonSpeciesContinent,
  kPokemonSpeciesCoral,
  kPokemonSpeciesCottonBird,
  kPokemonSpeciesCottonPuff,
  kPokemonSpeciesCottonweed,
  kPokemonSpeciesCourtship,
  kPokemonSpeciesCricket,
  kPokemonSpeciesCruel,
  kPokemonSpeciesCrystal,
  kPokemonSpeciesCurlipede,
  kPokemonSpeciesCyclone,
  kPokemonSpeciesDark,
  kPokemonSpeciesDarkness,
  kPokemonSpeciesDeceiver,
  kPokemonSpeciesDeepBlack,
  kPokemonSpeciesDeepSea,
  kPokemonSpeciesDelivery,
  kPokemonSpeciesDesertCroc,
  kPokemonSpeciesDevious,
  kPokemonSpeciesDiapered,
  kPokemonSpeciesDisaster,
  kPokemonSpeciesDischarge,
  kPokemonSpeciesDiscipline,
  kPokemonSpeciesDiving,
  kPokemonSpeciesDNA,
  kPokemonSpeciesDopey,
  kPokemonSpeciesDragon,
  kPokemonSpeciesDreamEater,
  kPokemonSpeciesDrill,
  kPokemonSpeciesDrowzing,
  kPokemonSpeciesDuck,
  kPokemonSpeciesEaglet,
  kPokemonSpeciesEgg,
  kPokemonSpeciesElectric,
  kPokemonSpeciesElectrified,
  kPokemonSpeciesEleFish,
  kPokemonSpeciesEleSpider,
  kPokemonSpeciesEleSquirrel,
  kPokemonSpeciesEmanation,
  kPokemonSpeciesEmbrace,
  kPokemonSpeciesEmotion,
  kPokemonSpeciesEmperor,
  kPokemonSpeciesEndurance,
  kPokemonSpeciesEon,
  kPokemonSpeciesEruption,
  kPokemonSpeciesEvolution,
  kPokemonSpeciesEyeball,
  kPokemonSpeciesFace,
  kPokemonSpeciesFairy,
  kPokemonSpeciesFangScorpion,
  kPokemonSpeciesFangSnake,
  kPokemonSpeciesFeeling,
  kPokemonSpeciesFireHorse,
  kPokemonSpeciesFireMouse,
  kPokemonSpeciesFirePig,
  kPokemonSpeciesFirefly,
  kPokemonSpeciesFirstBird,
  kPokemonSpeciesFish,
  kPokemonSpeciesFiveStar,
  kPokemonSpeciesFixation,
  kPokemonSpeciesFlame,
  kPokemonSpeciesFlash,
  kPokemonSpeciesFloatWhale,
  kPokemonSpeciesFloating,
  kPokemonSpeciesFlower,
  kPokemonSpeciesFlowering,
  kPokemonSpeciesFlycatcher,
  kPokemonSpeciesFlyscorpion,
  kPokemonSpeciesForbidden,
  kPokemonSpeciesForest,
  kPokemonSpeciesFormidable,
  kPokemonSpeciesFossil,
  kPokemonSpeciesFox,
  kPokemonSpeciesFreeze,
  kPokemonSpeciesFreezing,
  kPokemonSpeciesFreshSnow,
  kPokemonSpeciesFrog,
  kPokemonSpeciesFrostTree,
  kPokemonSpeciesFruit,
  kPokemonSpeciesGas,
  kPokemonSpeciesGear,
  kPokemonSpeciesGenetic,
  kPokemonSpeciesGeyser,
  kPokemonSpeciesGleamEyes,
  kPokemonSpeciesGoldfish,
  kPokemonSpeciesGolem,
  kPokemonSpeciesGrassMonkey,
  kPokemonSpeciesGrassSnake,
  kPokemonSpeciesGrassland,
  kPokemonSpeciesGratitude,
  kPokemonSpeciesGripper,
  kPokemonSpeciesGrove,
  kPokemonSpeciesGuts,
  kPokemonSpeciesHairyBug,
  kPokemonSpeciesHandstand,
  kPokemonSpeciesHappiness,
  kPokemonSpeciesHardShell,
  kPokemonSpeciesHeadButt,
  kPokemonSpeciesHearing,
  kPokemonSpeciesHeavyweight,
  kPokemonSpeciesHerb,
  kPokemonSpeciesHermitCrab,
  kPokemonSpeciesHibernator,
  kPokemonSpeciesHighTemp,
  kPokemonSpeciesHippo,
  kPokemonSpeciesHoodlum,
  kPokemonSpeciesHostile,
  kPokemonSpeciesHumanShape,
  kPokemonSpeciesHumming,
  kPokemonSpeciesHypnosis,
  kPokemonSpeciesIceBreak,
  kPokemonSpeciesIceberg,
  kPokemonSpeciesIcySnow,
  kPokemonSpeciesIllusionFox,
  kPokemonSpeciesImitation,
  kPokemonSpeciesInsect,
  kPokemonSpeciesIntimidation,
  kPokemonSpeciesIron,
  kPokemonSpeciesIronAnt,
  kPokemonSpeciesIronArmor,
  kPokemonSpeciesIronBall,
  kPokemonSpeciesIronClaw,
  kPokemonSpeciesIronLeg,
  kPokemonSpeciesIronSnake,
  kPokemonSpeciesIronWill,
  kPokemonSpeciesJellyfish,
  kPokemonSpeciesJet,
  kPokemonSpeciesJolly,
  kPokemonSpeciesJubilee,
  kPokemonSpeciesJudo,
  kPokemonSpeciesKarate,
  kPokemonSpeciesKicking,
  kPokemonSpeciesKingElephant,
  kPokemonSpeciesKiss,
  kPokemonSpeciesKite,
  kPokemonSpeciesKitten,
  kPokemonSpeciesKnowledge,
  kPokemonSpeciesLamp,
  kPokemonSpeciesLandShark,
  kPokemonSpeciesLandSnake,
  kPokemonSpeciesLava,
  kPokemonSpeciesLavaDome,
  kPokemonSpeciesLazy,
  kPokemonSpeciesLeaf,
  kPokemonSpeciesLeafWrapped,
  kPokemonSpeciesLegendary,
  kPokemonSpeciesLicking,
  kPokemonSpeciesLight,
  kPokemonSpeciesLightning,
  kPokemonSpeciesLittleBear,
  kPokemonSpeciesLiveCoal,
  kPokemonSpeciesLizard,
  kPokemonSpeciesLonely,
  kPokemonSpeciesLongevity,
  kPokemonSpeciesLongBody,
  kPokemonSpeciesLongLeg,
  kPokemonSpeciesLongNeck,
  kPokemonSpeciesLongNose,
  kPokemonSpeciesLongTail,
  kPokemonSpeciesLookout,
  kPokemonSpeciesLoudNoise,
  kPokemonSpeciesLoyalDog,
  kPokemonSpeciesLunar,
  kPokemonSpeciesLuring,
  kPokemonSpeciesMach,
  kPokemonSpeciesMagical,
  kPokemonSpeciesMagnet,
  kPokemonSpeciesMagnetArea,
  kPokemonSpeciesManipulate,
  kPokemonSpeciesMantis,
  kPokemonSpeciesMantle,
  kPokemonSpeciesMarionette,
  kPokemonSpeciesMartialArts,
  kPokemonSpeciesMeditate,
  kPokemonSpeciesMegaFirePig,
  kPokemonSpeciesMegapede,
  kPokemonSpeciesMegaton,
  kPokemonSpeciesMelody,
  kPokemonSpeciesMeteorite,
  kPokemonSpeciesMilkCow,
  kPokemonSpeciesMime,
  kPokemonSpeciesMitosis,
  kPokemonSpeciesMold,
  kPokemonSpeciesMole,
  kPokemonSpeciesMoonlight,
  kPokemonSpeciesMoth,
  kPokemonSpeciesMouse,
  kPokemonSpeciesMudFish,
  kPokemonSpeciesMultiplying,
  kPokemonSpeciesMuscular,
  kPokemonSpeciesMushroom,
  kPokemonSpeciesMusicNote,
  kPokemonSpeciesMysterious,
  kPokemonSpeciesMystic,
  kPokemonSpeciesNeon,
  kPokemonSpeciesNewSpecies,
  kPokemonSpeciesNinja,
  kPokemonSpeciesNumb,
  kPokemonSpeciesOgreDarner,
  kPokemonSpeciesOgreScorpion,
  kPokemonSpeciesOldShrimp,
  kPokemonSpeciesOre,
  kPokemonSpeciesOwl,
  kPokemonSpeciesPainter,
  kPokemonSpeciesPaleozoic,
  kPokemonSpeciesParent,
  kPokemonSpeciesParental,
  kPokemonSpeciesPatient,
  kPokemonSpeciesPenguin,
  kPokemonSpeciesPig,
  kPokemonSpeciesPigMonkey,
  kPokemonSpeciesPincer,
  kPokemonSpeciesPitchBlack,
  kPokemonSpeciesPlasma,
  kPokemonSpeciesPlate,
  kPokemonSpeciesPlayful,
  kPokemonSpeciesPlayhouse,
  kPokemonSpeciesPlumpMouse,
  kPokemonSpeciesPoisonBag,
  kPokemonSpeciesPoisonBee,
  kPokemonSpeciesPoisonGas,
  kPokemonSpeciesPoisonMoth,
  kPokemonSpeciesPoisonPin,
  kPokemonSpeciesPolkaDot,
  kPokemonSpeciesPondSkater,
  kPokemonSpeciesPredator,
  kPokemonSpeciesPride,
  kPokemonSpeciesPrim,
  kPokemonSpeciesPrototurtle,
  kPokemonSpeciesPSI,
  kPokemonSpeciesPunching,
  kPokemonSpeciesPuppet,
  kPokemonSpeciesPuppy,
  kPokemonSpeciesRabbit,
  kPokemonSpeciesRainbow,
  kPokemonSpeciesRegal,
  kPokemonSpeciesRendezvous,
  kPokemonSpeciesRenegade,
  kPokemonSpeciesRequiem,
  kPokemonSpeciesRiverCrab,
  kPokemonSpeciesRock,
  kPokemonSpeciesRockHead,
  kPokemonSpeciesRockInn,
  kPokemonSpeciesRockPeak,
  kPokemonSpeciesRockSkin,
  kPokemonSpeciesRockSnake,
  kPokemonSpeciesRogue,
  kPokemonSpeciesRoyal,
  kPokemonSpeciesRuffian,
  kPokemonSpeciesRushing,
  kPokemonSpeciesSavage,
  kPokemonSpeciesScarecrow,
  kPokemonSpeciesScarf,
  kPokemonSpeciesScorpion,
  kPokemonSpeciesScout,
  kPokemonSpeciesScratchCat,
  kPokemonSpeciesScreech,
  kPokemonSpeciesScuffle,
  kPokemonSpeciesSeaBasin,
  kPokemonSpeciesSeaDrifter,
  kPokemonSpeciesSeaLily,
  kPokemonSpeciesSeaLion,
  kPokemonSpeciesSeaOtter,
  kPokemonSpeciesSeaSlug,
  kPokemonSpeciesSeaWeasel,
  kPokemonSpeciesSeafaring,
  kPokemonSpeciesSeagull,
  kPokemonSpeciesSeason,
  kPokemonSpeciesSeed,
  kPokemonSpeciesSewing,
  kPokemonSpeciesShadow,
  kPokemonSpeciesSharpClaw,
  kPokemonSpeciesSharpEdge,
  kPokemonSpeciesSharpSword,
  kPokemonSpeciesShed,
  kPokemonSpeciesShedding,
  kPokemonSpeciesShellOut,
  kPokemonSpeciesShellfish,
  kPokemonSpeciesShield,
  kPokemonSpeciesSingleHorn,
  kPokemonSpeciesSkunk,
  kPokemonSpeciesSkyHigh,
  kPokemonSpeciesSkySquirrel,
  kPokemonSpeciesSlacker,
  kPokemonSpeciesSleeping,
  kPokemonSpeciesSludge,
  kPokemonSpeciesSnail,
  kPokemonSpeciesSnake,
  kPokemonSpeciesSnowHat,
  kPokemonSpeciesSnowLand,
  kPokemonSpeciesSnowstorm,
  kPokemonSpeciesSouthSea,
  kPokemonSpeciesSpatial,
  kPokemonSpeciesSpark,
  kPokemonSpeciesSparks,
  kPokemonSpeciesSpikeBall,
  kPokemonSpeciesSpikes,
  kPokemonSpeciesSpiral,
  kPokemonSpeciesSpirit,
  kPokemonSpeciesSpitfire,
  kPokemonSpeciesSpotPanda,
  kPokemonSpeciesSpray,
  kPokemonSpeciesStagBeetle,
  kPokemonSpeciesStarShape,
  kPokemonSpeciesStarling,
  kPokemonSpeciesStomach,
  kPokemonSpeciesStoneHome,
  kPokemonSpeciesStringSpit,
  kPokemonSpeciesSubterrene,
  kPokemonSpeciesSun,
  kPokemonSpeciesSuperpower,
  kPokemonSpeciesSwallow,
  kPokemonSpeciesSwine,
  kPokemonSpeciesSymbol,
  kPokemonSpeciesTadpole,
  kPokemonSpeciesTemporal,
  kPokemonSpeciesTender,
  kPokemonSpeciesThorn,
  kPokemonSpeciesThornMonkey,
  kPokemonSpeciesThornPod,
  kPokemonSpeciesThornSeed,
  kPokemonSpeciesThunder,
  kPokemonSpeciesThunderbolt,
  kPokemonSpeciesTigerCat,
  kPokemonSpeciesTimeTravel,
  kPokemonSpeciesTinyBee,
  kPokemonSpeciesTinyBird,
  kPokemonSpeciesTinyLeaf,
  kPokemonSpeciesTinyMouse,
  kPokemonSpeciesTinyPigeon,
  kPokemonSpeciesTinyRaccoon,
  kPokemonSpeciesTinySwallow,
  kPokemonSpeciesTinyTurtle,
  kPokemonSpeciesTorch,
  kPokemonSpeciesToxicMouth,
  kPokemonSpeciesTrainee,
  kPokemonSpeciesTransform,
  kPokemonSpeciesTransport,
  kPokemonSpeciesTrap,
  kPokemonSpeciesTrashBag,
  kPokemonSpeciesTrashHeap,
  kPokemonSpeciesTrickyFox,
  kPokemonSpeciesTripleBird,
  kPokemonSpeciesTurtle,
  kPokemonSpeciesTwinBird,
  kPokemonSpeciesTwinTusk,
  kPokemonSpeciesTusk,
  kPokemonSpeciesValiant,
  kPokemonSpeciesVastWhite,
  kPokemonSpeciesVerdant,
  kPokemonSpeciesVibration,
  kPokemonSpeciesVictory,
  kPokemonSpeciesVine,
  kPokemonSpeciesViolent,
  kPokemonSpeciesVirtual,
  kPokemonSpeciesVolcano,
  kPokemonSpeciesWaterBird,
  kPokemonSpeciesWaterFish,
  kPokemonSpeciesWaterWeed,
  kPokemonSpeciesWeather,
  kPokemonSpeciesWeed,
  kPokemonSpeciesWhiskers,
  kPokemonSpeciesWhisper,
  kPokemonSpeciesWhiteBird,
  kPokemonSpeciesWicked,
  kPokemonSpeciesWild,
  kPokemonSpeciesWildBull,
  kPokemonSpeciesWildDuck,
  kPokemonSpeciesWildMonkey,
  kPokemonSpeciesWildPigeon,
  kPokemonSpeciesWillpower,
  kPokemonSpeciesWily,
  kPokemonSpeciesWindChime,
  kPokemonSpeciesWindveiled,
  kPokemonSpeciesWingFish,
  kPokemonSpeciesWish,
  kPokemonSpeciesWoodGecko,
  kPokemonSpeciesWool,
  kPokemonSpeciesWorm,
  kPokemonSpeciesYoungFowl,
  kPokemonSpeciesZenCharm
}PokemonSpecies;

///
// Pokemon Gender Rate
//
typedef enum {
  kPokemonGenderRateAlwaysMale      = 1,
  kPokemonGenderRateFemaleOneEighth = 2,
  kPokemonGenderRateFemale25Percent = 3,
  kPokemonGenderRateFemale50Percent = 4,
  kPokemonGenderRateFemale75Percent = 5,
  kPokemonGenderRateAlwaysFemale    = 6,
  kPokemonGenderRateGenderless      = 7
}PokemonGenderRate;

///
// Pokemon Main Color
//
// The main colour of this species. Must be one of
//
typedef enum {
  kPokemonColorBlack = 1,
  kPokemonColorBlue,
  kPokemonColorBrown,
  kPokemonColorGray,
  kPokemonColorGreen,
  kPokemonColorPink,
  kPokemonColorPurple,
  kPokemonColorRed,
  kPokemonColorWhite,
  kPokemonColorYellow
}PokemonColor;

///
// Pokemon Growth Rate
//
// The rate at which a Pokémon of this species gains levels (i.e. how much Experience is needed to level up), One of:
//
typedef enum {
  kPokemonGrowthRateFast        = 1,
  kPokemonGrowthRateMedium      = 2,
  kPokemonGrowthRateSlow        = 3,
  kPokemonGrowthRateParabolic   = 4,
  kPokemonGrowthRateErratic     = 5,
  kPokemonGrouthRateFluctuating = 6
}PokemonGrowthRate;

///
// Pokemon Compatibility
//
// The egg groups this species belongs to. Is two comma-separated numbers. Both numbers may be the same, if the species belongs to only one egg group. If either number is 15, this species cannot breed.
//
// "Water1" is for sea creatures, "Water2" is for fish, and "Water3" is for shellfish. "Ditto" should contain only Ditto, as a species in this group can breed with any other breedable Pokémon.
//
typedef enum {
  kPokemonCompatibilityMonster = 1,
  kPokemonCompatibilityWater1,
  kPokemonCompatibilityBug,
  kPokemonCompatibilityFlying,
  kPokemonCompatibilityGround,
  kPokemonCompatibilityFairy,
  kPokemonCompatibilityPlant,
  kPokemonCompatibilityHumanshape,
  kPokemonCompatibilityWater3,
  kPokemonCompatibilityMineral,
  kPokemonCompatibilityIndeterminate,
  kPokemonCompatibilityWater2,
  kPokemonCompatibilityDitto,
  kPokemonCompatibilityDragon,
  kPokemonCompatibilityDoesNotBreed
}PokemonCompatibility;

///
// Pokemon Evolution Method
//
typedef enum {
  kPokemonEvolutionMethodLevel = 1,      // (level)
  kPokemonEvolutionMethodLevelMale,      // (level)
  kPokemonEvolutionMethodLevelFemale,    // (level)
  kPokemonEvolutionMethodAttackGreater,  // (level)
  kPokemonEvolutionMethodAtkDefEqual,    // (level)
  kPokemonEvolutionMethodDefenseGreater, // (level)
  kPokemonEvolutionMethodSilcoon,        // (level)
  kPokemonEvolutionMethodCascoon,        // (level)
  kPokemonEvolutionMethodNinjask,        // (level)
  kPokemonEvolutionMethodShedinja,       // (level)
  kPokemonEvolutionMethodItemMale,       // (item's internal name)
  kPokemonEvolutionMethodItemFemale,     // (item's internal name)
  kPokemonEvolutionMethodDayHoldItem,    // (item's internal name)
  kPokemonEvolutionMethodNightHoldItem,  // (item's internal name)
  kPokemonEvolutionMethodHappiness,      // (-)
  kPokemonEvolutionMethodHappinessDay,   // (-)
  kPokemonEvolutionMethodHappinessNight, // (-)
  kPokemonEvolutionMethodHasMove,        // (move's internal name)
  kPokemonEvolutionMethodHasInParty,     // (species' internal name)
  kPokemonEvolutionMethodBeauty,         // (minimum beauty)
  kPokemonEvolutionMethodLocation,       // (map ID)
  kPokemonEvolutionMethodTrade,          // (-)
  kPokemonEvolutionMethodTradeItem,      // (item's internal name)
  kPokemonEvolutionMethodTradeSpecies,   // (species' internal name)
  kPokemonEvolutionMethodCustom1_7       // (number between 0-65535)
}PokemonEvolutionMethod;

///
// Pokemon Habitat
//
typedef enum {
  kPokemonHabitatCave         = 1,
  kPokemonHabitatForest       = 2,
  kPokemonHabitatGrassland    = 3,
  kPokemonHabitatMountain     = 4,
  kPokemonHabitatRare         = 5, // Mean "Unknow"
  kPokemonHabitatRoughTerrain = 6,
  kPokemonHabitatSea          = 7,
  kPokemonHabitatUrban        = 8,
  kPokemonHabitatWatersEdge   = 9
}PokemonHabitat;


#pragma mark - MOVE

///
// Move Target
//
typedef enum {
  kMoveTargetSinglePokemonOtherThanTheUser      = 0,   // Single Pokémon other than the user
  kMoveTargetNone                               = 1,   // No target
  kMoveTargetOneOpposingPokemonSelectedAtRandom = 2,   // One opposing Pokémon selected at random
  kMoveTargetAllOpposingPokemon                 = 4,   // All opposing Pokémon
  kMoveTargetAllPokemonOtherThanTheUser         = 8,   // All Pokémon other than the user (All non-users)
  kMoveTargetUser                               = 10,  // User
  kMoveTargetBothSides                          = 20,  // Both sides (e.g. Light Screen, Reflect, Heal Bell)
  kMoveTargetUserSide                           = 40,  // User's side
  kMoveTargetOpposingPokemonSide                = 80,  // Opposing Pokémon's side
  kMoveTargetUserPartner                        = 100, // User's partner
  kMoveTargetPlayerChoiceOfUserOrUserPartner    = 200, // Player's choice of user or user's partner (e.g. Acupressure)
  kMoveTargetSinglePokemonOnOpponentSide        = 400  // Single Pokémon on opponent's side (e.g. Me First)
}MoveTarget;

///
// Move Category
//
typedef enum {
  kMoveCategoryPhysical = 1, // calculates damage using Attack and Defense
  kMoveCategorySpecial,      // calculates damage using Special Attack and Special Defense
  kMoveCategoryStatus        // inflicts no damage
}kMoveCategory;

///
// Move Contest Type
//
typedef enum {
  kMoveContestTypeCool = 1,
  kMoveContestTypeBeauty,
  kMoveContestTypeCute,
  kMoveContestTypeSmart,
  kMoveContestTypeTough
}kMoveContestType;
