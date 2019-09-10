#include "buffered_print.h"

int main(void)
{
    buffered_print("Hello, ");             /* Hello, */
    buffered_print("World. ");             /* Hello, World. */
    buffered_print("C is awesome! ");      /* Hello, World. C is awesome! */
    buffered_print("C# is awesome too! "); /* Hello, World. C is awesome! C# */
    buffered_print("Is Java better? ");    /* is awesome too! Is Java better? */

    return 0;
}
