#include "bank_account.h"

unsigned int g_chequing = 0u;
unsigned int g_saving = 0u;
static unsigned int s_fee = 20u;

void deposit_into_chequing(const unsigned int amount)
{
    /* this could underflow */
    g_chequing += (amount - s_fee);
}

void deposit_into_saving(const unsigned int amount)
{
    /* this could underflow */
    g_saving += (amount - s_fee);
}

static void set_fee(const unsigned int fee)
{
    s_fee = fee;
}
