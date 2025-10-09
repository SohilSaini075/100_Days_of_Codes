//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    scanf("%s", date);

    char day[3], month[3], year[5];

    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strcpy(year, date + 6);

    if (strcmp(month, "04") == 0)
        printf("%s-Apr-%s", day, year);
    else
        printf("%s-%s-%s", day, month, year);

    return 0;
}