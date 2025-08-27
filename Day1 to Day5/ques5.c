// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

int main() {
    float c1, c2, f1, f2;

    printf("Enter first temperature in Celsius: ");
    scanf("%f", &c1);

    printf("Enter second temperature in Celsius: ");
    scanf("%f", &c2);

    // Conversion formula: F = (C * 9/5) + 32
    f1 = (c1 * 9 / 5) + 32;
    f2 = (c2 * 9 / 5) + 32;

    printf("\n%.2f Celsius = %.2f Fahrenheit\n", c1, f1);
    printf("%.2f Celsius = %.2f Fahrenheit\n", c2, f2);

    return 0;
}
