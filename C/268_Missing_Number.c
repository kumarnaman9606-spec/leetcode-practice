/**
 * LeetCode 268 - Missing Number
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1) under the given constraints
 *
 * Approach:
 * - Use a presence array to mark every number that appears.
 * - Check which number from 0 to numsSize - 1 is missing.
 * - If none is missing in that range, numsSize itself is missing.
 */

int missingNumber(int* nums, int numsSize) {
    int set[10001] = {0};

    for (int i = 0; i < numsSize; i++) {
        set[nums[i]] = 1;
    }

    for (int j = 0; j < numsSize; j++) {
        if (set[j] != 1) {
            return j;
        }
    }

    return numsSize;
}
