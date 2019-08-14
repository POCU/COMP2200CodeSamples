#include <stdio.h>

#define NUM_CLASSES (2)
#define NUM_SUBJECTS (3)

int main(void)
{
    int grades[NUM_CLASSES][NUM_SUBJECTS] = {
        { 65, 90, 75 }, 
        { 70, 40, 50 }
    };
    int average = 0;
    int i;
    int j;

    for (i = 0; i < NUM_CLASSES; ++i) {
        for (j = 0; j < NUM_SUBJECTS; ++j) {
            average += grades[i][j];
        }
    }
    average /= (i * j);

    printf("Average: %d\n", average);

    return 0;
}
