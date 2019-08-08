#include <stdio.h>

int main(void)
{
    int x = 3;
    switch (x) {
    case 0:
        printf("case 0\n");
        break;
    case 1:
        printf("case 1\n");
        break;
    case 2:
        printf("case 2\n");
        break;
    case 3:
        printf("case 3\n");
    default:
        printf("default case\n");
    }

    return 0;
}
