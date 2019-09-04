#include <stdio.h>

#include "vector.h"

int main(void)
{
    const int v1[VECTOR_LENGTH] = {1, 2, 3};
    const int v2[VECTOR_LENGTH] = {1, 2, 8};
    int v3[VECTOR_LENGTH];
    
    add_vec3(v1, v2, v3);
    
    printf("v3: %d, %d, %d", v3[0], v3[1], v3[2]);

    return 0;
}
