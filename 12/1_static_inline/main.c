#include <stdio.h>

#include "adder.h"
#include "inline_math.h"
#include "static_math.h"

int main(void)
{
    printf("1 + 2 = %d\n", static_add(1, 2));
    printf("addr of static_add: %p\n", 
        (void*)static_add);

    printf("1 + 2 = %d\n", inline_add(1, 2));
    printf("addr of inline_add: %p\n", 
        (void*)inline_add);

    run_adder();

    return 0;
}
