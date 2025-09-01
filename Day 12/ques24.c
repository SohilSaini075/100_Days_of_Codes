// Q24: Write a program to calculate an electricity bill based on units consumed.

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200

*/

#include <stdio.h>

int main() {
    int units;
    float bill = 0.0;

    printf("Enter the units consumed: ");
    scanf("%d", &units);

    if (units <= 50) {
        bill = units * 5.0; 
    } else if (units <= 150) {
 
        bill = (50 * 5.0) + ((units - 50) * 7.0);
    } else {
        bill = (50 * 5.0) + (100 * 7.0) + ((units - 150) * 12.5);
    }

    printf("Bill: ₹%.0f\n", bill); 
    return 0;
}

