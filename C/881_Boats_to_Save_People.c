/**
 * LeetCode 881 - Boats to Save People
 *
 * Time Complexity: O(n log n)
 * Space Complexity: O(1)
 *
 * Approach:
 * - Sort the array in non-decreasing order.
 * - Use two pointers:
 *   - left points to the lightest person.
 *   - right points to the heaviest person.
 * - The heaviest person always takes a boat.
 * - If the lightest person can fit with the heaviest, pair them.
 * - Otherwise, the heaviest person goes alone.
 * - Count one boat for each iteration.
 */

#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int numRescueBoats(int* people, int peopleSize, int limit) {
    qsort(people, peopleSize, sizeof(int), compare);

    int left = 0;
    int right = peopleSize - 1;
    int boats = 0;

    while (left <= right) {
        if (people[left] + people[right] <= limit) {
            left++;
        }
        right--;
        boats++;
    }

    return boats;
}
