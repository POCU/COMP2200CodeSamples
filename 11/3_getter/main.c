#include <stdio.h>

/* (type, name) */
#define MONSTER_STRUCT \
	MONSTER_MEMBER(int,           id)    \
    MONSTER_MEMBER(const char*,   name)  \
    MONSTER_MEMBER(int,           hp)    \

typedef struct {
#define MONSTER_MEMBER(type, name) type name;
    MONSTER_STRUCT
#undef MONSTER_MEMBER
} monster_t;

#define MONSTER_MEMBER(type, name)       \
type get_mob_##name(const monster_t* mob)\
{                                        \
    return mob->name;                    \
}                                        \

MONSTER_STRUCT

#undef MONSTER_MEMBER

int main(void)
{
    monster_t mob;
    mob.id = 0;
    mob.name = "Pope Mob";
    mob.hp = 10001;

    printf("%3d %6d %s\n",
        get_mob_id(&mob),
        get_mob_hp(&mob),
        get_mob_name(&mob));

    return 0;
}
