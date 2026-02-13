#include <stdio.h>

#include "bank_account.h"

extern unsigned int g_chequing;
extern unsigned int g_saving;
extern unsigned int s_fee;
extern void set_fee(const unsigned int fee);

int main(void)
{
    printf("g_chequing: %u\n", g_chequing);     /* 0 */
    printf("g_saving: %u\n", g_saving);         /* 0 */
    /* this is a linker error */
    /*printf("s_fee: %u", s_fee);*/             /* 20 */

    deposit_into_chequing(300u);
    deposit_into_saving(700u);
    /* this is a linker error */
    /*set_fee(100);*/

    printf("g_chequing: %u\n", g_chequing);     /* 280 */
    printf("g_saving: %u\n", g_saving);         /* 680 */
    /* this a linker error */
    /*printf("s_fee: %u", s_fee);*/             /* 100 */

    return 0;
}
