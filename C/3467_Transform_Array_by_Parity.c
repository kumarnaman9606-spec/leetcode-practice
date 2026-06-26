/*
Problem: 3467. Transform Array by Parity
Difficulty: Easy

Approach:
- Traverse the array once and replace:
  - Even numbers with 0.
  - Odd numbers with 1.
- Sort the transformed array in non-decreasing order.
- Return the modified array.

Time Complexity: O(n²)
Space Complexity: O(1)

Where:
n = number of elements in the array
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* transformArray(int* nums, int numsSize, int* returnSize) {

    *returnSize = numsSize;

    for(int i = 0; i < numsSize; i++){
        if(nums[i] % 2 == 0){
            nums[i] = 0;
        }
        else{
            nums[i] = 1;
        }
    }

    int temp;

    for(int i = 0; i < numsSize; i++){
        for(int j = i + 1; j < numsSize; j++){
            if(nums[i] > nums[j]){
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    return nums;
}
