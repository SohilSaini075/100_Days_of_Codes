//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>
#include <string.h>

enum Menu { ADD, SUBTRACT, MULTIPLY };

int main() {
    char choice[20];
    int num1, num2;

    scanf("%s %d %d", choice, &num1, &num2);

    enum Menu option;

    if (strcmp(choice, "ADD") == 0)
        option = ADD;
    else if (strcmp(choice, "SUBTRACT") == 0)
        option = SUBTRACT;
    else if (strcmp(choice, "MULTIPLY") == 0)
        option = MULTIPLY;
    else {
        printf("Invalid choice\n");
        return 0;
    }

    switch (option) {
        case ADD:
            printf("%d\n", num1 + num2);
            break;
        case SUBTRACT:
            printf("%d\n", num1 - num2);
            break;
        case MULTIPLY:
            printf("%d\n", num1 * num2);
            break;
        default:
            printf("Invalid option\n");
    }

    return 0;
}