```c id="h1g5rl"
/*
LeetCode 11 - Container With Most Water

Difficulty: Medium

Approach:
- Use two pointers:
    left  = start of the array
    right = end of the array

- Calculate the area formed by the two lines:
    area = (right - left) * min(height[left], height[right])

- Update the maximum area found so far.

- Move the pointer pointing to the shorter line inward:
    - If height[left] < height[right], move left.
    - Otherwise, move right.

- Continue until both pointers meet.

Example:
height = [1,8,6,2,5,4,8,3,7]

Maximum area:
width = 7
height = 7

area = 49

Time Complexity:
- Single traversal using two pointers: O(n)

Total: O(n)

Space Complexity:
- Only a few integer variables are used

Auxiliary Space: O(1)

Topics:
- Arrays
- Two Pointers
- Greedy
- Optimization

Status:
- Accepted

Author:
- Naman Kumar
*/

int maxArea(int* height, int heightSize) {

    int left = 0;
    int right = heightSize - 1;

    int max = 0;

    while(left < right) {

        int h;

        if(height[left] < height[right]) {
            h = height[left];
        }
        else {
            h = height[right];
        }

        int area = (right - left) * h;

        if(area > max) {
            max = area;
        }

        if(height[left] < height[right]) {
            left++;
        }
        else {
            right--;
        }
    }

    return max;
}
```
