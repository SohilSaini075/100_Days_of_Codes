// Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

#include <stdio.h>

int main() {
    int n1, n2, sum1, sum2;

    printf("Enter first number (n1): ");
    scanf("%d", &n1);
    printf("Enter second number (n2): ");
    scanf("%d", &n2);

    sum1 = n1 * (n1 + 1) / 2;
    sum2 = n2 * (n2 + 1) / 2;

    printf("Sum of first %d natural numbers = %d\n", n1, sum1);
    printf("Sum of first %d natural numbers = %d\n", n2, sum2);

    return 0;
}
