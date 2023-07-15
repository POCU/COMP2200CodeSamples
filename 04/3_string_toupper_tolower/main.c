#include <stdio.h>

#include "string_utils.h"

int main(void)
{
    char str[15] = "Welcome to C";

    printf("Is space alphabet?: %s\n",
        is_alpha(' ') ? "Yes" : "No");                 /* No */

    printf("m in uppercase: %c\n", to_upper('m'));     /* M */
    printf("W in lowercase: %c\n", to_lower('W'));     /* w */

    string_toupper(str);
    printf("Uppercase: %s\n", str);                    /* WELCOME TO C */

    string_tolower(str);
    printf("Lowercase: %s\n", str);                    /* welcome to c */

    return 0;
}
