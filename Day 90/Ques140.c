//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>
#include <string.h>
enum Gender {
    MALE,
    FEMALE,
    OTHER
};
struct Person {
    enum Gender gender; 
};
void printGender(struct Person p) {
    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown Gender\n");
    }
}
int main() {
    struct Person person;
    char input[10];
    printf("Enter Gender (MALE/FEMALE/OTHER): ");
    scanf("%s", input);
    if (strcmp(input, "MALE") == 0) {
        person.gender = MALE;
    } else if (strcmp(input, "FEMALE") == 0)        {
        person.gender = FEMALE;
    } else if (strcmp(input, "OTHER") == 0) {
        person.gender = OTHER;
    } else {
        printf("Invalid input\n");
        return 1;
    }
    printGender(person);
    return 0;
}

