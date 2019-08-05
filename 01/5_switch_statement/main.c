#include <stdio.h>

int main(void)
{
    int x = 3;
    switch (x) {
    case 0:
        printf("Case 0\n");
        break;
    case 1:
        printf("Case 1\n");
        break;
    case 2:
        printf("Case 2\n");
        break;
    case 3:
        printf("Case 3\n");
    default:
        printf("default case\n");
    }

    return 0;
}
