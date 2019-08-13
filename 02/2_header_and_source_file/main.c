#include <stdio.h>

#include "wallet.h"

unsigned int g_dollars = 0u;
float g_cents = 0.0f;

int main(void)
{
    printf("g_dollars: %d\n", g_dollars);     /* 0 */
    printf("g_cents: %f\n", g_cents);         /* 0.000000 */

    deposit(10u, 0.25f);

    printf("g_dollars: %d\n", g_dollars);     /* 10 */
    printf("g_cents: %f\n", g_cents);         /* 0.250000 */

    withdraw(10u, 0.25f);

    printf("g_dollars: %d\n", g_dollars);     /* 0 */
    printf("g_cents: %f\n", g_cents);         /* 0.000000 */

    return 0;
}

void deposit(unsigned int dollars, float cents)
{
    g_dollars += dollars;
    g_cents += cents;
}

void withdraw(unsigned int dollars, float cents)
{
    if (g_dollars > dollars) {
        g_dollars -= dollars;
    }
    if (g_cents > cents) {
        g_cents -= cents;
    }
}
