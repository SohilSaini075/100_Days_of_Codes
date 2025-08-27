// Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/

#include <stdio.h>

int main() {
    int year1, year2, year3;

    printf("Enter three years: ");
    scanf("%d %d %d", &year1, &year2, &year3);

    if (year1 % 400 == 0) {
        printf("%d is a leap year.\n", year1);
    }
    else if (year1 % 100 == 0) {
        printf("%d is not a leap year.\n", year1);
    }
    else if (year1 % 4 == 0) {
        printf("%d is a leap year.\n", year1);
    }
    else {
        printf("%d is not a leap year.\n", year1);
    }

    if (year2 % 400 == 0) {
        printf("%d is a leap year.\n", year2);
    }
    else if (year2 % 100 == 0) {
        printf("%d is not a leap year.\n", year2);
    }
    else if (year2 % 4 == 0) {
        printf("%d is a leap year.\n", year2);
    }
    else {
        printf("%d is not a leap year.\n", year2);
    }

    if (year3 % 400 == 0) {
        printf("%d is a leap year.\n", year3);
    }
    else if (year3 % 100 == 0) {
        printf("%d is not a leap year.\n", year3);
    }
    else if (year3 % 4 == 0) {
        printf("%d is a leap year.\n", year3);
    }
    else {
        printf("%d is not a leap year.\n", year3);
    }

    return 0;
}
