/**
 * LeetCode 977 - Squares of a Sorted Array
 *
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 *
 * Approach:
 * - Use two pointers:
 *   - left starts at the beginning.
 *   - right starts at the end.
 * - The largest square will always come from either end.
 * - Place the larger square at the end of the result array.
 * - Move the corresponding pointer inward.
 * - Continue until all elements are processed.
 */

#include <stdlib.h>

int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;

    int *arr = (int *)malloc(sizeof(int) * numsSize);

    int left = 0;
    int right = numsSize - 1;
    int k = numsSize - 1;

    while (left <= right) {
        if (abs(nums[left]) > abs(nums[right])) {
            arr[k] = nums[left] * nums[left];
            left++;
        } else {
            arr[k] = nums[right] * nums[right];
            right--;
        }
        k--;
    }

    return arr;
}
