/**
 * LeetCode 217 - Contains Duplicate
 *
 * Time Complexity: O(n) average
 * Space Complexity: O(n)
 *
 * Approach:
 * - Use a hash set to store previously seen numbers.
 * - If the current number is already in the set, a duplicate exists.
 */

#include <stdbool.h>
#include <stdlib.h>
#include "uthash.h"

typedef struct node {
    int key;
    UT_hash_handle hh;
} node;

bool containsDuplicate(int* nums, int numsSize) {
    node *set = NULL;

    for (int i = 0; i < numsSize; i++) {
        int key = nums[i];
        node *found = NULL;

        HASH_FIND_INT(set, &key, found);

        if (found != NULL) {
            return true;
        }

        node *n = (node *)malloc(sizeof(node));
        n->key = nums[i];

        HASH_ADD_INT(set, key, n);
    }

    return false;
}
