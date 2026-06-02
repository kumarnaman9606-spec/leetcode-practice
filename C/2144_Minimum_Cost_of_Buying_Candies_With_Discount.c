/*
Author: Naman Kumar
Problem: LeetCode 2144 - Minimum Cost of Buying Candies With Discount
Language: C

Approach:
1. Sort candies in descending order.
2. Every third candy is free.
3. Sum the cost of all candies except the free ones.

Time Complexity: O(n²)
Space Complexity: O(1)
*/

int minimumCost(int* cost, int costSize) {
    for(int i = 0; i < costSize - 1; i++) {
        for(int j = 0; j < costSize - i - 1; j++) {
            if(cost[j] < cost[j + 1]) {
                int temp = cost[j];
                cost[j] = cost[j + 1];
                cost[j + 1] = temp;
            }
        }
    }

    int sum = 0;

    for(int i = 0; i < costSize; i++) {
        if((i + 1) % 3 != 0) {
            sum += cost[i];
        }
    }

    return sum;
}
