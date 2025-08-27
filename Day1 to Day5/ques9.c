// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>
#include <math.h>  // for pow() function

int main() {
    float principal1, rate1, time1;
    float principal2, rate2, time2;
    float si1, ci1, si2, ci2;

    // Input for first set
    printf("Enter Principal, Rate and Time for 1st input: ");
    scanf("%f %f %f", &principal1, &rate1, &time1);

    // Input for second set
    printf("Enter Principal, Rate and Time for 2nd input: ");
    scanf("%f %f %f", &principal2, &rate2, &time2);

    // Calculate Simple and Compound Interest for 1st input
    si1 = (principal1 * rate1 * time1) / 100.0;
    ci1 = principal1 * (pow((1 + rate1 / 100.0), time1) - 1);

    // Calculate Simple and Compound Interest for 2nd input
    si2 = (principal2 * rate2 * time2) / 100.0;
    ci2 = principal2 * (pow((1 + rate2 / 100.0), time2) - 1);

    // Display results
    printf("\n--- Results for 1st Input ---");
    printf("\nSimple Interest = %.2f", si1);
    printf("\nCompound Interest = %.2f", ci1);

    printf("\n\n--- Results for 2nd Input ---");
    printf("\nSimple Interest = %.2f", si2);
    printf("\nCompound Interest = %.2f\n", ci2);

    return 0;
}
