/**
 * LeetCode 1920 - Build Array from Permutation
 *
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 *
 * Notes:
 * - The returned array is allocated using malloc().
 * - The caller is responsible for freeing the allocated memory.
 */

#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;

    int *ans = (int *)malloc(sizeof(int) * numsSize);

    // Good practice: Check if memory allocation was successful
    if (ans == NULL) {
        *returnSize = 0;
        return NULL;
    }

    for (int i = 0; i < numsSize; i++) {
        ans[i] = nums[nums[i]];
    }

    return ans;
}
