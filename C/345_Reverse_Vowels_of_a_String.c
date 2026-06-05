/*
Problem: 345. Reverse Vowels of a String
Difficulty: Easy

Approach 1:
- Store all vowels in a separate array.
- Traverse the string again and replace vowels using the stored vowels in reverse order.
- Time Complexity: O(n)
- Space Complexity: O(n)

Approach 2:
- Use two pointers from both ends.
- Move pointers until vowels are found and swap them.
- Time Complexity: O(n)
- Space Complexity: O(1)
*/

#include <string.h>
#include <stdlib.h>

/* ---------- Approach 1 ---------- */

int isVowel1(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

char* reverseVowelsApproach1(char* s) {
    int len = strlen(s);

    char *vowels = (char *)malloc((len + 1) * sizeof(char));

    int count = 0;

    for(int i = 0; i < len; i++) {
        if(isVowel1(s[i])) {
            vowels[count++] = s[i];
        }
    }

    count--;

    for(int i = 0; i < len; i++) {
        if(isVowel1(s[i])) {
            s[i] = vowels[count--];
        }
    }

    free(vowels);

    return s;
}

/* ---------- Approach 2 (Optimized) ---------- */

int isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

char* reverseVowels(char* s) {
    int left = 0;
    int right = strlen(s) - 1;

    while(left < right) {

        while(left < right && !isVowel(s[left])) {
            left++;
        }

        while(left < right && !isVowel(s[right])) {
            right--;
        }

        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }

    return s;
}
