#ifndef __LIBM2_GAME_ENUMS_HPP
#define __LIBM2_GAME_ENUMS_HPP
namespace libm2 {
enum EAIFlags {
    AIFLAG_AGGRESSIVE = 1,
    AIFLAG_NOMOVE,
    AIFLAG_COWARD = 4,
    AIFLAG_NOATTACKSHINSU = 8,
    AIFLAG_NOATTACKJINNO = 16,
    AIFLAG_NOATTACKCHUNJO = 32,
    AIFLAG_ATTACKMOB = 64,
    AIFLAG_BERSERK = 128,
    AIFLAG_STONESKIN = 256,
    AIFLAG_GODSPEED = 512,
    AIFLAG_DEATHBLOW = 1024,
    AIFLAG_REVIVE = 2048
};
enum EAccountQID {QID_SPAM_DB};
enum EAffectBits {
    EFF_NONE,
    AFF_YMIR,
    AFF_INVISIBILITY,
    AFF_SPAWN,
    AFF_POISON,
    AFF_SLOW,
    AFF_STUN,
    AFF_DUNGEON_READY,
    AFF_DUNGEON_UNIQUE,
    AFF_BUILDING_CONSTRUCTION_SMALL,
    AFF_BUILDING_CONSTRUCTION_LARGE,
    AFF_BUILDING_UPGRADE,
    AFF_MOV_SPEED_POTION,
    AFF_ATT_SPEED_POTION,
    AFF_FISH_MIND,
    AFF_JEONGWIHON,
    AFF_GEOMGYEONG,
    AFF_CHEONGEUN,
    AFF_GYEONGGONG,
    AFF_EUNHYUNG,
    AFF_GWIGUM,
    AFF_TERROR,
    AFF_JUMAGAP,
    AFF_HOSIN,
    AFF_BOHO,
    AFF_KWAESOK,
    AFF_MANASHIELD,
    AFF_MUYEONG,
    AFF_REVIVE_INVISIBLE,
    AFF_FIRE,
    AFF_GICHEON,
    AFF_JEUNGRYEOK,
    AFF_TANHWAN_DASH,
    AFF_PABEOP,
    AFF_CHEONGEUN_WITH_FALL,
    AFF_POLYMORPH,
    AFF_WAR_FLAG1,
    AFF_WAR_FLAG2,
    AFF_WAR_FLAG3,
    AFF_CHINA_FIREWORK,
    AFF_HAIR,
    AFF_GERMANY,
    AFF_BITS_MAX
};
enum EAffectTypes {
    AFFECT_NONE,
    AFFECT_MOV_SPEED = 200,
    AFFECT_ATT_SPEED,
    AFFECT_ATT_GRADE,
    AFFECT_INVISIBILITY,
    AFFECT_STR,
    AFFECT_DEX,
    AFFECT_CON,
    AFFECT_INT,
    AFFECT_FISH_MIND_PILL,
    AFFECT_POISON,
    AFFECT_STUN,
    AFFECT_SLOW,
    AFFECT_DUNGEON_READY,
    AFFECT_DUNGEON_UNIQUE,
    AFFECT_BUILDING,
    AFFECT_REVIVE_INVISIBLE,
    AFFECT_FIRE,
    AFFECT_CAST_SPEED,
    AFFECT_HP_RECOVER_CONTINUE,
    AFFECT_SP_RECOVER_CONTINUE,
    AFFECT_POLYMORPH,
    AFFECT_MOUNT,
    AFFECT_WAR_FLAG,
    AFFECT_BLOCK_CHAT,
    AFFECT_CHINA_FIREWORK,
    AFFECT_BOW_DISTANCE,
    AFFECT_DEF_GRADE,
    AFFECT_PREMIUM_START = 500,
    AFFECT_EXP_BONUS = 500,
    AFFECT_ITEM_BONUS,
    AFFECT_SAFEBOX,
    AFFECT_AUTOLOOT,
    AFFECT_FISH_MIND,
    AFFECT_MARRIAGE_FAST,
    AFFECT_GOLD_BONUS,
    AFFECT_PREMIUM_END = 509,
    AFFECT_MALL,
    AFFECT_NO_DEATH_PENALTY,
    AFFECT_SKILL_BOOK_BONUS,
    AFFECT_SKILL_NO_BOOK_DELAY,
    AFFECT_HAIR, AFFECT_COLLECT,
    AFFECT_EXP_BONUS_EURO_FREE,
    AFFECT_EXP_BONUS_EURO_FREE_UNDER_15,
    AFFECT_UNIQUE_ABILITY,
    AFFECT_CUBE_1,
    AFFECT_CUBE_2,
    AFFECT_CUBE_3,
    AFFECT_CUBE_4,
    AFFECT_CUBE_5,
    AFFECT_CUBE_6,
    AFFECT_CUBE_7,
    AFFECT_CUBE_8,
    AFFECT_CUBE_9,
    AFFECT_CUBE_10,
    AFFECT_CUBE_11,
    AFFECT_CUBE_12,
    AFFECT_BLEND,
    AFFECT_HORSE_NAME,
    AFFECT_MOUNT_BONUS,
    AFFECT_AUTO_HP_RECOVERY,
    AFFECT_AUTO_SP_RECOVERY,
    AFFECT_RAMADAN_ABILITY = 300,
    AFFECT_RAMADAN_RING,
    AFFECT_NOG_ABILITY,
    AFFECT_HOLLY_STONE_POWER,
    AFFECT_QUEST_START_IDX = 1000
};
enum EApplyTypes {
    APPLY_NONE,
    APPLY_MAX_HP,
    APPLY_MAX_SP,
    APPLY_CON,
    APPLY_INT,
    APPLY_STR,
    APPLY_DEX,
    APPLY_ATT_SPEED,
    APPLY_MOV_SPEED,
    APPLY_CAST_SPEED,
    APPLY_HP_REGEN,
    APPLY_SP_REGEN,
    APPLY_POISON_PCT,
    APPLY_STUN_PCT,
    APPLY_SLOW_PCT,
    APPLY_CRITICAL_PCT,
    APPLY_PENETRATE_PCT,
    APPLY_ATTBONUS_HUMAN,
    APPLY_ATTBONUS_ANIMAL,
    APPLY_ATTBONUS_ORC,
    APPLY_ATTBONUS_MILGYO,
    APPLY_ATTBONUS_UNDEAD,
    APPLY_ATTBONUS_DEVIL,
    APPLY_STEAL_HP,
    APPLY_STEAL_SP,
    APPLY_MANA_BURN_PCT,
    APPLY_DAMAGE_SP_RECOVER,
    APPLY_BLOCK, APPLY_DODGE,
    APPLY_RESIST_SWORD,
    APPLY_RESIST_TWOHAND,
    APPLY_RESIST_DAGGER,
    APPLY_RESIST_BELL,
    APPLY_RESIST_FAN,
    APPLY_RESIST_BOW,
    APPLY_RESIST_FIRE,
    APPLY_RESIST_ELEC,
    APPLY_RESIST_MAGIC,
    APPLY_RESIST_WIND,
    APPLY_REFLECT_MELEE,
    APPLY_REFLECT_CURSE,
    APPLY_POISON_REDUCE,
    APPLY_KILL_SP_RECOVER,
    APPLY_EXP_DOUBLE_BONUS,
    APPLY_GOLD_DOUBLE_BONUS,
    APPLY_ITEM_DROP_BONUS,
    APPLY_POTION_BONUS,
    APPLY_KILL_HP_RECOVER,
    APPLY_IMMUNE_STUN,
    APPLY_IMMUNE_SLOW,
    APPLY_IMMUNE_FALL,
    APPLY_SKILL,
    APPLY_BOW_DISTANCE,
    APPLY_ATT_GRADE_BONUS,
    APPLY_DEF_GRADE_BONUS,
    APPLY_MAGIC_ATT_GRADE,
    APPLY_MAGIC_DEF_GRADE,
    APPLY_CURSE_PCT,
    APPLY_MAX_STAMINA,
    APPLY_ATTBONUS_WARRIOR,
    APPLY_ATTBONUS_ASSASSIN,
    APPLY_ATTBONUS_SURA,
    APPLY_ATTBONUS_SHAMAN,
    APPLY_ATTBONUS_MONSTER,
    APPLY_MALL_ATTBONUS,
    APPLY_MALL_DEFBONUS,
    APPLY_MALL_EXPBONUS,
    APPLY_MALL_ITEMBONUS,
    APPLY_MALL_GOLDBONUS,
    APPLY_MAX_HP_PCT,
    APPLY_MAX_SP_PCT,
    APPLY_SKILL_DAMAGE_BONUS,
    APPLY_NORMAL_HIT_DAMAGE_BONUS,
    APPLY_SKILL_DEFEND_BONUS,
    APPLY_NORMAL_HIT_DEFEND_BONUS,
    APPLY_PC_BANG_EXP_BONUS,
    APPLY_PC_BANG_DROP_BONUS,
    APPLY_EXTRACT_HP_PCT,
    APPLY_RESIST_WARRIOR,
    APPLY_RESIST_ASSASSIN,
    APPLY_RESIST_SURA,
    APPLY_RESIST_SHAMAN,
    APPLY_ENERGY,
    APPLY_DEF_GRADE,
    APPLY_COSTUME_ATTR_BONUS,
    APPLY_MAGIC_ATTBONUS_PER,
    APPLY_MELEE_MAGIC_ATTBONUS_PER,
    MAX_APPLY_NUM
};
enum EArmorSubTypes {
    ARMOR_BODY,
    ARMOR_HEAD,
    ARMOR_SHIELD,
    ARMOR_WRIST,
    ARMOR_FOOTS,
    ARMOR_NECK,
    ARMOR_EAR,
    ARMOR_NUM_TYPES
};
enum EAttrRegionMode {
    ATTR_REGION_MODE_SET,
    ATTR_REGION_MODE_REMOVE,
    ATTR_REGION_MODE_CHECK
};
enum EAttributeSet {
    ATTRIBUTE_SET_WEAPON,
    ATTRIBUTE_SET_BODY,
    ATTRIBUTE_SET_WRIST,
    ATTRIBUTE_SET_FOOTS,
    ATTRIBUTE_SET_NECK,
    ATTRIBUTE_SET_HEAD,
    ATTRIBUTE_SET_SHIELD,
    ATTRIBUTE_SET_EAR,
    ATTRIBUTE_SET_MAX_NUM
};
enum EBattleType {
    BATTLE_TYPE_MELEE,
    BATTLE_TYPE_RANGE,
    BATTLE_TYPE_MAGIC,
    BATTLE_TYPE_SPECIAL,
    BATTLE_TYPE_POWER,
    BATTLE_TYPE_TANKER,
    BATTLE_TYPE_SUPER_POWER,
    BATTLE_TYPE_SUPER_TANKER,
    BATTLE_TYPE_MAX_NUM
};
enum EBattleTypes {
    BATTLE_NONE,
    BATTLE_DAMAGE,
    BATTLE_DEFENSE,
    BATTLE_DEAD
};
enum EBillingTypes {
    BILLING_NONE,
    BILLING_IP_FREE,
    BILLING_FREE,
    BILLING_IP_TIME,
    BILLING_IP_DAY,
    BILLING_TIME,
    BILLING_DAY
};
enum EBlockAction {
    BLOCK_EXCHANGE = 1,
    BLOCK_PARTY_INVITE,
    BLOCK_GUILD_INVITE = 4,
    BLOCK_WHISPER = 8,
    BLOCK_MESSENGER_INVITE = 16,
    BLOCK_PARTY_REQUEST = 32
};
enum EBlockExceptionCommand {
    BLOCK_EXCEPTION_CMD_ADD = 1,
    BLOCK_EXCEPTION_CMD_DEL
};
enum ECharType {
    CHAR_TYPE_MONSTER,
    CHAR_TYPE_NPC,
    CHAR_TYPE_STONE,
    CHAR_TYPE_WARP,
    CHAR_TYPE_DOOR,
    CHAR_TYPE_BUILDING,
    CHAR_TYPE_PC,
    CHAR_TYPE_POLYMORPH_PC,
    CHAR_TYPE_HORSE,
    CHAR_TYPE_GOTO
};
enum ECharacterEquipmentPart {
    CHR_EQUIPPART_ARMOR,
    CHR_EQUIPPART_WEAPON,
    CHR_EQUIPPART_HEAD,
    CHR_EQUIPPART_HAIR,
    CHR_EQUIPPART_NUM
};
enum ECharacterPosition {
    POSITION_GENERAL,
    POSITION_BATTLE,
    POSITION_DYING,
    POSITION_SITTING_CHAIR,
    POSITION_SITTING_GROUND,
    POSITION_INTRO,
    POSITION_MAX_NUM
};
enum EChatType {
    CHAT_TYPE_TALKING,
    CHAT_TYPE_INFO,
    CHAT_TYPE_NOTICE,
    CHAT_TYPE_PARTY,
    CHAT_TYPE_GUILD,
    CHAT_TYPE_COMMAND,
    CHAT_TYPE_SHOUT,
    CHAT_TYPE_WHISPER,
    CHAT_TYPE_BIG_NOTICE,
    CHAT_TYPE_MONARCH_NOTICE,
    CHAT_TYPE_MAX_NUM
};
enum ECostumeSubTypes {
    COSTUME_BODY,
    COSTUME_HAIR,
    COSTUME_NUM_TYPES
};
enum EDamageType {
    DAMAGE_TYPE_NONE,
    DAMAGE_TYPE_NORMAL,
    DAMAGE_TYPE_NORMAL_RANGE,
    DAMAGE_TYPE_MELEE,
    DAMAGE_TYPE_RANGE,
    DAMAGE_TYPE_FIRE,
    DAMAGE_TYPE_ICE,
    DAMAGE_TYPE_ELEC,
    DAMAGE_TYPE_MAGIC,
    DAMAGE_TYPE_POISON,
    DAMAGE_TYPE_SPECIAL
};
enum EDescType {
    DESC_TYPE_ACCEPTOR,
    DESC_TYPE_CONNECTOR
};
enum EEntityTypes {
    ENTITY_CHARACTER,
    ENTITY_ITEM,
    ENTITY_OBJECT
};
enum EExchangeValues {
    EXCHANGE_ITEM_MAX_NUM = 12,
    EXCHANGE_MAX_DISTANCE = 1000
};
enum EFdwatch {
    FDW_NONE,
    FDW_READ,
    FDW_WRITE,
    FDW_WRITE_ONESHOT = 4,
    FDW_EOF = 8
};
enum EFishSubTypes {
    FISH_ALIVE,
    FISH_DEAD
};
enum EGMLevels {
    GM_PLAYER,
    GM_LOW_WIZARD,
    GM_WIZARD,
    GM_HIGH_WIZARD,
    GM_GOD,
    GM_IMPLEMENTOR
};
enum EGuildWarState {
    GUILD_WAR_NONE,
    GUILD_WAR_SEND_DECLARE,
    GUILD_WAR_REFUSE,
    GUILD_WAR_RECV_DECLARE,
    GUILD_WAR_WAIT_START,
    GUILD_WAR_CANCEL,
    GUILD_WAR_ON_WAR,
    GUILD_WAR_END,
    GUILD_WAR_OVER,
    GUILD_WAR_RESERVE,
    GUILD_WAR_DURATION = 1800,
    GUILD_WAR_WIN_POINT = 1000,
    GUILD_WAR_LADDER_HALF_PENALTY_TIME = 43200
};
enum EGuildWarType {
    GUILD_WAR_TYPE_FIELD,
    GUILD_WAR_TYPE_BATTLE,
    GUILD_WAR_TYPE_FLAG,
    GUILD_WAR_TYPE_MAX_NUM
};
enum EImmuneFlags {
    IMMUNE_STUN = 1,
    IMMUNE_SLOW,
    IMMUNE_FALL = 4,
    IMMUNE_CURSE = 8,
    IMMUNE_POISON = 16,
    IMMUNE_TERROR = 32,
    IMMUNE_REFLECT = 64
};
enum EItemAntiFlag {
    ITEM_ANTIFLAG_FEMALE = 1,
    ITEM_ANTIFLAG_MALE,
    ITEM_ANTIFLAG_WARRIOR = 4,
    ITEM_ANTIFLAG_ASSASSIN = 8,
    ITEM_ANTIFLAG_SURA = 16,
    ITEM_ANTIFLAG_SHAMAN = 32,
    ITEM_ANTIFLAG_GET = 64,
    ITEM_ANTIFLAG_DROP = 128,
    ITEM_ANTIFLAG_SELL = 256,
    ITEM_ANTIFLAG_EMPIRE_A = 512,
    ITEM_ANTIFLAG_EMPIRE_B = 1024,
    ITEM_ANTIFLAG_EMPIRE_C = 2048,
    ITEM_ANTIFLAG_SAVE = 4096,
    ITEM_ANTIFLAG_GIVE = 8192,
    ITEM_ANTIFLAG_PKDROP = 16384,
    ITEM_ANTIFLAG_STACK = 32768,
    ITEM_ANTIFLAG_MYSHOP = 65536,
    ITEM_ANTIFLAG_SAFEBOX = 131072
};
enum EItemFlag {
    ITEM_FLAG_REFINEABLE = 1,
    ITEM_FLAG_SAVE,
    ITEM_FLAG_STACKABLE = 4,
    ITEM_FLAG_COUNT_PER_1GOLD = 8,
    ITEM_FLAG_SLOW_QUERY = 16,
    ITEM_FLAG_UNUSED01 = 32,
    ITEM_FLAG_UNIQUE = 64,
    ITEM_FLAG_MAKECOUNT = 128,
    ITEM_FLAG_IRREMOVABLE = 256,
    ITEM_FLAG_CONFIRM_WHEN_USE = 512,
    ITEM_FLAG_QUEST_USE = 1024,
    ITEM_FLAG_QUEST_USE_MULTIPLE = 2048,
    ITEM_FLAG_QUEST_GIVE = 4096,
    ITEM_FLAG_LOG = 8192,
    ITEM_FLAG_APPLICABLE = 16384
};
enum EItemMisc {
    ITEM_NAME_MAX_LEN = 24,
    ITEM_VALUES_MAX_NUM = 6,
    ITEM_SMALL_DESCR_MAX_LEN = 256,
    ITEM_LIMIT_MAX_NUM = 2,
    ITEM_APPLY_MAX_NUM,
    ITEM_SOCKET_MAX_NUM = 3,
    ITEM_MAX_COUNT = 200,
    ITEM_ATTRIBUTE_MAX_NUM = 7,
    ITEM_ATTRIBUTE_MAX_LEVEL = 5,
    ITEM_AWARD_WHY_MAX_LEN = 50,
    REFINE_MATERIAL_MAX_NUM = 5,
    ITEM_ELK_VNUM = 50026
};
enum EItemTypes {
    ITEM_NONE,
    ITEM_WEAPON,
    ITEM_ARMOR,
    ITEM_USE,
    ITEM_AUTOUSE,
    ITEM_MATERIAL,
    ITEM_SPECIAL,
    ITEM_TOOL,
    ITEM_LOTTERY,
    ITEM_ELK,
    ITEM_METIN,
    ITEM_CONTAINER,
    ITEM_FISH,
    ITEM_ROD,
    ITEM_RESOURCE,
    ITEM_CAMPFIRE,
    ITEM_UNIQUE,
    ITEM_SKILLBOOK,
    ITEM_QUEST,
    ITEM_POLYMORPH,
    ITEM_TREASURE_BOX,
    ITEM_TREASURE_KEY,
    ITEM_SKILLFORGET,
    ITEM_GIFTBOX,
    ITEM_PICK,
    ITEM_HAIR,
    ITEM_TOTEM,
    ITEM_BLEND,
    ITEM_COSTUME
};
enum EItemUniqueSockets {
    ITEM_SOCKET_UNIQUE_SAVE_TIME = 1,
    ITEM_SOCKET_UNIQUE_REMAIN_TIME
};
enum EItemWearableFlag {
    WEARABLE_BODY = 1,
    WEARABLE_HEAD,
    WEARABLE_FOOTS = 4,
    WEARABLE_WRIST = 8,
    WEARABLE_WEAPON = 16,
    WEARABLE_NECK = 32,
    WEARABLE_EAR = 64,
    WEARABLE_UNIQUE = 128,
    WEARABLE_SHIELD = 256,
    WEARABLE_ARROW = 512,
    WEARABLE_HAIR = 1024,
    WEARABLE_ABILITY = 2048,
    WEARABLE_COSTUME_BODY = 4096
};
enum EJobs {
    JOB_WARRIOR,
    JOB_ASSASSIN,
    JOB_SURA,
    JOB_SHAMAN,
    JOB_MAX_NUM
};
enum ELimitTypes {
    LIMIT_NONE,
    LIMIT_LEVEL,
    LIMIT_STR,
    LIMIT_DEX,
    LIMIT_INT,
    LIMIT_CON,
    LIMIT_PCBANG,
    LIMIT_REAL_TIME,
    LIMIT_REAL_TIME_START_FIRST_USE,
    LIMIT_TIMER_BASED_ON_WEAR,
    LIMIT_MAX_NUM
};
enum EMatrixCard {
    MATRIX_CODE_MAX_LEN = 192,
    MATRIX_ANSWER_MAX_LEN = 8
};
enum EMisc {
    MAX_HOST_LENGTH = 15,
    IP_ADDRESS_LENGTH = 15,
    LOGIN_MAX_LEN = 30,
    PASSWD_MAX_LEN = 16,
    PLAYER_PER_ACCOUNT = 4,
    ACCOUNT_STATUS_MAX_LEN = 8,
    CHARACTER_NAME_MAX_LEN = 24,
    SHOP_SIGN_MAX_LEN = 32,
    INVENTORY_MAX_NUM = 90,
    ABILITY_MAX_NUM = 50,
    EMPIRE_MAX_NUM = 4,
    BANWORD_MAX_LEN = 24,
    SMS_MAX_LEN = 80,
    MOBILE_MAX_LEN = 32,
    SOCIAL_ID_MAX_LEN = 18,
    GUILD_NAME_MAX_LEN = 12,
    SHOP_HOST_ITEM_MAX_NUM = 40,
    SHOP_GUEST_ITEM_MAX_NUM = 18,
    SHOP_PRICELIST_MAX_NUM = 40,
    CHAT_MAX_LEN = 512,
    QUICKSLOT_MAX_NUM = 36,
    JOURNAL_MAX_NUM = 2,
    QUERY_MAX_LEN = 8192,
    FILE_MAX_LEN = 128,
    PLAYER_EXP_TABLE_MAX = 99,
    PLAYER_MAX_LEVEL_CONST = 120,
    GUILD_MAX_LEVEL = 20,
    MOB_MAX_LEVEL = 100,
    ATTRIBUTE_MAX_VALUE = 20,
    CHARACTER_PATH_MAX_NUM = 64,
    SKILL_MAX_NUM = 255,
    SKILLBOOK_DELAY_MIN = 64800,
    SKILLBOOK_DELAY_MAX = 108000,
    SKILL_MAX_LEVEL = 40,
    APPLY_NAME_MAX_LEN = 32,
    EVENT_FLAG_NAME_MAX_LEN = 32,
    MOB_SKILL_MAX_NUM = 5,
    POINT_MAX_NUM = 255,
    MAX_AMOUNT_OF_MALL_BONUS = 20,
    GOLD_MAX = 2000000000,
    MAX_PASSPOD = 8,
    OPENID_AUTHKEY_LEN = 32
};
enum EMobEnchants {
    MOB_ENCHANT_CURSE,
    MOB_ENCHANT_SLOW,
    MOB_ENCHANT_POISON,
    MOB_ENCHANT_STUN,
    MOB_ENCHANT_CRITICAL,
    MOB_ENCHANT_PENETRATE,
    MOB_ENCHANTS_MAX_NUM
};
enum EMobRank {
    MOB_RANK_PAWN,
    MOB_RANK_S_PAWN,
    MOB_RANK_KNIGHT,
    MOB_RANK_S_KNIGHT,
    MOB_RANK_BOSS,
    MOB_RANK_KING,
    MOB_RANK_MAX_NUM
};
enum EMobResists {
    MOB_RESIST_SWORD,
    MOB_RESIST_TWOHAND,
    MOB_RESIST_DAGGER,
    MOB_RESIST_BELL,
    MOB_RESIST_FAN,
    MOB_RESIST_BOW,
    MOB_RESIST_FIRE,
    MOB_RESIST_ELECT,
    MOB_RESIST_MAGIC,
    MOB_RESIST_WIND,
    MOB_RESIST_POISON,
    MOB_RESISTS_MAX_NUM
};
enum EMobSizes {
    MOBSIZE_RESERVED,
    MOBSIZE_SMALL,
    MOBSIZE_MEDIUM,
    MOBSIZE_BIG
};
enum EMoneyLogType {
    MONEY_LOG_RESERVED,
    MONEY_LOG_MONSTER,
    MONEY_LOG_SHOP,
    MONEY_LOG_REFINE,
    MONEY_LOG_QUEST,
    MONEY_LOG_GUILD,
    MONEY_LOG_MISC,
    MONEY_LOG_MONSTER_KILL,
    MONEY_LOG_DROP,
    MONEY_LOG_TYPE_MAX_NUM
};
enum EMonsterChatState {
    MONSTER_CHAT_WAIT,
    MONSTER_CHAT_ATTACK,
    MONSTER_CHAT_CHASE,
    MONSTER_CHAT_ATTACKED
};
enum EMotionEventType {
    MOTION_EVENT_TYPE_NONE,
    MOTION_EVENT_TYPE_EFFECT,
    MOTION_EVENT_TYPE_SCREEN_WAVING,
    MOTION_EVENT_TYPE_SCREEN_FLASHING,
    MOTION_EVENT_TYPE_SPECIAL_ATTACKING,
    MOTION_EVENT_TYPE_SOUND,
    MOTION_EVENT_TYPE_FLY,
    MOTION_EVENT_TYPE_CHARACTER_SHOW,
    MOTION_EVENT_TYPE_CHARACTER_HIDE,
    MOTION_EVENT_TYPE_WARP,
    MOTION_EVENT_TYPE_EFFECT_TO_TARGET,
    MOTION_EVENT_TYPE_MAX_NUM
};
enum EMotionMode {
    MOTION_MODE_GENERAL,
    MOTION_MODE_ONEHAND_SWORD,
    MOTION_MODE_TWOHAND_SWORD,
    MOTION_MODE_DUALHAND_SWORD,
    MOTION_MODE_BOW,
    MOTION_MODE_BELL,
    MOTION_MODE_FAN,
    MOTION_MODE_HORSE,
    MOTION_MODE_MAX_NUM
};

enum EMoveFuncType {
    FUNC_WAIT,
    FUNC_MOVE,
    FUNC_ATTACK,
    FUNC_COMBO,
    FUNC_MOB_SKILL,
    _FUNC_SKILL,
    FUNC_MAX_NUM,
    FUNC_SKILL = 128
};
enum EOnClickEvents {
    ON_CLICK_NONE,
    ON_CLICK_SHOP,
    ON_CLICK_TALK,
    ON_CLICK_MAX_NUM
};
enum EPKModes {
    PK_MODE_PEACE,
    PK_MODE_REVENGE,
    PK_MODE_FREE,
    PK_MODE_PROTECT,
    PK_MODE_GUILD,
    PK_MODE_MAX_NUM
};
enum EPVPModes {
    PVP_MODE_NONE,
    PVP_MODE_AGREE,
    PVP_MODE_FIGHT,
    PVP_MODE_REVENGE
};
enum EPacketShopSubHeaders {
    SHOP_SUBHEADER_GC_START,
    SHOP_SUBHEADER_GC_END,
    SHOP_SUBHEADER_GC_UPDATE_ITEM,
    SHOP_SUBHEADER_GC_UPDATE_PRICE,
    SHOP_SUBHEADER_GC_OK,
    SHOP_SUBHEADER_GC_NOT_ENOUGH_MONEY,
    SHOP_SUBHEADER_GC_SOLDOUT,
    SHOP_SUBHEADER_GC_INVENTORY_FULL,
    SHOP_SUBHEADER_GC_INVALID_POS,
    SHOP_SUBHEADER_GC_SOLD_OUT
};
enum EPacketTradeSubHeaders {
    EXCHANGE_SUBHEADER_GC_START,
    EXCHANGE_SUBHEADER_GC_ITEM_ADD,
    EXCHANGE_SUBHEADER_GC_ITEM_DEL,
    EXCHANGE_SUBHEADER_GC_GOLD_ADD,
    EXCHANGE_SUBHEADER_GC_ACCEPT,
    EXCHANGE_SUBHEADER_GC_END,
    EXCHANGE_SUBHEADER_GC_ALREADY,
    EXCHANGE_SUBHEADER_GC_LESS_GOLD
};
enum EParts {
    PART_MAIN,
    PART_WEAPON,
    PART_HEAD,
    PART_HAIR,
    PART_MAX_NUM,
    PART_WEAPON_SUB
};
enum EPartyExpDistributionModes {
    PARTY_EXP_DISTRIBUTION_NON_PARITY,
    PARTY_EXP_DISTRIBUTION_PARITY,
    PARTY_EXP_DISTRIBUTION_MAX_NUM
};
enum EPartyMessages {
    PM_ATTACK,
    PM_RETURN,
    PM_ATTACKED_BY,
    PM_AGGRO_INCREASE
};
enum EPartyRole {
    PARTY_ROLE_NORMAL,
    PARTY_ROLE_LEADER,
    PARTY_ROLE_ATTACKER,
    PARTY_ROLE_TANKER,
    PARTY_ROLE_BUFFER,
    PARTY_ROLE_SKILL_MASTER,
    PARTY_ROLE_HASTE,
    PARTY_ROLE_DEFENDER,
    PARTY_ROLE_MAX_NUM
};
enum EPhase {
    PHASE_CLOSE,
    PHASE_HANDSHAKE,
    PHASE_LOGIN,
    PHASE_SELECT,
    PHASE_LOADING,
    PHASE_GAME,
    PHASE_DEAD,
    PHASE_CLIENT_CONNECTING,
    PHASE_DBCLIENT,
    PHASE_P2P,
    PHASE_AUTH,
    PHASE_TEEN,
    PHASE_PASSPOD
};
enum EPointTypes {
    POINT_NONE,
    POINT_LEVEL,
    POINT_VOICE,
    POINT_EXP,
    POINT_NEXT_EXP,
    POINT_HP,
    POINT_MAX_HP,
    POINT_SP,
    POINT_MAX_SP,
    POINT_STAMINA,
    POINT_MAX_STAMINA,
    POINT_GOLD,
    POINT_ST,
    POINT_HT,
    POINT_DX,
    POINT_IQ,
    POINT_DEF_GRADE,
    POINT_ATT_SPEED,
    POINT_ATT_GRADE,
    POINT_MOV_SPEED,
    POINT_CLIENT_DEF_GRADE,
    POINT_CASTING_SPEED,
    POINT_MAGIC_ATT_GRADE,
    POINT_MAGIC_DEF_GRADE,
    POINT_EMPIRE_POINT,
    POINT_LEVEL_STEP,
    POINT_STAT,
    POINT_SUB_SKILL,
    POINT_SKILL,
    POINT_WEAPON_MIN,
    POINT_WEAPON_MAX,
    POINT_PLAYTIME,
    POINT_HP_REGEN,
    POINT_SP_REGEN,
    POINT_BOW_DISTANCE,
    POINT_HP_RECOVERY,
    POINT_SP_RECOVERY,
    POINT_POISON_PCT,
    POINT_STUN_PCT,
    POINT_SLOW_PCT,
    POINT_CRITICAL_PCT,
    POINT_PENETRATE_PCT,
    POINT_CURSE_PCT,
    POINT_ATTBONUS_HUMAN,
    POINT_ATTBONUS_ANIMAL,
    POINT_ATTBONUS_ORC,
    POINT_ATTBONUS_MILGYO,
    POINT_ATTBONUS_UNDEAD,
    POINT_ATTBONUS_DEVIL,
    POINT_ATTBONUS_INSECT,
    POINT_ATTBONUS_FIRE,
    POINT_ATTBONUS_ICE,
    POINT_ATTBONUS_DESERT,
    POINT_ATTBONUS_MONSTER,
    POINT_ATTBONUS_WARRIOR,
    POINT_ATTBONUS_ASSASSIN,
    POINT_ATTBONUS_SURA,
    POINT_ATTBONUS_SHAMAN,
    POINT_ATTBONUS_TREE,
    POINT_RESIST_WARRIOR,
    POINT_RESIST_ASSASSIN,
    POINT_RESIST_SURA,
    POINT_RESIST_SHAMAN,
    POINT_STEAL_HP,
    POINT_STEAL_SP,
    POINT_MANA_BURN_PCT,
    POINT_DAMAGE_SP_RECOVER,
    POINT_BLOCK,
    POINT_DODGE,
    POINT_RESIST_SWORD,
    POINT_RESIST_TWOHAND,
    POINT_RESIST_DAGGER,
    POINT_RESIST_BELL,
    POINT_RESIST_FAN,
    POINT_RESIST_BOW,
    POINT_RESIST_FIRE,
    POINT_RESIST_ELEC,
    POINT_RESIST_MAGIC,
    POINT_RESIST_WIND,
    POINT_REFLECT_MELEE,
    POINT_REFLECT_CURSE,
    POINT_POISON_REDUCE,
    POINT_KILL_SP_RECOVER,
    POINT_EXP_DOUBLE_BONUS,
    POINT_GOLD_DOUBLE_BONUS,
    POINT_ITEM_DROP_BONUS,
    POINT_POTION_BONUS,
    POINT_KILL_HP_RECOVERY,
    POINT_IMMUNE_STUN,
    POINT_IMMUNE_SLOW,
    POINT_IMMUNE_FALL,
    POINT_PARTY_ATTACKER_BONUS,
    POINT_PARTY_TANKER_BONUS,
    POINT_ATT_BONUS,
    POINT_DEF_BONUS,
    POINT_ATT_GRADE_BONUS,
    POINT_DEF_GRADE_BONUS,
    POINT_MAGIC_ATT_GRADE_BONUS,
    POINT_MAGIC_DEF_GRADE_BONUS,
    POINT_RESIST_NORMAL_DAMAGE,
    POINT_HIT_HP_RECOVERY,
    POINT_HIT_SP_RECOVERY,
    POINT_MANASHIELD,
    POINT_PARTY_BUFFER_BONUS,
    POINT_PARTY_SKILL_MASTER_BONUS,
    POINT_HP_RECOVER_CONTINUE,
    POINT_SP_RECOVER_CONTINUE,
    POINT_STEAL_GOLD,
    POINT_POLYMORPH,
    POINT_MOUNT,
    POINT_PARTY_HASTE_BONUS,
    POINT_PARTY_DEFENDER_BONUS,
    POINT_STAT_RESET_COUNT,
    POINT_HORSE_SKILL,
    POINT_MALL_ATTBONUS,
    POINT_MALL_DEFBONUS,
    POINT_MALL_EXPBONUS,
    POINT_MALL_ITEMBONUS,
    POINT_MALL_GOLDBONUS,
    POINT_MAX_HP_PCT,
    POINT_MAX_SP_PCT,
    POINT_SKILL_DAMAGE_BONUS,
    POINT_NORMAL_HIT_DAMAGE_BONUS,
    POINT_SKILL_DEFEND_BONUS,
    POINT_NORMAL_HIT_DEFEND_BONUS,
    POINT_PC_BANG_EXP_BONUS,
    POINT_PC_BANG_DROP_BONUS,
    POINT_RAMADAN_CANDY_BONUS_EXP,
    POINT_ENERGY,
    POINT_ENERGY_END_TIME,
    POINT_COSTUME_ATTR_BONUS,
    POINT_MAGIC_ATT_BONUS_PER,
    POINT_MELEE_MAGIC_ATT_BONUS_PER
};
enum EPositions {
    POS_DEAD,
    POS_SLEEPING,
    POS_RESTING,
    POS_SITTING,
    POS_FISHING,
    POS_FIGHTING,
    POS_MOUNTING,
    POS_STANDING
};
enum EPremiumTypes {
    PREMIUM_EXP,
    PREMIUM_ITEM,
    PREMIUM_SAFEBOX,
    PREMIUM_AUTOLOOT,
    PREMIUM_FISH_MIND,
    PREMIUM_MARRIAGE_FAST,
    PREMIUM_GOLD,
    PREMIUM_MAX_NUM = 9
};
enum EPrivType {
    PRIV_NONE,
    PRIV_ITEM_DROP,
    PRIV_GOLD_DROP,
    PRIV_GOLD10_DROP,
    PRIV_EXP_PCT,
    MAX_PRIV_NUM
};
enum EProfile {
    PROF_EVENT,
    PROF_CHR_UPDATE,
    PROF_IO,
    PROF_HEARTBEAT,
    PROF_MAX_NUM
};
enum EPublicMotion {
    MOTION_NONE,
    MOTION_WAIT,
    MOTION_WALK,
    MOTION_RUN,
    MOTION_CHANGE_WEAPON,
    MOTION_DAMAGE,
    MOTION_DAMAGE_FLYING,
    MOTION_STAND_UP,
    MOTION_DAMAGE_BACK,
    MOTION_DAMAGE_FLYING_BACK,
    MOTION_STAND_UP_BACK,
    MOTION_DEAD,
    MOTION_DEAD_BACK,
    MOTION_NORMAL_ATTACK,
    MOTION_COMBO_ATTACK_1,
    MOTION_COMBO_ATTACK_2,
    MOTION_COMBO_ATTACK_3,
    MOTION_COMBO_ATTACK_4,
    MOTION_COMBO_ATTACK_5,
    MOTION_COMBO_ATTACK_6,
    MOTION_COMBO_ATTACK_7,
    MOTION_COMBO_ATTACK_8,
    MOTION_INTRO_WAIT,
    MOTION_INTRO_SELECTED,
    MOTION_INTRO_NOT_SELECTED,
    MOTION_SPAWN,
    MOTION_FISHING_THROW,
    MOTION_FISHING_WAIT,
    MOTION_FISHING_STOP,
    MOTION_FISHING_REACT,
    MOTION_FISHING_CATCH,
    MOTION_FISHING_FAIL,
    MOTION_STOP,
    MOTION_SPECIAL_1,
    MOTION_SPECIAL_2,
    MOTION_SPECIAL_3,
    MOTION_SPECIAL_4,
    MOTION_SPECIAL_5,
    PUBLIC_MOTION_END,
    MOTION_MAX_NUM = 38
};
enum ERaceFlags {
    RACE_FLAG_ANIMAL = 1,
    RACE_FLAG_UNDEAD,
    RACE_FLAG_DEVIL = 4,
    RACE_FLAG_HUMAN = 8,
    RACE_FLAG_ORC = 16,
    RACE_FLAG_MILGYO = 32,
    RACE_FLAG_INSECT = 64,
    RACE_FLAG_FIRE = 128,
    RACE_FLAG_ICE = 256,
    RACE_FLAG_DESERT = 512,
    RACE_FLAG_TREE = 1024
};
enum ERefineType {
    REFINE_TYPE_NORMAL,
    REFINE_TYPE_NOT_USED1,
    REFINE_TYPE_SCROLL,
    REFINE_TYPE_HYUNIRON,
    REFINE_TYPE_MONEY_ONLY,
    REFINE_TYPE_MUSIN,
    REFINE_TYPE_BDRAGON
};
enum ERegenModes {
    MODE_TYPE,
    MODE_SX,
    MODE_SY,
    MODE_EX,
    MODE_EY,
    MODE_Z_SECTION,
    MODE_DIRECTION,
    MODE_REGEN_TIME,
    MODE_REGEN_PERCENT,
    MODE_MAX_COUNT,
    MODE_VNUM
};
enum ERequestChargeType {
    ERequestCharge_Cash,
    ERequestCharge_Mileage
};
enum ESectree {
    SECTREE_SIZE = 6400,
    SECTREE_HALF_SIZE = 3200,
    CELL_SIZE = 50
};
enum ESex {
    SEX_MALE,
    SEX_FEMALE
};
enum ESkillFlags {
    SKILL_FLAG_ATTACK = 1,
    SKILL_FLAG_USE_MELEE_DAMAGE,
    SKILL_FLAG_COMPUTE_ATTGRADE = 4,
    SKILL_FLAG_SELFONLY = 8,
    SKILL_FLAG_USE_MAGIC_DAMAGE = 16,
    SKILL_FLAG_USE_HP_AS_COST = 32,
    SKILL_FLAG_COMPUTE_MAGIC_DAMAGE = 64,
    SKILL_FLAG_SPLASH = 128,
    SKILL_FLAG_GIVE_PENALTY = 256,
    SKILL_FLAG_USE_ARROW_DAMAGE = 512,
    SKILL_FLAG_PENETRATE = 1024,
    SKILL_FLAG_IGNORE_TARGET_RATING = 2048,
    SKILL_FLAG_SLOW = 4096,
    SKILL_FLAG_STUN = 8192,
    SKILL_FLAG_HP_ABSORB = 16384,
    SKILL_FLAG_SP_ABSORB = 32768,
    SKILL_FLAG_FIRE_CONT = 65536,
    SKILL_FLAG_REMOVE_BAD_AFFECT = 131072,
    SKILL_FLAG_REMOVE_GOOD_AFFECT = 262144,
    SKILL_FLAG_CRUSH = 524288,
    SKILL_FLAG_POISON = 1048576,
    SKILL_FLAG_TOGGLE = 2097152,
    SKILL_FLAG_DISABLE_BY_POINT_UP = 4194304,
    SKILL_FLAG_CRUSH_LONG = 8388608,
    SKILL_FLAG_WIND = 16777216,
    SKILL_FLAG_ELEC = 33554432,
    SKILL_FLAG_FIRE = 67108864
};
enum ESkillGroups {SKILL_GROUP_MAX_NUM = 2};
enum ESkillIndexes {
    SKILL_RESERVED,
    SKILL_SAMYEON,
    SKILL_PALBANG,
    SKILL_JEONGWI,
    SKILL_GEOMKYUNG,
    SKILL_TANHWAN,
    SKILL_GIGONGCHAM = 16,
    SKILL_GYOKSAN,
    SKILL_DAEJINGAK,
    SKILL_CHUNKEON,
    SKILL_GEOMPUNG,
    SKILL_AMSEOP = 31,
    SKILL_GUNGSIN,
    SKILL_CHARYUN,
    SKILL_EUNHYUNG,
    SKILL_SANGONG,
    SKILL_YEONSA = 46,
    SKILL_KWANKYEOK,
    SKILL_HWAJO,
    SKILL_GYEONGGONG,
    SKILL_GIGUNG,
    SKILL_SWAERYUNG = 61,
    SKILL_YONGKWON,
    SKILL_GWIGEOM,
    SKILL_TERROR,
    SKILL_JUMAGAP,
    SKILL_PABEOB,
    SKILL_MARYUNG = 76,
    SKILL_HWAYEOMPOK,
    SKILL_MUYEONG,
    SKILL_MANASHILED,
    SKILL_TUSOK,
    SKILL_MAHWAN,
    SKILL_BIPABU = 91,
    SKILL_YONGBI,
    SKILL_PAERYONG,
    SKILL_HOSIN,
    SKILL_REFLECT,
    SKILL_GICHEON,
    SKILL_NOEJEON = 106,
    SKILL_BYEURAK,
    SKILL_CHAIN,
    SKILL_JEONGEOP,
    SKILL_KWAESOK,
    SKILL_JEUNGRYEOK,
    SKILL_7_A_ANTI_TANHWAN,
    SKILL_7_B_ANTI_AMSEOP,
    SKILL_7_C_ANTI_SWAERYUNG,
    SKILL_7_D_ANTI_YONGBI,
    SKILL_8_A_ANTI_GIGONGCHAM,
    SKILL_8_B_ANTI_YEONSA,
    SKILL_8_C_ANTI_MAHWAN,
    SKILL_8_D_ANTI_BYEURAK,
    SKILL_LEADERSHIP = 121,
    SKILL_COMBO,
    SKILL_CREATE,
    SKILL_MINING,
    SKILL_LANGUAGE1 = 126,
    SKILL_LANGUAGE2,
    SKILL_LANGUAGE3,
    SKILL_POLYMORPH,
    SKILL_HORSE,
    SKILL_HORSE_SUMMON,
    SKILL_HORSE_WILDATTACK = 137,
    SKILL_HORSE_CHARGE,
    SKILL_HORSE_ESCAPE,
    SKILL_HORSE_WILDATTACK_RANGE,
    SKILL_ADD_HP,
    SKILL_RESIST_PENETRATE,
    GUILD_SKILL_START = 151,
    GUILD_SKILL_EYE = 151,
    GUILD_SKILL_BLOOD,
    GUILD_SKILL_BLESS,
    GUILD_SKILL_SEONGHWI,
    GUILD_SKILL_ACCEL,
    GUILD_SKILL_BUNNO,
    GUILD_SKILL_JUMUN,
    GUILD_SKILL_TELEPORT,
    GUILD_SKILL_DOOR,
    GUILD_SKILL_END = 162,
    GUILD_SKILL_COUNT = 12
};
enum ETargetTypes {
    TARGET_TYPE_POS = 1,
    TARGET_TYPE_VID
};
enum EUniqueSubTypes {
    UNIQUE_NONE,
    UNIQUE_BOOK,
    UNIQUE_SPECIAL_RIDE,
    UNIQUE_SPECIAL_MOUNT_RIDE
};
enum EUseSubTypes {
    USE_POTION,
    USE_TALISMAN,
    USE_TUNING,
    USE_MOVE,
    USE_TREASURE_BOX,
    USE_MONEYBAG,
    USE_BAIT,
    USE_ABILITY_UP,
    USE_AFFECT,
    USE_CREATE_STONE,
    USE_SPECIAL,
    USE_POTION_NODELAY,
    USE_CLEAR,
    USE_INVISIBILITY,
    USE_DETACHMENT,
    USE_BUCKET,
    USE_POTION_CONTINUE,
    USE_CLEAN_SOCKET,
    USE_CHANGE_ATTRIBUTE,
    USE_ADD_ATTRIBUTE,
    USE_ADD_ACCESSORY_SOCKET,
    USE_PUT_INTO_ACCESSORY_SOCKET,
    USE_ADD_ATTRIBUTE2,
    USE_RECIPE,
    USE_CHANGE_ATTRIBUTE2,
    USE_MULTI_ABILITY_UP
};
enum EWarMapTypes {
    WAR_MAP_TYPE_NORMAL,
    WAR_MAP_TYPE_FLAG
};
enum EWeaponSubTypes {
    WEAPON_SWORD,
    WEAPON_DAGGER,
    WEAPON_BOW,
    WEAPON_TWO_HANDED,
    WEAPON_BELL, WEAPON_FAN,
    WEAPON_ARROW,
    WEAPON_MOUNT_SPEAR,
    WEAPON_NUM_TYPES
};
enum EWearPositions {
    WEAR_BODY,
    WEAR_HEAD,
    WEAR_FOOTS,
    WEAR_WRIST,
    WEAR_WEAPON,
    WEAR_NECK,
    WEAR_EAR,
    WEAR_UNIQUE1,
    WEAR_UNIQUE2,
    WEAR_ARROW,
    WEAR_SHIELD,
    WEAR_ABILITY1,
    WEAR_ABILITY2,
    WEAR_ABILITY3,
    WEAR_ABILITY4,
    WEAR_ABILITY5,
    WEAR_ABILITY6,
    WEAR_ABILITY7,
    WEAR_ABILITY8,
    WEAR_COSTUME_BODY,
    WEAR_COSTUME_HAIR,
    WEAR_MAX_NUM
};
enum EWhisperType {
    WHISPER_TYPE_NORMAL,
    WHISPER_TYPE_NOT_EXIST,
    WHISPER_TYPE_TARGET_BLOCKED,
    WHISPER_TYPE_SENDER_BLOCKED,
    WHISPER_TYPE_ERROR,
    WHISPER_TYPE_GM,
    WHISPER_TYPE_SYSTEM = 255
};
enum EWindows {
    RESERVED_WINDOW,
    INVENTORY,
    EQUIPMENT,
    SAFEBOX,
    MALL,
    GROUND
};
}
#endif // __LIBM2_GAME_ENUMS_HPP
