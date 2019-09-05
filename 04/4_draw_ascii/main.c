#include <stdio.h>

int main(void)
{
    const char MIN_ASCII = 32u;
    const char MAX_ASCII = 126u;
    char i;

    for (i = MIN_ASCII; i <= MAX_ASCII; ++i) {
        printf("%c, %03d, %#X\n", i, i, i);
    }

    return 0;
}
