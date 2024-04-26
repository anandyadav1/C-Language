#include <stdio.h>
int main()
{
    int a[3][3], i, j, sum = 0;
    printf("Enter the matrix element:-\n");
    for (i = 0; i < 3; i++)
    {
        for (j=0;j<3;j++)
        {
            printf("Enter the element %d,%d\n",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum = sum + a[i][j];
            }
        }
        printf("%d", sum);
    } 
    return 0;
}
