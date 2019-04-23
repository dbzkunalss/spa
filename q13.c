#include <stdio.h>

int fact(int num)
{
    if (num != 0)
    {
        return num * fact(num - 1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    num = fact(num);
    printf("The factorial is %d", num);
    return 0;
}