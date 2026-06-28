/*
Problem: 13. Roman to Integer
Difficulty: Easy

Approach:
- Create a helper function to return the integer value of each Roman numeral.
- Traverse the string from left to right.
- Compare the value of the current character with the next character.
- If the current value is smaller than the next value, subtract it from the answer.
- Otherwise, add it to the answer.
- Return the final integer value.

Time Complexity: O(n)
Space Complexity: O(1)

Where:
n = length of the Roman numeral string
*/

int value(char c) {

    switch(c){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }

    return 0;
}

int romanToInt(char* s) {

    int sum = 0;
    int i = 0;

    while(s[i] != '\0'){

        int curr = value(s[i]);
        int next = value(s[i + 1]);

        if(curr < next)
            sum -= curr;
        else
            sum += curr;

        i++;
    }

    return sum;
}
