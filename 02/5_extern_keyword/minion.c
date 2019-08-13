#include "minion.h"

unsigned int g_hp = 100u;
unsigned int g_strength = 10u;
unsigned int g_gold = 15u;

void go_berserk(void)
{
    g_hp += 50u;
    g_strength += 20u;
}

void add_gold(unsigned int gold)
{
    g_gold += gold;
}
