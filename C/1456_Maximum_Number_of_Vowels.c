/*
1456. Maximum Number of Vowels in a Substring of Given Length

Difficulty: Medium

Approach:
- Use the Sliding Window technique.
- Count the vowels in the first window of size k.
- Slide the window one character at a time:
  - Add the new character entering the window.
  - Remove the character leaving the window.
- Keep track of the maximum number of vowels found.

Time Complexity: O(n)
Space Complexity: O(1)
*/

int maxVowels(char* s, int k) {
    int count=0;

    for(int i=0;i<k;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count++;
        }
    }

    int j=k;
    int x=0;
    int maxc=count;
    while(s[j]!='\0'){
        if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
            count++;
        }
        if(s[x]=='a'||s[x]=='e'||s[x]=='i'||s[x]=='o'||s[x]=='u'){
            count--;
        }

        if(count>maxc){
            maxc=count;
        }
        x++;
        j++;
    }
    return maxc;
}
