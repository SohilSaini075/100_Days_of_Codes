/*Q3: Sum and Difference of Two Numbers
Link: https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true
*/

#include <stdio.h>

int main() {
    int a, b;
    float c, d;

    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    int int_sum = a + b;
    int int_diff = a - b;

    float float_sum = c + d;
    float float_diff = c - d;

    printf("%d %d\n", int_sum, int_diff);
    printf("%.1f %.1f\n", float_sum, float_diff);

    return 0;
}
