#include <stdio.h>

#include "fixed_string.h"

int main(void)
{
    copy_string("Hello, ", BUFFER_LENGTH);                    /* Hello, */
    copy_string("World. ", BUFFER_LENGTH);                    /* Hello, World. */
    copy_string("C is awesome! ", BUFFER_LENGTH);             /* Hello, World. C is awesome! */
    copy_string("Is Java better than C? ", BUFFER_LENGTH);    /* Hello, World. C is awesome! Is*/
    copy_string("Is Java better than C#? ", BUFFER_LENGTH);   /* Is Java better than C#? */

    return 0;
}
