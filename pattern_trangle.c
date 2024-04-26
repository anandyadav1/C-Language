#include <stdio.h>
int main()
{
    int i, j, k, n, l;
    printf("Enter the any number\n");
    scanf(" %d", &n);
    for (i = 1; i <= n; i++)
    {
        for (k = n; k > i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
            
        {
            printf("*");
        }
        for(l=j-2; l>0; l--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}