```c
/*
LeetCode 283 - Move Zeroes

Difficulty: Easy

Approach:
- Use two pointers:
    ptr1 = position where the next non-zero element should be placed
    ptr2 = traverses the array

- Whenever a non-zero element is found:
    1. Swap the values at ptr1 and ptr2.
    2. Move ptr1 forward.

- Always move ptr2 forward.

This keeps all non-zero elements in their original relative order
while moving all zeroes to the end of the array.

Example:
nums = [0, 1, 0, 3, 12]

After processing:
[1, 3, 12, 0, 0]

Time Complexity:
- Single traversal of the array: O(n)

Total: O(n)

Space Complexity:
- Only a few pointer and integer variables are used

Auxiliary Space: O(1)

Topics:
- Arrays
- Two Pointers
- In-Place Algorithms
- Pointer Manipulation

Status:
- Accepted

Author:
- Naman Kumar
*/

void moveZeroes(int* nums, int numsSize) {

    int *ptr1 = &nums[0];
    int *ptr2 = &nums[0];

    int temp = 0;

    if(numsSize <= 1) {
        return;
    }

    for(int i = 0; i < numsSize; i++) {

        if(*ptr2 != 0) {

            temp = *ptr1;
            *ptr1 = *ptr2;
            *ptr2 = temp;

            ptr1++;
        }

        ptr2++;
    }
}
```
