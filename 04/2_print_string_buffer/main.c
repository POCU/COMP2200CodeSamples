#include <stdio.h>

#include "buffered_print.h"

int main(void)
{
    buffered_print("Hello, ", sizeof("Hello, ") + 1);                          /* Hello, */
    buffered_print("World. ", sizeof("World. ") + 1);                          /* Hello, World. */
    buffered_print("C is awesome! ", sizeof("C is awesome! ") + 1);            /* Hello, World. C is awesome! */
    buffered_print("C# is awesome too! ", sizeof("C# is awesome too! ") + 1);  /* Hello, World. C is awesome! C# */
    buffered_print("Is Java better? ", sizeof("Is Java better? ") + 1);        /* Is Java better? */

    return 0;
}
