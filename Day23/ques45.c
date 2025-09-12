//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    int numerator = 2;
    int denominator = 3;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;
        denominator += 4;
    }

    printf("Approximate sum: %.2lf\n", sum);

    return 0;
}
