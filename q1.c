#include <stdio.h>
#include <math.h>

int main() {
    float num;
    int num_int;
    printf("Enter a number: ");
    scanf("%f", &num);
    num_int = num;
    num_int = sqrt(num_int);
    num = sqrt(num);
    if (num_int == num) {
        printf("Number is a perfect square.");
    } else {
        printf("Number is not a perfect square.");
    }
    return 0;

}