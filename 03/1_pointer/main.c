#include <stdio.h>

void get_min_max(const int nums[], const size_t length, int* out_min, int* out_max);

int main(void)
{
    int nums[5] = {3, 10, 9, 8, 7};
    const size_t LENGTH = 5u;
    int min_val;
    int max_val;
    
    get_min_max(nums, LENGTH, &min_val, &max_val);
    
    printf("min_val: %d\n", min_val);
    printf("max_val: %d\n", max_val);
    
    return 0;
}

void get_min_max(const int nums[], const size_t length, int* out_min, int* out_max)
{
    size_t i;
    
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
