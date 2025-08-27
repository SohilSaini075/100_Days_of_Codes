//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include <stdio.h>
#define PI 3.14159

int main() {
    float r1, r2, area1, area2, circ1, circ2;

    printf("Enter first radius: ");
    scanf("%f", &r1);

    printf("Enter second radius: ");
    scanf("%f", &r2);

    area1 = PI * r1 * r1;
    circ1 = 2 * PI * r1;

    area2 = PI * r2 * r2;
    circ2 = 2 * PI * r2;

    printf("\nFor radius %.2f:\n", r1);
    printf("Area = %.2f\n", area1);
    printf("Circumference = %.2f\n", circ1);

    printf("\nFor radius %.2f:\n", r2);
    printf("Area = %.2f\n", area2);
    printf("Circumference = %.2f\n", circ2);

    return 0;
}

