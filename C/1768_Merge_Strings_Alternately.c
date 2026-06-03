/*
Author: Naman Kumar
Problem: LeetCode 1768 - Merge Strings Alternately
Language: C

Approach:
Traverse both strings simultaneously and add characters
alternately to the result string. Once one string is
exhausted, append the remaining characters of the longer
string.

Time Complexity: O(n + m)
Space Complexity: O(n + m)
*/

#include <string.h>
#include <stdlib.h>

char * mergeAlternately(char * word1, char * word2){

    char *newstr = malloc(strlen(word1) + strlen(word2) + 1);

    int maxlen = 0;
    int minlen = 0;
    int count = 0;

    if(strlen(word1) > strlen(word2)){
        maxlen = strlen(word1);
        minlen = strlen(word2);

        for(int i = 0; i < minlen; i++){
            newstr[count] = word1[i];
            newstr[count + 1] = word2[i];
            count += 2;
        }

        for(int j = minlen; j < maxlen; j++){
            newstr[count] = word1[j];
            count++;
        }
    }
    else{
        maxlen = strlen(word2);
        minlen = strlen(word1);

        for(int i = 0; i < minlen; i++){
            newstr[count] = word1[i];
            newstr[count + 1] = word2[i];
            count += 2;
        }

        for(int j = minlen; j < maxlen; j++){
            newstr[count] = word2[j];
            count++;
        }
    }

    newstr[count] = '\0';

    return newstr;
}
