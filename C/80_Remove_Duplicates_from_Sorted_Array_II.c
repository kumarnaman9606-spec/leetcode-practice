/**
 * LeetCode 80 - Remove Duplicates from Sorted Array II
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 *
 * Approach:
 * - Keep the first two elements.
 * - Use a write pointer (k) starting from index 2.
 * - For every new element, compare it with nums[k - 2].
 * - If they are different, copy the current element to nums[k]
 *   and increment k.
 * - Return k as the new length.
 */

int removeDuplicates(int* nums, int numsSize) {

    if (numsSize == 0)
        return 0;

    int k = (numsSize >= 2) ? 2 : 1;

    for (int i = 2; i < numsSize; i++) {
        if (nums[i] != nums[k - 2]) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}
