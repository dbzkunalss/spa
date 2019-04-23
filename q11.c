#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, area, permeter, s;
    printf("Enter the sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if( a + b > c && b + c > a && a + c > b) {
        permeter = a + b + c;
        s = permeter / 2;
        area = sqrt(s * (s - a)* (s - c)* (s - c));
        printf("Area = %.3f\nPermieter = %.3f", area, permeter);

    } else {
        printf("The Triangle is not valid.");
    }
    return 0;
}