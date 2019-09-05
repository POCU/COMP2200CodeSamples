#include <stdio.h>

#include "alphabet_manipulator.h"

int main(void)
{
    char str[15] = "Hell yeah!";
    
    printf("Is space alphabet?: %s\n"
        , is_alpha(str[4]) ? "Yes" : "No");             /* No */

    printf("y in upper case: %c\n", to_upper(str[5]));  /* Y */
    printf("H in lower case: %c\n", to_lower(str[0]));  /* h */
    
    string_toupper(str);
    printf("Upper case: %s\n", str);                    /* HELL YEAH! */

    string_tolower(str);
    printf("Lower case: %s\n", str);                    /* hell yeah! */

    return 0;
}
