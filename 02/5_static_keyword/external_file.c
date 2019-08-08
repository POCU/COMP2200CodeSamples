#include <stdio.h>

#include "external_file.h"

static int s_static_var = 0;

void increase_value(void)
{
    s_static_var += 100;
}
