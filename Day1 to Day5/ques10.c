// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>

int main() {
    int sec1, sec2;
    int h1, m1, s1;
    int h2, m2, s2;

    printf("Enter first time in seconds: ");
    scanf("%d", &sec1);

    printf("Enter second time in seconds: ");
    scanf("%d", &sec2);

    h1 = sec1 / 3600;
    m1 = (sec1 % 3600) / 60;
    s1 = sec1 % 60;

    h2 = sec2 / 3600;
    m2 = (sec2 % 3600) / 60;
    s2 = sec2 % 60;

    printf("First time: %02d:%02d:%02d\n", h1, m1, s1);
    printf("Second time: %02d:%02d:%02d\n", h2, m2, s2);

    return 0;
}
