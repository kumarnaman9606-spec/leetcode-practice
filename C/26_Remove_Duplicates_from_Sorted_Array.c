/**
 * LeetCode 26 - Remove Duplicates from Sorted Array
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 *
 * Approach:
 * - Use two pointers:
 *   1. 'i' scans the array.
 *   2. 'k' points to the last unique element.
 * - Whenever a new unique element is found, move 'k' forward
 *   and copy the element to nums[k].
 * - Return k + 1, which is the number of unique elements.
 */

/**
 * Note: The returned value should represent the new length of the array.
 */
int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0)
        return 0;

    int k = 0;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[k]) {
            k++;
            nums[k] = nums[i];
        }
    }

    return k + 1;
}
