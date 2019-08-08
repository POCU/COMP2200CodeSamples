#include <stdio.h>

int main(void)
{
    int grades[5] = {70, 60, 85, 55, 90};
    int average = 0;
    int i;

    for (i = 0; i < 5; ++i) {
	    average += grades[i];	
    }
    average /= i;
	
    printf("Average Of all grades: %d\n", average); 

    return 0;
}
