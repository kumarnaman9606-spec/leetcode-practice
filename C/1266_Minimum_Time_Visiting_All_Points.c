/*
Author: Naman Kumar
Problem: LeetCode 1266 - Minimum Time Visiting All Points
Language: C

Approach:
For two points (x1, y1) and (x2, y2), the minimum time required
is max(|x1 - x2|, |y1 - y2|) because diagonal moves are allowed.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <stdlib.h>

int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize) {
    int time = 0;

    for(int i = 0; i < pointsSize - 1; i++) {
        int x = abs(points[i][0] - points[i + 1][0]);
        int y = abs(points[i][1] - points[i + 1][1]);

        if(x > y)
            time += x;
        else
            time += y;
    }

    return time;
}
