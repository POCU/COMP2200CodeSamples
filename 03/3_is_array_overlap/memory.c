#include "memory.h"

int is_overlap(int nums1[], const size_t length1, int nums2[], const size_t length2)
{
    return (nums1 <= nums2
        ? nums1 + length1 > nums2
        : nums2 + length2 > nums1);
}
