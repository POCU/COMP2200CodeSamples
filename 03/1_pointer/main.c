#include <assert.h>
#include <stdio.h>

#include "algorithm.h"

#define LENGTH (5)

int main(void)
{
    const int nums[LENGTH] = { 3, 10, 9, 8, 7 };
    int min;
    int max;

    get_min_max(nums, LENGTH, &min, &max);

    printf("min: %d\n", min);
    printf("max: %d\n", max);

    return 0;
}

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
