#include <stdio.h>

int main() {
    int a, b, *c, *d, sum;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    c = &a;
    d = &b;
    sum = *c + *d;
    printf("%d + %d = %d", a, b, sum);
    return 0;
}