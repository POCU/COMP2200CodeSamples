#include "string_utils.h"

int is_alpha(int c)
{
   return (c >= 'A' && c <= 'Z')
        || (c >= 'a' && c <= 'z');
}

int to_upper(int c)
{
    if (is_alpha(c) && c >= 'a') {
        return c ^ ('a' ^ 'A');
    }

    return c;
}

int to_lower(int c)
{
    if (is_alpha(c) && c <= 'Z') {
        return c | ('a' ^ 'A');
    }

    return c;
}

void string_toupper(char* str)
{
    char c;
    while ((c = *str) != '\0') {
        *str++ = to_upper(c);
    }
}

void string_tolower(char* str)
{
    char c;
    while ((c = *str) != '\0') {
        *str++ = to_lower(c);
    }
}
