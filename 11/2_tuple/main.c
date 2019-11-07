#include <stdio.h>

/* id(int), "name"(const char*), level(unsigned char), hp(int) */
#define MONSTER_DATA \
	MONSTER_ENTRY(0, "pope",    1,   100)   \
    MONSTER_ENTRY(1, "big rat", 2,   30)    \
    MONSTER_ENTRY(2, "mama",    10,  255)   \
    MONSTER_ENTRY(3, "dragon",  250, 300000)\

int main(void)
{
    size_t i;

    int ids[] = {
#define MONSTER_ENTRY(id, name, level, hp) id,
        MONSTER_DATA
#undef MONSTER_ENTRY
    };

    const char* names[] = {
#define MONSTER_ENTRY(id, name, level, hp) name,
        MONSTER_DATA
#undef MONSTER_ENTRY
    };

    unsigned char levels[] = {
#define MONSTER_ENTRY(id, name, level, hp) level,
        MONSTER_DATA
#undef MONSTER_ENTRY
    };

    int healths[] = {
#define MONSTER_ENTRY(id, name, level, hp) hp,
        MONSTER_DATA
#undef MONSTER_ENTRY
    };

    for (i = 0; i < sizeof(ids) / sizeof(int); ++i) {
        printf("%3d %3d %6d %s\n",
            ids[i], levels[i], healths[i], names[i]);
    }

    return 0;
}
