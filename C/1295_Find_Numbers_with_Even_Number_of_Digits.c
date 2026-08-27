// LeetCode 1295. Find Numbers with Even Number of Digits
// Difficulty: Easy
//
// Approach: For each number, count its digits by repeatedly dividing by 10
// until it reaches 0. Increment count if the digit count is even.
//
// Time Complexity:  O(n * d) where n = numsSize, d = avg number of digits per element
// Space Complexity: O(1) (in-place, no extra structures)
//
// Note: This mutates the input array while counting digits (nums[i] gets
// divided down to 0). Fine here since nums isn't needed after the count,
// but worth remembering if you reuse nums later in a real submission.

int findNumbers(int* nums, int numsSize) {
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        int dig = 0;
        while (nums[i] > 0) {
            nums[i] = nums[i] / 10;
            dig++;
        }
        if (dig % 2 == 0) {
            count++;
        }
    }
    return count;
}
