/*
Problem: 2413. Smallest Even Multiple
Difficulty: Easy

Approach:
- Check whether the given number is even or odd.
- If the number is even, it is already its own smallest even multiple.
- If the number is odd, multiply it by 2 to obtain the smallest even multiple.
- Return the result.

Time Complexity: O(1)
Space Complexity: O(1)
*/

int smallestEvenMultiple(int n) {

    if(n % 2 != 0){
        return n * 2;
    }

    return n;
}
