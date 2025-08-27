// WAP using ternary operator , the user should input length and breadth of a rectangle , one has to find out which rectangle has the highest perimeter . Minimum number of rectangle should be three.

#include <stdio.h>

int main() {
    int l1, b1, l2, b2, l3, b3;
    int p1, p2, p3, maxPerimeter;

    printf("Enter length and breadth of rectangle 1: ");
    scanf("%d %d", &l1, &b1);

    printf("Enter length and breadth of rectangle 2: ");
    scanf("%d %d", &l2, &b2);

    printf("Enter length and breadth of rectangle 3: ");
    scanf("%d %d", &l3, &b3);

    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);

    maxPerimeter = (p1 > p2) ? ((p1 > p3) ? p1 : p3) : ((p2 > p3) ? p2 : p3);

    if (maxPerimeter == p1)
        printf("Rectangle 1 has the highest perimeter = %d\n", p1);
    else if (maxPerimeter == p2)
        printf("Rectangle 2 has the highest perimeter = %d\n", p2);
    else
        printf("Rectangle 3 has the highest perimeter = %d\n", p3);

    return 0;
}
