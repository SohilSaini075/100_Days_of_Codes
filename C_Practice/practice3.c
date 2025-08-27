// WAP to check if a trangle is valid or not. If a validity is established, do check if the triangle is isosceles, equilateral, right - angled or scalene . The input from the user

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The triangle is VALID.\n");

        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        }
        
        else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        }
    
        else {
            printf("The triangle is Scalene.\n");
        }

        if (fabs(a * a + b * b - c * c) < 0.0001 ||
            fabs(a * a + c * c - b * b) < 0.0001 ||
            fabs(b * b + c * c - a * a) < 0.0001) {
            printf("The triangle is also Right-angled.\n");
        }
    } else {
        printf("The triangle is NOT VALID.\n");
    }

    return 0;
}
