```c
/*
    LeetCode 1431 - Kids With the Greatest Number of Candies

    Approach:
    1. Find the maximum number of candies any kid currently has.
    2. For each kid, add the extraCandies value.
    3. If the new total is greater than or equal to the maximum,
       mark the result as true; otherwise, false.
    4. Return the boolean array.

    Time Complexity: O(n)
    Space Complexity: O(n)

    Author: Naman Kumar
*/

#include <stdbool.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int max = 0;
    bool *result = (bool *)malloc(sizeof(bool) * candiesSize);
    int tempmax;

    for(int i = 0; i < candiesSize; i++) {
        if(candies[i] >= max) {
            max = candies[i];
        }
    }

    for(int j = 0; j < candiesSize; j++) {
        tempmax = candies[j] + extraCandies;

        if(tempmax >= max) {
            result[j] = true;
        }
        else {
            result[j] = false;
        }
    }

    *returnSize = candiesSize;
    return result;
}
```
