#include <stdio.h>

#include "external_file.h"

int main(void)
{
    printf("g_extern_var: %d\n", g_extern_var); /* 0 */
    /* below does not compile */
    /*printf("g_var: %d\n", g_var);*/

    increase_value();

    printf("g_extern_var: %d\n", g_extern_var); /* 100 */
    /* below does not compile */
    /*printf("g_var: %d\n", g_var);*/

    return 0;
}
