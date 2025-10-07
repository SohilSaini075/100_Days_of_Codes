//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    printf("Enter a sentence: ");
    gets(str);

    char *wordStart = str;
    char *temp = str;

    while (*temp) {
        if (*temp == ' ') {
            reverseWord(wordStart, temp - 1);
            wordStart = temp + 1;
        }
        temp++;
    }

    reverseWord(wordStart, temp - 1);

    printf("Output: %s\n", str);
    return 0;
}