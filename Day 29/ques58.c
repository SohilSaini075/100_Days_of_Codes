// Q58: Find the maximum and minimum element in an array.

#include <stdio.h>

int main() {
    int arr[] = {5, 2, 9, 1, 4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max, min;

    if (n > 0) {
        max = arr[0];
        min = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
            if (arr[i] < min) {
                min = arr[i];
            }
        }

        printf("Max=%d, Min=%d\n", max, min);
    } else {
        printf("The array is empty.\n");
    }

    return 0;
}
