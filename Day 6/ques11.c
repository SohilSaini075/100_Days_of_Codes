// Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 % 2 == 0) {
        printf("%d is Even.\n", num1);
    } else {
        printf("%d is Odd.\n", num1);
    }

    if (num2 % 2 == 0) {
        printf("%d is Even.\n", num2);
    } else {
        printf("%d is Odd.\n", num2);
    }

    return 0;
}
