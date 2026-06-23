/*
Problem: 443. String Compression
Difficulty: Medium

Approach:
- Traverse the array and count consecutive occurrences of each character.
- Store each character once in the compressed array.
- If the count is greater than 1, convert the count to its string representation
  and store each digit separately.
- Copy the compressed result back into the original array.
- Return the length of the compressed array.

Time Complexity: O(n)
Space Complexity: O(n)

Where:
n = charsSize
*/

#include <stdlib.h>
#include <stdio.h>

void input(char* s, int sindex, char input){
    s[sindex] = input;
}

int compress(char* chars, int charsSize) {

    char* s = (char*)malloc(sizeof(char) * (charsSize * 2));
    int sindex = 0;
    int count = 1;
    char c[20];

    if(charsSize == 1){
        return 1;
    }

    for(int i = 0; i < charsSize - 1; i++){

        if(chars[i] == chars[i + 1]){
            count++;
        }
        else{

            input(s, sindex, chars[i]);
            sindex++;

            if(count > 1){

                sprintf(c, "%d", count);

                int k = 0;
                while(c[k] != '\0'){
                    input(s, sindex, c[k]);
                    sindex++;
                    k++;
                }
            }

            count = 1;
        }
    }

    input(s, sindex, chars[charsSize - 1]);
    sindex++;

    if(count > 1){

        sprintf(c, "%d", count);

        int k = 0;
        while(c[k] != '\0'){
            input(s, sindex, c[k]);
            sindex++;
            k++;
        }
    }

    for(int i = 0; i < sindex; i++){
        chars[i] = s[i];
    }

    free(s);

    return sindex;
}
