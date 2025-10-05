//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int i, j = 0;
    
    printf("Enter a string: ");
    gets(str);
    
    for (i = 0; str[i] != '\0'; i++) {
    
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    
    printf("Output: %s\n", result);
    return 0;
}