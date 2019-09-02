#include <stdio.h>

int is_overlap(int nums1[], const size_t length1, int nums2[], const size_t length2);

int main(void)
{
    int nums1[5] = {1, 2, 3, 4, 5};
    int nums2[5] = {1, 2, 8, 9, 10};
    int* nums3 = nums1;
    const size_t LENGTH = 5u;
    
    printf("Are nums1 and nums2 overlapped?: %s\n", 
        (is_overlap(nums1, LENGTH, nums2, LENGTH) ? "Yes" : "No"));
    printf("Are nums1 and nums3 overlapped?: %s\n", 
        (is_overlap(nums1, LENGTH, nums3, LENGTH) ? "Yes" : "No"));
    
    return 0;
}

int is_overlap(int nums1[], const size_t length1, int nums2[], const size_t length2)
{
    size_t i;
 
    if (length1 != length2) {
        return 0;
    }
    for (i = 0; i < length1; ++i) {
        if (&nums1[i] != &nums2[i]) {
            return 0;
        }
    }
    
    return 1;
}
