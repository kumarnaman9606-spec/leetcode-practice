/**
 * LeetCode 125 - Valid Palindrome
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 *
 * Approach:
 * - Use two pointers starting from both ends.
 * - Skip all non-alphanumeric characters.
 * - Compare characters in a case-insensitive manner.
 * - Return false on the first mismatch.
 */

#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool isPalindrome(char* s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {

        while (left < right && !isalnum(s[left])) {
            left++;
        }

        while (left < right && !isalnum(s[right])) {
            right--;
        }

        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}
