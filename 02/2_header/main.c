#include <stdio.h>

#include "header.h"

int main(void)
{
    printf("g_int_value: %d\n", g_int_value);     /* 0 */
    printf("g_float_value: %f\n", g_float_value); /* 0.000000 */

    increase_value();

    printf("g_int_value: %d\n", g_int_value);     /* 100 */
    printf("g_float_value: %f\n", g_float_value); /* 100.000000 */

    decrease_value();

    printf("g_int_value: %d\n", g_int_value);     /* 0 */
    printf("g_float_value: %f\n", g_float_value); /* 0.000000 */

    return 0;
}
