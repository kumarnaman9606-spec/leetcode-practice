/*
Problem: 1929. Concatenation of Array
Difficulty: Easy

Approach:
- Allocate a new array of size 2 * numsSize.
- Traverse the original array once.
- Copy each element into the first half of the new array.
- Copy the same element into the second half of the new array.
- Set the return size and return the new array.

Time Complexity: O(n)
Space Complexity: O(n)

Where:
n = number of elements in the input array
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* getConcatenation(int* nums, int numsSize, int* returnSize) {

    *returnSize = numsSize * 2;

    int *arr = (int *)malloc(sizeof(int) * numsSize * 2);

    for(int i = 0; i < numsSize; i++){
        arr[i] = nums[i];
        arr[i + numsSize] = nums[i];
    }

    return arr;
}
