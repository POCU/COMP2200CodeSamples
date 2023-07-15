#include <stdio.h>

int main(void)
{
    int grades[2][3] = {
        { 65, 90, 75 }, 
        { 70, 40, 50 }
    };
    int average = 0;
    int i;
    int j;

    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 3; ++j) {
            average += grades[i][j];
        }
    }
    average /= (i * j);

    printf("Average: %d\n", average);

    return 0;
}
