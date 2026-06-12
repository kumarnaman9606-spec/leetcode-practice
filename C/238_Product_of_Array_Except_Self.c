```c
/*
LeetCode 238 - Product of Array Except Self

Difficulty: Medium

Approach:
- Compute prefix products and store them in the prev array.
- Compute suffix products and store them in the suc array.
- Multiply corresponding prefix and suffix products to obtain the answer.

Example:
nums = [1, 2, 3, 4]

prev = [1, 1, 2, 6]
suc  = [24, 12, 4, 1]

ans  = [24, 12, 8, 6]

Time Complexity:
- Initializing arrays: O(n)
- Building prefix products: O(n)
- Building suffix products: O(n)
- Building answer array: O(n)

Total: O(n)

Space Complexity:
- prev array: O(n)
- suc array: O(n)

Auxiliary Space: O(n)

Topics:
- Arrays
- Prefix Products
- Suffix Products
- Dynamic Memory Allocation

Status:
- Accepted

Author:
- Naman Kumar
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdlib.h>

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;

    int *ans = (int *)malloc(numsSize * sizeof(int));

    int len = numsSize - 1;

    int prev[999999];
    int suc[999999];

    for(int i = 0; i < numsSize; i++) {
        prev[i] = 1;
        suc[i] = 1;
    }

    prev[0] = 1;
    for(int i = 1; i < numsSize; i++) {
        prev[i] = prev[i - 1] * nums[i - 1];
    }

    suc[len] = 1;
    for(int i = len - 1; i >= 0; i--) {
        suc[i] = suc[i + 1] * nums[i + 1];
    }

    for(int i = 0; i < numsSize; i++) {
        ans[i] = prev[i] * suc[i];
    }

    return ans;
}
```
