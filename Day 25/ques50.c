/*
Q50: Write a program to print the following pattern:
*****
  ****
    ***
      **
        *
*/

#include <stdio.h>

int main() {
    int i, j, n = 5;

    for(i = 0; i < n; i++) {
    
        for(j = 0; j < i * 2; j++) {
            printf(" ");
        }
    
        for(j = 0; j < n - i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}