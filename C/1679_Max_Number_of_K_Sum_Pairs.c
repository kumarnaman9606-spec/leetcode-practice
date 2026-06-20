/*
Problem: 1679. Max Number of K-Sum Pairs
Difficulty: Medium

Approach:
1. Sort the array in ascending order.
2. Use two pointers:
   - left starts at the beginning.
   - right starts at the end.
3. Calculate nums[left] + nums[right]:
   - If the sum equals k, a valid pair is found.
     Increment answer and move both pointers.
   - If the sum is less than k, move left pointer right
     to increase the sum.
   - If the sum is greater than k, move right pointer left
     to decrease the sum.
4. Continue until the pointers meet.

Time Complexity:
- Sorting: O(n log n)
- Two Pointer Traversal: O(n)
- Overall: O(n log n)

Space Complexity:
- O(1) extra space
*/

#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int maxOperations(int* nums, int numsSize, int k)
{
    qsort(nums, numsSize, sizeof(int), compare);

    int left = 0;
    int right = numsSize - 1;
    int ans = 0;

    while(left < right)
    {
        int sum = nums[left] + nums[right];

        if(sum == k)
        {
            ans++;
            left++;
            right--;
        }
        else if(sum < k)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return ans;
}
