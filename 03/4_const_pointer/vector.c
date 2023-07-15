#include "vector.h"

void add_vec3(const int* v1, const int* v2, int* out_v3)
{
    size_t i = 0;
    for (i = 0 ; i < VECTOR_LENGTH; ++i) {
        *out_v3++ = *v1++ + *v2++;
    }
}
