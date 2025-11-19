//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/

#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
struct Student {
    char name[MAX_NAME_LENGTH];
    int roll_no;
    int marks;
};

int main() {
    struct Student student;

    printf("Enter Name: ");
    fgets(student.name, MAX_NAME_LENGTH, stdin);
    student.name[strcspn(student.name, "\n")] = 0;

    printf("Enter Roll No: ");
    scanf("%d", &student.roll_no);

    printf("Enter Marks: ");
    scanf("%d", &student.marks);

    printf("Name: %s | Roll: %d | Marks: %d\n", student.name, student.roll_no, student.marks);

    return 0;
}