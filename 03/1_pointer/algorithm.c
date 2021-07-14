#include <assert.h>
#include <stddef.h>
#include "algorithm.h"

/* pre-condition: length >= 1 */
void get_min_max(const int nums[], const size_t length, int* out_min, int* out_max)
{
    size_t i;

    assert(length >= 1);

    *out_min = nums[0];
    *out_max = nums[0];
    for (i = 1; i < length; ++i) {
        if (*out_min > nums[i]) {
            *out_min = nums[i];
        }
        if (*out_max < nums[i]) {
            *out_max = nums[i];
        }
    }
}
