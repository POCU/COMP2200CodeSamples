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
    printf("g_x: %d\n", g_x);
    increase_number();
    printf("g_x: %d\n", g_x);
    /*printf("y: %d\n", y);*/
    return 0;
}
