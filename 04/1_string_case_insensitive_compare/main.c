#include <stdio.h>

#include "string_utils.h"

int main(void)
{
    int diff;

    diff = string_case_insensitive_compare("hello", "HELL");
    printf("hello to HELL: %d\n", diff);   /* 1 */

    diff = string_case_insensitive_compare("hello", "yellow");
    printf("hello to yellow: %d\n", diff); /* -1 */

    diff = string_case_insensitive_compare("hello", "HELLO");
    printf("hello to HELLO: %d\n", diff);  /* 0 */

    return 0;
}
