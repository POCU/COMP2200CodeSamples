#include <stdio.h>

#include "wallet.h"

int main(void)
{
    printf("g_dollars: %d\n", g_dollars);     /* 0 */
    printf("g_cents: %f\n", g_cents);         /* 0.000000 */

    put_in_money();

    printf("g_dollars: %d\n", g_dollars);     /* 10 */
    printf("g_cents: %f\n", g_cents);         /* 0.250000 */

    take_out_money();

    printf("g_dollars: %d\n", g_dollars);     /* 0 */
    printf("g_cents: %f\n", g_cents);         /* 0.000000 */

    return 0;
}
