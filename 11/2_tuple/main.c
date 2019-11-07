#include <stdio.h>

/* id(int), "name"(const char*), level(unsigned char), hp(int) */
#define MONSTER_DATA \
	MONSTER_ENTRY(0, "pope",        1,      100)   \
    MONSTER_ENTRY(1, "sewer rat",   2,      30)    \
    MONSTER_ENTRY(2, "mama",        10,     255)   \
    MONSTER_ENTRY(3, "fire dragon", 250,    300000)\

int main(void)
{
    size_t i;

#define MONSTER_ENTRY(id, name, level, hp) id,
    int ids[] = {
        MONSTER_DATA
    };
#undef MONSTER_ENTRY

#define MONSTER_ENTRY(id, name, level, hp) name,
    const char* names[] = {
        MONSTER_DATA
    };
#undef MONSTER_ENTRY

#define MONSTER_ENTRY(id, name, level, hp) level,
    unsigned char levels[] = {
        MONSTER_DATA
    };
#undef MONSTER_ENTRY

#define MONSTER_ENTRY(id, name, level, hp) hp,
    int healths[] = {
        MONSTER_DATA
    };
#undef MONSTER_ENTRY

    for (i = 0; i < sizeof(ids) / sizeof(int); ++i) {
        printf("%3d %3d %6d %s\n",
            ids[i], levels[i], healths[i], names[i]);
    }

    return 0;
}
