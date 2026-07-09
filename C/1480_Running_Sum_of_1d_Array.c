/*
Problem: 1480. Running Sum of 1d Array
Difficulty: Easy

Approach:
- Initialize a variable to store the cumulative sum.
- Traverse the array from left to right.
- Add the current element to the cumulative sum.
- Replace the current element with the updated cumulative sum.
- Return the modified array.

Time Complexity: O(n)
Space Complexity: O(1)

Where:
n = number of elements in the array
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* runningSum(int* nums, int numsSize, int* returnSize) {

    *returnSize = numsSize;

    int sum = 0;

    for(int i = 0; i < numsSize; i++){
        sum += nums[i];
        nums[i] = sum;
    }

    return nums;
}
