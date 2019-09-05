#include <ctype.h>

#include "string.h"

int string_case_insensitive_compare(const char* str0, const char* str1)
{
    while (*str0 != '\0' && tolower(*str0) == tolower(*str1)) {
        ++str0;
        ++str1;
    }

    if (*str0 - *str1 == 0) {
        return 0;
    }
    return *str0 > *str1 ? 1 : -1;
}
