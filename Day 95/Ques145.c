//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/

#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
struct Student {
    char name[MAX_NAME_LENGTH];
    int roll_no;
    int marks;
};
struct Student get_top_student(struct Student students[], int count) {
    struct Student top_student = students[0];
    for (int i = 1; i < count; i++) {
        if (students[i].marks > top_student.marks) {
            top_student = students[i];
        }
    }
    return top_student;
}
int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number and marks of student %d: ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }
    struct Student top_student = get_top_student(students, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top_student.name, top_student.roll_no, top_student.marks);
    return 0;
}