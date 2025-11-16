//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/

#include <stdio.h>

enum Colors { RED, YELLOW, GREEN };

int main() {
    enum Colors c;

    for (c = RED; c <= GREEN; c++) {
        switch(c) {
            case RED:
                printf("RED=%d\n", c);
                break;
            case YELLOW:
                printf("YELLOW=%d\n", c);
                break;
            case GREEN:
                printf("GREEN=%d\n", c);
                break;
        }
    }

    return 0;
}