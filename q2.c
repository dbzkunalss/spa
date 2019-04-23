#include <stdio.h>

int main()
{

    float num1, num2;

    printf("\n Please enter first number: ");

    scanf("%f", &num1);

    printf("\n Please enter second number: ");

    scanf("%f", &num2);

    printf(" \n Addition: %.2f + %.2f = %.2f \n", num1, num2, num1 + num2);

    printf(" \n Subtraction: %.2f - %.2f = %.2f \n", num1, num2, num1 - num2);

    printf(" \n Multiplication: %.2f * %.2f = %.2f \n", num1, num2, num1 * num2);

    printf(" \n Division: %.2f / %.2f = %.2f \n", num1, num2, num1 / num2);
    return 0;
}