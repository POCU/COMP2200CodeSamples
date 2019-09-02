#include <stdio.h>

void add_vec3(const int* v1, const int* v2, int* out_v3);

int main(void)
{
    int v1[3] = {1, 2, 3};
    int v2[3] = {1, 2, 8};
    int v3[3];
    
    add_vec3(v1, v2, v3);
    
    printf("v3: %d, %d, %d", v3[0], v3[1], v3[2]);

    return 0;
}

void add_vec3(const int* v1, const int* v2, int* out_v3)
{
    *out_v3 = *v1 + *v2;
    *(out_v3 + 1) = *(v1 + 1) + *(v2 + 1);
    *(out_v3 + 2) = *(v1 + 2) + *(v2 + 2);
}
