#include <stdio.h>

#include "bank_account.h"

extern unsigned int g_chequing;
extern unsigned int s_saving;

int main(void)
{
    printf("g_chequing: %u\n", g_chequing);     /* 0 */
	/* below causes linker error */
	/*printf("s_saving: %u\n", s_saving);*/     /* 0 */
	
	deposit_into_chequing(300u);
	deposit_into_saving(700u);
	
	printf("g_chequing: %u\n", g_chequing);     /* 300 */
	/* below causes linker error */
	/*printf("s_saving: %u\n", s_saving);*/     /* 700 */
	
    return 0;
}
