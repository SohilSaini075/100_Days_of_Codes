// Q23: Write a program to calculate a library fine based on late days.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/

#include <stdio.h>

int main() {
    int days_late;
    int fine = 0;

    printf("Enter the number of days the book is late: ");
    scanf("%d", &days_late);

    if (days_late <= 0) {
        printf("No fine.\n");
    } else if (days_late <= 5) {
        fine = days_late * 2;
        printf("Fine ₹%d\n", fine);
    } else if (days_late <= 15) {
        
        fine = (5 * 2) + ((days_late - 5) * 4);
        printf("Fine ₹%d\n", fine);
    } else if (days_late <= 30) {
     
        fine = (5 * 2) + (10 * 4) + ((days_late - 15) * 6);
        printf("Fine ₹%d\n", fine);
    } else {
        printf("Membership Cancelled\n");
    }

    return 0;
}
