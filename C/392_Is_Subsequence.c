```c id="e0e4yy"
/*
LeetCode 392 - Is Subsequence

Difficulty: Easy

Approach:
- Use two pointers:
    ptr1 traverses string s
    ptr2 traverses string t

- Traverse string t from left to right.
- Whenever matching characters are found,
  move ptr1 to the next character in s.
- If ptr1 reaches the end of s,
  all characters have been matched in order.

Example:
s = "abc"
t = "ahbgdc"

a matches a
b matches b
c matches c

Result: true

Time Complexity:
- Single traversal of string t: O(n)

Total: O(n)

Space Complexity:
- Only two pointers are used

Auxiliary Space: O(1)

Topics:
- Strings
- Two Pointers
- Greedy
- Pointer Manipulation

Status:
- Accepted

Author:
- Naman Kumar
*/

#include <stdbool.h>

bool isSubsequence(char* s, char* t) {

    char *ptr1 = s;
    char *ptr2 = t;

    if(*ptr1 == '\0'){
        return true;
    }

    while(*ptr2 != '\0'){

        if(*ptr1 == *ptr2){

            ptr1++;

            if(*ptr1 == '\0'){
                return true;
            }
        }

        ptr2++;
    }

    return false;
}
```
