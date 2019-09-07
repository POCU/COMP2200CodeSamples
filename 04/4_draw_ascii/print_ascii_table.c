#include <stdio.h>

#include "print_ascii_table.h"

void print_ascii_table(void)
{
    const char MIN_PRINTABLE_ASCII = 32;
    const char PRINTABLE_ASCII_ROW_END = 62;

    const char SECOND_COL_GAP = 32;
    const char THIRD_COL_GAP = 64;

    char i;

    printf("Dec Hex  Chr\t");
    printf("Dec Hex  Chr\t");
    printf("Dec Hex  Chr\n");

    for (i = MIN_PRINTABLE_ASCII; i <= PRINTABLE_ASCII_ROW_END; ++i) {
        printf("%03d %#X %c\t", i, i, i);
        printf("%03d %#X %c\t", 
            i + SECOND_COL_GAP, i + SECOND_COL_GAP, i + SECOND_COL_GAP);
        printf("%03d %#X %c\n",
            i + THIRD_COL_GAP, i + THIRD_COL_GAP, i + THIRD_COL_GAP);
    }
}
