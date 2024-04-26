#include <stdio.h>
int main()
{
    int a[2][3], b[3][4], c[2][4], i, j, k;
    printf("Enter the matrix A:-\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter %d,%d Elements of mata : ", i, j);
            scanf(" %d", &a[i][j]);
        }
    }
    printf("Enter the matrix B:-\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter %d,%d Element of matb:", i, j);
            scanf(" %d", &b[i][j]);
        }
    }
    printf("Multiplication of two mmatrix C = A * B :-\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                c[i][j] = (c[i][j] + (a[i][j] * b[i][j]));
            }
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}