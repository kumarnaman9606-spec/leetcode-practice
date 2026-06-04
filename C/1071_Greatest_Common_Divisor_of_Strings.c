/*
    LeetCode 1071 - Greatest Common Divisor of Strings

    Approach:
    1. Check whether str1 + str2 is equal to str2 + str1.
       If not, there is no common divisor string.
    2. Find the GCD of the lengths of the two strings using
       the Euclidean Algorithm.
    3. The first gcd(len1, len2) characters of str1 form
       the greatest common divisor string.

    Time Complexity: O(n + m)
    Space Complexity: O(n + m)

    Author: Naman Kumar
*/

#include <string.h>
#include <stdlib.h>

int gcd(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

char* gcdOfStrings(char* str1, char* str2) {

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    char s1s2[2000];
    char s2s1[2000];

    strcpy(s1s2, str1);
    strcat(s1s2, str2);

    strcpy(s2s1, str2);
    strcat(s2s1, str1);

    if(strcmp(s1s2, s2s1) != 0){
        char *result = (char*)malloc(1);
        result[0] = '\0';
        return result;
    }

    int g = gcd(len1, len2);

    char *result = (char*)malloc(g + 1);
    strncpy(result, str1, g);
    result[g] = '\0';

    return result;
}
