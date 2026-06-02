# LeetCode Solutions

This repository contains my solutions to LeetCode problems in C.

## Statistics

- Total Problems Solved: 1
- Language: C

## Solutions

| Problem No. | Problem Name | Difficulty |
|------------|-------------|------------|
| 2144 | Minimum Cost of Buying Candies With Discount | Easy |

## Folder Structure

```text
leetcode-solutions/
├── C/
│   └── 2144_Minimum_Cost_of_Buying_Candies_With_Discount.c
└── README.md
```

## Problem 2144: Minimum Cost of Buying Candies With Discount

### Approach
1. Sort the candies in descending order.
2. For every group of 3 candies, the cheapest candy is free.
3. Add the cost of all candies except every third candy.

### Time Complexity
- O(n²) using Bubble Sort

### Space Complexity
- O(1)
