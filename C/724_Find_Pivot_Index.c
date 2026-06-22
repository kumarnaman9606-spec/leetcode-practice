/*
Problem: 724. Find Pivot Index
Difficulty: Easy

Approach 1 (Brute Force):
- For every index, calculate the sum of elements on the left
  and the sum of elements on the right.
- If both sums are equal, return the index.
- Time Complexity: O(n²)

Approach 2 (Mathematical Observation):
- Calculate total sum.
- For each index, check if:
      leftSum == (totalSum - nums[i]) / 2
- Reduces unnecessary calculations but still requires
  maintaining left sums efficiently.

Approach 3 (Optimized Prefix Sum):
- Calculate the total sum of the array.
- Traverse the array while maintaining a running left sum.
- At each index:
      rightSum = totalSum - nums[i] - leftSum
- If leftSum == rightSum, return the current index.
- Otherwise, update leftSum and continue.

Time Complexity: O(n)
Space Complexity: O(1)

Where:
n = numsSize
*/

int pivotIndex(int* nums, int numsSize) {
    int totalSum = 0;

    for(int i = 0; i < numsSize; i++) {
        totalSum += nums[i];
    }

    int leftSum = 0;

    for(int i = 0; i < numsSize; i++) {

        totalSum -= nums[i];

        if(leftSum == totalSum) {
            return i;
        }

        leftSum += nums[i];
    }

    return -1;
}
