// Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

#include <stdio.h>

int main() {
    int n; 
    int sum = 0;
    int i; 

    printf("Enter the number of odd terms (n): ");
    scanf("%d", &n);


    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1); 
    }

    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}
