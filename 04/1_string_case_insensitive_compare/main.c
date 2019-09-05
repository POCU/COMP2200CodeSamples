#include <stdio.h>

#include "string.h"

int main(void)
{
    const char STR0[] = "hello";
    const char STR1[] = "HELL";
    const char STR2[] = "yellow";
    int DIFF;
    
    DIFF = string_case_insensitive_compare(STR0, STR1);
    printf("hello compared to HELL: %d\n", DIFF);           /* 1 */
    
    DIFF = string_case_insensitive_compare(STR0, STR2);
    printf("hello compared to yellow: %d\n", DIFF);         /* -1 */

    DIFF = string_case_insensitive_compare(STR0, "hello");
    printf("hello compared to hello: %d\n", DIFF);          /* 0 */

    return 0;
}
