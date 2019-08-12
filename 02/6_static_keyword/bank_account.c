#include "bank_account.h"

unsigned int g_chequing = 0u;
static unsigned int s_saving = 0u;

void deposit_into_chequing(const unsigned int deposit)
{
    g_chequing += deposit;	
}

void deposit_into_saving(const unsigned int deposit)
{
    s_saving += deposit;
}
