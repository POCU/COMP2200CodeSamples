#include <stdio.h>

#include "memory.h"

int main(void)
{
    int nums1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int nums2[5] = { 1, 2, 8, 9, 10 };
    int* nums3 = nums1 + 2;
    const size_t NUMS3_LENGTH = 5u;
    char* result = NULL;
    
    result = is_overlap(nums1, ARRAY_LENGTH(nums1), nums2, ARRAY_LENGTH(nums2))
        ? "Yes" : "No";
    printf("Are nums1 and nums2 overlapped?: %s\n", result);

    result = is_overlap(nums1, ARRAY_LENGTH(nums1), nums3, NUMS3_LENGTH)
        ? "Yes" : "No";
    printf("Are nums1 and nums3 overlapped?: %s\n", result);
    
    return 0;
}
