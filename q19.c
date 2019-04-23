#include <stdio.h>

void call_by_value(int a, int b)
{
    int temp;
    temp = b;
    b = a;
    a = temp;
}
void call_by_reference(int *a, int *b)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}
 
int main()
{
    int x, y, x1, y1;
    printf("Enter the value of x and y\n");
    scanf("%d%d", &x, &y);
    x1 = x;
    y1 = y;
    printf("Before Swapping by value\nx = %d\ny = %d\n", x, y);
    call_by_value(x, y);
    printf("After Swapping by value\nx = %d\ny = %d\n", x, y);
    printf("Before Swapping by reference\nx = %d\ny = %d\n", x1, y1);
    call_by_reference(&x1, &y1);
    printf("After Swapping by reference\nx = %d\ny = %d\n", x1, y1);
    return 0;
}
