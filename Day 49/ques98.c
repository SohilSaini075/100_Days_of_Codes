//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    char *word = strtok(name, " ");
    char lastWord[50];

    while (word != NULL) {
        strcpy(lastWord, word);
        word = strtok(NULL, " ");
    }

    word = strtok(name, " ");
    
    while (word != NULL) {
        if (strcmp(word, lastWord) == 0)
            break;
        printf("%c.", word[0]);
        word = strtok(NULL, " ");
    }
    printf(" %s\n", lastWord);

    return 0;
}