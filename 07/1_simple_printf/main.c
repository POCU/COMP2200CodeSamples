#include "simpleio.h"

int main(void)
{
    printf_simple("c\n", 'A');
    printf_simple("d\n", 10);
    printf_simple("s\n", "Hello");

    printf_simple("\n");
    printf_simple("c d s\n", 'A', 10, "Hello");

    return 0;
}
