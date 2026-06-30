/*
Problem: 374. Guess Number Higher or Lower
Difficulty: Easy

Approach:
- Use Binary Search to find the picked number.
- Maintain two pointers:
  1. low - the smallest possible number.
  2. high - the largest possible number.
- Compute the middle number and use the provided guess() API.
- If the guess is too high, search the left half.
- If the guess is too low, search the right half.
- If the guess is correct, return the number.

Time Complexity: O(log n)
Space Complexity: O(1)

Where:
n = upper bound of the search range
*/

/**
 * Forward declaration of guess API.
 * @param num your guess
 * @return -1 if num is higher than the picked number
 *          1 if num is lower than the picked number
 *          otherwise return 0
 */
int guess(int num);

int guessNumber(int n) {

    int low = 1;
    int high = n;

    while(low <= high){

        int curr = low + (high - low) / 2;

        if(guess(curr) == -1){
            high = curr - 1;
        }
        else if(guess(curr) == 1){
            low = curr + 1;
        }
        else{
            return curr;
        }
    }

    return -1;
}
