#include <stdio.h>

#include "minion.h"

extern unsigned int g_hp;
extern unsigned int g_strength;

int main(void)
{
    printf("Normal minion:\n");
    printf("hp: %u\n", g_hp);               /* 100 */
    printf("strength: %u\n", g_strength);   /* 10 */
    /* this does not compile */
    /*printf("gold: %u\n", g_gold);*/       /* 15 */

    printf("\n");

    go_berserk();
    add_gold(10u);

    printf("Berserk minion:\n");
    printf("hp: %u\n", g_hp);               /* 150 */
    printf("strength: %u\n", g_strength);   /* 30 */
    /* this does not compile */
    /*printf("gold: %u\n", g_gold);*/       /* 25 */

    return 0;
}
