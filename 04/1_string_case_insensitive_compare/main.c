#include <stdio.h>

#include "string_utils.h"

int main(void)
{
    int diff;

    diff = string_case_insensitive_compare("hello", "HELL");
    printf("hello compared to HELL: %d\n", diff);    /* 1 */

    diff = string_case_insensitive_compare("hello", "yellow");
    printf("hello compared to yellow: %d\n", diff);  /* -1 */

    diff = string_case_insensitive_compare("hello", "hello");
    printf("hello compared to hello: %d\n", diff);   /* 0 */

    return 0;
}
