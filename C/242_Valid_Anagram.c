/**
 * LeetCode 242 - Valid Anagram
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 *
 * Approach:
 * - Use a frequency table of size 26 because the input contains
 *   lowercase English letters.
 * - Increment the count for every character in s.
 * - Decrement the count for every character in t.
 * - If every count returns to zero, the strings are anagrams.
 */

#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    if (strlen(s) != strlen(t)) {
        return false;
    }

    int freq[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return false;
        }
    }

    return true;
}
