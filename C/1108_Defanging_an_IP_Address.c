/*
 * LeetCode Problem: 1108. Defanging an IP Address
 * Difficulty: Easy
 *
 * Approach:
 * - Traverse the input string character by character.
 * - Replace every '.' with "[.]".
 * - Copy all other characters directly into a new dynamically allocated string.
 *
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 *
 * Author: Priya Gupta
 */

#include <string.h>
#include <stdlib.h>

char* defangIPaddr(char* address) {
    int len = strlen(address);

    // Allocate memory for the new string.
    // Each '.' adds two extra characters: '[' and ']'.
    char *result = (char *)malloc(len + 7);

    int i, j = 0;

    for (i = 0; i < len; i++) {
        if (address[i] == '.') {
            result[j++] = '[';
            result[j++] = '.';
            result[j++] = ']';
        } else {
            result[j++] = address[i];
        }
    }

    result[j] = '\0';
    return result;
}
