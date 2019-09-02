#ifndef MEMORY_H
#define MEMORY_H

#define TRUE (1)
#define FALSE (0)

#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))

int is_overlap(int nums1[], const size_t length1, int nums2[], const size_t length2);

#endif /* MEMORY_H */
