#include <stdio.h>

#include "buffered_print.h"

int main(void)
{
    buffered_print("Hello, ");             /* Hello, */
    buffered_print("World. ");             /* Hello, World. */
    buffered_print("C is awesome! ");      /* Hello, World. C */
    buffered_print("C# is awesome too! "); /* C# is awesome t */
    buffered_print("Is Java better? ");    /* Is Java better? */

    return 0;
}
