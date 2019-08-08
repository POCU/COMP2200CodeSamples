#include "external_file.h"

int g_extern_var = 0;

void increase_value(void)
{
    g_extern_var += 100;
}
