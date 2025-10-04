//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch)
            count++;
    }

    printf("%d\n", count);
    return 0;
}