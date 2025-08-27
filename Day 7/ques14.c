// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>

int main() {
    char ch1, ch2;

    printf("Enter first character: ");
    scanf(" %c", &ch1);
    printf("Enter second character: ");
    scanf(" %c", &ch2);

    if ((ch1 >= 'a' && ch1 <= 'z') || (ch1 >= 'A' && ch1 <= 'Z')) {
        if (ch1 == 'a' || ch1 == 'e' || ch1 == 'i' || ch1 == 'o' || ch1 == 'u' ||
            ch1 == 'A' || ch1 == 'E' || ch1 == 'I' || ch1 == 'O' || ch1 == 'U') {
            printf("%c is a vowel.\n", ch1);
        } else {
            printf("%c is a consonant.\n", ch1);
        }
    } else {
        printf("%c is not a valid alphabet.\n", ch1);
    }

    if ((ch2 >= 'a' && ch2 <= 'z') || (ch2 >= 'A' && ch2 <= 'Z')) {
        if (ch2 == 'a' || ch2 == 'e' || ch2 == 'i' || ch2 == 'o' || ch2 == 'u' ||
            ch2 == 'A' || ch2 == 'E' || ch2 == 'I' || ch2 == 'O' || ch2 == 'U') {
            printf("%c is a vowel.\n", ch2);
        } else {
            printf("%c is a consonant.\n", ch2);
        }
    } else {
        printf("%c is not a valid alphabet.\n", ch2);
    }

    return 0;
}
