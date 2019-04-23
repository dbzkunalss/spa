#include <stdio.h>
void transpose(int a[100][100], int n);
int main()
{
    int a[100][100];
    int n, i, j;
    printf("Enter row/coloum for square matrix : "); 
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter element for %d row and %d coloum :", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nOriginal matrix :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    transpose(a, n);
    return 0;
}
void transpose(int a[100][100], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            temp = a[j][i];
            a[j][i] = a[i][j];
            a[i][j] = temp;
        }
    }
    printf("\nTranspose matrix :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}