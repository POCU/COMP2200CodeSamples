#include "wallet.h"

int g_dollars = 0;
float g_cents = 0.0f;

void put_in_money(void)
{
    g_dollars += 10;
    g_cents += 0.25f;
}

void take_out_money(void)
{
    if (g_dollars != 0) {
        g_dollars -= 10;
    }
    if (g_cents > 0.0f) {
        g_cents -= 0.25f;
    }
}
