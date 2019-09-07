#include <ctype.h>

#include "string_utils.h"

int string_case_insensitive_compare(const char* str0, const char* str1)
{
    int c1 = tolower(*str0);
    int c2 = tolower(*str1);

    while (c1 != '\0' && c1 == c2) {
        c1 = tolower(*++str0);
        c2 = tolower(*++str1);
    }

    if (c1 == c2) {
        return 0;
    }

    return c1 > c2 ? 1 : -1;
}
