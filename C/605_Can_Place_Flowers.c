```c
/*
    LeetCode 605 - Can Place Flowers

    Approach:
    1. Handle the special case where n is already 0.
    2. For flowerbeds of size greater than 2, check the first
       and last positions separately.
    3. Traverse the middle positions and plant a flower whenever
       both adjacent plots and the current plot are empty.
    4. Count the number of flowers planted and compare it with n.

    Time Complexity: O(n)
    Space Complexity: O(1)

    Author: Naman Kumar
*/

#include <stdbool.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int count = 0;

    if (n == 0) {
        return true;
    }

    if (flowerbedSize > 2) {
        if (flowerbed[0] != 1 && flowerbed[1] != 1) {
            flowerbed[0] = 1;
            count++;
        }

        if (flowerbed[flowerbedSize - 1] != 1 &&
            flowerbed[flowerbedSize - 2] != 1) {
            flowerbed[flowerbedSize - 1] = 1;
            count++;
        }

        for (int i = 1; i < flowerbedSize - 1; i++) {
            if (flowerbed[i - 1] != 1 &&
                flowerbed[i] != 1 &&
                flowerbed[i + 1] != 1) {
                flowerbed[i] = 1;
                count++;
            }
        }

        return count >= n;
    }

    else if (flowerbedSize == 2) {
        if (flowerbed[0] == 0 && flowerbed[1] == 0) {
            count = 1;
        }

        return count >= n;
    }

    else if (flowerbedSize == 1) {
        if (flowerbed[0] == 0) {
            count = 1;
        }

        return count >= n;
    }

    return false;
}
```
