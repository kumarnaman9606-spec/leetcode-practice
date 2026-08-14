/**
 * LeetCode 1 - Two Sum
 *
 * Time Complexity: O(n) average
 * Space Complexity: O(n)
 *
 * Approach:
 * - Store each number and its index in a hash map.
 * - For the current number, calculate the complement:
 *     target - nums[i]
 * - If the complement is already in the map, its stored index
 *   and the current index form the answer.
 */

#include <stdlib.h>
#include "uthash.h"

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

typedef struct node {
    int key;
    int val;
    UT_hash_handle hh;
} node;

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;

    int *arr = (int *)malloc(sizeof(int) * 2);
    node *map = NULL;

    for (int i = 0; i < numsSize; i++) {
        int rem = target - nums[i];
        node *found = NULL;

        HASH_FIND_INT(map, &rem, found);

        if (found != NULL) {
            arr[0] = found->val;
            arr[1] = i;
            return arr;
        }

        node *n = (node *)malloc(sizeof(node));
        n->key = nums[i];
        n->val = i;

        HASH_ADD_INT(map, key, n);
    }

    return arr;
}
