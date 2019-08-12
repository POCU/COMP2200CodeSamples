#include "minion.h"

unsigned int g_hp = 100u;
unsigned int g_strength = 10u;
unsigned int g_gold = 15u;

void strengthen_minion(void)
{
    g_hp += 50u;
    g_strength += 20u;
    g_gold += 10u;
}
