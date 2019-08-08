#include <stdio.h>

#include "external_file.h"

int main(void)
{
    printf("g_extern_var: %d\n", g_extern_var);
    increase_value();
    printf("g_extern_var: %d", g_extern_var);

    return 0;
}
