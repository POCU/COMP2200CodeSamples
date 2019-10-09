#include <stdio.h>

#include "print_ascii_table.h"

void print_ascii_table(void)
{
    const char MIN_PRINTABLE_ASCII = 32;
    const char MAX_PRINTABLE_ASCII = 126;
    const char NUM_ROWS = 32;
    const char COL_CHAR_OFFSET = 32;

    char i;

    printf("Dec Hex  Char\t");
    printf("Dec Hex  Char\t");
    printf("Dec Hex  Char\n");

    for (i = 0; i < NUM_ROWS; ++i) {
        char ch = i + MIN_PRINTABLE_ASCII;
        printf("%03d %#X %c\t", ch, ch, ch);

        ch += COL_CHAR_OFFSET;
        printf("%03d %#X %c\t", ch, ch, ch);

        ch += COL_CHAR_OFFSET;
        if (ch <= MAX_PRINTABLE_ASCII) {
            printf("%03d %#X %c\n", ch, ch, ch);
        }
    }
}
