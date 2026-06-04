/*
    LeetCode 1979 - Find Greatest Common Divisor of Array

    Approach:
    1. Find the minimum and maximum elements in the array.
    2. If the maximum is divisible by the minimum,
       the answer is the minimum itself.
    3. Otherwise, iterate through all possible divisors
       and find the greatest common divisor shared by
       both the minimum and maximum elements.

    Time Complexity: O(n + max)
    Space Complexity: O(1)

    Author: Naman Kumar
*/

int findGCD(int* nums, int numsSize) {
    int max = 0;
    int min = nums[0];
    int hcf;

    for(int i = 0; i < numsSize; i++) {
        if(nums[i] > max) {
            max = nums[i];
        }

        if(nums[i] < min) {
            min = nums[i];
        }
    }

    if(max % min == 0) {
        return min;
    }
    else {
        for(int j = 1; j <= (max / 2); j++) {
            if(min % j == 0 && max % j == 0) {
                hcf = j;
            }
        }

        return hcf;
    }
}
