// wap to check if three points (x1 , y1) , (x2,y2) and (x3,y3) are collinear or not

#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;

    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Enter coordinates of third point (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    if ((x2 - x1) * (y3 - y1) == (y2 - y1) * (x3 - x1))
        printf("The points are collinear.\n");
    else
        printf("The points are NOT collinear.\n");

    return 0;
}
