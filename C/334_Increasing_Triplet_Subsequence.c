```c
/*
LeetCode 334 - Increasing Triplet Subsequence

Difficulty: Medium

Approach:
- Maintain two variables:
    first  = smallest element seen so far
    second = smallest element greater than first seen so far

- Traverse the array once:
    1. If the current element is smaller than or equal to first,
       update first.
    2. Otherwise, if the current element is smaller than or equal to second,
       update second.
    3. Otherwise, a value greater than both first and second has been found,
       forming an increasing triplet subsequence.

Example:
nums = [2, 1, 5, 0, 4, 6]

first  = 0
second = 4

6 > second

Triplet found:
0 < 4 < 6

Time Complexity:
- Single traversal of the array: O(n)

Total: O(n)

Space Complexity:
- Only two integer variables are used

Auxiliary Space: O(1)

Topics:
- Arrays
- Greedy
- Subsequences
- Linear Scan

Status:
- Accepted

Author:
- Naman Kumar
*/

#include <stdbool.h>
#include <limits.h>

bool increasingTriplet(int* nums, int numsSize) {

    int first = INT_MAX;
    int second = INT_MAX;

    for(int i = 0; i < numsSize; i++) {

        if(nums[i] <= first) {
            first = nums[i];
        }

        else if(nums[i] <= second) {
            second = nums[i];
        }

        else {
            return true;
        }
    }

    return false;
}
```
