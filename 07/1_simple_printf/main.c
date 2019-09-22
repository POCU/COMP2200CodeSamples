#include "simpleio.h"

int main(void)
{
    printf_simple("c\n", 'A');
    printf_simple("d\n", 10);
    printf_simple("s\n", "Hello\n");
    
    printf_simple("c d s", 'A', 10, "Hello\n");

    return 0;
}
