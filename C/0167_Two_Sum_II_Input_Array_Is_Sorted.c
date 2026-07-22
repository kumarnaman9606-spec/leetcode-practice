/**
 * LeetCode 167 - Two Sum II: Input Array Is Sorted
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 *
 * Approach:
 * - Use two pointers:
 *   - left starts at the beginning.
 *   - right starts at the end.
 * - Compare the sum of the two elements with the target.
 * - If the sum is greater than the target, move the right pointer left.
 * - If the sum is smaller than the target, move the left pointer right.
 * - When the target is found, return the 1-based indices.
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    *returnSize = 2;

    int left = 0;
    int right = numbersSize - 1;
    int *arr = (int *)malloc(sizeof(int) * 2);

    while (left < right) {
        int sum = numbers[left] + numbers[right];

        if (sum > target) {
            right--;
        } else if (sum < target) {
            left++;
        } else {
            arr[0] = left + 1;
            arr[1] = right + 1;
            return arr;
        }
    }

    return arr;
}
