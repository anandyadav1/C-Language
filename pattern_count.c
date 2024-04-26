#include <stdio.h>
int main()
{
    int i, n, j, count=0;
    printf("Enter the any number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
    return 0;
}