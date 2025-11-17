//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>
#include <string.h>
enum Status { SUCCESS, FAILURE, TIMEOUT };
int main() {
    char statusStr[10];
    scanf("%s", statusStr);

    enum Status stat;

    if (strcmp(statusStr, "SUCCESS") == 0)
        stat = SUCCESS;
    else if (strcmp(statusStr, "FAILURE") == 0)
        stat = FAILURE;
    else if (strcmp(statusStr, "TIMEOUT") == 0)
        stat = TIMEOUT;
    else {
        printf("Invalid status\n");
        return 0;
    }

    switch (stat) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Unknown status\n");
    }

    return 0;
}