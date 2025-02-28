const u8 gMoveNames[][13] = {
    _("-$$$$$$"),
    _("POUND"),
    _("KARATE CHOP"),
    _("DOUBLESLAP"),
    _("COMET PUNCH"),
    _("MEGA PUNCH"),
    _("PAY DAY"),
    _("FIRE PUNCH"),
    _("ICE PUNCH"),
    _("THUNDERPUNCH"),
    _("SCRATCH"),
    _("VICEGRIP"),
    _("GUILLOTINE"),
    _("RAZOR WIND"),
    _("SWORDS DANCE"),
    _("CUT"),
    _("GUST"),
    _("WING ATTACK"),
    _("WHIRLWIND"),
    _("FLY"),
    _("BIND"),
    _("SLAM"),
    _("VINE WHIP"),
    _("STOMP"),
    _("DOUBLE KICK"),
    _("MEGA KICK"),
    _("JUMP KICK"),
    _("ROLLING KICK"),
    _("SAND-ATTACK"),
    _("HEADBUTT"),
    _("HORN ATTACK"),
    _("FURY ATTACK"),
    _("HORN DRILL"),
    _("TACKLE"),
    _("BODY SLAM"),
    _("WRAP"),
    _("TAKE DOWN"),
    _("THRASH"),
    _("DOUBLE-EDGE"),
    _("TAIL WHIP"),
    _("POISON STING"),
    _("TWINEEDLE"),
    _("PIN MISSILE"),
    _("LEER"),
    _("BITE"),
    _("GROWL"),
    _("ROAR"),
    _("SING"),
    _("SUPERSONIC"),
    _("SONICBOOM"),
    _("DISABLE"),
    _("ACID"),
    _("EMBER"),
    _("FLAMETHROWER"),
    _("MIST"),
    _("WATER GUN"),
    _("HYDRO PUMP"),
    _("SURF"),
    _("ICE BEAM"),
    _("BLIZZARD"),
    _("PSYBEAM"),
    _("BUBBLEBEAM"),
    _("AURORA BEAM"),
    _("HYPER BEAM"),
    _("PECK"),
    _("DRILL PECK"),
    _("SUBMISSION"),
    _("LOW KICK"),
    _("COUNTER"),
    _("SEISMIC TOSS"),
    _("STRENGTH"),
    _("ABSORB"),
    _("MEGA DRAIN"),
    _("LEECH SEED"),
    _("GROWTH"),
    _("RAZOR LEAF"),
    _("SOLARBEAM"),
    _("POISONPOWDER"),
    _("STUN SPORE"),
    _("SLEEP POWDER"),
    _("PETAL DANCE"),
    _("STRING SHOT"),
    _("DRAGON RAGE"),
    _("FIRE SPIN"),
    _("THUNDERSHOCK"),
    _("THUNDERBOLT"),
    _("THUNDER WAVE"),
    _("THUNDER"),
    _("ROCK THROW"),
    _("EARTHQUAKE"),
    _("FISSURE"),
    _("DIG"),
    _("TOXIC"),
    _("CONFUSION"),
    _("PSYCHIC"),
    _("HYPNOSIS"),
    _("MEDITATE"),
    _("AGILITY"),
    _("QUICK ATTACK"),
    _("RAGE"),
    _("TELEPORT"),
    _("NIGHT SHADE"),
    _("MIMIC"),
    _("SCREECH"),
    _("DOUBLE TEAM"),
    _("RECOVER"),
    _("HARDEN"),
    _("MINIMIZE"),
    _("SMOKESCREEN"),
    _("CONFUSE RAY"),
    _("WITHDRAW"),
    _("DEFENSE CURL"),
    _("BARRIER"),
    _("LIGHT SCREEN"),
    _("HAZE"),
    _("REFLECT"),
    _("FOCUS ENERGY"),
    _("BIDE"),
    _("METRONOME"),
    _("MIRROR MOVE"),
    _("SELFDESTRUCT"),
    _("EGG BOMB"),
    _("LICK"),
    _("SMOG"),
    _("SLUDGE"),
    _("BONE CLUB"),
    _("FIRE BLAST"),
    _("WATERFALL"),
    _("CLAMP"),
    _("SWIFT"),
    _("SKULL BASH"),
    _("SPIKE CANNON"),
    _("CONSTRICT"),
    _("AMNESIA"),
    _("KINESIS"),
    _("SOFTBOILED"),
    _("HI JUMP KICK"),
    _("GLARE"),
    _("DREAM EATER"),
    _("POISON GAS"),
    _("BARRAGE"),
    _("LEECH LIFE"),
    _("LOVELY KISS"),
    _("SKY ATTACK"),
    _("TRANSFORM"),
    _("BUBBLE"),
    _("DIZZY PUNCH"),
    _("SPORE"),
    _("FLASH"),
    _("PSYWAVE"),
    _("SPLASH"),
    _("ACID ARMOR"),
    _("CRABHAMMER"),
    _("EXPLOSION"),
    _("FURY SWIPES"),
    _("BONEMERANG"),
    _("REST"),
    _("ROCK SLIDE"),
    _("HYPER FANG"),
    _("SHARPEN"),
    _("CONVERSION"),
    _("TRI ATTACK"),
    _("SUPER FANG"),
    _("SLASH"),
    _("SUBSTITUTE"),
    _("STRUGGLE"),
    _("SKETCH"),
    _("TRIPLE KICK"),
    _("THIEF"),
    _("SPIDER WEB"),
    _("MIND READER"),
    _("NIGHTMARE"),
    _("FLAME WHEEL"),
    _("SNORE"),
    _("CURSE"),
    _("FLAIL"),
    _("CONVERSION 2"),
    _("AEROBLAST"),
    _("COTTON SPORE"),
    _("REVERSAL"),
    _("SPITE"),
    _("POWDER SNOW"),
    _("PROTECT"),
    _("MACH PUNCH"),
    _("SCARY FACE"),
    _("FAINT ATTACK"),
    _("SWEET KISS"),
    _("BELLY DRUM"),
    _("SLUDGE BOMB"),
    _("MUD-SLAP"),
    _("OCTAZOOKA"),
    _("SPIKES"),
    _("ZAP CANNON"),
    _("FORESIGHT"),
    _("DESTINY BOND"),
    _("PERISH SONG"),
    _("ICY WIND"),
    _("DETECT"),
    _("BONE RUSH"),
    _("LOCK-ON"),
    _("OUTRAGE"),
    _("SANDSTORM"),
    _("GIGA DRAIN"),
    _("ENDURE"),
    _("CHARM"),
    _("ROLLOUT"),
    _("FALSE SWIPE"),
    _("SWAGGER"),
    _("MILK DRINK"),
    _("SPARK"),
    _("FURY CUTTER"),
    _("STEEL WING"),
    _("MEAN LOOK"),
    _("ATTRACT"),
    _("SLEEP TALK"),
    _("HEAL BELL"),
    _("RETURN"),
    _("PRESENT"),
    _("FRUSTRATION"),
    _("SAFEGUARD"),
    _("PAIN SPLIT"),
    _("SACRED FIRE"),
    _("MAGNITUDE"),
    _("DYNAMICPUNCH"),
    _("MEGAHORN"),
    _("DRAGONBREATH"),
    _("BATON PASS"),
    _("ENCORE"),
    _("PURSUIT"),
    _("RAPID SPIN"),
    _("SWEET SCENT"),
    _("IRON TAIL"),
    _("METAL CLAW"),
    _("VITAL THROW"),
    _("MORNING SUN"),
    _("SYNTHESIS"),
    _("MOONLIGHT"),
    _("HIDDEN POWER"),
    _("CROSS CHOP"),
    _("TWISTER"),
    _("RAIN DANCE"),
    _("SUNNY DAY"),
    _("CRUNCH"),
    _("MIRROR COAT"),
    _("PSYCH UP"),
    _("EXTREMESPEED"),
    _("ANCIENTPOWER"),
    _("SHADOW BALL"),
    _("FUTURE SIGHT"),
    _("ROCK SMASH"),
    _("WHIRLPOOL"),
    _("BEAT UP"),
    _("FAKE OUT"),
    _("UPROAR"),
    _("STOCKPILE"),
    _("SPIT UP"),
    _("SWALLOW"),
    _("HEAT WAVE"),
    _("HAIL"),
    _("TORMENT"),
    _("FLATTER"),
    _("WILL-O-WISP"),
    _("MEMENTO"),
    _("FACADE"),
    _("FOCUS PUNCH"),
    _("SMELLINGSALT"),
    _("FOLLOW ME"),
    _("NATURE POWER"),
    _("CHARGE"),
    _("TAUNT"),
    _("HELPING HAND"),
    _("TRICK"),
    _("ROLE PLAY"),
    _("WISH"),
    _("ASSIST"),
    _("INGRAIN"),
    _("SUPERPOWER"),
    _("MAGIC COAT"),
    _("RECYCLE"),
    _("REVENGE"),
    _("BRICK BREAK"),
    _("YAWN"),
    _("KNOCK OFF"),
    _("ENDEAVOR"),
    _("ERUPTION"),
    _("SKILL SWAP"),
    _("IMPRISON"),
    _("REFRESH"),
    _("GRUDGE"),
    _("SNATCH"),
    _("SECRET POWER"),
    _("DIVE"),
    _("ARM THRUST"),
    _("CAMOUFLAGE"),
    _("TAIL GLOW"),
    _("LUSTER PURGE"),
    _("MIST BALL"),
    _("FEATHERDANCE"),
    _("TEETER DANCE"),
    _("BLAZE KICK"),
    _("MUD SPORT"),
    _("ICE BALL"),
    _("NEEDLE ARM"),
    _("SLACK OFF"),
    _("HYPER VOICE"),
    _("POISON FANG"),
    _("CRUSH CLAW"),
    _("BLAST BURN"),
    _("HYDRO CANNON"),
    _("METEOR MASH"),
    _("ASTONISH"),
    _("WEATHER BALL"),
    _("AROMATHERAPY"),
    _("FAKE TEARS"),
    _("AIR CUTTER"),
    _("OVERHEAT"),
    _("ODOR SLEUTH"),
    _("ROCK TOMB"),
    _("SILVER WIND"),
    _("METAL SOUND"),
    _("GRASSWHISTLE"),
    _("TICKLE"),
    _("COSMIC POWER"),
    _("WATER SPOUT"),
    _("SIGNAL BEAM"),
    _("SHADOW PUNCH"),
    _("EXTRASENSORY"),
    _("SKY UPPERCUT"),
    _("SAND TOMB"),
    _("SHEER COLD"),
    _("MUDDY WATER"),
    _("BULLET SEED"),
    _("AERIAL ACE"),
    _("ICICLE SPEAR"),
    _("IRON DEFENSE"),
    _("BLOCK"),
    _("HOWL"),
    _("DRAGON CLAW"),
    _("FRENZY PLANT"),
    _("BULK UP"),
    _("BOUNCE"),
    _("MUD SHOT"),
    _("POISON TAIL"),
    _("COVET"),
    _("VOLT TACKLE"),
    _("MAGICAL LEAF"),
    _("WATER SPORT"),
    _("CALM MIND"),
    _("LEAF BLADE"),
    _("DRAGON DANCE"),
    _("ROCK BLAST"),
    _("SHOCK WAVE"),
    _("WATER PULSE"),
    _("DOOM DESIRE"),
    _("PSYCHO BOOST"),
    _("DRAIN KISS"),
    _("BULLET PUNCH"),
    _("AQUA JET"),
    _("HONE CLAWS"),
    _("OMINOUS WIND"),
    _("ZEN HEADBUTT"),
    _("DOLL EYES"),
    _("BUG BITE"),
    _("PLUCK"),
    _("DOUBLE HIT")
};
