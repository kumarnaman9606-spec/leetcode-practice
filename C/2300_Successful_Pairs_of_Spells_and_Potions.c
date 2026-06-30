/*
Problem: 2300. Successful Pairs of Spells and Potions
Difficulty: Medium

Approach:
- Sort the potions array in ascending order.
- For each spell, use binary search to find the first potion
  that forms a successful pair.
- All potions after that index will also form successful pairs
  because the array is sorted.
- Store the number of successful pairs for each spell in the
  result array.

Time Complexity: O(m log m + n log m)
Space Complexity: O(1)

Where:
n = number of spells
m = number of potions
*/

#include <stdlib.h>

int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* successfulPairs(int* spells, int spellsSize,
                     int* potions, int potionsSize,
                     long long success, int* returnSize) {

    qsort(potions, potionsSize, sizeof(int), compare);

    int *ans = (int*)malloc(sizeof(int) * spellsSize);

    *returnSize = spellsSize;

    for(int i = 0; i < spellsSize; i++){

        int low = 0;
        int high = potionsSize - 1;
        int first = potionsSize;

        while(low <= high){

            int mid = low + (high - low) / 2;

            if((long long)spells[i] * potions[mid] >= success){
                first = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        ans[i] = potionsSize - first;
    }

    return ans;
}
