#include <stdio.h>
int fib(int terms, int a, int b)
{
    if (terms == 0)
    {
        return a;
    }
    if (terms == 1)
    {
        return b;
    }
    else
    {
        return fib(terms - 1, b, a + b);
    }
}
int main()
{
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    terms = fib(terms, 0, 1);
    printf("%d", terms);
    return 0;
}