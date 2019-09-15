#include <ctype.h>
#include <stdio.h>

#include "whitespace_counter.h"

void print_whitespace_stat(void)
{
    int c;
    size_t num_whitespaces = 0u;
    size_t num_newlines = 0u;

    c = getchar();
    while (c != EOF) {
        if (isspace(c)) {
            ++num_whitespaces;

            if (c == '\n') {
                ++num_newlines;
            }
        }

        c = getchar();
    }

    printf("# whitespaces: %5d\n", num_whitespaces);
    printf("# new lines:   %5d\n", num_newlines);
}
