#include <stdio.h>

int main(void)
{
    int x = 3;
    switch (x) {
        case 0:
            printf("Case 0\n");
        case 1:
            printf("Case 1\n");
        case 2:
            printf("Case 2\n");
        case 3:
            printf("Case 3\n");
        default:
            printf("default case\n");
    }

    return 0;
}
