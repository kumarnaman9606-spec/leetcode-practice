/**
 * LeetCode 136 - Single Number
 *
 * Two solutions are included below.
 */

/*
 * Solution 1: Frequency Array
 *
 * Time Complexity: O(n)
 * Space Complexity: O(60000) under the given constraints
 */

int singleNumberFrequency(int* nums, int numsSize) {
    int set[60000] = {0};

    for (int i = 0; i < numsSize; i++) {
        set[30000 + nums[i]]++;
    }

    for (int i = 0; i < 60000; i++) {
        if (set[i] == 1) {
            return i - 30000;
        }
    }

    return 0;
}


/*
 * Solution 2: XOR
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 *
 * XOR properties:
 * a ^ a = 0
 * a ^ 0 = a
 */

int singleNumber(int* nums, int numsSize) {
    int result = 0;

    for (int i = 0; i < numsSize; i++) {
        result ^= nums[i];
    }

    return result;
}
