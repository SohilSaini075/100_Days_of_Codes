//Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};
void printEmployeeDetails(struct Employee emp) {
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n", 
           emp.name, emp.id, emp.joiningDate.day, 
           emp.joiningDate.month, emp.joiningDate.year);
}
int main() {
    struct Employee emp;
    printf("Enter Employee Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = 0;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &emp.joiningDate.day, 
          &emp.joiningDate.month, &emp.joiningDate.year);
    printEmployeeDetails(emp);
    
    return 0;
}