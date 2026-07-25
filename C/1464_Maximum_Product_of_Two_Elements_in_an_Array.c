/**
 * LeetCode 1464 - Maximum Product of Two Elements in an Array
 *
 * Time Complexity: O(d)
 * Space Complexity: O(d)
 *
 * Approach:
 * - Extract each digit of the integer into an array.
 * - Find the largest digit and its position.
 * - Find the second largest digit.
 * - Return the product of the two largest digits.
 */

#include <stdlib.h>

int maxProduct(int n) {
    int temp = n;
    int digits = 0;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    int *arr = (int *)malloc(sizeof(int) * digits);

    for (int i = digits - 1; i >= 0; i--) {
        arr[i] = n % 10;
        n /= 10;
    }

    int max1 = arr[0];
    int maxPos = 0;

    for (int i = 1; i < digits; i++) {
        if (arr[i] > max1) {
            max1 = arr[i];
            maxPos = i;
        }
    }

    int max2 = 0;

    for (int i = 0; i < digits; i++) {
        if (i != maxPos && arr[i] > max2) {
            max2 = arr[i];
        }
    }

    free(arr);

    return max1 * max2;
}
