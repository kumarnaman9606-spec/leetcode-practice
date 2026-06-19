/*
Problem: 643. Maximum Average Subarray I
Difficulty: Easy

Approach:
- Use Sliding Window.
- Calculate the sum of the first k elements.
- Store it as maxSum.
- Move the window one element at a time:
    - Add the new element entering the window.
    - Remove the element leaving the window.
- Update maxSum whenever a larger window sum is found.
- Return maxSum / k as the maximum average.

Time Complexity: O(n)
Space Complexity: O(1)

Where:
n = number of elements in the array.
*/

double findMaxAverage(int* nums, int numsSize, int k) {
    int sum = 0;

    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }

    int maxSum = sum;

    for (int i = k; i < numsSize; i++) {
        sum += nums[i];
        sum -= nums[i - k];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    return (double)maxSum / k;
}
