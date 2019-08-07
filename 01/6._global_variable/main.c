#include <stdio.h>

int g_x = 100;

void increase_number(void)
{
    int y = 200;
    y += 100;
    g_x += 100;
}

int main(void)
{
    printf("Value Of Global Variable: %d\n", g_x);
    increase_number();
    printf("Value Of Global Variable: %d\n", g_x);
    /*printf("Value Of Local Variable: %d\n", y);*/
    return 0;
}
