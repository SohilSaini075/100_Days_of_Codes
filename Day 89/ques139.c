//Q139: Show that enums store integers by printing assigned values.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/

#include <stdio.h>

typedef enum {
    SUCCESS,   
    FAILURE,   
    TIMEOUT    
} Status;

int main(void) {
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n",
           (int)SUCCESS, (int)FAILURE, (int)TIMEOUT);
    return 0;
}