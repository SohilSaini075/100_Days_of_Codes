//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

int main() {
    int n, arr[100], i, element, pos;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &element);

    pos = n;
    for (i = 0; i < n; i++) {
        if (arr[i] > element) {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    n++;

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}