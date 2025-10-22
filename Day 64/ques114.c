//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int freq[256] = {0};
    int left = 0, right = 0, maxLen = 0;
    
    while (s[right] != '\0') {
        freq[(int)s[right]]++;
        
        while (freq[(int)s[right]] > 1) {
            freq[(int)s[left]]--;
            left++;
        }
        
        int len = right - left + 1;
        if (len > maxLen)
            maxLen = len;
            
        right++;
    }
    
    return maxLen;
}

int main() {
    char s[100];
    scanf("%s", s);
    printf("%d", lengthOfLongestSubstring(s));
    return 0;
}