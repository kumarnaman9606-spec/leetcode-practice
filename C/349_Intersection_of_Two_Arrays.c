/**
 * LeetCode 349 - Intersection of Two Arrays
 *
 * Time Complexity: O(nums1Size + nums2Size)
 * Space Complexity: O(1), excluding the returned array
 *
 * Approach:
 * - LeetCode 349 constrains values to the range [0, 1000].
 * - Use a fixed array as a presence table.
 * - Mark values from nums1.
 * - While scanning nums2, add a value to the result if it is present
 *   in nums1 and has not already been added.
 */

#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int set[1001] = {0};

    int capacity = nums1Size < nums2Size ? nums1Size : nums2Size;
    int *arr = (int *)malloc(sizeof(int) * capacity);

    for (int i = 0; i < nums1Size; i++) {
        set[nums1[i]] = 1;
    }

    int k = 0;

    for (int j = 0; j < nums2Size; j++) {
        if (set[nums2[j]] == 1) {
            arr[k] = nums2[j];
            k++;
            set[nums2[j]] = 2;
        }
    }

    *returnSize = k;
    return arr;
}
