#include <stdio.h>

#include "print_ascii_table.h"

void print_ascii_table()
{
    const char PRINTABLE_MIN_ASCII = 32u;
    const char PRINTABLE_MAX_ASCII = 126u;
    char i;

    for (i = PRINTABLE_MIN_ASCII; i <= PRINTABLE_MAX_ASCII; ++i) {
        printf("%c, %03d, %#X\n", i, i, i);
    }
}
