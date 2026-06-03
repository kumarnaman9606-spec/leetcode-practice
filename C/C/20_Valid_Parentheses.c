/*
Author: Naman Kumar
Problem: LeetCode 20 - Valid Parentheses
Language: C

Approach:
Use a stack to keep track of opening brackets.
Whenever a closing bracket is encountered, check whether it
matches the most recent opening bracket.
If it does, pop the stack. Otherwise, return false.
The string is valid only if the stack is empty at the end.

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <stdbool.h>

bool isValid(char* s) {
    char stack[10000];
    int top = -1;

    int i = 0;

    while(s[i] != '\0') {

        if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[++top] = s[i];
        }

        else if(s[i] == ')') {
            if(top == -1 || stack[top] != '(')
                return false;
            top--;
        }

        else if(s[i] == ']') {
            if(top == -1 || stack[top] != '[')
                return false;
            top--;
        }

        else if(s[i] == '}') {
            if(top == -1 || stack[top] != '{')
                return false;
            top--;
        }

        i++;
    }

    return top == -1;
}
