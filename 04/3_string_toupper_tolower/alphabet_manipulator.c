#include "alphabet_manipulator.h"

int is_alpha(int c)
{
   return (c >= UPPER_A_ASCII && c <= UPPER_Z_ASCII)
        || (c >= LOWER_A_ASCII && c <= LOWER_Z_ASCII);
}

int to_upper(int c)
{
    if (is_alpha(c) && c >= LOWER_A_ASCII) {
        return c - ALPHA_ASCII_DIFF;
    }
    
    return c;
}
int to_lower(int c)
{
    if (is_alpha(c) && c <= UPPER_Z_ASCII) {
        return c + ALPHA_ASCII_DIFF;
    }
    
    return c;
}

void string_toupper(char* str)
{
    size_t i;
    for (i = 0; str[i] != '\0'; ++i) {
        str[i] = to_upper(str[i]);
    }
}

void string_tolower(char* str)
{
    size_t i;
    for (i = 0; str[i] != '\0'; ++i) {
        str[i] = to_lower(str[i]);
    }
}
