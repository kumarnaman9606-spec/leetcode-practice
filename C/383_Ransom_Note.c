/**
 * LeetCode 383 - Ransom Note
 *
 * Time Complexity: O(n + m)
 * Space Complexity: O(1)
 *
 * Approach:
 * - Count the available characters in magazine.
 * - Consume one character for every character in ransomNote.
 * - If any character's count becomes negative, magazine does not
 *   contain enough copies of that character.
 */

#include <stdbool.h>

bool canConstruct(char* ransomNote, char* magazine) {
    int freq[26] = {0};

    int i = 0;

    while (magazine[i] != '\0') {
        freq[magazine[i] - 'a']++;
        i++;
    }

    i = 0;

    while (ransomNote[i] != '\0') {
        freq[ransomNote[i] - 'a']--;
        i++;
    }

    for (int j = 0; j < 26; j++) {
        if (freq[j] < 0) {
            return false;
        }
    }

    return true;
}
