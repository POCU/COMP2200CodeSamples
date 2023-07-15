#include <stdio.h>

#include "wallet.h"

unsigned int g_dollars = 0u;
unsigned int g_cents = 0u;

int main(void)
{
    printf("g_dollars: %d\n", g_dollars);     /* 0 */
    printf("g_cents: %d\n", g_cents);         /* 0 */

    deposit(10u, 25u);

    printf("g_dollars: %d\n", g_dollars);     /* 10 */
    printf("g_cents: %d\n", g_cents);         /* 25 */

    withdraw(10u, 25u);

    printf("g_dollars: %d\n", g_dollars);     /* 0 */
    printf("g_cents: %d\n", g_cents);         /* 0 */

    return 0;
}

void deposit(unsigned int dollars, unsigned int cents)
{
    g_dollars += dollars;
    g_cents += cents;
}

void withdraw(unsigned int dollars, unsigned int cents)
{
    if (g_dollars >= dollars) {
        g_dollars -= dollars;
    }
    if (g_cents >= cents) {
        g_cents -= cents;
    }
}
