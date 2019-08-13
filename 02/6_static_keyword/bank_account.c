#include "bank_account.h"

unsigned int g_chequing = 0u;
unsigned int g_saving = 0u;
static int s_fee = 20u;

void deposit_into_chequing(const unsigned int deposit)
{
    g_chequing += (deposit - s_fee);	
}

void deposit_into_saving(const unsigned int deposit)
{
    g_saving += (deposit - s_fee);
}

static void set_fee(int fee)
{
    s_fee = fee;
}
