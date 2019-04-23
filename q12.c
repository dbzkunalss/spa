#include <stdio.h>

void read_matrices(int mat1[][10], int mat2[][10], int r1, int c1, int r2, int c2)
{
    int i, j;
    printf("\nEnter elements of matrix 1:\n");
    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c1; ++j)
        {
            printf("Enter elements at position %d %d: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter elements of matrix 2:\n");
    for (i = 0; i < r2; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            printf("Enter elements at position %d %d: ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }
}

void multiply(int mat1[][10], int mat2[][10], int mult[][10], int r1, int c1, int r2, int c2)
{
    int i, j, k;

    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            mult[i][j] = 0;
        }
    }

    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            for (k = 0; k < c1; ++k)
            {
                mult[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void display_matrices(int mult[][10], int r1, int c2)
{
    int i, j;
    printf("\nOutput Matrix:\n");
    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            printf("%d  ", mult[i][j]);
            if (j == c2 - 1)
                printf("\n\n");
        }
    }
}

int main()
{
    int mat1[10][10], mat2[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

    printf("Enter rows and column for first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and column for second matrix: ");
    scanf("%d %d", &r2, &c2);

    while (c1 != r2)
    {
        printf("Error! column of first matrix not equal to row of second.\n");
        printf("Enter rows and column for first matrix: ");
        scanf("%d%d", &r1, &c1);
        printf("Enter rows and column for second matrix: ");
        scanf("%d%d", &r2, &c2);
    }

    read_matrices(mat1, mat2, r1, c1, r2, c2);

    multiply(mat1, mat2, mult, r1, c1, r2, c2);

    display_matrices(mult, r1, c2);

    return 0;
}