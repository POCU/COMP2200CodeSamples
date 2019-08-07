#include <stdio.h>

int main(void)
{
    int grades[5] = {70, 60, 85, 55, 90};
    int average = 0;
    int i = 0;
    
    for (; i < 5; ++i) {
	    average += grades[i];	
    }
    average /= 5;
    
	printf("Average Of All Grades: %d\n", average); 
    
	return 0;
}
