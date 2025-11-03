//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/


#include <stdio.h>

int main() {
    FILE *file;
    char filename[] = "data.txt";
    char text[200];

    file = fopen(filename, "a");
    if (file == NULL) {
        printf("File not found.\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(file, "\n%s", text);
    fclose(file);

    printf("File updated successfully with appended text.\n");
    return 0;
}