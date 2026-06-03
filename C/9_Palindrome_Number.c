/*
Author: Naman Kumar
Problem: LeetCode 9 - Palindrome Number
Language: C

Approach:
Convert the integer to a string and compare characters
from both ends using two pointers. If all corresponding
characters match, the number is a palindrome.

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool isPalindrome(int x) {
    if(x < 0)
        return false;

    char str[20];

    snprintf(str, sizeof(str), "%d", x);

    int i = 0;
    int j = strlen(str) - 1;

    while(i < j) {
        if(str[i] != str[j]) {
            return false;
        }

        i++;
        j--;
    }

    return true;
}
