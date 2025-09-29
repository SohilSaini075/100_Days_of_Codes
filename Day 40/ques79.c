//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int mat[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int d = 0; d < rows + cols - 1; d++) {
        int row = (d < cols) ? 0 : d - cols + 1;
        int col = (d < cols) ? d : cols - 1;

        while (row < rows && col >= 0) {
            printf("%d ", mat[row][col]);
            row++;
            col--;
        }
    }

    return 0;
}